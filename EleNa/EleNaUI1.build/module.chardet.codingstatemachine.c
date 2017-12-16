/* Generated code for Python source for module 'chardet.codingstatemachine'
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

/* The _module_chardet$codingstatemachine is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$codingstatemachine;
PyDictObject *moduledict_chardet$codingstatemachine;

/* The module constants used, if any. */
extern PyObject *const_str_plain__model;
static PyObject *const_str_plain_sm;
static PyObject *const_str_plain__curr_char_len;
extern PyObject *const_str_plain_state_table;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_digest_5e7b1ebaf569607b4fa4d499d56738e7;
extern PyObject *const_str_plain___module__;
static PyObject *const_tuple_str_digest_5c8bdb061ec2104fda96a94f85f3c65b_tuple;
extern PyObject *const_str_plain_char_len_table;
extern PyObject *const_str_plain_getLogger;
static PyObject *const_str_digest_8afb9ef7188501c9cab0e7961f3982e9;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_int_pos_1;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_byte_class;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_language;
extern PyObject *const_str_plain_class_table;
static PyObject *const_str_digest_757854c2605c9b658363f7dcab9f8ee1;
extern PyObject *const_str_plain_next_state;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_logger;
extern PyObject *const_int_0;
static PyObject *const_str_digest_5f4cea3e3ab342446422590906c2d3f6;
extern PyObject *const_str_plain_get_coding_state_machine;
static PyObject *const_str_plain__curr_byte_pos;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_reset;
static PyObject *const_tuple_str_plain_self_str_plain_sm_tuple;
extern PyObject *const_str_plain_enums;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_MachineState;
extern PyObject *const_str_plain_class_factor;
extern PyObject *const_str_plain_CodingStateMachine;
static PyObject *const_str_plain__curr_state;
extern PyObject *const_str_plain_START;
extern PyObject *const_str_plain_get_current_charlen;
static PyObject *const_str_digest_5c8bdb061ec2104fda96a94f85f3c65b;
static PyObject *const_str_plain_curr_state;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_c;
static PyObject *const_str_digest_6baf4084ccf81c9d192b4232913c88e0;
static PyObject *const_tuple_1c0df9eb1324595e69d229a71318a0bd_tuple;
static PyObject *const_tuple_0b562627780115e5d9aadde0f7f7a2ca_tuple;
static PyObject *const_str_digest_4e324d24d8616283ecad6f6af25abd7f;
static PyObject *const_str_digest_9344e35141c1032039fc7d659e9b8abf;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_chardet;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_tuple_str_plain_MachineState_tuple;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_digest_1bbbf779d0048312dde8e52ffee1c724;
static PyObject *const_str_digest_646b81b59eed0ba57152f435ba5a8819;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_sm = UNSTREAM_STRING( &constant_bin[ 31810 ], 2, 1 );
    const_str_plain__curr_char_len = UNSTREAM_STRING( &constant_bin[ 31812 ], 14, 1 );
    const_str_digest_5e7b1ebaf569607b4fa4d499d56738e7 = UNSTREAM_STRING( &constant_bin[ 31826 ], 29, 0 );
    const_tuple_str_digest_5c8bdb061ec2104fda96a94f85f3c65b_tuple = PyTuple_New( 1 );
    const_str_digest_5c8bdb061ec2104fda96a94f85f3c65b = UNSTREAM_STRING( &constant_bin[ 31855 ], 26, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_5c8bdb061ec2104fda96a94f85f3c65b_tuple, 0, const_str_digest_5c8bdb061ec2104fda96a94f85f3c65b ); Py_INCREF( const_str_digest_5c8bdb061ec2104fda96a94f85f3c65b );
    const_str_digest_8afb9ef7188501c9cab0e7961f3982e9 = UNSTREAM_STRING( &constant_bin[ 31881 ], 1174, 0 );
    const_str_plain_byte_class = UNSTREAM_STRING( &constant_bin[ 33055 ], 10, 1 );
    const_str_digest_757854c2605c9b658363f7dcab9f8ee1 = UNSTREAM_STRING( &constant_bin[ 33065 ], 107, 0 );
    const_str_digest_5f4cea3e3ab342446422590906c2d3f6 = UNSTREAM_STRING( &constant_bin[ 33172 ], 43, 0 );
    const_str_plain__curr_byte_pos = UNSTREAM_STRING( &constant_bin[ 33215 ], 14, 1 );
    const_tuple_str_plain_self_str_plain_sm_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_sm_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_sm_tuple, 1, const_str_plain_sm ); Py_INCREF( const_str_plain_sm );
    const_str_plain__curr_state = UNSTREAM_STRING( &constant_bin[ 33229 ], 11, 1 );
    const_str_plain_curr_state = UNSTREAM_STRING( &constant_bin[ 33230 ], 10, 1 );
    const_str_digest_6baf4084ccf81c9d192b4232913c88e0 = UNSTREAM_STRING( &constant_bin[ 33240 ], 38, 0 );
    const_tuple_1c0df9eb1324595e69d229a71318a0bd_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_1c0df9eb1324595e69d229a71318a0bd_tuple, 0, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    PyTuple_SET_ITEM( const_tuple_1c0df9eb1324595e69d229a71318a0bd_tuple, 1, const_str_plain___qualname__ ); Py_INCREF( const_str_plain___qualname__ );
    PyTuple_SET_ITEM( const_tuple_1c0df9eb1324595e69d229a71318a0bd_tuple, 2, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_1c0df9eb1324595e69d229a71318a0bd_tuple, 3, const_str_plain___doc__ ); Py_INCREF( const_str_plain___doc__ );
    PyTuple_SET_ITEM( const_tuple_1c0df9eb1324595e69d229a71318a0bd_tuple, 4, const_str_plain___init__ ); Py_INCREF( const_str_plain___init__ );
    PyTuple_SET_ITEM( const_tuple_1c0df9eb1324595e69d229a71318a0bd_tuple, 5, const_str_plain_reset ); Py_INCREF( const_str_plain_reset );
    PyTuple_SET_ITEM( const_tuple_1c0df9eb1324595e69d229a71318a0bd_tuple, 6, const_str_plain_next_state ); Py_INCREF( const_str_plain_next_state );
    PyTuple_SET_ITEM( const_tuple_1c0df9eb1324595e69d229a71318a0bd_tuple, 7, const_str_plain_get_current_charlen ); Py_INCREF( const_str_plain_get_current_charlen );
    PyTuple_SET_ITEM( const_tuple_1c0df9eb1324595e69d229a71318a0bd_tuple, 8, const_str_plain_get_coding_state_machine ); Py_INCREF( const_str_plain_get_coding_state_machine );
    PyTuple_SET_ITEM( const_tuple_1c0df9eb1324595e69d229a71318a0bd_tuple, 9, const_str_plain_language ); Py_INCREF( const_str_plain_language );
    const_tuple_0b562627780115e5d9aadde0f7f7a2ca_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_0b562627780115e5d9aadde0f7f7a2ca_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0b562627780115e5d9aadde0f7f7a2ca_tuple, 1, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_0b562627780115e5d9aadde0f7f7a2ca_tuple, 2, const_str_plain_byte_class ); Py_INCREF( const_str_plain_byte_class );
    PyTuple_SET_ITEM( const_tuple_0b562627780115e5d9aadde0f7f7a2ca_tuple, 3, const_str_plain_curr_state ); Py_INCREF( const_str_plain_curr_state );
    const_str_digest_4e324d24d8616283ecad6f6af25abd7f = UNSTREAM_STRING( &constant_bin[ 33278 ], 27, 0 );
    const_str_digest_9344e35141c1032039fc7d659e9b8abf = UNSTREAM_STRING( &constant_bin[ 33305 ], 35, 0 );
    const_str_digest_1bbbf779d0048312dde8e52ffee1c724 = UNSTREAM_STRING( &constant_bin[ 33340 ], 24, 0 );
    const_str_digest_646b81b59eed0ba57152f435ba5a8819 = UNSTREAM_STRING( &constant_bin[ 33364 ], 27, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$codingstatemachine( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_eb343d1db3fea8aac3f722417a0f2664;
static PyCodeObject *codeobj_9e7babafe8f2399282a1f17872800d06;
static PyCodeObject *codeobj_006cdf68a555b7a288bfd814271248e5;
static PyCodeObject *codeobj_9b65e93017f6153289c28dc85cc0c076;
static PyCodeObject *codeobj_52fd25ef0ec6fddf5a33704aabd78181;
static PyCodeObject *codeobj_d957230a83c200def6f0424159577e9c;
static PyCodeObject *codeobj_b4d690828e163c4a487299efcdd44be8;
static PyCodeObject *codeobj_b6e34dd392ac172b42120afc44675a99;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_757854c2605c9b658363f7dcab9f8ee1;
    codeobj_eb343d1db3fea8aac3f722417a0f2664 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_9344e35141c1032039fc7d659e9b8abf, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_9e7babafe8f2399282a1f17872800d06 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CodingStateMachine, 33, const_tuple_1c0df9eb1324595e69d229a71318a0bd_tuple, 0, 0, CO_NOFREE );
    codeobj_006cdf68a555b7a288bfd814271248e5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 55, const_tuple_str_plain_self_str_plain_sm_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9b65e93017f6153289c28dc85cc0c076 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_coding_state_machine, 83, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_52fd25ef0ec6fddf5a33704aabd78181 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_current_charlen, 80, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d957230a83c200def6f0424159577e9c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_language, 86, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b4d690828e163c4a487299efcdd44be8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_next_state, 66, const_tuple_0b562627780115e5d9aadde0f7f7a2ca_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b6e34dd392ac172b42120afc44675a99 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset, 63, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_chardet$codingstatemachine$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_chardet$codingstatemachine$$$function_2_reset(  );


static PyObject *MAKE_FUNCTION_chardet$codingstatemachine$$$function_3_next_state(  );


static PyObject *MAKE_FUNCTION_chardet$codingstatemachine$$$function_4_get_current_charlen(  );


static PyObject *MAKE_FUNCTION_chardet$codingstatemachine$$$function_5_get_coding_state_machine(  );


static PyObject *MAKE_FUNCTION_chardet$codingstatemachine$$$function_6_language(  );


// The module function definitions.
static PyObject *impl_chardet$codingstatemachine$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_sm = python_pars[ 1 ];
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
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_006cdf68a555b7a288bfd814271248e5 = NULL;

    struct Nuitka_FrameObject *frame_006cdf68a555b7a288bfd814271248e5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_006cdf68a555b7a288bfd814271248e5, codeobj_006cdf68a555b7a288bfd814271248e5, module_chardet$codingstatemachine, sizeof(void *)+sizeof(void *) );
    frame_006cdf68a555b7a288bfd814271248e5 = cache_frame_006cdf68a555b7a288bfd814271248e5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_006cdf68a555b7a288bfd814271248e5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_006cdf68a555b7a288bfd814271248e5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_sm;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__model, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = const_int_0;
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__curr_byte_pos, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = const_int_0;
    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__curr_char_len, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = Py_None;
    tmp_assattr_target_4 = par_self;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__curr_state, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain_logging );

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

        exception_lineno = 60;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_006cdf68a555b7a288bfd814271248e5->m_frame.f_lineno = 60;
    tmp_assattr_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_digest_5c8bdb061ec2104fda96a94f85f3c65b_tuple, 0 ) );

    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = par_self;

    if ( tmp_assattr_target_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_logger, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 60;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    tmp_called_instance_2 = par_self;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_006cdf68a555b7a288bfd814271248e5->m_frame.f_lineno = 61;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_reset );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_006cdf68a555b7a288bfd814271248e5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_006cdf68a555b7a288bfd814271248e5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_006cdf68a555b7a288bfd814271248e5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_006cdf68a555b7a288bfd814271248e5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_006cdf68a555b7a288bfd814271248e5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_006cdf68a555b7a288bfd814271248e5,
        type_description_1,
        par_self,
        par_sm
    );


    // Release cached frame.
    if ( frame_006cdf68a555b7a288bfd814271248e5 == cache_frame_006cdf68a555b7a288bfd814271248e5 )
    {
        Py_DECREF( frame_006cdf68a555b7a288bfd814271248e5 );
    }
    cache_frame_006cdf68a555b7a288bfd814271248e5 = NULL;

    assertFrameObject( frame_006cdf68a555b7a288bfd814271248e5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_sm );
    par_sm = NULL;

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

    Py_XDECREF( par_sm );
    par_sm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine$$$function_1___init__ );
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


