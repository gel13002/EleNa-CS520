try:
	from xml.etree import cElementTree as ET
except ImportError:
	from xml.etree import ElementTree as ET

roads = []
intersections = []
children = []
# osm =

def getRegion(start, end):
	midpoint = ((start[0] + end[0]) / 2, (start[1] + end[1]) / 2)


def getIntersections(osm):
	tree = ET.parse(osm)
	root = tree.getroot()
	children = root.getchildren()
	counter = {}

	for child in children:
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

	roadsWithNodes = sortRoadNodes()
	print(roadsWithNodes[18][1])

	for g in roadsWithNodes[18][1]:
		for child in children:
			if child.tag == 'node':
				if child.attrib['id'] == g:
					#coordinate = (child.attrib['lat'], child.attrib['lon'])
					print (child.attrib['lat'] + ',' + child.attrib['lon'])
	intersAndCoords = []

	for child in children:
		if child.tag == 'node':
			if child.attrib['id'] in intersections:
				coordinate = (child.attrib['lat'], child.attrib['lon'])
				print (child.attrib['lat'] + ',' + child.attrib['lon'])
				coords = []
				coords.append(coordinate)
				intersAndCoords.append((child.attrib['id'], coords))
	return intersAndCoords

def sortRoadNodes():
	roadsWithNodes = []
	for road in roads:
		nodes = []
		for item in road:
			if item.tag == 'nd' and item.attrib['ref'] in intersections:
				nodes.append(item.attrib['ref'])
		roadsWithNodes.append((road.attrib['id'], nodes))
	return roadsWithNodes

def getNeighbors(interList):
	intersWithNeighbors = list(interList)
	roadsWithNodes = sortRoadNodes()
	for item in intersWithNeighbors:
		for inter in findAdjacentInters(interList, item, roadsWithNodes):
			item[1].append(inter)

	return intersWithNeighbors

def findAdjacentInters(interList, current, roadsWithNodes):
	adjacentInters = []
	for road in roadsWithNodes:
		if current[0] in road[1]:
			pos = road[1].index(current[0])

			if pos + 1 != len(road[1]):
				nextInter = road[1][pos + 1]
				for inter in interList:
					if inter[0] == nextInter:
						coordsOfNext = inter[1][0]
						adjacentInters.append(coordsOfNext)

			if pos - 1 != -1:
				prevInter = road[1][pos - 1]
				for inter in interList:
					if inter[0] == prevInter:
						coordsOfPrev = inter[1][0]
						adjacentInters.append(coordsOfPrev)
	return adjacentInters
				
