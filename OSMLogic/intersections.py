try:
    from xml.etree import cElementTree as ET
except ImportError:
    from xml.etree import ElementTree as ET

from geopy.distance import vincenty
from geopy.geocoders import Nominatim
import math
import copy
import gmplot

roads = []
intersections = []
childrenInRegion = []
midpoint = (0, 0)
finalAddress = ''
neighborsDist = []
roadsAndNodes = []
roadsNodes = []


def getFullNeighborsInfo(startAddress, endAddress, distIncrease):
    global finalAddress
    finalAddress = endAddress
    geolocator = Nominatim(scheme="http")
    startLocation = geolocator.geocode(startAddress)
    endLocation = geolocator.geocode(endAddress)

    region = getRegion((startLocation.latitude, startLocation.longitude), (endLocation.latitude, endLocation.longitude),
                       distIncrease)
    interList = getIntersections(region)
    return getNeighborsWithDist(interList)


def plotMap(route):
    coords = getRouteCoords(route)
    if not coords:
        coords = route
    global midpoint
    global finalAddress
    gmap = gmplot.GoogleMapPlotter(midpoint[0], midpoint[1], 12)
    gmap.plot(coords[0], coords[1], 'cornflowerblue', edge_width=3)
    gmap.draw('Route to' + finalAddress + '.html')


def getRouteCoords(route):
    lats = []
    lons = []

    for x in range(0, len(route[0]) - 1):
        lats.append(route[0][x])
        lons.append(route[1][x])
        coordsBetween = findCoordsBetween((route[0][x], route[1][x]), (route[0][x + 1], route[1][x + 1]))
        for coord in coordsBetween:
            lats.append(coord[0])
            lons.append(coord[1])

    print((lats, lons))
    return (lats, lons)


def findCoordsBetween(node1, node2):
    global roadsAndNodes, roadsNodes
    id1 = getNodeId(node1)
    id2 = getNodeId(node2)
    print(id1)
    print(id2)
    roadsWithNodes = roadsAndNodes
    shortestDistance = 0
    roadNodes = roadsNodes
    currentDistance = 0
    distances = []
    shortestPath = []
    for road in roadsWithNodes:
        if (id1 in road[1]) and (id2 in road[1]):
            path = []
            start = False
            for item in road[1]:
                if not start:
                    if (item == id2) or (item == id1):
                        start = True
                        path.append(item)
                else:
                    path.append(item)
                    if (item == id1) or (item == id2):
                        break
            for x in range(0, len(path) - 1):

                currentNode = (0, 0)
                nextNode = (0, 0)
                for node in roadNodes:
                    if node.attrib['id'] == path[x]:
                        currentNode = (float(node.attrib['lat']), float(node.attrib['lon']))
                    if node.attrib['id'] == path[x + 1]:
                        nextNode = (float(node.attrib['lat']), float(node.attrib['lon']))
                currentDistance += vincenty(currentNode, nextNode).meters

            if shortestDistance == 0 or currentDistance < shortestDistance:
                shortestDistance = currentDistance
                shortestPath = path
    print(shortestPath)

    coords = []
    for node in shortestPath:
        for item in roadNodes:
            if item.attrib['id'] == node:
                coords.append((float(item.attrib['lat']), float(item.attrib['lon'])))
    if not coords:
        return coords
    coords.pop(0)
    coords.pop(len(coords) - 1)
    return coords


def getNodeId(node):
    print(node)
    global roadsNodes
    for item in roadsNodes:
        if float(item.attrib['lat']) == node[0] and float(item.attrib['lon']) == node[1]:
            return item.attrib['id']


def getRegion(start, end, distInc):
    # with open(filename, encoding='utf8') as infile:
    #	html = BeautifulSoup(infile, "html.parser")
    # osm = open("massachusetts.osm", "r")
    tree = ET.parse('../Amherst1.osm')
    root = tree.getroot()
    children = root.getchildren()

    # for child in children:
    #	childrenInRegion.append(child)

    # return children

    distance = vincenty(start, end).meters
    distIncrease = distInc

    global midpoint
    midpoint = ((start[0] + end[0]) / 2, (start[1] + end[1]) / 2)

    # childrenInRegion = []
    nodesInRegion = []
    waysInRegion = []

    for child in children:
        if child.tag == 'node':
            lat = float(child.attrib['lat'])
            lon = float(child.attrib['lon'])
            distanceToMid = vincenty((lat, lon), midpoint).meters
            maxDist = distIncrease * distance
            if distanceToMid < maxDist:
                childrenInRegion.append(child)
                nodesInRegion.append(child.attrib['id'])
        if child.tag == 'way':
            waysInRegion.append(child)

    for child in waysInRegion:
        roadInRegion = False
        for item in child:
            if item.tag == 'nd' and item.attrib['ref'] in nodesInRegion:
                roadInRegion = True
                break
        if roadInRegion:
            childrenInRegion.append(child)

    return childrenInRegion


def getNodesOfRoads(region=childrenInRegion):
    nodeIDs = []
    allRoadNodes = []

    for road in roads:
        for item in road:
            if item.tag == 'nd' and item.attrib['ref'] not in nodeIDs:
                nodeIDs.append(item.attrib['ref'])

    for child in region:
        if child.tag == 'node' and child.attrib['id'] in nodeIDs and child not in allRoadNodes:
            allRoadNodes.append(child)

    # for item in allRoadNodes:
    #	print(str(item.attrib['lat']) + "," + str(item.attrib['lon']))

    return allRoadNodes


