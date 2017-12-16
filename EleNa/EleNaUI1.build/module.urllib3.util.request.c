/* Generated code for Python source for module 'urllib3.util.request'
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

/* The _module_urllib3$util$request is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$request;
PyDictObject *moduledict_urllib3$util$request;

/* The module constants used, if any. */
extern PyObject *const_str_plain_b;
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
static PyObject *const_tuple_str_plain_body_str_plain_body_pos_str_plain_body_seek_tuple;
extern PyObject *const_str_plain_headers;
extern PyObject *const_str_plain_rewind_body;
static PyObject *const_str_digest_0209911ea85084279425c4a3b9b4322a;
static PyObject *const_tuple_bf13d4977692576812fdd050c4821ab2_tuple;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_body_pos;
extern PyObject *const_str_plain_decode;
static PyObject *const_str_plain_keep_alive;
static PyObject *const_str_plain_ACCEPT_ENCODING;
extern PyObject *const_str_chr_44;
extern PyObject *const_tuple_none_none_none_none_none_none_tuple;
extern PyObject *const_str_digest_867cf107290997ea3f46e9cff397e1db;
static PyObject *const_tuple_str_digest_5bbc1e7723c5316999b643d8effd069e_tuple;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_UnrewindableBodyError;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_77bc5054242d5f3e5269bd07a4342f1b;
extern PyObject *const_str_plain_connection;
static PyObject *const_str_digest_8b11285fb79bca8c9b65cdb3bcd47537;
static PyObject *const_str_plain_accept_encoding;
static PyObject *const_str_plain_user_agent;
static PyObject *const_tuple_str_plain_UnrewindableBodyError_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_141f53ac830b1d16e6fa74a381d6e6a2;
static PyObject *const_str_digest_a97b46010ba2d7a042fbaf3749619f69;
static PyObject *const_tuple_str_plain_b_str_plain_integer_types_tuple;
static PyObject *const_str_digest_5f141d838086b56fa77388201c41468d;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_d50409c0c67db292fd3ed476bfe9cbf2;
static PyObject *const_str_digest_62602cb6603929977f40e7e98d6957ef;
extern PyObject *const_str_plain_base64;
extern PyObject *const_str_plain_seek;
extern PyObject *const_str_digest_edd9cb70c3537b6a2b58ab6b4487087a;
extern PyObject *const_str_plain_set_file_position;
static PyObject *const_str_plain_disable_cache;
extern PyObject *const_str_plain_b64encode;
extern PyObject *const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc;
static PyObject *const_tuple_str_plain_body_str_plain_pos_tuple;
static PyObject *const_str_digest_de34be5091ab4ac19953db79567103ed;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_integer_types;
static PyObject *const_str_digest_c2a99218548fe7e92c960aa511de6589;
static PyObject *const_str_digest_5bbc1e7723c5316999b643d8effd069e;
static PyObject *const_str_plain_proxy_basic_auth;
static PyObject *const_str_plain_basic_auth;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_make_headers;
static PyObject *const_str_digest_47d4abcbaab2ba783709ab98383a7f12;
static PyObject *const_tuple_str_digest_de34be5091ab4ac19953db79567103ed_tuple;
static PyObject *const_str_digest_a11559a1f0b9dc4b626402a68b9ebc45;
extern PyObject *const_str_plain___loader__;
static PyObject *const_str_plain__FAILEDTELL;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_body;
static PyObject *const_str_digest_726f4c9a876879b008c85b6851a1570f;
extern PyObject *const_str_plain_tell;
static PyObject *const_str_digest_cc5c142a5aaab5d4cf43012035230cc0;
extern PyObject *const_str_plain_pos;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_plain_body_seek;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_authorization;
extern PyObject *const_tuple_str_plain_b64encode_tuple;
extern PyObject *const_str_digest_f4cf83dd2e7e2f235646bf31dc9dfbff;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_body_str_plain_body_pos_str_plain_body_seek_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_body_str_plain_body_pos_str_plain_body_seek_tuple, 0, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    PyTuple_SET_ITEM( const_tuple_str_plain_body_str_plain_body_pos_str_plain_body_seek_tuple, 1, const_str_plain_body_pos ); Py_INCREF( const_str_plain_body_pos );
    PyTuple_SET_ITEM( const_tuple_str_plain_body_str_plain_body_pos_str_plain_body_seek_tuple, 2, const_str_plain_body_seek ); Py_INCREF( const_str_plain_body_seek );
    const_str_digest_0209911ea85084279425c4a3b9b4322a = UNSTREAM_STRING( &constant_bin[ 913241 ], 230, 0 );
    const_tuple_bf13d4977692576812fdd050c4821ab2_tuple = PyTuple_New( 7 );
    const_str_plain_keep_alive = UNSTREAM_STRING( &constant_bin[ 913471 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 0, const_str_plain_keep_alive ); Py_INCREF( const_str_plain_keep_alive );
    const_str_plain_accept_encoding = UNSTREAM_STRING( &constant_bin[ 913481 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 1, const_str_plain_accept_encoding ); Py_INCREF( const_str_plain_accept_encoding );
    const_str_plain_user_agent = UNSTREAM_STRING( &constant_bin[ 844508 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 2, const_str_plain_user_agent ); Py_INCREF( const_str_plain_user_agent );
    const_str_plain_basic_auth = UNSTREAM_STRING( &constant_bin[ 913496 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 3, const_str_plain_basic_auth ); Py_INCREF( const_str_plain_basic_auth );
    const_str_plain_proxy_basic_auth = UNSTREAM_STRING( &constant_bin[ 913506 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 4, const_str_plain_proxy_basic_auth ); Py_INCREF( const_str_plain_proxy_basic_auth );
    const_str_plain_disable_cache = UNSTREAM_STRING( &constant_bin[ 913522 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 5, const_str_plain_disable_cache ); Py_INCREF( const_str_plain_disable_cache );
    PyTuple_SET_ITEM( const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 6, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    const_str_plain_ACCEPT_ENCODING = UNSTREAM_STRING( &constant_bin[ 913535 ], 15, 1 );
    const_tuple_str_digest_5bbc1e7723c5316999b643d8effd069e_tuple = PyTuple_New( 1 );
    const_str_digest_5bbc1e7723c5316999b643d8effd069e = UNSTREAM_STRING( &constant_bin[ 913550 ], 82, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_5bbc1e7723c5316999b643d8effd069e_tuple, 0, const_str_digest_5bbc1e7723c5316999b643d8effd069e ); Py_INCREF( const_str_digest_5bbc1e7723c5316999b643d8effd069e );
    const_str_digest_77bc5054242d5f3e5269bd07a4342f1b = UNSTREAM_STRING( &constant_bin[ 913632 ], 12, 0 );
    const_str_digest_8b11285fb79bca8c9b65cdb3bcd47537 = UNSTREAM_STRING( &constant_bin[ 913644 ], 13, 0 );
    const_tuple_str_plain_UnrewindableBodyError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_UnrewindableBodyError_tuple, 0, const_str_plain_UnrewindableBodyError ); Py_INCREF( const_str_plain_UnrewindableBodyError );
    const_str_digest_a97b46010ba2d7a042fbaf3749619f69 = UNSTREAM_STRING( &constant_bin[ 913657 ], 8, 0 );
    const_tuple_str_plain_b_str_plain_integer_types_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_b_str_plain_integer_types_tuple, 0, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_str_plain_b_str_plain_integer_types_tuple, 1, const_str_plain_integer_types ); Py_INCREF( const_str_plain_integer_types );
    const_str_digest_5f141d838086b56fa77388201c41468d = UNSTREAM_STRING( &constant_bin[ 913665 ], 52, 0 );
    const_str_digest_d50409c0c67db292fd3ed476bfe9cbf2 = UNSTREAM_STRING( &constant_bin[ 913717 ], 19, 0 );
    const_str_digest_62602cb6603929977f40e7e98d6957ef = UNSTREAM_STRING( &constant_bin[ 913736 ], 29, 0 );
    const_tuple_str_plain_body_str_plain_pos_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_body_str_plain_pos_tuple, 0, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    PyTuple_SET_ITEM( const_tuple_str_plain_body_str_plain_pos_tuple, 1, const_str_plain_pos ); Py_INCREF( const_str_plain_pos );
    const_str_digest_de34be5091ab4ac19953db79567103ed = UNSTREAM_STRING( &constant_bin[ 913765 ], 65, 0 );
    const_str_digest_c2a99218548fe7e92c960aa511de6589 = UNSTREAM_STRING( &constant_bin[ 913830 ], 101, 0 );
    const_str_digest_47d4abcbaab2ba783709ab98383a7f12 = UNSTREAM_STRING( &constant_bin[ 913931 ], 1035, 0 );
    const_tuple_str_digest_de34be5091ab4ac19953db79567103ed_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_de34be5091ab4ac19953db79567103ed_tuple, 0, const_str_digest_de34be5091ab4ac19953db79567103ed ); Py_INCREF( const_str_digest_de34be5091ab4ac19953db79567103ed );
    const_str_digest_a11559a1f0b9dc4b626402a68b9ebc45 = UNSTREAM_STRING( &constant_bin[ 913744 ], 20, 0 );
    const_str_plain__FAILEDTELL = UNSTREAM_STRING( &constant_bin[ 914966 ], 11, 1 );
    const_str_digest_726f4c9a876879b008c85b6851a1570f = UNSTREAM_STRING( &constant_bin[ 914316 ], 10, 0 );
    const_str_digest_cc5c142a5aaab5d4cf43012035230cc0 = UNSTREAM_STRING( &constant_bin[ 914977 ], 127, 0 );
    const_str_plain_authorization = UNSTREAM_STRING( &constant_bin[ 913723 ], 13, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$util$request( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_fe7bb151755b48392a3bec8c93d94926;
static PyCodeObject *codeobj_d12fd3f6712167d38a462bf55aa88e2f;
static PyCodeObject *codeobj_f58dfb92f5620957bebda7e3d9fa5d05;
static PyCodeObject *codeobj_1f2a0ee97e9d1350917ef08539c834fe;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_c2a99218548fe7e92c960aa511de6589;
    codeobj_fe7bb151755b48392a3bec8c93d94926 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_62602cb6603929977f40e7e98d6957ef, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_d12fd3f6712167d38a462bf55aa88e2f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_make_headers, 11, const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f58dfb92f5620957bebda7e3d9fa5d05 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rewind_body, 95, const_tuple_str_plain_body_str_plain_body_pos_str_plain_body_seek_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1f2a0ee97e9d1350917ef08539c834fe = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_file_position, 77, const_tuple_str_plain_body_str_plain_pos_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function_1_make_headers( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function_2_set_file_position(  );


static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function_3_rewind_body(  );


// The module function definitions.
static PyObject *impl_urllib3$util$request$$$function_1_make_headers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_keep_alive = python_pars[ 0 ];
    PyObject *par_accept_encoding = python_pars[ 1 ];
    PyObject *par_user_agent = python_pars[ 2 ];
    PyObject *par_basic_auth = python_pars[ 3 ];
    PyObject *par_proxy_basic_auth = python_pars[ 4 ];
    PyObject *par_disable_cache = python_pars[ 5 ];
    PyObject *var_headers = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_d12fd3f6712167d38a462bf55aa88e2f = NULL;

    struct Nuitka_FrameObject *frame_d12fd3f6712167d38a462bf55aa88e2f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyDict_New();
    assert( var_headers == NULL );
    var_headers = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d12fd3f6712167d38a462bf55aa88e2f, codeobj_d12fd3f6712167d38a462bf55aa88e2f, module_urllib3$util$request, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d12fd3f6712167d38a462bf55aa88e2f = cache_frame_d12fd3f6712167d38a462bf55aa88e2f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d12fd3f6712167d38a462bf55aa88e2f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d12fd3f6712167d38a462bf55aa88e2f ) == 2 ); // Frame stack

    // Framed code:
    tmp_cond_value_1 = par_accept_encoding;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "ooooooo";
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
    tmp_isinstance_inst_1 = par_accept_encoding;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_isinstance_inst_2 = par_accept_encoding;

    if ( tmp_isinstance_inst_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "accept_encoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_2 = (PyObject *)&PyList_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_1 = const_str_chr_44;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = par_accept_encoding;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "accept_encoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_d12fd3f6712167d38a462bf55aa88e2f->m_frame.f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_accept_encoding;
        par_accept_encoding = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    goto branch_end_3;
    branch_no_3:;
    tmp_assign_source_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_ACCEPT_ENCODING );

    if (unlikely( tmp_assign_source_3 == NULL ))
    {
        tmp_assign_source_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACCEPT_ENCODING );
    }

    if ( tmp_assign_source_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ACCEPT_ENCODING" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    {
        PyObject *old = par_accept_encoding;
        par_accept_encoding = tmp_assign_source_3;
        Py_INCREF( par_accept_encoding );
        Py_XDECREF( old );
    }

    branch_end_3:;
    branch_no_2:;
    tmp_ass_subvalue_1 = par_accept_encoding;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "accept_encoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = var_headers;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_digest_f4cf83dd2e7e2f235646bf31dc9dfbff;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_cond_value_2 = par_user_agent;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "user_agent" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_ass_subvalue_2 = par_user_agent;

    if ( tmp_ass_subvalue_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "user_agent" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_2 = var_headers;

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = const_str_digest_726f4c9a876879b008c85b6851a1570f;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    tmp_cond_value_3 = par_keep_alive;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "keep_alive" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_ass_subvalue_3 = const_str_digest_141f53ac830b1d16e6fa74a381d6e6a2;
    tmp_ass_subscribed_3 = var_headers;

    if ( tmp_ass_subscribed_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_3 = const_str_plain_connection;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    tmp_cond_value_4 = par_basic_auth;

    if ( tmp_cond_value_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "basic_auth" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_left_name_1 = const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_b64encode );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b64encode );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "b64encode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_b );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "b" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_basic_auth;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "basic_auth" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_d12fd3f6712167d38a462bf55aa88e2f->m_frame.f_lineno = 65;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_d12fd3f6712167d38a462bf55aa88e2f->m_frame.f_lineno = 65;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_d12fd3f6712167d38a462bf55aa88e2f->m_frame.f_lineno = 65;
    tmp_right_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_4 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_ass_subvalue_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_4 = var_headers;

    if ( tmp_ass_subscribed_4 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_4 = const_str_plain_authorization;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    Py_DECREF( tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    tmp_cond_value_5 = par_proxy_basic_auth;

    if ( tmp_cond_value_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy_basic_auth" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_left_name_2 = const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_b64encode );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b64encode );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "b64encode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_b );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "b" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_proxy_basic_auth;

    if ( tmp_args_element_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy_basic_auth" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_d12fd3f6712167d38a462bf55aa88e2f->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_d12fd3f6712167d38a462bf55aa88e2f->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_called_instance_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_d12fd3f6712167d38a462bf55aa88e2f->m_frame.f_lineno = 69;
    tmp_right_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_5 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_ass_subvalue_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_5 = var_headers;

    if ( tmp_ass_subscribed_5 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_5 = const_str_digest_d50409c0c67db292fd3ed476bfe9cbf2;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
    Py_DECREF( tmp_ass_subvalue_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    tmp_cond_value_6 = par_disable_cache;

    if ( tmp_cond_value_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "disable_cache" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_ass_subvalue_6 = const_str_digest_a97b46010ba2d7a042fbaf3749619f69;
    tmp_ass_subscribed_6 = var_headers;

    if ( tmp_ass_subscribed_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_6 = const_str_digest_8b11285fb79bca8c9b65cdb3bcd47537;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_8:;
    tmp_return_value = var_headers;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d12fd3f6712167d38a462bf55aa88e2f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d12fd3f6712167d38a462bf55aa88e2f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d12fd3f6712167d38a462bf55aa88e2f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d12fd3f6712167d38a462bf55aa88e2f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d12fd3f6712167d38a462bf55aa88e2f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d12fd3f6712167d38a462bf55aa88e2f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d12fd3f6712167d38a462bf55aa88e2f,
        type_description_1,
        par_keep_alive,
        par_accept_encoding,
        par_user_agent,
        par_basic_auth,
        par_proxy_basic_auth,
        par_disable_cache,
        var_headers
    );


    // Release cached frame.
    if ( frame_d12fd3f6712167d38a462bf55aa88e2f == cache_frame_d12fd3f6712167d38a462bf55aa88e2f )
    {
        Py_DECREF( frame_d12fd3f6712167d38a462bf55aa88e2f );
    }
    cache_frame_d12fd3f6712167d38a462bf55aa88e2f = NULL;

    assertFrameObject( frame_d12fd3f6712167d38a462bf55aa88e2f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$request$$$function_1_make_headers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_keep_alive );
    par_keep_alive = NULL;

    Py_XDECREF( par_accept_encoding );
    par_accept_encoding = NULL;

    Py_XDECREF( par_user_agent );
    par_user_agent = NULL;

    Py_XDECREF( par_basic_auth );
    par_basic_auth = NULL;

    Py_XDECREF( par_proxy_basic_auth );
    par_proxy_basic_auth = NULL;

    Py_XDECREF( par_disable_cache );
    par_disable_cache = NULL;

    Py_XDECREF( var_headers );
    var_headers = NULL;

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

    Py_XDECREF( par_keep_alive );
    par_keep_alive = NULL;

    Py_XDECREF( par_accept_encoding );
    par_accept_encoding = NULL;

    Py_XDECREF( par_user_agent );
    par_user_agent = NULL;

    Py_XDECREF( par_basic_auth );
    par_basic_auth = NULL;

    Py_XDECREF( par_proxy_basic_auth );
    par_proxy_basic_auth = NULL;

    Py_XDECREF( par_disable_cache );
    par_disable_cache = NULL;

    Py_XDECREF( var_headers );
    var_headers = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$request$$$function_1_make_headers );
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


static PyObject *impl_urllib3$util$request$$$function_2_set_file_position( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_body = python_pars[ 0 ];
    PyObject *par_pos = python_pars[ 1 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1f2a0ee97e9d1350917ef08539c834fe = NULL;

    struct Nuitka_FrameObject *frame_1f2a0ee97e9d1350917ef08539c834fe;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1f2a0ee97e9d1350917ef08539c834fe, codeobj_1f2a0ee97e9d1350917ef08539c834fe, module_urllib3$util$request, sizeof(void *)+sizeof(void *) );
    frame_1f2a0ee97e9d1350917ef08539c834fe = cache_frame_1f2a0ee97e9d1350917ef08539c834fe;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1f2a0ee97e9d1350917ef08539c834fe );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1f2a0ee97e9d1350917ef08539c834fe ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_pos;

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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_rewind_body );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rewind_body );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rewind_body" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_body;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "body" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_pos;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_1f2a0ee97e9d1350917ef08539c834fe->m_frame.f_lineno = 83;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    tmp_getattr_target_1 = par_body;

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "body" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = const_str_plain_tell;
    tmp_getattr_default_1 = Py_None;
    tmp_compare_left_2 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    // Tried code:
    tmp_called_instance_1 = par_body;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "body" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    frame_1f2a0ee97e9d1350917ef08539c834fe->m_frame.f_lineno = 86;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_tell );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = par_pos;
        par_pos = tmp_assign_source_1;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_1f2a0ee97e9d1350917ef08539c834fe, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_1f2a0ee97e9d1350917ef08539c834fe, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyExc_IOError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_3, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyExc_OSError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_3, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_3 );

        exception_lineno = 87;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain__FAILEDTELL );

    if (unlikely( tmp_assign_source_2 == NULL ))
    {
        tmp_assign_source_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__FAILEDTELL );
    }

    if ( tmp_assign_source_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_FAILEDTELL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }

    {
        PyObject *old = par_pos;
        par_pos = tmp_assign_source_2;
        Py_INCREF( par_pos );
        Py_XDECREF( old );
    }

    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 85;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1f2a0ee97e9d1350917ef08539c834fe->m_frame) frame_1f2a0ee97e9d1350917ef08539c834fe->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
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
    NUITKA_CANNOT_GET_HERE( urllib3$util$request$$$function_2_set_file_position );
    return NULL;
    // End of try:
    try_end_1:;
    branch_no_2:;
    branch_end_1:;
    tmp_return_value = par_pos;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_1f2a0ee97e9d1350917ef08539c834fe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_1f2a0ee97e9d1350917ef08539c834fe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_1f2a0ee97e9d1350917ef08539c834fe );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1f2a0ee97e9d1350917ef08539c834fe, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1f2a0ee97e9d1350917ef08539c834fe->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1f2a0ee97e9d1350917ef08539c834fe, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1f2a0ee97e9d1350917ef08539c834fe,
        type_description_1,
        par_body,
        par_pos
    );


    // Release cached frame.
    if ( frame_1f2a0ee97e9d1350917ef08539c834fe == cache_frame_1f2a0ee97e9d1350917ef08539c834fe )
    {
        Py_DECREF( frame_1f2a0ee97e9d1350917ef08539c834fe );
    }
    cache_frame_1f2a0ee97e9d1350917ef08539c834fe = NULL;

    assertFrameObject( frame_1f2a0ee97e9d1350917ef08539c834fe );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$request$$$function_2_set_file_position );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_body );
    par_body = NULL;

    Py_XDECREF( par_pos );
    par_pos = NULL;

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

    Py_XDECREF( par_body );
    par_body = NULL;

    Py_XDECREF( par_pos );
    par_pos = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$request$$$function_2_set_file_position );
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


