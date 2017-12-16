/* Generated code for Python source for module 'googlemaps.geolocation'
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

/* The _module_googlemaps$geolocation is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_googlemaps$geolocation;
PyDictObject *moduledict_googlemaps$geolocation;

/* The module constants used, if any. */
static PyObject *const_str_plain__geolocation_extract;
extern PyObject *const_str_plain_post_json;
extern PyObject *const_str_plain__RetriableRequest;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_none_none_none_none_none_none_none_tuple;
static PyObject *const_str_plain_radioType;
static PyObject *const_tuple_int_pos_200_int_pos_404_tuple;
extern PyObject *const_str_plain_params;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_googlemaps;
static PyObject *const_int_pos_403;
extern PyObject *const_int_0;
static PyObject *const_str_digest_bba474e9bee6cc88363622d76bffcf68;
extern PyObject *const_str_plain_json;
static PyObject *const_tuple_str_plain_response_str_plain_body_str_plain_error_tuple;
extern PyObject *const_str_plain_response;
static PyObject *const_str_plain_wifiAccessPoints;
extern PyObject *const_str_plain_client;
static PyObject *const_str_digest_3e583b1e2e417e542e79e840d7186a29;
extern PyObject *const_str_plain_geolocate;
static PyObject *const_str_plain_carrier;
static PyObject *const_str_plain_radio_type;
static PyObject *const_str_plain_cell_towers;
static PyObject *const_str_plain_considerIp;
static PyObject *const_str_plain_wifi_access_points;
static PyObject *const_str_digest_cff76e4502b5987d98f07c58e881ccc0;
static PyObject *const_str_digest_8d64245251f172d526a85a32ffeaa4f5;
static PyObject *const_str_plain_cellTowers;
static PyObject *const_tuple_str_digest_8d64245251f172d526a85a32ffeaa4f5_dict_empty_tuple;
static PyObject *const_tuple_841c2d09bbb8e457c0a484eae0dd40a6_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_int_pos_404;
static PyObject *const_str_plain_homeMobileNetworkCode;
extern PyObject *const_str_plain_extract_body;
extern PyObject *const_str_plain_ApiError;
static PyObject *const_str_plain_homeMobileCountryCode;
static PyObject *const_str_plain_consider_ip;
extern PyObject *const_str_plain_status_code;
extern PyObject *const_str_digest_4c68e48dcecb0e2bf6c527e341b5127a;
static PyObject *const_str_digest_adbcd6e510930967c5430d621e7131ef;
static PyObject *const_str_plain__GEOLOCATION_BASE_URL;
static PyObject *const_str_digest_f3c935573ca0e2dbe65a2daf5b901da8;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_base_url;
extern PyObject *const_int_pos_200;
extern PyObject *const_str_plain_body;
static PyObject *const_str_plain_home_mobile_network_code;
extern PyObject *const_str_plain_errors;
extern PyObject *const_str_plain__request;
static PyObject *const_str_digest_f9966b2d1873de6dabf3bd81acc42776;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_reason;
extern PyObject *const_tuple_str_plain_exceptions_tuple;
extern PyObject *const_str_plain_error;
static PyObject *const_str_plain_home_mobile_country_code;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain__geolocation_extract = UNSTREAM_STRING( &constant_bin[ 624761 ], 20, 1 );
    const_str_plain_radioType = UNSTREAM_STRING( &constant_bin[ 624781 ], 9, 1 );
    const_tuple_int_pos_200_int_pos_404_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_200_int_pos_404_tuple, 0, const_int_pos_200 ); Py_INCREF( const_int_pos_200 );
    const_int_pos_404 = PyLong_FromUnsignedLong( 404ul );
    PyTuple_SET_ITEM( const_tuple_int_pos_200_int_pos_404_tuple, 1, const_int_pos_404 ); Py_INCREF( const_int_pos_404 );
    const_int_pos_403 = PyLong_FromUnsignedLong( 403ul );
    const_str_digest_bba474e9bee6cc88363622d76bffcf68 = UNSTREAM_STRING( &constant_bin[ 624790 ], 26, 0 );
    const_tuple_str_plain_response_str_plain_body_str_plain_error_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_response_str_plain_body_str_plain_error_tuple, 0, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_str_plain_response_str_plain_body_str_plain_error_tuple, 1, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    PyTuple_SET_ITEM( const_tuple_str_plain_response_str_plain_body_str_plain_error_tuple, 2, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    const_str_plain_wifiAccessPoints = UNSTREAM_STRING( &constant_bin[ 624816 ], 16, 1 );
    const_str_digest_3e583b1e2e417e542e79e840d7186a29 = UNSTREAM_STRING( &constant_bin[ 624832 ], 134, 0 );
    const_str_plain_carrier = UNSTREAM_STRING( &constant_bin[ 624966 ], 7, 1 );
    const_str_plain_radio_type = UNSTREAM_STRING( &constant_bin[ 624973 ], 10, 1 );
    const_str_plain_cell_towers = UNSTREAM_STRING( &constant_bin[ 624983 ], 11, 1 );
    const_str_plain_considerIp = UNSTREAM_STRING( &constant_bin[ 624994 ], 10, 1 );
    const_str_plain_wifi_access_points = UNSTREAM_STRING( &constant_bin[ 625004 ], 18, 1 );
    const_str_digest_cff76e4502b5987d98f07c58e881ccc0 = UNSTREAM_STRING( &constant_bin[ 625022 ], 1605, 0 );
    const_str_digest_8d64245251f172d526a85a32ffeaa4f5 = UNSTREAM_STRING( &constant_bin[ 626627 ], 25, 0 );
    const_str_plain_cellTowers = UNSTREAM_STRING( &constant_bin[ 626652 ], 10, 1 );
    const_tuple_str_digest_8d64245251f172d526a85a32ffeaa4f5_dict_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_8d64245251f172d526a85a32ffeaa4f5_dict_empty_tuple, 0, const_str_digest_8d64245251f172d526a85a32ffeaa4f5 ); Py_INCREF( const_str_digest_8d64245251f172d526a85a32ffeaa4f5 );
    PyTuple_SET_ITEM( const_tuple_str_digest_8d64245251f172d526a85a32ffeaa4f5_dict_empty_tuple, 1, const_dict_empty ); Py_INCREF( const_dict_empty );
    const_tuple_841c2d09bbb8e457c0a484eae0dd40a6_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_841c2d09bbb8e457c0a484eae0dd40a6_tuple, 0, const_str_plain_client ); Py_INCREF( const_str_plain_client );
    const_str_plain_home_mobile_country_code = UNSTREAM_STRING( &constant_bin[ 625318 ], 24, 1 );
    PyTuple_SET_ITEM( const_tuple_841c2d09bbb8e457c0a484eae0dd40a6_tuple, 1, const_str_plain_home_mobile_country_code ); Py_INCREF( const_str_plain_home_mobile_country_code );
    const_str_plain_home_mobile_network_code = UNSTREAM_STRING( &constant_bin[ 625468 ], 24, 1 );
    PyTuple_SET_ITEM( const_tuple_841c2d09bbb8e457c0a484eae0dd40a6_tuple, 2, const_str_plain_home_mobile_network_code ); Py_INCREF( const_str_plain_home_mobile_network_code );
    PyTuple_SET_ITEM( const_tuple_841c2d09bbb8e457c0a484eae0dd40a6_tuple, 3, const_str_plain_radio_type ); Py_INCREF( const_str_plain_radio_type );
    PyTuple_SET_ITEM( const_tuple_841c2d09bbb8e457c0a484eae0dd40a6_tuple, 4, const_str_plain_carrier ); Py_INCREF( const_str_plain_carrier );
    const_str_plain_consider_ip = UNSTREAM_STRING( &constant_bin[ 625935 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_841c2d09bbb8e457c0a484eae0dd40a6_tuple, 5, const_str_plain_consider_ip ); Py_INCREF( const_str_plain_consider_ip );
    PyTuple_SET_ITEM( const_tuple_841c2d09bbb8e457c0a484eae0dd40a6_tuple, 6, const_str_plain_cell_towers ); Py_INCREF( const_str_plain_cell_towers );
    PyTuple_SET_ITEM( const_tuple_841c2d09bbb8e457c0a484eae0dd40a6_tuple, 7, const_str_plain_wifi_access_points ); Py_INCREF( const_str_plain_wifi_access_points );
    PyTuple_SET_ITEM( const_tuple_841c2d09bbb8e457c0a484eae0dd40a6_tuple, 8, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    const_str_plain_homeMobileNetworkCode = UNSTREAM_STRING( &constant_bin[ 626662 ], 21, 1 );
    const_str_plain_homeMobileCountryCode = UNSTREAM_STRING( &constant_bin[ 626683 ], 21, 1 );
    const_str_digest_adbcd6e510930967c5430d621e7131ef = UNSTREAM_STRING( &constant_bin[ 626704 ], 103, 0 );
    const_str_plain__GEOLOCATION_BASE_URL = UNSTREAM_STRING( &constant_bin[ 626807 ], 21, 1 );
    const_str_digest_f3c935573ca0e2dbe65a2daf5b901da8 = UNSTREAM_STRING( &constant_bin[ 626828 ], 53, 0 );
    const_str_digest_f9966b2d1873de6dabf3bd81acc42776 = UNSTREAM_STRING( &constant_bin[ 626881 ], 31, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_googlemaps$geolocation( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_96f9caa47f1469c3b74200fb441439bc;
static PyCodeObject *codeobj_367a64a53b4159a6b39d8816c909126f;
static PyCodeObject *codeobj_b497a08166e787dca651c9199bca43e1;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_adbcd6e510930967c5430d621e7131ef;
    codeobj_96f9caa47f1469c3b74200fb441439bc = MAKE_CODEOBJ( module_filename_obj, const_str_digest_f9966b2d1873de6dabf3bd81acc42776, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_367a64a53b4159a6b39d8816c909126f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__geolocation_extract, 25, const_tuple_str_plain_response_str_plain_body_str_plain_error_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b497a08166e787dca651c9199bca43e1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_geolocate, 43, const_tuple_841c2d09bbb8e457c0a484eae0dd40a6_tuple, 8, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_googlemaps$geolocation$$$function_1__geolocation_extract(  );


static PyObject *MAKE_FUNCTION_googlemaps$geolocation$$$function_2_geolocate( PyObject *defaults );


// The module function definitions.
static PyObject *impl_googlemaps$geolocation$$$function_1__geolocation_extract( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_response = python_pars[ 0 ];
    PyObject *var_body = NULL;
    PyObject *var_error = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    int tmp_cmp_Eq_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    static struct Nuitka_FrameObject *cache_frame_367a64a53b4159a6b39d8816c909126f = NULL;

    struct Nuitka_FrameObject *frame_367a64a53b4159a6b39d8816c909126f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_367a64a53b4159a6b39d8816c909126f, codeobj_367a64a53b4159a6b39d8816c909126f, module_googlemaps$geolocation, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_367a64a53b4159a6b39d8816c909126f = cache_frame_367a64a53b4159a6b39d8816c909126f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_367a64a53b4159a6b39d8816c909126f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_367a64a53b4159a6b39d8816c909126f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_response;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_367a64a53b4159a6b39d8816c909126f->m_frame.f_lineno = 30;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_json );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_body == NULL );
    var_body = tmp_assign_source_1;

    tmp_source_name_1 = par_response;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_status_code );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_tuple_int_pos_200_int_pos_404_tuple;
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = var_body;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "body" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = par_response;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_status_code );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_403;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 33;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_googlemaps$geolocation, (Nuitka_StringObject *)const_str_plain_exceptions );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exceptions );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "exceptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_367a64a53b4159a6b39d8816c909126f->m_frame.f_lineno = 34;
    tmp_raise_type_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain__RetriableRequest );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 34;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    goto branch_end_2;
    branch_no_2:;
    // Tried code:
    tmp_subscribed_name_4 = var_body;

    if ( tmp_subscribed_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "body" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_1 = const_str_plain_error;
    tmp_subscribed_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_1 );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_2 = const_str_plain_errors;
    tmp_subscribed_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_3 = const_int_0;
    tmp_subscribed_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_4 = const_str_plain_reason;
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    assert( var_error == NULL );
    var_error = tmp_assign_source_2;

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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_367a64a53b4159a6b39d8816c909126f, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_367a64a53b4159a6b39d8816c909126f, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_KeyError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_3 = Py_None;
    assert( var_error == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_error = tmp_assign_source_3;

    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 36;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_367a64a53b4159a6b39d8816c909126f->m_frame) frame_367a64a53b4159a6b39d8816c909126f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    branch_end_3:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( googlemaps$geolocation$$$function_1__geolocation_extract );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_googlemaps$geolocation, (Nuitka_StringObject *)const_str_plain_exceptions );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exceptions );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "exceptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ApiError );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_response;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_status_code );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 40;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_error;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_367a64a53b4159a6b39d8816c909126f->m_frame.f_lineno = 40;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 40;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_end_2:;
    branch_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_367a64a53b4159a6b39d8816c909126f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_367a64a53b4159a6b39d8816c909126f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_367a64a53b4159a6b39d8816c909126f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_367a64a53b4159a6b39d8816c909126f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_367a64a53b4159a6b39d8816c909126f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_367a64a53b4159a6b39d8816c909126f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_367a64a53b4159a6b39d8816c909126f,
        type_description_1,
        par_response,
        var_body,
        var_error
    );


    // Release cached frame.
    if ( frame_367a64a53b4159a6b39d8816c909126f == cache_frame_367a64a53b4159a6b39d8816c909126f )
    {
        Py_DECREF( frame_367a64a53b4159a6b39d8816c909126f );
    }
    cache_frame_367a64a53b4159a6b39d8816c909126f = NULL;

    assertFrameObject( frame_367a64a53b4159a6b39d8816c909126f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( googlemaps$geolocation$$$function_1__geolocation_extract );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_body );
    var_body = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_body );
    var_body = NULL;

    Py_XDECREF( var_error );
    var_error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( googlemaps$geolocation$$$function_1__geolocation_extract );
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


