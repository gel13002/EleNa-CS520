/* Generated code for Python source for module 'requests.api'
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

/* The _module_requests$api is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$api;
PyDictObject *moduledict_requests$api;

/* The module constants used, if any. */
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_37db62543705e2e0f69d15758312b330;
static PyObject *const_str_digest_cae14719162f8d25632f36871021aaaf;
static PyObject *const_str_digest_3f73c5fcacae8cd8d823be49896e2477;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_put;
extern PyObject *const_str_plain_request;
static PyObject *const_str_digest_26d6554552a0aacd960f042f1fbb8012;
static PyObject *const_str_digest_add3f921aeb256f9d071a9968c8d439a;
extern PyObject *const_str_plain_params;
extern PyObject *const_str_plain_requests;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_b115530482cfc542e130350f9a85acf7;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_post;
extern PyObject *const_str_plain___exit__;
static PyObject *const_tuple_str_plain_url_str_plain_data_str_plain_json_str_plain_kwargs_tuple;
extern PyObject *const_str_plain_Session;
extern PyObject *const_tuple_str_plain_allow_redirects_true_tuple;
extern PyObject *const_str_plain_json;
static PyObject *const_tuple_130b606459c7852087a8cbb86273aea5_tuple;
extern PyObject *const_str_plain_head;
static PyObject *const_str_digest_f8dbf3c1f81018ebb8257237d19ea8a4;
extern PyObject *const_str_plain_url;
static PyObject *const_tuple_str_plain_sessions_tuple;
static PyObject *const_str_digest_2a855d7e75d5ae01c88b757d781beef1;
static PyObject *const_str_digest_c1ec17d8ceaaa6ed18f5bd6653da2b27;
extern PyObject *const_str_plain_method;
extern PyObject *const_tuple_str_plain_allow_redirects_false_tuple;
extern PyObject *const_str_plain_patch;
static PyObject *const_str_digest_c7e50f7358fbded8067696c085603681;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain___enter__;
static PyObject *const_tuple_str_plain_url_str_plain_data_str_plain_kwargs_tuple;
extern PyObject *const_str_plain_setdefault;
extern PyObject *const_str_plain_delete;
extern PyObject *const_str_plain___loader__;
static PyObject *const_str_digest_7c06c80c6b470b7b3622dc5e3a475cb1;
static PyObject *const_tuple_str_plain_url_str_plain_params_str_plain_kwargs_tuple;
extern PyObject *const_str_plain_session;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_allow_redirects;
static PyObject *const_str_digest_e518d1a8b2867b9ca6d0fac04600b904;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_plain_sessions;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_tuple_str_plain_url_str_plain_kwargs_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_37db62543705e2e0f69d15758312b330 = UNSTREAM_STRING( &constant_bin[ 798939 ], 447, 0 );
    const_str_digest_cae14719162f8d25632f36871021aaaf = UNSTREAM_STRING( &constant_bin[ 799386 ], 233, 0 );
    const_str_digest_3f73c5fcacae8cd8d823be49896e2477 = UNSTREAM_STRING( &constant_bin[ 799619 ], 448, 0 );
    const_str_digest_26d6554552a0aacd960f042f1fbb8012 = UNSTREAM_STRING( &constant_bin[ 800067 ], 2451, 0 );
    const_str_digest_add3f921aeb256f9d071a9968c8d439a = UNSTREAM_STRING( &constant_bin[ 802518 ], 158, 0 );
    const_str_digest_b115530482cfc542e130350f9a85acf7 = UNSTREAM_STRING( &constant_bin[ 789230 ], 12, 0 );
    const_tuple_str_plain_url_str_plain_data_str_plain_json_str_plain_kwargs_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_data_str_plain_json_str_plain_kwargs_tuple, 0, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_data_str_plain_json_str_plain_kwargs_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_data_str_plain_json_str_plain_kwargs_tuple, 2, const_str_plain_json ); Py_INCREF( const_str_plain_json );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_data_str_plain_json_str_plain_kwargs_tuple, 3, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_tuple_130b606459c7852087a8cbb86273aea5_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_130b606459c7852087a8cbb86273aea5_tuple, 0, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_130b606459c7852087a8cbb86273aea5_tuple, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_130b606459c7852087a8cbb86273aea5_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_130b606459c7852087a8cbb86273aea5_tuple, 3, const_str_plain_session ); Py_INCREF( const_str_plain_session );
    const_str_digest_f8dbf3c1f81018ebb8257237d19ea8a4 = UNSTREAM_STRING( &constant_bin[ 802676 ], 93, 0 );
    const_tuple_str_plain_sessions_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sessions_tuple, 0, const_str_plain_sessions ); Py_INCREF( const_str_plain_sessions );
    const_str_digest_2a855d7e75d5ae01c88b757d781beef1 = UNSTREAM_STRING( &constant_bin[ 802769 ], 229, 0 );
    const_str_digest_c1ec17d8ceaaa6ed18f5bd6653da2b27 = UNSTREAM_STRING( &constant_bin[ 802998 ], 231, 0 );
    const_str_digest_c7e50f7358fbded8067696c085603681 = UNSTREAM_STRING( &constant_bin[ 803229 ], 21, 0 );
    const_tuple_str_plain_url_str_plain_data_str_plain_kwargs_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 0, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_digest_7c06c80c6b470b7b3622dc5e3a475cb1 = UNSTREAM_STRING( &constant_bin[ 803250 ], 446, 0 );
    const_tuple_str_plain_url_str_plain_params_str_plain_kwargs_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_params_str_plain_kwargs_tuple, 0, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_params_str_plain_kwargs_tuple, 1, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_params_str_plain_kwargs_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_digest_e518d1a8b2867b9ca6d0fac04600b904 = UNSTREAM_STRING( &constant_bin[ 803696 ], 335, 0 );
    const_tuple_str_plain_url_str_plain_kwargs_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_kwargs_tuple, 0, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_kwargs_tuple, 1, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$api( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_1e905df09ab7729d146d221ecde55cad;
static PyCodeObject *codeobj_cf8457eac41b89b99a356502ec03aea4;
static PyCodeObject *codeobj_e8295b4c91d3cd5d38e608a62ce08503;
static PyCodeObject *codeobj_6760d0486af09a7afd726e241cd19774;
static PyCodeObject *codeobj_6556fbe858aa556cb4bdc1ce15a0d9aa;
static PyCodeObject *codeobj_683d35b8a6d8078fe2f82605039c8dbf;
static PyCodeObject *codeobj_f8ff808f390a1057e7efb3fd059555a0;
static PyCodeObject *codeobj_063e257c8b2383d6e6d702382d9c5fb7;
static PyCodeObject *codeobj_a4dafb7df72fb6dc7ff9f0de96ce1a71;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_f8dbf3c1f81018ebb8257237d19ea8a4;
    codeobj_1e905df09ab7729d146d221ecde55cad = MAKE_CODEOBJ( module_filename_obj, const_str_digest_c7e50f7358fbded8067696c085603681, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_cf8457eac41b89b99a356502ec03aea4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_delete, 143, const_tuple_str_plain_url_str_plain_kwargs_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_e8295b4c91d3cd5d38e608a62ce08503 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get, 61, const_tuple_str_plain_url_str_plain_params_str_plain_kwargs_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_6760d0486af09a7afd726e241cd19774 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_head, 88, const_tuple_str_plain_url_str_plain_kwargs_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_6556fbe858aa556cb4bdc1ce15a0d9aa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_options, 75, const_tuple_str_plain_url_str_plain_kwargs_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_683d35b8a6d8078fe2f82605039c8dbf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_patch, 129, const_tuple_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_f8ff808f390a1057e7efb3fd059555a0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_post, 101, const_tuple_str_plain_url_str_plain_data_str_plain_json_str_plain_kwargs_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_063e257c8b2383d6e6d702382d9c5fb7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_put, 115, const_tuple_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_a4dafb7df72fb6dc7ff9f0de96ce1a71 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_request, 16, const_tuple_130b606459c7852087a8cbb86273aea5_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_keywords_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_requests$api$$$function_1_request(  );


static PyObject *MAKE_FUNCTION_requests$api$$$function_2_get( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$api$$$function_3_options(  );


static PyObject *MAKE_FUNCTION_requests$api$$$function_4_head(  );


static PyObject *MAKE_FUNCTION_requests$api$$$function_5_post( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$api$$$function_6_put( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$api$$$function_7_patch( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$api$$$function_8_delete(  );


// The module function definitions.
static PyObject *impl_requests$api$$$function_1_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_method = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_session = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    PyObject *tmp_with_1__indicator = NULL;
    PyObject *tmp_with_1__source = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
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
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_a4dafb7df72fb6dc7ff9f0de96ce1a71 = NULL;

    struct Nuitka_FrameObject *frame_a4dafb7df72fb6dc7ff9f0de96ce1a71;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a4dafb7df72fb6dc7ff9f0de96ce1a71, codeobj_a4dafb7df72fb6dc7ff9f0de96ce1a71, module_requests$api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a4dafb7df72fb6dc7ff9f0de96ce1a71 = cache_frame_a4dafb7df72fb6dc7ff9f0de96ce1a71;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a4dafb7df72fb6dc7ff9f0de96ce1a71 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a4dafb7df72fb6dc7ff9f0de96ce1a71 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_sessions );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sessions );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sessions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    frame_a4dafb7df72fb6dc7ff9f0de96ce1a71->m_frame.f_lineno = 57;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_Session );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__source == NULL );
    tmp_with_1__source = tmp_assign_source_1;

    tmp_source_name_1 = tmp_with_1__source;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_SPECIAL( tmp_source_name_1, const_str_plain___enter__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    frame_a4dafb7df72fb6dc7ff9f0de96ce1a71->m_frame.f_lineno = 57;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__enter == NULL );
    tmp_with_1__enter = tmp_assign_source_2;

    tmp_source_name_2 = tmp_with_1__source;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_3 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___exit__ );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__exit == NULL );
    tmp_with_1__exit = tmp_assign_source_3;

    tmp_assign_source_4 = Py_True;
    assert( tmp_with_1__indicator == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_with_1__indicator = tmp_assign_source_4;

    tmp_assign_source_5 = tmp_with_1__enter;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_session == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_session = tmp_assign_source_5;

    // Tried code:
    // Tried code:
    tmp_source_name_3 = var_session;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_request );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    tmp_dircall_arg2_1 = _PyDict_NewPresized( 2 );
    tmp_dict_key_1 = const_str_plain_method;
    tmp_dict_value_1 = par_method;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_url;
    tmp_dict_value_2 = par_url;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg3_1 = par_kwargs;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_5_complex_call_helper_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_1_request );
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_a4dafb7df72fb6dc7ff9f0de96ce1a71, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_a4dafb7df72fb6dc7ff9f0de96ce1a71, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_BaseException;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "oooo";
        goto try_except_handler_5;
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
    tmp_assign_source_6 = Py_False;
    {
        PyObject *old = tmp_with_1__indicator;
        tmp_with_1__indicator = tmp_assign_source_6;
        Py_INCREF( tmp_with_1__indicator );
        Py_XDECREF( old );
    }

    tmp_called_name_2 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_1 = PyThreadState_GET()->exc_type;
    tmp_args_element_name_2 = PyThreadState_GET()->exc_value;
    tmp_args_element_name_3 = PyThreadState_GET()->exc_traceback;
    frame_a4dafb7df72fb6dc7ff9f0de96ce1a71->m_frame.f_lineno = 57;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "oooo";
        goto try_except_handler_5;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 57;
        type_description_1 = "oooo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
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
        exception_lineno = 57;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a4dafb7df72fb6dc7ff9f0de96ce1a71->m_frame) frame_a4dafb7df72fb6dc7ff9f0de96ce1a71->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_5;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 57;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a4dafb7df72fb6dc7ff9f0de96ce1a71->m_frame) frame_a4dafb7df72fb6dc7ff9f0de96ce1a71->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_5;
    branch_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_1_request );
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_3:;
    tmp_compare_left_2 = tmp_with_1__indicator;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_True;
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
    tmp_called_name_3 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_3 );
    frame_a4dafb7df72fb6dc7ff9f0de96ce1a71->m_frame.f_lineno = 57;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    goto try_return_handler_2;
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

    tmp_compare_left_3 = tmp_with_1__indicator;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = Py_True;
    tmp_is_2 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_2 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_name_4 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_4 );
    frame_a4dafb7df72fb6dc7ff9f0de96ce1a71->m_frame.f_lineno = 57;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );

        exception_lineno = 57;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    tmp_compare_left_4 = tmp_with_1__indicator;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = Py_True;
    tmp_is_3 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_3 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_name_5 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_5 );
    frame_a4dafb7df72fb6dc7ff9f0de96ce1a71->m_frame.f_lineno = 57;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_5:;
    goto try_end_4;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_a4dafb7df72fb6dc7ff9f0de96ce1a71 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_a4dafb7df72fb6dc7ff9f0de96ce1a71 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_a4dafb7df72fb6dc7ff9f0de96ce1a71 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a4dafb7df72fb6dc7ff9f0de96ce1a71, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a4dafb7df72fb6dc7ff9f0de96ce1a71->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a4dafb7df72fb6dc7ff9f0de96ce1a71, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a4dafb7df72fb6dc7ff9f0de96ce1a71,
        type_description_1,
        par_method,
        par_url,
        par_kwargs,
        var_session
    );


    // Release cached frame.
    if ( frame_a4dafb7df72fb6dc7ff9f0de96ce1a71 == cache_frame_a4dafb7df72fb6dc7ff9f0de96ce1a71 )
    {
        Py_DECREF( frame_a4dafb7df72fb6dc7ff9f0de96ce1a71 );
    }
    cache_frame_a4dafb7df72fb6dc7ff9f0de96ce1a71 = NULL;

    assertFrameObject( frame_a4dafb7df72fb6dc7ff9f0de96ce1a71 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_1_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_session );
    var_session = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_session );
    var_session = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_1_request );
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


