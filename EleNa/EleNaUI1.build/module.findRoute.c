/* Generated code for Python source for module 'findRoute'
 * created by Nuitka version 0.5.28.1
 *
 * This code is in part copyright 2017 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module_findRoute is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_findRoute;
PyDictObject *moduledict_findRoute;

/* The module constants used, if any. */
extern PyObject *const_str_plain_directions;
static PyObject *const_tuple_9a018819b2491f2436066f8512cf9449_tuple;
static PyObject *const_str_digest_503ebd674ad29edc8ea832636687f3fd;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain_makeGraph;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_f931a9677f505d7cd94c67bbf81507b8;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_currElev;
extern PyObject *const_str_plain_max;
static PyObject *const_str_plain_getElevationFromPath;
extern PyObject *const_str_angle_listcontraction;
static PyObject *const_str_plain_neib;
static PyObject *const_str_plain_getDistance;
static PyObject *const_tuple_11ee0fdf6750257cbcd18146d6363280_tuple;
static PyObject *const_str_plain_plotMap;
static PyObject *const_str_plain_stack;
extern PyObject *const_str_plain_items;
static PyObject *const_tuple_str_plain_n1_str_plain_n2_str_plain_highest_tuple;
static PyObject *const_str_digest_d4c7ffac87f9085e9644dd9293051ff5;
static PyObject *const_str_plain_n1;
static PyObject *const_str_plain_variance;
static PyObject *const_str_plain_steps;
extern PyObject *const_str_plain_end;
static PyObject *const_str_digest_1f3e6c0642df1d6203396d8b06930906;
extern PyObject *const_str_plain_latitude;
static PyObject *const_str_plain_startAddr;
extern PyObject *const_str_plain_lat;
static PyObject *const_tuple_str_plain_getFullNeighborsInfo_str_plain_plotMap_tuple;
static PyObject *const_str_digest_ce468c836163ae950d011d318d1f4391;
static PyObject *const_str_plain_getFullNeighborsInfo;
static PyObject *const_str_plain_reconstructPath;
static PyObject *const_str_plain_startPos;
extern PyObject *const_str_plain_start;
static PyObject *const_str_plain_goal;
extern PyObject *const_str_plain_findRoute;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_reverse;
static PyObject *const_tuple_e8448a24f87aa740b993350597dec5ce_tuple;
static PyObject *const_str_plain_elevGain;
static PyObject *const_tuple_b1a9425458132655f48dab5a31bbd66b_tuple;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_str_plain_elevation_tuple;
extern PyObject *const_str_plain_add;
extern PyObject *const_str_plain_put;
static PyObject *const_str_plain_getLocation;
static PyObject *const_str_digest_6a326b20e904cd8faf1a0f3dea2ad0aa;
static PyObject *const_tuple_int_0_str_digest_6a326b20e904cd8faf1a0f3dea2ad0aa_tuple;
extern PyObject *const_str_plain_min;
static PyObject *const_str_plain_legs;
extern PyObject *const_str_plain_node;
extern PyObject *const_str_plain_path;
static PyObject *const_str_plain_longitudes;
static PyObject *const_str_plain_highest;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_insert;
static PyObject *const_str_plain_route;
extern PyObject *const_str_plain_lng;
static PyObject *const_str_plain_findPath;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_append;
static PyObject *const_str_plain_locationsAndDistances;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_tuple_str_plain_Client_tuple;
static PyObject *const_dict_9d24b1b79df98beeec90b78551e5054c;
static PyObject *const_str_plain_end_location;
static PyObject *const_str_digest_05ed6dc3a4e12188005310479838f62b;
extern PyObject *const_str_plain_remove;
extern PyObject *const_tuple_int_0_tuple;
static PyObject *const_tuple_300f8bffd4fc08722cd415e96654fc4d_tuple;
extern PyObject *const_str_plain_ModuleSpec;
static PyObject *const_float_inf;
static PyObject *const_str_plain_endPos;
static PyObject *const_str_digest_a40d36289ec487f7b9d5636eb0685e35;
extern PyObject *const_str_plain_pop;
static PyObject *const_str_plain_directions_result;
extern PyObject *const_str_plain_googlemaps;
static PyObject *const_str_digest_c76db5427dc8373e62bf4eeac3c74073;
extern PyObject *const_int_0;
static PyObject *const_str_plain_cameFrom;
static PyObject *const_str_plain_costEstimate;
extern PyObject *const_str_plain_current;
static PyObject *const_str_plain_graph;
static PyObject *const_str_digest_6899e989af99a73f56b5bbc7438ff230;
static PyObject *const_str_plain_step;
static PyObject *const_str_plain_optimalElevGain;
static PyObject *const_str_plain_endAddr;
static PyObject *const_str_digest_9c5d660e82060902510eb162d4c8365b;
extern PyObject *const_str_plain_Client;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_944e2b5ff661e890802cfb2dbcb0ae0c;
static PyObject *const_str_plain_visited;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_plain_latitudes;
extern PyObject *const_str_plain_key;
static PyObject *const_str_plain_directionResult;
static PyObject *const_str_plain_prevElev;
extern PyObject *const_str_plain_elevation;
static PyObject *const_str_plain_PriorityQueue;
static PyObject *const_tuple_str_plain_PriorityQueue_tuple;
static PyObject *const_str_plain_closestNode;
extern PyObject *const_str_plain_longitude;
static PyObject *const_str_plain_n2;
extern PyObject *const_str_plain_distance;
extern PyObject *const_str_digest_e057a4f20fd888d766c673007b8bd7cb;
static PyObject *const_tuple_str_plain_node_str_plain_route_tuple;
static PyObject *const_str_digest_d5e0d422dd9b78878d08154962154e2b;
extern PyObject *const_str_plain_round;
static PyObject *const_str_plain_gmaps;
extern PyObject *const_str_plain_get;
static PyObject *const_str_digest_72e262a08dea3be9c502104232c4adda;
static PyObject *const_tuple_str_plain_getLocation_tuple;
static PyObject *const_str_plain_neighbors;
static PyObject *const_tuple_str_plain_makeGraph_str_plain_closestNode_tuple;
extern PyObject *const_str_plain_queue;
static PyObject *const_tuple_6a049d24e261ba2ee5c5fdc897d8ee15_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_9a018819b2491f2436066f8512cf9449_tuple = PyTuple_New( 13 );
    const_str_plain_gmaps = UNSTREAM_STRING( &constant_bin[ 600765 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_9a018819b2491f2436066f8512cf9449_tuple, 0, const_str_plain_gmaps ); Py_INCREF( const_str_plain_gmaps );
    PyTuple_SET_ITEM( const_tuple_9a018819b2491f2436066f8512cf9449_tuple, 1, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    const_str_plain_goal = UNSTREAM_STRING( &constant_bin[ 600770 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_9a018819b2491f2436066f8512cf9449_tuple, 2, const_str_plain_goal ); Py_INCREF( const_str_plain_goal );
    const_str_plain_directionResult = UNSTREAM_STRING( &constant_bin[ 600774 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_9a018819b2491f2436066f8512cf9449_tuple, 3, const_str_plain_directionResult ); Py_INCREF( const_str_plain_directionResult );
    const_str_plain_steps = UNSTREAM_STRING( &constant_bin[ 600789 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_9a018819b2491f2436066f8512cf9449_tuple, 4, const_str_plain_steps ); Py_INCREF( const_str_plain_steps );
    const_str_plain_latitudes = UNSTREAM_STRING( &constant_bin[ 600794 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_9a018819b2491f2436066f8512cf9449_tuple, 5, const_str_plain_latitudes ); Py_INCREF( const_str_plain_latitudes );
    const_str_plain_longitudes = UNSTREAM_STRING( &constant_bin[ 600803 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_9a018819b2491f2436066f8512cf9449_tuple, 6, const_str_plain_longitudes ); Py_INCREF( const_str_plain_longitudes );
    const_str_plain_elevGain = UNSTREAM_STRING( &constant_bin[ 600813 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_9a018819b2491f2436066f8512cf9449_tuple, 7, const_str_plain_elevGain ); Py_INCREF( const_str_plain_elevGain );
    const_str_plain_prevElev = UNSTREAM_STRING( &constant_bin[ 600821 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_9a018819b2491f2436066f8512cf9449_tuple, 8, const_str_plain_prevElev ); Py_INCREF( const_str_plain_prevElev );
    const_str_plain_step = UNSTREAM_STRING( &constant_bin[ 600789 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_9a018819b2491f2436066f8512cf9449_tuple, 9, const_str_plain_step ); Py_INCREF( const_str_plain_step );
    PyTuple_SET_ITEM( const_tuple_9a018819b2491f2436066f8512cf9449_tuple, 10, const_str_plain_lat ); Py_INCREF( const_str_plain_lat );
    PyTuple_SET_ITEM( const_tuple_9a018819b2491f2436066f8512cf9449_tuple, 11, const_str_plain_lng ); Py_INCREF( const_str_plain_lng );
    const_str_plain_currElev = UNSTREAM_STRING( &constant_bin[ 600829 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_9a018819b2491f2436066f8512cf9449_tuple, 12, const_str_plain_currElev ); Py_INCREF( const_str_plain_currElev );
    const_str_digest_503ebd674ad29edc8ea832636687f3fd = UNSTREAM_STRING( &constant_bin[ 600837 ], 15, 0 );
    const_str_plain_makeGraph = UNSTREAM_STRING( &constant_bin[ 600852 ], 9, 1 );
    const_str_digest_f931a9677f505d7cd94c67bbf81507b8 = UNSTREAM_STRING( &constant_bin[ 600861 ], 18, 0 );
    const_str_plain_getElevationFromPath = UNSTREAM_STRING( &constant_bin[ 600879 ], 20, 1 );
    const_str_plain_neib = UNSTREAM_STRING( &constant_bin[ 600899 ], 4, 1 );
    const_str_plain_getDistance = UNSTREAM_STRING( &constant_bin[ 600903 ], 11, 1 );
    const_tuple_11ee0fdf6750257cbcd18146d6363280_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_11ee0fdf6750257cbcd18146d6363280_tuple, 0, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_11ee0fdf6750257cbcd18146d6363280_tuple, 1, const_str_plain_goal ); Py_INCREF( const_str_plain_goal );
    const_str_plain_visited = UNSTREAM_STRING( &constant_bin[ 600914 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_11ee0fdf6750257cbcd18146d6363280_tuple, 2, const_str_plain_visited ); Py_INCREF( const_str_plain_visited );
    const_str_plain_stack = UNSTREAM_STRING( &constant_bin[ 600921 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_11ee0fdf6750257cbcd18146d6363280_tuple, 3, const_str_plain_stack ); Py_INCREF( const_str_plain_stack );
    const_str_plain_cameFrom = UNSTREAM_STRING( &constant_bin[ 600926 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_11ee0fdf6750257cbcd18146d6363280_tuple, 4, const_str_plain_cameFrom ); Py_INCREF( const_str_plain_cameFrom );
    PyTuple_SET_ITEM( const_tuple_11ee0fdf6750257cbcd18146d6363280_tuple, 5, const_str_plain_node ); Py_INCREF( const_str_plain_node );
    PyTuple_SET_ITEM( const_tuple_11ee0fdf6750257cbcd18146d6363280_tuple, 6, const_str_plain_neib ); Py_INCREF( const_str_plain_neib );
    const_str_plain_plotMap = UNSTREAM_STRING( &constant_bin[ 600934 ], 7, 1 );
    const_tuple_str_plain_n1_str_plain_n2_str_plain_highest_tuple = PyTuple_New( 3 );
    const_str_plain_n1 = UNSTREAM_STRING( &constant_bin[ 31133 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_n1_str_plain_n2_str_plain_highest_tuple, 0, const_str_plain_n1 ); Py_INCREF( const_str_plain_n1 );
    const_str_plain_n2 = UNSTREAM_STRING( &constant_bin[ 600941 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_n1_str_plain_n2_str_plain_highest_tuple, 1, const_str_plain_n2 ); Py_INCREF( const_str_plain_n2 );
    const_str_plain_highest = UNSTREAM_STRING( &constant_bin[ 600943 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_n1_str_plain_n2_str_plain_highest_tuple, 2, const_str_plain_highest ); Py_INCREF( const_str_plain_highest );
    const_str_digest_d4c7ffac87f9085e9644dd9293051ff5 = UNSTREAM_STRING( &constant_bin[ 600950 ], 361, 0 );
    const_str_plain_variance = UNSTREAM_STRING( &constant_bin[ 601122 ], 8, 1 );
    const_str_digest_1f3e6c0642df1d6203396d8b06930906 = UNSTREAM_STRING( &constant_bin[ 601311 ], 368, 0 );
    const_str_plain_startAddr = UNSTREAM_STRING( &constant_bin[ 600995 ], 9, 1 );
    const_tuple_str_plain_getFullNeighborsInfo_str_plain_plotMap_tuple = PyTuple_New( 2 );
    const_str_plain_getFullNeighborsInfo = UNSTREAM_STRING( &constant_bin[ 601679 ], 20, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_getFullNeighborsInfo_str_plain_plotMap_tuple, 0, const_str_plain_getFullNeighborsInfo ); Py_INCREF( const_str_plain_getFullNeighborsInfo );
    PyTuple_SET_ITEM( const_tuple_str_plain_getFullNeighborsInfo_str_plain_plotMap_tuple, 1, const_str_plain_plotMap ); Py_INCREF( const_str_plain_plotMap );
    const_str_digest_ce468c836163ae950d011d318d1f4391 = UNSTREAM_STRING( &constant_bin[ 601699 ], 116, 0 );
    const_str_plain_reconstructPath = UNSTREAM_STRING( &constant_bin[ 601815 ], 15, 1 );
    const_str_plain_startPos = UNSTREAM_STRING( &constant_bin[ 601830 ], 8, 1 );
    const_str_plain_reverse = UNSTREAM_STRING( &constant_bin[ 597023 ], 7, 1 );
    const_tuple_e8448a24f87aa740b993350597dec5ce_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_e8448a24f87aa740b993350597dec5ce_tuple, 0, const_str_plain_cameFrom ); Py_INCREF( const_str_plain_cameFrom );
    PyTuple_SET_ITEM( const_tuple_e8448a24f87aa740b993350597dec5ce_tuple, 1, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_e8448a24f87aa740b993350597dec5ce_tuple, 2, const_str_plain_goal ); Py_INCREF( const_str_plain_goal );
    PyTuple_SET_ITEM( const_tuple_e8448a24f87aa740b993350597dec5ce_tuple, 3, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_e8448a24f87aa740b993350597dec5ce_tuple, 4, const_str_plain_current ); Py_INCREF( const_str_plain_current );
    PyTuple_SET_ITEM( const_tuple_e8448a24f87aa740b993350597dec5ce_tuple, 5, const_str_plain_visited ); Py_INCREF( const_str_plain_visited );
    const_tuple_b1a9425458132655f48dab5a31bbd66b_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_b1a9425458132655f48dab5a31bbd66b_tuple, 0, const_str_plain_startAddr ); Py_INCREF( const_str_plain_startAddr );
    const_str_plain_endAddr = UNSTREAM_STRING( &constant_bin[ 601059 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_b1a9425458132655f48dab5a31bbd66b_tuple, 1, const_str_plain_endAddr ); Py_INCREF( const_str_plain_endAddr );
    PyTuple_SET_ITEM( const_tuple_b1a9425458132655f48dab5a31bbd66b_tuple, 2, const_str_plain_variance ); Py_INCREF( const_str_plain_variance );
    PyTuple_SET_ITEM( const_tuple_b1a9425458132655f48dab5a31bbd66b_tuple, 3, const_str_plain_highest ); Py_INCREF( const_str_plain_highest );
    PyTuple_SET_ITEM( const_tuple_b1a9425458132655f48dab5a31bbd66b_tuple, 4, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_b1a9425458132655f48dab5a31bbd66b_tuple, 5, const_str_plain_end ); Py_INCREF( const_str_plain_end );
    const_str_plain_locationsAndDistances = UNSTREAM_STRING( &constant_bin[ 601838 ], 21, 1 );
    PyTuple_SET_ITEM( const_tuple_b1a9425458132655f48dab5a31bbd66b_tuple, 6, const_str_plain_locationsAndDistances ); Py_INCREF( const_str_plain_locationsAndDistances );
    const_str_plain_graph = UNSTREAM_STRING( &constant_bin[ 601859 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_b1a9425458132655f48dab5a31bbd66b_tuple, 7, const_str_plain_graph ); Py_INCREF( const_str_plain_graph );
    PyTuple_SET_ITEM( const_tuple_b1a9425458132655f48dab5a31bbd66b_tuple, 8, const_str_plain_startPos ); Py_INCREF( const_str_plain_startPos );
    const_str_plain_endPos = UNSTREAM_STRING( &constant_bin[ 601864 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_b1a9425458132655f48dab5a31bbd66b_tuple, 9, const_str_plain_endPos ); Py_INCREF( const_str_plain_endPos );
    const_str_plain_route = UNSTREAM_STRING( &constant_bin[ 601870 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_b1a9425458132655f48dab5a31bbd66b_tuple, 10, const_str_plain_route ); Py_INCREF( const_str_plain_route );
    PyTuple_SET_ITEM( const_tuple_b1a9425458132655f48dab5a31bbd66b_tuple, 11, const_str_plain_elevGain ); Py_INCREF( const_str_plain_elevGain );
    PyTuple_SET_ITEM( const_tuple_b1a9425458132655f48dab5a31bbd66b_tuple, 12, const_str_plain_latitudes ); Py_INCREF( const_str_plain_latitudes );
    PyTuple_SET_ITEM( const_tuple_b1a9425458132655f48dab5a31bbd66b_tuple, 13, const_str_plain_longitudes ); Py_INCREF( const_str_plain_longitudes );
    const_str_plain_getLocation = UNSTREAM_STRING( &constant_bin[ 601875 ], 11, 1 );
    const_str_digest_6a326b20e904cd8faf1a0f3dea2ad0aa = UNSTREAM_STRING( &constant_bin[ 601886 ], 3, 0 );
    const_tuple_int_0_str_digest_6a326b20e904cd8faf1a0f3dea2ad0aa_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_0_str_digest_6a326b20e904cd8faf1a0f3dea2ad0aa_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_str_digest_6a326b20e904cd8faf1a0f3dea2ad0aa_tuple, 1, const_str_digest_6a326b20e904cd8faf1a0f3dea2ad0aa ); Py_INCREF( const_str_digest_6a326b20e904cd8faf1a0f3dea2ad0aa );
    const_str_plain_legs = UNSTREAM_STRING( &constant_bin[ 601889 ], 4, 1 );
    const_str_plain_findPath = UNSTREAM_STRING( &constant_bin[ 601893 ], 8, 1 );
    const_dict_9d24b1b79df98beeec90b78551e5054c = _PyDict_NewPresized( 1 );
    const_str_digest_d5e0d422dd9b78878d08154962154e2b = UNSTREAM_STRING( &constant_bin[ 601901 ], 39, 0 );
    PyDict_SetItem( const_dict_9d24b1b79df98beeec90b78551e5054c, const_str_plain_key, const_str_digest_d5e0d422dd9b78878d08154962154e2b );
    assert( PyDict_Size( const_dict_9d24b1b79df98beeec90b78551e5054c ) == 1 );
    const_str_plain_end_location = UNSTREAM_STRING( &constant_bin[ 601940 ], 12, 1 );
    const_str_digest_05ed6dc3a4e12188005310479838f62b = UNSTREAM_STRING( &constant_bin[ 601952 ], 161, 0 );
    const_tuple_300f8bffd4fc08722cd415e96654fc4d_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 602113 ], 213 );
    const_float_inf = UNSTREAM_FLOAT( &constant_bin[ 602326 ] );
    const_str_digest_a40d36289ec487f7b9d5636eb0685e35 = UNSTREAM_STRING( &constant_bin[ 602334 ], 22, 0 );
    const_str_plain_directions_result = UNSTREAM_STRING( &constant_bin[ 602356 ], 17, 1 );
    const_str_digest_c76db5427dc8373e62bf4eeac3c74073 = UNSTREAM_STRING( &constant_bin[ 602373 ], 84, 0 );
    const_str_plain_costEstimate = UNSTREAM_STRING( &constant_bin[ 602457 ], 12, 1 );
    const_str_digest_6899e989af99a73f56b5bbc7438ff230 = UNSTREAM_STRING( &constant_bin[ 602469 ], 295, 0 );
    const_str_plain_optimalElevGain = UNSTREAM_STRING( &constant_bin[ 602764 ], 15, 1 );
    const_str_digest_9c5d660e82060902510eb162d4c8365b = UNSTREAM_STRING( &constant_bin[ 602779 ], 237, 0 );
    const_str_digest_944e2b5ff661e890802cfb2dbcb0ae0c = UNSTREAM_STRING( &constant_bin[ 603016 ], 18, 0 );
    const_str_plain_PriorityQueue = UNSTREAM_STRING( &constant_bin[ 603034 ], 13, 1 );
    const_tuple_str_plain_PriorityQueue_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PriorityQueue_tuple, 0, const_str_plain_PriorityQueue ); Py_INCREF( const_str_plain_PriorityQueue );
    const_str_plain_closestNode = UNSTREAM_STRING( &constant_bin[ 603047 ], 11, 1 );
    const_tuple_str_plain_node_str_plain_route_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_node_str_plain_route_tuple, 0, const_str_plain_node ); Py_INCREF( const_str_plain_node );
    PyTuple_SET_ITEM( const_tuple_str_plain_node_str_plain_route_tuple, 1, const_str_plain_route ); Py_INCREF( const_str_plain_route );
    const_str_digest_72e262a08dea3be9c502104232c4adda = UNSTREAM_STRING( &constant_bin[ 603058 ], 451, 0 );
    const_tuple_str_plain_getLocation_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_getLocation_tuple, 0, const_str_plain_getLocation ); Py_INCREF( const_str_plain_getLocation );
    const_str_plain_neighbors = UNSTREAM_STRING( &constant_bin[ 603509 ], 9, 1 );
    const_tuple_str_plain_makeGraph_str_plain_closestNode_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_makeGraph_str_plain_closestNode_tuple, 0, const_str_plain_makeGraph ); Py_INCREF( const_str_plain_makeGraph );
    PyTuple_SET_ITEM( const_tuple_str_plain_makeGraph_str_plain_closestNode_tuple, 1, const_str_plain_closestNode ); Py_INCREF( const_str_plain_closestNode );
    const_tuple_6a049d24e261ba2ee5c5fdc897d8ee15_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_6a049d24e261ba2ee5c5fdc897d8ee15_tuple, 0, const_str_plain_gmaps ); Py_INCREF( const_str_plain_gmaps );
    PyTuple_SET_ITEM( const_tuple_6a049d24e261ba2ee5c5fdc897d8ee15_tuple, 1, const_str_plain_n1 ); Py_INCREF( const_str_plain_n1 );
    PyTuple_SET_ITEM( const_tuple_6a049d24e261ba2ee5c5fdc897d8ee15_tuple, 2, const_str_plain_n2 ); Py_INCREF( const_str_plain_n2 );
    PyTuple_SET_ITEM( const_tuple_6a049d24e261ba2ee5c5fdc897d8ee15_tuple, 3, const_str_plain_directions_result ); Py_INCREF( const_str_plain_directions_result );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_findRoute( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_cbc97f1f6ef59d1ec35afae495f24c34;
static PyCodeObject *codeobj_6b5300e8f0a71303e54264505ec66d3c;
static PyCodeObject *codeobj_acbcfa4b08820401f4a1f95e3ab5bb6a;
static PyCodeObject *codeobj_fffecbe9c377e8fc54d77f44009910e3;
static PyCodeObject *codeobj_85c920256dff08ae48cb58551a19b9a8;
static PyCodeObject *codeobj_c779306001b314e9f5a8bb2e31cf6beb;
static PyCodeObject *codeobj_4616f80e7bc348b7a28b32412126d235;
static PyCodeObject *codeobj_13582593937b09c5223b3ce9d9df3d7c;
static PyCodeObject *codeobj_7cecd8c7e2ed60d24c7181cade166d79;
static PyCodeObject *codeobj_2d54863a5c2dcb0f96913b8a7d405277;
static PyCodeObject *codeobj_e973fcd599c53d1492a2d92d7837f607;
static PyCodeObject *codeobj_11f6487b93db8686e49a464bc020a25a;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_c76db5427dc8373e62bf4eeac3c74073;
    codeobj_cbc97f1f6ef59d1ec35afae495f24c34 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcontraction, 35, const_tuple_str_plain_node_str_plain_route_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6b5300e8f0a71303e54264505ec66d3c = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcontraction, 36, const_tuple_str_plain_node_str_plain_route_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_acbcfa4b08820401f4a1f95e3ab5bb6a = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcontraction, 81, const_tuple_str_plain_node_str_plain_route_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fffecbe9c377e8fc54d77f44009910e3 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcontraction, 82, const_tuple_str_plain_node_str_plain_route_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_85c920256dff08ae48cb58551a19b9a8 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_f931a9677f505d7cd94c67bbf81507b8, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_c779306001b314e9f5a8bb2e31cf6beb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_costEstimate, 160, const_tuple_str_plain_n1_str_plain_n2_str_plain_highest_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4616f80e7bc348b7a28b32412126d235 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_findPath, 178, const_tuple_11ee0fdf6750257cbcd18146d6363280_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_13582593937b09c5223b3ce9d9df3d7c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_findRoute, 14, const_tuple_b1a9425458132655f48dab5a31bbd66b_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7cecd8c7e2ed60d24c7181cade166d79 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getDistance, 144, const_tuple_6a049d24e261ba2ee5c5fdc897d8ee15_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2d54863a5c2dcb0f96913b8a7d405277 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getElevationFromPath, 199, const_tuple_9a018819b2491f2436066f8512cf9449_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e973fcd599c53d1492a2d92d7837f607 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_optimalElevGain, 40, const_tuple_300f8bffd4fc08722cd415e96654fc4d_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_11f6487b93db8686e49a464bc020a25a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reconstructPath, 121, const_tuple_e8448a24f87aa740b993350597dec5ce_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_findRoute$$$function_1_findRoute(  );


static PyObject *MAKE_FUNCTION_findRoute$$$function_2_optimalElevGain( PyObject *defaults );


static PyObject *MAKE_FUNCTION_findRoute$$$function_3_reconstructPath(  );


static PyObject *MAKE_FUNCTION_findRoute$$$function_4_getDistance(  );


static PyObject *MAKE_FUNCTION_findRoute$$$function_5_costEstimate(  );


static PyObject *MAKE_FUNCTION_findRoute$$$function_6_findPath(  );


static PyObject *MAKE_FUNCTION_findRoute$$$function_7_getElevationFromPath(  );


// The module function definitions.
static PyObject *impl_findRoute$$$function_1_findRoute( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_startAddr = python_pars[ 0 ];
    PyObject *par_endAddr = python_pars[ 1 ];
    PyObject *par_variance = python_pars[ 2 ];
    PyObject *par_highest = python_pars[ 3 ];
    PyObject *var_start = NULL;
    PyObject *var_end = NULL;
    PyObject *var_locationsAndDistances = NULL;
    PyObject *var_graph = NULL;
    PyObject *var_startPos = NULL;
    PyObject *var_endPos = NULL;
    PyObject *var_route = NULL;
    PyObject *var_elevGain = NULL;
    PyObject *var_latitudes = NULL;
    PyObject *var_longitudes = NULL;
    PyObject *outline_0_var_node = NULL;
    PyObject *outline_1_var_node = NULL;
    PyObject *tmp_listcontraction_1__$0 = NULL;
    PyObject *tmp_listcontraction_1__contraction = NULL;
    PyObject *tmp_listcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_listcontraction_2__$0 = NULL;
    PyObject *tmp_listcontraction_2__contraction = NULL;
    PyObject *tmp_listcontraction_2__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_list_2;
    PyObject *tmp_append_value_1;
    PyObject *tmp_append_value_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_cbc97f1f6ef59d1ec35afae495f24c34_2 = NULL;

    struct Nuitka_FrameObject *frame_cbc97f1f6ef59d1ec35afae495f24c34_2;

    static struct Nuitka_FrameObject *cache_frame_6b5300e8f0a71303e54264505ec66d3c_3 = NULL;

    struct Nuitka_FrameObject *frame_6b5300e8f0a71303e54264505ec66d3c_3;

    static struct Nuitka_FrameObject *cache_frame_13582593937b09c5223b3ce9d9df3d7c = NULL;

    struct Nuitka_FrameObject *frame_13582593937b09c5223b3ce9d9df3d7c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_13582593937b09c5223b3ce9d9df3d7c, codeobj_13582593937b09c5223b3ce9d9df3d7c, module_findRoute, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_13582593937b09c5223b3ce9d9df3d7c = cache_frame_13582593937b09c5223b3ce9d9df3d7c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_13582593937b09c5223b3ce9d9df3d7c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_13582593937b09c5223b3ce9d9df3d7c ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_getLocation );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getLocation );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getLocation" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_gmaps );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gmaps );
    }

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gmaps" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_startAddr;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_13582593937b09c5223b3ce9d9df3d7c->m_frame.f_lineno = 27;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_start == NULL );
    var_start = tmp_assign_source_1;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_getLocation );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getLocation );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getLocation" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 28;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_gmaps );

    if (unlikely( tmp_args_element_name_3 == NULL ))
    {
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gmaps );
    }

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gmaps" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 28;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_endAddr;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "endAddr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 28;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_13582593937b09c5223b3ce9d9df3d7c->m_frame.f_lineno = 28;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_end == NULL );
    var_end = tmp_assign_source_2;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_getFullNeighborsInfo );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getFullNeighborsInfo );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getFullNeighborsInfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_startAddr;

    if ( tmp_args_element_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "startAddr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_endAddr;

    if ( tmp_args_element_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "endAddr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = par_variance;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "variance" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_13582593937b09c5223b3ce9d9df3d7c->m_frame.f_lineno = 29;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_locationsAndDistances == NULL );
    var_locationsAndDistances = tmp_assign_source_3;

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_makeGraph );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_makeGraph );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "makeGraph" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 30;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = var_locationsAndDistances;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_13582593937b09c5223b3ce9d9df3d7c->m_frame.f_lineno = 30;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_graph == NULL );
    var_graph = tmp_assign_source_4;

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_closestNode );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_closestNode );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "closestNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = var_start;

    if ( tmp_args_element_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = var_graph;

    CHECK_OBJECT( tmp_args_element_name_10 );
    frame_13582593937b09c5223b3ce9d9df3d7c->m_frame.f_lineno = 32;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_startPos == NULL );
    var_startPos = tmp_assign_source_5;

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_closestNode );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_closestNode );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "closestNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = var_end;

    if ( tmp_args_element_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = var_graph;

    if ( tmp_args_element_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "graph" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_13582593937b09c5223b3ce9d9df3d7c->m_frame.f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_endPos == NULL );
    var_endPos = tmp_assign_source_6;

    // Tried code:
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_optimalElevGain );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_optimalElevGain );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "optimalElevGain" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_subscribed_name_1 = var_graph;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "graph" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_1 = var_startPos;

    if ( tmp_subscript_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "startPos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_subscribed_name_2 = var_graph;

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_args_element_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "graph" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_2 = var_endPos;

    if ( tmp_subscript_name_2 == NULL )
    {
        Py_DECREF( tmp_args_element_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "endPos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_13 );

        exception_lineno = 34;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_15 = par_variance;

    if ( tmp_args_element_name_15 == NULL )
    {
        Py_DECREF( tmp_args_element_name_13 );
        Py_DECREF( tmp_args_element_name_14 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "variance" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_16 = par_highest;

    if ( tmp_args_element_name_16 == NULL )
    {
        Py_DECREF( tmp_args_element_name_13 );
        Py_DECREF( tmp_args_element_name_14 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "highest" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_2;
    }

    frame_13582593937b09c5223b3ce9d9df3d7c->m_frame.f_lineno = 34;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_13 );
    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_8 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "oooooooooooooo";
        exception_lineno = 34;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_9 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "oooooooooooooo";
        exception_lineno = 34;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_iterator_name_1 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "oooooooooooooo";
                exception_lineno = 34;
                goto try_except_handler_3;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooooooooooooo";
        exception_lineno = 34;
        goto try_except_handler_3;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_10 );
    assert( var_route == NULL );
    Py_INCREF( tmp_assign_source_10 );
    var_route = tmp_assign_source_10;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_11 );
    assert( var_elevGain == NULL );
    Py_INCREF( tmp_assign_source_11 );
    var_elevGain = tmp_assign_source_11;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    tmp_iter_arg_2 = var_route;

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "route" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_4;
    }

    tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_4;
    }
    assert( tmp_listcontraction_1__$0 == NULL );
    tmp_listcontraction_1__$0 = tmp_assign_source_13;

    tmp_assign_source_14 = PyList_New( 0 );
    assert( tmp_listcontraction_1__contraction == NULL );
    tmp_listcontraction_1__contraction = tmp_assign_source_14;

    MAKE_OR_REUSE_FRAME( cache_frame_cbc97f1f6ef59d1ec35afae495f24c34_2, codeobj_cbc97f1f6ef59d1ec35afae495f24c34, module_findRoute, sizeof(void *)+sizeof(void *) );
    frame_cbc97f1f6ef59d1ec35afae495f24c34_2 = cache_frame_cbc97f1f6ef59d1ec35afae495f24c34_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cbc97f1f6ef59d1ec35afae495f24c34_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cbc97f1f6ef59d1ec35afae495f24c34_2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_listcontraction_1__$0;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_15 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_2 = "oo";
            exception_lineno = 35;
            goto try_except_handler_5;
        }
    }

    {
        PyObject *old = tmp_listcontraction_1__iter_value_0;
        tmp_listcontraction_1__iter_value_0 = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    tmp_assign_source_16 = tmp_listcontraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_16 );
    {
        PyObject *old = outline_0_var_node;
        outline_0_var_node = tmp_assign_source_16;
        Py_INCREF( outline_0_var_node );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_source_name_1 = outline_0_var_node;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_append_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_latitude );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_2 = "oo";
        goto try_except_handler_5;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_2 = "oo";
        goto try_except_handler_5;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_2 = "oo";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_1_findRoute );
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    Py_XDECREF( tmp_listcontraction_1__$0 );
    tmp_listcontraction_1__$0 = NULL;

    Py_XDECREF( tmp_listcontraction_1__contraction );
    tmp_listcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_1__iter_value_0 );
    tmp_listcontraction_1__iter_value_0 = NULL;

    goto frame_return_exit_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_listcontraction_1__$0 );
    tmp_listcontraction_1__$0 = NULL;

    Py_XDECREF( tmp_listcontraction_1__contraction );
    tmp_listcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_1__iter_value_0 );
    tmp_listcontraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cbc97f1f6ef59d1ec35afae495f24c34_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cbc97f1f6ef59d1ec35afae495f24c34_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_4;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cbc97f1f6ef59d1ec35afae495f24c34_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cbc97f1f6ef59d1ec35afae495f24c34_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cbc97f1f6ef59d1ec35afae495f24c34_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cbc97f1f6ef59d1ec35afae495f24c34_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cbc97f1f6ef59d1ec35afae495f24c34_2,
        type_description_2,
        outline_0_var_node,
        var_route
    );


    // Release cached frame.
    if ( frame_cbc97f1f6ef59d1ec35afae495f24c34_2 == cache_frame_cbc97f1f6ef59d1ec35afae495f24c34_2 )
    {
        Py_DECREF( frame_cbc97f1f6ef59d1ec35afae495f24c34_2 );
    }
    cache_frame_cbc97f1f6ef59d1ec35afae495f24c34_2 = NULL;

    assertFrameObject( frame_cbc97f1f6ef59d1ec35afae495f24c34_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_1_findRoute );
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    Py_XDECREF( outline_0_var_node );
    outline_0_var_node = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_0_var_node );
    outline_0_var_node = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_1_findRoute );
    return NULL;
    outline_exception_1:;
    exception_lineno = 35;
    goto frame_exception_exit_1;
    outline_result_1:;
    tmp_assign_source_12 = tmp_outline_return_value_1;
    assert( var_latitudes == NULL );
    var_latitudes = tmp_assign_source_12;

    // Tried code:
    tmp_iter_arg_3 = var_route;

    if ( tmp_iter_arg_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "route" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_6;
    }

    tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_6;
    }
    assert( tmp_listcontraction_2__$0 == NULL );
    tmp_listcontraction_2__$0 = tmp_assign_source_18;

    tmp_assign_source_19 = PyList_New( 0 );
    assert( tmp_listcontraction_2__contraction == NULL );
    tmp_listcontraction_2__contraction = tmp_assign_source_19;

    MAKE_OR_REUSE_FRAME( cache_frame_6b5300e8f0a71303e54264505ec66d3c_3, codeobj_6b5300e8f0a71303e54264505ec66d3c, module_findRoute, sizeof(void *)+sizeof(void *) );
    frame_6b5300e8f0a71303e54264505ec66d3c_3 = cache_frame_6b5300e8f0a71303e54264505ec66d3c_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6b5300e8f0a71303e54264505ec66d3c_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6b5300e8f0a71303e54264505ec66d3c_3 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_listcontraction_2__$0;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_20 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_20 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_2 = "oo";
            exception_lineno = 36;
            goto try_except_handler_7;
        }
    }

    {
        PyObject *old = tmp_listcontraction_2__iter_value_0;
        tmp_listcontraction_2__iter_value_0 = tmp_assign_source_20;
        Py_XDECREF( old );
    }

    tmp_assign_source_21 = tmp_listcontraction_2__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_21 );
    {
        PyObject *old = outline_1_var_node;
        outline_1_var_node = tmp_assign_source_21;
        Py_INCREF( outline_1_var_node );
        Py_XDECREF( old );
    }

    tmp_append_list_2 = tmp_listcontraction_2__contraction;

    CHECK_OBJECT( tmp_append_list_2 );
    tmp_source_name_2 = outline_1_var_node;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_append_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_longitude );
    if ( tmp_append_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_2 = "oo";
        goto try_except_handler_7;
    }
    assert( PyList_Check( tmp_append_list_2 ) );
    tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
    Py_DECREF( tmp_append_value_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_2 = "oo";
        goto try_except_handler_7;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_2 = "oo";
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_2 = tmp_listcontraction_2__contraction;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_1_findRoute );
    return NULL;
    // Return handler code:
    try_return_handler_7:;
    Py_XDECREF( tmp_listcontraction_2__$0 );
    tmp_listcontraction_2__$0 = NULL;

    Py_XDECREF( tmp_listcontraction_2__contraction );
    tmp_listcontraction_2__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_2__iter_value_0 );
    tmp_listcontraction_2__iter_value_0 = NULL;

    goto frame_return_exit_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_listcontraction_2__$0 );
    tmp_listcontraction_2__$0 = NULL;

    Py_XDECREF( tmp_listcontraction_2__contraction );
    tmp_listcontraction_2__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_2__iter_value_0 );
    tmp_listcontraction_2__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_3;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b5300e8f0a71303e54264505ec66d3c_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_3:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b5300e8f0a71303e54264505ec66d3c_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_6;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b5300e8f0a71303e54264505ec66d3c_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6b5300e8f0a71303e54264505ec66d3c_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6b5300e8f0a71303e54264505ec66d3c_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6b5300e8f0a71303e54264505ec66d3c_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6b5300e8f0a71303e54264505ec66d3c_3,
        type_description_2,
        outline_1_var_node,
        var_route
    );


    // Release cached frame.
    if ( frame_6b5300e8f0a71303e54264505ec66d3c_3 == cache_frame_6b5300e8f0a71303e54264505ec66d3c_3 )
    {
        Py_DECREF( frame_6b5300e8f0a71303e54264505ec66d3c_3 );
    }
    cache_frame_6b5300e8f0a71303e54264505ec66d3c_3 = NULL;

    assertFrameObject( frame_6b5300e8f0a71303e54264505ec66d3c_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;
    type_description_1 = "oooooooooooooo";
    goto try_except_handler_6;
    skip_nested_handling_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_1_findRoute );
    return NULL;
    // Return handler code:
    try_return_handler_6:;
    Py_XDECREF( outline_1_var_node );
    outline_1_var_node = NULL;

    goto outline_result_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_1_var_node );
    outline_1_var_node = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_1_findRoute );
    return NULL;
    outline_exception_2:;
    exception_lineno = 36;
    goto frame_exception_exit_1;
    outline_result_2:;
    tmp_assign_source_17 = tmp_outline_return_value_2;
    assert( var_longitudes == NULL );
    var_longitudes = tmp_assign_source_17;

    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_plotMap );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_plotMap );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "plotMap" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_17 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_latitudes;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_element_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "latitudes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_17, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_longitudes;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_17, 1, tmp_tuple_element_1 );
    frame_13582593937b09c5223b3ce9d9df3d7c->m_frame.f_lineno = 37;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_17 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = var_elevGain;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "elevGain" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_13582593937b09c5223b3ce9d9df3d7c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_13582593937b09c5223b3ce9d9df3d7c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_13582593937b09c5223b3ce9d9df3d7c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_13582593937b09c5223b3ce9d9df3d7c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_13582593937b09c5223b3ce9d9df3d7c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_13582593937b09c5223b3ce9d9df3d7c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_13582593937b09c5223b3ce9d9df3d7c,
        type_description_1,
        par_startAddr,
        par_endAddr,
        par_variance,
        par_highest,
        var_start,
        var_end,
        var_locationsAndDistances,
        var_graph,
        var_startPos,
        var_endPos,
        var_route,
        var_elevGain,
        var_latitudes,
        var_longitudes
    );


    // Release cached frame.
    if ( frame_13582593937b09c5223b3ce9d9df3d7c == cache_frame_13582593937b09c5223b3ce9d9df3d7c )
    {
        Py_DECREF( frame_13582593937b09c5223b3ce9d9df3d7c );
    }
    cache_frame_13582593937b09c5223b3ce9d9df3d7c = NULL;

    assertFrameObject( frame_13582593937b09c5223b3ce9d9df3d7c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_1_findRoute );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_startAddr );
    par_startAddr = NULL;

    Py_XDECREF( par_endAddr );
    par_endAddr = NULL;

    Py_XDECREF( par_variance );
    par_variance = NULL;

    Py_XDECREF( par_highest );
    par_highest = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_end );
    var_end = NULL;

    Py_XDECREF( var_locationsAndDistances );
    var_locationsAndDistances = NULL;

    Py_XDECREF( var_graph );
    var_graph = NULL;

    Py_XDECREF( var_startPos );
    var_startPos = NULL;

    Py_XDECREF( var_endPos );
    var_endPos = NULL;

    Py_XDECREF( var_route );
    var_route = NULL;

    Py_XDECREF( var_elevGain );
    var_elevGain = NULL;

    Py_XDECREF( var_latitudes );
    var_latitudes = NULL;

    Py_XDECREF( var_longitudes );
    var_longitudes = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_startAddr );
    par_startAddr = NULL;

    Py_XDECREF( par_endAddr );
    par_endAddr = NULL;

    Py_XDECREF( par_variance );
    par_variance = NULL;

    Py_XDECREF( par_highest );
    par_highest = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_end );
    var_end = NULL;

    Py_XDECREF( var_locationsAndDistances );
    var_locationsAndDistances = NULL;

    Py_XDECREF( var_graph );
    var_graph = NULL;

    Py_XDECREF( var_startPos );
    var_startPos = NULL;

    Py_XDECREF( var_endPos );
    var_endPos = NULL;

    Py_XDECREF( var_route );
    var_route = NULL;

    Py_XDECREF( var_elevGain );
    var_elevGain = NULL;

    Py_XDECREF( var_latitudes );
    var_latitudes = NULL;

    Py_XDECREF( var_longitudes );
    var_longitudes = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_1_findRoute );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_findRoute$$$function_2_optimalElevGain( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_start = python_pars[ 0 ];
    PyObject *par_goal = python_pars[ 1 ];
    PyObject *par_variance = python_pars[ 2 ];
    PyObject *par_highest = python_pars[ 3 ];
    PyObject *var_shortestDistance = NULL;
    PyObject *var_maxDistance = NULL;
    PyObject *var_closedSet = NULL;
    PyObject *var_distances = NULL;
    PyObject *var_openSet = NULL;
    PyObject *var_cameFrom = NULL;
    PyObject *var_gScore = NULL;
    PyObject *var_fScore = NULL;
    PyObject *var_path = NULL;
    PyObject *var_score = NULL;
    PyObject *var_distance = NULL;
    PyObject *var_currNode = NULL;
    PyObject *var_route = NULL;
    PyObject *var_latitudes = NULL;
    PyObject *var_longitudes = NULL;
    PyObject *var_neighbor = NULL;
    PyObject *var_dist = NULL;
    PyObject *var_currgScore = NULL;
    PyObject *outline_0_var_node = NULL;
    PyObject *outline_1_var_node = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcontraction_1__$0 = NULL;
    PyObject *tmp_listcontraction_1__contraction = NULL;
    PyObject *tmp_listcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_listcontraction_2__$0 = NULL;
    PyObject *tmp_listcontraction_2__contraction = NULL;
    PyObject *tmp_listcontraction_2__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_list_2;
    PyObject *tmp_append_value_1;
    PyObject *tmp_append_value_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_args_element_name_22;
    PyObject *tmp_args_element_name_23;
    PyObject *tmp_args_element_name_24;
    PyObject *tmp_args_element_name_25;
    PyObject *tmp_args_element_name_26;
    PyObject *tmp_args_element_name_27;
    PyObject *tmp_args_element_name_28;
    PyObject *tmp_args_element_name_29;
    PyObject *tmp_args_element_name_30;
    PyObject *tmp_args_element_name_31;
    PyObject *tmp_args_element_name_32;
    PyObject *tmp_args_element_name_33;
    PyObject *tmp_args_element_name_34;
    PyObject *tmp_args_element_name_35;
    PyObject *tmp_args_element_name_36;
    PyObject *tmp_args_element_name_37;
    PyObject *tmp_args_element_name_38;
    PyObject *tmp_args_element_name_39;
    PyObject *tmp_args_element_name_40;
    PyObject *tmp_args_element_name_41;
    PyObject *tmp_args_element_name_42;
    PyObject *tmp_args_element_name_43;
    PyObject *tmp_args_element_name_44;
    PyObject *tmp_args_element_name_45;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscribed_4;
    PyObject *tmp_ass_subscribed_5;
    PyObject *tmp_ass_subscribed_6;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subscript_4;
    PyObject *tmp_ass_subscript_5;
    PyObject *tmp_ass_subscript_6;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_ass_subvalue_4;
    PyObject *tmp_ass_subvalue_5;
    PyObject *tmp_ass_subvalue_6;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
    PyObject *tmp_called_name_19;
    PyObject *tmp_called_name_20;
    PyObject *tmp_called_name_21;
    PyObject *tmp_called_name_22;
    PyObject *tmp_called_name_23;
    PyObject *tmp_called_name_24;
    PyObject *tmp_called_name_25;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_In_1;
    int tmp_cmp_Lt_1;
    int tmp_cmp_Lt_2;
    int tmp_cmp_NotIn_1;
    int tmp_cmp_NotIn_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_left_name_9;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    PyObject *tmp_right_name_9;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscribed_name_9;
    PyObject *tmp_subscribed_name_10;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_subscript_name_9;
    PyObject *tmp_subscript_name_10;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_acbcfa4b08820401f4a1f95e3ab5bb6a_2 = NULL;

    struct Nuitka_FrameObject *frame_acbcfa4b08820401f4a1f95e3ab5bb6a_2;

    static struct Nuitka_FrameObject *cache_frame_fffecbe9c377e8fc54d77f44009910e3_3 = NULL;

    struct Nuitka_FrameObject *frame_fffecbe9c377e8fc54d77f44009910e3_3;

    static struct Nuitka_FrameObject *cache_frame_e973fcd599c53d1492a2d92d7837f607 = NULL;

    struct Nuitka_FrameObject *frame_e973fcd599c53d1492a2d92d7837f607;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e973fcd599c53d1492a2d92d7837f607, codeobj_e973fcd599c53d1492a2d92d7837f607, module_findRoute, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e973fcd599c53d1492a2d92d7837f607 = cache_frame_e973fcd599c53d1492a2d92d7837f607;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e973fcd599c53d1492a2d92d7837f607 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e973fcd599c53d1492a2d92d7837f607 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_getDistance );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getDistance );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getDistance" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_gmaps );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gmaps );
    }

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gmaps" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_start;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_goal;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 55;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_shortestDistance == NULL );
    var_shortestDistance = tmp_assign_source_1;

    tmp_left_name_1 = par_variance;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "variance" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = var_shortestDistance;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_assign_source_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_maxDistance == NULL );
    var_maxDistance = tmp_assign_source_2;

    tmp_assign_source_3 = PySet_New( NULL );
    assert( var_closedSet == NULL );
    var_closedSet = tmp_assign_source_3;

    tmp_assign_source_4 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = par_start;

    if ( tmp_dict_key_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = const_int_0;
    tmp_res = PyDict_SetItem( tmp_assign_source_4, tmp_dict_key_1, tmp_dict_value_1 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_4 );

        exception_lineno = 62;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_distances == NULL );
    var_distances = tmp_assign_source_4;

    tmp_assign_source_5 = PySet_New( NULL );
    assert( var_openSet == NULL );
    var_openSet = tmp_assign_source_5;

    tmp_source_name_1 = var_openSet;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_start;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 65;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_6 = PyDict_New();
    assert( var_cameFrom == NULL );
    var_cameFrom = tmp_assign_source_6;

    tmp_assign_source_7 = PyDict_New();
    assert( var_gScore == NULL );
    var_gScore = tmp_assign_source_7;

    tmp_dictset_value = const_int_0;
    tmp_dictset_dict = var_gScore;

    CHECK_OBJECT( tmp_dictset_dict );
    tmp_dictset_key = par_start;

    if ( tmp_dictset_key == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_PriorityQueue );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PriorityQueue );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PriorityQueue" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 74;
    tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_fScore == NULL );
    var_fScore = tmp_assign_source_8;

    tmp_source_name_2 = var_fScore;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_put );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = PyTuple_New( 3 );
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_costEstimate );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_costEstimate );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "costEstimate" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_start;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = par_goal;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "goal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = par_highest;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "highest" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 75;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 75;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_1 );
    tmp_subscribed_name_1 = var_distances;

    if ( tmp_subscribed_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "distances" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = par_start;

    if ( tmp_subscript_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 75;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_start;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_5, 2, tmp_tuple_element_1 );
    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 75;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_9 = PyList_New( 0 );
    assert( var_path == NULL );
    var_path = tmp_assign_source_9;

    loop_start_1:;
    tmp_cond_value_1 = var_openSet;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "openSet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    // Tried code:
    tmp_called_instance_1 = var_fScore;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fScore" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 78;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
    if ( tmp_assign_source_11 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "oooooooooooooooooooooo";
        exception_lineno = 78;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
    if ( tmp_assign_source_12 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "oooooooooooooooooooooo";
        exception_lineno = 78;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
    if ( tmp_assign_source_13 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "oooooooooooooooooooooo";
        exception_lineno = 78;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_3;
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_iterator_name_1 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "oooooooooooooooooooooo";
                exception_lineno = 78;
                goto try_except_handler_3;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooooooooooooooooooooo";
        exception_lineno = 78;
        goto try_except_handler_3;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_14 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_14 );
    {
        PyObject *old = var_score;
        var_score = tmp_assign_source_14;
        Py_INCREF( var_score );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_15 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_15 );
    {
        PyObject *old = var_distance;
        var_distance = tmp_assign_source_15;
        Py_INCREF( var_distance );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_16 = tmp_tuple_unpack_1__element_3;

    CHECK_OBJECT( tmp_assign_source_16 );
    {
        PyObject *old = var_currNode;
        var_currNode = tmp_assign_source_16;
        Py_INCREF( var_currNode );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    tmp_compare_left_1 = var_currNode;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "currNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = par_goal;

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "goal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_reconstructPath );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_reconstructPath );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "reconstructPath" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = var_cameFrom;

    if ( tmp_args_element_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cameFrom" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = par_start;

    if ( tmp_args_element_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = var_currNode;

    if ( tmp_args_element_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "currNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 80;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
    }

    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_route;
        var_route = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = var_route;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_listcontraction_1__$0;
        tmp_listcontraction_1__$0 = tmp_assign_source_19;
        Py_XDECREF( old );
    }

    tmp_assign_source_20 = PyList_New( 0 );
    {
        PyObject *old = tmp_listcontraction_1__contraction;
        tmp_listcontraction_1__contraction = tmp_assign_source_20;
        Py_XDECREF( old );
    }

    MAKE_OR_REUSE_FRAME( cache_frame_acbcfa4b08820401f4a1f95e3ab5bb6a_2, codeobj_acbcfa4b08820401f4a1f95e3ab5bb6a, module_findRoute, sizeof(void *)+sizeof(void *) );
    frame_acbcfa4b08820401f4a1f95e3ab5bb6a_2 = cache_frame_acbcfa4b08820401f4a1f95e3ab5bb6a_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_acbcfa4b08820401f4a1f95e3ab5bb6a_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_acbcfa4b08820401f4a1f95e3ab5bb6a_2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_2:;
    tmp_next_source_1 = tmp_listcontraction_1__$0;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_21 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_21 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_2 = "oo";
            exception_lineno = 81;
            goto try_except_handler_5;
        }
    }

    {
        PyObject *old = tmp_listcontraction_1__iter_value_0;
        tmp_listcontraction_1__iter_value_0 = tmp_assign_source_21;
        Py_XDECREF( old );
    }

    tmp_assign_source_22 = tmp_listcontraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_22 );
    {
        PyObject *old = outline_0_var_node;
        outline_0_var_node = tmp_assign_source_22;
        Py_INCREF( outline_0_var_node );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_source_name_3 = outline_0_var_node;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_append_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_latitude );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_2 = "oo";
        goto try_except_handler_5;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_2 = "oo";
        goto try_except_handler_5;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_2 = "oo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_2_optimalElevGain );
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    Py_XDECREF( tmp_listcontraction_1__$0 );
    tmp_listcontraction_1__$0 = NULL;

    Py_XDECREF( tmp_listcontraction_1__contraction );
    tmp_listcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_1__iter_value_0 );
    tmp_listcontraction_1__iter_value_0 = NULL;

    goto frame_return_exit_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_listcontraction_1__$0 );
    tmp_listcontraction_1__$0 = NULL;

    Py_XDECREF( tmp_listcontraction_1__contraction );
    tmp_listcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_1__iter_value_0 );
    tmp_listcontraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_acbcfa4b08820401f4a1f95e3ab5bb6a_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_acbcfa4b08820401f4a1f95e3ab5bb6a_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_4;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_acbcfa4b08820401f4a1f95e3ab5bb6a_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_acbcfa4b08820401f4a1f95e3ab5bb6a_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_acbcfa4b08820401f4a1f95e3ab5bb6a_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_acbcfa4b08820401f4a1f95e3ab5bb6a_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_acbcfa4b08820401f4a1f95e3ab5bb6a_2,
        type_description_2,
        outline_0_var_node,
        var_route
    );


    // Release cached frame.
    if ( frame_acbcfa4b08820401f4a1f95e3ab5bb6a_2 == cache_frame_acbcfa4b08820401f4a1f95e3ab5bb6a_2 )
    {
        Py_DECREF( frame_acbcfa4b08820401f4a1f95e3ab5bb6a_2 );
    }
    cache_frame_acbcfa4b08820401f4a1f95e3ab5bb6a_2 = NULL;

    assertFrameObject( frame_acbcfa4b08820401f4a1f95e3ab5bb6a_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oooooooooooooooooooooo";
    goto try_except_handler_4;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_2_optimalElevGain );
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    Py_XDECREF( outline_0_var_node );
    outline_0_var_node = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_0_var_node );
    outline_0_var_node = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_2_optimalElevGain );
    return NULL;
    outline_exception_1:;
    exception_lineno = 81;
    goto frame_exception_exit_1;
    outline_result_1:;
    tmp_assign_source_18 = tmp_outline_return_value_1;
    {
        PyObject *old = var_latitudes;
        var_latitudes = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_3 = var_route;

    if ( tmp_iter_arg_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "route" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_6;
    }

    tmp_assign_source_24 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_listcontraction_2__$0;
        tmp_listcontraction_2__$0 = tmp_assign_source_24;
        Py_XDECREF( old );
    }

    tmp_assign_source_25 = PyList_New( 0 );
    {
        PyObject *old = tmp_listcontraction_2__contraction;
        tmp_listcontraction_2__contraction = tmp_assign_source_25;
        Py_XDECREF( old );
    }

    MAKE_OR_REUSE_FRAME( cache_frame_fffecbe9c377e8fc54d77f44009910e3_3, codeobj_fffecbe9c377e8fc54d77f44009910e3, module_findRoute, sizeof(void *)+sizeof(void *) );
    frame_fffecbe9c377e8fc54d77f44009910e3_3 = cache_frame_fffecbe9c377e8fc54d77f44009910e3_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fffecbe9c377e8fc54d77f44009910e3_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fffecbe9c377e8fc54d77f44009910e3_3 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_3:;
    tmp_next_source_2 = tmp_listcontraction_2__$0;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_26 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_26 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_2 = "oo";
            exception_lineno = 82;
            goto try_except_handler_7;
        }
    }

    {
        PyObject *old = tmp_listcontraction_2__iter_value_0;
        tmp_listcontraction_2__iter_value_0 = tmp_assign_source_26;
        Py_XDECREF( old );
    }

    tmp_assign_source_27 = tmp_listcontraction_2__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_27 );
    {
        PyObject *old = outline_1_var_node;
        outline_1_var_node = tmp_assign_source_27;
        Py_INCREF( outline_1_var_node );
        Py_XDECREF( old );
    }

    tmp_append_list_2 = tmp_listcontraction_2__contraction;

    CHECK_OBJECT( tmp_append_list_2 );
    tmp_source_name_4 = outline_1_var_node;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_append_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_longitude );
    if ( tmp_append_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_2 = "oo";
        goto try_except_handler_7;
    }
    assert( PyList_Check( tmp_append_list_2 ) );
    tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
    Py_DECREF( tmp_append_value_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_2 = "oo";
        goto try_except_handler_7;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_2 = "oo";
        goto try_except_handler_7;
    }
    goto loop_start_3;
    loop_end_3:;
    tmp_outline_return_value_2 = tmp_listcontraction_2__contraction;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_2_optimalElevGain );
    return NULL;
    // Return handler code:
    try_return_handler_7:;
    Py_XDECREF( tmp_listcontraction_2__$0 );
    tmp_listcontraction_2__$0 = NULL;

    Py_XDECREF( tmp_listcontraction_2__contraction );
    tmp_listcontraction_2__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_2__iter_value_0 );
    tmp_listcontraction_2__iter_value_0 = NULL;

    goto frame_return_exit_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_listcontraction_2__$0 );
    tmp_listcontraction_2__$0 = NULL;

    Py_XDECREF( tmp_listcontraction_2__contraction );
    tmp_listcontraction_2__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_2__iter_value_0 );
    tmp_listcontraction_2__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_3;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fffecbe9c377e8fc54d77f44009910e3_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_3:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fffecbe9c377e8fc54d77f44009910e3_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_6;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fffecbe9c377e8fc54d77f44009910e3_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fffecbe9c377e8fc54d77f44009910e3_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fffecbe9c377e8fc54d77f44009910e3_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fffecbe9c377e8fc54d77f44009910e3_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fffecbe9c377e8fc54d77f44009910e3_3,
        type_description_2,
        outline_1_var_node,
        var_route
    );


    // Release cached frame.
    if ( frame_fffecbe9c377e8fc54d77f44009910e3_3 == cache_frame_fffecbe9c377e8fc54d77f44009910e3_3 )
    {
        Py_DECREF( frame_fffecbe9c377e8fc54d77f44009910e3_3 );
    }
    cache_frame_fffecbe9c377e8fc54d77f44009910e3_3 = NULL;

    assertFrameObject( frame_fffecbe9c377e8fc54d77f44009910e3_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;
    type_description_1 = "oooooooooooooooooooooo";
    goto try_except_handler_6;
    skip_nested_handling_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_2_optimalElevGain );
    return NULL;
    // Return handler code:
    try_return_handler_6:;
    Py_XDECREF( outline_1_var_node );
    outline_1_var_node = NULL;

    goto outline_result_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_1_var_node );
    outline_1_var_node = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_2_optimalElevGain );
    return NULL;
    outline_exception_2:;
    exception_lineno = 82;
    goto frame_exception_exit_1;
    outline_result_2:;
    tmp_assign_source_23 = tmp_outline_return_value_2;
    {
        PyObject *old = var_longitudes;
        var_longitudes = tmp_assign_source_23;
        Py_XDECREF( old );
    }

    tmp_cond_value_2 = par_highest;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "highest" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_return_value = PyTuple_New( 3 );
    tmp_tuple_element_2 = var_latitudes;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "latitudes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_longitudes;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
    tmp_called_name_7 = LOOKUP_BUILTIN( const_str_plain_round );
    assert( tmp_called_name_7 != NULL );
    tmp_args_element_name_12 = var_score;

    if ( tmp_args_element_name_12 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "score" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 84;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 84;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 84;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_2 );
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_return_value = PyTuple_New( 3 );
    tmp_tuple_element_3 = var_latitudes;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "latitudes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_longitudes;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
    tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_round );
    assert( tmp_called_name_8 != NULL );
    tmp_args_element_name_13 = var_score;

    if ( tmp_args_element_name_13 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "score" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 85;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 85;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_3 );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_compare_left_2 = var_currNode;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "currNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = var_openSet;

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "openSet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    goto loop_start_1;
    branch_no_4:;
    tmp_source_name_5 = var_openSet;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "openSet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_remove );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_14 = var_currNode;

    if ( tmp_args_element_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "currNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 88;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_6 = var_closedSet;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "closedSet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_add );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_15 = var_currNode;

    if ( tmp_args_element_name_15 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "currNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 89;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_7 = var_currNode;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "currNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_neighbors );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 91;
    tmp_iter_arg_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_items );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_28 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = tmp_for_loop_1__for_iterator;
        tmp_for_loop_1__for_iterator = tmp_assign_source_28;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_4:;
    tmp_next_source_3 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_3 );
    tmp_assign_source_29 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_29 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_4;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooooooooo";
            exception_lineno = 91;
            goto try_except_handler_8;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_29;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_5 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_5 );
    tmp_assign_source_30 = MAKE_ITERATOR( tmp_iter_arg_5 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_9;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter;
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_30;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_31 = UNPACK_NEXT( tmp_unpack_4, 0, 2 );
    if ( tmp_assign_source_31 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "oooooooooooooooooooooo";
        exception_lineno = 91;
        goto try_except_handler_10;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_1;
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_31;
        Py_XDECREF( old );
    }

    tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_5 );
    tmp_assign_source_32 = UNPACK_NEXT( tmp_unpack_5, 1, 2 );
    if ( tmp_assign_source_32 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "oooooooooooooooooooooo";
        exception_lineno = 91;
        goto try_except_handler_10;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_2;
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_32;
        Py_XDECREF( old );
    }

    tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_iterator_name_2 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "oooooooooooooooooooooo";
                exception_lineno = 91;
                goto try_except_handler_10;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooooooooooooooooooooo";
        exception_lineno = 91;
        goto try_except_handler_10;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_9;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_8;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_33 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_33 );
    {
        PyObject *old = var_neighbor;
        var_neighbor = tmp_assign_source_33;
        Py_INCREF( var_neighbor );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_34 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_34 );
    {
        PyObject *old = var_dist;
        var_dist = tmp_assign_source_34;
        Py_INCREF( var_dist );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_compare_left_3 = var_neighbor;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neighbor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_compare_right_3 = var_closedSet;

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "closedSet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_left_name_2 = var_dist;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dist" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_subscribed_name_2 = var_distances;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "distances" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_subscript_name_2 = var_currNode;

    if ( tmp_subscript_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "currNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_compare_left_4 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_subscribed_name_3 = var_distances;

    if ( tmp_subscribed_name_3 == NULL )
    {
        Py_DECREF( tmp_compare_left_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "distances" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_subscript_name_3 = var_neighbor;

    if ( tmp_subscript_name_3 == NULL )
    {
        Py_DECREF( tmp_compare_left_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neighbor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_compare_right_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 93;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );
        Py_DECREF( tmp_compare_right_4 );

        exception_lineno = 93;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_compare_left_4 );
    Py_DECREF( tmp_compare_right_4 );
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_8 = var_gScore;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "gScore" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_get );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_args_element_name_16 = var_currNode;

    if ( tmp_args_element_name_16 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "currNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_17 = const_float_inf;
    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 95;
    {
        PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
        tmp_left_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_costEstimate );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_costEstimate );
    }

    if ( tmp_called_name_12 == NULL )
    {
        Py_DECREF( tmp_left_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "costEstimate" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_18 = var_currNode;

    if ( tmp_args_element_name_18 == NULL )
    {
        Py_DECREF( tmp_left_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "currNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_19 = var_neighbor;

    if ( tmp_args_element_name_19 == NULL )
    {
        Py_DECREF( tmp_left_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neighbor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_20 = par_highest;

    if ( tmp_args_element_name_20 == NULL )
    {
        Py_DECREF( tmp_left_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "highest" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 95;
    {
        PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
        tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_12, call_args );
    }

    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 95;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_assign_source_35 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    {
        PyObject *old = var_currgScore;
        var_currgScore = tmp_assign_source_35;
        Py_XDECREF( old );
    }

    tmp_ass_subvalue_1 = var_currgScore;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_ass_subscribed_1 = var_gScore;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "gScore" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_ass_subscript_1 = var_neighbor;

    if ( tmp_ass_subscript_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neighbor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_source_name_9 = var_fScore;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fScore" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_put );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_args_element_name_21 = PyTuple_New( 3 );
    tmp_called_name_14 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_costEstimate );

    if (unlikely( tmp_called_name_14 == NULL ))
    {
        tmp_called_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_costEstimate );
    }

    if ( tmp_called_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "costEstimate" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_22 = var_neighbor;

    if ( tmp_args_element_name_22 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_21 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neighbor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_23 = par_goal;

    if ( tmp_args_element_name_23 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_21 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "goal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_24 = par_highest;

    if ( tmp_args_element_name_24 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_21 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "highest" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 97;
    {
        PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24 };
        tmp_left_name_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_14, call_args );
    }

    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_21 );

        exception_lineno = 97;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_subscribed_name_4 = var_gScore;

    if ( tmp_subscribed_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_21 );
        Py_DECREF( tmp_left_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "gScore" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_subscript_name_4 = var_neighbor;

    if ( tmp_subscript_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_21 );
        Py_DECREF( tmp_left_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neighbor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_right_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_21 );
        Py_DECREF( tmp_left_name_4 );

        exception_lineno = 97;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_tuple_element_4 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_21 );

        exception_lineno = 97;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_21, 0, tmp_tuple_element_4 );
    tmp_subscribed_name_5 = var_distances;

    if ( tmp_subscribed_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_21 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "distances" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_subscript_name_5 = var_neighbor;

    if ( tmp_subscript_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_21 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neighbor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_tuple_element_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_21 );

        exception_lineno = 97;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_21, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_neighbor;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_21 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neighbor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_element_name_21, 2, tmp_tuple_element_4 );
    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 97;
    {
        PyObject *call_args[] = { tmp_args_element_name_21 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_element_name_21 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_10 = var_openSet;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "openSet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 98;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_add );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_args_element_name_25 = var_neighbor;

    if ( tmp_args_element_name_25 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neighbor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 98;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 98;
    {
        PyObject *call_args[] = { tmp_args_element_name_25 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_11 = var_closedSet;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "closedSet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_remove );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_args_element_name_26 = var_neighbor;

    if ( tmp_args_element_name_26 == NULL )
    {
        Py_DECREF( tmp_called_name_16 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neighbor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 99;
    {
        PyObject *call_args[] = { tmp_args_element_name_26 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_called_name_16 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_unused );
    tmp_left_name_5 = var_dist;

    if ( tmp_left_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dist" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_subscribed_name_6 = var_distances;

    if ( tmp_subscribed_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "distances" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_subscript_name_6 = var_currNode;

    if ( tmp_subscript_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "currNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_right_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_ass_subvalue_2 = BINARY_OPERATION_ADD( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_ass_subscribed_2 = var_distances;

    if ( tmp_ass_subscribed_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "distances" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_ass_subscript_2 = var_neighbor;

    if ( tmp_ass_subscript_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neighbor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_ass_subvalue_3 = var_currNode;

    if ( tmp_ass_subvalue_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "currNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_ass_subscribed_3 = var_cameFrom;

    if ( tmp_ass_subscribed_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cameFrom" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_ass_subscript_3 = var_neighbor;

    if ( tmp_ass_subscript_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neighbor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    branch_no_6:;
    goto loop_start_4;
    branch_no_5:;
    tmp_subscribed_name_7 = var_distances;

    if ( tmp_subscribed_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "distances" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_subscript_name_7 = var_currNode;

    if ( tmp_subscript_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "currNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_left_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_left_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_right_name_6 = var_dist;

    if ( tmp_right_name_6 == NULL )
    {
        Py_DECREF( tmp_left_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dist" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_compare_left_5 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_6 );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_compare_right_5 = var_maxDistance;

    if ( tmp_compare_right_5 == NULL )
    {
        Py_DECREF( tmp_compare_left_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "maxDistance" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        exception_lineno = 105;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_compare_left_5 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    goto loop_start_4;
    branch_no_7:;
    tmp_compare_left_6 = var_neighbor;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neighbor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_compare_right_6 = var_openSet;

    if ( tmp_compare_right_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "openSet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_cmp_NotIn_2 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    assert( !(tmp_cmp_NotIn_2 == -1) );
    if ( tmp_cmp_NotIn_2 == 0 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_source_name_12 = var_openSet;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "openSet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_add );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_args_element_name_27 = var_neighbor;

    if ( tmp_args_element_name_27 == NULL )
    {
        Py_DECREF( tmp_called_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neighbor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 108;
    {
        PyObject *call_args[] = { tmp_args_element_name_27 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_called_name_17 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_unused );
    branch_no_8:;
    tmp_called_name_18 = LOOKUP_BUILTIN( const_str_plain_min );
    assert( tmp_called_name_18 != NULL );
    tmp_source_name_13 = var_distances;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "distances" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_get );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_args_element_name_29 = var_neighbor;

    if ( tmp_args_element_name_29 == NULL )
    {
        Py_DECREF( tmp_called_name_19 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neighbor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_30 = const_float_inf;
    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 109;
    {
        PyObject *call_args[] = { tmp_args_element_name_29, tmp_args_element_name_30 };
        tmp_args_element_name_28 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_called_name_19 );
    if ( tmp_args_element_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_subscribed_name_8 = var_distances;

    if ( tmp_subscribed_name_8 == NULL )
    {
        Py_DECREF( tmp_args_element_name_28 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "distances" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_subscript_name_8 = var_currNode;

    if ( tmp_subscript_name_8 == NULL )
    {
        Py_DECREF( tmp_args_element_name_28 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "currNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_left_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_left_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_28 );

        exception_lineno = 109;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_right_name_7 = var_dist;

    if ( tmp_right_name_7 == NULL )
    {
        Py_DECREF( tmp_args_element_name_28 );
        Py_DECREF( tmp_left_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dist" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_31 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_left_name_7 );
    if ( tmp_args_element_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_28 );

        exception_lineno = 109;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 109;
    {
        PyObject *call_args[] = { tmp_args_element_name_28, tmp_args_element_name_31 };
        tmp_ass_subvalue_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_args_element_name_28 );
    Py_DECREF( tmp_args_element_name_31 );
    if ( tmp_ass_subvalue_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_ass_subscribed_4 = var_distances;

    if ( tmp_ass_subscribed_4 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "distances" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_ass_subscript_4 = var_neighbor;

    if ( tmp_ass_subscript_4 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neighbor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    Py_DECREF( tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_source_name_14 = var_gScore;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "gScore" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 110;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_get );
    if ( tmp_called_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_args_element_name_32 = var_currNode;

    if ( tmp_args_element_name_32 == NULL )
    {
        Py_DECREF( tmp_called_name_20 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "currNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 110;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_33 = const_float_inf;
    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 110;
    {
        PyObject *call_args[] = { tmp_args_element_name_32, tmp_args_element_name_33 };
        tmp_left_name_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_called_name_20 );
    if ( tmp_left_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_called_name_21 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_costEstimate );

    if (unlikely( tmp_called_name_21 == NULL ))
    {
        tmp_called_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_costEstimate );
    }

    if ( tmp_called_name_21 == NULL )
    {
        Py_DECREF( tmp_left_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "costEstimate" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 110;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_34 = var_currNode;

    if ( tmp_args_element_name_34 == NULL )
    {
        Py_DECREF( tmp_left_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "currNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 110;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_35 = var_neighbor;

    if ( tmp_args_element_name_35 == NULL )
    {
        Py_DECREF( tmp_left_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neighbor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 110;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_36 = par_highest;

    if ( tmp_args_element_name_36 == NULL )
    {
        Py_DECREF( tmp_left_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "highest" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 110;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 110;
    {
        PyObject *call_args[] = { tmp_args_element_name_34, tmp_args_element_name_35, tmp_args_element_name_36 };
        tmp_right_name_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_21, call_args );
    }

    if ( tmp_right_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_8 );

        exception_lineno = 110;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_assign_source_36 = BINARY_OPERATION_ADD( tmp_left_name_8, tmp_right_name_8 );
    Py_DECREF( tmp_left_name_8 );
    Py_DECREF( tmp_right_name_8 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    {
        PyObject *old = var_currgScore;
        var_currgScore = tmp_assign_source_36;
        Py_XDECREF( old );
    }

    tmp_compare_left_7 = var_currgScore;

    CHECK_OBJECT( tmp_compare_left_7 );
    tmp_source_name_15 = var_gScore;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "gScore" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_get );
    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_args_element_name_37 = var_neighbor;

    if ( tmp_args_element_name_37 == NULL )
    {
        Py_DECREF( tmp_called_name_22 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neighbor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_38 = const_float_inf;
    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 111;
    {
        PyObject *call_args[] = { tmp_args_element_name_37, tmp_args_element_name_38 };
        tmp_compare_right_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_22, call_args );
    }

    Py_DECREF( tmp_called_name_22 );
    if ( tmp_compare_right_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_cmp_Lt_2 = RICH_COMPARE_BOOL_LT( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Lt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_7 );

        exception_lineno = 111;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_compare_right_7 );
    if ( tmp_cmp_Lt_2 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_ass_subvalue_5 = var_currNode;

    if ( tmp_ass_subvalue_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "currNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_ass_subscribed_5 = var_cameFrom;

    if ( tmp_ass_subscribed_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cameFrom" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_ass_subscript_5 = var_neighbor;

    if ( tmp_ass_subscript_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neighbor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_ass_subvalue_6 = var_currgScore;

    if ( tmp_ass_subvalue_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "currgScore" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_ass_subscribed_6 = var_gScore;

    if ( tmp_ass_subscribed_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "gScore" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_ass_subscript_6 = var_neighbor;

    if ( tmp_ass_subscript_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neighbor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_source_name_16 = var_fScore;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fScore" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_put );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_args_element_name_39 = PyTuple_New( 3 );
    tmp_called_name_24 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_costEstimate );

    if (unlikely( tmp_called_name_24 == NULL ))
    {
        tmp_called_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_costEstimate );
    }

    if ( tmp_called_name_24 == NULL )
    {
        Py_DECREF( tmp_called_name_23 );
        Py_DECREF( tmp_args_element_name_39 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "costEstimate" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_40 = var_neighbor;

    if ( tmp_args_element_name_40 == NULL )
    {
        Py_DECREF( tmp_called_name_23 );
        Py_DECREF( tmp_args_element_name_39 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neighbor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_41 = par_goal;

    if ( tmp_args_element_name_41 == NULL )
    {
        Py_DECREF( tmp_called_name_23 );
        Py_DECREF( tmp_args_element_name_39 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "goal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_42 = par_highest;

    if ( tmp_args_element_name_42 == NULL )
    {
        Py_DECREF( tmp_called_name_23 );
        Py_DECREF( tmp_args_element_name_39 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "highest" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 115;
    {
        PyObject *call_args[] = { tmp_args_element_name_40, tmp_args_element_name_41, tmp_args_element_name_42 };
        tmp_left_name_9 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_24, call_args );
    }

    if ( tmp_left_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_23 );
        Py_DECREF( tmp_args_element_name_39 );

        exception_lineno = 115;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_subscribed_name_9 = var_gScore;

    if ( tmp_subscribed_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_23 );
        Py_DECREF( tmp_args_element_name_39 );
        Py_DECREF( tmp_left_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "gScore" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_subscript_name_9 = var_neighbor;

    if ( tmp_subscript_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_23 );
        Py_DECREF( tmp_args_element_name_39 );
        Py_DECREF( tmp_left_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neighbor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_right_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
    if ( tmp_right_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_23 );
        Py_DECREF( tmp_args_element_name_39 );
        Py_DECREF( tmp_left_name_9 );

        exception_lineno = 115;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_tuple_element_5 = BINARY_OPERATION_ADD( tmp_left_name_9, tmp_right_name_9 );
    Py_DECREF( tmp_left_name_9 );
    Py_DECREF( tmp_right_name_9 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_23 );
        Py_DECREF( tmp_args_element_name_39 );

        exception_lineno = 115;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_39, 0, tmp_tuple_element_5 );
    tmp_subscribed_name_10 = var_distances;

    if ( tmp_subscribed_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_23 );
        Py_DECREF( tmp_args_element_name_39 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "distances" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_subscript_name_10 = var_neighbor;

    if ( tmp_subscript_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_23 );
        Py_DECREF( tmp_args_element_name_39 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neighbor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_23 );
        Py_DECREF( tmp_args_element_name_39 );

        exception_lineno = 115;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_39, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_neighbor;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_called_name_23 );
        Py_DECREF( tmp_args_element_name_39 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neighbor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_element_name_39, 2, tmp_tuple_element_5 );
    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 115;
    {
        PyObject *call_args[] = { tmp_args_element_name_39 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
    }

    Py_DECREF( tmp_called_name_23 );
    Py_DECREF( tmp_args_element_name_39 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_unused );
    branch_no_9:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_called_name_25 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_getElevationFromPath );

    if (unlikely( tmp_called_name_25 == NULL ))
    {
        tmp_called_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getElevationFromPath );
    }

    if ( tmp_called_name_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getElevationFromPath" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_43 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_gmaps );

    if (unlikely( tmp_args_element_name_43 == NULL ))
    {
        tmp_args_element_name_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gmaps );
    }

    if ( tmp_args_element_name_43 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gmaps" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_44 = par_start;

    if ( tmp_args_element_name_44 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_45 = par_goal;

    if ( tmp_args_element_name_45 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "goal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_e973fcd599c53d1492a2d92d7837f607->m_frame.f_lineno = 118;
    {
        PyObject *call_args[] = { tmp_args_element_name_43, tmp_args_element_name_44, tmp_args_element_name_45 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_25, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e973fcd599c53d1492a2d92d7837f607 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e973fcd599c53d1492a2d92d7837f607 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e973fcd599c53d1492a2d92d7837f607 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e973fcd599c53d1492a2d92d7837f607, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e973fcd599c53d1492a2d92d7837f607->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e973fcd599c53d1492a2d92d7837f607, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e973fcd599c53d1492a2d92d7837f607,
        type_description_1,
        par_start,
        par_goal,
        par_variance,
        par_highest,
        var_shortestDistance,
        var_maxDistance,
        var_closedSet,
        var_distances,
        var_openSet,
        var_cameFrom,
        var_gScore,
        var_fScore,
        var_path,
        var_score,
        var_distance,
        var_currNode,
        var_route,
        var_latitudes,
        var_longitudes,
        var_neighbor,
        var_dist,
        var_currgScore
    );


    // Release cached frame.
    if ( frame_e973fcd599c53d1492a2d92d7837f607 == cache_frame_e973fcd599c53d1492a2d92d7837f607 )
    {
        Py_DECREF( frame_e973fcd599c53d1492a2d92d7837f607 );
    }
    cache_frame_e973fcd599c53d1492a2d92d7837f607 = NULL;

    assertFrameObject( frame_e973fcd599c53d1492a2d92d7837f607 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_2_optimalElevGain );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_start );
    par_start = NULL;

    Py_XDECREF( par_goal );
    par_goal = NULL;

    Py_XDECREF( par_variance );
    par_variance = NULL;

    Py_XDECREF( par_highest );
    par_highest = NULL;

    Py_XDECREF( var_shortestDistance );
    var_shortestDistance = NULL;

    Py_XDECREF( var_maxDistance );
    var_maxDistance = NULL;

    Py_XDECREF( var_closedSet );
    var_closedSet = NULL;

    Py_XDECREF( var_distances );
    var_distances = NULL;

    Py_XDECREF( var_openSet );
    var_openSet = NULL;

    Py_XDECREF( var_cameFrom );
    var_cameFrom = NULL;

    Py_XDECREF( var_gScore );
    var_gScore = NULL;

    Py_XDECREF( var_fScore );
    var_fScore = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_score );
    var_score = NULL;

    Py_XDECREF( var_distance );
    var_distance = NULL;

    Py_XDECREF( var_currNode );
    var_currNode = NULL;

    Py_XDECREF( var_route );
    var_route = NULL;

    Py_XDECREF( var_latitudes );
    var_latitudes = NULL;

    Py_XDECREF( var_longitudes );
    var_longitudes = NULL;

    Py_XDECREF( var_neighbor );
    var_neighbor = NULL;

    Py_XDECREF( var_dist );
    var_dist = NULL;

    Py_XDECREF( var_currgScore );
    var_currgScore = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_start );
    par_start = NULL;

    Py_XDECREF( par_goal );
    par_goal = NULL;

    Py_XDECREF( par_variance );
    par_variance = NULL;

    Py_XDECREF( par_highest );
    par_highest = NULL;

    Py_XDECREF( var_shortestDistance );
    var_shortestDistance = NULL;

    Py_XDECREF( var_maxDistance );
    var_maxDistance = NULL;

    Py_XDECREF( var_closedSet );
    var_closedSet = NULL;

    Py_XDECREF( var_distances );
    var_distances = NULL;

    Py_XDECREF( var_openSet );
    var_openSet = NULL;

    Py_XDECREF( var_cameFrom );
    var_cameFrom = NULL;

    Py_XDECREF( var_gScore );
    var_gScore = NULL;

    Py_XDECREF( var_fScore );
    var_fScore = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_score );
    var_score = NULL;

    Py_XDECREF( var_distance );
    var_distance = NULL;

    Py_XDECREF( var_currNode );
    var_currNode = NULL;

    Py_XDECREF( var_route );
    var_route = NULL;

    Py_XDECREF( var_latitudes );
    var_latitudes = NULL;

    Py_XDECREF( var_longitudes );
    var_longitudes = NULL;

    Py_XDECREF( var_neighbor );
    var_neighbor = NULL;

    Py_XDECREF( var_dist );
    var_dist = NULL;

    Py_XDECREF( var_currgScore );
    var_currgScore = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_2_optimalElevGain );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_findRoute$$$function_3_reconstructPath( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cameFrom = python_pars[ 0 ];
    PyObject *par_start = python_pars[ 1 ];
    PyObject *par_goal = python_pars[ 2 ];
    PyObject *var_path = NULL;
    PyObject *var_current = NULL;
    PyObject *var_visited = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_In_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_11f6487b93db8686e49a464bc020a25a = NULL;

    struct Nuitka_FrameObject *frame_11f6487b93db8686e49a464bc020a25a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 1 );
    tmp_list_element_1 = par_goal;

    CHECK_OBJECT( tmp_list_element_1 );
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_1, 0, tmp_list_element_1 );
    assert( var_path == NULL );
    var_path = tmp_assign_source_1;

    tmp_assign_source_2 = par_goal;

    CHECK_OBJECT( tmp_assign_source_2 );
    assert( var_current == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_current = tmp_assign_source_2;

    tmp_assign_source_3 = PySet_New( NULL );
    assert( var_visited == NULL );
    var_visited = tmp_assign_source_3;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_11f6487b93db8686e49a464bc020a25a, codeobj_11f6487b93db8686e49a464bc020a25a, module_findRoute, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_11f6487b93db8686e49a464bc020a25a = cache_frame_11f6487b93db8686e49a464bc020a25a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_11f6487b93db8686e49a464bc020a25a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_11f6487b93db8686e49a464bc020a25a ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    tmp_compare_left_1 = var_current;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "current" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = par_cameFrom;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    tmp_compare_left_2 = var_current;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "current" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = var_visited;

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "visited" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_instance_1 = var_path;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_11f6487b93db8686e49a464bc020a25a->m_frame.f_lineno = 136;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_reverse );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_findPath );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_findPath );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "findPath" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_start;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_current;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "current" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_visited;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "visited" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_11f6487b93db8686e49a464bc020a25a->m_frame.f_lineno = 137;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = var_path;

    if ( tmp_right_name_1 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_source_name_1 = var_visited;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "visited" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 138;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_current;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "current" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 138;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_11f6487b93db8686e49a464bc020a25a->m_frame.f_lineno = 138;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_subscribed_name_1 = par_cameFrom;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cameFrom" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 139;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = var_current;

    if ( tmp_subscript_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "current" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 139;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_current;
        var_current = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_source_name_2 = var_path;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = var_current;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "current" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_11f6487b93db8686e49a464bc020a25a->m_frame.f_lineno = 140;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_called_instance_2 = var_path;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 141;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_11f6487b93db8686e49a464bc020a25a->m_frame.f_lineno = 141;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_reverse );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = var_path;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 142;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_11f6487b93db8686e49a464bc020a25a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_11f6487b93db8686e49a464bc020a25a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_11f6487b93db8686e49a464bc020a25a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_11f6487b93db8686e49a464bc020a25a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_11f6487b93db8686e49a464bc020a25a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_11f6487b93db8686e49a464bc020a25a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_11f6487b93db8686e49a464bc020a25a,
        type_description_1,
        par_cameFrom,
        par_start,
        par_goal,
        var_path,
        var_current,
        var_visited
    );


    // Release cached frame.
    if ( frame_11f6487b93db8686e49a464bc020a25a == cache_frame_11f6487b93db8686e49a464bc020a25a )
    {
        Py_DECREF( frame_11f6487b93db8686e49a464bc020a25a );
    }
    cache_frame_11f6487b93db8686e49a464bc020a25a = NULL;

    assertFrameObject( frame_11f6487b93db8686e49a464bc020a25a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_3_reconstructPath );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_cameFrom );
    par_cameFrom = NULL;

    Py_XDECREF( par_start );
    par_start = NULL;

    Py_XDECREF( par_goal );
    par_goal = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_current );
    var_current = NULL;

    Py_XDECREF( var_visited );
    var_visited = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_cameFrom );
    par_cameFrom = NULL;

    Py_XDECREF( par_start );
    par_start = NULL;

    Py_XDECREF( par_goal );
    par_goal = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_current );
    var_current = NULL;

    Py_XDECREF( var_visited );
    var_visited = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_3_reconstructPath );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_findRoute$$$function_4_getDistance( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_gmaps = python_pars[ 0 ];
    PyObject *par_n1 = python_pars[ 1 ];
    PyObject *par_n2 = python_pars[ 2 ];
    PyObject *var_directions_result = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static struct Nuitka_FrameObject *cache_frame_7cecd8c7e2ed60d24c7181cade166d79 = NULL;

    struct Nuitka_FrameObject *frame_7cecd8c7e2ed60d24c7181cade166d79;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7cecd8c7e2ed60d24c7181cade166d79, codeobj_7cecd8c7e2ed60d24c7181cade166d79, module_findRoute, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7cecd8c7e2ed60d24c7181cade166d79 = cache_frame_7cecd8c7e2ed60d24c7181cade166d79;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7cecd8c7e2ed60d24c7181cade166d79 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7cecd8c7e2ed60d24c7181cade166d79 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_gmaps;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_directions );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = PyTuple_New( 2 );
    tmp_source_name_2 = par_n1;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_latitude );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 157;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
    tmp_source_name_3 = par_n1;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_longitude );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 157;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
    tmp_args_element_name_2 = PyTuple_New( 2 );
    tmp_source_name_4 = par_n2;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_latitude );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 157;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_2 );
    tmp_source_name_5 = par_n2;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_longitude );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 157;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_2 );
    frame_7cecd8c7e2ed60d24c7181cade166d79->m_frame.f_lineno = 157;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_directions_result == NULL );
    var_directions_result = tmp_assign_source_1;

    tmp_subscribed_name_5 = var_directions_result;

    CHECK_OBJECT( tmp_subscribed_name_5 );
    tmp_subscript_name_1 = const_int_0;
    tmp_subscribed_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_1 );
    if ( tmp_subscribed_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_str_plain_legs;
    tmp_subscribed_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_4 );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_3 = const_int_0;
    tmp_subscribed_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_4 = const_str_plain_distance;
    tmp_subscribed_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_5 = const_str_plain_value;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_5 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7cecd8c7e2ed60d24c7181cade166d79 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7cecd8c7e2ed60d24c7181cade166d79 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7cecd8c7e2ed60d24c7181cade166d79 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7cecd8c7e2ed60d24c7181cade166d79, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7cecd8c7e2ed60d24c7181cade166d79->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7cecd8c7e2ed60d24c7181cade166d79, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7cecd8c7e2ed60d24c7181cade166d79,
        type_description_1,
        par_gmaps,
        par_n1,
        par_n2,
        var_directions_result
    );


    // Release cached frame.
    if ( frame_7cecd8c7e2ed60d24c7181cade166d79 == cache_frame_7cecd8c7e2ed60d24c7181cade166d79 )
    {
        Py_DECREF( frame_7cecd8c7e2ed60d24c7181cade166d79 );
    }
    cache_frame_7cecd8c7e2ed60d24c7181cade166d79 = NULL;

    assertFrameObject( frame_7cecd8c7e2ed60d24c7181cade166d79 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_4_getDistance );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_gmaps );
    par_gmaps = NULL;

    Py_XDECREF( par_n1 );
    par_n1 = NULL;

    Py_XDECREF( par_n2 );
    par_n2 = NULL;

    Py_XDECREF( var_directions_result );
    var_directions_result = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_gmaps );
    par_gmaps = NULL;

    Py_XDECREF( par_n1 );
    par_n1 = NULL;

    Py_XDECREF( par_n2 );
    par_n2 = NULL;

    Py_XDECREF( var_directions_result );
    var_directions_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_4_getDistance );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_findRoute$$$function_5_costEstimate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n1 = python_pars[ 0 ];
    PyObject *par_n2 = python_pars[ 1 ];
    PyObject *par_highest = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static struct Nuitka_FrameObject *cache_frame_c779306001b314e9f5a8bb2e31cf6beb = NULL;

    struct Nuitka_FrameObject *frame_c779306001b314e9f5a8bb2e31cf6beb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c779306001b314e9f5a8bb2e31cf6beb, codeobj_c779306001b314e9f5a8bb2e31cf6beb, module_findRoute, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c779306001b314e9f5a8bb2e31cf6beb = cache_frame_c779306001b314e9f5a8bb2e31cf6beb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c779306001b314e9f5a8bb2e31cf6beb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c779306001b314e9f5a8bb2e31cf6beb ) == 2 ); // Frame stack

    // Framed code:
    tmp_cond_value_1 = par_highest;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_max );
    assert( tmp_called_name_1 != NULL );
    tmp_source_name_1 = par_n2;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_elevation );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_n1;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_elevation );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 175;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = const_int_0;
    frame_c779306001b314e9f5a8bb2e31cf6beb->m_frame.f_lineno = 175;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_max );
    assert( tmp_called_name_2 != NULL );
    tmp_source_name_3 = par_n2;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_elevation );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_n1;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_elevation );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 176;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_int_0;
    frame_c779306001b314e9f5a8bb2e31cf6beb->m_frame.f_lineno = 176;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c779306001b314e9f5a8bb2e31cf6beb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c779306001b314e9f5a8bb2e31cf6beb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c779306001b314e9f5a8bb2e31cf6beb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c779306001b314e9f5a8bb2e31cf6beb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c779306001b314e9f5a8bb2e31cf6beb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c779306001b314e9f5a8bb2e31cf6beb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c779306001b314e9f5a8bb2e31cf6beb,
        type_description_1,
        par_n1,
        par_n2,
        par_highest
    );


    // Release cached frame.
    if ( frame_c779306001b314e9f5a8bb2e31cf6beb == cache_frame_c779306001b314e9f5a8bb2e31cf6beb )
    {
        Py_DECREF( frame_c779306001b314e9f5a8bb2e31cf6beb );
    }
    cache_frame_c779306001b314e9f5a8bb2e31cf6beb = NULL;

    assertFrameObject( frame_c779306001b314e9f5a8bb2e31cf6beb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_5_costEstimate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_n1 );
    par_n1 = NULL;

    Py_XDECREF( par_n2 );
    par_n2 = NULL;

    Py_XDECREF( par_highest );
    par_highest = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_n1 );
    par_n1 = NULL;

    Py_XDECREF( par_n2 );
    par_n2 = NULL;

    Py_XDECREF( par_highest );
    par_highest = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_5_costEstimate );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_findRoute$$$function_6_findPath( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_start = python_pars[ 0 ];
    PyObject *par_goal = python_pars[ 1 ];
    PyObject *par_visited = python_pars[ 2 ];
    PyObject *var_stack = NULL;
    PyObject *var_cameFrom = NULL;
    PyObject *var_node = NULL;
    PyObject *var_neib = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_Eq_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_delsubscr_subscript_1;
    PyObject *tmp_delsubscr_target_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4616f80e7bc348b7a28b32412126d235 = NULL;

    struct Nuitka_FrameObject *frame_4616f80e7bc348b7a28b32412126d235;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 1 );
    tmp_list_element_1 = par_start;

    CHECK_OBJECT( tmp_list_element_1 );
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_1, 0, tmp_list_element_1 );
    assert( var_stack == NULL );
    var_stack = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4616f80e7bc348b7a28b32412126d235, codeobj_4616f80e7bc348b7a28b32412126d235, module_findRoute, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4616f80e7bc348b7a28b32412126d235 = cache_frame_4616f80e7bc348b7a28b32412126d235;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4616f80e7bc348b7a28b32412126d235 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4616f80e7bc348b7a28b32412126d235 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assign_source_2 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = par_start;

    CHECK_OBJECT( tmp_dict_key_1 );
    tmp_dict_value_1 = par_start;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_2 );

        exception_lineno = 186;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_cameFrom == NULL );
    var_cameFrom = tmp_assign_source_2;

    loop_start_1:;
    tmp_cond_value_1 = var_stack;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    tmp_called_instance_1 = var_stack;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stack" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_4616f80e7bc348b7a28b32412126d235->m_frame.f_lineno = 188;
    tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_node;
        var_node = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_node;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = par_goal;

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "goal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_delsubscr_target_1 = var_cameFrom;

    if ( tmp_delsubscr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cameFrom" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_delsubscr_subscript_1 = par_start;

    if ( tmp_delsubscr_subscript_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_reconstructPath );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_reconstructPath );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "reconstructPath" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = var_cameFrom;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cameFrom" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_start;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_goal;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "goal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_4616f80e7bc348b7a28b32412126d235->m_frame.f_lineno = 191;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_source_name_1 = par_visited;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "visited" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_node;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_4616f80e7bc348b7a28b32412126d235->m_frame.f_lineno = 192;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = var_node;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 193;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_neighbors );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = tmp_for_loop_1__for_iterator;
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            exception_lineno = 193;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_assign_source_6 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = var_neib;
        var_neib = tmp_assign_source_6;
        Py_INCREF( var_neib );
        Py_XDECREF( old );
    }

    tmp_compare_left_2 = var_neib;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = par_visited;

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "visited" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 194;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_ass_subvalue_1 = var_node;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_ass_subscribed_1 = var_cameFrom;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cameFrom" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_ass_subscript_1 = var_neib;

    if ( tmp_ass_subscript_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_3 = var_stack;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stack" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_5 = var_neib;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "neib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    frame_4616f80e7bc348b7a28b32412126d235->m_frame.f_lineno = 196;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4616f80e7bc348b7a28b32412126d235 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4616f80e7bc348b7a28b32412126d235 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4616f80e7bc348b7a28b32412126d235 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4616f80e7bc348b7a28b32412126d235, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4616f80e7bc348b7a28b32412126d235->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4616f80e7bc348b7a28b32412126d235, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4616f80e7bc348b7a28b32412126d235,
        type_description_1,
        par_start,
        par_goal,
        par_visited,
        var_stack,
        var_cameFrom,
        var_node,
        var_neib
    );


    // Release cached frame.
    if ( frame_4616f80e7bc348b7a28b32412126d235 == cache_frame_4616f80e7bc348b7a28b32412126d235 )
    {
        Py_DECREF( frame_4616f80e7bc348b7a28b32412126d235 );
    }
    cache_frame_4616f80e7bc348b7a28b32412126d235 = NULL;

    assertFrameObject( frame_4616f80e7bc348b7a28b32412126d235 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = PyList_New( 0 );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_6_findPath );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_start );
    par_start = NULL;

    Py_XDECREF( par_goal );
    par_goal = NULL;

    Py_XDECREF( par_visited );
    par_visited = NULL;

    Py_XDECREF( var_stack );
    var_stack = NULL;

    Py_XDECREF( var_cameFrom );
    var_cameFrom = NULL;

    Py_XDECREF( var_node );
    var_node = NULL;

    Py_XDECREF( var_neib );
    var_neib = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_start );
    par_start = NULL;

    Py_XDECREF( par_goal );
    par_goal = NULL;

    Py_XDECREF( par_visited );
    par_visited = NULL;

    Py_XDECREF( var_stack );
    var_stack = NULL;

    Py_XDECREF( var_cameFrom );
    var_cameFrom = NULL;

    Py_XDECREF( var_node );
    var_node = NULL;

    Py_XDECREF( var_neib );
    var_neib = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_6_findPath );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_findRoute$$$function_7_getElevationFromPath( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_gmaps = python_pars[ 0 ];
    PyObject *par_start = python_pars[ 1 ];
    PyObject *par_goal = python_pars[ 2 ];
    PyObject *var_directionResult = NULL;
    PyObject *var_steps = NULL;
    PyObject *var_latitudes = NULL;
    PyObject *var_longitudes = NULL;
    PyObject *var_elevGain = NULL;
    PyObject *var_prevElev = NULL;
    PyObject *var_step = NULL;
    PyObject *var_lat = NULL;
    PyObject *var_lng = NULL;
    PyObject *var_currElev = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_next_source_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscribed_name_9;
    PyObject *tmp_subscribed_name_10;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_subscript_name_9;
    PyObject *tmp_subscript_name_10;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2d54863a5c2dcb0f96913b8a7d405277 = NULL;

    struct Nuitka_FrameObject *frame_2d54863a5c2dcb0f96913b8a7d405277;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2d54863a5c2dcb0f96913b8a7d405277, codeobj_2d54863a5c2dcb0f96913b8a7d405277, module_findRoute, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2d54863a5c2dcb0f96913b8a7d405277 = cache_frame_2d54863a5c2dcb0f96913b8a7d405277;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2d54863a5c2dcb0f96913b8a7d405277 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2d54863a5c2dcb0f96913b8a7d405277 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_gmaps;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_directions );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = PyTuple_New( 2 );
    tmp_source_name_2 = par_start;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 204;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_latitude );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 204;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
    tmp_source_name_3 = par_start;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 204;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_longitude );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 204;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
    tmp_args_element_name_2 = PyTuple_New( 2 );
    tmp_source_name_4 = par_goal;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "goal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 204;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_latitude );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 204;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_2 );
    tmp_source_name_5 = par_goal;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "goal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 204;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_longitude );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 204;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_2 );
    frame_2d54863a5c2dcb0f96913b8a7d405277->m_frame.f_lineno = 204;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_directionResult == NULL );
    var_directionResult = tmp_assign_source_1;

    tmp_subscribed_name_4 = var_directionResult;

    CHECK_OBJECT( tmp_subscribed_name_4 );
    tmp_subscript_name_1 = const_int_0;
    tmp_subscribed_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_1 );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_str_plain_legs;
    tmp_subscribed_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_3 = const_int_0;
    tmp_subscribed_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_4 = const_str_plain_steps;
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_steps == NULL );
    var_steps = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 1 );
    tmp_source_name_6 = par_start;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 206;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_latitude );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 206;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 0, tmp_list_element_1 );
    assert( var_latitudes == NULL );
    var_latitudes = tmp_assign_source_3;

    tmp_assign_source_4 = PyList_New( 1 );
    tmp_source_name_7 = par_start;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 207;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_longitude );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_4 );

        exception_lineno = 207;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_4, 0, tmp_list_element_2 );
    assert( var_longitudes == NULL );
    var_longitudes = tmp_assign_source_4;

    tmp_assign_source_5 = const_int_0;
    assert( var_elevGain == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_elevGain = tmp_assign_source_5;

    tmp_source_name_8 = par_start;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 209;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_elevation );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_prevElev == NULL );
    var_prevElev = tmp_assign_source_6;

    tmp_iter_arg_1 = var_steps;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "steps" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 210;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_7;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooo";
            exception_lineno = 210;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_assign_source_9 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_9 );
    {
        PyObject *old = var_step;
        var_step = tmp_assign_source_9;
        Py_INCREF( var_step );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_6 = var_step;

    CHECK_OBJECT( tmp_subscribed_name_6 );
    tmp_subscript_name_5 = const_str_plain_end_location;
    tmp_subscribed_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_5 );
    if ( tmp_subscribed_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_6 = const_str_plain_lat;
    tmp_assign_source_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_6 );
    Py_DECREF( tmp_subscribed_name_5 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_lat;
        var_lat = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_8 = var_step;

    if ( tmp_subscribed_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "step" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 212;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_7 = const_str_plain_end_location;
    tmp_subscribed_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_7 );
    if ( tmp_subscribed_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_8 = const_str_plain_lng;
    tmp_assign_source_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_8 );
    Py_DECREF( tmp_subscribed_name_7 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_lng;
        var_lng = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_source_name_9 = var_latitudes;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "latitudes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 213;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_append );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = var_lat;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lat" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 213;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    frame_2d54863a5c2dcb0f96913b8a7d405277->m_frame.f_lineno = 213;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_10 = var_longitudes;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "longitudes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 214;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_append );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_4 = var_lng;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lng" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 214;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    frame_2d54863a5c2dcb0f96913b8a7d405277->m_frame.f_lineno = 214;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_elevation );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_elevation );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "elevation" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_5 = par_gmaps;

    if ( tmp_args_element_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "gmaps" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_6 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_lat;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_args_element_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lat" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_element_name_6, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_lng;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_args_element_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lng" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_element_name_6, 1, tmp_tuple_element_3 );
    frame_2d54863a5c2dcb0f96913b8a7d405277->m_frame.f_lineno = 215;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_subscribed_name_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_subscribed_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_9 = const_int_0;
    tmp_subscribed_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_9 );
    Py_DECREF( tmp_subscribed_name_10 );
    if ( tmp_subscribed_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_10 = const_str_plain_elevation;
    tmp_assign_source_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_10 );
    Py_DECREF( tmp_subscribed_name_9 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_currElev;
        var_currElev = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_left_name_1 = var_elevGain;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "elevGain" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 216;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_max );
    assert( tmp_called_name_5 != NULL );
    tmp_args_element_name_7 = const_int_0;
    tmp_left_name_2 = var_currElev;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = var_prevElev;

    if ( tmp_right_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prevElev" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 216;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_8 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    frame_2d54863a5c2dcb0f96913b8a7d405277->m_frame.f_lineno = 216;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_13 = tmp_left_name_1;
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    var_elevGain = tmp_assign_source_13;

    tmp_assign_source_14 = var_currElev;

    if ( tmp_assign_source_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "currElev" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    {
        PyObject *old = var_prevElev;
        var_prevElev = tmp_assign_source_14;
        Py_INCREF( var_prevElev );
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = PyTuple_New( 3 );
    tmp_tuple_element_4 = var_latitudes;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "latitudes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_longitudes;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "longitudes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_elevGain;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "elevGain" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_4 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d54863a5c2dcb0f96913b8a7d405277 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d54863a5c2dcb0f96913b8a7d405277 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d54863a5c2dcb0f96913b8a7d405277 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2d54863a5c2dcb0f96913b8a7d405277, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2d54863a5c2dcb0f96913b8a7d405277->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2d54863a5c2dcb0f96913b8a7d405277, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2d54863a5c2dcb0f96913b8a7d405277,
        type_description_1,
        par_gmaps,
        par_start,
        par_goal,
        var_directionResult,
        var_steps,
        var_latitudes,
        var_longitudes,
        var_elevGain,
        var_prevElev,
        var_step,
        var_lat,
        var_lng,
        var_currElev
    );


    // Release cached frame.
    if ( frame_2d54863a5c2dcb0f96913b8a7d405277 == cache_frame_2d54863a5c2dcb0f96913b8a7d405277 )
    {
        Py_DECREF( frame_2d54863a5c2dcb0f96913b8a7d405277 );
    }
    cache_frame_2d54863a5c2dcb0f96913b8a7d405277 = NULL;

    assertFrameObject( frame_2d54863a5c2dcb0f96913b8a7d405277 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_7_getElevationFromPath );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_gmaps );
    par_gmaps = NULL;

    Py_XDECREF( par_start );
    par_start = NULL;

    Py_XDECREF( par_goal );
    par_goal = NULL;

    Py_XDECREF( var_directionResult );
    var_directionResult = NULL;

    Py_XDECREF( var_steps );
    var_steps = NULL;

    Py_XDECREF( var_latitudes );
    var_latitudes = NULL;

    Py_XDECREF( var_longitudes );
    var_longitudes = NULL;

    Py_XDECREF( var_elevGain );
    var_elevGain = NULL;

    Py_XDECREF( var_prevElev );
    var_prevElev = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    Py_XDECREF( var_lat );
    var_lat = NULL;

    Py_XDECREF( var_lng );
    var_lng = NULL;

    Py_XDECREF( var_currElev );
    var_currElev = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_gmaps );
    par_gmaps = NULL;

    Py_XDECREF( par_start );
    par_start = NULL;

    Py_XDECREF( par_goal );
    par_goal = NULL;

    Py_XDECREF( var_directionResult );
    var_directionResult = NULL;

    Py_XDECREF( var_steps );
    var_steps = NULL;

    Py_XDECREF( var_latitudes );
    var_latitudes = NULL;

    Py_XDECREF( var_longitudes );
    var_longitudes = NULL;

    Py_XDECREF( var_elevGain );
    var_elevGain = NULL;

    Py_XDECREF( var_prevElev );
    var_prevElev = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    Py_XDECREF( var_lat );
    var_lat = NULL;

    Py_XDECREF( var_lng );
    var_lng = NULL;

    Py_XDECREF( var_currElev );
    var_currElev = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( findRoute$$$function_7_getElevationFromPath );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_findRoute$$$function_1_findRoute(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_findRoute$$$function_1_findRoute,
        const_str_plain_findRoute,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_13582593937b09c5223b3ce9d9df3d7c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_findRoute,
        const_str_digest_d4c7ffac87f9085e9644dd9293051ff5,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_findRoute$$$function_2_optimalElevGain( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_findRoute$$$function_2_optimalElevGain,
        const_str_plain_optimalElevGain,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e973fcd599c53d1492a2d92d7837f607,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_findRoute,
        const_str_digest_72e262a08dea3be9c502104232c4adda,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_findRoute$$$function_3_reconstructPath(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_findRoute$$$function_3_reconstructPath,
        const_str_plain_reconstructPath,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_11f6487b93db8686e49a464bc020a25a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_findRoute,
        const_str_digest_9c5d660e82060902510eb162d4c8365b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_findRoute$$$function_4_getDistance(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_findRoute$$$function_4_getDistance,
        const_str_plain_getDistance,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7cecd8c7e2ed60d24c7181cade166d79,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_findRoute,
        const_str_digest_6899e989af99a73f56b5bbc7438ff230,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_findRoute$$$function_5_costEstimate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_findRoute$$$function_5_costEstimate,
        const_str_plain_costEstimate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c779306001b314e9f5a8bb2e31cf6beb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_findRoute,
        const_str_digest_1f3e6c0642df1d6203396d8b06930906,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_findRoute$$$function_6_findPath(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_findRoute$$$function_6_findPath,
        const_str_plain_findPath,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4616f80e7bc348b7a28b32412126d235,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_findRoute,
        const_str_digest_05ed6dc3a4e12188005310479838f62b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_findRoute$$$function_7_getElevationFromPath(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_findRoute$$$function_7_getElevationFromPath,
        const_str_plain_getElevationFromPath,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2d54863a5c2dcb0f96913b8a7d405277,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_findRoute,
        const_str_digest_ce468c836163ae950d011d318d1f4391,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_findRoute =
{
    PyModuleDef_HEAD_INIT,
    "findRoute",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#if PYTHON_VERSION >= 300
extern PyObject *metapath_based_loader;
#endif
#if PYTHON_VERSION >= 330
extern PyObject *const_str_plain___loader__;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( findRoute )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_findRoute );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("findRoute: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("findRoute: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initfindRoute" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_findRoute = Py_InitModule4(
        "findRoute",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_findRoute = PyModule_Create( &mdef_findRoute );
#endif

    moduledict_findRoute = MODULE_DICT( module_findRoute );

    CHECK_OBJECT( module_findRoute );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_findRoute, module_findRoute );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_defaults_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    struct Nuitka_FrameObject *frame_85c920256dff08ae48cb58551a19b9a8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_c76db5427dc8373e62bf4eeac3c74073;
    UPDATE_STRING_DICT0( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_85c920256dff08ae48cb58551a19b9a8 = MAKE_MODULE_FRAME( codeobj_85c920256dff08ae48cb58551a19b9a8, module_findRoute );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_85c920256dff08ae48cb58551a19b9a8 );
    assert( Py_REFCNT( frame_85c920256dff08ae48cb58551a19b9a8 ) == 2 );

    // Framed code:
    frame_85c920256dff08ae48cb58551a19b9a8->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("importlib._bootstrap");
        if (likely( module != NULL ))
        {
            tmp_called_name_1 = PyObject_GetAttr( module, const_str_plain_ModuleSpec );
        }
        else
        {
            tmp_called_name_1 = NULL;
        }
    }

    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_plain_findRoute;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_85c920256dff08ae48cb58551a19b9a8->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_plain_sys;
    tmp_globals_name_1 = (PyObject *)moduledict_findRoute;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_85c920256dff08ae48cb58551a19b9a8->m_frame.f_lineno = 1;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( tmp_assign_source_7 != NULL );
    UPDATE_STRING_DICT1( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_7 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 2;

        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_path );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    frame_85c920256dff08ae48cb58551a19b9a8->m_frame.f_lineno = 2;
    tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_insert, &PyTuple_GET_ITEM( const_tuple_int_0_str_digest_6a326b20e904cd8faf1a0f3dea2ad0aa_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_name_name_2 = const_str_plain_queue;
    tmp_globals_name_2 = (PyObject *)moduledict_findRoute;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_PriorityQueue_tuple;
    tmp_level_name_2 = const_int_0;
    frame_85c920256dff08ae48cb58551a19b9a8->m_frame.f_lineno = 4;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_PriorityQueue );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_PriorityQueue, tmp_assign_source_8 );
    tmp_name_name_3 = const_str_plain_googlemaps;
    tmp_globals_name_3 = (PyObject *)moduledict_findRoute;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_Client_tuple;
    tmp_level_name_3 = const_int_0;
    frame_85c920256dff08ae48cb58551a19b9a8->m_frame.f_lineno = 5;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_Client );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_Client, tmp_assign_source_9 );
    tmp_name_name_4 = const_str_digest_e057a4f20fd888d766c673007b8bd7cb;
    tmp_globals_name_4 = (PyObject *)moduledict_findRoute;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_elevation_tuple;
    tmp_level_name_4 = const_int_0;
    frame_85c920256dff08ae48cb58551a19b9a8->m_frame.f_lineno = 6;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_elevation );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_elevation, tmp_assign_source_10 );
    tmp_name_name_5 = const_str_digest_944e2b5ff661e890802cfb2dbcb0ae0c;
    tmp_globals_name_5 = (PyObject *)moduledict_findRoute;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_getLocation_tuple;
    tmp_level_name_5 = const_int_0;
    frame_85c920256dff08ae48cb58551a19b9a8->m_frame.f_lineno = 7;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_getLocation );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_getLocation, tmp_assign_source_11 );
    tmp_name_name_6 = const_str_digest_503ebd674ad29edc8ea832636687f3fd;
    tmp_globals_name_6 = (PyObject *)moduledict_findRoute;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_makeGraph_str_plain_closestNode_tuple;
    tmp_level_name_6 = const_int_0;
    frame_85c920256dff08ae48cb58551a19b9a8->m_frame.f_lineno = 8;
    tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_12;

    // Tried code:
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_makeGraph );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_makeGraph, tmp_assign_source_13 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_closestNode );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_closestNode, tmp_assign_source_14 );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_name_name_7 = const_str_digest_a40d36289ec487f7b9d5636eb0685e35;
    tmp_globals_name_7 = (PyObject *)moduledict_findRoute;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_getFullNeighborsInfo_str_plain_plotMap_tuple;
    tmp_level_name_7 = const_int_0;
    frame_85c920256dff08ae48cb58551a19b9a8->m_frame.f_lineno = 9;
    tmp_assign_source_15 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_15;

    // Tried code:
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_getFullNeighborsInfo );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_getFullNeighborsInfo, tmp_assign_source_16 );
    tmp_import_name_from_8 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_plotMap );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_plotMap, tmp_assign_source_17 );
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_Client );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Client );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Client" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 12;

        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = PyDict_Copy( const_dict_9d24b1b79df98beeec90b78551e5054c );
    frame_85c920256dff08ae48cb58551a19b9a8->m_frame.f_lineno = 12;
    tmp_assign_source_18 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_gmaps, tmp_assign_source_18 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_85c920256dff08ae48cb58551a19b9a8 );
#endif
    popFrameStack();

    assertFrameObject( frame_85c920256dff08ae48cb58551a19b9a8 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_85c920256dff08ae48cb58551a19b9a8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_85c920256dff08ae48cb58551a19b9a8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_85c920256dff08ae48cb58551a19b9a8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_85c920256dff08ae48cb58551a19b9a8, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_19 = MAKE_FUNCTION_findRoute$$$function_1_findRoute(  );
    UPDATE_STRING_DICT1( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_findRoute, tmp_assign_source_19 );
    tmp_defaults_1 = const_tuple_false_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_20 = MAKE_FUNCTION_findRoute$$$function_2_optimalElevGain( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_optimalElevGain, tmp_assign_source_20 );
    tmp_assign_source_21 = MAKE_FUNCTION_findRoute$$$function_3_reconstructPath(  );
    UPDATE_STRING_DICT1( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_reconstructPath, tmp_assign_source_21 );
    tmp_assign_source_22 = MAKE_FUNCTION_findRoute$$$function_4_getDistance(  );
    UPDATE_STRING_DICT1( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_getDistance, tmp_assign_source_22 );
    tmp_assign_source_23 = MAKE_FUNCTION_findRoute$$$function_5_costEstimate(  );
    UPDATE_STRING_DICT1( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_costEstimate, tmp_assign_source_23 );
    tmp_assign_source_24 = MAKE_FUNCTION_findRoute$$$function_6_findPath(  );
    UPDATE_STRING_DICT1( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_findPath, tmp_assign_source_24 );
    tmp_assign_source_25 = MAKE_FUNCTION_findRoute$$$function_7_getElevationFromPath(  );
    UPDATE_STRING_DICT1( moduledict_findRoute, (Nuitka_StringObject *)const_str_plain_getElevationFromPath, tmp_assign_source_25 );

    return MOD_RETURN_VALUE( module_findRoute );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