static PyObject *impl_urllib3$util$request$$$function_3_rewind_body( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_body = python_pars[ 0 ];
    PyObject *par_body_pos = python_pars[ 1 ];
    PyObject *var_body_seek = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f58dfb92f5620957bebda7e3d9fa5d05 = NULL;

    struct Nuitka_FrameObject *frame_f58dfb92f5620957bebda7e3d9fa5d05;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f58dfb92f5620957bebda7e3d9fa5d05, codeobj_f58dfb92f5620957bebda7e3d9fa5d05, module_urllib3$util$request, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f58dfb92f5620957bebda7e3d9fa5d05 = cache_frame_f58dfb92f5620957bebda7e3d9fa5d05;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f58dfb92f5620957bebda7e3d9fa5d05 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f58dfb92f5620957bebda7e3d9fa5d05 ) == 2 ); // Frame stack

    // Framed code:
    tmp_getattr_target_1 = par_body;

    CHECK_OBJECT( tmp_getattr_target_1 );
    tmp_getattr_attr_1 = const_str_plain_seek;
    tmp_getattr_default_1 = Py_None;
    tmp_assign_source_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_body_seek == NULL );
    var_body_seek = tmp_assign_source_1;

    tmp_compexpr_left_1 = var_body_seek;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 != tmp_compexpr_right_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    assert( !(tmp_and_left_truth_1 == -1) );
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_isinstance_inst_1 = par_body_pos;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "body_pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_integer_types );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer_types );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "integer_types" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
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
    // Tried code:
    tmp_called_name_1 = var_body_seek;

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "body_seek" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_body_pos;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "body_pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    frame_f58dfb92f5620957bebda7e3d9fa5d05->m_frame.f_lineno = 109;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_f58dfb92f5620957bebda7e3d9fa5d05, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_f58dfb92f5620957bebda7e3d9fa5d05, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyExc_IOError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyExc_OSError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 110;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_UnrewindableBodyError );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnrewindableBodyError );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UnrewindableBodyError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }

    frame_f58dfb92f5620957bebda7e3d9fa5d05->m_frame.f_lineno = 111;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_de34be5091ab4ac19953db79567103ed_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 111;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto try_except_handler_3;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 108;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f58dfb92f5620957bebda7e3d9fa5d05->m_frame) frame_f58dfb92f5620957bebda7e3d9fa5d05->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    branch_end_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$request$$$function_3_rewind_body );
    return NULL;
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
    try_end_1:;
    goto branch_end_1;
    branch_no_1:;
    tmp_compare_left_2 = par_body_pos;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "body_pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain__FAILEDTELL );

    if (unlikely( tmp_compare_right_2 == NULL ))
    {
        tmp_compare_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__FAILEDTELL );
    }

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_FAILEDTELL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_UnrewindableBodyError );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnrewindableBodyError );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UnrewindableBodyError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_f58dfb92f5620957bebda7e3d9fa5d05->m_frame.f_lineno = 114;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_digest_5bbc1e7723c5316999b643d8effd069e_tuple, 0 ) );

    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 114;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_left_name_1 = const_str_digest_5f141d838086b56fa77388201c41468d;
    tmp_type_arg_1 = par_body_pos;

    if ( tmp_type_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "body_pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_f58dfb92f5620957bebda7e3d9fa5d05->m_frame.f_lineno = 117;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 117;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_end_3:;
    branch_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_f58dfb92f5620957bebda7e3d9fa5d05 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_f58dfb92f5620957bebda7e3d9fa5d05 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f58dfb92f5620957bebda7e3d9fa5d05, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f58dfb92f5620957bebda7e3d9fa5d05->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f58dfb92f5620957bebda7e3d9fa5d05, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f58dfb92f5620957bebda7e3d9fa5d05,
        type_description_1,
        par_body,
        par_body_pos,
        var_body_seek
    );


    // Release cached frame.
    if ( frame_f58dfb92f5620957bebda7e3d9fa5d05 == cache_frame_f58dfb92f5620957bebda7e3d9fa5d05 )
    {
        Py_DECREF( frame_f58dfb92f5620957bebda7e3d9fa5d05 );
    }
    cache_frame_f58dfb92f5620957bebda7e3d9fa5d05 = NULL;

    assertFrameObject( frame_f58dfb92f5620957bebda7e3d9fa5d05 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$request$$$function_3_rewind_body );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_body );
    par_body = NULL;

    Py_XDECREF( par_body_pos );
    par_body_pos = NULL;

    Py_XDECREF( var_body_seek );
    var_body_seek = NULL;

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

    Py_XDECREF( par_body );
    par_body = NULL;

    Py_XDECREF( par_body_pos );
    par_body_pos = NULL;

    Py_XDECREF( var_body_seek );
    var_body_seek = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$request$$$function_3_rewind_body );
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