static PyObject *impl_requests$api$$$function_2_get( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *par_params = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e8295b4c91d3cd5d38e608a62ce08503 = NULL;

    struct Nuitka_FrameObject *frame_e8295b4c91d3cd5d38e608a62ce08503;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e8295b4c91d3cd5d38e608a62ce08503, codeobj_e8295b4c91d3cd5d38e608a62ce08503, module_requests$api, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e8295b4c91d3cd5d38e608a62ce08503 = cache_frame_e8295b4c91d3cd5d38e608a62ce08503;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e8295b4c91d3cd5d38e608a62ce08503 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e8295b4c91d3cd5d38e608a62ce08503 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_e8295b4c91d3cd5d38e608a62ce08503->m_frame.f_lineno = 71;
    tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_setdefault, &PyTuple_GET_ITEM( const_tuple_str_plain_allow_redirects_true_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_request );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_request );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_get;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_url;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_params;
    tmp_dict_value_1 = par_params;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = par_kwargs;

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_4_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8295b4c91d3cd5d38e608a62ce08503 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8295b4c91d3cd5d38e608a62ce08503 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8295b4c91d3cd5d38e608a62ce08503 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e8295b4c91d3cd5d38e608a62ce08503, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e8295b4c91d3cd5d38e608a62ce08503->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e8295b4c91d3cd5d38e608a62ce08503, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e8295b4c91d3cd5d38e608a62ce08503,
        type_description_1,
        par_url,
        par_params,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_e8295b4c91d3cd5d38e608a62ce08503 == cache_frame_e8295b4c91d3cd5d38e608a62ce08503 )
    {
        Py_DECREF( frame_e8295b4c91d3cd5d38e608a62ce08503 );
    }
    cache_frame_e8295b4c91d3cd5d38e608a62ce08503 = NULL;

    assertFrameObject( frame_e8295b4c91d3cd5d38e608a62ce08503 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_2_get );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_params );
    par_params = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

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

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_params );
    par_params = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_2_get );
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