static PyObject *impl_googlemaps$geolocation$$$function_2_geolocate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_client = python_pars[ 0 ];
    PyObject *par_home_mobile_country_code = python_pars[ 1 ];
    PyObject *par_home_mobile_network_code = python_pars[ 2 ];
    PyObject *par_radio_type = python_pars[ 3 ];
    PyObject *par_carrier = python_pars[ 4 ];
    PyObject *par_consider_ip = python_pars[ 5 ];
    PyObject *par_cell_towers = python_pars[ 6 ];
    PyObject *par_wifi_access_points = python_pars[ 7 ];
    PyObject *var_params = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscribed_4;
    PyObject *tmp_ass_subscribed_5;
    PyObject *tmp_ass_subscribed_6;
    PyObject *tmp_ass_subscribed_7;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subscript_4;
    PyObject *tmp_ass_subscript_5;
    PyObject *tmp_ass_subscript_6;
    PyObject *tmp_ass_subscript_7;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_ass_subvalue_4;
    PyObject *tmp_ass_subvalue_5;
    PyObject *tmp_ass_subvalue_6;
    PyObject *tmp_ass_subvalue_7;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
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
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    bool tmp_isnot_4;
    bool tmp_isnot_5;
    bool tmp_isnot_6;
    bool tmp_isnot_7;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_b497a08166e787dca651c9199bca43e1 = NULL;

    struct Nuitka_FrameObject *frame_b497a08166e787dca651c9199bca43e1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyDict_New();
    assert( var_params == NULL );
    var_params = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b497a08166e787dca651c9199bca43e1, codeobj_b497a08166e787dca651c9199bca43e1, module_googlemaps$geolocation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b497a08166e787dca651c9199bca43e1 = cache_frame_b497a08166e787dca651c9199bca43e1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b497a08166e787dca651c9199bca43e1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b497a08166e787dca651c9199bca43e1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_home_mobile_country_code;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_ass_subvalue_1 = par_home_mobile_country_code;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "home_mobile_country_code" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = var_params;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_plain_homeMobileCountryCode;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_compare_left_2 = par_home_mobile_network_code;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "home_mobile_network_code" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_ass_subvalue_2 = par_home_mobile_network_code;

    if ( tmp_ass_subvalue_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "home_mobile_network_code" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_2 = var_params;

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = const_str_plain_homeMobileNetworkCode;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    tmp_compare_left_3 = par_radio_type;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "radio_type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = Py_None;
    tmp_isnot_3 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if ( tmp_isnot_3 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_ass_subvalue_3 = par_radio_type;

    if ( tmp_ass_subvalue_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "radio_type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_3 = var_params;

    if ( tmp_ass_subscribed_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_3 = const_str_plain_radioType;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    tmp_compare_left_4 = par_carrier;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "carrier" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = Py_None;
    tmp_isnot_4 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    if ( tmp_isnot_4 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_ass_subvalue_4 = par_carrier;

    if ( tmp_ass_subvalue_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "carrier" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "ooooooooo";
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

        exception_lineno = 94;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_4 = const_str_plain_carrier;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    tmp_compare_left_5 = par_consider_ip;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "consider_ip" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = Py_None;
    tmp_isnot_5 = ( tmp_compare_left_5 != tmp_compare_right_5 );
    if ( tmp_isnot_5 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_ass_subvalue_5 = par_consider_ip;

    if ( tmp_ass_subvalue_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "consider_ip" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "ooooooooo";
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

        exception_lineno = 96;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_5 = const_str_plain_considerIp;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    tmp_compare_left_6 = par_cell_towers;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cell_towers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = Py_None;
    tmp_isnot_6 = ( tmp_compare_left_6 != tmp_compare_right_6 );
    if ( tmp_isnot_6 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_ass_subvalue_6 = par_cell_towers;

    if ( tmp_ass_subvalue_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cell_towers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 98;
        type_description_1 = "ooooooooo";
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

        exception_lineno = 98;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_6 = const_str_plain_cellTowers;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    tmp_compare_left_7 = par_wifi_access_points;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "wifi_access_points" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = Py_None;
    tmp_isnot_7 = ( tmp_compare_left_7 != tmp_compare_right_7 );
    if ( tmp_isnot_7 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_ass_subvalue_7 = par_wifi_access_points;

    if ( tmp_ass_subvalue_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "wifi_access_points" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_7 = var_params;

    if ( tmp_ass_subscribed_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_7 = const_str_plain_wifiAccessPoints;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    tmp_source_name_1 = par_client;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "client" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__request );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = DEEP_COPY( const_tuple_str_digest_8d64245251f172d526a85a32ffeaa4f5_dict_empty_tuple );
    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_dict_key_1 = const_str_plain_base_url;
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_googlemaps$geolocation, (Nuitka_StringObject *)const_str_plain__GEOLOCATION_BASE_URL );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__GEOLOCATION_BASE_URL );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_GEOLOCATION_BASE_URL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_extract_body;
    tmp_dict_value_2 = GET_STRING_DICT_VALUE( moduledict_googlemaps$geolocation, (Nuitka_StringObject *)const_str_plain__geolocation_extract );

    if (unlikely( tmp_dict_value_2 == NULL ))
    {
        tmp_dict_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__geolocation_extract );
    }

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_geolocation_extract" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_post_json;
    tmp_dict_value_3 = var_params;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_b497a08166e787dca651c9199bca43e1->m_frame.f_lineno = 102;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b497a08166e787dca651c9199bca43e1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b497a08166e787dca651c9199bca43e1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b497a08166e787dca651c9199bca43e1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b497a08166e787dca651c9199bca43e1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b497a08166e787dca651c9199bca43e1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b497a08166e787dca651c9199bca43e1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b497a08166e787dca651c9199bca43e1,
        type_description_1,
        par_client,
        par_home_mobile_country_code,
        par_home_mobile_network_code,
        par_radio_type,
        par_carrier,
        par_consider_ip,
        par_cell_towers,
        par_wifi_access_points,
        var_params
    );


    // Release cached frame.
    if ( frame_b497a08166e787dca651c9199bca43e1 == cache_frame_b497a08166e787dca651c9199bca43e1 )
    {
        Py_DECREF( frame_b497a08166e787dca651c9199bca43e1 );
    }
    cache_frame_b497a08166e787dca651c9199bca43e1 = NULL;

    assertFrameObject( frame_b497a08166e787dca651c9199bca43e1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( googlemaps$geolocation$$$function_2_geolocate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_client );
    par_client = NULL;

    Py_XDECREF( par_home_mobile_country_code );
    par_home_mobile_country_code = NULL;

    Py_XDECREF( par_home_mobile_network_code );
    par_home_mobile_network_code = NULL;

    Py_XDECREF( par_radio_type );
    par_radio_type = NULL;

    Py_XDECREF( par_carrier );
    par_carrier = NULL;

    Py_XDECREF( par_consider_ip );
    par_consider_ip = NULL;

    Py_XDECREF( par_cell_towers );
    par_cell_towers = NULL;

    Py_XDECREF( par_wifi_access_points );
    par_wifi_access_points = NULL;

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

    Py_XDECREF( par_home_mobile_country_code );
    par_home_mobile_country_code = NULL;

    Py_XDECREF( par_home_mobile_network_code );
    par_home_mobile_network_code = NULL;

    Py_XDECREF( par_radio_type );
    par_radio_type = NULL;

    Py_XDECREF( par_carrier );
    par_carrier = NULL;

    Py_XDECREF( par_consider_ip );
    par_consider_ip = NULL;

    Py_XDECREF( par_cell_towers );
    par_cell_towers = NULL;

    Py_XDECREF( par_wifi_access_points );
    par_wifi_access_points = NULL;

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
    NUITKA_CANNOT_GET_HERE( googlemaps$geolocation$$$function_2_geolocate );
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



static PyObject *MAKE_FUNCTION_googlemaps$geolocation$$$function_1__geolocation_extract(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_googlemaps$geolocation$$$function_1__geolocation_extract,
        const_str_plain__geolocation_extract,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_367a64a53b4159a6b39d8816c909126f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_googlemaps$geolocation,
        const_str_digest_3e583b1e2e417e542e79e840d7186a29,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_googlemaps$geolocation$$$function_2_geolocate( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_googlemaps$geolocation$$$function_2_geolocate,
        const_str_plain_geolocate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b497a08166e787dca651c9199bca43e1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_googlemaps$geolocation,
        const_str_digest_cff76e4502b5987d98f07c58e881ccc0,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_googlemaps$geolocation =
{
    PyModuleDef_HEAD_INIT,
    "googlemaps.geolocation",   /* m_name */
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

MOD_INIT_DECL( googlemaps$geolocation )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_googlemaps$geolocation );
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
    puts("googlemaps.geolocation: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("googlemaps.geolocation: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initgooglemaps$geolocation" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_googlemaps$geolocation = Py_InitModule4(
        "googlemaps.geolocation",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_googlemaps$geolocation = PyModule_Create( &mdef_googlemaps$geolocation );
#endif

    moduledict_googlemaps$geolocation = MODULE_DICT( module_googlemaps$geolocation );

    CHECK_OBJECT( module_googlemaps$geolocation );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_4c68e48dcecb0e2bf6c527e341b5127a, module_googlemaps$geolocation );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_googlemaps$geolocation, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_googlemaps$geolocation, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_googlemaps$geolocation, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_called_name_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    struct Nuitka_FrameObject *frame_96f9caa47f1469c3b74200fb441439bc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_f3c935573ca0e2dbe65a2daf5b901da8;
    UPDATE_STRING_DICT0( moduledict_googlemaps$geolocation, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_adbcd6e510930967c5430d621e7131ef;
    UPDATE_STRING_DICT0( moduledict_googlemaps$geolocation, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_googlemaps$geolocation, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_96f9caa47f1469c3b74200fb441439bc = MAKE_MODULE_FRAME( codeobj_96f9caa47f1469c3b74200fb441439bc, module_googlemaps$geolocation );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_96f9caa47f1469c3b74200fb441439bc );
    assert( Py_REFCNT( frame_96f9caa47f1469c3b74200fb441439bc ) == 2 );

    // Framed code:
    frame_96f9caa47f1469c3b74200fb441439bc->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_4c68e48dcecb0e2bf6c527e341b5127a;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_96f9caa47f1469c3b74200fb441439bc->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_googlemaps$geolocation, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_googlemaps$geolocation, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_googlemaps;
    UPDATE_STRING_DICT0( moduledict_googlemaps$geolocation, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_plain_googlemaps;
    tmp_globals_name_1 = (PyObject *)moduledict_googlemaps$geolocation;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_exceptions_tuple;
    tmp_level_name_1 = const_int_0;
    frame_96f9caa47f1469c3b74200fb441439bc->m_frame.f_lineno = 19;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_exceptions );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_googlemaps$geolocation, (Nuitka_StringObject *)const_str_plain_exceptions, tmp_assign_source_7 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_96f9caa47f1469c3b74200fb441439bc );
#endif
    popFrameStack();

    assertFrameObject( frame_96f9caa47f1469c3b74200fb441439bc );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_96f9caa47f1469c3b74200fb441439bc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_96f9caa47f1469c3b74200fb441439bc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_96f9caa47f1469c3b74200fb441439bc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_96f9caa47f1469c3b74200fb441439bc, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_8 = const_str_digest_bba474e9bee6cc88363622d76bffcf68;
    UPDATE_STRING_DICT0( moduledict_googlemaps$geolocation, (Nuitka_StringObject *)const_str_plain__GEOLOCATION_BASE_URL, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_googlemaps$geolocation$$$function_1__geolocation_extract(  );
    UPDATE_STRING_DICT1( moduledict_googlemaps$geolocation, (Nuitka_StringObject *)const_str_plain__geolocation_extract, tmp_assign_source_9 );
    tmp_defaults_1 = const_tuple_none_none_none_none_none_none_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_10 = MAKE_FUNCTION_googlemaps$geolocation$$$function_2_geolocate( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_googlemaps$geolocation, (Nuitka_StringObject *)const_str_plain_geolocate, tmp_assign_source_10 );

    return MOD_RETURN_VALUE( module_googlemaps$geolocation );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
