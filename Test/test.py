import sys
sys.path.insert(0 ,'../')

import EleNa
from EleNa.findRoute import optimalElevGain
from EleNa.Node import Node
from EleNa.makeNodes import makeGraph
from googlemaps import Client
from geopy.distance import vincenty

import googlemaps
from googlemaps.elevation import elevation_along_path

gmaps = googlemaps.Client(key='AIzaSyCtnZS7miejfbAh1FsKUBhxil1VXa0EicY')
elevPath = elevation_along_path(gmaps, path=[(36.578581,-118.291994),(36.23998,-116.83171)], samples=10)

gmaps = Client(key='AIzaSyCtnZS7miejfbAh1FsKUBhxil1VXa0EicY')
neighbors = []
locations = [[(item['location']['lat'], item['location']['lng'])] for item in elevPath]
distances = [[0] for i in range(len(elevPath))]
for i in range(len(locations)):
    if i > 0:
        locations[i].append(locations[i-1][0])
        distances[i].append(vincenty(locations[i][0], locations[i-1][0]).kilometers)
    if i < len(elevPath)-1:
        locations[i].append(locations[i+1][0])
        distances[i].append(vincenty(locations[i][0], locations[i+1][0]).kilometers)

print(locations)
print(distances)

graph = makeGraph(locations, distances)


for k,v in graph.items():
    print(k)
    print(v.latitude, v.longitude, v.elevation, v.neighbors)

route, elevGain = optimalElevGain(graph[locations[0][0]], graph[locations[-1][0]], 0.5)

print(len(route), elevGain)

route, elevGain = optimalElevGain(graph[locations[-1][0]], graph[locations[0][0]], 0.5)

print(len(route), elevGain)