static PyObject *impl_chardet$codingstatemachine$$$function_2_reset( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_b6e34dd392ac172b42120afc44675a99 = NULL;

    struct Nuitka_FrameObject *frame_b6e34dd392ac172b42120afc44675a99;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b6e34dd392ac172b42120afc44675a99, codeobj_b6e34dd392ac172b42120afc44675a99, module_chardet$codingstatemachine, sizeof(void *) );
    frame_b6e34dd392ac172b42120afc44675a99 = cache_frame_b6e34dd392ac172b42120afc44675a99;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b6e34dd392ac172b42120afc44675a99 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b6e34dd392ac172b42120afc44675a99 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain_MachineState );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MachineState" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_START );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "o";
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

        exception_lineno = 64;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__curr_state, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 64;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b6e34dd392ac172b42120afc44675a99 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b6e34dd392ac172b42120afc44675a99 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b6e34dd392ac172b42120afc44675a99, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b6e34dd392ac172b42120afc44675a99->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b6e34dd392ac172b42120afc44675a99, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b6e34dd392ac172b42120afc44675a99,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_b6e34dd392ac172b42120afc44675a99 == cache_frame_b6e34dd392ac172b42120afc44675a99 )
    {
        Py_DECREF( frame_b6e34dd392ac172b42120afc44675a99 );
    }
    cache_frame_b6e34dd392ac172b42120afc44675a99 = NULL;

    assertFrameObject( frame_b6e34dd392ac172b42120afc44675a99 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine$$$function_2_reset );
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
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine$$$function_2_reset );
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


