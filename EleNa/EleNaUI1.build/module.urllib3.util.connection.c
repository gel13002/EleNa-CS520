/* Generated code for Python source for module 'urllib3.util.connection'
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

/* The _module_urllib3$util$connection is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$connection;
PyDictObject *moduledict_urllib3$util$connection;

/* The module constants used, if any. */
static PyObject *const_tuple_664060554d14024ab8680ac41d6791f0_tuple;
static PyObject *const_dict_f0ddba86f2ff0b11c47720a0dc503699;
static PyObject *const_str_plain_family;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_digest_867cf107290997ea3f46e9cff397e1db;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___file__;
extern PyObject *const_tuple_str_digest_9613c3fc04783ef5920752aa27696d66_tuple;
extern PyObject *const_str_plain__GLOBAL_DEFAULT_TIMEOUT;
static PyObject *const_tuple_str_plain_host_str_plain_sock_str_plain_has_ipv6_tuple;
extern PyObject *const_str_plain_SelectorError;
extern PyObject *const_str_plain_err;
static PyObject *const_str_plain_af;
extern PyObject *const_str_plain_HAS_SELECT;
extern PyObject *const_str_plain_is_connection_dropped;
extern PyObject *const_str_plain_strip;
static PyObject *const_str_digest_d3595e84d8b1645204321774ba0ba260;
static PyObject *const_str_plain_getaddrinfo;
static PyObject *const_str_plain_bind;
extern PyObject *const_str_plain_connect;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_str_plain_res;
static PyObject *const_tuple_str_plain_wait_for_read_tuple;
static PyObject *const_str_plain_HAS_IPV6;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_host;
extern PyObject *const_str_plain_wait_for_read;
static PyObject *const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple;
extern PyObject *const_str_plain_sock;
extern PyObject *const_str_plain_wait;
extern PyObject *const_str_plain_conn;
static PyObject *const_str_plain_SOCK_STREAM;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_chr_91;
static PyObject *const_str_digest_7ae26a9ac4203d9df210c0bb52d7bd2e;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_settimeout;
static PyObject *const_str_digest_9a8281a0cd80f856cf9186c57571aa88;
static PyObject *const_str_plain_has_ipv6;
extern PyObject *const_str_plain___loader__;
static PyObject *const_str_plain_socktype;
extern PyObject *const_str_plain_error;
static PyObject *const_str_plain_proto;
extern PyObject *const_str_plain_ModuleSpec;
static PyObject *const_str_digest_fd9e06b160161212aff03b5b4dc7aa13;
extern PyObject *const_tuple_str_chr_91_tuple;
static PyObject *const_str_digest_588b2ea159c2d34d31f6700a74f62098;
static PyObject *const_str_plain_setsockopt;
extern PyObject *const_str_plain_source_address;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_selectors;
static PyObject *const_str_plain_allowed_gai_family;
static PyObject *const_str_digest_3f9fec55820f857461da4f1e12840da5;
static PyObject *const_tuple_str_plain_conn_str_plain_sock_tuple;
static PyObject *const_str_plain_canonname;
extern PyObject *const_str_digest_9613c3fc04783ef5920752aa27696d66;
static PyObject *const_str_plain_AF_UNSPEC;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_sa;
static PyObject *const_tuple_str_digest_3f9fec55820f857461da4f1e12840da5_tuple;
static PyObject *const_str_plain__has_ipv6;
static PyObject *const_tuple_str_digest_d3595e84d8b1645204321774ba0ba260_tuple;
extern PyObject *const_str_plain_socket_options;
static PyObject *const_str_digest_bf7ea3c7e38d6b386518702b965c150a;
static PyObject *const_str_plain_opt;
static PyObject *const_str_plain_AF_INET6;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_socket;
extern PyObject *const_str_plain_port;
static PyObject *const_tuple_str_plain_HAS_SELECT_str_plain_SelectorError_tuple;
extern PyObject *const_str_plain_address;
static PyObject *const_tuple_str_plain_family_tuple;
extern PyObject *const_str_plain_create_connection;
static PyObject *const_str_plain_AF_INET;
static PyObject *const_str_plain__set_socket_options;
static PyObject *const_str_digest_e055b71b959d7386600233cd6fd5936b;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_float_0_0;
static PyObject *const_str_digest_595445e1dc171ee3baa1f78d32383a82;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_664060554d14024ab8680ac41d6791f0_tuple = PyTuple_New( 16 );
    PyTuple_SET_ITEM( const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 0, const_str_plain_address ); Py_INCREF( const_str_plain_address );
    PyTuple_SET_ITEM( const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 1, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    PyTuple_SET_ITEM( const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 2, const_str_plain_source_address ); Py_INCREF( const_str_plain_source_address );
    PyTuple_SET_ITEM( const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 3, const_str_plain_socket_options ); Py_INCREF( const_str_plain_socket_options );
    PyTuple_SET_ITEM( const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 4, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    PyTuple_SET_ITEM( const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 5, const_str_plain_port ); Py_INCREF( const_str_plain_port );
    PyTuple_SET_ITEM( const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 6, const_str_plain_err ); Py_INCREF( const_str_plain_err );
    const_str_plain_family = UNSTREAM_STRING( &constant_bin[ 911822 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 7, const_str_plain_family ); Py_INCREF( const_str_plain_family );
    PyTuple_SET_ITEM( const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 8, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_str_plain_af = UNSTREAM_STRING( &constant_bin[ 604633 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 9, const_str_plain_af ); Py_INCREF( const_str_plain_af );
    const_str_plain_socktype = UNSTREAM_STRING( &constant_bin[ 911828 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 10, const_str_plain_socktype ); Py_INCREF( const_str_plain_socktype );
    const_str_plain_proto = UNSTREAM_STRING( &constant_bin[ 801831 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 11, const_str_plain_proto ); Py_INCREF( const_str_plain_proto );
    const_str_plain_canonname = UNSTREAM_STRING( &constant_bin[ 911836 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 12, const_str_plain_canonname ); Py_INCREF( const_str_plain_canonname );
    const_str_plain_sa = UNSTREAM_STRING( &constant_bin[ 12 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 13, const_str_plain_sa ); Py_INCREF( const_str_plain_sa );
    PyTuple_SET_ITEM( const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 14, const_str_plain_sock ); Py_INCREF( const_str_plain_sock );
    PyTuple_SET_ITEM( const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 15, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_dict_f0ddba86f2ff0b11c47720a0dc503699 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_f0ddba86f2ff0b11c47720a0dc503699, const_str_plain_timeout, const_float_0_0 );
    assert( PyDict_Size( const_dict_f0ddba86f2ff0b11c47720a0dc503699 ) == 1 );
    const_tuple_str_plain_host_str_plain_sock_str_plain_has_ipv6_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_host_str_plain_sock_str_plain_has_ipv6_tuple, 0, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    PyTuple_SET_ITEM( const_tuple_str_plain_host_str_plain_sock_str_plain_has_ipv6_tuple, 1, const_str_plain_sock ); Py_INCREF( const_str_plain_sock );
    const_str_plain_has_ipv6 = UNSTREAM_STRING( &constant_bin[ 911845 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_host_str_plain_sock_str_plain_has_ipv6_tuple, 2, const_str_plain_has_ipv6 ); Py_INCREF( const_str_plain_has_ipv6 );
    const_str_digest_d3595e84d8b1645204321774ba0ba260 = UNSTREAM_STRING( &constant_bin[ 911853 ], 33, 0 );
    const_str_plain_getaddrinfo = UNSTREAM_STRING( &constant_bin[ 911853 ], 11, 1 );
    const_str_plain_bind = UNSTREAM_STRING( &constant_bin[ 891528 ], 4, 1 );
    const_tuple_str_plain_wait_for_read_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_wait_for_read_tuple, 0, const_str_plain_wait_for_read ); Py_INCREF( const_str_plain_wait_for_read );
    const_str_plain_HAS_IPV6 = UNSTREAM_STRING( &constant_bin[ 911886 ], 8, 1 );
    const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple, 0, const_str_plain_sock ); Py_INCREF( const_str_plain_sock );
    PyTuple_SET_ITEM( const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple, 1, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    const_str_plain_opt = UNSTREAM_STRING( &constant_bin[ 601214 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple, 2, const_str_plain_opt ); Py_INCREF( const_str_plain_opt );
    const_str_plain_SOCK_STREAM = UNSTREAM_STRING( &constant_bin[ 911894 ], 11, 1 );
    const_str_digest_7ae26a9ac4203d9df210c0bb52d7bd2e = UNSTREAM_STRING( &constant_bin[ 911905 ], 32, 0 );
    const_str_digest_9a8281a0cd80f856cf9186c57571aa88 = UNSTREAM_STRING( &constant_bin[ 911937 ], 288, 0 );
    const_str_digest_fd9e06b160161212aff03b5b4dc7aa13 = UNSTREAM_STRING( &constant_bin[ 912225 ], 179, 0 );
    const_str_digest_588b2ea159c2d34d31f6700a74f62098 = UNSTREAM_STRING( &constant_bin[ 912404 ], 104, 0 );
    const_str_plain_setsockopt = UNSTREAM_STRING( &constant_bin[ 912508 ], 10, 1 );
    const_str_plain_allowed_gai_family = UNSTREAM_STRING( &constant_bin[ 912518 ], 18, 1 );
    const_str_digest_3f9fec55820f857461da4f1e12840da5 = UNSTREAM_STRING( &constant_bin[ 912536 ], 3, 0 );
    const_tuple_str_plain_conn_str_plain_sock_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_conn_str_plain_sock_tuple, 0, const_str_plain_conn ); Py_INCREF( const_str_plain_conn );
    PyTuple_SET_ITEM( const_tuple_str_plain_conn_str_plain_sock_tuple, 1, const_str_plain_sock ); Py_INCREF( const_str_plain_sock );
    const_str_plain_AF_UNSPEC = UNSTREAM_STRING( &constant_bin[ 912314 ], 9, 1 );
    const_tuple_str_digest_3f9fec55820f857461da4f1e12840da5_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_3f9fec55820f857461da4f1e12840da5_tuple, 0, const_str_digest_3f9fec55820f857461da4f1e12840da5 ); Py_INCREF( const_str_digest_3f9fec55820f857461da4f1e12840da5 );
    const_str_plain__has_ipv6 = UNSTREAM_STRING( &constant_bin[ 912539 ], 9, 1 );
    const_tuple_str_digest_d3595e84d8b1645204321774ba0ba260_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_d3595e84d8b1645204321774ba0ba260_tuple, 0, const_str_digest_d3595e84d8b1645204321774ba0ba260 ); Py_INCREF( const_str_digest_d3595e84d8b1645204321774ba0ba260 );
    const_str_digest_bf7ea3c7e38d6b386518702b965c150a = UNSTREAM_STRING( &constant_bin[ 912548 ], 54, 0 );
    const_str_plain_AF_INET6 = UNSTREAM_STRING( &constant_bin[ 912602 ], 8, 1 );
    const_tuple_str_plain_HAS_SELECT_str_plain_SelectorError_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HAS_SELECT_str_plain_SelectorError_tuple, 0, const_str_plain_HAS_SELECT ); Py_INCREF( const_str_plain_HAS_SELECT );
    PyTuple_SET_ITEM( const_tuple_str_plain_HAS_SELECT_str_plain_SelectorError_tuple, 1, const_str_plain_SelectorError ); Py_INCREF( const_str_plain_SelectorError );
    const_tuple_str_plain_family_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_family_tuple, 0, const_str_plain_family ); Py_INCREF( const_str_plain_family );
    const_str_plain_AF_INET = UNSTREAM_STRING( &constant_bin[ 912602 ], 7, 1 );
    const_str_plain__set_socket_options = UNSTREAM_STRING( &constant_bin[ 912610 ], 19, 1 );
    const_str_digest_e055b71b959d7386600233cd6fd5936b = UNSTREAM_STRING( &constant_bin[ 911913 ], 23, 0 );
    const_str_digest_595445e1dc171ee3baa1f78d32383a82 = UNSTREAM_STRING( &constant_bin[ 912629 ], 612, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$util$connection( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c75a7f209678d6d05b4f4c9cba374172;
static PyCodeObject *codeobj_914a5e0db56e386222fd89b55e830791;
static PyCodeObject *codeobj_2c176780c557ec8551add5f2dcc16070;
static PyCodeObject *codeobj_2717c237b50145216bcc3dbd22e59c32;
static PyCodeObject *codeobj_fcf1dd0720dfd3abc0c932d78354bd0c;
static PyCodeObject *codeobj_5064505931634f260ad5040eae628f4f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_588b2ea159c2d34d31f6700a74f62098;
    codeobj_c75a7f209678d6d05b4f4c9cba374172 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_7ae26a9ac4203d9df210c0bb52d7bd2e, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_914a5e0db56e386222fd89b55e830791 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__has_ipv6, 107, const_tuple_str_plain_host_str_plain_sock_str_plain_has_ipv6_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2c176780c557ec8551add5f2dcc16070 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__set_socket_options, 88, const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2717c237b50145216bcc3dbd22e59c32 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_allowed_gai_family, 96, const_tuple_str_plain_family_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fcf1dd0720dfd3abc0c932d78354bd0c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_connection, 36, const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5064505931634f260ad5040eae628f4f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_connection_dropped, 7, const_tuple_str_plain_conn_str_plain_sock_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_6_complex_call_helper_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_1_is_connection_dropped(  );


static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_2_create_connection( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_3__set_socket_options(  );


static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_4_allowed_gai_family(  );


static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_5__has_ipv6(  );


// The module function definitions.
static PyObject *impl_urllib3$util$connection$$$function_1_is_connection_dropped( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_conn = python_pars[ 0 ];
    PyObject *var_sock = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_bool_arg_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_5064505931634f260ad5040eae628f4f = NULL;

    struct Nuitka_FrameObject *frame_5064505931634f260ad5040eae628f4f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5064505931634f260ad5040eae628f4f, codeobj_5064505931634f260ad5040eae628f4f, module_urllib3$util$connection, sizeof(void *)+sizeof(void *) );
    frame_5064505931634f260ad5040eae628f4f = cache_frame_5064505931634f260ad5040eae628f4f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5064505931634f260ad5040eae628f4f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5064505931634f260ad5040eae628f4f ) == 2 ); // Frame stack

    // Framed code:
    tmp_getattr_target_1 = par_conn;

    CHECK_OBJECT( tmp_getattr_target_1 );
    tmp_getattr_attr_1 = const_str_plain_sock;
    tmp_getattr_default_1 = Py_False;
    tmp_assign_source_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_sock == NULL );
    var_sock = tmp_assign_source_1;

    tmp_compare_left_1 = var_sock;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_False;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_compare_left_2 = var_sock;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sock" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 20;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_cond_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_HAS_SELECT );

    if (unlikely( tmp_cond_value_1 == NULL ))
    {
        tmp_cond_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HAS_SELECT );
    }

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HAS_SELECT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_3:;
    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_wait_for_read );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wait_for_read );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "wait_for_read" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_sock;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sock" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_f0ddba86f2ff0b11c47720a0dc503699 );
    frame_5064505931634f260ad5040eae628f4f->m_frame.f_lineno = 27;
    tmp_bool_arg_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_bool_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_return_value = TO_BOOL( tmp_bool_arg_1 );
    Py_DECREF( tmp_bool_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_1_is_connection_dropped );
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_5064505931634f260ad5040eae628f4f, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_5064505931634f260ad5040eae628f4f, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_SelectorError );

    if (unlikely( tmp_compare_right_3 == NULL ))
    {
        tmp_compare_right_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SelectorError );
    }

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SelectorError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 28;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }

    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 26;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5064505931634f260ad5040eae628f4f->m_frame) frame_5064505931634f260ad5040eae628f4f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_4:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_1_is_connection_dropped );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
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
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION( frame_5064505931634f260ad5040eae628f4f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_5064505931634f260ad5040eae628f4f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_5064505931634f260ad5040eae628f4f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5064505931634f260ad5040eae628f4f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5064505931634f260ad5040eae628f4f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5064505931634f260ad5040eae628f4f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5064505931634f260ad5040eae628f4f,
        type_description_1,
        par_conn,
        var_sock
    );


    // Release cached frame.
    if ( frame_5064505931634f260ad5040eae628f4f == cache_frame_5064505931634f260ad5040eae628f4f )
    {
        Py_DECREF( frame_5064505931634f260ad5040eae628f4f );
    }
    cache_frame_5064505931634f260ad5040eae628f4f = NULL;

    assertFrameObject( frame_5064505931634f260ad5040eae628f4f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_1_is_connection_dropped );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_conn );
    par_conn = NULL;

    Py_XDECREF( var_sock );
    var_sock = NULL;

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

    Py_XDECREF( par_conn );
    par_conn = NULL;

    Py_XDECREF( var_sock );
    var_sock = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_1_is_connection_dropped );
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


