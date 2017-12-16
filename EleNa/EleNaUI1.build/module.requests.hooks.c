/* Generated code for Python source for module 'requests.hooks'
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

/* The _module_requests$hooks is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$hooks;
PyDictObject *moduledict_requests$hooks;

/* The module constants used, if any. */
static PyObject *const_list_str_plain_response_list;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_digest_98913e74a8aeafaba255e759b9c4b650;
extern PyObject *const_str_angle_genexpr;
static PyObject *const_str_plain_hook_data;
extern PyObject *const_str_plain_requests;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_7d37e3135f706f2d37614b800bb013c5;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_HOOKS;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_dispatch_hook;
static PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_event_tuple;
extern PyObject *const_str_plain_hooks;
extern PyObject *const_str_plain_response;
static PyObject *const_str_digest_46ff42e09fe132b8e15b8eee62c83d6a;
static PyObject *const_tuple_ca8277efd73c3dd9856bf98f4ea03e26_tuple;
extern PyObject *const_str_plain_hook;
static PyObject *const_str_digest_f8ccfced70ce82b7787c71c5a1a32da0;
extern PyObject *const_str_plain___call__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_default_hooks;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_plain__hook_data;
extern PyObject *const_str_plain_event;
extern PyObject *const_str_plain___loader__;
static PyObject *const_str_digest_bac544d4d288524140a64527e2765be9;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_e0dd26ae2b2be5b561e3b2928534139e;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_list_str_plain_response_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_response_list, 0, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    const_str_digest_98913e74a8aeafaba255e759b9c4b650 = UNSTREAM_STRING( &constant_bin[ 816738 ], 95, 0 );
    const_str_plain_hook_data = UNSTREAM_STRING( &constant_bin[ 816833 ], 9, 1 );
    const_str_digest_7d37e3135f706f2d37614b800bb013c5 = UNSTREAM_STRING( &constant_bin[ 816842 ], 14, 0 );
    const_str_plain_HOOKS = UNSTREAM_STRING( &constant_bin[ 816856 ], 5, 1 );
    const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_event_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_event_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_event_tuple, 1, const_str_plain_event ); Py_INCREF( const_str_plain_event );
    const_str_digest_46ff42e09fe132b8e15b8eee62c83d6a = UNSTREAM_STRING( &constant_bin[ 816861 ], 23, 0 );
    const_tuple_ca8277efd73c3dd9856bf98f4ea03e26_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_ca8277efd73c3dd9856bf98f4ea03e26_tuple, 0, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_ca8277efd73c3dd9856bf98f4ea03e26_tuple, 1, const_str_plain_hooks ); Py_INCREF( const_str_plain_hooks );
    PyTuple_SET_ITEM( const_tuple_ca8277efd73c3dd9856bf98f4ea03e26_tuple, 2, const_str_plain_hook_data ); Py_INCREF( const_str_plain_hook_data );
    PyTuple_SET_ITEM( const_tuple_ca8277efd73c3dd9856bf98f4ea03e26_tuple, 3, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_ca8277efd73c3dd9856bf98f4ea03e26_tuple, 4, const_str_plain_hook ); Py_INCREF( const_str_plain_hook );
    const_str_plain__hook_data = UNSTREAM_STRING( &constant_bin[ 816884 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_ca8277efd73c3dd9856bf98f4ea03e26_tuple, 5, const_str_plain__hook_data ); Py_INCREF( const_str_plain__hook_data );
    const_str_digest_f8ccfced70ce82b7787c71c5a1a32da0 = UNSTREAM_STRING( &constant_bin[ 816894 ], 177, 0 );
    const_str_digest_bac544d4d288524140a64527e2765be9 = UNSTREAM_STRING( &constant_bin[ 817071 ], 54, 0 );
    const_str_digest_e0dd26ae2b2be5b561e3b2928534139e = UNSTREAM_STRING( &constant_bin[ 817125 ], 32, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$hooks( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_8157ab3bea318e292a177117d672c7a8;
static PyCodeObject *codeobj_aa40a96fc0f42a8f7514ad4c33c3f58c;
static PyCodeObject *codeobj_038c68afdcc51af3f5543c2a5ef4e6e2;
static PyCodeObject *codeobj_bcd5de4454723707dd3b2c5781894d93;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_98913e74a8aeafaba255e759b9c4b650;
    codeobj_8157ab3bea318e292a177117d672c7a8 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 18, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_event_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_aa40a96fc0f42a8f7514ad4c33c3f58c = MAKE_CODEOBJ( module_filename_obj, const_str_digest_46ff42e09fe132b8e15b8eee62c83d6a, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_038c68afdcc51af3f5543c2a5ef4e6e2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_default_hooks, 17, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bcd5de4454723707dd3b2c5781894d93 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dispatch_hook, 23, const_tuple_ca8277efd73c3dd9856bf98f4ea03e26_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *requests$hooks$$$function_1_default_hooks$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void requests$hooks$$$function_1_default_hooks$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_requests$hooks$$$function_1_default_hooks(  );


static PyObject *MAKE_FUNCTION_requests$hooks$$$function_2_dispatch_hook(  );


// The module function definitions.
static PyObject *impl_requests$hooks$$$function_1_default_hooks( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_dict_seq_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_038c68afdcc51af3f5543c2a5ef4e6e2 = NULL;

    struct Nuitka_FrameObject *frame_038c68afdcc51af3f5543c2a5ef4e6e2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_038c68afdcc51af3f5543c2a5ef4e6e2, codeobj_038c68afdcc51af3f5543c2a5ef4e6e2, module_requests$hooks, 0 );
    frame_038c68afdcc51af3f5543c2a5ef4e6e2 = cache_frame_038c68afdcc51af3f5543c2a5ef4e6e2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_038c68afdcc51af3f5543c2a5ef4e6e2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_038c68afdcc51af3f5543c2a5ef4e6e2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_iter_arg_1 = GET_STRING_DICT_VALUE( moduledict_requests$hooks, (Nuitka_StringObject *)const_str_plain_HOOKS );

    if (unlikely( tmp_iter_arg_1 == NULL ))
    {
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HOOKS );
    }

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HOOKS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 18;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_1__$0 == NULL );
    tmp_genexpr_1__$0 = tmp_assign_source_1;

    // Tried code:
    tmp_outline_return_value_1 = Nuitka_Generator_New(
        requests$hooks$$$function_1_default_hooks$$$genexpr_1_genexpr_context,
        module_requests$hooks,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_e0dd26ae2b2be5b561e3b2928534139e,
#endif
        codeobj_8157ab3bea318e292a177117d672c7a8,
        1
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );
    assert( Py_SIZE( tmp_outline_return_value_1 ) >= 1 ); 


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$hooks$$$function_1_default_hooks );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
    Py_DECREF( tmp_genexpr_1__$0 );
    tmp_genexpr_1__$0 = NULL;

    goto outline_result_1;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
    Py_DECREF( tmp_genexpr_1__$0 );
    tmp_genexpr_1__$0 = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$hooks$$$function_1_default_hooks );
    return NULL;
    outline_result_1:;
    tmp_dict_seq_1 = tmp_outline_return_value_1;
    tmp_return_value = TO_DICT( tmp_dict_seq_1, NULL );
    Py_DECREF( tmp_dict_seq_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_038c68afdcc51af3f5543c2a5ef4e6e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_038c68afdcc51af3f5543c2a5ef4e6e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_038c68afdcc51af3f5543c2a5ef4e6e2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_038c68afdcc51af3f5543c2a5ef4e6e2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_038c68afdcc51af3f5543c2a5ef4e6e2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_038c68afdcc51af3f5543c2a5ef4e6e2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_038c68afdcc51af3f5543c2a5ef4e6e2,
        type_description_1
    );


    // Release cached frame.
    if ( frame_038c68afdcc51af3f5543c2a5ef4e6e2 == cache_frame_038c68afdcc51af3f5543c2a5ef4e6e2 )
    {
        Py_DECREF( frame_038c68afdcc51af3f5543c2a5ef4e6e2 );
    }
    cache_frame_038c68afdcc51af3f5543c2a5ef4e6e2 = NULL;

    assertFrameObject( frame_038c68afdcc51af3f5543c2a5ef4e6e2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$hooks$$$function_1_default_hooks );
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



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct requests$hooks$$$function_1_default_hooks$$$genexpr_1_genexpr_locals {
    PyObject *var_event
    PyObject *tmp_iter_value_0
    PyObject *exception_type
    PyObject *exception_value
    PyTracebackObject *exception_tb
    int exception_lineno
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_tuple_element_1;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *requests$hooks$$$function_1_default_hooks$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void requests$hooks$$$function_1_default_hooks$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_event = NULL;
    PyObject *tmp_iter_value_0 = NULL;
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
    PyObject *tmp_expression_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_8157ab3bea318e292a177117d672c7a8, module_requests$hooks, sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_frame_generator;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

    generator->m_frame->m_frame.f_exc_type = thread_state->exc_type;
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = thread_state->exc_value;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = thread_state->exc_traceback;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    if ( generator->m_closure[0] == NULL )
    {
        tmp_next_source_1 = NULL;
    }
    else
    {
        tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );
    }

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "No";
            exception_lineno = 18;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_assign_source_2 = tmp_iter_value_0;

    CHECK_OBJECT( tmp_assign_source_2 );
    {
        PyObject *old = var_event;
        var_event = tmp_assign_source_2;
        Py_INCREF( var_event );
        Py_XDECREF( old );
    }

    tmp_expression_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_event;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_expression_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyList_New( 0 );
    PyTuple_SET_ITEM( tmp_expression_name_1, 1, tmp_tuple_element_1 );
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "No";
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

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, generator->m_frame, exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            type_description_1,
            NULL,
            var_event
        );


        // Release cached frame.
        if ( generator->m_frame == cache_frame_generator )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_frame_generator = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    goto try_end_2;
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

    Py_XDECREF( var_event );
    var_event = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    Py_XDECREF( var_event );
    var_event = NULL;


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

}