static PyObject *impl_chardet$codingstatemachine$$$function_3_next_state( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_c = python_pars[ 1 ];
    PyObject *var_byte_class = NULL;
    PyObject *var_curr_state = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    bool tmp_isnot_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    static struct Nuitka_FrameObject *cache_frame_b4d690828e163c4a487299efcdd44be8 = NULL;

    struct Nuitka_FrameObject *frame_b4d690828e163c4a487299efcdd44be8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b4d690828e163c4a487299efcdd44be8, codeobj_b4d690828e163c4a487299efcdd44be8, module_chardet$codingstatemachine, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b4d690828e163c4a487299efcdd44be8 = cache_frame_b4d690828e163c4a487299efcdd44be8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b4d690828e163c4a487299efcdd44be8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b4d690828e163c4a487299efcdd44be8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__model );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_str_plain_class_table;
    tmp_subscribed_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = par_c;

    if ( tmp_subscript_name_2 == NULL )
    {
        Py_DECREF( tmp_subscribed_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_byte_class == NULL );
    var_byte_class = tmp_assign_source_1;

    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__curr_state );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain_MachineState );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MachineState" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_START );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 70;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 70;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assattr_name_1 = const_int_0;
    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__curr_byte_pos, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__model );
    if ( tmp_subscribed_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_3 = const_str_plain_char_len_table;
    tmp_subscribed_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscribed_name_4 );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_4 = var_byte_class;

    if ( tmp_subscript_name_4 == NULL )
    {
        Py_DECREF( tmp_subscribed_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "byte_class" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooo";
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

        exception_lineno = 72;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__curr_char_len, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 72;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    branch_no_1:;
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__curr_state );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__model );
    if ( tmp_subscribed_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 74;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_5 = const_str_plain_class_factor;
    tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    Py_DECREF( tmp_subscribed_name_5 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 74;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = var_byte_class;

    if ( tmp_right_name_2 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "byte_class" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_curr_state == NULL );
    var_curr_state = tmp_assign_source_2;

    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__model );
    if ( tmp_subscribed_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_6 = const_str_plain_state_table;
    tmp_subscribed_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_6 );
    Py_DECREF( tmp_subscribed_name_7 );
    if ( tmp_subscribed_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_7 = var_curr_state;

    if ( tmp_subscript_name_7 == NULL )
    {
        Py_DECREF( tmp_subscribed_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "curr_state" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_7 );
    Py_DECREF( tmp_subscribed_name_6 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__curr_state, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 76;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__curr_byte_pos );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_inplace_assign_attr_1__start == NULL );
    tmp_inplace_assign_attr_1__start = tmp_assign_source_3;

    // Tried code:
    tmp_left_name_3 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_right_name_3 = const_int_pos_1;
    tmp_assign_source_4 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_inplace_assign_attr_1__end == NULL );
    tmp_inplace_assign_attr_1__end = tmp_assign_source_4;

    // Tried code:
    tmp_compare_left_2 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assattr_name_4 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_assattr_name_4 );
    tmp_assattr_target_4 = par_self;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__curr_byte_pos, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    branch_no_2:;
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

    Py_XDECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

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

    Py_XDECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    Py_XDECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    tmp_source_name_9 = par_self;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__curr_state );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4d690828e163c4a487299efcdd44be8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4d690828e163c4a487299efcdd44be8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4d690828e163c4a487299efcdd44be8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b4d690828e163c4a487299efcdd44be8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b4d690828e163c4a487299efcdd44be8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b4d690828e163c4a487299efcdd44be8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b4d690828e163c4a487299efcdd44be8,
        type_description_1,
        par_self,
        par_c,
        var_byte_class,
        var_curr_state
    );


    // Release cached frame.
    if ( frame_b4d690828e163c4a487299efcdd44be8 == cache_frame_b4d690828e163c4a487299efcdd44be8 )
    {
        Py_DECREF( frame_b4d690828e163c4a487299efcdd44be8 );
    }
    cache_frame_b4d690828e163c4a487299efcdd44be8 = NULL;

    assertFrameObject( frame_b4d690828e163c4a487299efcdd44be8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine$$$function_3_next_state );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_c );
    par_c = NULL;

    Py_XDECREF( var_byte_class );
    var_byte_class = NULL;

    Py_XDECREF( var_curr_state );
    var_curr_state = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_c );
    par_c = NULL;

    Py_XDECREF( var_byte_class );
    var_byte_class = NULL;

    Py_XDECREF( var_curr_state );
    var_curr_state = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine$$$function_3_next_state );
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


