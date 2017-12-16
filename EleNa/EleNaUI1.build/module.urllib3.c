/* Generated code for Python source for module 'urllib3'
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

/* The _module_urllib3 is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3;
PyDictObject *moduledict_urllib3;

/* The module constants used, if any. */
static PyObject *const_str_plain_setLevel;
extern PyObject *const_str_plain_SubjectAltNameWarning;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain_proxy_from_url;
static PyObject *const_tuple_8867a986f001c831bce500d134c983ea_tuple;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple;
extern PyObject *const_dict_9d1be102e274ebd5d21e13e40f132db0;
static PyObject *const_tuple_str_plain_get_host_tuple;
static PyObject *const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple;
static PyObject *const_str_plain_Formatter;
extern PyObject *const_str_plain_default;
static PyObject *const_str_plain_MIT;
extern PyObject *const_str_plain_filepost;
extern PyObject *const_str_plain_NullHandler;
static PyObject *const_str_plain_add_stderr_logger;
extern PyObject *const_str_plain_ignore;
extern PyObject *const_str_plain___license__;
extern PyObject *const_str_plain_category;
static PyObject *const_str_digest_b0632bca22c128e5156e5d8ae22de6c6;
extern PyObject *const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d;
extern PyObject *const_str_digest_eec49d283d20cbc4ed650539d1524272;
extern PyObject *const_str_digest_522bfd5e75e11cb6ec433673b0570303;
extern PyObject *const_str_plain_SecurityWarning;
extern PyObject *const_str_plain_get_host;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_tuple_str_plain_exceptions_tuple;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_tuple_str_plain_Retry_tuple;
extern PyObject *const_str_plain_addHandler;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_Handler;
extern PyObject *const_str_plain_SNIMissingWarning;
extern PyObject *const_str_digest_e68800bfc0da117494aca4ca9d48e152;
extern PyObject *const_str_plain_simplefilter;
extern PyObject *const_str_plain_connection_from_url;
static PyObject *const_str_plain_StreamHandler;
extern PyObject *const_str_plain_poolmanager;
extern PyObject *const_str_plain_ProxyManager;
static PyObject *const_str_digest_23f90efde940ba2256d04ce7ac5cea70;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_81b98f1a8ecf97715642eb1142269402;
static PyObject *const_str_plain_setFormatter;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_HTTPWarning;
extern PyObject *const_str_plain___loader__;
static PyObject *const_str_digest_9488daec0a222fa96a0806e8bb41d02a;
extern PyObject *const_tuple_str_plain_encode_multipart_formdata_tuple;
static PyObject *const_str_plain_disable_warnings;
extern PyObject *const_str_plain_exceptions;
static PyObject *const_str_plain_always;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_urllib3;
extern PyObject *const_str_plain_HTTPSConnectionPool;
extern PyObject *const_str_plain___version__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_HTTPResponse;
extern PyObject *const_str_plain_record;
extern PyObject *const_str_plain_response;
static PyObject *const_list_str_digest_c4a8890a30b61115721e25b60664af80_list;
extern PyObject *const_str_digest_895053584462000f806d2a64eaddf388;
extern PyObject *const_str_plain_connectionpool;
extern PyObject *const_str_plain_PoolManager;
extern PyObject *const_str_plain___author__;
extern PyObject *const_str_plain_Timeout;
extern PyObject *const_tuple_str_plain_make_headers_tuple;
static PyObject *const_tuple_a8b5457a455379132108111c71bf3ec5_tuple;
static PyObject *const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple;
static PyObject *const_str_digest_c8c857b5729e0b378286ccbd91c95cae;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_tuple_str_plain_NullHandler_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_tuple_str_plain_urllib3_tuple;
static PyObject *const_tuple_str_plain_category_tuple;
extern PyObject *const_str_plain_debug;
static PyObject *const_str_digest_6d27c09f2576ba9e7aaeed9738d5cae8;
extern PyObject *const_str_plain_emit;
static PyObject *const_str_digest_c4a8890a30b61115721e25b60664af80;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_logger;
static PyObject *const_str_digest_92e39fed54db8116b47303b7b66c9c05;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_tuple_str_digest_9488daec0a222fa96a0806e8bb41d02a_tuple;
extern PyObject *const_tuple_str_plain_HTTPResponse_tuple;
extern PyObject *const_str_plain_level;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_c2a5aae7bb235405ed8e87579bccaea2;
extern PyObject *const_tuple_str_plain_Timeout_tuple;
extern PyObject *const_str_plain_HTTPConnectionPool;
extern PyObject *const_str_plain_encode_multipart_formdata;
static PyObject *const_str_digest_a35c14c4dcaa2c1683e3c8d515d837da;
extern PyObject *const_str_plain_DEBUG;
extern PyObject *const_str_plain_make_headers;
extern PyObject *const_str_plain_Retry;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_InsecurePlatformWarning;
static PyObject *const_str_plain_handler;
extern PyObject *const_tuple_str_plain_self_str_plain_record_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_setLevel = UNSTREAM_STRING( &constant_bin[ 846995 ], 8, 1 );
    const_tuple_8867a986f001c831bce500d134c983ea_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_8867a986f001c831bce500d134c983ea_tuple, 0, const_str_plain_PoolManager ); Py_INCREF( const_str_plain_PoolManager );
    PyTuple_SET_ITEM( const_tuple_8867a986f001c831bce500d134c983ea_tuple, 1, const_str_plain_ProxyManager ); Py_INCREF( const_str_plain_ProxyManager );
    PyTuple_SET_ITEM( const_tuple_8867a986f001c831bce500d134c983ea_tuple, 2, const_str_plain_proxy_from_url ); Py_INCREF( const_str_plain_proxy_from_url );
    const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple, 0, const_str_plain_HTTPConnectionPool ); Py_INCREF( const_str_plain_HTTPConnectionPool );
    PyTuple_SET_ITEM( const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple, 1, const_str_plain_HTTPSConnectionPool ); Py_INCREF( const_str_plain_HTTPSConnectionPool );
    PyTuple_SET_ITEM( const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple, 2, const_str_plain_connection_from_url ); Py_INCREF( const_str_plain_connection_from_url );
    const_tuple_str_plain_get_host_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_get_host_tuple, 0, const_str_plain_get_host ); Py_INCREF( const_str_plain_get_host );
    const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 0, const_str_plain_HTTPConnectionPool ); Py_INCREF( const_str_plain_HTTPConnectionPool );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 1, const_str_plain_HTTPSConnectionPool ); Py_INCREF( const_str_plain_HTTPSConnectionPool );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 2, const_str_plain_PoolManager ); Py_INCREF( const_str_plain_PoolManager );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 3, const_str_plain_ProxyManager ); Py_INCREF( const_str_plain_ProxyManager );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 4, const_str_plain_HTTPResponse ); Py_INCREF( const_str_plain_HTTPResponse );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 5, const_str_plain_Retry ); Py_INCREF( const_str_plain_Retry );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 6, const_str_plain_Timeout ); Py_INCREF( const_str_plain_Timeout );
    const_str_plain_add_stderr_logger = UNSTREAM_STRING( &constant_bin[ 847003 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 7, const_str_plain_add_stderr_logger ); Py_INCREF( const_str_plain_add_stderr_logger );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 8, const_str_plain_connection_from_url ); Py_INCREF( const_str_plain_connection_from_url );
    const_str_plain_disable_warnings = UNSTREAM_STRING( &constant_bin[ 847020 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 9, const_str_plain_disable_warnings ); Py_INCREF( const_str_plain_disable_warnings );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 10, const_str_plain_encode_multipart_formdata ); Py_INCREF( const_str_plain_encode_multipart_formdata );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 11, const_str_plain_get_host ); Py_INCREF( const_str_plain_get_host );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 12, const_str_plain_make_headers ); Py_INCREF( const_str_plain_make_headers );
    PyTuple_SET_ITEM( const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple, 13, const_str_plain_proxy_from_url ); Py_INCREF( const_str_plain_proxy_from_url );
    const_str_plain_Formatter = UNSTREAM_STRING( &constant_bin[ 847036 ], 9, 1 );
    const_str_plain_MIT = UNSTREAM_STRING( &constant_bin[ 604411 ], 3, 1 );
    const_str_digest_b0632bca22c128e5156e5d8ae22de6c6 = UNSTREAM_STRING( &constant_bin[ 847045 ], 134, 0 );
    const_str_plain_StreamHandler = UNSTREAM_STRING( &constant_bin[ 847078 ], 13, 1 );
    const_str_digest_23f90efde940ba2256d04ce7ac5cea70 = UNSTREAM_STRING( &constant_bin[ 847179 ], 44, 0 );
    const_str_digest_81b98f1a8ecf97715642eb1142269402 = UNSTREAM_STRING( &constant_bin[ 847223 ], 40, 0 );
    const_str_plain_setFormatter = UNSTREAM_STRING( &constant_bin[ 847263 ], 12, 1 );
    const_str_digest_9488daec0a222fa96a0806e8bb41d02a = UNSTREAM_STRING( &constant_bin[ 847275 ], 37, 0 );
    const_str_plain_always = UNSTREAM_STRING( &constant_bin[ 599429 ], 6, 1 );
    const_list_str_digest_c4a8890a30b61115721e25b60664af80_list = PyList_New( 1 );
    const_str_digest_c4a8890a30b61115721e25b60664af80 = UNSTREAM_STRING( &constant_bin[ 847312 ], 85, 0 );
    PyList_SET_ITEM( const_list_str_digest_c4a8890a30b61115721e25b60664af80_list, 0, const_str_digest_c4a8890a30b61115721e25b60664af80 ); Py_INCREF( const_str_digest_c4a8890a30b61115721e25b60664af80 );
    const_tuple_a8b5457a455379132108111c71bf3ec5_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_a8b5457a455379132108111c71bf3ec5_tuple, 0, const_str_digest_23f90efde940ba2256d04ce7ac5cea70 ); Py_INCREF( const_str_digest_23f90efde940ba2256d04ce7ac5cea70 );
    PyTuple_SET_ITEM( const_tuple_a8b5457a455379132108111c71bf3ec5_tuple, 1, const_str_plain_urllib3 ); Py_INCREF( const_str_plain_urllib3 );
    const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple, 0, const_str_plain_level ); Py_INCREF( const_str_plain_level );
    PyTuple_SET_ITEM( const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple, 1, const_str_plain_logger ); Py_INCREF( const_str_plain_logger );
    const_str_plain_handler = UNSTREAM_STRING( &constant_bin[ 633301 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple, 2, const_str_plain_handler ); Py_INCREF( const_str_plain_handler );
    const_str_digest_c8c857b5729e0b378286ccbd91c95cae = UNSTREAM_STRING( &constant_bin[ 847397 ], 56, 0 );
    const_tuple_str_plain_urllib3_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_urllib3_tuple, 0, const_str_plain_urllib3 ); Py_INCREF( const_str_plain_urllib3 );
    const_tuple_str_plain_category_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_category_tuple, 0, const_str_plain_category ); Py_INCREF( const_str_plain_category );
    const_str_digest_6d27c09f2576ba9e7aaeed9738d5cae8 = UNSTREAM_STRING( &constant_bin[ 847453 ], 60, 0 );
    const_str_digest_92e39fed54db8116b47303b7b66c9c05 = UNSTREAM_STRING( &constant_bin[ 847513 ], 97, 0 );
    const_tuple_str_digest_9488daec0a222fa96a0806e8bb41d02a_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_9488daec0a222fa96a0806e8bb41d02a_tuple, 0, const_str_digest_9488daec0a222fa96a0806e8bb41d02a ); Py_INCREF( const_str_digest_9488daec0a222fa96a0806e8bb41d02a );
    const_str_digest_c2a5aae7bb235405ed8e87579bccaea2 = UNSTREAM_STRING( &constant_bin[ 847610 ], 16, 0 );
    const_str_digest_a35c14c4dcaa2c1683e3c8d515d837da = UNSTREAM_STRING( &constant_bin[ 847626 ], 4, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_01dba6b52774489b2c4248ebd5cef6c3;
static PyCodeObject *codeobj_3ac9fbe74a1b15295976d11e9dd44e75;
static PyCodeObject *codeobj_574cd5bea662df219665341025fa2d82;
static PyCodeObject *codeobj_a913338f29a90ae944dd6c81949556ac;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_92e39fed54db8116b47303b7b66c9c05;
    codeobj_01dba6b52774489b2c4248ebd5cef6c3 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_c2a5aae7bb235405ed8e87579bccaea2, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_3ac9fbe74a1b15295976d11e9dd44e75 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_stderr_logger, 57, const_tuple_str_plain_level_str_plain_logger_str_plain_handler_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_574cd5bea662df219665341025fa2d82 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_disable_warnings, 93, const_tuple_str_plain_category_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a913338f29a90ae944dd6c81949556ac = MAKE_CODEOBJ( module_filename_obj, const_str_plain_emit, 30, const_tuple_str_plain_self_str_plain_record_tuple, 2, 0, CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_urllib3$$$function_1_emit(  );


static PyObject *MAKE_FUNCTION_urllib3$$$function_2_add_stderr_logger( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$$$function_3_disable_warnings( PyObject *defaults );


// The module function definitions.
static PyObject *impl_urllib3$$$function_1_emit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_record = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$$$function_1_emit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_record );
    par_record = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_record );
    par_record = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$$$function_1_emit );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_urllib3$$$function_2_add_stderr_logger( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_level = python_pars[ 0 ];
    PyObject *var_logger = NULL;
    PyObject *var_handler = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3ac9fbe74a1b15295976d11e9dd44e75 = NULL;

    struct Nuitka_FrameObject *frame_3ac9fbe74a1b15295976d11e9dd44e75;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3ac9fbe74a1b15295976d11e9dd44e75, codeobj_3ac9fbe74a1b15295976d11e9dd44e75, module_urllib3, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3ac9fbe74a1b15295976d11e9dd44e75 = cache_frame_3ac9fbe74a1b15295976d11e9dd44e75;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3ac9fbe74a1b15295976d11e9dd44e75 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3ac9fbe74a1b15295976d11e9dd44e75 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_3ac9fbe74a1b15295976d11e9dd44e75->m_frame.f_lineno = 66;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_plain_urllib3_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_logger == NULL );
    var_logger = tmp_assign_source_1;

    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_3ac9fbe74a1b15295976d11e9dd44e75->m_frame.f_lineno = 67;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_StreamHandler );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_handler == NULL );
    var_handler = tmp_assign_source_2;

    tmp_source_name_1 = var_handler;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_setFormatter );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_called_instance_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_3ac9fbe74a1b15295976d11e9dd44e75->m_frame.f_lineno = 68;
    tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_Formatter, &PyTuple_GET_ITEM( const_tuple_str_digest_9488daec0a222fa96a0806e8bb41d02a_tuple, 0 ) );

    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 68;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_3ac9fbe74a1b15295976d11e9dd44e75->m_frame.f_lineno = 68;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = var_logger;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "logger" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_addHandler );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_handler;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "handler" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_3ac9fbe74a1b15295976d11e9dd44e75->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = var_logger;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "logger" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_setLevel );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_level;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "level" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_3ac9fbe74a1b15295976d11e9dd44e75->m_frame.f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_4 = var_logger;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "logger" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_3ac9fbe74a1b15295976d11e9dd44e75->m_frame.f_lineno = 71;
    tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_debug, &PyTuple_GET_ITEM( const_tuple_a8b5457a455379132108111c71bf3ec5_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = var_handler;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "handler" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3ac9fbe74a1b15295976d11e9dd44e75 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3ac9fbe74a1b15295976d11e9dd44e75 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3ac9fbe74a1b15295976d11e9dd44e75 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3ac9fbe74a1b15295976d11e9dd44e75, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3ac9fbe74a1b15295976d11e9dd44e75->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3ac9fbe74a1b15295976d11e9dd44e75, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3ac9fbe74a1b15295976d11e9dd44e75,
        type_description_1,
        par_level,
        var_logger,
        var_handler
    );


    // Release cached frame.
    if ( frame_3ac9fbe74a1b15295976d11e9dd44e75 == cache_frame_3ac9fbe74a1b15295976d11e9dd44e75 )
    {
        Py_DECREF( frame_3ac9fbe74a1b15295976d11e9dd44e75 );
    }
    cache_frame_3ac9fbe74a1b15295976d11e9dd44e75 = NULL;

    assertFrameObject( frame_3ac9fbe74a1b15295976d11e9dd44e75 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$$$function_2_add_stderr_logger );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_level );
    par_level = NULL;

    Py_XDECREF( var_logger );
    var_logger = NULL;

    Py_XDECREF( var_handler );
    var_handler = NULL;

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

    Py_XDECREF( par_level );
    par_level = NULL;

    Py_XDECREF( var_logger );
    var_logger = NULL;

    Py_XDECREF( var_handler );
    var_handler = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$$$function_2_add_stderr_logger );
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


