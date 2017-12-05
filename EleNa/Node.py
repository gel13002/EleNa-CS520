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
        self.neighbors = dict()
        self.latitude = lat
        self.longitude = lng