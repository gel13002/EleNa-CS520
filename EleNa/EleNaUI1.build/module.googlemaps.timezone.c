/* Generated code for Python source for module 'googlemaps.timezone'
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

/* The _module_googlemaps$timezone is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_googlemaps$timezone;
PyDictObject *moduledict_googlemaps$timezone;

/* The module constants used, if any. */
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_digest_058d4d86bb4f217810f1d6e092b30f75;
extern PyObject *const_tuple_str_plain_convert_tuple;
extern PyObject *const_str_plain_params;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_language;
extern PyObject *const_str_plain_googlemaps;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_timezone;
extern PyObject *const_str_plain_client;
static PyObject *const_str_plain_timestamp;
static PyObject *const_str_digest_d0ac70a90703bd66c1071c81ff62b574;
static PyObject *const_tuple_21d6e3a809a675b21dfd565e61626ffb_tuple;
extern PyObject *const_str_plain_convert;
static PyObject *const_str_digest_12e0abb861aceebb349a3e99debbd426;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_utcnow;
extern PyObject *const_str_plain_location;
extern PyObject *const_str_digest_7bd840164f57ebb25b44cd12bfdda4f4;
extern PyObject *const_str_plain_datetime;
static PyObject *const_str_digest_4d8bfda747a10a4dc03a4543cab9be3e;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_latlng;
static PyObject *const_str_digest_299ef014bed987fc5ea894430c445b15;
extern PyObject *const_tuple_str_plain_datetime_tuple;
extern PyObject *const_str_plain__request;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_timestamp = UNSTREAM_STRING( &constant_bin[ 639464 ], 9, 1 );
    const_str_digest_d0ac70a90703bd66c1071c81ff62b574 = UNSTREAM_STRING( &constant_bin[ 639473 ], 741, 0 );
    const_tuple_21d6e3a809a675b21dfd565e61626ffb_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_21d6e3a809a675b21dfd565e61626ffb_tuple, 0, const_str_plain_client ); Py_INCREF( const_str_plain_client );
    PyTuple_SET_ITEM( const_tuple_21d6e3a809a675b21dfd565e61626ffb_tuple, 1, const_str_plain_location ); Py_INCREF( const_str_plain_location );
    PyTuple_SET_ITEM( const_tuple_21d6e3a809a675b21dfd565e61626ffb_tuple, 2, const_str_plain_timestamp ); Py_INCREF( const_str_plain_timestamp );
    PyTuple_SET_ITEM( const_tuple_21d6e3a809a675b21dfd565e61626ffb_tuple, 3, const_str_plain_language ); Py_INCREF( const_str_plain_language );
    PyTuple_SET_ITEM( const_tuple_21d6e3a809a675b21dfd565e61626ffb_tuple, 4, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    const_str_digest_12e0abb861aceebb349a3e99debbd426 = UNSTREAM_STRING( &constant_bin[ 640214 ], 28, 0 );
    const_str_plain_utcnow = UNSTREAM_STRING( &constant_bin[ 640044 ], 6, 1 );
    const_str_digest_4d8bfda747a10a4dc03a4543cab9be3e = UNSTREAM_STRING( &constant_bin[ 640242 ], 100, 0 );
    const_str_digest_299ef014bed987fc5ea894430c445b15 = UNSTREAM_STRING( &constant_bin[ 640342 ], 23, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_googlemaps$timezone( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_385f6da438aad67f5fc8e13727b58257;
static PyCodeObject *codeobj_6a0b8eed5d174955da07f2e3d7e11eb7;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_4d8bfda747a10a4dc03a4543cab9be3e;
    codeobj_385f6da438aad67f5fc8e13727b58257 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_12e0abb861aceebb349a3e99debbd426, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_6a0b8eed5d174955da07f2e3d7e11eb7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_timezone, 25, const_tuple_21d6e3a809a675b21dfd565e61626ffb_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_googlemaps$timezone$$$function_1_timezone( PyObject *defaults );


// The module function definitions.
static PyObject *impl_googlemaps$timezone$$$function_1_timezone( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_client = python_pars[ 0 ];
    PyObject *par_location = python_pars[ 1 ];
    PyObject *par_timestamp = python_pars[ 2 ];
    PyObject *par_language = python_pars[ 3 ];
    PyObject *var_params = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_6a0b8eed5d174955da07f2e3d7e11eb7 = NULL;

    struct Nuitka_FrameObject *frame_6a0b8eed5d174955da07f2e3d7e11eb7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6a0b8eed5d174955da07f2e3d7e11eb7, codeobj_6a0b8eed5d174955da07f2e3d7e11eb7, module_googlemaps$timezone, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6a0b8eed5d174955da07f2e3d7e11eb7 = cache_frame_6a0b8eed5d174955da07f2e3d7e11eb7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6a0b8eed5d174955da07f2e3d7e11eb7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6a0b8eed5d174955da07f2e3d7e11eb7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assign_source_1 = _PyDict_NewPresized( 2 );
    tmp_dict_key_1 = const_str_plain_location;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_googlemaps$timezone, (Nuitka_StringObject *)const_str_plain_convert );

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

        exception_lineno = 47;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_latlng );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 47;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_location;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "location" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_6a0b8eed5d174955da07f2e3d7e11eb7->m_frame.f_lineno = 47;
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

        exception_lineno = 47;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_timestamp;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_googlemaps$timezone, (Nuitka_StringObject *)const_str_plain_convert );

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

        exception_lineno = 48;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_time );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 48;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = par_timestamp;

    if ( tmp_or_left_value_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timestamp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 48;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_googlemaps$timezone, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_called_instance_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_6a0b8eed5d174955da07f2e3d7e11eb7->m_frame.f_lineno = 48;
    tmp_or_right_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_utcnow );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 48;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_args_element_name_2 = tmp_or_left_value_1;
    or_end_1:;
    frame_6a0b8eed5d174955da07f2e3d7e11eb7->m_frame.f_lineno = 48;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 48;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    assert( var_params == NULL );
    var_params = tmp_assign_source_1;

    tmp_cond_value_1 = par_language;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "language" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "ooooo";
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
    tmp_dictset_value = par_language;

    if ( tmp_dictset_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "language" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_dictset_dict = var_params;

    CHECK_OBJECT( tmp_dictset_dict );
    tmp_dictset_key = const_str_plain_language;
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    branch_no_1:;
    tmp_source_name_3 = par_client;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "client" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__request );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_str_digest_299ef014bed987fc5ea894430c445b15;
    tmp_args_element_name_4 = var_params;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_6a0b8eed5d174955da07f2e3d7e11eb7->m_frame.f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a0b8eed5d174955da07f2e3d7e11eb7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a0b8eed5d174955da07f2e3d7e11eb7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a0b8eed5d174955da07f2e3d7e11eb7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6a0b8eed5d174955da07f2e3d7e11eb7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6a0b8eed5d174955da07f2e3d7e11eb7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6a0b8eed5d174955da07f2e3d7e11eb7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6a0b8eed5d174955da07f2e3d7e11eb7,
        type_description_1,
        par_client,
        par_location,
        par_timestamp,
        par_language,
        var_params
    );


    // Release cached frame.
    if ( frame_6a0b8eed5d174955da07f2e3d7e11eb7 == cache_frame_6a0b8eed5d174955da07f2e3d7e11eb7 )
    {
        Py_DECREF( frame_6a0b8eed5d174955da07f2e3d7e11eb7 );
    }
    cache_frame_6a0b8eed5d174955da07f2e3d7e11eb7 = NULL;

    assertFrameObject( frame_6a0b8eed5d174955da07f2e3d7e11eb7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( googlemaps$timezone$$$function_1_timezone );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_client );
    par_client = NULL;

    Py_XDECREF( par_location );
    par_location = NULL;

    Py_XDECREF( par_timestamp );
    par_timestamp = NULL;

    Py_XDECREF( par_language );
    par_language = NULL;

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

    Py_XDECREF( par_location );
    par_location = NULL;

    Py_XDECREF( par_timestamp );
    par_timestamp = NULL;

    Py_XDECREF( par_language );
    par_language = NULL;

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
    NUITKA_CANNOT_GET_HERE( googlemaps$timezone$$$function_1_timezone );
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