static PyObject *impl_requests$api$$$function_3_options( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6556fbe858aa556cb4bdc1ce15a0d9aa = NULL;

    struct Nuitka_FrameObject *frame_6556fbe858aa556cb4bdc1ce15a0d9aa;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6556fbe858aa556cb4bdc1ce15a0d9aa, codeobj_6556fbe858aa556cb4bdc1ce15a0d9aa, module_requests$api, sizeof(void *)+sizeof(void *) );
    frame_6556fbe858aa556cb4bdc1ce15a0d9aa = cache_frame_6556fbe858aa556cb4bdc1ce15a0d9aa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6556fbe858aa556cb4bdc1ce15a0d9aa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6556fbe858aa556cb4bdc1ce15a0d9aa ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_6556fbe858aa556cb4bdc1ce15a0d9aa->m_frame.f_lineno = 84;
    tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_setdefault, &PyTuple_GET_ITEM( const_tuple_str_plain_allow_redirects_true_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_request );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_request );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_options;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_url;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = par_kwargs;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6556fbe858aa556cb4bdc1ce15a0d9aa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6556fbe858aa556cb4bdc1ce15a0d9aa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6556fbe858aa556cb4bdc1ce15a0d9aa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6556fbe858aa556cb4bdc1ce15a0d9aa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6556fbe858aa556cb4bdc1ce15a0d9aa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6556fbe858aa556cb4bdc1ce15a0d9aa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6556fbe858aa556cb4bdc1ce15a0d9aa,
        type_description_1,
        par_url,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_6556fbe858aa556cb4bdc1ce15a0d9aa == cache_frame_6556fbe858aa556cb4bdc1ce15a0d9aa )
    {
        Py_DECREF( frame_6556fbe858aa556cb4bdc1ce15a0d9aa );
    }
    cache_frame_6556fbe858aa556cb4bdc1ce15a0d9aa = NULL;

    assertFrameObject( frame_6556fbe858aa556cb4bdc1ce15a0d9aa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_3_options );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

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

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_3_options );
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