static PyObject *impl_chardet$codingstatemachine$$$function_4_get_current_charlen( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_52fd25ef0ec6fddf5a33704aabd78181 = NULL;

    struct Nuitka_FrameObject *frame_52fd25ef0ec6fddf5a33704aabd78181;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_52fd25ef0ec6fddf5a33704aabd78181, codeobj_52fd25ef0ec6fddf5a33704aabd78181, module_chardet$codingstatemachine, sizeof(void *) );
    frame_52fd25ef0ec6fddf5a33704aabd78181 = cache_frame_52fd25ef0ec6fddf5a33704aabd78181;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_52fd25ef0ec6fddf5a33704aabd78181 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_52fd25ef0ec6fddf5a33704aabd78181 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__curr_char_len );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_52fd25ef0ec6fddf5a33704aabd78181 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_52fd25ef0ec6fddf5a33704aabd78181 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_52fd25ef0ec6fddf5a33704aabd78181 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_52fd25ef0ec6fddf5a33704aabd78181, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_52fd25ef0ec6fddf5a33704aabd78181->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_52fd25ef0ec6fddf5a33704aabd78181, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_52fd25ef0ec6fddf5a33704aabd78181,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_52fd25ef0ec6fddf5a33704aabd78181 == cache_frame_52fd25ef0ec6fddf5a33704aabd78181 )
    {
        Py_DECREF( frame_52fd25ef0ec6fddf5a33704aabd78181 );
    }
    cache_frame_52fd25ef0ec6fddf5a33704aabd78181 = NULL;

    assertFrameObject( frame_52fd25ef0ec6fddf5a33704aabd78181 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine$$$function_4_get_current_charlen );
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
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine$$$function_4_get_current_charlen );
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


