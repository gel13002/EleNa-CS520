"""
create the connected graph using neighbor information
"""

from EleNa.Node import Node

def makeGraph(locations, distances):
    """
    make a connected graph out of
    :param locations: 2d list representing locations of interested in an area
    for each row in locations, row[0] is the node and row[1:] representing all its neighbors
    :type locations: list of (list of (lat,lng)) pairs
    :param distances: 2d array of the same shape as locations, representing distance between
    :return: list of nodes
    :rtype: list[Node]
    """
    graph = dict() # maps (lat, lng) to Node
    for location,distance in zip(locations, distances):
        currLocation = location[0]
        neighbors = location[1:]
        makeNode(currLocation, neighbors, distance[1:], graph)
    return graph

def makeNode(location, neighbors, distances, graph):
    """
    generate the
    :param location: (lat, lng)
    :param neighbors: list of (lat, lng)
    :param distances: list of distances associated with neighbors
    :return: list[Node]
    """
    latitude, longitude = location
    if not location in graph:
        graph[location] = Node(latitude, longitude)
    currNode = graph[location]
    for neibLocation,distance in zip(neighbors, distances):
        lat,lng = neibLocation
        if not (lat,lng) in graph:
            neib = Node(lat,lng)
            graph[(lat,lng)] = neib
        neib = graph[(lat,lng)]
        currNode.addNeighbor(neib, distance)