static PyObject *impl_urllib3$$$function_3_disable_warnings( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_category = python_pars[ 0 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_574cd5bea662df219665341025fa2d82 = NULL;

    struct Nuitka_FrameObject *frame_574cd5bea662df219665341025fa2d82;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_574cd5bea662df219665341025fa2d82, codeobj_574cd5bea662df219665341025fa2d82, module_urllib3, sizeof(void *) );
    frame_574cd5bea662df219665341025fa2d82 = cache_frame_574cd5bea662df219665341025fa2d82;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_574cd5bea662df219665341025fa2d82 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_574cd5bea662df219665341025fa2d82 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_simplefilter );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_plain_ignore;
    tmp_args_element_name_2 = par_category;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "category" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_574cd5bea662df219665341025fa2d82->m_frame.f_lineno = 97;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_574cd5bea662df219665341025fa2d82 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_574cd5bea662df219665341025fa2d82 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_574cd5bea662df219665341025fa2d82, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_574cd5bea662df219665341025fa2d82->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_574cd5bea662df219665341025fa2d82, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_574cd5bea662df219665341025fa2d82,
        type_description_1,
        par_category
    );


    // Release cached frame.
    if ( frame_574cd5bea662df219665341025fa2d82 == cache_frame_574cd5bea662df219665341025fa2d82 )
    {
        Py_DECREF( frame_574cd5bea662df219665341025fa2d82 );
    }
    cache_frame_574cd5bea662df219665341025fa2d82 = NULL;

    assertFrameObject( frame_574cd5bea662df219665341025fa2d82 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$$$function_3_disable_warnings );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_category );
    par_category = NULL;

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

    Py_XDECREF( par_category );
    par_category = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$$$function_3_disable_warnings );
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