static PyObject *impl_requests$api$$$function_4_head( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6760d0486af09a7afd726e241cd19774 = NULL;

    struct Nuitka_FrameObject *frame_6760d0486af09a7afd726e241cd19774;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6760d0486af09a7afd726e241cd19774, codeobj_6760d0486af09a7afd726e241cd19774, module_requests$api, sizeof(void *)+sizeof(void *) );
    frame_6760d0486af09a7afd726e241cd19774 = cache_frame_6760d0486af09a7afd726e241cd19774;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6760d0486af09a7afd726e241cd19774 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6760d0486af09a7afd726e241cd19774 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_6760d0486af09a7afd726e241cd19774->m_frame.f_lineno = 97;
    tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_setdefault, &PyTuple_GET_ITEM( const_tuple_str_plain_allow_redirects_false_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_request );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_request );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 98;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_head;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_url;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 98;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = par_kwargs;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 98;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6760d0486af09a7afd726e241cd19774 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6760d0486af09a7afd726e241cd19774 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6760d0486af09a7afd726e241cd19774 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6760d0486af09a7afd726e241cd19774, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6760d0486af09a7afd726e241cd19774->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6760d0486af09a7afd726e241cd19774, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6760d0486af09a7afd726e241cd19774,
        type_description_1,
        par_url,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_6760d0486af09a7afd726e241cd19774 == cache_frame_6760d0486af09a7afd726e241cd19774 )
    {
        Py_DECREF( frame_6760d0486af09a7afd726e241cd19774 );
    }
    cache_frame_6760d0486af09a7afd726e241cd19774 = NULL;

    assertFrameObject( frame_6760d0486af09a7afd726e241cd19774 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_4_head );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

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

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_4_head );
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


