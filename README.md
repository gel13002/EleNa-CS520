# EleNa-CS520
The EleNa tool should be used to finding a path of maximum or minimum elevation gain between two addresses within x% of the distance of the shortest path, x being specified by the user. 
Current Limitations:
* Right now the tool only uses roads that are for cars in its routing. This means that walkways, bike trails, etc. are not part of the routing.
* Because of limited computing power, the tool only calculates routes in a small area roughly bounded by the town of amherst. Future updates will include functionality for the entire planet. 
Directions on Use:
* The user needs to input parameters such as Starting Address, Ending Address, x% distance increase, and maximum or minimum elevation gain.
* Then, the user should press the ‘Route’ button.
* A file will be saved to the directory of ‘EleNa.exe’ titled, ‘Route to ‘Starting Address’.html’
* The file can be opened in a internet browser and will contain a map of the desired route. 
Use Cases:
* User wants highest elevation gain for a tough cardio workout from UMass to Amherst College.They choose maximum elevation gain in parameters along with how ever long (in distance, comparatively) they are willing to run and the start and end addresses.
* User wants a casual stroll around the town of amherst and does not want to walk up a lot of hills. They choose minimum elevation gain in the parameters along with however long they are willing to walk and their start and end addresses.
a


How to use: open EleNa.exe, give 2 addresses near Amherst,MA select your option see the output.

Testing: run Test/test.py to run full test on data parsing side
