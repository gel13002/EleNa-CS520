/* Generated code for Python source for module 'chardet.cp949prober'
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

/* The _module_chardet$cp949prober is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$cp949prober;
PyDictObject *moduledict_chardet$cp949prober;

/* The module constants used, if any. */
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_Korean;
extern PyObject *const_str_plain_CP949_SM_MODEL;
extern PyObject *const_tuple_str_plain_MultiByteCharSetProber_tuple;
extern PyObject *const_str_plain_mbcssm;
extern PyObject *const_str_plain_charset_name;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_int_pos_1;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_4c767ff705a7a723c486dea61c5cb09c;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_language;
extern PyObject *const_tuple_str_plain_EUCKRDistributionAnalysis_tuple;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_CP949Prober;
extern PyObject *const_str_plain_mbcharsetprober;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_MultiByteCharSetProber;
static PyObject *const_str_digest_2ce6ea2b59384b13e6f505494b1c5d22;
extern PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_CP949;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_reset;
static PyObject *const_tuple_str_plain_CP949_SM_MODEL_tuple;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_c6146fb5804520439dbd0cb5e9733b76;
extern PyObject *const_str_plain_CodingStateMachine;
extern PyObject *const_str_plain_coding_sm;
static PyObject *const_str_digest_b66e42f86ed17db554f714d158393eaa;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_str_plain_CodingStateMachine_tuple;
extern PyObject *const_str_plain_distribution_analyzer;
extern PyObject *const_str_plain_EUCKRDistributionAnalysis;
extern PyObject *const_str_plain_chardistribution;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_chardet;
extern PyObject *const_tuple_0ed6b838124a75931ff61938836fbd01_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_codingstatemachine;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_digest_7fd82834d96ceab5db046c046b089f31;
static PyObject *const_str_digest_8907a28ca353f469ea289e2b476c9d08;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_4c767ff705a7a723c486dea61c5cb09c = UNSTREAM_STRING( &constant_bin[ 33517 ], 20, 0 );
    const_str_digest_2ce6ea2b59384b13e6f505494b1c5d22 = UNSTREAM_STRING( &constant_bin[ 33537 ], 20, 0 );
    const_tuple_str_plain_CP949_SM_MODEL_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_CP949_SM_MODEL_tuple, 0, const_str_plain_CP949_SM_MODEL ); Py_INCREF( const_str_plain_CP949_SM_MODEL );
    const_str_digest_c6146fb5804520439dbd0cb5e9733b76 = UNSTREAM_STRING( &constant_bin[ 33557 ], 19, 0 );
    const_str_digest_b66e42f86ed17db554f714d158393eaa = UNSTREAM_STRING( &constant_bin[ 33576 ], 100, 0 );
    const_str_digest_7fd82834d96ceab5db046c046b089f31 = UNSTREAM_STRING( &constant_bin[ 33676 ], 24, 0 );
    const_str_digest_8907a28ca353f469ea289e2b476c9d08 = UNSTREAM_STRING( &constant_bin[ 33700 ], 28, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$cp949prober( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_30df84df15e6f5238bea1fae00430a18;
static PyCodeObject *codeobj_5c00a8f979edcefcd40ecd2bc756f663;
static PyCodeObject *codeobj_fbcb8ef815247f7ffa6dd38a05278906;
static PyCodeObject *codeobj_acbd240e61e98093c29752b3e4dd32a6;
static PyCodeObject *codeobj_8717dcc76e32e2e29d37fbd58467eff1;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_b66e42f86ed17db554f714d158393eaa;
    codeobj_30df84df15e6f5238bea1fae00430a18 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_8907a28ca353f469ea289e2b476c9d08, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_5c00a8f979edcefcd40ecd2bc756f663 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CP949Prober, 34, const_tuple_0ed6b838124a75931ff61938836fbd01_tuple, 0, 0, CO_NOFREE );
    codeobj_fbcb8ef815247f7ffa6dd38a05278906 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 35, const_tuple_str_plain_self_str_plain___class___tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_acbd240e61e98093c29752b3e4dd32a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_charset_name, 43, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8717dcc76e32e2e29d37fbd58467eff1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_language, 47, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_chardet$cp949prober$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_chardet$cp949prober$$$function_2_charset_name(  );


static PyObject *MAKE_FUNCTION_chardet$cp949prober$$$function_3_language(  );


// The module function definitions.
static PyObject *impl_chardet$cp949prober$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_object_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_fbcb8ef815247f7ffa6dd38a05278906 = NULL;

    struct Nuitka_FrameObject *frame_fbcb8ef815247f7ffa6dd38a05278906;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fbcb8ef815247f7ffa6dd38a05278906, codeobj_fbcb8ef815247f7ffa6dd38a05278906, module_chardet$cp949prober, sizeof(void *)+sizeof(void *) );
    frame_fbcb8ef815247f7ffa6dd38a05278906 = cache_frame_fbcb8ef815247f7ffa6dd38a05278906;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fbcb8ef815247f7ffa6dd38a05278906 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fbcb8ef815247f7ffa6dd38a05278906 ) == 2 ); // Frame stack

    // Framed code:
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$cp949prober, (Nuitka_StringObject *)const_str_plain_CP949Prober );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CP949Prober );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CP949Prober" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    CHECK_OBJECT( tmp_object_name_1 );
    tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    frame_fbcb8ef815247f7ffa6dd38a05278906->m_frame.f_lineno = 36;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain___init__ );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$cp949prober, (Nuitka_StringObject *)const_str_plain_CodingStateMachine );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CodingStateMachine );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CodingStateMachine" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$cp949prober, (Nuitka_StringObject *)const_str_plain_CP949_SM_MODEL );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CP949_SM_MODEL );
    }

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CP949_SM_MODEL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    frame_fbcb8ef815247f7ffa6dd38a05278906->m_frame.f_lineno = 37;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_coding_sm, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 37;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_chardet$cp949prober, (Nuitka_StringObject *)const_str_plain_EUCKRDistributionAnalysis );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EUCKRDistributionAnalysis );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EUCKRDistributionAnalysis" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    frame_fbcb8ef815247f7ffa6dd38a05278906->m_frame.f_lineno = 40;
    tmp_assattr_name_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_distribution_analyzer, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 40;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_called_instance_2 = par_self;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    frame_fbcb8ef815247f7ffa6dd38a05278906->m_frame.f_lineno = 41;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_reset );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fbcb8ef815247f7ffa6dd38a05278906 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fbcb8ef815247f7ffa6dd38a05278906 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fbcb8ef815247f7ffa6dd38a05278906, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fbcb8ef815247f7ffa6dd38a05278906->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fbcb8ef815247f7ffa6dd38a05278906, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fbcb8ef815247f7ffa6dd38a05278906,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame.
    if ( frame_fbcb8ef815247f7ffa6dd38a05278906 == cache_frame_fbcb8ef815247f7ffa6dd38a05278906 )
    {
        Py_DECREF( frame_fbcb8ef815247f7ffa6dd38a05278906 );
    }
    cache_frame_fbcb8ef815247f7ffa6dd38a05278906 = NULL;

    assertFrameObject( frame_fbcb8ef815247f7ffa6dd38a05278906 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$cp949prober$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$cp949prober$$$function_1___init__ );
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


