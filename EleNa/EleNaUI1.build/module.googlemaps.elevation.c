/* Generated code for Python source for module 'googlemaps.elevation'
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

/* The _module_googlemaps$elevation is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_googlemaps$elevation;
PyDictObject *moduledict_googlemaps$elevation;

/* The module constants used, if any. */
static PyObject *const_str_digest_e7e1cf845e6eaa8bf2dc5b941ebe9b4e;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_str_plain_convert_tuple;
extern PyObject *const_str_plain_params;
static PyObject *const_str_digest_5698651a1f581747a5bb34e0f749bec5;
extern PyObject *const_str_plain_results;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_client_str_plain_locations_str_plain_params_tuple;
static PyObject *const_str_digest_f5f14a65ea337d737d9488e42d20266b;
extern PyObject *const_str_plain_googlemaps;
static PyObject *const_str_digest_b164c6514267bb83daf1e26e797f5328;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_digest_49293c213e5009ebebe0a0728ba99606;
extern PyObject *const_str_plain_elevation;
extern PyObject *const_str_plain_client;
extern PyObject *const_str_plain_locations;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_elevation_along_path;
static PyObject *const_str_plain_samples;
extern PyObject *const_str_digest_e057a4f20fd888d766c673007b8bd7cb;
extern PyObject *const_str_plain_convert;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_9bba181bbf9e1bc70e21037509c4aca8;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain__request;
extern PyObject *const_str_plain_shortest_path;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_b292269620bcac31f7721fa08e333b10;
static PyObject *const_tuple_e29ec4cf6c4689e3312a21d6b6ffadac_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_e7e1cf845e6eaa8bf2dc5b941ebe9b4e = UNSTREAM_STRING( &constant_bin[ 621240 ], 452, 0 );
    const_str_digest_5698651a1f581747a5bb34e0f749bec5 = UNSTREAM_STRING( &constant_bin[ 621692 ], 101, 0 );
    const_tuple_str_plain_client_str_plain_locations_str_plain_params_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_client_str_plain_locations_str_plain_params_tuple, 0, const_str_plain_client ); Py_INCREF( const_str_plain_client );
    PyTuple_SET_ITEM( const_tuple_str_plain_client_str_plain_locations_str_plain_params_tuple, 1, const_str_plain_locations ); Py_INCREF( const_str_plain_locations );
    PyTuple_SET_ITEM( const_tuple_str_plain_client_str_plain_locations_str_plain_params_tuple, 2, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    const_str_digest_f5f14a65ea337d737d9488e42d20266b = UNSTREAM_STRING( &constant_bin[ 621793 ], 445, 0 );
    const_str_digest_b164c6514267bb83daf1e26e797f5328 = UNSTREAM_STRING( &constant_bin[ 622238 ], 29, 0 );
    const_str_plain_samples = UNSTREAM_STRING( &constant_bin[ 622071 ], 7, 1 );
    const_str_digest_9bba181bbf9e1bc70e21037509c4aca8 = UNSTREAM_STRING( &constant_bin[ 622267 ], 24, 0 );
    const_str_digest_b292269620bcac31f7721fa08e333b10 = UNSTREAM_STRING( &constant_bin[ 622291 ], 51, 0 );
    const_tuple_e29ec4cf6c4689e3312a21d6b6ffadac_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_e29ec4cf6c4689e3312a21d6b6ffadac_tuple, 0, const_str_plain_client ); Py_INCREF( const_str_plain_client );
    PyTuple_SET_ITEM( const_tuple_e29ec4cf6c4689e3312a21d6b6ffadac_tuple, 1, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_e29ec4cf6c4689e3312a21d6b6ffadac_tuple, 2, const_str_plain_samples ); Py_INCREF( const_str_plain_samples );
    PyTuple_SET_ITEM( const_tuple_e29ec4cf6c4689e3312a21d6b6ffadac_tuple, 3, const_str_plain_params ); Py_INCREF( const_str_plain_params );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_googlemaps$elevation( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_bd23cbb050d3dce1d2c1b22f0fd905bc;
static PyCodeObject *codeobj_b88b29073a881e23f7278c4ffe1e9e79;
static PyCodeObject *codeobj_414d148d77d0471fcfd97b08bd1f256b;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_5698651a1f581747a5bb34e0f749bec5;
    codeobj_bd23cbb050d3dce1d2c1b22f0fd905bc = MAKE_CODEOBJ( module_filename_obj, const_str_digest_b164c6514267bb83daf1e26e797f5328, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_b88b29073a881e23f7278c4ffe1e9e79 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_elevation, 23, const_tuple_str_plain_client_str_plain_locations_str_plain_params_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_414d148d77d0471fcfd97b08bd1f256b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_elevation_along_path, 40, const_tuple_e29ec4cf6c4689e3312a21d6b6ffadac_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_googlemaps$elevation$$$function_1_elevation(  );


static PyObject *MAKE_FUNCTION_googlemaps$elevation$$$function_2_elevation_along_path(  );


// The module function definitions.
static PyObject *impl_googlemaps$elevation$$$function_1_elevation( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_client = python_pars[ 0 ];
    PyObject *par_locations = python_pars[ 1 ];
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_b88b29073a881e23f7278c4ffe1e9e79 = NULL;

    struct Nuitka_FrameObject *frame_b88b29073a881e23f7278c4ffe1e9e79;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b88b29073a881e23f7278c4ffe1e9e79, codeobj_b88b29073a881e23f7278c4ffe1e9e79, module_googlemaps$elevation, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b88b29073a881e23f7278c4ffe1e9e79 = cache_frame_b88b29073a881e23f7278c4ffe1e9e79;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b88b29073a881e23f7278c4ffe1e9e79 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b88b29073a881e23f7278c4ffe1e9e79 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assign_source_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_locations;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_googlemaps$elevation, (Nuitka_StringObject *)const_str_plain_convert );

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

        exception_lineno = 36;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shortest_path );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 36;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_locations;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "locations" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_b88b29073a881e23f7278c4ffe1e9e79->m_frame.f_lineno = 36;
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

        exception_lineno = 36;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    assert( var_params == NULL );
    var_params = tmp_assign_source_1;

    tmp_source_name_2 = par_client;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "client" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__request );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = const_str_digest_9bba181bbf9e1bc70e21037509c4aca8;
    tmp_args_element_name_3 = var_params;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_b88b29073a881e23f7278c4ffe1e9e79->m_frame.f_lineno = 37;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_str_plain_results;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b88b29073a881e23f7278c4ffe1e9e79 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b88b29073a881e23f7278c4ffe1e9e79 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b88b29073a881e23f7278c4ffe1e9e79 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b88b29073a881e23f7278c4ffe1e9e79, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b88b29073a881e23f7278c4ffe1e9e79->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b88b29073a881e23f7278c4ffe1e9e79, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b88b29073a881e23f7278c4ffe1e9e79,
        type_description_1,
        par_client,
        par_locations,
        var_params
    );


    // Release cached frame.
    if ( frame_b88b29073a881e23f7278c4ffe1e9e79 == cache_frame_b88b29073a881e23f7278c4ffe1e9e79 )
    {
        Py_DECREF( frame_b88b29073a881e23f7278c4ffe1e9e79 );
    }
    cache_frame_b88b29073a881e23f7278c4ffe1e9e79 = NULL;

    assertFrameObject( frame_b88b29073a881e23f7278c4ffe1e9e79 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( googlemaps$elevation$$$function_1_elevation );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_client );
    par_client = NULL;

    Py_XDECREF( par_locations );
    par_locations = NULL;

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

    Py_XDECREF( par_locations );
    par_locations = NULL;

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
    NUITKA_CANNOT_GET_HERE( googlemaps$elevation$$$function_1_elevation );
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