static PyObject *impl_chardet$codingstatemachine$$$function_5_get_coding_state_machine( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_9b65e93017f6153289c28dc85cc0c076 = NULL;

    struct Nuitka_FrameObject *frame_9b65e93017f6153289c28dc85cc0c076;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9b65e93017f6153289c28dc85cc0c076, codeobj_9b65e93017f6153289c28dc85cc0c076, module_chardet$codingstatemachine, sizeof(void *) );
    frame_9b65e93017f6153289c28dc85cc0c076 = cache_frame_9b65e93017f6153289c28dc85cc0c076;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9b65e93017f6153289c28dc85cc0c076 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9b65e93017f6153289c28dc85cc0c076 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__model );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_str_plain_name;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9b65e93017f6153289c28dc85cc0c076 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9b65e93017f6153289c28dc85cc0c076 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9b65e93017f6153289c28dc85cc0c076 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9b65e93017f6153289c28dc85cc0c076, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9b65e93017f6153289c28dc85cc0c076->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9b65e93017f6153289c28dc85cc0c076, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9b65e93017f6153289c28dc85cc0c076,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_9b65e93017f6153289c28dc85cc0c076 == cache_frame_9b65e93017f6153289c28dc85cc0c076 )
    {
        Py_DECREF( frame_9b65e93017f6153289c28dc85cc0c076 );
    }
    cache_frame_9b65e93017f6153289c28dc85cc0c076 = NULL;

    assertFrameObject( frame_9b65e93017f6153289c28dc85cc0c076 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine$$$function_5_get_coding_state_machine );
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
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine$$$function_5_get_coding_state_machine );
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