static PyObject *impl_requests$api$$$function_5_post( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *par_json = python_pars[ 2 ];
    PyObject *par_kwargs = python_pars[ 3 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_f8ff808f390a1057e7efb3fd059555a0 = NULL;

    struct Nuitka_FrameObject *frame_f8ff808f390a1057e7efb3fd059555a0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f8ff808f390a1057e7efb3fd059555a0, codeobj_f8ff808f390a1057e7efb3fd059555a0, module_requests$api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f8ff808f390a1057e7efb3fd059555a0 = cache_frame_f8ff808f390a1057e7efb3fd059555a0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f8ff808f390a1057e7efb3fd059555a0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f8ff808f390a1057e7efb3fd059555a0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_request );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_request );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_post;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_url;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
    tmp_dict_key_1 = const_str_plain_data;
    tmp_dict_value_1 = par_data;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_json;
    tmp_dict_value_2 = par_json;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_4_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f8ff808f390a1057e7efb3fd059555a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f8ff808f390a1057e7efb3fd059555a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f8ff808f390a1057e7efb3fd059555a0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f8ff808f390a1057e7efb3fd059555a0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f8ff808f390a1057e7efb3fd059555a0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f8ff808f390a1057e7efb3fd059555a0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f8ff808f390a1057e7efb3fd059555a0,
        type_description_1,
        par_url,
        par_data,
        par_json,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_f8ff808f390a1057e7efb3fd059555a0 == cache_frame_f8ff808f390a1057e7efb3fd059555a0 )
    {
        Py_DECREF( frame_f8ff808f390a1057e7efb3fd059555a0 );
    }
    cache_frame_f8ff808f390a1057e7efb3fd059555a0 = NULL;

    assertFrameObject( frame_f8ff808f390a1057e7efb3fd059555a0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_5_post );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_json );
    par_json = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_json );
    par_json = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_5_post );
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