static PyObject *impl_urllib3$util$connection$$$function_2_create_connection( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_address = python_pars[ 0 ];
    PyObject *par_timeout = python_pars[ 1 ];
    PyObject *par_source_address = python_pars[ 2 ];
    PyObject *par_socket_options = python_pars[ 3 ];
    PyObject *var_host = NULL;
    PyObject *var_port = NULL;
    PyObject *var_err = NULL;
    PyObject *var_family = NULL;
    PyObject *var_res = NULL;
    PyObject *var_af = NULL;
    PyObject *var_socktype = NULL;
    PyObject *var_proto = NULL;
    PyObject *var_canonname = NULL;
    PyObject *var_sa = NULL;
    PyObject *var_sock = NULL;
    PyObject *var_e = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__element_5 = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    int tmp_exc_match_exception_match_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    PyObject *tmp_unpack_6;
    PyObject *tmp_unpack_7;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_fcf1dd0720dfd3abc0c932d78354bd0c = NULL;

    struct Nuitka_FrameObject *frame_fcf1dd0720dfd3abc0c932d78354bd0c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fcf1dd0720dfd3abc0c932d78354bd0c, codeobj_fcf1dd0720dfd3abc0c932d78354bd0c, module_urllib3$util$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fcf1dd0720dfd3abc0c932d78354bd0c = cache_frame_fcf1dd0720dfd3abc0c932d78354bd0c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fcf1dd0720dfd3abc0c932d78354bd0c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fcf1dd0720dfd3abc0c932d78354bd0c ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_iter_arg_1 = par_address;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_2 == NULL )
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


        type_description_1 = "oooooooooooooooo";
        exception_lineno = 50;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_3 == NULL )
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


        type_description_1 = "oooooooooooooooo";
        exception_lineno = 50;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

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

                type_description_1 = "oooooooooooooooo";
                exception_lineno = 50;
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

        type_description_1 = "oooooooooooooooo";
        exception_lineno = 50;
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

    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_4 );
    assert( var_host == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_host = tmp_assign_source_4;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_port == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_port = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_called_instance_1 = var_host;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "host" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcf1dd0720dfd3abc0c932d78354bd0c->m_frame.f_lineno = 51;
    tmp_cond_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_chr_91_tuple, 0 ) );

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 51;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_instance_2 = var_host;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "host" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcf1dd0720dfd3abc0c932d78354bd0c->m_frame.f_lineno = 52;
    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_strip, &PyTuple_GET_ITEM( const_tuple_str_digest_9613c3fc04783ef5920752aa27696d66_tuple, 0 ) );

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_host;
        var_host = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_assign_source_7 = Py_None;
    assert( var_err == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_err = tmp_assign_source_7;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_allowed_gai_family );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_allowed_gai_family );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "allowed_gai_family" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcf1dd0720dfd3abc0c932d78354bd0c->m_frame.f_lineno = 58;
    tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_family == NULL );
    var_family = tmp_assign_source_8;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getaddrinfo );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_host;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "host" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_port;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "port" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_family;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "family" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_SOCK_STREAM );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 60;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_fcf1dd0720dfd3abc0c932d78354bd0c->m_frame.f_lineno = 60;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_9;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_10 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooo";
            exception_lineno = 60;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_assign_source_11 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_11 );
    {
        PyObject *old = var_res;
        var_res = tmp_assign_source_11;
        Py_INCREF( var_res );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_3 = var_res;

    CHECK_OBJECT( tmp_iter_arg_3 );
    tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter;
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_3, 0, 5 );
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


        type_description_1 = "oooooooooooooooo";
        exception_lineno = 61;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_1;
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_4, 1, 5 );
    if ( tmp_assign_source_14 == NULL )
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


        type_description_1 = "oooooooooooooooo";
        exception_lineno = 61;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_2;
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_5 );
    tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_5, 2, 5 );
    if ( tmp_assign_source_15 == NULL )
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


        type_description_1 = "oooooooooooooooo";
        exception_lineno = 61;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_3;
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_6 );
    tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_6, 3, 5 );
    if ( tmp_assign_source_16 == NULL )
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


        type_description_1 = "oooooooooooooooo";
        exception_lineno = 61;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_4;
        tmp_tuple_unpack_2__element_4 = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_7 );
    tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_7, 4, 5 );
    if ( tmp_assign_source_17 == NULL )
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


        type_description_1 = "oooooooooooooooo";
        exception_lineno = 61;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_5;
        tmp_tuple_unpack_2__element_5 = tmp_assign_source_17;
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

                type_description_1 = "oooooooooooooooo";
                exception_lineno = 61;
                goto try_except_handler_6;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooooooooooooooo";
        exception_lineno = 61;
        goto try_except_handler_6;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_4 );
    tmp_tuple_unpack_2__element_4 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_5 );
    tmp_tuple_unpack_2__element_5 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_18 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_18 );
    {
        PyObject *old = var_af;
        var_af = tmp_assign_source_18;
        Py_INCREF( var_af );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_19 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_19 );
    {
        PyObject *old = var_socktype;
        var_socktype = tmp_assign_source_19;
        Py_INCREF( var_socktype );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_assign_source_20 = tmp_tuple_unpack_2__element_3;

    CHECK_OBJECT( tmp_assign_source_20 );
    {
        PyObject *old = var_proto;
        var_proto = tmp_assign_source_20;
        Py_INCREF( var_proto );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    tmp_assign_source_21 = tmp_tuple_unpack_2__element_4;

    CHECK_OBJECT( tmp_assign_source_21 );
    {
        PyObject *old = var_canonname;
        var_canonname = tmp_assign_source_21;
        Py_INCREF( var_canonname );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_4 );
    tmp_tuple_unpack_2__element_4 = NULL;

    tmp_assign_source_22 = tmp_tuple_unpack_2__element_5;

    CHECK_OBJECT( tmp_assign_source_22 );
    {
        PyObject *old = var_sa;
        var_sa = tmp_assign_source_22;
        Py_INCREF( var_sa );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_5 );
    tmp_tuple_unpack_2__element_5 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_4 );
    tmp_tuple_unpack_2__element_4 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_5 );
    tmp_tuple_unpack_2__element_5 = NULL;

    tmp_assign_source_23 = Py_None;
    {
        PyObject *old = var_sock;
        var_sock = tmp_assign_source_23;
        Py_INCREF( var_sock );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_socket );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_args_element_name_5 = var_af;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "af" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_args_element_name_6 = var_socktype;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "socktype" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_args_element_name_7 = var_proto;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proto" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }

    frame_fcf1dd0720dfd3abc0c932d78354bd0c->m_frame.f_lineno = 64;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_sock;
        var_sock = tmp_assign_source_24;
        Py_XDECREF( old );
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain__set_socket_options );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__set_socket_options );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_set_socket_options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_args_element_name_8 = var_sock;

    CHECK_OBJECT( tmp_args_element_name_8 );
    tmp_args_element_name_9 = par_socket_options;

    if ( tmp_args_element_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "socket_options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }

    frame_fcf1dd0720dfd3abc0c932d78354bd0c->m_frame.f_lineno = 67;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_unused );
    tmp_compare_left_1 = par_timeout;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__GLOBAL_DEFAULT_TIMEOUT );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_5 = var_sock;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sock" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_settimeout );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_args_element_name_10 = par_timeout;

    if ( tmp_args_element_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }

    frame_fcf1dd0720dfd3abc0c932d78354bd0c->m_frame.f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_cond_value_2 = par_source_address;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_address" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
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
    tmp_source_name_6 = var_sock;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sock" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_bind );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_args_element_name_11 = par_source_address;

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_address" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }

    frame_fcf1dd0720dfd3abc0c932d78354bd0c->m_frame.f_lineno = 72;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    tmp_source_name_7 = var_sock;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sock" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_connect );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_args_element_name_12 = var_sa;

    if ( tmp_args_element_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sa" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }

    frame_fcf1dd0720dfd3abc0c932d78354bd0c->m_frame.f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = var_sock;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sock" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_7;
    }

    Py_INCREF( tmp_return_value );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_2_create_connection );
    return NULL;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_fcf1dd0720dfd3abc0c932d78354bd0c, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != 0 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_fcf1dd0720dfd3abc0c932d78354bd0c, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PyException_SetTraceback( exception_keeper_value_5, (PyObject *)exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    // Tried code:
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_error );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 76;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_25 = PyThreadState_GET()->exc_value;
    {
        PyObject *old = var_e;
        var_e = tmp_assign_source_25;
        Py_INCREF( var_e );
        Py_XDECREF( old );
    }

    tmp_assign_source_26 = var_e;

    CHECK_OBJECT( tmp_assign_source_26 );
    {
        PyObject *old = var_err;
        var_err = tmp_assign_source_26;
        Py_INCREF( var_err );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_compare_left_3 = var_sock;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sock" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_9;
    }

    tmp_compare_right_3 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_instance_3 = var_sock;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sock" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_9;
    }

    frame_fcf1dd0720dfd3abc0c932d78354bd0c->m_frame.f_lineno = 79;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_27 = Py_None;
    {
        PyObject *old = var_sock;
        var_sock = tmp_assign_source_27;
        Py_INCREF( var_sock );
        Py_XDECREF( old );
    }

    branch_no_5:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_8;
    // End of try:
    try_end_5:;
    Py_XDECREF( var_e );
    var_e = NULL;

    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 63;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_fcf1dd0720dfd3abc0c932d78354bd0c->m_frame) frame_fcf1dd0720dfd3abc0c932d78354bd0c->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
    branch_end_4:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_4;
    // End of try:
    try_end_6:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_7;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_2_create_connection );
    return NULL;
    // End of try:
    try_end_7:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_8;
    // Return handler code:
    try_return_handler_4:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_compare_left_4 = var_err;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "err" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = Py_None;
    tmp_isnot_3 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    if ( tmp_isnot_3 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_raise_type_1 = var_err;

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "err" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 83;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_6:;
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_fcf1dd0720dfd3abc0c932d78354bd0c->m_frame.f_lineno = 85;
    tmp_raise_type_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_error, &PyTuple_GET_ITEM( const_tuple_str_digest_d3595e84d8b1645204321774ba0ba260_tuple, 0 ) );

    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 85;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_fcf1dd0720dfd3abc0c932d78354bd0c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_fcf1dd0720dfd3abc0c932d78354bd0c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_fcf1dd0720dfd3abc0c932d78354bd0c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fcf1dd0720dfd3abc0c932d78354bd0c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fcf1dd0720dfd3abc0c932d78354bd0c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fcf1dd0720dfd3abc0c932d78354bd0c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fcf1dd0720dfd3abc0c932d78354bd0c,
        type_description_1,
        par_address,
        par_timeout,
        par_source_address,
        par_socket_options,
        var_host,
        var_port,
        var_err,
        var_family,
        var_res,
        var_af,
        var_socktype,
        var_proto,
        var_canonname,
        var_sa,
        var_sock,
        var_e
    );


    // Release cached frame.
    if ( frame_fcf1dd0720dfd3abc0c932d78354bd0c == cache_frame_fcf1dd0720dfd3abc0c932d78354bd0c )
    {
        Py_DECREF( frame_fcf1dd0720dfd3abc0c932d78354bd0c );
    }
    cache_frame_fcf1dd0720dfd3abc0c932d78354bd0c = NULL;

    assertFrameObject( frame_fcf1dd0720dfd3abc0c932d78354bd0c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_2_create_connection );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_address );
    par_address = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

    Py_XDECREF( par_source_address );
    par_source_address = NULL;

    Py_XDECREF( par_socket_options );
    par_socket_options = NULL;

    Py_XDECREF( var_host );
    var_host = NULL;

    Py_XDECREF( var_port );
    var_port = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    Py_XDECREF( var_family );
    var_family = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_af );
    var_af = NULL;

    Py_XDECREF( var_socktype );
    var_socktype = NULL;

    Py_XDECREF( var_proto );
    var_proto = NULL;

    Py_XDECREF( var_canonname );
    var_canonname = NULL;

    Py_XDECREF( var_sa );
    var_sa = NULL;

    Py_XDECREF( var_sock );
    var_sock = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_address );
    par_address = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

    Py_XDECREF( par_source_address );
    par_source_address = NULL;

    Py_XDECREF( par_socket_options );
    par_socket_options = NULL;

    Py_XDECREF( var_host );
    var_host = NULL;

    Py_XDECREF( var_port );
    var_port = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    Py_XDECREF( var_family );
    var_family = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_af );
    var_af = NULL;

    Py_XDECREF( var_socktype );
    var_socktype = NULL;

    Py_XDECREF( var_proto );
    var_proto = NULL;

    Py_XDECREF( var_canonname );
    var_canonname = NULL;

    Py_XDECREF( var_sa );
    var_sa = NULL;

    Py_XDECREF( var_sock );
    var_sock = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_2_create_connection );
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