static PyObject *impl_googlemaps$elevation$$$function_2_elevation_along_path( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_client = python_pars[ 0 ];
    PyObject *par_path = python_pars[ 1 ];
    PyObject *par_samples = python_pars[ 2 ];
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    bool tmp_is_1;
    PyObject *tmp_left_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_414d148d77d0471fcfd97b08bd1f256b = NULL;

    struct Nuitka_FrameObject *frame_414d148d77d0471fcfd97b08bd1f256b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_414d148d77d0471fcfd97b08bd1f256b, codeobj_414d148d77d0471fcfd97b08bd1f256b, module_googlemaps$elevation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_414d148d77d0471fcfd97b08bd1f256b = cache_frame_414d148d77d0471fcfd97b08bd1f256b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_414d148d77d0471fcfd97b08bd1f256b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_414d148d77d0471fcfd97b08bd1f256b ) == 2 ); // Frame stack

    // Framed code:
    tmp_type_arg_1 = par_path;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_compare_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_compare_left_1 != NULL );
    tmp_compare_right_1 = (PyObject *)&PyUnicode_Type;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_left_name_1 = const_str_digest_49293c213e5009ebebe0a0728ba99606;
    tmp_right_name_1 = par_path;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_path;
        par_path = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_googlemaps$elevation, (Nuitka_StringObject *)const_str_plain_convert );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_convert );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "convert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shortest_path );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_path;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_414d148d77d0471fcfd97b08bd1f256b->m_frame.f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_path;
        par_path = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    branch_end_1:;
    tmp_assign_source_3 = _PyDict_NewPresized( 2 );
    tmp_dict_key_1 = const_str_plain_path;
    tmp_dict_value_1 = par_path;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_res = PyDict_SetItem( tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_samples;
    tmp_dict_value_2 = par_samples;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "samples" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_3, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    assert( var_params == NULL );
    var_params = tmp_assign_source_3;

    tmp_source_name_2 = par_client;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "client" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__request );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = const_str_digest_9bba181bbf9e1bc70e21037509c4aca8;
    tmp_args_element_name_3 = var_params;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_414d148d77d0471fcfd97b08bd1f256b->m_frame.f_lineno = 65;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_str_plain_results;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_414d148d77d0471fcfd97b08bd1f256b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_414d148d77d0471fcfd97b08bd1f256b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_414d148d77d0471fcfd97b08bd1f256b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_414d148d77d0471fcfd97b08bd1f256b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_414d148d77d0471fcfd97b08bd1f256b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_414d148d77d0471fcfd97b08bd1f256b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_414d148d77d0471fcfd97b08bd1f256b,
        type_description_1,
        par_client,
        par_path,
        par_samples,
        var_params
    );


    // Release cached frame.
    if ( frame_414d148d77d0471fcfd97b08bd1f256b == cache_frame_414d148d77d0471fcfd97b08bd1f256b )
    {
        Py_DECREF( frame_414d148d77d0471fcfd97b08bd1f256b );
    }
    cache_frame_414d148d77d0471fcfd97b08bd1f256b = NULL;

    assertFrameObject( frame_414d148d77d0471fcfd97b08bd1f256b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( googlemaps$elevation$$$function_2_elevation_along_path );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_client );
    par_client = NULL;

    Py_XDECREF( par_path );
    par_path = NULL;

    Py_XDECREF( par_samples );
    par_samples = NULL;

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

    Py_XDECREF( par_path );
    par_path = NULL;

    Py_XDECREF( par_samples );
    par_samples = NULL;

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
    NUITKA_CANNOT_GET_HERE( googlemaps$elevation$$$function_2_elevation_along_path );
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