static PyObject *impl_requests$api$$$function_6_put( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_063e257c8b2383d6e6d702382d9c5fb7 = NULL;

    struct Nuitka_FrameObject *frame_063e257c8b2383d6e6d702382d9c5fb7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_063e257c8b2383d6e6d702382d9c5fb7, codeobj_063e257c8b2383d6e6d702382d9c5fb7, module_requests$api, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_063e257c8b2383d6e6d702382d9c5fb7 = cache_frame_063e257c8b2383d6e6d702382d9c5fb7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_063e257c8b2383d6e6d702382d9c5fb7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_063e257c8b2383d6e6d702382d9c5fb7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_request );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_request );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 126;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_put;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_url;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_data;
    tmp_dict_value_1 = par_data;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_4_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_063e257c8b2383d6e6d702382d9c5fb7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_063e257c8b2383d6e6d702382d9c5fb7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_063e257c8b2383d6e6d702382d9c5fb7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_063e257c8b2383d6e6d702382d9c5fb7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_063e257c8b2383d6e6d702382d9c5fb7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_063e257c8b2383d6e6d702382d9c5fb7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_063e257c8b2383d6e6d702382d9c5fb7,
        type_description_1,
        par_url,
        par_data,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_063e257c8b2383d6e6d702382d9c5fb7 == cache_frame_063e257c8b2383d6e6d702382d9c5fb7 )
    {
        Py_DECREF( frame_063e257c8b2383d6e6d702382d9c5fb7 );
    }
    cache_frame_063e257c8b2383d6e6d702382d9c5fb7 = NULL;

    assertFrameObject( frame_063e257c8b2383d6e6d702382d9c5fb7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_6_put );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_6_put );
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