static PyObject *MAKE_FUNCTION_urllib3$$$function_1_emit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$$$function_1_emit,
        const_str_plain_emit,
#if PYTHON_VERSION >= 330
        const_str_digest_895053584462000f806d2a64eaddf388,
#endif
        codeobj_a913338f29a90ae944dd6c81949556ac,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$$$function_2_add_stderr_logger( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$$$function_2_add_stderr_logger,
        const_str_plain_add_stderr_logger,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3ac9fbe74a1b15295976d11e9dd44e75,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3,
        const_str_digest_b0632bca22c128e5156e5d8ae22de6c6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$$$function_3_disable_warnings( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$$$function_3_disable_warnings,
        const_str_plain_disable_warnings,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_574cd5bea662df219665341025fa2d82,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3,
        const_str_digest_6d27c09f2576ba9e7aaeed9738d5cae8,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3 =
{
    PyModuleDef_HEAD_INIT,
    "urllib3",   /* m_name */
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

MOD_INIT_DECL( urllib3 )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3 );
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
    puts("urllib3: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3 = Py_InitModule4(
        "urllib3",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_urllib3 = PyModule_Create( &mdef_urllib3 );
#endif

    moduledict_urllib3 = MODULE_DICT( module_urllib3 );

    CHECK_OBJECT( module_urllib3 );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_urllib3, module_urllib3 );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var_emit = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
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
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_fromlist_name_8;
    PyObject *tmp_fromlist_name_9;
    PyObject *tmp_fromlist_name_10;
    PyObject *tmp_fromlist_name_11;
    PyObject *tmp_fromlist_name_12;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_globals_name_9;
    PyObject *tmp_globals_name_10;
    PyObject *tmp_globals_name_11;
    PyObject *tmp_globals_name_12;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_import_name_from_10;
    PyObject *tmp_import_name_from_11;
    PyObject *tmp_import_name_from_12;
    PyObject *tmp_import_name_from_13;
    PyObject *tmp_import_name_from_14;
    PyObject *tmp_import_name_from_15;
    PyObject *tmp_key_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_level_name_8;
    PyObject *tmp_level_name_9;
    PyObject *tmp_level_name_10;
    PyObject *tmp_level_name_11;
    PyObject *tmp_level_name_12;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_locals_name_9;
    PyObject *tmp_locals_name_10;
    PyObject *tmp_locals_name_11;
    PyObject *tmp_locals_name_12;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_name_name_8;
    PyObject *tmp_name_name_9;
    PyObject *tmp_name_name_10;
    PyObject *tmp_name_name_11;
    PyObject *tmp_name_name_12;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    struct Nuitka_FrameObject *frame_01dba6b52774489b2c4248ebd5cef6c3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    // Locals dictionary setup.
PyObject *locals_dict_1 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = const_str_digest_c8c857b5729e0b378286ccbd91c95cae;
    UPDATE_STRING_DICT0( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_92e39fed54db8116b47303b7b66c9c05;
    UPDATE_STRING_DICT0( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_c4a8890a30b61115721e25b60664af80_list );
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_01dba6b52774489b2c4248ebd5cef6c3 = MAKE_MODULE_FRAME( codeobj_01dba6b52774489b2c4248ebd5cef6c3, module_urllib3 );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_01dba6b52774489b2c4248ebd5cef6c3 );
    assert( Py_REFCNT( frame_01dba6b52774489b2c4248ebd5cef6c3 ) == 2 );

    // Framed code:
    frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_plain_urllib3;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_5 );
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_plain_urllib3;
    UPDATE_STRING_DICT0( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_7 );
    frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = 5;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( tmp_import_name_from_1 != NULL );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_8 );
    tmp_name_name_1 = const_str_plain_warnings;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = 6;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_9 );
    tmp_name_name_2 = const_str_plain_connectionpool;
    tmp_globals_name_2 = (PyObject *)moduledict_urllib3;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_18cfb5b7d6d807b6ee847ca4f1977ffc_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = 8;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_10;

    // Tried code:
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_HTTPConnectionPool );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool, tmp_assign_source_11 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_HTTPSConnectionPool );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_HTTPSConnectionPool, tmp_assign_source_12 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_connection_from_url );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_connection_from_url, tmp_assign_source_13 );
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

    tmp_name_name_3 = const_str_empty;
    tmp_globals_name_3 = (PyObject *)moduledict_urllib3;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_exceptions_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = 14;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_exceptions );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_exceptions, tmp_assign_source_14 );
    tmp_name_name_4 = const_str_plain_filepost;
    tmp_globals_name_4 = (PyObject *)moduledict_urllib3;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_encode_multipart_formdata_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = 15;
    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_encode_multipart_formdata );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_encode_multipart_formdata, tmp_assign_source_15 );
    tmp_name_name_5 = const_str_plain_poolmanager;
    tmp_globals_name_5 = (PyObject *)moduledict_urllib3;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_8867a986f001c831bce500d134c983ea_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = 16;
    tmp_assign_source_16 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_16;

    // Tried code:
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_PoolManager );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_PoolManager, tmp_assign_source_17 );
    tmp_import_name_from_8 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_ProxyManager );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_ProxyManager, tmp_assign_source_18 );
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_proxy_from_url );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_proxy_from_url, tmp_assign_source_19 );
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

    tmp_name_name_6 = const_str_plain_response;
    tmp_globals_name_6 = (PyObject *)moduledict_urllib3;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_HTTPResponse_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = 17;
    tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_HTTPResponse );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_HTTPResponse, tmp_assign_source_20 );
    tmp_name_name_7 = const_str_digest_eec49d283d20cbc4ed650539d1524272;
    tmp_globals_name_7 = (PyObject *)moduledict_urllib3;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_make_headers_tuple;
    tmp_level_name_7 = const_int_pos_1;
    frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = 18;
    tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_make_headers );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_make_headers, tmp_assign_source_21 );
    tmp_name_name_8 = const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d;
    tmp_globals_name_8 = (PyObject *)moduledict_urllib3;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_get_host_tuple;
    tmp_level_name_8 = const_int_pos_1;
    frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = 19;
    tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_get_host );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_get_host, tmp_assign_source_22 );
    tmp_name_name_9 = const_str_digest_522bfd5e75e11cb6ec433673b0570303;
    tmp_globals_name_9 = (PyObject *)moduledict_urllib3;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_Timeout_tuple;
    tmp_level_name_9 = const_int_pos_1;
    frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = 20;
    tmp_import_name_from_13 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_Timeout );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_Timeout, tmp_assign_source_23 );
    tmp_name_name_10 = const_str_digest_e68800bfc0da117494aca4ca9d48e152;
    tmp_globals_name_10 = (PyObject *)moduledict_urllib3;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = const_tuple_str_plain_Retry_tuple;
    tmp_level_name_10 = const_int_pos_1;
    frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = 21;
    tmp_import_name_from_14 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_Retry );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_Retry, tmp_assign_source_24 );
    tmp_name_name_11 = const_str_plain_logging;
    tmp_globals_name_11 = (PyObject *)moduledict_urllib3;
    tmp_locals_name_11 = Py_None;
    tmp_fromlist_name_11 = Py_None;
    tmp_level_name_11 = const_int_0;
    frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = 25;
    tmp_assign_source_25 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_25 );
    // Tried code:
    tmp_name_name_12 = const_str_plain_logging;
    tmp_globals_name_12 = (PyObject *)moduledict_urllib3;
    tmp_locals_name_12 = Py_None;
    tmp_fromlist_name_12 = const_tuple_str_plain_NullHandler_tuple;
    tmp_level_name_12 = const_int_0;
    frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = 27;
    tmp_import_name_from_15 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto try_except_handler_3;
    }
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_NullHandler );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_NullHandler, tmp_assign_source_26 );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_01dba6b52774489b2c4248ebd5cef6c3, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_01dba6b52774489b2c4248ebd5cef6c3, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_4;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    // Tried code:
    tmp_assign_source_27 = PyTuple_New( 1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_27 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;

        goto try_except_handler_5;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Handler );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_27 );

        exception_lineno = 29;

        goto try_except_handler_5;
    }
    PyTuple_SET_ITEM( tmp_assign_source_27, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_27;

    tmp_assign_source_28 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_28;

    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_5;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_5;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_5;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_5;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_29 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 29;

        goto try_except_handler_5;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_29;

    tmp_compare_left_3 = const_str_plain_metaclass;
    tmp_compare_right_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_5;
    }
    branch_no_2:;
    tmp_hasattr_source_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_5;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_source_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_5;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_NullHandler;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = 29;
    tmp_assign_source_30 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_5;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_30 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_30;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_1);
    locals_dict_1 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_32 = const_str_plain_urllib3;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_32 );
    outline_0_var___module__ = tmp_assign_source_32;

    tmp_assign_source_33 = const_str_plain_NullHandler;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_33 );
    outline_0_var___qualname__ = tmp_assign_source_33;

    tmp_assign_source_34 = MAKE_FUNCTION_urllib3$$$function_1_emit(  );
    assert( outline_0_var_emit == NULL );
    outline_0_var_emit = tmp_assign_source_34;

    // Tried code:
    tmp_called_name_3 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_3 = const_str_plain_NullHandler;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = locals_dict_1;
    Py_INCREF( tmp_tuple_element_3 );
    if ( outline_0_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain___qualname__,
            outline_0_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain___qualname__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_3 );

        exception_lineno = 29;

        goto try_except_handler_6;
    }
    if ( outline_0_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain___module__,
            outline_0_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain___module__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_3 );

        exception_lineno = 29;

        goto try_except_handler_6;
    }
    if ( outline_0_var_emit != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_emit,
            outline_0_var_emit
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_emit
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_emit
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_3 );

        exception_lineno = 29;

        goto try_except_handler_6;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = 29;
    tmp_assign_source_35 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_6;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_35;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3 );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var_emit );
    outline_0_var_emit = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var_emit );
    outline_0_var_emit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3 );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 29;
    goto try_except_handler_5;
    outline_result_1:;
    tmp_assign_source_31 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_NullHandler, tmp_assign_source_31 );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 26;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame) frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_4;
    branch_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3 );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_3:;
    tmp_assign_source_36 = const_str_digest_81b98f1a8ecf97715642eb1142269402;
    UPDATE_STRING_DICT0( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_36 );
    tmp_assign_source_37 = const_str_plain_MIT;
    UPDATE_STRING_DICT0( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___license__, tmp_assign_source_37 );
    tmp_assign_source_38 = const_str_digest_a35c14c4dcaa2c1683e3c8d515d837da;
    UPDATE_STRING_DICT0( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_38 );
    tmp_assign_source_39 = const_tuple_6d8e3b2c23de3c48cb242c3b66f69265_tuple;
    UPDATE_STRING_DICT0( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_39 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;

        goto frame_exception_exit_1;
    }

    frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = 54;
    tmp_source_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_plain_urllib3_tuple, 0 ) );

    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_addHandler );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto frame_exception_exit_1;
    }
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_NullHandler );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NullHandler );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NullHandler" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;

        goto frame_exception_exit_1;
    }

    frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = 54;
    tmp_args_element_name_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 54;

        goto frame_exception_exit_1;
    }
    frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_defaults_1 = PyTuple_New( 1 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_DEBUG );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_1 );

        exception_lineno = 57;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_4 );
    tmp_assign_source_40 = MAKE_FUNCTION_urllib3$$$function_2_add_stderr_logger( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_add_stderr_logger, tmp_assign_source_40 );
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_urllib3, const_str_plain_NullHandler );
    if ( tmp_res == -1 ) CLEAR_ERROR_OCCURRED();

    if ( tmp_res == -1 )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NullHandler" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;

        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;

        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_simplefilter );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;

        goto frame_exception_exit_1;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_5 = const_str_plain_always;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_exceptions );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exceptions );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "exceptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_SecurityWarning );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_3 );

        exception_lineno = 83;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_5 );
    tmp_kw_name_3 = PyDict_Copy( const_dict_9d1be102e274ebd5d21e13e40f132db0 );
    frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = 83;
    tmp_unused = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;

        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_simplefilter );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto frame_exception_exit_1;
    }
    tmp_args_name_4 = PyTuple_New( 2 );
    tmp_tuple_element_6 = const_str_plain_default;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_exceptions );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exceptions );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "exceptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_SubjectAltNameWarning );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_name_4 );

        exception_lineno = 85;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_6 );
    tmp_kw_name_4 = PyDict_Copy( const_dict_9d1be102e274ebd5d21e13e40f132db0 );
    frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = 85;
    tmp_unused = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_4 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;

        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_simplefilter );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;

        goto frame_exception_exit_1;
    }
    tmp_args_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_7 = const_str_plain_default;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_7 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_exceptions );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exceptions );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "exceptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_InsecurePlatformWarning );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_name_5 );

        exception_lineno = 87;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_7 );
    tmp_kw_name_5 = PyDict_Copy( const_dict_9d1be102e274ebd5d21e13e40f132db0 );
    frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = 87;
    tmp_unused = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_name_5 );
    Py_DECREF( tmp_kw_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;

        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_simplefilter );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;

        goto frame_exception_exit_1;
    }
    tmp_args_name_6 = PyTuple_New( 2 );
    tmp_tuple_element_8 = const_str_plain_default;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_8 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_exceptions );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exceptions );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "exceptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_SNIMissingWarning );
    if ( tmp_tuple_element_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_name_6 );

        exception_lineno = 90;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_8 );
    tmp_kw_name_6 = PyDict_Copy( const_dict_9d1be102e274ebd5d21e13e40f132db0 );
    frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame.f_lineno = 90;
    tmp_unused = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_name_6 );
    Py_DECREF( tmp_kw_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_defaults_2 = PyTuple_New( 1 );
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_exceptions );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exceptions );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_defaults_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "exceptions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_HTTPWarning );
    if ( tmp_tuple_element_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_2 );

        exception_lineno = 93;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_9 );
    tmp_assign_source_41 = MAKE_FUNCTION_urllib3$$$function_3_disable_warnings( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_urllib3, (Nuitka_StringObject *)const_str_plain_disable_warnings, tmp_assign_source_41 );

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_01dba6b52774489b2c4248ebd5cef6c3 );
#endif
    popFrameStack();

    assertFrameObject( frame_01dba6b52774489b2c4248ebd5cef6c3 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_01dba6b52774489b2c4248ebd5cef6c3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_01dba6b52774489b2c4248ebd5cef6c3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_01dba6b52774489b2c4248ebd5cef6c3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_01dba6b52774489b2c4248ebd5cef6c3, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_urllib3 );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