static PyObject *impl_requests$hooks$$$function_2_dispatch_hook( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[ 0 ];
    PyObject *par_hooks = python_pars[ 1 ];
    PyObject *par_hook_data = python_pars[ 2 ];
    PyObject *par_kwargs = python_pars[ 3 ];
    PyObject *var_hook = NULL;
    PyObject *var__hook_data = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_next_source_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_bcd5de4454723707dd3b2c5781894d93 = NULL;

    struct Nuitka_FrameObject *frame_bcd5de4454723707dd3b2c5781894d93;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bcd5de4454723707dd3b2c5781894d93, codeobj_bcd5de4454723707dd3b2c5781894d93, module_requests$hooks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bcd5de4454723707dd3b2c5781894d93 = cache_frame_bcd5de4454723707dd3b2c5781894d93;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bcd5de4454723707dd3b2c5781894d93 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bcd5de4454723707dd3b2c5781894d93 ) == 2 ); // Frame stack

    // Framed code:
    tmp_or_left_value_1 = par_hooks;

    CHECK_OBJECT( tmp_or_left_value_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "oooooo";
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
    tmp_or_right_value_1 = PyDict_New();
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    {
        PyObject *old = par_hooks;
        assert( old != NULL );
        par_hooks = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_source_name_1 = par_hooks;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_key;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_bcd5de4454723707dd3b2c5781894d93->m_frame.f_lineno = 26;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_hooks;
        par_hooks = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_cond_value_1 = par_hooks;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "oooooo";
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
    tmp_hasattr_source_1 = par_hooks;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain___call__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_3 = PyList_New( 1 );
    tmp_list_element_1 = par_hooks;

    CHECK_OBJECT( tmp_list_element_1 );
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_3, 0, tmp_list_element_1 );
    {
        PyObject *old = par_hooks;
        assert( old != NULL );
        par_hooks = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_iter_arg_1 = par_hooks;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_4;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            exception_lineno = 30;
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
        PyObject *old = var_hook;
        var_hook = tmp_assign_source_6;
        Py_INCREF( var_hook );
        Py_XDECREF( old );
    }

    tmp_dircall_arg1_1 = var_hook;

    CHECK_OBJECT( tmp_dircall_arg1_1 );
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_hook_data;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hook_data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
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

        exception_lineno = 31;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_assign_source_7 = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var__hook_data;
        var__hook_data = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var__hook_data;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_8 = var__hook_data;

    if ( tmp_assign_source_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_hook_data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    {
        PyObject *old = par_hook_data;
        par_hook_data = tmp_assign_source_8;
        Py_INCREF( par_hook_data );
        Py_XDECREF( old );
    }

    branch_no_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "oooooo";
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

    branch_no_1:;
    tmp_return_value = par_hook_data;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hook_data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bcd5de4454723707dd3b2c5781894d93 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bcd5de4454723707dd3b2c5781894d93 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bcd5de4454723707dd3b2c5781894d93 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bcd5de4454723707dd3b2c5781894d93, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bcd5de4454723707dd3b2c5781894d93->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bcd5de4454723707dd3b2c5781894d93, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bcd5de4454723707dd3b2c5781894d93,
        type_description_1,
        par_key,
        par_hooks,
        par_hook_data,
        par_kwargs,
        var_hook,
        var__hook_data
    );


    // Release cached frame.
    if ( frame_bcd5de4454723707dd3b2c5781894d93 == cache_frame_bcd5de4454723707dd3b2c5781894d93 )
    {
        Py_DECREF( frame_bcd5de4454723707dd3b2c5781894d93 );
    }
    cache_frame_bcd5de4454723707dd3b2c5781894d93 = NULL;

    assertFrameObject( frame_bcd5de4454723707dd3b2c5781894d93 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$hooks$$$function_2_dispatch_hook );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_key );
    par_key = NULL;

    Py_XDECREF( par_hooks );
    par_hooks = NULL;

    Py_XDECREF( par_hook_data );
    par_hook_data = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_hook );
    var_hook = NULL;

    Py_XDECREF( var__hook_data );
    var__hook_data = NULL;

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

    Py_XDECREF( par_key );
    par_key = NULL;

    Py_XDECREF( par_hooks );
    par_hooks = NULL;

    Py_XDECREF( par_hook_data );
    par_hook_data = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_hook );
    var_hook = NULL;

    Py_XDECREF( var__hook_data );
    var__hook_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$hooks$$$function_2_dispatch_hook );
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