static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function_1_make_headers( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$request$$$function_1_make_headers,
        const_str_plain_make_headers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d12fd3f6712167d38a462bf55aa88e2f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$request,
        const_str_digest_47d4abcbaab2ba783709ab98383a7f12,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function_2_set_file_position(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$request$$$function_2_set_file_position,
        const_str_plain_set_file_position,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1f2a0ee97e9d1350917ef08539c834fe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$request,
        const_str_digest_cc5c142a5aaab5d4cf43012035230cc0,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function_3_rewind_body(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$request$$$function_3_rewind_body,
        const_str_plain_rewind_body,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f58dfb92f5620957bebda7e3d9fa5d05,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$request,
        const_str_digest_0209911ea85084279425c4a3b9b4322a,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$util$request =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.util.request",   /* m_name */
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

MOD_INIT_DECL( urllib3$util$request )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$util$request );
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
    puts("urllib3.util.request: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.request: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$util$request" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$util$request = Py_InitModule4(
        "urllib3.util.request",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_urllib3$util$request = PyModule_Create( &mdef_urllib3$util$request );
#endif

    moduledict_urllib3$util$request = MODULE_DICT( module_urllib3$util$request );

    CHECK_OBJECT( module_urllib3$util$request );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_a11559a1f0b9dc4b626402a68b9ebc45, module_urllib3$util$request );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    struct Nuitka_FrameObject *frame_fe7bb151755b48392a3bec8c93d94926;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_c2a99218548fe7e92c960aa511de6589;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_fe7bb151755b48392a3bec8c93d94926 = MAKE_MODULE_FRAME( codeobj_fe7bb151755b48392a3bec8c93d94926, module_urllib3$util$request );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_fe7bb151755b48392a3bec8c93d94926 );
    assert( Py_REFCNT( frame_fe7bb151755b48392a3bec8c93d94926 ) == 2 );

    // Framed code:
    frame_fe7bb151755b48392a3bec8c93d94926->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_a11559a1f0b9dc4b626402a68b9ebc45;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_fe7bb151755b48392a3bec8c93d94926->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_867cf107290997ea3f46e9cff397e1db;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    frame_fe7bb151755b48392a3bec8c93d94926->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
    tmp_name_name_1 = const_str_plain_base64;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3$util$request;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_b64encode_tuple;
    tmp_level_name_1 = const_int_0;
    frame_fe7bb151755b48392a3bec8c93d94926->m_frame.f_lineno = 2;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_b64encode );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_b64encode, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_digest_edd9cb70c3537b6a2b58ab6b4487087a;
    tmp_globals_name_2 = (PyObject *)moduledict_urllib3$util$request;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_b_str_plain_integer_types_tuple;
    tmp_level_name_2 = const_int_pos_2;
    frame_fe7bb151755b48392a3bec8c93d94926->m_frame.f_lineno = 4;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_9;

    // Tried code:
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_b );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_b, tmp_assign_source_10 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_integer_types );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_11 );
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

    tmp_name_name_3 = const_str_plain_exceptions;
    tmp_globals_name_3 = (PyObject *)moduledict_urllib3$util$request;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_UnrewindableBodyError_tuple;
    tmp_level_name_3 = const_int_pos_2;
    frame_fe7bb151755b48392a3bec8c93d94926->m_frame.f_lineno = 5;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_UnrewindableBodyError );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_UnrewindableBodyError, tmp_assign_source_12 );
    tmp_assign_source_13 = const_str_digest_77bc5054242d5f3e5269bd07a4342f1b;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_ACCEPT_ENCODING, tmp_assign_source_13 );
    tmp_called_name_2 = (PyObject *)&PyBaseObject_Type;
    frame_fe7bb151755b48392a3bec8c93d94926->m_frame.f_lineno = 8;
    tmp_assign_source_14 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain__FAILEDTELL, tmp_assign_source_14 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fe7bb151755b48392a3bec8c93d94926 );
#endif
    popFrameStack();

    assertFrameObject( frame_fe7bb151755b48392a3bec8c93d94926 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fe7bb151755b48392a3bec8c93d94926 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fe7bb151755b48392a3bec8c93d94926, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fe7bb151755b48392a3bec8c93d94926->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fe7bb151755b48392a3bec8c93d94926, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_defaults_1 = const_tuple_none_none_none_none_none_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_15 = MAKE_FUNCTION_urllib3$util$request$$$function_1_make_headers( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_make_headers, tmp_assign_source_15 );
    tmp_assign_source_16 = MAKE_FUNCTION_urllib3$util$request$$$function_2_set_file_position(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_set_file_position, tmp_assign_source_16 );
    tmp_assign_source_17 = MAKE_FUNCTION_urllib3$util$request$$$function_3_rewind_body(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_rewind_body, tmp_assign_source_17 );

    return MOD_RETURN_VALUE( module_urllib3$util$request );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