static PyObject *impl_urllib3$util$connection$$$function_3__set_socket_options( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = python_pars[ 0 ];
    PyObject *par_options = python_pars[ 1 ];
    PyObject *var_opt = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2c176780c557ec8551add5f2dcc16070 = NULL;

    struct Nuitka_FrameObject *frame_2c176780c557ec8551add5f2dcc16070;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_compare_left_1 = par_options;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    branch_no_1:;
    MAKE_OR_REUSE_FRAME( cache_frame_2c176780c557ec8551add5f2dcc16070, codeobj_2c176780c557ec8551add5f2dcc16070, module_urllib3$util$connection, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2c176780c557ec8551add5f2dcc16070 = cache_frame_2c176780c557ec8551add5f2dcc16070;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2c176780c557ec8551add5f2dcc16070 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2c176780c557ec8551add5f2dcc16070 ) == 2 ); // Frame stack

    // Framed code:
    tmp_iter_arg_1 = par_options;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            exception_lineno = 92;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_3 );
    {
        PyObject *old = var_opt;
        var_opt = tmp_assign_source_3;
        Py_INCREF( var_opt );
        Py_XDECREF( old );
    }

    tmp_source_name_1 = par_sock;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sock" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_setsockopt );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_dircall_arg2_1 = var_opt;

    if ( tmp_dircall_arg2_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "opt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_dircall_arg2_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
        tmp_unused = impl___internal__$$$function_6_complex_call_helper_star_list( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "ooo";
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c176780c557ec8551add5f2dcc16070 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c176780c557ec8551add5f2dcc16070 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2c176780c557ec8551add5f2dcc16070, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2c176780c557ec8551add5f2dcc16070->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2c176780c557ec8551add5f2dcc16070, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2c176780c557ec8551add5f2dcc16070,
        type_description_1,
        par_sock,
        par_options,
        var_opt
    );


    // Release cached frame.
    if ( frame_2c176780c557ec8551add5f2dcc16070 == cache_frame_2c176780c557ec8551add5f2dcc16070 )
    {
        Py_DECREF( frame_2c176780c557ec8551add5f2dcc16070 );
    }
    cache_frame_2c176780c557ec8551add5f2dcc16070 = NULL;

    assertFrameObject( frame_2c176780c557ec8551add5f2dcc16070 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_3__set_socket_options );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_sock );
    par_sock = NULL;

    Py_XDECREF( par_options );
    par_options = NULL;

    Py_XDECREF( var_opt );
    var_opt = NULL;

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

    Py_XDECREF( par_sock );
    par_sock = NULL;

    Py_XDECREF( par_options );
    par_options = NULL;

    Py_XDECREF( var_opt );
    var_opt = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_3__set_socket_options );
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


