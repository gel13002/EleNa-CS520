/* Generated code for Python source for module 'urllib3.util.wait'
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

/* The _module_urllib3$util$wait is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$wait;
PyDictObject *moduledict_urllib3$util$wait;

/* The module constants used, if any. */
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_9fee63ab089d8ffa84a45aa3db97c377;
static PyObject *const_str_digest_e9a92c34ac232950db5e05c85676ae48;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_digest_8652fcb4f9426527849e26e6fd9550d8;
extern PyObject *const_str_plain_fileobj;
extern PyObject *const_str_plain_events;
static PyObject *const_str_plain__wait_for_io_events;
extern PyObject *const_str_digest_867cf107290997ea3f46e9cff397e1db;
extern PyObject *const_int_pos_1;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_wait_for_read;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_96dca2373dbe3b58da0a06608f0da021_tuple;
extern PyObject *const_str_plain_sock;
extern PyObject *const_str_digest_af2cd49fff0d57993aa650d6407ef15d;
extern PyObject *const_str_plain___exit__;
static PyObject *const_tuple_c13bce2be98edbb361a1caaf9807c0c8_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_angle_listcontraction;
extern PyObject *const_str_plain_selectors;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_fileno;
static PyObject *const_str_digest_2793acd2a9eb309196b14c7196b7f975;
extern PyObject *const_str_plain_selector;
extern PyObject *const_str_plain_register;
extern PyObject *const_str_plain_HAS_SELECT;
extern PyObject *const_str_plain_wait_for_write;
extern PyObject *const_str_plain_socks;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_EVENT_WRITE;
extern PyObject *const_str_plain___enter__;
static PyObject *const_str_digest_94c0ee581c27447bf49f93d599196079;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_DefaultSelector;
extern PyObject *const_str_plain_select;
extern PyObject *const_tuple_none_none_none_tuple;
static PyObject *const_tuple_e2a03bf97c770d393c010fc6d693cb98_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_d3c3c470ef2effabbb2761b04b5aa0a7;
extern PyObject *const_str_plain_EVENT_READ;
extern PyObject *const_str_plain_timeout;
static PyObject *const_tuple_str_plain_socks_str_plain_timeout_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_9fee63ab089d8ffa84a45aa3db97c377 = UNSTREAM_STRING( &constant_bin[ 941045 ], 17, 0 );
    const_str_digest_e9a92c34ac232950db5e05c85676ae48 = UNSTREAM_STRING( &constant_bin[ 941062 ], 171, 0 );
    const_str_digest_8652fcb4f9426527849e26e6fd9550d8 = UNSTREAM_STRING( &constant_bin[ 941233 ], 172, 0 );
    const_str_plain__wait_for_io_events = UNSTREAM_STRING( &constant_bin[ 941405 ], 19, 1 );
    const_tuple_96dca2373dbe3b58da0a06608f0da021_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_96dca2373dbe3b58da0a06608f0da021_tuple, 0, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_96dca2373dbe3b58da0a06608f0da021_tuple, 1, const_str_plain_selector ); Py_INCREF( const_str_plain_selector );
    PyTuple_SET_ITEM( const_tuple_96dca2373dbe3b58da0a06608f0da021_tuple, 2, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    PyTuple_SET_ITEM( const_tuple_96dca2373dbe3b58da0a06608f0da021_tuple, 3, const_str_plain_events ); Py_INCREF( const_str_plain_events );
    const_tuple_c13bce2be98edbb361a1caaf9807c0c8_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_c13bce2be98edbb361a1caaf9807c0c8_tuple, 0, const_str_plain_HAS_SELECT ); Py_INCREF( const_str_plain_HAS_SELECT );
    PyTuple_SET_ITEM( const_tuple_c13bce2be98edbb361a1caaf9807c0c8_tuple, 1, const_str_plain_DefaultSelector ); Py_INCREF( const_str_plain_DefaultSelector );
    PyTuple_SET_ITEM( const_tuple_c13bce2be98edbb361a1caaf9807c0c8_tuple, 2, const_str_plain_EVENT_READ ); Py_INCREF( const_str_plain_EVENT_READ );
    PyTuple_SET_ITEM( const_tuple_c13bce2be98edbb361a1caaf9807c0c8_tuple, 3, const_str_plain_EVENT_WRITE ); Py_INCREF( const_str_plain_EVENT_WRITE );
    const_str_digest_2793acd2a9eb309196b14c7196b7f975 = UNSTREAM_STRING( &constant_bin[ 941424 ], 26, 0 );
    const_str_digest_94c0ee581c27447bf49f93d599196079 = UNSTREAM_STRING( &constant_bin[ 941450 ], 179, 0 );
    const_tuple_e2a03bf97c770d393c010fc6d693cb98_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_e2a03bf97c770d393c010fc6d693cb98_tuple, 0, const_str_plain_socks ); Py_INCREF( const_str_plain_socks );
    PyTuple_SET_ITEM( const_tuple_e2a03bf97c770d393c010fc6d693cb98_tuple, 1, const_str_plain_events ); Py_INCREF( const_str_plain_events );
    PyTuple_SET_ITEM( const_tuple_e2a03bf97c770d393c010fc6d693cb98_tuple, 2, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    PyTuple_SET_ITEM( const_tuple_e2a03bf97c770d393c010fc6d693cb98_tuple, 3, const_str_plain_selector ); Py_INCREF( const_str_plain_selector );
    PyTuple_SET_ITEM( const_tuple_e2a03bf97c770d393c010fc6d693cb98_tuple, 4, const_str_plain_sock ); Py_INCREF( const_str_plain_sock );
    const_str_digest_d3c3c470ef2effabbb2761b04b5aa0a7 = UNSTREAM_STRING( &constant_bin[ 941629 ], 98, 0 );
    const_tuple_str_plain_socks_str_plain_timeout_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_socks_str_plain_timeout_tuple, 0, const_str_plain_socks ); Py_INCREF( const_str_plain_socks );
    PyTuple_SET_ITEM( const_tuple_str_plain_socks_str_plain_timeout_tuple, 1, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$util$wait( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_67d30c21679b3b6b52d335869431bd90;
static PyCodeObject *codeobj_ad29c8b28b5a5e7961bd9d0818d4b347;
static PyCodeObject *codeobj_d157eb4208269db8f40859c3a2c10811;
static PyCodeObject *codeobj_2ec1c053e6788547f121a875a68b8a99;
static PyCodeObject *codeobj_dee0db20a5e8397b93c76bd12389d241;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_d3c3c470ef2effabbb2761b04b5aa0a7;
    codeobj_67d30c21679b3b6b52d335869431bd90 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcontraction, 25, const_tuple_96dca2373dbe3b58da0a06608f0da021_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ad29c8b28b5a5e7961bd9d0818d4b347 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_2793acd2a9eb309196b14c7196b7f975, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_d157eb4208269db8f40859c3a2c10811 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__wait_for_io_events, 9, const_tuple_e2a03bf97c770d393c010fc6d693cb98_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2ec1c053e6788547f121a875a68b8a99 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wait_for_read, 29, const_tuple_str_plain_socks_str_plain_timeout_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dee0db20a5e8397b93c76bd12389d241 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wait_for_write, 36, const_tuple_str_plain_socks_str_plain_timeout_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_1__wait_for_io_events( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_2_wait_for_read( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_3_wait_for_write( PyObject *defaults );


// The module function definitions.
static PyObject *impl_urllib3$util$wait$$$function_1__wait_for_io_events( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_socks = python_pars[ 0 ];
    PyObject *par_events = python_pars[ 1 ];
    PyObject *par_timeout = python_pars[ 2 ];
    PyObject *var_selector = NULL;
    PyObject *var_sock = NULL;
    PyObject *outline_0_var_key = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcontraction_1__$0 = NULL;
    PyObject *tmp_listcontraction_1__contraction = NULL;
    PyObject *tmp_listcontraction_1__iter_value_0 = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
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
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
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
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_67d30c21679b3b6b52d335869431bd90_2 = NULL;

    struct Nuitka_FrameObject *frame_67d30c21679b3b6b52d335869431bd90_2;

    static struct Nuitka_FrameObject *cache_frame_d157eb4208269db8f40859c3a2c10811 = NULL;

    struct Nuitka_FrameObject *frame_d157eb4208269db8f40859c3a2c10811;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d157eb4208269db8f40859c3a2c10811, codeobj_d157eb4208269db8f40859c3a2c10811, module_urllib3$util$wait, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d157eb4208269db8f40859c3a2c10811 = cache_frame_d157eb4208269db8f40859c3a2c10811;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d157eb4208269db8f40859c3a2c10811 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d157eb4208269db8f40859c3a2c10811 ) == 2 ); // Frame stack

    // Framed code:
    tmp_cond_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_HAS_SELECT );

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

        exception_lineno = 13;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        type_description_1 = "ooooo";
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
    tmp_make_exception_arg_1 = const_str_digest_af2cd49fff0d57993aa650d6407ef15d;
    frame_d157eb4208269db8f40859c3a2c10811->m_frame.f_lineno = 14;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 14;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_1 = par_socks;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "socks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 15;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = (PyObject *)&PyList_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description_1 = "ooooo";
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
    tmp_hasattr_source_1 = par_socks;

    if ( tmp_hasattr_source_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "socks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 17;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_hasattr_attr_1 = const_str_plain_fileno;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_1 = "ooooo";
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
    tmp_assign_source_1 = PyList_New( 1 );
    tmp_list_element_1 = par_socks;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "socks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 18;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_1, 0, tmp_list_element_1 );
    {
        PyObject *old = par_socks;
        par_socks = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    goto branch_end_3;
    branch_no_3:;
    tmp_list_arg_1 = par_socks;

    if ( tmp_list_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "socks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = PySequence_List( tmp_list_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_socks;
        par_socks = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    branch_end_3:;
    branch_no_2:;
    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_DefaultSelector );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DefaultSelector );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DefaultSelector" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    frame_d157eb4208269db8f40859c3a2c10811->m_frame.f_lineno = 22;
    tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__source == NULL );
    tmp_with_1__source = tmp_assign_source_3;

    tmp_source_name_1 = tmp_with_1__source;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_2 = LOOKUP_SPECIAL( tmp_source_name_1, const_str_plain___enter__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    frame_d157eb4208269db8f40859c3a2c10811->m_frame.f_lineno = 22;
    tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__enter == NULL );
    tmp_with_1__enter = tmp_assign_source_4;

    tmp_source_name_2 = tmp_with_1__source;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_5 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___exit__ );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__exit == NULL );
    tmp_with_1__exit = tmp_assign_source_5;

    tmp_assign_source_6 = Py_True;
    assert( tmp_with_1__indicator == NULL );
    Py_INCREF( tmp_assign_source_6 );
    tmp_with_1__indicator = tmp_assign_source_6;

    tmp_assign_source_7 = tmp_with_1__enter;

    CHECK_OBJECT( tmp_assign_source_7 );
    assert( var_selector == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_selector = tmp_assign_source_7;

    // Tried code:
    // Tried code:
    tmp_iter_arg_1 = par_socks;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "socks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }

    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_8;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooo";
            exception_lineno = 23;
            goto try_except_handler_5;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_assign_source_10 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_10 );
    {
        PyObject *old = var_sock;
        var_sock = tmp_assign_source_10;
        Py_INCREF( var_sock );
        Py_XDECREF( old );
    }

    tmp_source_name_3 = var_selector;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "selector" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_register );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    tmp_args_element_name_1 = var_sock;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sock" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_2 = par_events;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "events" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    frame_d157eb4208269db8f40859c3a2c10811->m_frame.f_lineno = 24;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
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

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Tried code:
    tmp_source_name_4 = var_selector;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "selector" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        type_description_1 = "ooooo";
        goto try_except_handler_6;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_select );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "ooooo";
        goto try_except_handler_6;
    }
    tmp_args_element_name_3 = par_timeout;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        type_description_1 = "ooooo";
        goto try_except_handler_6;
    }

    frame_d157eb4208269db8f40859c3a2c10811->m_frame.f_lineno = 26;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "ooooo";
        goto try_except_handler_6;
    }
    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "ooooo";
        goto try_except_handler_6;
    }
    assert( tmp_listcontraction_1__$0 == NULL );
    tmp_listcontraction_1__$0 = tmp_assign_source_11;

    tmp_assign_source_12 = PyList_New( 0 );
    assert( tmp_listcontraction_1__contraction == NULL );
    tmp_listcontraction_1__contraction = tmp_assign_source_12;

    MAKE_OR_REUSE_FRAME( cache_frame_67d30c21679b3b6b52d335869431bd90_2, codeobj_67d30c21679b3b6b52d335869431bd90, module_urllib3$util$wait, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_67d30c21679b3b6b52d335869431bd90_2 = cache_frame_67d30c21679b3b6b52d335869431bd90_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_67d30c21679b3b6b52d335869431bd90_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_67d30c21679b3b6b52d335869431bd90_2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_listcontraction_1__$0;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_2 = "oooo";
            exception_lineno = 25;
            goto try_except_handler_7;
        }
    }

    {
        PyObject *old = tmp_listcontraction_1__iter_value_0;
        tmp_listcontraction_1__iter_value_0 = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_assign_source_14 = tmp_listcontraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_14 );
    {
        PyObject *old = outline_0_var_key;
        outline_0_var_key = tmp_assign_source_14;
        Py_INCREF( outline_0_var_key );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_1 = outline_0_var_key;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_pos_1;
    tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_2 = "oooo";
        goto try_except_handler_7;
    }
    tmp_right_name_1 = par_events;

    if ( tmp_right_name_1 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "events" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        type_description_2 = "oooo";
        goto try_except_handler_7;
    }

    tmp_cond_value_2 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_2 = "oooo";
        goto try_except_handler_7;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 26;
        type_description_2 = "oooo";
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_append_list_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_subscribed_name_2 = outline_0_var_key;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description_2 = "oooo";
        goto try_except_handler_7;
    }

    tmp_subscript_name_2 = const_int_0;
    tmp_source_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_2 = "oooo";
        goto try_except_handler_7;
    }
    tmp_append_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_fileobj );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_2 = "oooo";
        goto try_except_handler_7;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_2 = "oooo";
        goto try_except_handler_7;
    }
    branch_no_4:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_2 = "oooo";
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_1__wait_for_io_events );
    return NULL;
    // Return handler code:
    try_return_handler_7:;
    Py_XDECREF( tmp_listcontraction_1__$0 );
    tmp_listcontraction_1__$0 = NULL;

    Py_XDECREF( tmp_listcontraction_1__contraction );
    tmp_listcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_1__iter_value_0 );
    tmp_listcontraction_1__iter_value_0 = NULL;

    goto frame_return_exit_2;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
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
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67d30c21679b3b6b52d335869431bd90_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_67d30c21679b3b6b52d335869431bd90_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_6;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_67d30c21679b3b6b52d335869431bd90_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_67d30c21679b3b6b52d335869431bd90_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_67d30c21679b3b6b52d335869431bd90_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_67d30c21679b3b6b52d335869431bd90_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_67d30c21679b3b6b52d335869431bd90_2,
        type_description_2,
        outline_0_var_key,
        var_selector,
        par_timeout,
        par_events
    );


    // Release cached frame.
    if ( frame_67d30c21679b3b6b52d335869431bd90_2 == cache_frame_67d30c21679b3b6b52d335869431bd90_2 )
    {
        Py_DECREF( frame_67d30c21679b3b6b52d335869431bd90_2 );
    }
    cache_frame_67d30c21679b3b6b52d335869431bd90_2 = NULL;

    assertFrameObject( frame_67d30c21679b3b6b52d335869431bd90_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "ooooo";
    goto try_except_handler_6;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_1__wait_for_io_events );
    return NULL;
    // Return handler code:
    try_return_handler_6:;
    Py_XDECREF( outline_0_var_key );
    outline_0_var_key = NULL;

    goto outline_result_1;
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

    Py_XDECREF( outline_0_var_key );
    outline_0_var_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_1__wait_for_io_events );
    return NULL;
    outline_exception_1:;
    exception_lineno = 25;
    goto try_except_handler_4;
    outline_result_1:;
    tmp_return_value = tmp_outline_return_value_1;
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_1__wait_for_io_events );
    return NULL;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_4 == NULL )
    {
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_d157eb4208269db8f40859c3a2c10811, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != 0 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_d157eb4208269db8f40859c3a2c10811, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PyException_SetTraceback( exception_keeper_value_4, (PyObject *)exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_BaseException;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "ooooo";
        goto try_except_handler_8;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_15 = Py_False;
    {
        PyObject *old = tmp_with_1__indicator;
        tmp_with_1__indicator = tmp_assign_source_15;
        Py_INCREF( tmp_with_1__indicator );
        Py_XDECREF( old );
    }

    tmp_called_name_5 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_5 );
    tmp_args_element_name_4 = PyThreadState_GET()->exc_type;
    tmp_args_element_name_5 = PyThreadState_GET()->exc_value;
    tmp_args_element_name_6 = PyThreadState_GET()->exc_traceback;
    frame_d157eb4208269db8f40859c3a2c10811->m_frame.f_lineno = 22;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_cond_value_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "ooooo";
        goto try_except_handler_8;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 22;
        type_description_1 = "ooooo";
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_no_6;
    }
    else
    {
        goto branch_yes_6;
    }
    branch_yes_6:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 22;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d157eb4208269db8f40859c3a2c10811->m_frame) frame_d157eb4208269db8f40859c3a2c10811->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_8;
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 22;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d157eb4208269db8f40859c3a2c10811->m_frame) frame_d157eb4208269db8f40859c3a2c10811->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_8;
    branch_end_5:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_1__wait_for_io_events );
    return NULL;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Return handler code:
    try_return_handler_3:;
    tmp_compare_left_2 = tmp_with_1__indicator;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_True;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_name_6 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_6 );
    frame_d157eb4208269db8f40859c3a2c10811->m_frame.f_lineno = 22;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_7:;
    goto try_return_handler_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_called_name_7 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_7 );
    frame_d157eb4208269db8f40859c3a2c10811->m_frame.f_lineno = 22;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_6 );
        Py_XDECREF( exception_keeper_value_6 );
        Py_XDECREF( exception_keeper_tb_6 );

        exception_lineno = 22;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_8:;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    tmp_compare_left_4 = tmp_with_1__indicator;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = Py_True;
    tmp_is_3 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_3 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_called_name_8 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_8 );
    frame_d157eb4208269db8f40859c3a2c10811->m_frame.f_lineno = 22;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_9:;
    goto try_end_5;
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
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_d157eb4208269db8f40859c3a2c10811 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_d157eb4208269db8f40859c3a2c10811 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_d157eb4208269db8f40859c3a2c10811 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d157eb4208269db8f40859c3a2c10811, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d157eb4208269db8f40859c3a2c10811->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d157eb4208269db8f40859c3a2c10811, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d157eb4208269db8f40859c3a2c10811,
        type_description_1,
        par_socks,
        par_events,
        par_timeout,
        var_selector,
        var_sock
    );


    // Release cached frame.
    if ( frame_d157eb4208269db8f40859c3a2c10811 == cache_frame_d157eb4208269db8f40859c3a2c10811 )
    {
        Py_DECREF( frame_d157eb4208269db8f40859c3a2c10811 );
    }
    cache_frame_d157eb4208269db8f40859c3a2c10811 = NULL;

    assertFrameObject( frame_d157eb4208269db8f40859c3a2c10811 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;

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
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_1__wait_for_io_events );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_socks );
    par_socks = NULL;

    Py_XDECREF( par_events );
    par_events = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

    Py_XDECREF( var_selector );
    var_selector = NULL;

    Py_XDECREF( var_sock );
    var_sock = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_socks );
    par_socks = NULL;

    Py_XDECREF( par_events );
    par_events = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

    Py_XDECREF( var_selector );
    var_selector = NULL;

    Py_XDECREF( var_sock );
    var_sock = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_1__wait_for_io_events );
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