static PyObject *impl_requests$api$$$function_7_patch( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_683d35b8a6d8078fe2f82605039c8dbf = NULL;

    struct Nuitka_FrameObject *frame_683d35b8a6d8078fe2f82605039c8dbf;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_683d35b8a6d8078fe2f82605039c8dbf, codeobj_683d35b8a6d8078fe2f82605039c8dbf, module_requests$api, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_683d35b8a6d8078fe2f82605039c8dbf = cache_frame_683d35b8a6d8078fe2f82605039c8dbf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_683d35b8a6d8078fe2f82605039c8dbf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_683d35b8a6d8078fe2f82605039c8dbf ) == 2 ); // Frame stack

    // Framed code:
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_request );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_request );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_patch;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_url;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_data;
    tmp_dict_value_1 = par_data;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_4_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_683d35b8a6d8078fe2f82605039c8dbf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_683d35b8a6d8078fe2f82605039c8dbf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_683d35b8a6d8078fe2f82605039c8dbf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_683d35b8a6d8078fe2f82605039c8dbf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_683d35b8a6d8078fe2f82605039c8dbf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_683d35b8a6d8078fe2f82605039c8dbf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_683d35b8a6d8078fe2f82605039c8dbf,
        type_description_1,
        par_url,
        par_data,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_683d35b8a6d8078fe2f82605039c8dbf == cache_frame_683d35b8a6d8078fe2f82605039c8dbf )
    {
        Py_DECREF( frame_683d35b8a6d8078fe2f82605039c8dbf );
    }
    cache_frame_683d35b8a6d8078fe2f82605039c8dbf = NULL;

    assertFrameObject( frame_683d35b8a6d8078fe2f82605039c8dbf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_7_patch );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_7_patch );
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


static PyObject *impl_requests$api$$$function_8_delete( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_cf8457eac41b89b99a356502ec03aea4 = NULL;

    struct Nuitka_FrameObject *frame_cf8457eac41b89b99a356502ec03aea4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cf8457eac41b89b99a356502ec03aea4, codeobj_cf8457eac41b89b99a356502ec03aea4, module_requests$api, sizeof(void *)+sizeof(void *) );
    frame_cf8457eac41b89b99a356502ec03aea4 = cache_frame_cf8457eac41b89b99a356502ec03aea4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cf8457eac41b89b99a356502ec03aea4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cf8457eac41b89b99a356502ec03aea4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_request );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_request );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 152;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_delete;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_url;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf8457eac41b89b99a356502ec03aea4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf8457eac41b89b99a356502ec03aea4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf8457eac41b89b99a356502ec03aea4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cf8457eac41b89b99a356502ec03aea4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cf8457eac41b89b99a356502ec03aea4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cf8457eac41b89b99a356502ec03aea4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cf8457eac41b89b99a356502ec03aea4,
        type_description_1,
        par_url,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_cf8457eac41b89b99a356502ec03aea4 == cache_frame_cf8457eac41b89b99a356502ec03aea4 )
    {
        Py_DECREF( frame_cf8457eac41b89b99a356502ec03aea4 );
    }
    cache_frame_cf8457eac41b89b99a356502ec03aea4 = NULL;

    assertFrameObject( frame_cf8457eac41b89b99a356502ec03aea4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_8_delete );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$api$$$function_8_delete );
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



