from googlemaps.elevation import elevation
from googlemaps import Client

class Node:
    """
        Node representing lat, lng object in graph
    """
    def __init__(self, lat, lng):
        # maps neighbor node to distance
        """
        a node representing a location on the map using latitude and longitude
        :param lat: latitude of this node
        :param lng: longitude
        """
        self.neighbors = dict()  # dict of node -> distance
        self.latitude = lat
        self.longitude = lng
        self.elevation = elevation(Client(key='AIzaSyCtnZS7miejfbAh1FsKUBhxil1VXa0EicY'), (lat, lng))[0]['elevation']

    def addNeighbor(self, neighbor, distance):
        """
        append a new neighbor to current node
        :param neighbor:
        :type neighbor: Node
        :param distance: distance between neighbor and current Node
        :type distance: float
        :return: empty
        """
        self.neighbors[neighbor] = distance
