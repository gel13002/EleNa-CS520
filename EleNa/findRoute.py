import sys
sys.path.insert(0 ,'../')

from queue import PriorityQueue
from googlemaps import Client
from googlemaps.elevation import elevation
from EleNa.getElevation import getLocation
from EleNa.makeNodes import makeGraph, closestNode
from OSMLogic.intersections import getFullNeighborsInfo, plotMap

# initialize google map client
gmaps = Client(key='AIzaSyB6vHx97QpX_47VszFXIucfE-H_8xrbLWc')

def findRoute(startAddr, endAddr, variance, highest):
    """
    Interface for UI and backend
    :param startAddr: starting address
    :type startAddr: str
    :param endAddr: destination address
    :type endAddr: str
    :param variance: how many variance is tolerable
    :type variance: float
    :param highest: user option, highest elevation gain or lowest elevation gain
    :type highest: bool
    :return:
    """
    start = getLocation(gmaps, startAddr)
    end = getLocation(gmaps, endAddr)
    locationsAndDistances = getFullNeighborsInfo(startAddr, endAddr, variance)
    graph = makeGraph(locationsAndDistances)
    # cloest point to start/end in this region
    startPos = closestNode(start, graph)
    endPos = closestNode(end, graph)
    route, elevGain = optimalElevGain(graph[startPos], graph[endPos], variance, highest)
    latitudes = [node.latitude for node in route]
    longitudes = [node.longitude for node in route]
    plotMap((latitudes, longitudes))
    return elevGain

def optimalElevGain(start, goal, variance, highest = False):
    """
    implementation of A* algorithm
    return the path with highest/lowest elevation gain along the path
    :param start: start point
    :type start: Node
    :param goal: destination
    :type: goal: Node
    :param variance: how many variance is tolerable, should be > 1
    :type variance: float
    :param highest: user option, highest elevation gain or lowest
    :type: highest: Boolean
    :return: latitudes, longitudes, elevation gain
    """
    # shortest distance between start and goal, calculated by google map directions
    shortestDistance = getDistance(gmaps, start, goal)
    maxDistance = variance*shortestDistance
    # set of points that are evaluated
    closedSet = set()
    # maps points to distance from start to current node
    # if a shorter distance is found for a point in closedSet,
    #  move the point back to openSet
    distances = {start:0}
    # set of currently discovered points
    openSet = set()
    openSet.add(start)
    # maps point to point
    # cameFrom[i] = j means shortest path from start to i reaches i directly from j
    cameFrom = dict()
    # dict, gScore[n] is the cost of going from start to n, default value 0
    gScore = {}
    gScore[start] = 0   # cost from start to start is 0
    # For each point, the total cost of getting from the start point to the goal
    # by passing by that point. That value is partly known, partly heuristic.
    fScore = PriorityQueue()
    fScore.put((costEstimate(start, goal, highest), distances[start], start))
    path = []
    while openSet:
        score, distance, currNode = fScore.get()
        if currNode == goal:
            route = reconstructPath(cameFrom, start, currNode)
            latitudes = [node.latitude for node in route]
            longitudes = [node.longitude for node in route]
            if highest:
                return latitudes, longitudes, -round(score)
            return latitudes, longitudes, round(score)
        if not currNode in openSet:
            continue
        openSet.remove(currNode)
        closedSet.add(currNode)

        for neighbor, dist in currNode.neighbors.items():
            if neighbor in closedSet:
                if dist + distances[currNode] < distances[neighbor]:
                    # find a closer route, give the node another chance by putting it back to openset
                    currgScore = gScore.get(currNode, float('inf')) + costEstimate(currNode, neighbor, highest)
                    gScore[neighbor] = currgScore
                    fScore.put((costEstimate(neighbor, goal, highest) + gScore[neighbor], distances[neighbor], neighbor))
                    openSet.add(neighbor)
                    closedSet.remove(neighbor)
                    distances[neighbor] = dist + distances[currNode]
                    cameFrom[neighbor] = currNode
                continue
            # if distance out of range,
            # ignore it and check next neighbor
            if distances[currNode] + dist > maxDistance:
                continue
            if not neighbor in openSet:
                openSet.add(neighbor)
            distances[neighbor] = min(distances.get(neighbor, float('inf')), distances[currNode] + dist)
            currgScore = gScore.get(currNode, float('inf')) + costEstimate(currNode, neighbor, highest)
            if currgScore < gScore.get(neighbor, float('inf')):
                # this path is a better path
                cameFrom[neighbor] = currNode
                gScore[neighbor] = currgScore
                fScore.put((costEstimate(neighbor, goal, highest) + gScore[neighbor],distances[neighbor], neighbor))
    # cannot find path
    # return whatever constructed by google map route
    return getElevationFromPath(gmaps, start, goal)


def reconstructPath(cameFrom, start, goal):
    """
    get
    :param cameFrom: a dict maps Node to Node, cameFrom[i] = j means shortest path from start to i reaches i directly from j
    :param current: destination node
    :return: a path from start to goal
    :rtype: list[Node]
    """
    path = [goal]
    current = goal
    visited = set()
    while current in cameFrom:
        if current in visited:
            # circle detected
            # simply return most direct path from start to destination with elev gain
            path.reverse()
            return findPath(start, current, visited) + path
        visited.add(current)
        current = cameFrom[current]
        path.append(current)
    path.reverse()
    return path

def getDistance(gmaps, n1, n2):
    """
    get direct distance between 2 points on the map
    :param gmaps: google map client
    :type gmaps: googlemaps.Client
    :param n1: starting point
    :type n1: Node
    :param n2: end point
    :type n2: Node
    :return: direct distance between 2 points on the map
    :rtype float
    """

    directions_result = gmaps.directions((n1.latitude, n1.longitude), (n2.latitude, n2.longitude))
    return directions_result[0]['legs'][0]['distance']['value']

def costEstimate(n1, n2, highest):
    """
    heuristic cost estimate of cost between n1 and n2
    will be the elevation difference
    if elevation gain is negative, return 0
    :param gmaps: google map client
    :type googlemaps.Client
    :param n1: starting point
    :type Node
    :param n2: end point
    :type Node
    :return: elevation difference between 2 points on the map
    :rtype float
    """
    if highest:
        return -max(n2.elevation - n1.elevation, 0)
    return max(n2.elevation - n1.elevation, 0)

def findPath(start, goal, visited):
    """
    when circle is detected, find most direct path between start and the node where circle starts
    :param start: Node
    :param goal: Node
    :return:
    """
    stack = [start]
    cameFrom = {start:start}
    while stack:
        node = stack.pop(0)
        if node == goal:
            del cameFrom[start]
            return reconstructPath(cameFrom, start, goal)
        visited.add(node)
        for neib in node.neighbors:
            if not neib in visited:
                cameFrom[neib] = node
                stack.append(neib)
    return []

def getElevationFromPath(gmaps, start, goal):
    """
    get elevation gain using steps calculated by google map
    :return: latitudes, longitudes, elevation gain
    """
    directionResult = gmaps.directions((start.latitude, start.longitude), (goal.latitude, goal.longitude))
    steps = directionResult[0]['legs'][0]['steps']
    latitudes = [start.latitude]
    longitudes = [start.longitude]
    elevGain = 0
    prevElev = start.elevation
    for step in steps:
        lat = step['end_location']['lat']
        lng = step['end_location']['lng']
        latitudes.append(lat)
        longitudes.append(lng)
        currElev = elevation(gmaps, (lat, lng))[0]['elevation']
        elevGain += max(0, currElev - prevElev)
        prevElev = currElev
    return latitudes, longitudes, elevGain