static PyObject *impl_chardet$codingstatemachine$$$function_6_language( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_d957230a83c200def6f0424159577e9c = NULL;

    struct Nuitka_FrameObject *frame_d957230a83c200def6f0424159577e9c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d957230a83c200def6f0424159577e9c, codeobj_d957230a83c200def6f0424159577e9c, module_chardet$codingstatemachine, sizeof(void *) );
    frame_d957230a83c200def6f0424159577e9c = cache_frame_d957230a83c200def6f0424159577e9c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d957230a83c200def6f0424159577e9c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d957230a83c200def6f0424159577e9c ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__model );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_str_plain_language;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d957230a83c200def6f0424159577e9c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d957230a83c200def6f0424159577e9c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d957230a83c200def6f0424159577e9c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d957230a83c200def6f0424159577e9c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d957230a83c200def6f0424159577e9c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d957230a83c200def6f0424159577e9c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d957230a83c200def6f0424159577e9c,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_d957230a83c200def6f0424159577e9c == cache_frame_d957230a83c200def6f0424159577e9c )
    {
        Py_DECREF( frame_d957230a83c200def6f0424159577e9c );
    }
    cache_frame_d957230a83c200def6f0424159577e9c = NULL;

    assertFrameObject( frame_d957230a83c200def6f0424159577e9c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine$$$function_6_language );
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
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine$$$function_6_language );
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



