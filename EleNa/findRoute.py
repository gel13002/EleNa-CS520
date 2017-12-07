from queue import PriorityQueue
from geopy.distance import vincenty
from googlemaps.distance_matrix import distance_matrix
from googlemaps.elevation import elevation
from googlemaps import Client

def optimalElevGain(start, goal, variance, lowest = False):
    """
    implementation of A* algorithm
    return the path with lowest elevation gain along the path
    :param start: start point
    :type start: Node
    :param goal: destination
    :type: goal: Node
    :param variance: how many variance is tolerable
    :type variance: float
    :param lowest: user option, lowest elevation gain or highest
    :type: lowest: Boolean
    :return:
    """
    # initialize google map client
    gmaps = Client(key='AIzaSyCtnZS7miejfbAh1FsKUBhxil1VXa0EicY')
    # shortest distance between start and goal, calculated by google map directions
    shortestDistance = getShortestDistance(start, goal)
    maxDistance = (1+variance)*shortestDistance
    currDistance = 0
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
    fScore.put((costEstimate(gmaps, start, goal, lowest), distances[start], start))
    while openSet:
        score, distance, currNode = fScore.get()
        if currNode == goal:
            return reconstructPath(cameFrom, currNode), score
        openSet.remove(currNode)
        for neighbor, dist in currNode.neighbors.items():
            if neighbor in closedSet:
                if dist + distances[currNode] < distances[neighbor]:
                    # find a closer route, give the node another chance by putting it back to openset
                    openSet.add(neighbor)
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
            currgScore = gScore.get(currNode, float('inf')) + costEstimate(gmaps, currNode, neighbor, lowest)
            if currgScore < gScore.get(neighbor, float('inf')):
                # this path is a better path
                cameFrom[neighbor] = currNode
                gScore[neighbor] = currgScore
                fScore.put((costEstimate(gmaps, neighbor, goal, lowest) + gScore[neighbor],distances[neighbor], neighbor))
    # no such path from start to goal
    return [], -1


def reconstructPath(cameFrom, goal):
    """
    get
    :param cameFrom: a dict maps Node to Node, cameFrom[i] = j means shortest path from start to i reaches i directly from j
    :param current: destination node
    :return: a path from start to goal
    :rtype: list[Node]
    """
    path = [goal]
    current = goal
    while current in cameFrom:
        current = cameFrom[current]
        path.append(current)
    path.reverse()
    return path

def getShortestDistance(start, end):
    """
    using google map API to calculate shortest distance between start and end point
    :param gmaps:
    :param start:
    :param goal:
    :return: distance value
    """
    return vincenty((start.latitude, start.longitude), (end.latitude, end.longitude)).kilometers

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

    directions_result = gmaps.directions(gmaps, (n1.latitude, n1.longitude), (n2.latitude, n2.longitude))
    return float(directions_result['rows'][0]['elements'][0]['distance']['value'])

def costEstimate(gmaps, n1, n2, lowest):
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
    if lowest:
        return -max(n2.elevation - n1.elevation, 0)
    return max(n2.elevation - n1.elevation, 0)
