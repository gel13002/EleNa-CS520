import sys
sys.path.insert(0 ,'../')

import EleNa
from EleNa.findRoute import getShortestDistance, optimalElevGain
from EleNa.Node import Node
from googlemaps import Client

import googlemaps
from googlemaps.elevation import elevation_along_path

gmaps = googlemaps.Client(key='AIzaSyCtnZS7miejfbAh1FsKUBhxil1VXa0EicY')
elevPath = elevation_along_path(gmaps, path=[(36.578581,-118.291994),(36.23998,-116.83171)], samples=10)

nodes = []
gmaps = Client(key='AIzaSyCtnZS7miejfbAh1FsKUBhxil1VXa0EicY')
for i, item in enumerate(elevPath):
    lat = item['location']['lat']
    lng = item['location']['lng']
    n = Node(lat,lng)
    nodes.append(n)
for i, node in enumerate(nodes):
    if i > 0:
        node.neighbors[nodes[i-1]] = getShortestDistance(gmaps, node, nodes[i-1])
    if i < len(nodes)-1:
        node.neighbors[nodes[i+1]] = getShortestDistance(gmaps, node, nodes[i+1])

route, elevGain = optimalElevGain(nodes[0], nodes[-1], 1.0)

print(len(nodes))
print(len(route), elevGain)

route, elevGain = optimalElevGain(nodes[-1], nodes[0], 1.0)

print(len(nodes))
print(len(route), elevGain)