static PyObject *MAKE_FUNCTION_googlemaps$elevation$$$function_1_elevation(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_googlemaps$elevation$$$function_1_elevation,
        const_str_plain_elevation,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b88b29073a881e23f7278c4ffe1e9e79,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_googlemaps$elevation,
        const_str_digest_e7e1cf845e6eaa8bf2dc5b941ebe9b4e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_googlemaps$elevation$$$function_2_elevation_along_path(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_googlemaps$elevation$$$function_2_elevation_along_path,
        const_str_plain_elevation_along_path,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_414d148d77d0471fcfd97b08bd1f256b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_googlemaps$elevation,
        const_str_digest_f5f14a65ea337d737d9488e42d20266b,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_googlemaps$elevation =
{
    PyModuleDef_HEAD_INIT,
    "googlemaps.elevation",   /* m_name */
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

MOD_INIT_DECL( googlemaps$elevation )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_googlemaps$elevation );
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
    puts("googlemaps.elevation: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("googlemaps.elevation: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initgooglemaps$elevation" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_googlemaps$elevation = Py_InitModule4(
        "googlemaps.elevation",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_googlemaps$elevation = PyModule_Create( &mdef_googlemaps$elevation );
#endif

    moduledict_googlemaps$elevation = MODULE_DICT( module_googlemaps$elevation );

    CHECK_OBJECT( module_googlemaps$elevation );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_e057a4f20fd888d766c673007b8bd7cb, module_googlemaps$elevation );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_googlemaps$elevation, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_googlemaps$elevation, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_googlemaps$elevation, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    struct Nuitka_FrameObject *frame_bd23cbb050d3dce1d2c1b22f0fd905bc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_b292269620bcac31f7721fa08e333b10;
    UPDATE_STRING_DICT0( moduledict_googlemaps$elevation, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_5698651a1f581747a5bb34e0f749bec5;
    UPDATE_STRING_DICT0( moduledict_googlemaps$elevation, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_googlemaps$elevation, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_bd23cbb050d3dce1d2c1b22f0fd905bc = MAKE_MODULE_FRAME( codeobj_bd23cbb050d3dce1d2c1b22f0fd905bc, module_googlemaps$elevation );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_bd23cbb050d3dce1d2c1b22f0fd905bc );
    assert( Py_REFCNT( frame_bd23cbb050d3dce1d2c1b22f0fd905bc ) == 2 );

    // Framed code:
    frame_bd23cbb050d3dce1d2c1b22f0fd905bc->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_e057a4f20fd888d766c673007b8bd7cb;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_bd23cbb050d3dce1d2c1b22f0fd905bc->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_googlemaps$elevation, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_googlemaps$elevation, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_googlemaps;
    UPDATE_STRING_DICT0( moduledict_googlemaps$elevation, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_plain_googlemaps;
    tmp_globals_name_1 = (PyObject *)moduledict_googlemaps$elevation;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_convert_tuple;
    tmp_level_name_1 = const_int_0;
    frame_bd23cbb050d3dce1d2c1b22f0fd905bc->m_frame.f_lineno = 20;
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
    UPDATE_STRING_DICT1( moduledict_googlemaps$elevation, (Nuitka_StringObject *)const_str_plain_convert, tmp_assign_source_7 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd23cbb050d3dce1d2c1b22f0fd905bc );
#endif
    popFrameStack();

    assertFrameObject( frame_bd23cbb050d3dce1d2c1b22f0fd905bc );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd23cbb050d3dce1d2c1b22f0fd905bc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bd23cbb050d3dce1d2c1b22f0fd905bc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bd23cbb050d3dce1d2c1b22f0fd905bc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bd23cbb050d3dce1d2c1b22f0fd905bc, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_8 = MAKE_FUNCTION_googlemaps$elevation$$$function_1_elevation(  );
    UPDATE_STRING_DICT1( moduledict_googlemaps$elevation, (Nuitka_StringObject *)const_str_plain_elevation, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_googlemaps$elevation$$$function_2_elevation_along_path(  );
    UPDATE_STRING_DICT1( moduledict_googlemaps$elevation, (Nuitka_StringObject *)const_str_plain_elevation_along_path, tmp_assign_source_9 );

    return MOD_RETURN_VALUE( module_googlemaps$elevation );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