static PyObject *impl_chardet$cp949prober$$$function_2_charset_name( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = const_str_plain_CP949;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$cp949prober$$$function_2_charset_name );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$cp949prober$$$function_2_charset_name );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_chardet$cp949prober$$$function_3_language( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = const_str_plain_Korean;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$cp949prober$$$function_3_language );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$cp949prober$$$function_3_language );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_chardet$cp949prober$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$cp949prober$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_2ce6ea2b59384b13e6f505494b1c5d22,
#endif
        codeobj_fbcb8ef815247f7ffa6dd38a05278906,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_chardet$cp949prober,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$cp949prober$$$function_2_charset_name(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$cp949prober$$$function_2_charset_name,
        const_str_plain_charset_name,
#if PYTHON_VERSION >= 330
        const_str_digest_7fd82834d96ceab5db046c046b089f31,
#endif
        codeobj_acbd240e61e98093c29752b3e4dd32a6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_chardet$cp949prober,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$cp949prober$$$function_3_language(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$cp949prober$$$function_3_language,
        const_str_plain_language,
#if PYTHON_VERSION >= 330
        const_str_digest_4c767ff705a7a723c486dea61c5cb09c,
#endif
        codeobj_8717dcc76e32e2e29d37fbd58467eff1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_chardet$cp949prober,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$cp949prober =
{
    PyModuleDef_HEAD_INIT,
    "chardet.cp949prober",   /* m_name */
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

MOD_INIT_DECL( chardet$cp949prober )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_chardet$cp949prober );
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
    puts("chardet.cp949prober: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.cp949prober: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initchardet$cp949prober" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$cp949prober = Py_InitModule4(
        "chardet.cp949prober",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_chardet$cp949prober = PyModule_Create( &mdef_chardet$cp949prober );
#endif

    moduledict_chardet$cp949prober = MODULE_DICT( module_chardet$cp949prober );

    CHECK_OBJECT( module_chardet$cp949prober );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_c6146fb5804520439dbd0cb5e9733b76, module_chardet$cp949prober );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_chardet$cp949prober, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_chardet$cp949prober, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_chardet$cp949prober, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var_charset_name = NULL;
    PyObject *outline_0_var_language = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
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
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_key_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_5c00a8f979edcefcd40ecd2bc756f663_2 = NULL;

    struct Nuitka_FrameObject *frame_5c00a8f979edcefcd40ecd2bc756f663_2;

    struct Nuitka_FrameObject *frame_30df84df15e6f5238bea1fae00430a18;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    // Locals dictionary setup.
PyObject *locals_dict_1 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$cp949prober, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_b66e42f86ed17db554f714d158393eaa;
    UPDATE_STRING_DICT0( moduledict_chardet$cp949prober, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_chardet$cp949prober, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_30df84df15e6f5238bea1fae00430a18 = MAKE_MODULE_FRAME( codeobj_30df84df15e6f5238bea1fae00430a18, module_chardet$cp949prober );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_30df84df15e6f5238bea1fae00430a18 );
    assert( Py_REFCNT( frame_30df84df15e6f5238bea1fae00430a18 ) == 2 );

    // Framed code:
    frame_30df84df15e6f5238bea1fae00430a18->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_c6146fb5804520439dbd0cb5e9733b76;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_30df84df15e6f5238bea1fae00430a18->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_chardet$cp949prober, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$cp949prober, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_chardet;
    UPDATE_STRING_DICT0( moduledict_chardet$cp949prober, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_plain_chardistribution;
    tmp_globals_name_1 = (PyObject *)moduledict_chardet$cp949prober;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_EUCKRDistributionAnalysis_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_30df84df15e6f5238bea1fae00430a18->m_frame.f_lineno = 28;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_EUCKRDistributionAnalysis );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$cp949prober, (Nuitka_StringObject *)const_str_plain_EUCKRDistributionAnalysis, tmp_assign_source_7 );
    tmp_name_name_2 = const_str_plain_codingstatemachine;
    tmp_globals_name_2 = (PyObject *)moduledict_chardet$cp949prober;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_CodingStateMachine_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_30df84df15e6f5238bea1fae00430a18->m_frame.f_lineno = 29;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_CodingStateMachine );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$cp949prober, (Nuitka_StringObject *)const_str_plain_CodingStateMachine, tmp_assign_source_8 );
    tmp_name_name_3 = const_str_plain_mbcharsetprober;
    tmp_globals_name_3 = (PyObject *)moduledict_chardet$cp949prober;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_MultiByteCharSetProber_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_30df84df15e6f5238bea1fae00430a18->m_frame.f_lineno = 30;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_MultiByteCharSetProber );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$cp949prober, (Nuitka_StringObject *)const_str_plain_MultiByteCharSetProber, tmp_assign_source_9 );
    tmp_name_name_4 = const_str_plain_mbcssm;
    tmp_globals_name_4 = (PyObject *)moduledict_chardet$cp949prober;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_CP949_SM_MODEL_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_30df84df15e6f5238bea1fae00430a18->m_frame.f_lineno = 31;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_CP949_SM_MODEL );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$cp949prober, (Nuitka_StringObject *)const_str_plain_CP949_SM_MODEL, tmp_assign_source_10 );
    // Tried code:
    tmp_assign_source_11 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_chardet$cp949prober, (Nuitka_StringObject *)const_str_plain_MultiByteCharSetProber );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MultiByteCharSetProber );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MultiByteCharSetProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;

        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_11, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_11;

    tmp_assign_source_12 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_12;

    tmp_compare_left_1 = const_str_plain_metaclass;
    tmp_compare_right_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
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


        exception_lineno = 34;

        goto try_except_handler_1;
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


        exception_lineno = 34;

        goto try_except_handler_1;
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


        exception_lineno = 34;

        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_13 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 34;

        goto try_except_handler_1;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_13;

    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_1;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_1;
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
    tmp_source_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_CP949Prober;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_30df84df15e6f5238bea1fae00430a18->m_frame.f_lineno = 34;
    tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_14 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_14;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_1);
    locals_dict_1 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_16 = const_str_digest_c6146fb5804520439dbd0cb5e9733b76;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_16 );
    outline_0_var___module__ = tmp_assign_source_16;

    tmp_assign_source_17 = const_str_plain_CP949Prober;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_17 );
    outline_0_var___qualname__ = tmp_assign_source_17;

    tmp_assign_source_18 = MAKE_FUNCTION_chardet$cp949prober$$$function_1___init__(  );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_18;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5c00a8f979edcefcd40ecd2bc756f663_2, codeobj_5c00a8f979edcefcd40ecd2bc756f663, module_chardet$cp949prober, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5c00a8f979edcefcd40ecd2bc756f663_2 = cache_frame_5c00a8f979edcefcd40ecd2bc756f663_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5c00a8f979edcefcd40ecd2bc756f663_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5c00a8f979edcefcd40ecd2bc756f663_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_3 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_3 = MAKE_FUNCTION_chardet$cp949prober$$$function_2_charset_name(  );
    frame_5c00a8f979edcefcd40ecd2bc756f663_2->m_frame.f_lineno = 43;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_2 = "NoooNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_charset_name == NULL );
    outline_0_var_charset_name = tmp_assign_source_19;

    tmp_called_name_4 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_4 = MAKE_FUNCTION_chardet$cp949prober$$$function_3_language(  );
    frame_5c00a8f979edcefcd40ecd2bc756f663_2->m_frame.f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_2 = "NooooN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_language == NULL );
    outline_0_var_language = tmp_assign_source_20;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c00a8f979edcefcd40ecd2bc756f663_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c00a8f979edcefcd40ecd2bc756f663_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5c00a8f979edcefcd40ecd2bc756f663_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5c00a8f979edcefcd40ecd2bc756f663_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5c00a8f979edcefcd40ecd2bc756f663_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5c00a8f979edcefcd40ecd2bc756f663_2,
        type_description_2,
        NULL,
        outline_0_var___qualname__,
        outline_0_var___module__,
        outline_0_var___init__,
        outline_0_var_charset_name,
        outline_0_var_language
    );


    // Release cached frame.
    if ( frame_5c00a8f979edcefcd40ecd2bc756f663_2 == cache_frame_5c00a8f979edcefcd40ecd2bc756f663_2 )
    {
        Py_DECREF( frame_5c00a8f979edcefcd40ecd2bc756f663_2 );
    }
    cache_frame_5c00a8f979edcefcd40ecd2bc756f663_2 = NULL;

    assertFrameObject( frame_5c00a8f979edcefcd40ecd2bc756f663_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_2;
    skip_nested_handling_1:;
    tmp_called_name_5 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_5 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_3 = const_str_plain_CP949Prober;
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

        exception_lineno = 34;

        goto try_except_handler_2;
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

        exception_lineno = 34;

        goto try_except_handler_2;
    }
    if ( outline_0_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain___init__,
            outline_0_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain___init__
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

        exception_lineno = 34;

        goto try_except_handler_2;
    }
    if ( outline_0_var_charset_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_charset_name,
            outline_0_var_charset_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_charset_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_charset_name
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

        exception_lineno = 34;

        goto try_except_handler_2;
    }
    if ( outline_0_var_language != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_language,
            outline_0_var_language
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_language
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_language
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

        exception_lineno = 34;

        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_30df84df15e6f5238bea1fae00430a18->m_frame.f_lineno = 34;
    tmp_assign_source_21 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_2;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_21;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$cp949prober );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    Py_XDECREF( outline_0_var_charset_name );
    outline_0_var_charset_name = NULL;

    Py_XDECREF( outline_0_var_language );
    outline_0_var_language = NULL;

    goto outline_result_1;
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

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    Py_XDECREF( outline_0_var_charset_name );
    outline_0_var_charset_name = NULL;

    Py_XDECREF( outline_0_var_language );
    outline_0_var_language = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$cp949prober );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 34;
    goto try_except_handler_1;
    outline_result_1:;
    tmp_assign_source_15 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_chardet$cp949prober, (Nuitka_StringObject *)const_str_plain_CP949Prober, tmp_assign_source_15 );
    goto try_end_1;
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_30df84df15e6f5238bea1fae00430a18 );
#endif
    popFrameStack();

    assertFrameObject( frame_30df84df15e6f5238bea1fae00430a18 );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_30df84df15e6f5238bea1fae00430a18 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_30df84df15e6f5238bea1fae00430a18, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_30df84df15e6f5238bea1fae00430a18->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_30df84df15e6f5238bea1fae00430a18, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;


    return MOD_RETURN_VALUE( module_chardet$cp949prober );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