static PyObject *impl_urllib3$util$connection$$$function_4_allowed_gai_family( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_family = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_2717c237b50145216bcc3dbd22e59c32 = NULL;

    struct Nuitka_FrameObject *frame_2717c237b50145216bcc3dbd22e59c32;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2717c237b50145216bcc3dbd22e59c32, codeobj_2717c237b50145216bcc3dbd22e59c32, module_urllib3$util$connection, sizeof(void *) );
    frame_2717c237b50145216bcc3dbd22e59c32 = cache_frame_2717c237b50145216bcc3dbd22e59c32;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2717c237b50145216bcc3dbd22e59c32 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2717c237b50145216bcc3dbd22e59c32 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_AF_INET );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    assert( var_family == NULL );
    var_family = tmp_assign_source_1;

    tmp_cond_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_HAS_IPV6 );

    if (unlikely( tmp_cond_value_1 == NULL ))
    {
        tmp_cond_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HAS_IPV6 );
    }

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HAS_IPV6" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "o";
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_AF_UNSPEC );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_family;
        var_family = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2717c237b50145216bcc3dbd22e59c32 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2717c237b50145216bcc3dbd22e59c32 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2717c237b50145216bcc3dbd22e59c32, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2717c237b50145216bcc3dbd22e59c32->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2717c237b50145216bcc3dbd22e59c32, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2717c237b50145216bcc3dbd22e59c32,
        type_description_1,
        var_family
    );


    // Release cached frame.
    if ( frame_2717c237b50145216bcc3dbd22e59c32 == cache_frame_2717c237b50145216bcc3dbd22e59c32 )
    {
        Py_DECREF( frame_2717c237b50145216bcc3dbd22e59c32 );
    }
    cache_frame_2717c237b50145216bcc3dbd22e59c32 = NULL;

    assertFrameObject( frame_2717c237b50145216bcc3dbd22e59c32 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_family;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_4_allowed_gai_family );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_family );
    Py_DECREF( var_family );
    var_family = NULL;

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

    Py_XDECREF( var_family );
    var_family = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_4_allowed_gai_family );
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