static PyObject *impl_urllib3$util$wait$$$function_2_wait_for_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_socks = python_pars[ 0 ];
    PyObject *par_timeout = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_2ec1c053e6788547f121a875a68b8a99 = NULL;

    struct Nuitka_FrameObject *frame_2ec1c053e6788547f121a875a68b8a99;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2ec1c053e6788547f121a875a68b8a99, codeobj_2ec1c053e6788547f121a875a68b8a99, module_urllib3$util$wait, sizeof(void *)+sizeof(void *) );
    frame_2ec1c053e6788547f121a875a68b8a99 = cache_frame_2ec1c053e6788547f121a875a68b8a99;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2ec1c053e6788547f121a875a68b8a99 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2ec1c053e6788547f121a875a68b8a99 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain__wait_for_io_events );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wait_for_io_events );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_wait_for_io_events" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_socks;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_EVENT_READ );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EVENT_READ );
    }

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EVENT_READ" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_timeout;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_2ec1c053e6788547f121a875a68b8a99->m_frame.f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ec1c053e6788547f121a875a68b8a99 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ec1c053e6788547f121a875a68b8a99 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ec1c053e6788547f121a875a68b8a99 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2ec1c053e6788547f121a875a68b8a99, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2ec1c053e6788547f121a875a68b8a99->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2ec1c053e6788547f121a875a68b8a99, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2ec1c053e6788547f121a875a68b8a99,
        type_description_1,
        par_socks,
        par_timeout
    );


    // Release cached frame.
    if ( frame_2ec1c053e6788547f121a875a68b8a99 == cache_frame_2ec1c053e6788547f121a875a68b8a99 )
    {
        Py_DECREF( frame_2ec1c053e6788547f121a875a68b8a99 );
    }
    cache_frame_2ec1c053e6788547f121a875a68b8a99 = NULL;

    assertFrameObject( frame_2ec1c053e6788547f121a875a68b8a99 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_2_wait_for_read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_socks );
    par_socks = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

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

    Py_XDECREF( par_socks );
    par_socks = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_2_wait_for_read );
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


