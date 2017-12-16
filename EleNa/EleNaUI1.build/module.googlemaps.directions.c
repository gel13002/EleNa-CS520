/* Generated code for Python source for module 'googlemaps.directions'
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

/* The _module_googlemaps$directions is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_googlemaps$directions;
PyDictObject *moduledict_googlemaps$directions;

/* The module constants used, if any. */
extern PyObject *const_str_chr_124;
static PyObject *const_str_digest_bfac260cb46f956227d174118b85da0e;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain_directions;
extern PyObject *const_str_plain_true;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_digest_aaf923957685b0f7f67691e908521870;
static PyObject *const_str_plain_optimize_waypoints;
extern PyObject *const_str_plain_bicycling;
extern PyObject *const_str_digest_058d4d86bb4f217810f1d6e092b30f75;
extern PyObject *const_str_plain_transit_routing_preference;
extern PyObject *const_tuple_str_plain_convert_tuple;
static PyObject *const_str_plain_alternatives;
extern PyObject *const_str_plain_params;
static PyObject *const_tuple_f542042a804cccb211e42cbabc6979c2_tuple;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_avoid;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_f97574eaae23dded076ce4e53e9347e7;
extern PyObject *const_str_plain_language;
static PyObject *const_str_digest_b8daa0070f7ebe992b731c46c1501212;
extern PyObject *const_str_plain_googlemaps;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_67795b2b43592c3c2f828066ef7d7af7;
extern PyObject *const_str_plain_client;
static PyObject *const_str_digest_633676da403182f9c15b182f3ee49bac;
extern PyObject *const_str_digest_1cc82fbafc161c63a7cb4af74bee6b93;
extern PyObject *const_str_plain_mode;
static PyObject *const_str_digest_ce9926f1604bba25af3a9de4f23213a6;
static PyObject *const_str_plain_origin;
static PyObject *const_str_plain_waypoints;
extern PyObject *const_str_plain_join_list;
static PyObject *const_str_plain_routes;
extern PyObject *const_str_plain_convert;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_units;
extern PyObject *const_str_plain_walking;
extern PyObject *const_str_plain_transit;
extern PyObject *const_str_plain_region;
extern PyObject *const_list_1515f5f7754b7da2365c0f5e50aafbe1_list;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_departure_time;
extern PyObject *const_str_plain_latlng;
extern PyObject *const_str_plain_driving;
extern PyObject *const_str_plain_transit_mode;
extern PyObject *const_str_plain__request;
extern PyObject *const_str_plain_arrival_time;
extern PyObject *const_str_plain_traffic_model;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_tuple_5614e20cf696be413a3b2fc247259eb3_tuple;
extern PyObject *const_str_plain_location_list;
static PyObject *const_str_plain_destination;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_bfac260cb46f956227d174118b85da0e = UNSTREAM_STRING( &constant_bin[ 615103 ], 25, 0 );
    const_str_plain_optimize_waypoints = UNSTREAM_STRING( &constant_bin[ 615128 ], 18, 1 );
    const_str_plain_alternatives = UNSTREAM_STRING( &constant_bin[ 615146 ], 12, 1 );
    const_tuple_f542042a804cccb211e42cbabc6979c2_tuple = PyTuple_New( 17 );
    PyTuple_SET_ITEM( const_tuple_f542042a804cccb211e42cbabc6979c2_tuple, 0, const_str_plain_client ); Py_INCREF( const_str_plain_client );
    const_str_plain_origin = UNSTREAM_STRING( &constant_bin[ 598845 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_f542042a804cccb211e42cbabc6979c2_tuple, 1, const_str_plain_origin ); Py_INCREF( const_str_plain_origin );
    const_str_plain_destination = UNSTREAM_STRING( &constant_bin[ 601068 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_f542042a804cccb211e42cbabc6979c2_tuple, 2, const_str_plain_destination ); Py_INCREF( const_str_plain_destination );
    PyTuple_SET_ITEM( const_tuple_f542042a804cccb211e42cbabc6979c2_tuple, 3, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    const_str_plain_waypoints = UNSTREAM_STRING( &constant_bin[ 615137 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_f542042a804cccb211e42cbabc6979c2_tuple, 4, const_str_plain_waypoints ); Py_INCREF( const_str_plain_waypoints );
    PyTuple_SET_ITEM( const_tuple_f542042a804cccb211e42cbabc6979c2_tuple, 5, const_str_plain_alternatives ); Py_INCREF( const_str_plain_alternatives );
    PyTuple_SET_ITEM( const_tuple_f542042a804cccb211e42cbabc6979c2_tuple, 6, const_str_plain_avoid ); Py_INCREF( const_str_plain_avoid );
    PyTuple_SET_ITEM( const_tuple_f542042a804cccb211e42cbabc6979c2_tuple, 7, const_str_plain_language ); Py_INCREF( const_str_plain_language );
    PyTuple_SET_ITEM( const_tuple_f542042a804cccb211e42cbabc6979c2_tuple, 8, const_str_plain_units ); Py_INCREF( const_str_plain_units );
    PyTuple_SET_ITEM( const_tuple_f542042a804cccb211e42cbabc6979c2_tuple, 9, const_str_plain_region ); Py_INCREF( const_str_plain_region );
    PyTuple_SET_ITEM( const_tuple_f542042a804cccb211e42cbabc6979c2_tuple, 10, const_str_plain_departure_time ); Py_INCREF( const_str_plain_departure_time );
    PyTuple_SET_ITEM( const_tuple_f542042a804cccb211e42cbabc6979c2_tuple, 11, const_str_plain_arrival_time ); Py_INCREF( const_str_plain_arrival_time );
    PyTuple_SET_ITEM( const_tuple_f542042a804cccb211e42cbabc6979c2_tuple, 12, const_str_plain_optimize_waypoints ); Py_INCREF( const_str_plain_optimize_waypoints );
    PyTuple_SET_ITEM( const_tuple_f542042a804cccb211e42cbabc6979c2_tuple, 13, const_str_plain_transit_mode ); Py_INCREF( const_str_plain_transit_mode );
    PyTuple_SET_ITEM( const_tuple_f542042a804cccb211e42cbabc6979c2_tuple, 14, const_str_plain_transit_routing_preference ); Py_INCREF( const_str_plain_transit_routing_preference );
    PyTuple_SET_ITEM( const_tuple_f542042a804cccb211e42cbabc6979c2_tuple, 15, const_str_plain_traffic_model ); Py_INCREF( const_str_plain_traffic_model );
    PyTuple_SET_ITEM( const_tuple_f542042a804cccb211e42cbabc6979c2_tuple, 16, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    const_str_digest_f97574eaae23dded076ce4e53e9347e7 = UNSTREAM_STRING( &constant_bin[ 615158 ], 14, 0 );
    const_str_digest_b8daa0070f7ebe992b731c46c1501212 = UNSTREAM_STRING( &constant_bin[ 615172 ], 30, 0 );
    const_str_digest_633676da403182f9c15b182f3ee49bac = UNSTREAM_STRING( &constant_bin[ 615202 ], 2838, 0 );
    const_str_digest_ce9926f1604bba25af3a9de4f23213a6 = UNSTREAM_STRING( &constant_bin[ 618040 ], 102, 0 );
    const_str_plain_routes = UNSTREAM_STRING( &constant_bin[ 618029 ], 6, 1 );
    const_tuple_5614e20cf696be413a3b2fc247259eb3_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_5614e20cf696be413a3b2fc247259eb3_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_5614e20cf696be413a3b2fc247259eb3_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_5614e20cf696be413a3b2fc247259eb3_tuple, 2, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_5614e20cf696be413a3b2fc247259eb3_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_5614e20cf696be413a3b2fc247259eb3_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_5614e20cf696be413a3b2fc247259eb3_tuple, 5, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_5614e20cf696be413a3b2fc247259eb3_tuple, 6, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_5614e20cf696be413a3b2fc247259eb3_tuple, 7, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_5614e20cf696be413a3b2fc247259eb3_tuple, 8, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_5614e20cf696be413a3b2fc247259eb3_tuple, 9, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_5614e20cf696be413a3b2fc247259eb3_tuple, 10, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_5614e20cf696be413a3b2fc247259eb3_tuple, 11, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_5614e20cf696be413a3b2fc247259eb3_tuple, 12, Py_None ); Py_INCREF( Py_None );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_googlemaps$directions( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_eacc425b6d1ced72b87b5a14ef6b2f62;
static PyCodeObject *codeobj_3fd19be9e4f015d9300963b2cadc642e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_ce9926f1604bba25af3a9de4f23213a6;
    codeobj_eacc425b6d1ced72b87b5a14ef6b2f62 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_b8daa0070f7ebe992b731c46c1501212, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_3fd19be9e4f015d9300963b2cadc642e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_directions, 23, const_tuple_f542042a804cccb211e42cbabc6979c2_tuple, 16, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_googlemaps$directions$$$function_1_directions( PyObject *defaults );


// The module function definitions.
static PyObject *impl_googlemaps$directions$$$function_1_directions( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_client = python_pars[ 0 ];
    PyObject *par_origin = python_pars[ 1 ];
    PyObject *par_destination = python_pars[ 2 ];
    PyObject *par_mode = python_pars[ 3 ];
    PyObject *par_waypoints = python_pars[ 4 ];
    PyObject *par_alternatives = python_pars[ 5 ];
    PyObject *par_avoid = python_pars[ 6 ];
    PyObject *par_language = python_pars[ 7 ];
    PyObject *par_units = python_pars[ 8 ];
    PyObject *par_region = python_pars[ 9 ];
    PyObject *par_departure_time = python_pars[ 10 ];
    PyObject *par_arrival_time = python_pars[ 11 ];
    PyObject *par_optimize_waypoints = python_pars[ 12 ];
    PyObject *par_transit_mode = python_pars[ 13 ];
    PyObject *par_transit_routing_preference = python_pars[ 14 ];
    PyObject *par_traffic_model = python_pars[ 15 ];
    PyObject *var_params = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscribed_4;
    PyObject *tmp_ass_subscribed_5;
    PyObject *tmp_ass_subscribed_6;
    PyObject *tmp_ass_subscribed_7;
    PyObject *tmp_ass_subscribed_8;
    PyObject *tmp_ass_subscribed_9;
    PyObject *tmp_ass_subscribed_10;
    PyObject *tmp_ass_subscribed_11;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subscript_4;
    PyObject *tmp_ass_subscript_5;
    PyObject *tmp_ass_subscript_6;
    PyObject *tmp_ass_subscript_7;
    PyObject *tmp_ass_subscript_8;
    PyObject *tmp_ass_subscript_9;
    PyObject *tmp_ass_subscript_10;
    PyObject *tmp_ass_subscript_11;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_ass_subvalue_4;
    PyObject *tmp_ass_subvalue_5;
    PyObject *tmp_ass_subvalue_6;
    PyObject *tmp_ass_subvalue_7;
    PyObject *tmp_ass_subvalue_8;
    PyObject *tmp_ass_subvalue_9;
    PyObject *tmp_ass_subvalue_10;
    PyObject *tmp_ass_subvalue_11;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    int tmp_cond_truth_10;
    int tmp_cond_truth_11;
    int tmp_cond_truth_12;
    int tmp_cond_truth_13;
    int tmp_cond_truth_14;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_cond_value_10;
    PyObject *tmp_cond_value_11;
    PyObject *tmp_cond_value_12;
    PyObject *tmp_cond_value_13;
    PyObject *tmp_cond_value_14;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_left_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_3fd19be9e4f015d9300963b2cadc642e = NULL;

    struct Nuitka_FrameObject *frame_3fd19be9e4f015d9300963b2cadc642e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3fd19be9e4f015d9300963b2cadc642e, codeobj_3fd19be9e4f015d9300963b2cadc642e, module_googlemaps$directions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3fd19be9e4f015d9300963b2cadc642e = cache_frame_3fd19be9e4f015d9300963b2cadc642e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3fd19be9e4f015d9300963b2cadc642e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3fd19be9e4f015d9300963b2cadc642e ) == 2 ); // Frame stack

    // Framed code:
    tmp_assign_source_1 = _PyDict_NewPresized( 2 );
    tmp_dict_key_1 = const_str_plain_origin;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_googlemaps$directions, (Nuitka_StringObject *)const_str_plain_convert );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_convert );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "convert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_latlng );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 99;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_origin;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "origin" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_3fd19be9e4f015d9300963b2cadc642e->m_frame.f_lineno = 99;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 99;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_destination;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_googlemaps$directions, (Nuitka_StringObject *)const_str_plain_convert );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_convert );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "convert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_latlng );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 100;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_destination;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "destination" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_3fd19be9e4f015d9300963b2cadc642e->m_frame.f_lineno = 100;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 100;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    assert( var_params == NULL );
    var_params = tmp_assign_source_1;

    tmp_cond_value_1 = par_mode;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "mode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "ooooooooooooooooo";
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
    tmp_compare_left_1 = par_mode;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "mode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 106;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LIST_COPY( const_list_1515f5f7754b7da2365c0f5e50aafbe1_list );
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_1 = const_str_digest_1cc82fbafc161c63a7cb4af74bee6b93;
    frame_3fd19be9e4f015d9300963b2cadc642e->m_frame.f_lineno = 107;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 107;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_dictset_value = par_mode;

    if ( tmp_dictset_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "mode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dictset_dict = var_params;

    CHECK_OBJECT( tmp_dictset_dict );
    tmp_dictset_key = const_str_plain_mode;
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    branch_no_1:;
    tmp_cond_value_2 = par_waypoints;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "waypoints" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 110;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_1 = "ooooooooooooooooo";
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
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_googlemaps$directions, (Nuitka_StringObject *)const_str_plain_convert );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_convert );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "convert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_location_list );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_waypoints;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "waypoints" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_3fd19be9e4f015d9300963b2cadc642e->m_frame.f_lineno = 111;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_waypoints;
        par_waypoints = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_cond_value_3 = par_optimize_waypoints;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "optimize_waypoints" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_left_name_1 = const_str_digest_f97574eaae23dded076ce4e53e9347e7;
    tmp_right_name_1 = par_waypoints;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_assign_source_3 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_waypoints;
        par_waypoints = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    branch_no_4:;
    tmp_ass_subvalue_1 = par_waypoints;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_ass_subscribed_1 = var_params;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_plain_waypoints;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    tmp_cond_value_4 = par_alternatives;

    if ( tmp_cond_value_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "alternatives" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_ass_subvalue_2 = const_str_plain_true;
    tmp_ass_subscribed_2 = var_params;

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = const_str_plain_alternatives;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    tmp_cond_value_5 = par_avoid;

    if ( tmp_cond_value_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "avoid" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_googlemaps$directions, (Nuitka_StringObject *)const_str_plain_convert );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_convert );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "convert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_join_list );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_str_chr_124;
    tmp_args_element_name_5 = par_avoid;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "avoid" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_3fd19be9e4f015d9300963b2cadc642e->m_frame.f_lineno = 120;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_ass_subvalue_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_ass_subvalue_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_3 = var_params;

    if ( tmp_ass_subscribed_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_3 = const_str_plain_avoid;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    tmp_cond_value_6 = par_language;

    if ( tmp_cond_value_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "language" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_ass_subvalue_4 = par_language;

    if ( tmp_ass_subvalue_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "language" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 123;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_4 = var_params;

    if ( tmp_ass_subscribed_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 123;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_4 = const_str_plain_language;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    tmp_cond_value_7 = par_units;

    if ( tmp_cond_value_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "units" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_ass_subvalue_5 = par_units;

    if ( tmp_ass_subvalue_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "units" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 126;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_5 = var_params;

    if ( tmp_ass_subscribed_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 126;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_5 = const_str_plain_units;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_8:;
    tmp_cond_value_8 = par_region;

    if ( tmp_cond_value_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "region" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 128;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_ass_subvalue_6 = par_region;

    if ( tmp_ass_subvalue_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "region" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_6 = var_params;

    if ( tmp_ass_subscribed_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_6 = const_str_plain_region;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_9:;
    tmp_cond_value_9 = par_departure_time;

    if ( tmp_cond_value_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "departure_time" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_9 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_googlemaps$directions, (Nuitka_StringObject *)const_str_plain_convert );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_convert );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "convert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_time );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = par_departure_time;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "departure_time" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_3fd19be9e4f015d9300963b2cadc642e->m_frame.f_lineno = 132;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_ass_subvalue_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_ass_subvalue_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_7 = var_params;

    if ( tmp_ass_subscribed_7 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_7 = const_str_plain_departure_time;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7 );
    Py_DECREF( tmp_ass_subvalue_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_10:;
    tmp_cond_value_10 = par_arrival_time;

    if ( tmp_cond_value_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "arrival_time" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_10 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_googlemaps$directions, (Nuitka_StringObject *)const_str_plain_convert );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_convert );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "convert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_time );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = par_arrival_time;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "arrival_time" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_3fd19be9e4f015d9300963b2cadc642e->m_frame.f_lineno = 135;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_ass_subvalue_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_ass_subvalue_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_8 = var_params;

    if ( tmp_ass_subscribed_8 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_8 = const_str_plain_arrival_time;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8 );
    Py_DECREF( tmp_ass_subvalue_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_11:;
    tmp_and_left_value_1 = par_departure_time;

    if ( tmp_and_left_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "departure_time" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_and_right_value_1 = par_arrival_time;

    if ( tmp_and_right_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "arrival_time" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_11 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_11 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_11 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_make_exception_arg_2 = const_str_digest_aaf923957685b0f7f67691e908521870;
    frame_3fd19be9e4f015d9300963b2cadc642e->m_frame.f_lineno = 138;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 138;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_12:;
    tmp_cond_value_12 = par_transit_mode;

    if ( tmp_cond_value_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "transit_mode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 141;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_12 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_googlemaps$directions, (Nuitka_StringObject *)const_str_plain_convert );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_convert );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "convert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 142;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_join_list );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = const_str_chr_124;
    tmp_args_element_name_9 = par_transit_mode;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "transit_mode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 142;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_3fd19be9e4f015d9300963b2cadc642e->m_frame.f_lineno = 142;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_ass_subvalue_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_ass_subvalue_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_9 = var_params;

    if ( tmp_ass_subscribed_9 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 142;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_9 = const_str_plain_transit_mode;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9 );
    Py_DECREF( tmp_ass_subvalue_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_13:;
    tmp_cond_value_13 = par_transit_routing_preference;

    if ( tmp_cond_value_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "transit_routing_preference" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_13 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_ass_subvalue_10 = par_transit_routing_preference;

    if ( tmp_ass_subvalue_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "transit_routing_preference" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_10 = var_params;

    if ( tmp_ass_subscribed_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_10 = const_str_plain_transit_routing_preference;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_14:;
    tmp_cond_value_14 = par_traffic_model;

    if ( tmp_cond_value_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "traffic_model" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_14 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_ass_subvalue_11 = par_traffic_model;

    if ( tmp_ass_subvalue_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "traffic_model" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 148;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_11 = var_params;

    if ( tmp_ass_subscribed_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 148;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_11 = const_str_plain_traffic_model;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_15:;
    tmp_source_name_8 = par_client;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "client" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 150;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__request );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_10 = const_str_digest_bfac260cb46f956227d174118b85da0e;
    tmp_args_element_name_11 = var_params;

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 150;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_3fd19be9e4f015d9300963b2cadc642e->m_frame.f_lineno = 150;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_str_plain_routes;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fd19be9e4f015d9300963b2cadc642e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fd19be9e4f015d9300963b2cadc642e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fd19be9e4f015d9300963b2cadc642e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3fd19be9e4f015d9300963b2cadc642e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3fd19be9e4f015d9300963b2cadc642e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3fd19be9e4f015d9300963b2cadc642e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3fd19be9e4f015d9300963b2cadc642e,
        type_description_1,
        par_client,
        par_origin,
        par_destination,
        par_mode,
        par_waypoints,
        par_alternatives,
        par_avoid,
        par_language,
        par_units,
        par_region,
        par_departure_time,
        par_arrival_time,
        par_optimize_waypoints,
        par_transit_mode,
        par_transit_routing_preference,
        par_traffic_model,
        var_params
    );


    // Release cached frame.
    if ( frame_3fd19be9e4f015d9300963b2cadc642e == cache_frame_3fd19be9e4f015d9300963b2cadc642e )
    {
        Py_DECREF( frame_3fd19be9e4f015d9300963b2cadc642e );
    }
    cache_frame_3fd19be9e4f015d9300963b2cadc642e = NULL;

    assertFrameObject( frame_3fd19be9e4f015d9300963b2cadc642e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( googlemaps$directions$$$function_1_directions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_client );
    par_client = NULL;

    Py_XDECREF( par_origin );
    par_origin = NULL;

    Py_XDECREF( par_destination );
    par_destination = NULL;

    Py_XDECREF( par_mode );
    par_mode = NULL;

    Py_XDECREF( par_waypoints );
    par_waypoints = NULL;

    Py_XDECREF( par_alternatives );
    par_alternatives = NULL;

    Py_XDECREF( par_avoid );
    par_avoid = NULL;

    Py_XDECREF( par_language );
    par_language = NULL;

    Py_XDECREF( par_units );
    par_units = NULL;

    Py_XDECREF( par_region );
    par_region = NULL;

    Py_XDECREF( par_departure_time );
    par_departure_time = NULL;

    Py_XDECREF( par_arrival_time );
    par_arrival_time = NULL;

    Py_XDECREF( par_optimize_waypoints );
    par_optimize_waypoints = NULL;

    Py_XDECREF( par_transit_mode );
    par_transit_mode = NULL;

    Py_XDECREF( par_transit_routing_preference );
    par_transit_routing_preference = NULL;

    Py_XDECREF( par_traffic_model );
    par_traffic_model = NULL;

    Py_XDECREF( var_params );
    var_params = NULL;

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

    Py_XDECREF( par_client );
    par_client = NULL;

    Py_XDECREF( par_origin );
    par_origin = NULL;

    Py_XDECREF( par_destination );
    par_destination = NULL;

    Py_XDECREF( par_mode );
    par_mode = NULL;

    Py_XDECREF( par_waypoints );
    par_waypoints = NULL;

    Py_XDECREF( par_alternatives );
    par_alternatives = NULL;

    Py_XDECREF( par_avoid );
    par_avoid = NULL;

    Py_XDECREF( par_language );
    par_language = NULL;

    Py_XDECREF( par_units );
    par_units = NULL;

    Py_XDECREF( par_region );
    par_region = NULL;

    Py_XDECREF( par_departure_time );
    par_departure_time = NULL;

    Py_XDECREF( par_arrival_time );
    par_arrival_time = NULL;

    Py_XDECREF( par_optimize_waypoints );
    par_optimize_waypoints = NULL;

    Py_XDECREF( par_transit_mode );
    par_transit_mode = NULL;

    Py_XDECREF( par_transit_routing_preference );
    par_transit_routing_preference = NULL;

    Py_XDECREF( par_traffic_model );
    par_traffic_model = NULL;

    Py_XDECREF( var_params );
    var_params = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( googlemaps$directions$$$function_1_directions );
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



static PyObject *MAKE_FUNCTION_googlemaps$directions$$$function_1_directions( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_googlemaps$directions$$$function_1_directions,
        const_str_plain_directions,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3fd19be9e4f015d9300963b2cadc642e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_googlemaps$directions,
        const_str_digest_633676da403182f9c15b182f3ee49bac,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_googlemaps$directions =
{
    PyModuleDef_HEAD_INIT,
    "googlemaps.directions",   /* m_name */
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

MOD_INIT_DECL( googlemaps$directions )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_googlemaps$directions );
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
    puts("googlemaps.directions: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("googlemaps.directions: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initgooglemaps$directions" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_googlemaps$directions = Py_InitModule4(
        "googlemaps.directions",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_googlemaps$directions = PyModule_Create( &mdef_googlemaps$directions );
#endif

    moduledict_googlemaps$directions = MODULE_DICT( module_googlemaps$directions );

    CHECK_OBJECT( module_googlemaps$directions );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_67795b2b43592c3c2f828066ef7d7af7, module_googlemaps$directions );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_googlemaps$directions, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_googlemaps$directions, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_googlemaps$directions, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    struct Nuitka_FrameObject *frame_eacc425b6d1ced72b87b5a14ef6b2f62;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_058d4d86bb4f217810f1d6e092b30f75;
    UPDATE_STRING_DICT0( moduledict_googlemaps$directions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_ce9926f1604bba25af3a9de4f23213a6;
    UPDATE_STRING_DICT0( moduledict_googlemaps$directions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_googlemaps$directions, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_eacc425b6d1ced72b87b5a14ef6b2f62 = MAKE_MODULE_FRAME( codeobj_eacc425b6d1ced72b87b5a14ef6b2f62, module_googlemaps$directions );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_eacc425b6d1ced72b87b5a14ef6b2f62 );
    assert( Py_REFCNT( frame_eacc425b6d1ced72b87b5a14ef6b2f62 ) == 2 );

    // Framed code:
    frame_eacc425b6d1ced72b87b5a14ef6b2f62->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_67795b2b43592c3c2f828066ef7d7af7;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_eacc425b6d1ced72b87b5a14ef6b2f62->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_googlemaps$directions, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_googlemaps$directions, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_googlemaps;
    UPDATE_STRING_DICT0( moduledict_googlemaps$directions, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_plain_googlemaps;
    tmp_globals_name_1 = (PyObject *)moduledict_googlemaps$directions;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_convert_tuple;
    tmp_level_name_1 = const_int_0;
    frame_eacc425b6d1ced72b87b5a14ef6b2f62->m_frame.f_lineno = 20;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_convert );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_googlemaps$directions, (Nuitka_StringObject *)const_str_plain_convert, tmp_assign_source_7 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_eacc425b6d1ced72b87b5a14ef6b2f62 );
#endif
    popFrameStack();

    assertFrameObject( frame_eacc425b6d1ced72b87b5a14ef6b2f62 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_eacc425b6d1ced72b87b5a14ef6b2f62 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eacc425b6d1ced72b87b5a14ef6b2f62, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eacc425b6d1ced72b87b5a14ef6b2f62->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eacc425b6d1ced72b87b5a14ef6b2f62, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_defaults_1 = const_tuple_5614e20cf696be413a3b2fc247259eb3_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_8 = MAKE_FUNCTION_googlemaps$directions$$$function_1_directions( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_googlemaps$directions, (Nuitka_StringObject *)const_str_plain_directions, tmp_assign_source_8 );

    return MOD_RETURN_VALUE( module_googlemaps$directions );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
