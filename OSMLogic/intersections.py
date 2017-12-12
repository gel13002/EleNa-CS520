try:
	from xml.etree import cElementTree as ET
except ImportError:
	from xml.etree import ElementTree as ET

from geopy.distance import vincenty
import math
import copy

roads = []
intersections = []
childrenInRegion = []

def getFullNeighborsInfo(start, end):
	region = getRegion(start, end)
	interList = getIntersections(region)
	return getNeighborsWithDist(interList)

def getRegion(start, end):
	osm = open("massachusetts.osm", "r")
	tree = ET.parse(osm)
	root = tree.getroot()
	children = root.getchildren()

	distance = vincenty(start, end).miles
	midpoint = ((start[0] + end[0]) / 2, (start[1] + end[1]) / 2)
	distIncrease = 1.1

	degreesLon = (distIncrease * distance / 2) / ((69.172) * math.cos(midpoint[0] * math.pi / 180)) 
	maxLon = midpoint[1] + degreesLon
	minLon = midpoint[1] - degreesLon
	maxLat = midpoint[0] + ((distIncrease * distance / 2) / 69.172)
	minLat = midpoint[0] - ((distIncrease * distance / 2) / 69.172)

	#print(str(maxLat) + ', ' + str(maxLon) + ', ' + str(minLat) + ', ' + str(minLon))

	#childrenInRegion = []
	nodesInRegion = []

	for child in children:
		if child.tag == 'node':
			lat = float(child.attrib['lat'])
			lon = float(child.attrib['lon'])
			if lat < maxLat and lat > minLat and lon < maxLon and lon > minLon:
				childrenInRegion.append(child)
				nodesInRegion.append(child.attrib['id'])
	for child in children:
		if child.tag == 'way':
			roadInRegion = False
			for item in child:
				if item.tag == 'nd' and item.attrib['ref'] in nodesInRegion:
					roadInRegion = True
					break
			if roadInRegion:
				childrenInRegion.append(child)

	return childrenInRegion

def getNodesOfRoads(region = childrenInRegion):
	nodeIDs = []
	allRoadNodes = []

	for road in roads:
		for item in road:
			if item.tag == 'nd' and item.attrib['ref'] not in nodeIDs:
				nodeIDs.append(item.attrib['ref'])

	for child in region:
		if child.tag == 'node' and child.attrib['id'] in nodeIDs and child not in allRoadNodes:
			allRoadNodes.append(child)

	for item in allRoadNodes:
		print(str(item.attrib['lat']) + "," + str(item.attrib['lon']))

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
	for i in list(filter(lambda x: counter[x] > 1,  counter)):
		intersections.append(i)

	roadsWithNodes = filterRoadNodes()
	#print(roadsWithNodes[18][1])

	#for g in roadsWithNodes[18][1]:
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
				#print (child.attrib['lat'] + ',' + child.attrib['lon'])
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
				#print(item.attrib['ref'])
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
	roadsWithNodes = getRoadsWithNodes()
	neighbors = getNeighbors(interList)
	roadsNodes = getNodesOfRoads()
	roadsAndNodes = getRoadsWithNodes()

	neighborsWithDist = []
	justCoordsList = []

	for item in neighbors:
		justCoordsList.append(item[1])
		distances = [0]
		for x in range(1, len(item[0])):
			distances.append(distBetweenNeighbors(item[0][0], item[0][x], roadsNodes, roadsAndNodes))
		neighborsWithDist.append(distances)

	return (neighborsWithDist, justCoordsList)

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

			for x in range(0, len(path) - 1):

				currentNode = (0, 0)
				nextNode = (0, 0)
				for node in roadNodes:
					if node.attrib['id'] == path[x]:
						currentNode = (float(node.attrib['lat']), float(node.attrib['lon']))
					if node.attrib['id'] == path[x+1]:
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
				