static PyObject *MAKE_FUNCTION_requests$hooks$$$function_1_default_hooks(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$hooks$$$function_1_default_hooks,
        const_str_plain_default_hooks,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_038c68afdcc51af3f5543c2a5ef4e6e2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$hooks,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$hooks$$$function_2_dispatch_hook(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$hooks$$$function_2_dispatch_hook,
        const_str_plain_dispatch_hook,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bcd5de4454723707dd3b2c5781894d93,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$hooks,
        const_str_digest_bac544d4d288524140a64527e2765be9,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$hooks =
{
    PyModuleDef_HEAD_INIT,
    "requests.hooks",   /* m_name */
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

MOD_INIT_DECL( requests$hooks )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$hooks );
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
    puts("requests.hooks: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.hooks: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrequests$hooks" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$hooks = Py_InitModule4(
        "requests.hooks",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_requests$hooks = PyModule_Create( &mdef_requests$hooks );
#endif

    moduledict_requests$hooks = MODULE_DICT( module_requests$hooks );

    CHECK_OBJECT( module_requests$hooks );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_7d37e3135f706f2d37614b800bb013c5, module_requests$hooks );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_requests$hooks, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_requests$hooks, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_requests$hooks, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    struct Nuitka_FrameObject *frame_aa40a96fc0f42a8f7514ad4c33c3f58c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_f8ccfced70ce82b7787c71c5a1a32da0;
    UPDATE_STRING_DICT0( moduledict_requests$hooks, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_98913e74a8aeafaba255e759b9c4b650;
    UPDATE_STRING_DICT0( moduledict_requests$hooks, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_requests$hooks, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_aa40a96fc0f42a8f7514ad4c33c3f58c = MAKE_MODULE_FRAME( codeobj_aa40a96fc0f42a8f7514ad4c33c3f58c, module_requests$hooks );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_aa40a96fc0f42a8f7514ad4c33c3f58c );
    assert( Py_REFCNT( frame_aa40a96fc0f42a8f7514ad4c33c3f58c ) == 2 );

    // Framed code:
    frame_aa40a96fc0f42a8f7514ad4c33c3f58c->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_7d37e3135f706f2d37614b800bb013c5;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_aa40a96fc0f42a8f7514ad4c33c3f58c->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_requests$hooks, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa40a96fc0f42a8f7514ad4c33c3f58c );
#endif
    popFrameStack();

    assertFrameObject( frame_aa40a96fc0f42a8f7514ad4c33c3f58c );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa40a96fc0f42a8f7514ad4c33c3f58c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aa40a96fc0f42a8f7514ad4c33c3f58c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aa40a96fc0f42a8f7514ad4c33c3f58c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aa40a96fc0f42a8f7514ad4c33c3f58c, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_requests$hooks, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_requests;
    UPDATE_STRING_DICT0( moduledict_requests$hooks, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_assign_source_7 = LIST_COPY( const_list_str_plain_response_list );
    UPDATE_STRING_DICT1( moduledict_requests$hooks, (Nuitka_StringObject *)const_str_plain_HOOKS, tmp_assign_source_7 );
    tmp_assign_source_8 = MAKE_FUNCTION_requests$hooks$$$function_1_default_hooks(  );
    UPDATE_STRING_DICT1( moduledict_requests$hooks, (Nuitka_StringObject *)const_str_plain_default_hooks, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_requests$hooks$$$function_2_dispatch_hook(  );
    UPDATE_STRING_DICT1( moduledict_requests$hooks, (Nuitka_StringObject *)const_str_plain_dispatch_hook, tmp_assign_source_9 );

    return MOD_RETURN_VALUE( module_requests$hooks );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