static PyObject *impl_urllib3$util$connection$$$function_5__has_ipv6( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_host = python_pars[ 0 ];
    PyObject *var_sock = NULL;
    PyObject *var_has_ipv6 = NULL;
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
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    int tmp_exc_match_exception_match_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_914a5e0db56e386222fd89b55e830791 = NULL;

    struct Nuitka_FrameObject *frame_914a5e0db56e386222fd89b55e830791;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_None;
    assert( var_sock == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_sock = tmp_assign_source_1;

    tmp_assign_source_2 = Py_False;
    assert( var_has_ipv6 == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_has_ipv6 = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_914a5e0db56e386222fd89b55e830791, codeobj_914a5e0db56e386222fd89b55e830791, module_urllib3$util$connection, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_914a5e0db56e386222fd89b55e830791 = cache_frame_914a5e0db56e386222fd89b55e830791;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_914a5e0db56e386222fd89b55e830791 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_914a5e0db56e386222fd89b55e830791 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_has_ipv6 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 112;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    // Tried code:
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_socket );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_AF_INET6 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 119;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    frame_914a5e0db56e386222fd89b55e830791->m_frame.f_lineno = 119;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_sock;
        var_sock = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_source_name_4 = var_sock;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_bind );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_host;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "host" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_1 );
    frame_914a5e0db56e386222fd89b55e830791->m_frame.f_lineno = 120;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_4 = Py_True;
    {
        PyObject *old = var_has_ipv6;
        var_has_ipv6 = tmp_assign_source_4;
        Py_INCREF( var_has_ipv6 );
        Py_XDECREF( old );
    }

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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_914a5e0db56e386222fd89b55e830791, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_914a5e0db56e386222fd89b55e830791, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_Exception;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 118;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_914a5e0db56e386222fd89b55e830791->m_frame) frame_914a5e0db56e386222fd89b55e830791->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    branch_no_2:;
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
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_5__has_ipv6 );
    return NULL;
    // End of try:
    try_end_1:;
    branch_no_1:;
    tmp_cond_value_2 = var_sock;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sock" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "ooo";
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
    tmp_called_instance_1 = var_sock;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sock" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 126;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_914a5e0db56e386222fd89b55e830791->m_frame.f_lineno = 126;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    tmp_return_value = var_has_ipv6;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "has_ipv6" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_914a5e0db56e386222fd89b55e830791 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_914a5e0db56e386222fd89b55e830791 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_914a5e0db56e386222fd89b55e830791 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_914a5e0db56e386222fd89b55e830791, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_914a5e0db56e386222fd89b55e830791->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_914a5e0db56e386222fd89b55e830791, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_914a5e0db56e386222fd89b55e830791,
        type_description_1,
        par_host,
        var_sock,
        var_has_ipv6
    );


    // Release cached frame.
    if ( frame_914a5e0db56e386222fd89b55e830791 == cache_frame_914a5e0db56e386222fd89b55e830791 )
    {
        Py_DECREF( frame_914a5e0db56e386222fd89b55e830791 );
    }
    cache_frame_914a5e0db56e386222fd89b55e830791 = NULL;

    assertFrameObject( frame_914a5e0db56e386222fd89b55e830791 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_5__has_ipv6 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_host );
    par_host = NULL;

    Py_XDECREF( var_sock );
    var_sock = NULL;

    Py_XDECREF( var_has_ipv6 );
    var_has_ipv6 = NULL;

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

    Py_XDECREF( par_host );
    par_host = NULL;

    Py_XDECREF( var_sock );
    var_sock = NULL;

    Py_XDECREF( var_has_ipv6 );
    var_has_ipv6 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$connection$$$function_5__has_ipv6 );
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