def getIntersections(region):
    counter = {}

    for child in region:
        if child.tag == 'way':

            road = False
            road_types = ('primary', 'secondary', 'residential', 'tertiary', 'service')
            for item in child:
                if item.tag == 'tag' and item.attrib['k'] == 'highway' and item.attrib['v'] in road_types:
                    road = True

            if not road:
                continue

            roads.append(child)

            for item in child:
                if item.tag == 'nd':
                    nd_ref = item.attrib['ref']
                    if not nd_ref in counter:
                        counter[nd_ref] = 0
                    counter[nd_ref] += 1
    for i in list(filter(lambda x: counter[x] > 1, counter)):
        intersections.append(i)

    roadsWithNodes = filterRoadNodes()
    # print(roadsWithNodes[18][1])

    # for g in roadsWithNodes[18][1]:
    #	for child in children:
    #		if child.tag == 'node':
    #			if child.attrib['id'] == g:
    #				#coordinate = (child.attrib['lat'], child.attrib['lon'])
    #				print (child.attrib['lat'] + ',' + child.attrib['lon'])
    intersAndCoords = []

    for child in region:
        if child.tag == 'node':
            if child.attrib['id'] in intersections:
                coordinate = (child.attrib['lat'], child.attrib['lon'])
                # print (child.attrib['lat'] + ',' + child.attrib['lon'])
                coords = []
                coords.append(coordinate)
                ids = []
                ids.append(child.attrib['id'])
                intersAndCoords.append((ids, coords))
    return intersAndCoords


def getRoadsWithNodes():
    roadsWithNodes = []
    for road in roads:
        nodes = []
        for item in road:
            if item.tag == 'nd':
                # print(item.attrib['ref'])
                nodes.append(item.attrib['ref'])
        roadsWithNodes.append((road.attrib['id'], nodes))
    return roadsWithNodes


def filterRoadNodes():
    roadsWithNodes = []
    for road in roads:
        nodes = []
        for item in road:
            if item.tag == 'nd' and item.attrib['ref'] in intersections:
                nodes.append(item.attrib['ref'])
        roadsWithNodes.append((road.attrib['id'], nodes))
    return roadsWithNodes


def getNeighbors(interList):
    intersWithNeighbors = copy.deepcopy(interList)
    roadsWithNodes = filterRoadNodes()
    for item in intersWithNeighbors:
        interIDsAndCoords = findAdjacentInters(interList, item, roadsWithNodes)
        for ids in interIDsAndCoords[1]:
            item[0].append(ids)
        for coords in interIDsAndCoords[0]:
            item[1].append(coords)

    return intersWithNeighbors


def getNeighborsWithDist(interList):
    neighbors = getNeighbors(interList)

    global roadsNodes
    roadsNodes = getNodesOfRoads()

    global roadsAndNodes
    roadsAndNodes = getRoadsWithNodes()

    neighborsWithDist = []
    justCoordsList = []

    for item in neighbors:
        justCoordsList.append(item[1])
        distances = [0]
        for x in range(1, len(item[0])):
            distances.append(distBetweenNeighbors(item[0][0], item[0][x], roadsNodes, roadsAndNodes))
        neighborsWithDist.append(distances)

    global neighborsDist
    neighborsDist = (neighborsWithDist, justCoordsList)
    return neighborsDist


def distBetweenNeighbors(id1, id2, nodesOfRoads, roadsAndNodes):
    roadsWithNodes = roadsAndNodes
    shortestDistance = 0
    roadNodes = nodesOfRoads
    currentDistance = 0
    distances = []
    for road in roadsWithNodes:
        if (id1 in road[1]) and (id2 in road[1]):
            path = []
            start = False
            for item in road[1]:
                if not start:
                    if (item == id2) or (item == id1):
                        start = True
                        path.append(item)
                else:
                    path.append(item)
                    if (item == id1) or (item == id2):
                        break
            # print(path)
            for x in range(0, len(path) - 1):

                currentNode = (0, 0)
                nextNode = (0, 0)
                for node in roadNodes:
                    if node.attrib['id'] == path[x]:
                        currentNode = (float(node.attrib['lat']), float(node.attrib['lon']))
                    if node.attrib['id'] == path[x + 1]:
                        nextNode = (float(node.attrib['lat']), float(node.attrib['lon']))
                currentDistance += vincenty(currentNode, nextNode).meters

            if shortestDistance == 0 or currentDistance < shortestDistance:
                shortestDistance = currentDistance
    return shortestDistance


def findAdjacentInters(interList, current, roadsWithNodes):
    adjacentInters = []
    adjacentNodeIDs = []
    for road in roadsWithNodes:
        if current[0][0] in road[1]:
            pos = road[1].index(current[0][0])
            if pos + 1 != len(road[1]):
                nextInter = road[1][pos + 1]
                for inter in interList:
                    if inter[0][0] == nextInter and inter[0][0] not in adjacentNodeIDs:
                        coordsOfNext = inter[1][0]
                        adjacentInters.append(coordsOfNext)
                        adjacentNodeIDs.append(inter[0][0])

            if pos - 1 != -1:
                prevInter = road[1][pos - 1]
                for inter in interList:
                    if inter[0][0] == prevInter and inter[0][0] not in adjacentNodeIDs:
                        coordsOfPrev = inter[1][0]
                        adjacentInters.append(coordsOfPrev)
                        adjacentNodeIDs.append(inter[0][0])

    return (adjacentInters, adjacentNodeIDs)