static PyObject *impl_urllib3$util$wait$$$function_3_wait_for_write( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_socks = python_pars[ 0 ];
    PyObject *par_timeout = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_dee0db20a5e8397b93c76bd12389d241 = NULL;

    struct Nuitka_FrameObject *frame_dee0db20a5e8397b93c76bd12389d241;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dee0db20a5e8397b93c76bd12389d241, codeobj_dee0db20a5e8397b93c76bd12389d241, module_urllib3$util$wait, sizeof(void *)+sizeof(void *) );
    frame_dee0db20a5e8397b93c76bd12389d241 = cache_frame_dee0db20a5e8397b93c76bd12389d241;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dee0db20a5e8397b93c76bd12389d241 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dee0db20a5e8397b93c76bd12389d241 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain__wait_for_io_events );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wait_for_io_events );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_wait_for_io_events" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_socks;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_EVENT_WRITE );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EVENT_WRITE );
    }

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EVENT_WRITE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_timeout;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_dee0db20a5e8397b93c76bd12389d241->m_frame.f_lineno = 40;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dee0db20a5e8397b93c76bd12389d241 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dee0db20a5e8397b93c76bd12389d241 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dee0db20a5e8397b93c76bd12389d241 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dee0db20a5e8397b93c76bd12389d241, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dee0db20a5e8397b93c76bd12389d241->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dee0db20a5e8397b93c76bd12389d241, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dee0db20a5e8397b93c76bd12389d241,
        type_description_1,
        par_socks,
        par_timeout
    );


    // Release cached frame.
    if ( frame_dee0db20a5e8397b93c76bd12389d241 == cache_frame_dee0db20a5e8397b93c76bd12389d241 )
    {
        Py_DECREF( frame_dee0db20a5e8397b93c76bd12389d241 );
    }
    cache_frame_dee0db20a5e8397b93c76bd12389d241 = NULL;

    assertFrameObject( frame_dee0db20a5e8397b93c76bd12389d241 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_3_wait_for_write );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_socks );
    par_socks = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

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

    Py_XDECREF( par_socks );
    par_socks = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$wait$$$function_3_wait_for_write );
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



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_1__wait_for_io_events( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_1__wait_for_io_events,
        const_str_plain__wait_for_io_events,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d157eb4208269db8f40859c3a2c10811,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$wait,
        const_str_digest_94c0ee581c27447bf49f93d599196079,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_2_wait_for_read( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_2_wait_for_read,
        const_str_plain_wait_for_read,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2ec1c053e6788547f121a875a68b8a99,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$wait,
        const_str_digest_e9a92c34ac232950db5e05c85676ae48,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function_3_wait_for_write( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function_3_wait_for_write,
        const_str_plain_wait_for_write,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dee0db20a5e8397b93c76bd12389d241,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$wait,
        const_str_digest_8652fcb4f9426527849e26e6fd9550d8,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$util$wait =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.util.wait",   /* m_name */
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

MOD_INIT_DECL( urllib3$util$wait )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$util$wait );
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
    puts("urllib3.util.wait: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.wait: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$util$wait" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$util$wait = Py_InitModule4(
        "urllib3.util.wait",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_urllib3$util$wait = PyModule_Create( &mdef_urllib3$util$wait );
#endif

    moduledict_urllib3$util$wait = MODULE_DICT( module_urllib3$util$wait );

    CHECK_OBJECT( module_urllib3$util$wait );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_9fee63ab089d8ffa84a45aa3db97c377, module_urllib3$util$wait );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    struct Nuitka_FrameObject *frame_ad29c8b28b5a5e7961bd9d0818d4b347;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_d3c3c470ef2effabbb2761b04b5aa0a7;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_ad29c8b28b5a5e7961bd9d0818d4b347 = MAKE_MODULE_FRAME( codeobj_ad29c8b28b5a5e7961bd9d0818d4b347, module_urllib3$util$wait );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_ad29c8b28b5a5e7961bd9d0818d4b347 );
    assert( Py_REFCNT( frame_ad29c8b28b5a5e7961bd9d0818d4b347 ) == 2 );

    // Framed code:
    frame_ad29c8b28b5a5e7961bd9d0818d4b347->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_9fee63ab089d8ffa84a45aa3db97c377;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_ad29c8b28b5a5e7961bd9d0818d4b347->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_867cf107290997ea3f46e9cff397e1db;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_plain_selectors;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3$util$wait;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_c13bce2be98edbb361a1caaf9807c0c8_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_ad29c8b28b5a5e7961bd9d0818d4b347->m_frame.f_lineno = 1;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_7;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_HAS_SELECT );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_HAS_SELECT, tmp_assign_source_8 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_DefaultSelector );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_DefaultSelector, tmp_assign_source_9 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_EVENT_READ );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_EVENT_READ, tmp_assign_source_10 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_EVENT_WRITE );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_EVENT_WRITE, tmp_assign_source_11 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad29c8b28b5a5e7961bd9d0818d4b347 );
#endif
    popFrameStack();

    assertFrameObject( frame_ad29c8b28b5a5e7961bd9d0818d4b347 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad29c8b28b5a5e7961bd9d0818d4b347 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ad29c8b28b5a5e7961bd9d0818d4b347, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ad29c8b28b5a5e7961bd9d0818d4b347->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ad29c8b28b5a5e7961bd9d0818d4b347, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    Py_XDECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_12 = MAKE_FUNCTION_urllib3$util$wait$$$function_1__wait_for_io_events( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain__wait_for_io_events, tmp_assign_source_12 );
    tmp_defaults_2 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_13 = MAKE_FUNCTION_urllib3$util$wait$$$function_2_wait_for_read( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_read, tmp_assign_source_13 );
    tmp_defaults_3 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_14 = MAKE_FUNCTION_urllib3$util$wait$$$function_3_wait_for_write( tmp_defaults_3 );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain_wait_for_write, tmp_assign_source_14 );

    return MOD_RETURN_VALUE( module_urllib3$util$wait );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