static PyObject *MAKE_FUNCTION_googlemaps$timezone$$$function_1_timezone( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_googlemaps$timezone$$$function_1_timezone,
        const_str_plain_timezone,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6a0b8eed5d174955da07f2e3d7e11eb7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_googlemaps$timezone,
        const_str_digest_d0ac70a90703bd66c1071c81ff62b574,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_googlemaps$timezone =
{
    PyModuleDef_HEAD_INIT,
    "googlemaps.timezone",   /* m_name */
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

MOD_INIT_DECL( googlemaps$timezone )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_googlemaps$timezone );
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
    puts("googlemaps.timezone: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("googlemaps.timezone: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initgooglemaps$timezone" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_googlemaps$timezone = Py_InitModule4(
        "googlemaps.timezone",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_googlemaps$timezone = PyModule_Create( &mdef_googlemaps$timezone );
#endif

    moduledict_googlemaps$timezone = MODULE_DICT( module_googlemaps$timezone );

    CHECK_OBJECT( module_googlemaps$timezone );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_7bd840164f57ebb25b44cd12bfdda4f4, module_googlemaps$timezone );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_googlemaps$timezone, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_googlemaps$timezone, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_googlemaps$timezone, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    struct Nuitka_FrameObject *frame_385f6da438aad67f5fc8e13727b58257;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_058d4d86bb4f217810f1d6e092b30f75;
    UPDATE_STRING_DICT0( moduledict_googlemaps$timezone, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_4d8bfda747a10a4dc03a4543cab9be3e;
    UPDATE_STRING_DICT0( moduledict_googlemaps$timezone, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_googlemaps$timezone, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_385f6da438aad67f5fc8e13727b58257 = MAKE_MODULE_FRAME( codeobj_385f6da438aad67f5fc8e13727b58257, module_googlemaps$timezone );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_385f6da438aad67f5fc8e13727b58257 );
    assert( Py_REFCNT( frame_385f6da438aad67f5fc8e13727b58257 ) == 2 );

    // Framed code:
    frame_385f6da438aad67f5fc8e13727b58257->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_7bd840164f57ebb25b44cd12bfdda4f4;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_385f6da438aad67f5fc8e13727b58257->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_googlemaps$timezone, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_googlemaps$timezone, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_googlemaps;
    UPDATE_STRING_DICT0( moduledict_googlemaps$timezone, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_plain_googlemaps;
    tmp_globals_name_1 = (PyObject *)moduledict_googlemaps$timezone;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_convert_tuple;
    tmp_level_name_1 = const_int_0;
    frame_385f6da438aad67f5fc8e13727b58257->m_frame.f_lineno = 20;
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
    UPDATE_STRING_DICT1( moduledict_googlemaps$timezone, (Nuitka_StringObject *)const_str_plain_convert, tmp_assign_source_7 );
    tmp_name_name_2 = const_str_plain_datetime;
    tmp_globals_name_2 = (PyObject *)moduledict_googlemaps$timezone;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_datetime_tuple;
    tmp_level_name_2 = const_int_0;
    frame_385f6da438aad67f5fc8e13727b58257->m_frame.f_lineno = 22;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_datetime );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_googlemaps$timezone, (Nuitka_StringObject *)const_str_plain_datetime, tmp_assign_source_8 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_385f6da438aad67f5fc8e13727b58257 );
#endif
    popFrameStack();

    assertFrameObject( frame_385f6da438aad67f5fc8e13727b58257 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_385f6da438aad67f5fc8e13727b58257 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_385f6da438aad67f5fc8e13727b58257, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_385f6da438aad67f5fc8e13727b58257->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_385f6da438aad67f5fc8e13727b58257, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_defaults_1 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_9 = MAKE_FUNCTION_googlemaps$timezone$$$function_1_timezone( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_googlemaps$timezone, (Nuitka_StringObject *)const_str_plain_timezone, tmp_assign_source_9 );

    return MOD_RETURN_VALUE( module_googlemaps$timezone );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