static PyObject *MAKE_FUNCTION_chardet$codingstatemachine$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$codingstatemachine$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_646b81b59eed0ba57152f435ba5a8819,
#endif
        codeobj_006cdf68a555b7a288bfd814271248e5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_chardet$codingstatemachine,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$codingstatemachine$$$function_2_reset(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$codingstatemachine$$$function_2_reset,
        const_str_plain_reset,
#if PYTHON_VERSION >= 330
        const_str_digest_1bbbf779d0048312dde8e52ffee1c724,
#endif
        codeobj_b6e34dd392ac172b42120afc44675a99,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_chardet$codingstatemachine,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$codingstatemachine$$$function_3_next_state(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$codingstatemachine$$$function_3_next_state,
        const_str_plain_next_state,
#if PYTHON_VERSION >= 330
        const_str_digest_5e7b1ebaf569607b4fa4d499d56738e7,
#endif
        codeobj_b4d690828e163c4a487299efcdd44be8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_chardet$codingstatemachine,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$codingstatemachine$$$function_4_get_current_charlen(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$codingstatemachine$$$function_4_get_current_charlen,
        const_str_plain_get_current_charlen,
#if PYTHON_VERSION >= 330
        const_str_digest_6baf4084ccf81c9d192b4232913c88e0,
#endif
        codeobj_52fd25ef0ec6fddf5a33704aabd78181,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_chardet$codingstatemachine,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$codingstatemachine$$$function_5_get_coding_state_machine(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$codingstatemachine$$$function_5_get_coding_state_machine,
        const_str_plain_get_coding_state_machine,
#if PYTHON_VERSION >= 330
        const_str_digest_5f4cea3e3ab342446422590906c2d3f6,
#endif
        codeobj_9b65e93017f6153289c28dc85cc0c076,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_chardet$codingstatemachine,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$codingstatemachine$$$function_6_language(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$codingstatemachine$$$function_6_language,
        const_str_plain_language,
#if PYTHON_VERSION >= 330
        const_str_digest_4e324d24d8616283ecad6f6af25abd7f,
#endif
        codeobj_d957230a83c200def6f0424159577e9c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_chardet$codingstatemachine,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$codingstatemachine =
{
    PyModuleDef_HEAD_INIT,
    "chardet.codingstatemachine",   /* m_name */
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

MOD_INIT_DECL( chardet$codingstatemachine )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_chardet$codingstatemachine );
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
    puts("chardet.codingstatemachine: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.codingstatemachine: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initchardet$codingstatemachine" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$codingstatemachine = Py_InitModule4(
        "chardet.codingstatemachine",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_chardet$codingstatemachine = PyModule_Create( &mdef_chardet$codingstatemachine );
#endif

    moduledict_chardet$codingstatemachine = MODULE_DICT( module_chardet$codingstatemachine );

    CHECK_OBJECT( module_chardet$codingstatemachine );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_5c8bdb061ec2104fda96a94f85f3c65b, module_chardet$codingstatemachine );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var_reset = NULL;
    PyObject *outline_0_var_next_state = NULL;
    PyObject *outline_0_var_get_current_charlen = NULL;
    PyObject *outline_0_var_get_coding_state_machine = NULL;
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
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
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
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_9e7babafe8f2399282a1f17872800d06_2 = NULL;

    struct Nuitka_FrameObject *frame_9e7babafe8f2399282a1f17872800d06_2;

    struct Nuitka_FrameObject *frame_eb343d1db3fea8aac3f722417a0f2664;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    // Locals dictionary setup.
PyObject *locals_dict_1 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_757854c2605c9b658363f7dcab9f8ee1;
    UPDATE_STRING_DICT0( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_eb343d1db3fea8aac3f722417a0f2664 = MAKE_MODULE_FRAME( codeobj_eb343d1db3fea8aac3f722417a0f2664, module_chardet$codingstatemachine );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_eb343d1db3fea8aac3f722417a0f2664 );
    assert( Py_REFCNT( frame_eb343d1db3fea8aac3f722417a0f2664 ) == 2 );

    // Framed code:
    frame_eb343d1db3fea8aac3f722417a0f2664->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_5c8bdb061ec2104fda96a94f85f3c65b;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_eb343d1db3fea8aac3f722417a0f2664->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_chardet;
    UPDATE_STRING_DICT0( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_plain_logging;
    tmp_globals_name_1 = (PyObject *)moduledict_chardet$codingstatemachine;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_eb343d1db3fea8aac3f722417a0f2664->m_frame.f_lineno = 28;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_7 );
    tmp_name_name_2 = const_str_plain_enums;
    tmp_globals_name_2 = (PyObject *)moduledict_chardet$codingstatemachine;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_MachineState_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_eb343d1db3fea8aac3f722417a0f2664->m_frame.f_lineno = 30;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_MachineState );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain_MachineState, tmp_assign_source_8 );
    tmp_assign_source_9 = const_tuple_type_object_tuple;
    assert( tmp_class_creation_1__bases == NULL );
    Py_INCREF( tmp_assign_source_9 );
    tmp_class_creation_1__bases = tmp_assign_source_9;

    tmp_assign_source_10 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_10;

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


        exception_lineno = 33;

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


        exception_lineno = 33;

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


        exception_lineno = 33;

        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

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
    tmp_assign_source_11 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 33;

        goto try_except_handler_1;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_11;

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


        exception_lineno = 33;

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


        exception_lineno = 33;

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


        exception_lineno = 33;

        goto try_except_handler_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_CodingStateMachine;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_eb343d1db3fea8aac3f722417a0f2664->m_frame.f_lineno = 33;
    tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_12 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_12;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_1);
    locals_dict_1 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_14 = const_str_digest_5c8bdb061ec2104fda96a94f85f3c65b;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_14 );
    outline_0_var___module__ = tmp_assign_source_14;

    tmp_assign_source_15 = const_str_digest_8afb9ef7188501c9cab0e7961f3982e9;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_15 );
    outline_0_var___doc__ = tmp_assign_source_15;

    tmp_assign_source_16 = const_str_plain_CodingStateMachine;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_16 );
    outline_0_var___qualname__ = tmp_assign_source_16;

    tmp_assign_source_17 = MAKE_FUNCTION_chardet$codingstatemachine$$$function_1___init__(  );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_17;

    tmp_assign_source_18 = MAKE_FUNCTION_chardet$codingstatemachine$$$function_2_reset(  );
    assert( outline_0_var_reset == NULL );
    outline_0_var_reset = tmp_assign_source_18;

    tmp_assign_source_19 = MAKE_FUNCTION_chardet$codingstatemachine$$$function_3_next_state(  );
    assert( outline_0_var_next_state == NULL );
    outline_0_var_next_state = tmp_assign_source_19;

    tmp_assign_source_20 = MAKE_FUNCTION_chardet$codingstatemachine$$$function_4_get_current_charlen(  );
    assert( outline_0_var_get_current_charlen == NULL );
    outline_0_var_get_current_charlen = tmp_assign_source_20;

    tmp_assign_source_21 = MAKE_FUNCTION_chardet$codingstatemachine$$$function_5_get_coding_state_machine(  );
    assert( outline_0_var_get_coding_state_machine == NULL );
    outline_0_var_get_coding_state_machine = tmp_assign_source_21;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9e7babafe8f2399282a1f17872800d06_2, codeobj_9e7babafe8f2399282a1f17872800d06, module_chardet$codingstatemachine, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9e7babafe8f2399282a1f17872800d06_2 = cache_frame_9e7babafe8f2399282a1f17872800d06_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9e7babafe8f2399282a1f17872800d06_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9e7babafe8f2399282a1f17872800d06_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_3 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_3 = MAKE_FUNCTION_chardet$codingstatemachine$$$function_6_language(  );
    frame_9e7babafe8f2399282a1f17872800d06_2->m_frame.f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_2 = "NooooooooN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_language == NULL );
    outline_0_var_language = tmp_assign_source_22;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e7babafe8f2399282a1f17872800d06_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e7babafe8f2399282a1f17872800d06_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9e7babafe8f2399282a1f17872800d06_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9e7babafe8f2399282a1f17872800d06_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9e7babafe8f2399282a1f17872800d06_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9e7babafe8f2399282a1f17872800d06_2,
        type_description_2,
        NULL,
        outline_0_var___qualname__,
        outline_0_var___module__,
        outline_0_var___doc__,
        outline_0_var___init__,
        outline_0_var_reset,
        outline_0_var_next_state,
        outline_0_var_get_current_charlen,
        outline_0_var_get_coding_state_machine,
        outline_0_var_language
    );


    // Release cached frame.
    if ( frame_9e7babafe8f2399282a1f17872800d06_2 == cache_frame_9e7babafe8f2399282a1f17872800d06_2 )
    {
        Py_DECREF( frame_9e7babafe8f2399282a1f17872800d06_2 );
    }
    cache_frame_9e7babafe8f2399282a1f17872800d06_2 = NULL;

    assertFrameObject( frame_9e7babafe8f2399282a1f17872800d06_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_2;
    skip_nested_handling_1:;
    tmp_called_name_4 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_2 = const_str_plain_CodingStateMachine;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = locals_dict_1;
    Py_INCREF( tmp_tuple_element_2 );
    if ( outline_0_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain___qualname__,
            outline_0_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 33;

        goto try_except_handler_2;
    }
    if ( outline_0_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain___module__,
            outline_0_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 33;

        goto try_except_handler_2;
    }
    if ( outline_0_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain___doc__,
            outline_0_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 33;

        goto try_except_handler_2;
    }
    if ( outline_0_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain___init__,
            outline_0_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 33;

        goto try_except_handler_2;
    }
    if ( outline_0_var_reset != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_reset,
            outline_0_var_reset
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_reset
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_reset
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 33;

        goto try_except_handler_2;
    }
    if ( outline_0_var_next_state != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_next_state,
            outline_0_var_next_state
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_next_state
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_next_state
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 33;

        goto try_except_handler_2;
    }
    if ( outline_0_var_get_current_charlen != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_get_current_charlen,
            outline_0_var_get_current_charlen
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_get_current_charlen
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_get_current_charlen
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 33;

        goto try_except_handler_2;
    }
    if ( outline_0_var_get_coding_state_machine != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_get_coding_state_machine,
            outline_0_var_get_coding_state_machine
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_get_coding_state_machine
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_get_coding_state_machine
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 33;

        goto try_except_handler_2;
    }
    if ( outline_0_var_language != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_language,
            outline_0_var_language
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_language
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 33;

        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_eb343d1db3fea8aac3f722417a0f2664->m_frame.f_lineno = 33;
    tmp_assign_source_23 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_2;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_23;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine );
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

    Py_XDECREF( outline_0_var_reset );
    outline_0_var_reset = NULL;

    Py_XDECREF( outline_0_var_next_state );
    outline_0_var_next_state = NULL;

    Py_XDECREF( outline_0_var_get_current_charlen );
    outline_0_var_get_current_charlen = NULL;

    Py_XDECREF( outline_0_var_get_coding_state_machine );
    outline_0_var_get_coding_state_machine = NULL;

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

    Py_XDECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    Py_XDECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    Py_XDECREF( outline_0_var_reset );
    outline_0_var_reset = NULL;

    Py_XDECREF( outline_0_var_next_state );
    outline_0_var_next_state = NULL;

    Py_XDECREF( outline_0_var_get_current_charlen );
    outline_0_var_get_current_charlen = NULL;

    Py_XDECREF( outline_0_var_get_coding_state_machine );
    outline_0_var_get_coding_state_machine = NULL;

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
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 33;
    goto try_except_handler_1;
    outline_result_1:;
    tmp_assign_source_13 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain_CodingStateMachine, tmp_assign_source_13 );
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
    RESTORE_FRAME_EXCEPTION( frame_eb343d1db3fea8aac3f722417a0f2664 );
#endif
    popFrameStack();

    assertFrameObject( frame_eb343d1db3fea8aac3f722417a0f2664 );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb343d1db3fea8aac3f722417a0f2664 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eb343d1db3fea8aac3f722417a0f2664, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eb343d1db3fea8aac3f722417a0f2664->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eb343d1db3fea8aac3f722417a0f2664, exception_lineno );
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


    return MOD_RETURN_VALUE( module_chardet$codingstatemachine );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
