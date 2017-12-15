import sys
sys.path.insert(0 ,'../')

from EleNa.findRoute import getElevationFromPath, getLocation
from EleNa.Node import Node
from googlemaps import Client
from OSMLogic.intersections import plotMap

gmaps = Client(key='AIzaSyB6vHx97QpX_47VszFXIucfE-H_8xrbLWc')
startAddr = "University of Massachusetts"
endAddr = "Amherst College"
start = getLocation(gmaps, startAddr)
end = getLocation(gmaps, endAddr)
n1 = Node(start[0], start[1])
n2 = Node(end[0], end[1])

latitudes, longitudes, elevGain = getElevationFromPath(gmaps, n1, n2)

print(latitudes, longitudes, elevGain)

plotMap((latitudes, longitudes))
