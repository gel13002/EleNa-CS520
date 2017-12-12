"""
create the connected graph using neighbor information
"""

from EleNa.Node import Node

def makeGraph(locationsAndDistances, elevations=None):
    """
    make a connected graph out of 2d list of location and distances
    :param locationsAndDistances: list of tuples (location, distance)
    :type locationsAndDistances list
    location: for row in location, row[0] is (lat,lng) of the node; row[1:] will be its neighbors, type (str, str)
    distance: for row in distance, row[0] is always 0 and row[x] is the distance between node and neighbor x
    :return: list of nodes
    :rtype: list[Node]
    """
    graph = dict() # maps (lat, lng) to Node
    locations = locationsAndDistances[1]
    distances = locationsAndDistances[0]
    for location, distance in zip(locations, distances):
        currLocation = location[0]
        neighbors = location[1:]
        if not elevations:
            makeNode(currLocation, neighbors, distance[1:], graph)
        else:
            makeNodeWithElev(currLocation, neighbors, distance[1:], elevations, graph)
    return graph

def makeNode(location, neighbors, distances, graph):
    """
    generate the
    :param location: (lat, lng)
    :param neighbors: list of (lat, lng)
    :param distances: list of distances associated with neighbors
    :return: list[Node]
    """
    latitude, longitude = toFloat(location)
    latitude = float(latitude)
    longitude = float(longitude)
    if not (latitude, longitude) in graph:
        graph[(latitude, longitude)] = Node(latitude, longitude)
    currNode = graph[(latitude, longitude)]
    for neibLocation,distance in zip(neighbors, distances):
        lat,lng = toFloat(neibLocation)
        if not (lat,lng) in graph:
            neib = Node(lat,lng)
            graph[(lat,lng)] = neib
        neib = graph[(lat,lng)]
        currNode.addNeighbor(neib, distance)

def toFloat(location):
    return float(location[0]), float(location[1])

def closestNode(start, graph):
    """
    return cloest node to start on the graph
    :param start: a (lat,lng) tuple
    :param graph: a dict maps (lat,lng) to node
    :return: Node
    :rtype: Node
    """
    slat, slng = start
    minDist = float('inf')
    for lat,lng in graph.keys():
        dist = (slat-lat)**2 + (slng-lng)**2
        if dist < minDist:
            closest = (lat,lng)
            minDist = dist
    return closest

def makeNodeWithElev(location, neighbors, distances, elevations, graph):
    latitude, longitude = toFloat(location)
    latitude = float(latitude)
    longitude = float(longitude)
    if not (latitude, longitude) in graph:
        if (latitude, longitude) in elevations:
            graph[(latitude, longitude)] = Node(latitude, longitude,
                                                elevations[(latitude, longitude)])
        else:
            graph[(latitude, longitude)] = Node(latitude, longitude, elevations[closestNode((latitude, longitude), elevations)])
    currNode = graph[(latitude, longitude)]
    for neibLocation,distance in zip(neighbors, distances):
        lat,lng = toFloat(neibLocation)
        if not (lat,lng) in graph:
            if (lat,lng) in elevations:
                neib = Node(lat, lng, elevations[(lat, lng)])
            else:
                neib = Node(lat,lng, elevations[closestNode((lat, lng), elevations)])
            graph[(lat,lng)] = neib
        neib = graph[(lat,lng)]
        currNode.addNeighbor(neib, distance)