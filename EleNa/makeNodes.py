"""
create the connected graph using neighbor information
"""

from EleNa.Node import Node

def makeGraph(locationAndDistances):
    """
    make a connected graph out of 2d list of location and distances
    :param locationAndDistances: list of tuples (location, distance)
    :type locationAndDistances list
    location: for row in location, row[0] is (lat,lng) of the node; row[1:] will be its neighbors
    distance: for row in distance, row[0] is always 0 and row[x] is the distance between node and neighbor x
    :return: list of nodes
    :rtype: list[Node]
    """
    graph = dict() # maps (lat, lng) to Node
    for location,distance in locationAndDistances:
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