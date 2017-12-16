/* Generated code for Python source for module 'googlemaps.exceptions'
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

/* The _module_googlemaps$exceptions is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_googlemaps$exceptions;
PyDictObject *moduledict_googlemaps$exceptions;

/* The module constants used, if any. */
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_de4e3a23c90727de04be914f7ce1a913;
static PyObject *const_tuple_str_plain_self_str_plain_base_exception_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain___str__;
extern PyObject *const_str_plain__RetriableRequest;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_status;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_3d7d45af85680765f2d4b8ae30b105c9;
extern PyObject *const_str_digest_165f2d5388d0499fffa9a0c8b62aae64;
static PyObject *const_str_digest_2a5e2e86b1c8afd70db1855887b5e552;
extern PyObject *const_str_plain_googlemaps;
static PyObject *const_str_digest_166f392afc41e242efe15b8de6b27134;
extern PyObject *const_int_0;
static PyObject *const_str_digest_bf9bd0f169dd2f01f8e4eef1ee174258;
static PyObject *const_str_digest_beb0221ec1dc7fa89594a677aa129316;
static PyObject *const_str_digest_146b1672991952fc06d88f27226c7cfa;
static PyObject *const_str_digest_f5055f192c6e7a08bb770035464d19e3;
extern PyObject *const_str_plain_TransportError;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_311a46b142d08dc8ed0c73be71188b5b;
static PyObject *const_str_digest_222267f1febf39c1ef1e61ba01762676;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_message;
static PyObject *const_str_digest_7a5cd5beac7547f7f9e3f3a48e9a8af0;
extern PyObject *const_str_plain_Timeout;
static PyObject *const_tuple_str_plain_self_str_plain_status_str_plain_message_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_status_code_tuple;
static PyObject *const_str_digest_6722892e7d2bdd01a7507ca428638a58;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_base_exception;
extern PyObject *const_str_plain_ApiError;
static PyObject *const_str_digest_bcd9048f598c7d78e57e7d1cfbc9dcb0;
extern PyObject *const_str_plain_HTTPError;
extern PyObject *const_str_plain_status_code;
static PyObject *const_str_digest_af6c054b1124e79ab4b6b6b3740f381e;
extern PyObject *const_str_plain___loader__;
static PyObject *const_str_digest_2da3a64aad7e8b0e124a18b7aa26f497;
static PyObject *const_str_digest_494fccc16b0f92d54e4f914b122175e5;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_e4dfa43e313a76eecd99cabed41c4a3e;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_de4e3a23c90727de04be914f7ce1a913 = UNSTREAM_STRING( &constant_bin[ 622342 ], 14, 0 );
    const_tuple_str_plain_self_str_plain_base_exception_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_base_exception_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_base_exception = UNSTREAM_STRING( &constant_bin[ 622356 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_base_exception_tuple, 1, const_str_plain_base_exception ); Py_INCREF( const_str_plain_base_exception );
    const_str_digest_3d7d45af85680765f2d4b8ae30b105c9 = UNSTREAM_STRING( &constant_bin[ 622370 ], 23, 0 );
    const_str_digest_2a5e2e86b1c8afd70db1855887b5e552 = UNSTREAM_STRING( &constant_bin[ 622393 ], 22, 0 );
    const_str_digest_166f392afc41e242efe15b8de6b27134 = UNSTREAM_STRING( &constant_bin[ 622415 ], 17, 0 );
    const_str_digest_bf9bd0f169dd2f01f8e4eef1ee174258 = UNSTREAM_STRING( &constant_bin[ 622432 ], 7, 0 );
    const_str_digest_beb0221ec1dc7fa89594a677aa129316 = UNSTREAM_STRING( &constant_bin[ 622439 ], 51, 0 );
    const_str_digest_146b1672991952fc06d88f27226c7cfa = UNSTREAM_STRING( &constant_bin[ 622490 ], 42, 0 );
    const_str_digest_f5055f192c6e7a08bb770035464d19e3 = UNSTREAM_STRING( &constant_bin[ 622532 ], 26, 0 );
    const_str_digest_311a46b142d08dc8ed0c73be71188b5b = UNSTREAM_STRING( &constant_bin[ 622558 ], 22, 0 );
    const_str_digest_222267f1febf39c1ef1e61ba01762676 = UNSTREAM_STRING( &constant_bin[ 622580 ], 18, 0 );
    const_str_digest_7a5cd5beac7547f7f9e3f3a48e9a8af0 = UNSTREAM_STRING( &constant_bin[ 622598 ], 34, 0 );
    const_tuple_str_plain_self_str_plain_status_str_plain_message_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_status_str_plain_message_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_status_str_plain_message_tuple, 1, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_status_str_plain_message_tuple, 2, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_tuple_str_plain_self_str_plain_status_code_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_status_code_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_status_code_tuple, 1, const_str_plain_status_code ); Py_INCREF( const_str_plain_status_code );
    const_str_digest_6722892e7d2bdd01a7507ca428638a58 = UNSTREAM_STRING( &constant_bin[ 622632 ], 17, 0 );
    const_str_digest_bcd9048f598c7d78e57e7d1cfbc9dcb0 = UNSTREAM_STRING( &constant_bin[ 622649 ], 63, 0 );
    const_str_digest_af6c054b1124e79ab4b6b6b3740f381e = UNSTREAM_STRING( &constant_bin[ 622712 ], 16, 0 );
    const_str_digest_2da3a64aad7e8b0e124a18b7aa26f497 = UNSTREAM_STRING( &constant_bin[ 622728 ], 30, 0 );
    const_str_digest_494fccc16b0f92d54e4f914b122175e5 = UNSTREAM_STRING( &constant_bin[ 622758 ], 57, 0 );
    const_str_digest_e4dfa43e313a76eecd99cabed41c4a3e = UNSTREAM_STRING( &constant_bin[ 622815 ], 102, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_googlemaps$exceptions( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_ad6e3b18bac428dc7425202f86732446;
static PyCodeObject *codeobj_0baa817fdb66ae6f7424d1b8d2ca802d;
static PyCodeObject *codeobj_941b619c3378f76fb7fea5d6680f49a2;
static PyCodeObject *codeobj_12398d2f19ceb63f2bc804380f5bd5e8;
static PyCodeObject *codeobj_f89a47864fdd0dd6f7d8eeca750bfdb9;
static PyCodeObject *codeobj_0bf202eba5b096f3d670862793d941e3;
static PyCodeObject *codeobj_f6e40d242b7cb368be71a3badabcc447;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_e4dfa43e313a76eecd99cabed41c4a3e;
    codeobj_ad6e3b18bac428dc7425202f86732446 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_2da3a64aad7e8b0e124a18b7aa26f497, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_0baa817fdb66ae6f7424d1b8d2ca802d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 24, const_tuple_str_plain_self_str_plain_status_str_plain_message_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_941b619c3378f76fb7fea5d6680f49a2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 37, const_tuple_str_plain_self_str_plain_base_exception_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_12398d2f19ceb63f2bc804380f5bd5e8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 48, const_tuple_str_plain_self_str_plain_status_code_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f89a47864fdd0dd6f7d8eeca750bfdb9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 28, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0bf202eba5b096f3d670862793d941e3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 40, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f6e40d242b7cb368be71a3badabcc447 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 51, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_googlemaps$exceptions$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_googlemaps$exceptions$$$function_2___str__(  );


static PyObject *MAKE_FUNCTION_googlemaps$exceptions$$$function_3___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_googlemaps$exceptions$$$function_4___str__(  );


static PyObject *MAKE_FUNCTION_googlemaps$exceptions$$$function_5___init__(  );


static PyObject *MAKE_FUNCTION_googlemaps$exceptions$$$function_6___str__(  );


// The module function definitions.
static PyObject *impl_googlemaps$exceptions$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_status = python_pars[ 1 ];
    PyObject *par_message = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_0baa817fdb66ae6f7424d1b8d2ca802d = NULL;

    struct Nuitka_FrameObject *frame_0baa817fdb66ae6f7424d1b8d2ca802d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0baa817fdb66ae6f7424d1b8d2ca802d, codeobj_0baa817fdb66ae6f7424d1b8d2ca802d, module_googlemaps$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0baa817fdb66ae6f7424d1b8d2ca802d = cache_frame_0baa817fdb66ae6f7424d1b8d2ca802d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0baa817fdb66ae6f7424d1b8d2ca802d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0baa817fdb66ae6f7424d1b8d2ca802d ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_status;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_status, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_message;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_message, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0baa817fdb66ae6f7424d1b8d2ca802d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0baa817fdb66ae6f7424d1b8d2ca802d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0baa817fdb66ae6f7424d1b8d2ca802d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0baa817fdb66ae6f7424d1b8d2ca802d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0baa817fdb66ae6f7424d1b8d2ca802d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0baa817fdb66ae6f7424d1b8d2ca802d,
        type_description_1,
        par_self,
        par_status,
        par_message
    );


    // Release cached frame.
    if ( frame_0baa817fdb66ae6f7424d1b8d2ca802d == cache_frame_0baa817fdb66ae6f7424d1b8d2ca802d )
    {
        Py_DECREF( frame_0baa817fdb66ae6f7424d1b8d2ca802d );
    }
    cache_frame_0baa817fdb66ae6f7424d1b8d2ca802d = NULL;

    assertFrameObject( frame_0baa817fdb66ae6f7424d1b8d2ca802d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( googlemaps$exceptions$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_status );
    par_status = NULL;

    Py_XDECREF( par_message );
    par_message = NULL;

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

    Py_XDECREF( par_status );
    par_status = NULL;

    Py_XDECREF( par_message );
    par_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( googlemaps$exceptions$$$function_1___init__ );
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


static PyObject *impl_googlemaps$exceptions$$$function_2___str__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_f89a47864fdd0dd6f7d8eeca750bfdb9 = NULL;

    struct Nuitka_FrameObject *frame_f89a47864fdd0dd6f7d8eeca750bfdb9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f89a47864fdd0dd6f7d8eeca750bfdb9, codeobj_f89a47864fdd0dd6f7d8eeca750bfdb9, module_googlemaps$exceptions, sizeof(void *) );
    frame_f89a47864fdd0dd6f7d8eeca750bfdb9 = cache_frame_f89a47864fdd0dd6f7d8eeca750bfdb9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f89a47864fdd0dd6f7d8eeca750bfdb9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f89a47864fdd0dd6f7d8eeca750bfdb9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_message );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
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
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 30;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_status );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_left_name_1 = const_str_digest_bf9bd0f169dd2f01f8e4eef1ee174258;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_status );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 32;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_message );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 32;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f89a47864fdd0dd6f7d8eeca750bfdb9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f89a47864fdd0dd6f7d8eeca750bfdb9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f89a47864fdd0dd6f7d8eeca750bfdb9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f89a47864fdd0dd6f7d8eeca750bfdb9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f89a47864fdd0dd6f7d8eeca750bfdb9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f89a47864fdd0dd6f7d8eeca750bfdb9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f89a47864fdd0dd6f7d8eeca750bfdb9,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_f89a47864fdd0dd6f7d8eeca750bfdb9 == cache_frame_f89a47864fdd0dd6f7d8eeca750bfdb9 )
    {
        Py_DECREF( frame_f89a47864fdd0dd6f7d8eeca750bfdb9 );
    }
    cache_frame_f89a47864fdd0dd6f7d8eeca750bfdb9 = NULL;

    assertFrameObject( frame_f89a47864fdd0dd6f7d8eeca750bfdb9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( googlemaps$exceptions$$$function_2___str__ );
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
    NUITKA_CANNOT_GET_HERE( googlemaps$exceptions$$$function_2___str__ );
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


static PyObject *impl_googlemaps$exceptions$$$function_3___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_base_exception = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_941b619c3378f76fb7fea5d6680f49a2 = NULL;

    struct Nuitka_FrameObject *frame_941b619c3378f76fb7fea5d6680f49a2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_941b619c3378f76fb7fea5d6680f49a2, codeobj_941b619c3378f76fb7fea5d6680f49a2, module_googlemaps$exceptions, sizeof(void *)+sizeof(void *) );
    frame_941b619c3378f76fb7fea5d6680f49a2 = cache_frame_941b619c3378f76fb7fea5d6680f49a2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_941b619c3378f76fb7fea5d6680f49a2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_941b619c3378f76fb7fea5d6680f49a2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_base_exception;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_base_exception, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_941b619c3378f76fb7fea5d6680f49a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_941b619c3378f76fb7fea5d6680f49a2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_941b619c3378f76fb7fea5d6680f49a2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_941b619c3378f76fb7fea5d6680f49a2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_941b619c3378f76fb7fea5d6680f49a2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_941b619c3378f76fb7fea5d6680f49a2,
        type_description_1,
        par_self,
        par_base_exception
    );


    // Release cached frame.
    if ( frame_941b619c3378f76fb7fea5d6680f49a2 == cache_frame_941b619c3378f76fb7fea5d6680f49a2 )
    {
        Py_DECREF( frame_941b619c3378f76fb7fea5d6680f49a2 );
    }
    cache_frame_941b619c3378f76fb7fea5d6680f49a2 = NULL;

    assertFrameObject( frame_941b619c3378f76fb7fea5d6680f49a2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( googlemaps$exceptions$$$function_3___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_base_exception );
    par_base_exception = NULL;

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

    Py_XDECREF( par_base_exception );
    par_base_exception = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( googlemaps$exceptions$$$function_3___init__ );
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


static PyObject *impl_googlemaps$exceptions$$$function_4___str__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_unicode_arg_1;
    static struct Nuitka_FrameObject *cache_frame_0bf202eba5b096f3d670862793d941e3 = NULL;

    struct Nuitka_FrameObject *frame_0bf202eba5b096f3d670862793d941e3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0bf202eba5b096f3d670862793d941e3, codeobj_0bf202eba5b096f3d670862793d941e3, module_googlemaps$exceptions, sizeof(void *) );
    frame_0bf202eba5b096f3d670862793d941e3 = cache_frame_0bf202eba5b096f3d670862793d941e3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0bf202eba5b096f3d670862793d941e3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0bf202eba5b096f3d670862793d941e3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_base_exception );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 41;
        type_description_1 = "o";
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
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_base_exception );
    if ( tmp_unicode_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = PyObject_Unicode( tmp_unicode_arg_1 );
    Py_DECREF( tmp_unicode_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0bf202eba5b096f3d670862793d941e3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0bf202eba5b096f3d670862793d941e3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0bf202eba5b096f3d670862793d941e3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0bf202eba5b096f3d670862793d941e3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0bf202eba5b096f3d670862793d941e3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0bf202eba5b096f3d670862793d941e3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0bf202eba5b096f3d670862793d941e3,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_0bf202eba5b096f3d670862793d941e3 == cache_frame_0bf202eba5b096f3d670862793d941e3 )
    {
        Py_DECREF( frame_0bf202eba5b096f3d670862793d941e3 );
    }
    cache_frame_0bf202eba5b096f3d670862793d941e3 = NULL;

    assertFrameObject( frame_0bf202eba5b096f3d670862793d941e3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = const_str_digest_f5055f192c6e7a08bb770035464d19e3;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( googlemaps$exceptions$$$function_4___str__ );
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
    NUITKA_CANNOT_GET_HERE( googlemaps$exceptions$$$function_4___str__ );
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


static PyObject *impl_googlemaps$exceptions$$$function_5___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_status_code = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_12398d2f19ceb63f2bc804380f5bd5e8 = NULL;

    struct Nuitka_FrameObject *frame_12398d2f19ceb63f2bc804380f5bd5e8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_12398d2f19ceb63f2bc804380f5bd5e8, codeobj_12398d2f19ceb63f2bc804380f5bd5e8, module_googlemaps$exceptions, sizeof(void *)+sizeof(void *) );
    frame_12398d2f19ceb63f2bc804380f5bd5e8 = cache_frame_12398d2f19ceb63f2bc804380f5bd5e8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_12398d2f19ceb63f2bc804380f5bd5e8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_12398d2f19ceb63f2bc804380f5bd5e8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_status_code;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_status_code, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_12398d2f19ceb63f2bc804380f5bd5e8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_12398d2f19ceb63f2bc804380f5bd5e8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_12398d2f19ceb63f2bc804380f5bd5e8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_12398d2f19ceb63f2bc804380f5bd5e8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_12398d2f19ceb63f2bc804380f5bd5e8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_12398d2f19ceb63f2bc804380f5bd5e8,
        type_description_1,
        par_self,
        par_status_code
    );


    // Release cached frame.
    if ( frame_12398d2f19ceb63f2bc804380f5bd5e8 == cache_frame_12398d2f19ceb63f2bc804380f5bd5e8 )
    {
        Py_DECREF( frame_12398d2f19ceb63f2bc804380f5bd5e8 );
    }
    cache_frame_12398d2f19ceb63f2bc804380f5bd5e8 = NULL;

    assertFrameObject( frame_12398d2f19ceb63f2bc804380f5bd5e8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( googlemaps$exceptions$$$function_5___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_status_code );
    par_status_code = NULL;

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

    Py_XDECREF( par_status_code );
    par_status_code = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( googlemaps$exceptions$$$function_5___init__ );
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


static PyObject *impl_googlemaps$exceptions$$$function_6___str__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_f6e40d242b7cb368be71a3badabcc447 = NULL;

    struct Nuitka_FrameObject *frame_f6e40d242b7cb368be71a3badabcc447;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f6e40d242b7cb368be71a3badabcc447, codeobj_f6e40d242b7cb368be71a3badabcc447, module_googlemaps$exceptions, sizeof(void *) );
    frame_f6e40d242b7cb368be71a3badabcc447 = cache_frame_f6e40d242b7cb368be71a3badabcc447;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f6e40d242b7cb368be71a3badabcc447 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f6e40d242b7cb368be71a3badabcc447 ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = const_str_digest_de4e3a23c90727de04be914f7ce1a913;
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_status_code );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f6e40d242b7cb368be71a3badabcc447 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f6e40d242b7cb368be71a3badabcc447 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f6e40d242b7cb368be71a3badabcc447 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f6e40d242b7cb368be71a3badabcc447, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f6e40d242b7cb368be71a3badabcc447->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f6e40d242b7cb368be71a3badabcc447, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f6e40d242b7cb368be71a3badabcc447,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_f6e40d242b7cb368be71a3badabcc447 == cache_frame_f6e40d242b7cb368be71a3badabcc447 )
    {
        Py_DECREF( frame_f6e40d242b7cb368be71a3badabcc447 );
    }
    cache_frame_f6e40d242b7cb368be71a3badabcc447 = NULL;

    assertFrameObject( frame_f6e40d242b7cb368be71a3badabcc447 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( googlemaps$exceptions$$$function_6___str__ );
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
    NUITKA_CANNOT_GET_HERE( googlemaps$exceptions$$$function_6___str__ );
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



static PyObject *MAKE_FUNCTION_googlemaps$exceptions$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_googlemaps$exceptions$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_6722892e7d2bdd01a7507ca428638a58,
#endif
        codeobj_0baa817fdb66ae6f7424d1b8d2ca802d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_googlemaps$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_googlemaps$exceptions$$$function_2___str__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_googlemaps$exceptions$$$function_2___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 330
        const_str_digest_af6c054b1124e79ab4b6b6b3740f381e,
#endif
        codeobj_f89a47864fdd0dd6f7d8eeca750bfdb9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_googlemaps$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_googlemaps$exceptions$$$function_3___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_googlemaps$exceptions$$$function_3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_3d7d45af85680765f2d4b8ae30b105c9,
#endif
        codeobj_941b619c3378f76fb7fea5d6680f49a2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_googlemaps$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_googlemaps$exceptions$$$function_4___str__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_googlemaps$exceptions$$$function_4___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 330
        const_str_digest_311a46b142d08dc8ed0c73be71188b5b,
#endif
        codeobj_0bf202eba5b096f3d670862793d941e3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_googlemaps$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_googlemaps$exceptions$$$function_5___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_googlemaps$exceptions$$$function_5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_222267f1febf39c1ef1e61ba01762676,
#endif
        codeobj_12398d2f19ceb63f2bc804380f5bd5e8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_googlemaps$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_googlemaps$exceptions$$$function_6___str__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_googlemaps$exceptions$$$function_6___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 330
        const_str_digest_166f392afc41e242efe15b8de6b27134,
#endif
        codeobj_f6e40d242b7cb368be71a3badabcc447,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_googlemaps$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_googlemaps$exceptions =
{
    PyModuleDef_HEAD_INIT,
    "googlemaps.exceptions",   /* m_name */
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

MOD_INIT_DECL( googlemaps$exceptions )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_googlemaps$exceptions );
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
    puts("googlemaps.exceptions: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("googlemaps.exceptions: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initgooglemaps$exceptions" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_googlemaps$exceptions = Py_InitModule4(
        "googlemaps.exceptions",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_googlemaps$exceptions = PyModule_Create( &mdef_googlemaps$exceptions );
#endif

    moduledict_googlemaps$exceptions = MODULE_DICT( module_googlemaps$exceptions );

    CHECK_OBJECT( module_googlemaps$exceptions );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_165f2d5388d0499fffa9a0c8b62aae64, module_googlemaps$exceptions );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_googlemaps$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_googlemaps$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_googlemaps$exceptions, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var___str__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_1_var___qualname__ = NULL;
    PyObject *outline_1_var___module__ = NULL;
    PyObject *outline_1_var___doc__ = NULL;
    PyObject *outline_1_var___init__ = NULL;
    PyObject *outline_1_var___str__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_2_var___qualname__ = NULL;
    PyObject *outline_2_var___module__ = NULL;
    PyObject *outline_2_var___doc__ = NULL;
    PyObject *outline_2_var___init__ = NULL;
    PyObject *outline_2_var___str__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_3_var___qualname__ = NULL;
    PyObject *outline_3_var___module__ = NULL;
    PyObject *outline_3_var___doc__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_4_var___qualname__ = NULL;
    PyObject *outline_4_var___module__ = NULL;
    PyObject *outline_4_var___doc__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
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
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
    PyObject *tmp_args_name_7;
    PyObject *tmp_args_name_8;
    PyObject *tmp_args_name_9;
    PyObject *tmp_args_name_10;
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
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_assign_source_57;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_bases_name_4;
    PyObject *tmp_bases_name_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
    int tmp_cmp_In_8;
    int tmp_cmp_In_9;
    int tmp_cmp_In_10;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_attr_3;
    PyObject *tmp_hasattr_attr_4;
    PyObject *tmp_hasattr_attr_5;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_hasattr_source_3;
    PyObject *tmp_hasattr_source_4;
    PyObject *tmp_hasattr_source_5;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_kw_name_7;
    PyObject *tmp_kw_name_8;
    PyObject *tmp_kw_name_9;
    PyObject *tmp_kw_name_10;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_metaclass_name_3;
    PyObject *tmp_metaclass_name_4;
    PyObject *tmp_metaclass_name_5;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
    PyObject *tmp_outline_return_value_5;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_tuple_element_10;
    PyObject *tmp_tuple_element_11;
    PyObject *tmp_tuple_element_12;
    PyObject *tmp_tuple_element_13;
    PyObject *tmp_tuple_element_14;
    PyObject *tmp_tuple_element_15;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_type_arg_4;
    PyObject *tmp_type_arg_5;
    struct Nuitka_FrameObject *frame_ad6e3b18bac428dc7425202f86732446;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    tmp_outline_return_value_5 = NULL;
    // Locals dictionary setup.
PyObject *locals_dict_1 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_2 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_3 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_4 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_5 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = const_str_digest_bcd9048f598c7d78e57e7d1cfbc9dcb0;
    UPDATE_STRING_DICT0( moduledict_googlemaps$exceptions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_e4dfa43e313a76eecd99cabed41c4a3e;
    UPDATE_STRING_DICT0( moduledict_googlemaps$exceptions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_googlemaps$exceptions, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_ad6e3b18bac428dc7425202f86732446 = MAKE_MODULE_FRAME( codeobj_ad6e3b18bac428dc7425202f86732446, module_googlemaps$exceptions );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_ad6e3b18bac428dc7425202f86732446 );
    assert( Py_REFCNT( frame_ad6e3b18bac428dc7425202f86732446 ) == 2 );

    // Framed code:
    frame_ad6e3b18bac428dc7425202f86732446->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_165f2d5388d0499fffa9a0c8b62aae64;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_ad6e3b18bac428dc7425202f86732446->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_googlemaps$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_googlemaps$exceptions, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_googlemaps;
    UPDATE_STRING_DICT0( moduledict_googlemaps$exceptions, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_assign_source_7 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_7, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_7;

    tmp_assign_source_8 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_8;

    // Tried code:
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


        exception_lineno = 22;

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


        exception_lineno = 22;

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


        exception_lineno = 22;

        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

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
    tmp_assign_source_9 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 22;

        goto try_except_handler_1;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_9;

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


        exception_lineno = 22;

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


        exception_lineno = 22;

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


        exception_lineno = 22;

        goto try_except_handler_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_ApiError;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_ad6e3b18bac428dc7425202f86732446->m_frame.f_lineno = 22;
    tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_10 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_10;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_1);
    locals_dict_1 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_12 = const_str_digest_165f2d5388d0499fffa9a0c8b62aae64;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_12 );
    outline_0_var___module__ = tmp_assign_source_12;

    tmp_assign_source_13 = const_str_digest_beb0221ec1dc7fa89594a677aa129316;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_13 );
    outline_0_var___doc__ = tmp_assign_source_13;

    tmp_assign_source_14 = const_str_plain_ApiError;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_14 );
    outline_0_var___qualname__ = tmp_assign_source_14;

    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_15 = MAKE_FUNCTION_googlemaps$exceptions$$$function_1___init__( tmp_defaults_1 );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_15;

    tmp_assign_source_16 = MAKE_FUNCTION_googlemaps$exceptions$$$function_2___str__(  );
    assert( outline_0_var___str__ == NULL );
    outline_0_var___str__ = tmp_assign_source_16;

    // Tried code:
    tmp_called_name_3 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_3 = const_str_plain_ApiError;
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

        exception_lineno = 22;

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

        exception_lineno = 22;

        goto try_except_handler_2;
    }
    if ( outline_0_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain___doc__,
            outline_0_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain___doc__
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

        exception_lineno = 22;

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

        exception_lineno = 22;

        goto try_except_handler_2;
    }
    if ( outline_0_var___str__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain___str__,
            outline_0_var___str__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain___str__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain___str__
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

        exception_lineno = 22;

        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_ad6e3b18bac428dc7425202f86732446->m_frame.f_lineno = 22;
    tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_2;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_17;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( googlemaps$exceptions );
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

    Py_XDECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    Py_XDECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    Py_XDECREF( outline_0_var___str__ );
    outline_0_var___str__ = NULL;

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

    Py_XDECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    Py_XDECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    Py_XDECREF( outline_0_var___str__ );
    outline_0_var___str__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( googlemaps$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 22;
    goto try_except_handler_1;
    outline_result_1:;
    tmp_assign_source_11 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_googlemaps$exceptions, (Nuitka_StringObject *)const_str_plain_ApiError, tmp_assign_source_11 );
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
    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    tmp_assign_source_18 = PyTuple_New( 1 );
    tmp_tuple_element_4 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_18, 0, tmp_tuple_element_4 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_18;

    tmp_assign_source_19 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_19;

    // Tried code:
    tmp_compare_left_3 = const_str_plain_metaclass;
    tmp_compare_right_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_3 == -1) );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_dict_name_2 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_2 );
    tmp_key_name_2 = const_str_plain_metaclass;
    tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_3;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_cond_value_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_3;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_subscribed_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_0;
    tmp_type_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_type_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_3;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_3;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_bases_name_2 );
    tmp_assign_source_20 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_2 );

        exception_lineno = 34;

        goto try_except_handler_3;
    }
    Py_DECREF( tmp_metaclass_name_2 );
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_20;

    tmp_compare_left_4 = const_str_plain_metaclass;
    tmp_compare_right_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_4 );
    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    assert( !(tmp_cmp_In_4 == -1) );
    if ( tmp_cmp_In_4 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_3;
    }
    branch_no_2:;
    tmp_hasattr_source_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_2 );
    tmp_hasattr_attr_2 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_3;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_source_name_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_3;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_5 = const_str_plain_TransportError;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_5 );
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_ad6e3b18bac428dc7425202f86732446->m_frame.f_lineno = 34;
    tmp_assign_source_21 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_3;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_21 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_21;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_2);
    locals_dict_2 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_23 = const_str_digest_165f2d5388d0499fffa9a0c8b62aae64;
    assert( outline_1_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_23 );
    outline_1_var___module__ = tmp_assign_source_23;

    tmp_assign_source_24 = const_str_digest_494fccc16b0f92d54e4f914b122175e5;
    assert( outline_1_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_24 );
    outline_1_var___doc__ = tmp_assign_source_24;

    tmp_assign_source_25 = const_str_plain_TransportError;
    assert( outline_1_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_25 );
    outline_1_var___qualname__ = tmp_assign_source_25;

    tmp_defaults_2 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_26 = MAKE_FUNCTION_googlemaps$exceptions$$$function_3___init__( tmp_defaults_2 );
    assert( outline_1_var___init__ == NULL );
    outline_1_var___init__ = tmp_assign_source_26;

    tmp_assign_source_27 = MAKE_FUNCTION_googlemaps$exceptions$$$function_4___str__(  );
    assert( outline_1_var___str__ == NULL );
    outline_1_var___str__ = tmp_assign_source_27;

    // Tried code:
    tmp_called_name_5 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_5 );
    tmp_args_name_4 = PyTuple_New( 3 );
    tmp_tuple_element_6 = const_str_plain_TransportError;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_6 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_6 );
    tmp_tuple_element_6 = locals_dict_2;
    Py_INCREF( tmp_tuple_element_6 );
    if ( outline_1_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_6,
            const_str_plain___qualname__,
            outline_1_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_6,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_6,
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
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_6 );

        exception_lineno = 34;

        goto try_except_handler_4;
    }
    if ( outline_1_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_6,
            const_str_plain___module__,
            outline_1_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_6,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_6,
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
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_6 );

        exception_lineno = 34;

        goto try_except_handler_4;
    }
    if ( outline_1_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_6,
            const_str_plain___doc__,
            outline_1_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_6,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_6,
                const_str_plain___doc__
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
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_6 );

        exception_lineno = 34;

        goto try_except_handler_4;
    }
    if ( outline_1_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_6,
            const_str_plain___init__,
            outline_1_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_6,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_6,
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
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_6 );

        exception_lineno = 34;

        goto try_except_handler_4;
    }
    if ( outline_1_var___str__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_6,
            const_str_plain___str__,
            outline_1_var___str__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_6,
            const_str_plain___str__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_6,
                const_str_plain___str__
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
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_6 );

        exception_lineno = 34;

        goto try_except_handler_4;
    }
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_6 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_ad6e3b18bac428dc7425202f86732446->m_frame.f_lineno = 34;
    tmp_assign_source_28 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_4;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_28;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( googlemaps$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    Py_XDECREF( outline_1_var___qualname__ );
    outline_1_var___qualname__ = NULL;

    Py_XDECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    Py_XDECREF( outline_1_var___doc__ );
    outline_1_var___doc__ = NULL;

    Py_XDECREF( outline_1_var___init__ );
    outline_1_var___init__ = NULL;

    Py_XDECREF( outline_1_var___str__ );
    outline_1_var___str__ = NULL;

    goto outline_result_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_1_var___qualname__ );
    outline_1_var___qualname__ = NULL;

    Py_XDECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    Py_XDECREF( outline_1_var___doc__ );
    outline_1_var___doc__ = NULL;

    Py_XDECREF( outline_1_var___init__ );
    outline_1_var___init__ = NULL;

    Py_XDECREF( outline_1_var___str__ );
    outline_1_var___str__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( googlemaps$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 34;
    goto try_except_handler_3;
    outline_result_2:;
    tmp_assign_source_22 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_googlemaps$exceptions, (Nuitka_StringObject *)const_str_plain_TransportError, tmp_assign_source_22 );
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Tried code:
    tmp_assign_source_29 = PyTuple_New( 1 );
    tmp_tuple_element_7 = GET_STRING_DICT_VALUE( moduledict_googlemaps$exceptions, (Nuitka_StringObject *)const_str_plain_TransportError );

    if (unlikely( tmp_tuple_element_7 == NULL ))
    {
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TransportError );
    }

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TransportError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;

        goto try_except_handler_5;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_assign_source_29, 0, tmp_tuple_element_7 );
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_29;

    tmp_assign_source_30 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_30;

    tmp_compare_left_5 = const_str_plain_metaclass;
    tmp_compare_right_5 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_5 );
    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    assert( !(tmp_cmp_In_5 == -1) );
    if ( tmp_cmp_In_5 == 1 )
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_dict_name_3 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_5;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_cond_value_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_5;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto condexpr_true_8;
    }
    else
    {
        goto condexpr_false_8;
    }
    condexpr_true_8:;
    tmp_subscribed_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = const_int_0;
    tmp_type_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_type_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_5;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_5;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_3 );
    condexpr_end_8:;
    condexpr_end_7:;
    tmp_bases_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_bases_name_3 );
    tmp_assign_source_31 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_3 );

        exception_lineno = 46;

        goto try_except_handler_5;
    }
    Py_DECREF( tmp_metaclass_name_3 );
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_31;

    tmp_compare_left_6 = const_str_plain_metaclass;
    tmp_compare_right_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_6 );
    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    assert( !(tmp_cmp_In_6 == -1) );
    if ( tmp_cmp_In_6 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_5;
    }
    branch_no_3:;
    tmp_hasattr_source_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_3 );
    tmp_hasattr_attr_3 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_3, tmp_hasattr_attr_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_5;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_9;
    }
    else
    {
        goto condexpr_false_9;
    }
    condexpr_true_9:;
    tmp_source_name_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_5;
    }
    tmp_args_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_8 = const_str_plain_HTTPError;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_8 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_8 );
    tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_5 );
    frame_ad6e3b18bac428dc7425202f86732446->m_frame.f_lineno = 46;
    tmp_assign_source_32 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_5;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_32 = PyDict_New();
    condexpr_end_9:;
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_32;

    tmp_set_locals = tmp_class_creation_3__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_3);
    locals_dict_3 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_34 = const_str_digest_165f2d5388d0499fffa9a0c8b62aae64;
    assert( outline_2_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_34 );
    outline_2_var___module__ = tmp_assign_source_34;

    tmp_assign_source_35 = const_str_digest_7a5cd5beac7547f7f9e3f3a48e9a8af0;
    assert( outline_2_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_35 );
    outline_2_var___doc__ = tmp_assign_source_35;

    tmp_assign_source_36 = const_str_plain_HTTPError;
    assert( outline_2_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_36 );
    outline_2_var___qualname__ = tmp_assign_source_36;

    tmp_assign_source_37 = MAKE_FUNCTION_googlemaps$exceptions$$$function_5___init__(  );
    assert( outline_2_var___init__ == NULL );
    outline_2_var___init__ = tmp_assign_source_37;

    tmp_assign_source_38 = MAKE_FUNCTION_googlemaps$exceptions$$$function_6___str__(  );
    assert( outline_2_var___str__ == NULL );
    outline_2_var___str__ = tmp_assign_source_38;

    // Tried code:
    tmp_called_name_7 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_7 );
    tmp_args_name_6 = PyTuple_New( 3 );
    tmp_tuple_element_9 = const_str_plain_HTTPError;
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_9 );
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_9 );
    tmp_tuple_element_9 = locals_dict_3;
    Py_INCREF( tmp_tuple_element_9 );
    if ( outline_2_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_9,
            const_str_plain___qualname__,
            outline_2_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_9,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_9,
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
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_9 );

        exception_lineno = 46;

        goto try_except_handler_6;
    }
    if ( outline_2_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_9,
            const_str_plain___module__,
            outline_2_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_9,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_9,
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
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_9 );

        exception_lineno = 46;

        goto try_except_handler_6;
    }
    if ( outline_2_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_9,
            const_str_plain___doc__,
            outline_2_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_9,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_9,
                const_str_plain___doc__
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
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_9 );

        exception_lineno = 46;

        goto try_except_handler_6;
    }
    if ( outline_2_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_9,
            const_str_plain___init__,
            outline_2_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_9,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_9,
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
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_9 );

        exception_lineno = 46;

        goto try_except_handler_6;
    }
    if ( outline_2_var___str__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_9,
            const_str_plain___str__,
            outline_2_var___str__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_9,
            const_str_plain___str__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_9,
                const_str_plain___str__
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
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_tuple_element_9 );

        exception_lineno = 46;

        goto try_except_handler_6;
    }
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_9 );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_6 );
    frame_ad6e3b18bac428dc7425202f86732446->m_frame.f_lineno = 46;
    tmp_assign_source_39 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_6;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_39;

    tmp_outline_return_value_3 = outline_2_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_3 );
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( googlemaps$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
    Py_DECREF( outline_2_var___class__ );
    outline_2_var___class__ = NULL;

    Py_XDECREF( outline_2_var___qualname__ );
    outline_2_var___qualname__ = NULL;

    Py_XDECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    Py_XDECREF( outline_2_var___doc__ );
    outline_2_var___doc__ = NULL;

    Py_XDECREF( outline_2_var___init__ );
    outline_2_var___init__ = NULL;

    Py_XDECREF( outline_2_var___str__ );
    outline_2_var___str__ = NULL;

    goto outline_result_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_2_var___qualname__ );
    outline_2_var___qualname__ = NULL;

    Py_XDECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    Py_XDECREF( outline_2_var___doc__ );
    outline_2_var___doc__ = NULL;

    Py_XDECREF( outline_2_var___init__ );
    outline_2_var___init__ = NULL;

    Py_XDECREF( outline_2_var___str__ );
    outline_2_var___str__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( googlemaps$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 46;
    goto try_except_handler_5;
    outline_result_3:;
    tmp_assign_source_33 = tmp_outline_return_value_3;
    UPDATE_STRING_DICT1( moduledict_googlemaps$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError, tmp_assign_source_33 );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    tmp_assign_source_40 = PyTuple_New( 1 );
    tmp_tuple_element_10 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_assign_source_40, 0, tmp_tuple_element_10 );
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_40;

    tmp_assign_source_41 = PyDict_New();
    assert( tmp_class_creation_4__class_decl_dict == NULL );
    tmp_class_creation_4__class_decl_dict = tmp_assign_source_41;

    // Tried code:
    tmp_compare_left_7 = const_str_plain_metaclass;
    tmp_compare_right_7 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_7 );
    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    assert( !(tmp_cmp_In_7 == -1) );
    if ( tmp_cmp_In_7 == 1 )
    {
        goto condexpr_true_10;
    }
    else
    {
        goto condexpr_false_10;
    }
    condexpr_true_10:;
    tmp_dict_name_4 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_4 );
    tmp_key_name_4 = const_str_plain_metaclass;
    tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_7;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_cond_value_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_cond_value_4 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_7;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto condexpr_true_11;
    }
    else
    {
        goto condexpr_false_11;
    }
    condexpr_true_11:;
    tmp_subscribed_name_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_subscribed_name_4 );
    tmp_subscript_name_4 = const_int_0;
    tmp_type_arg_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_type_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_7;
    }
    tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_4 );
    Py_DECREF( tmp_type_arg_4 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_7;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_4 );
    condexpr_end_11:;
    condexpr_end_10:;
    tmp_bases_name_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_bases_name_4 );
    tmp_assign_source_42 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_4 );

        exception_lineno = 54;

        goto try_except_handler_7;
    }
    Py_DECREF( tmp_metaclass_name_4 );
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_42;

    tmp_compare_left_8 = const_str_plain_metaclass;
    tmp_compare_right_8 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_8 );
    tmp_cmp_In_8 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    assert( !(tmp_cmp_In_8 == -1) );
    if ( tmp_cmp_In_8 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_7;
    }
    branch_no_4:;
    tmp_hasattr_source_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_4 );
    tmp_hasattr_attr_4 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_4, tmp_hasattr_attr_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_7;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_12;
    }
    else
    {
        goto condexpr_false_12;
    }
    condexpr_true_12:;
    tmp_source_name_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_7;
    }
    tmp_args_name_7 = PyTuple_New( 2 );
    tmp_tuple_element_11 = const_str_plain_Timeout;
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_11 );
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_11 );
    tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_7 );
    frame_ad6e3b18bac428dc7425202f86732446->m_frame.f_lineno = 54;
    tmp_assign_source_43 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_7;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_43 = PyDict_New();
    condexpr_end_12:;
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_43;

    tmp_set_locals = tmp_class_creation_4__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_4);
    locals_dict_4 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_45 = const_str_digest_165f2d5388d0499fffa9a0c8b62aae64;
    assert( outline_3_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_45 );
    outline_3_var___module__ = tmp_assign_source_45;

    tmp_assign_source_46 = const_str_digest_2a5e2e86b1c8afd70db1855887b5e552;
    assert( outline_3_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_46 );
    outline_3_var___doc__ = tmp_assign_source_46;

    tmp_assign_source_47 = const_str_plain_Timeout;
    assert( outline_3_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_47 );
    outline_3_var___qualname__ = tmp_assign_source_47;

    // Tried code:
    tmp_called_name_9 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_9 );
    tmp_args_name_8 = PyTuple_New( 3 );
    tmp_tuple_element_12 = const_str_plain_Timeout;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_12 );
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_12 );
    tmp_tuple_element_12 = locals_dict_4;
    Py_INCREF( tmp_tuple_element_12 );
    if ( outline_3_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_12,
            const_str_plain___qualname__,
            outline_3_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_12,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_12,
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
        Py_DECREF( tmp_args_name_8 );
        Py_DECREF( tmp_tuple_element_12 );

        exception_lineno = 54;

        goto try_except_handler_8;
    }
    if ( outline_3_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_12,
            const_str_plain___module__,
            outline_3_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_12,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_12,
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
        Py_DECREF( tmp_args_name_8 );
        Py_DECREF( tmp_tuple_element_12 );

        exception_lineno = 54;

        goto try_except_handler_8;
    }
    if ( outline_3_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_12,
            const_str_plain___doc__,
            outline_3_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_12,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_12,
                const_str_plain___doc__
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
        Py_DECREF( tmp_args_name_8 );
        Py_DECREF( tmp_tuple_element_12 );

        exception_lineno = 54;

        goto try_except_handler_8;
    }
    PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_12 );
    tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_8 );
    frame_ad6e3b18bac428dc7425202f86732446->m_frame.f_lineno = 54;
    tmp_assign_source_48 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_8;
    }
    assert( outline_3_var___class__ == NULL );
    outline_3_var___class__ = tmp_assign_source_48;

    tmp_outline_return_value_4 = outline_3_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_4 );
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_8;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( googlemaps$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_8:;
    CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
    Py_DECREF( outline_3_var___class__ );
    outline_3_var___class__ = NULL;

    Py_XDECREF( outline_3_var___qualname__ );
    outline_3_var___qualname__ = NULL;

    Py_XDECREF( outline_3_var___module__ );
    outline_3_var___module__ = NULL;

    Py_XDECREF( outline_3_var___doc__ );
    outline_3_var___doc__ = NULL;

    goto outline_result_4;
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

    Py_XDECREF( outline_3_var___qualname__ );
    outline_3_var___qualname__ = NULL;

    Py_XDECREF( outline_3_var___module__ );
    outline_3_var___module__ = NULL;

    Py_XDECREF( outline_3_var___doc__ );
    outline_3_var___doc__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto outline_exception_4;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( googlemaps$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 54;
    goto try_except_handler_7;
    outline_result_4:;
    tmp_assign_source_44 = tmp_outline_return_value_4;
    UPDATE_STRING_DICT1( moduledict_googlemaps$exceptions, (Nuitka_StringObject *)const_str_plain_Timeout, tmp_assign_source_44 );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    tmp_assign_source_49 = PyTuple_New( 1 );
    tmp_tuple_element_13 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_assign_source_49, 0, tmp_tuple_element_13 );
    assert( tmp_class_creation_5__bases == NULL );
    tmp_class_creation_5__bases = tmp_assign_source_49;

    tmp_assign_source_50 = PyDict_New();
    assert( tmp_class_creation_5__class_decl_dict == NULL );
    tmp_class_creation_5__class_decl_dict = tmp_assign_source_50;

    // Tried code:
    tmp_compare_left_9 = const_str_plain_metaclass;
    tmp_compare_right_9 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_9 );
    tmp_cmp_In_9 = PySequence_Contains( tmp_compare_right_9, tmp_compare_left_9 );
    assert( !(tmp_cmp_In_9 == -1) );
    if ( tmp_cmp_In_9 == 1 )
    {
        goto condexpr_true_13;
    }
    else
    {
        goto condexpr_false_13;
    }
    condexpr_true_13:;
    tmp_dict_name_5 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_5 );
    tmp_key_name_5 = const_str_plain_metaclass;
    tmp_metaclass_name_5 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto try_except_handler_9;
    }
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_cond_value_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_cond_value_5 );
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto try_except_handler_9;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto condexpr_true_14;
    }
    else
    {
        goto condexpr_false_14;
    }
    condexpr_true_14:;
    tmp_subscribed_name_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_subscribed_name_5 );
    tmp_subscript_name_5 = const_int_0;
    tmp_type_arg_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_type_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto try_except_handler_9;
    }
    tmp_metaclass_name_5 = BUILTIN_TYPE1( tmp_type_arg_5 );
    Py_DECREF( tmp_type_arg_5 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto try_except_handler_9;
    }
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_metaclass_name_5 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_5 );
    condexpr_end_14:;
    condexpr_end_13:;
    tmp_bases_name_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_bases_name_5 );
    tmp_assign_source_51 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_5 );

        exception_lineno = 58;

        goto try_except_handler_9;
    }
    Py_DECREF( tmp_metaclass_name_5 );
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_51;

    tmp_compare_left_10 = const_str_plain_metaclass;
    tmp_compare_right_10 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_10 );
    tmp_cmp_In_10 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    assert( !(tmp_cmp_In_10 == -1) );
    if ( tmp_cmp_In_10 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto try_except_handler_9;
    }
    branch_no_5:;
    tmp_hasattr_source_5 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_5 );
    tmp_hasattr_attr_5 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_5, tmp_hasattr_attr_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto try_except_handler_9;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_15;
    }
    else
    {
        goto condexpr_false_15;
    }
    condexpr_true_15:;
    tmp_source_name_5 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___prepare__ );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto try_except_handler_9;
    }
    tmp_args_name_9 = PyTuple_New( 2 );
    tmp_tuple_element_14 = const_str_plain__RetriableRequest;
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_tuple_element_14 );
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_14 );
    tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_9 );
    frame_ad6e3b18bac428dc7425202f86732446->m_frame.f_lineno = 58;
    tmp_assign_source_52 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_name_9 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto try_except_handler_9;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_assign_source_52 = PyDict_New();
    condexpr_end_15:;
    assert( tmp_class_creation_5__prepared == NULL );
    tmp_class_creation_5__prepared = tmp_assign_source_52;

    tmp_set_locals = tmp_class_creation_5__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_5);
    locals_dict_5 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_54 = const_str_digest_165f2d5388d0499fffa9a0c8b62aae64;
    assert( outline_4_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_54 );
    outline_4_var___module__ = tmp_assign_source_54;

    tmp_assign_source_55 = const_str_digest_146b1672991952fc06d88f27226c7cfa;
    assert( outline_4_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_55 );
    outline_4_var___doc__ = tmp_assign_source_55;

    tmp_assign_source_56 = const_str_plain__RetriableRequest;
    assert( outline_4_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_56 );
    outline_4_var___qualname__ = tmp_assign_source_56;

    // Tried code:
    tmp_called_name_11 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_11 );
    tmp_args_name_10 = PyTuple_New( 3 );
    tmp_tuple_element_15 = const_str_plain__RetriableRequest;
    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_15 );
    tmp_tuple_element_15 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_tuple_element_15 );
    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_15 );
    tmp_tuple_element_15 = locals_dict_5;
    Py_INCREF( tmp_tuple_element_15 );
    if ( outline_4_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_15,
            const_str_plain___qualname__,
            outline_4_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_15,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_15,
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
        Py_DECREF( tmp_args_name_10 );
        Py_DECREF( tmp_tuple_element_15 );

        exception_lineno = 58;

        goto try_except_handler_10;
    }
    if ( outline_4_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_15,
            const_str_plain___module__,
            outline_4_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_15,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_15,
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
        Py_DECREF( tmp_args_name_10 );
        Py_DECREF( tmp_tuple_element_15 );

        exception_lineno = 58;

        goto try_except_handler_10;
    }
    if ( outline_4_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_15,
            const_str_plain___doc__,
            outline_4_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_15,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_15,
                const_str_plain___doc__
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
        Py_DECREF( tmp_args_name_10 );
        Py_DECREF( tmp_tuple_element_15 );

        exception_lineno = 58;

        goto try_except_handler_10;
    }
    PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_15 );
    tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_10 );
    frame_ad6e3b18bac428dc7425202f86732446->m_frame.f_lineno = 58;
    tmp_assign_source_57 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_args_name_10 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto try_except_handler_10;
    }
    assert( outline_4_var___class__ == NULL );
    outline_4_var___class__ = tmp_assign_source_57;

    tmp_outline_return_value_5 = outline_4_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_5 );
    Py_INCREF( tmp_outline_return_value_5 );
    goto try_return_handler_10;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( googlemaps$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_10:;
    CHECK_OBJECT( (PyObject *)outline_4_var___class__ );
    Py_DECREF( outline_4_var___class__ );
    outline_4_var___class__ = NULL;

    Py_XDECREF( outline_4_var___qualname__ );
    outline_4_var___qualname__ = NULL;

    Py_XDECREF( outline_4_var___module__ );
    outline_4_var___module__ = NULL;

    Py_XDECREF( outline_4_var___doc__ );
    outline_4_var___doc__ = NULL;

    goto outline_result_5;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_4_var___qualname__ );
    outline_4_var___qualname__ = NULL;

    Py_XDECREF( outline_4_var___module__ );
    outline_4_var___module__ = NULL;

    Py_XDECREF( outline_4_var___doc__ );
    outline_4_var___doc__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto outline_exception_5;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( googlemaps$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_5:;
    exception_lineno = 58;
    goto try_except_handler_9;
    outline_result_5:;
    tmp_assign_source_53 = tmp_outline_return_value_5;
    UPDATE_STRING_DICT1( moduledict_googlemaps$exceptions, (Nuitka_StringObject *)const_str_plain__RetriableRequest, tmp_assign_source_53 );
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad6e3b18bac428dc7425202f86732446 );
#endif
    popFrameStack();

    assertFrameObject( frame_ad6e3b18bac428dc7425202f86732446 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad6e3b18bac428dc7425202f86732446 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ad6e3b18bac428dc7425202f86732446, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ad6e3b18bac428dc7425202f86732446->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ad6e3b18bac428dc7425202f86732446, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;


    return MOD_RETURN_VALUE( module_googlemaps$exceptions );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