static PyObject *MAKE_FUNCTION_requests$api$$$function_1_request(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$api$$$function_1_request,
        const_str_plain_request,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a4dafb7df72fb6dc7ff9f0de96ce1a71,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$api,
        const_str_digest_26d6554552a0aacd960f042f1fbb8012,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$api$$$function_2_get( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$api$$$function_2_get,
        const_str_plain_get,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e8295b4c91d3cd5d38e608a62ce08503,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$api,
        const_str_digest_e518d1a8b2867b9ca6d0fac04600b904,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$api$$$function_3_options(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$api$$$function_3_options,
        const_str_plain_options,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6556fbe858aa556cb4bdc1ce15a0d9aa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$api,
        const_str_digest_cae14719162f8d25632f36871021aaaf,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$api$$$function_4_head(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$api$$$function_4_head,
        const_str_plain_head,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6760d0486af09a7afd726e241cd19774,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$api,
        const_str_digest_2a855d7e75d5ae01c88b757d781beef1,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$api$$$function_5_post( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$api$$$function_5_post,
        const_str_plain_post,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f8ff808f390a1057e7efb3fd059555a0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$api,
        const_str_digest_37db62543705e2e0f69d15758312b330,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$api$$$function_6_put( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$api$$$function_6_put,
        const_str_plain_put,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_063e257c8b2383d6e6d702382d9c5fb7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$api,
        const_str_digest_7c06c80c6b470b7b3622dc5e3a475cb1,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$api$$$function_7_patch( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$api$$$function_7_patch,
        const_str_plain_patch,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_683d35b8a6d8078fe2f82605039c8dbf,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$api,
        const_str_digest_3f73c5fcacae8cd8d823be49896e2477,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$api$$$function_8_delete(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$api$$$function_8_delete,
        const_str_plain_delete,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cf8457eac41b89b99a356502ec03aea4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$api,
        const_str_digest_c1ec17d8ceaaa6ed18f5bd6653da2b27,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$api =
{
    PyModuleDef_HEAD_INIT,
    "requests.api",   /* m_name */
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

MOD_INIT_DECL( requests$api )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$api );
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
    puts("requests.api: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.api: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrequests$api" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$api = Py_InitModule4(
        "requests.api",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_requests$api = PyModule_Create( &mdef_requests$api );
#endif

    moduledict_requests$api = MODULE_DICT( module_requests$api );

    CHECK_OBJECT( module_requests$api );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_b115530482cfc542e130350f9a85acf7, module_requests$api );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_called_name_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    struct Nuitka_FrameObject *frame_1e905df09ab7729d146d221ecde55cad;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_add3f921aeb256f9d071a9968c8d439a;
    UPDATE_STRING_DICT0( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_f8dbf3c1f81018ebb8257237d19ea8a4;
    UPDATE_STRING_DICT0( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_1e905df09ab7729d146d221ecde55cad = MAKE_MODULE_FRAME( codeobj_1e905df09ab7729d146d221ecde55cad, module_requests$api );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_1e905df09ab7729d146d221ecde55cad );
    assert( Py_REFCNT( frame_1e905df09ab7729d146d221ecde55cad ) == 2 );

    // Framed code:
    frame_1e905df09ab7729d146d221ecde55cad->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_b115530482cfc542e130350f9a85acf7;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_1e905df09ab7729d146d221ecde55cad->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_requests;
    UPDATE_STRING_DICT0( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_empty;
    tmp_globals_name_1 = (PyObject *)moduledict_requests$api;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_sessions_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_1e905df09ab7729d146d221ecde55cad->m_frame.f_lineno = 13;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_sessions );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_sessions, tmp_assign_source_7 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1e905df09ab7729d146d221ecde55cad );
#endif
    popFrameStack();

    assertFrameObject( frame_1e905df09ab7729d146d221ecde55cad );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1e905df09ab7729d146d221ecde55cad );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1e905df09ab7729d146d221ecde55cad, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1e905df09ab7729d146d221ecde55cad->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1e905df09ab7729d146d221ecde55cad, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_8 = MAKE_FUNCTION_requests$api$$$function_1_request(  );
    UPDATE_STRING_DICT1( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_request, tmp_assign_source_8 );
    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_9 = MAKE_FUNCTION_requests$api$$$function_2_get( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_get, tmp_assign_source_9 );
    tmp_assign_source_10 = MAKE_FUNCTION_requests$api$$$function_3_options(  );
    UPDATE_STRING_DICT1( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_options, tmp_assign_source_10 );
    tmp_assign_source_11 = MAKE_FUNCTION_requests$api$$$function_4_head(  );
    UPDATE_STRING_DICT1( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_head, tmp_assign_source_11 );
    tmp_defaults_2 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_12 = MAKE_FUNCTION_requests$api$$$function_5_post( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_post, tmp_assign_source_12 );
    tmp_defaults_3 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_13 = MAKE_FUNCTION_requests$api$$$function_6_put( tmp_defaults_3 );
    UPDATE_STRING_DICT1( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_put, tmp_assign_source_13 );
    tmp_defaults_4 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_assign_source_14 = MAKE_FUNCTION_requests$api$$$function_7_patch( tmp_defaults_4 );
    UPDATE_STRING_DICT1( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_patch, tmp_assign_source_14 );
    tmp_assign_source_15 = MAKE_FUNCTION_requests$api$$$function_8_delete(  );
    UPDATE_STRING_DICT1( moduledict_requests$api, (Nuitka_StringObject *)const_str_plain_delete, tmp_assign_source_15 );

    return MOD_RETURN_VALUE( module_requests$api );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