static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_1_is_connection_dropped(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$connection$$$function_1_is_connection_dropped,
        const_str_plain_is_connection_dropped,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5064505931634f260ad5040eae628f4f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$connection,
        const_str_digest_9a8281a0cd80f856cf9186c57571aa88,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_2_create_connection( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$connection$$$function_2_create_connection,
        const_str_plain_create_connection,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fcf1dd0720dfd3abc0c932d78354bd0c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$connection,
        const_str_digest_595445e1dc171ee3baa1f78d32383a82,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_3__set_socket_options(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$connection$$$function_3__set_socket_options,
        const_str_plain__set_socket_options,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2c176780c557ec8551add5f2dcc16070,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$connection,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_4_allowed_gai_family(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$connection$$$function_4_allowed_gai_family,
        const_str_plain_allowed_gai_family,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2717c237b50145216bcc3dbd22e59c32,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$connection,
        const_str_digest_fd9e06b160161212aff03b5b4dc7aa13,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_5__has_ipv6(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$connection$$$function_5__has_ipv6,
        const_str_plain__has_ipv6,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_914a5e0db56e386222fd89b55e830791,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$connection,
        const_str_digest_bf7ea3c7e38d6b386518702b965c150a,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$util$connection =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.util.connection",   /* m_name */
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

MOD_INIT_DECL( urllib3$util$connection )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$util$connection );
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
    puts("urllib3.util.connection: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.connection: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$util$connection" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$util$connection = Py_InitModule4(
        "urllib3.util.connection",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_urllib3$util$connection = PyModule_Create( &mdef_urllib3$util$connection );
#endif

    moduledict_urllib3$util$connection = MODULE_DICT( module_urllib3$util$connection );

    CHECK_OBJECT( module_urllib3$util$connection );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_e055b71b959d7386600233cd6fd5936b, module_urllib3$util$connection );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_defaults_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    struct Nuitka_FrameObject *frame_c75a7f209678d6d05b4f4c9cba374172;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_588b2ea159c2d34d31f6700a74f62098;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_c75a7f209678d6d05b4f4c9cba374172 = MAKE_MODULE_FRAME( codeobj_c75a7f209678d6d05b4f4c9cba374172, module_urllib3$util$connection );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_c75a7f209678d6d05b4f4c9cba374172 );
    assert( Py_REFCNT( frame_c75a7f209678d6d05b4f4c9cba374172 ) == 2 );

    // Framed code:
    frame_c75a7f209678d6d05b4f4c9cba374172->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_e055b71b959d7386600233cd6fd5936b;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_c75a7f209678d6d05b4f4c9cba374172->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_867cf107290997ea3f46e9cff397e1db;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    frame_c75a7f209678d6d05b4f4c9cba374172->m_frame.f_lineno = 1;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( tmp_import_name_from_1 != NULL );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
    tmp_name_name_1 = const_str_plain_socket;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3$util$connection;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_c75a7f209678d6d05b4f4c9cba374172->m_frame.f_lineno = 2;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_plain_wait;
    tmp_globals_name_2 = (PyObject *)moduledict_urllib3$util$connection;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_wait_for_read_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_c75a7f209678d6d05b4f4c9cba374172->m_frame.f_lineno = 3;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_wait_for_read );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_wait_for_read, tmp_assign_source_9 );
    tmp_name_name_3 = const_str_plain_selectors;
    tmp_globals_name_3 = (PyObject *)moduledict_urllib3$util$connection;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_HAS_SELECT_str_plain_SelectorError_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_c75a7f209678d6d05b4f4c9cba374172->m_frame.f_lineno = 4;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_10;

    // Tried code:
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_HAS_SELECT );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_HAS_SELECT, tmp_assign_source_11 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_SelectorError );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_SelectorError, tmp_assign_source_12 );
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

    tmp_assign_source_13 = MAKE_FUNCTION_urllib3$util$connection$$$function_1_is_connection_dropped(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_is_connection_dropped, tmp_assign_source_13 );
    tmp_defaults_1 = PyTuple_New( 3 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__GLOBAL_DEFAULT_TIMEOUT );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_1 );

        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_1 );
    tmp_assign_source_14 = MAKE_FUNCTION_urllib3$util$connection$$$function_2_create_connection( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_create_connection, tmp_assign_source_14 );
    tmp_assign_source_15 = MAKE_FUNCTION_urllib3$util$connection$$$function_3__set_socket_options(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain__set_socket_options, tmp_assign_source_15 );
    tmp_assign_source_16 = MAKE_FUNCTION_urllib3$util$connection$$$function_4_allowed_gai_family(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_allowed_gai_family, tmp_assign_source_16 );
    tmp_assign_source_17 = MAKE_FUNCTION_urllib3$util$connection$$$function_5__has_ipv6(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain__has_ipv6, tmp_assign_source_17 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain__has_ipv6 );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__has_ipv6 );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_has_ipv6" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;

        goto frame_exception_exit_1;
    }

    frame_c75a7f209678d6d05b4f4c9cba374172->m_frame.f_lineno = 130;
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_3f9fec55820f857461da4f1e12840da5_tuple, 0 ) );

    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_HAS_IPV6, tmp_assign_source_18 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c75a7f209678d6d05b4f4c9cba374172 );
#endif
    popFrameStack();

    assertFrameObject( frame_c75a7f209678d6d05b4f4c9cba374172 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c75a7f209678d6d05b4f4c9cba374172 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c75a7f209678d6d05b4f4c9cba374172, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c75a7f209678d6d05b4f4c9cba374172->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c75a7f209678d6d05b4f4c9cba374172, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_urllib3$util$connection );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
