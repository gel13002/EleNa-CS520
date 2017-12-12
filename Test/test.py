import sys
sys.path.insert(0 ,'../')

from OSMLogic.intersections import getFullNeighborsInfo
from EleNa.findRoute import optimalElevGain
from EleNa.makeNodes import makeGraph, closestNode
from EleNa.getElevation import getLocation
from googlemaps import Client
from googlemaps.elevation import elevation_along_path
from geopy.distance import vincenty
import pickle

gmaps = Client(key='AIzaSyB6vHx97QpX_47VszFXIucfE-H_8xrbLWc')

start = getLocation(gmaps, "University of Massachusetts")
end = getLocation(gmaps, "Amherst")
locationsAndDistances = getFullNeighborsInfo(start, end)
# make a graph out of google map API call
# graph = makeGraph(locationsAndDistances)
# startPos = closestNode(start, graph)
# endPos = closestNode(end, graph)
# with open('elev.txt', 'w') as f:
#     for node in graph.values():
#         f.write("%f %f %d\n"%(node.latitude, node.longitude, node.elevation))
elevations = {}
with open('elev.txt') as f:
    for line in f:
        lat,lng,elev = line.split()
        lat = float(lat)
        lng = float(lng)
        elev = int(elev)
        elevations[(lat,lng)] = elev
graph = makeGraph(locationsAndDistances, elevations)
# make the graph out of local data
startPos = closestNode(start, graph)
endPos = closestNode(end, graph)
print("Testing...")
route, elevGain = optimalElevGain(graph[startPos], graph[endPos], 0.1)
print(len(route), elevGain)
route, elevGain = optimalElevGain(graph[startPos], graph[endPos], 0.1, True)
print(len(route), elevGain)

# elevPath = elevation_along_path(gmaps, path=[(36.578581,-118.291994),(36.23998,-116.83171)], samples=10)
#
# neighbors = []
# locations = [[(item['location']['lat'], item['location']['lng'])] for item in elevPath]
# distances = [[0] for i in range(len(elevPath))]
# for i in range(len(locations)):
#     if i > 0:
#         locations[i].append(locations[i-1][0])
#         distances[i].append(round(vincenty(locations[i][0], locations[i-1][0]).m))
#     if i < len(elevPath)-1:
#         locations[i].append(locations[i+1][0])
#         distances[i].append(round(vincenty(locations[i][0], locations[i+1][0]).m))
#
# print(locations)
# print(distances)
#
# graph = makeGraph((locations, distances))
#
# route, elevGain = optimalElevGain(graph[locations[2][0]], graph[locations[-1][0]], 0.5, lowest=True)
#
# print(len(route), elevGain)
#
# route, elevGain = optimalElevGain(graph[locations[-3][0]], graph[locations[0][0]], 0.5, lowest=False)
#
# print(len(route), elevGain)
#
# route, elevGain = optimalElevGain(graph[locations[2][0]], graph[locations[-1][0]], 0.5, lowest=False)
#
# print(len(route), elevGain)
#
# route, elevGain = optimalElevGain(graph[locations[-3][0]], graph[locations[0][0]], 0.5, lowest=True)
#
# print(len(route), elevGain)