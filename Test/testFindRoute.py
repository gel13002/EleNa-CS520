import sys
sys.path.insert(0 ,'../')

from EleNa.findRoute import findRoute

elevGain = findRoute("University of Massachusetts", "Amherst College", 1.3, False)

print(elevGain)