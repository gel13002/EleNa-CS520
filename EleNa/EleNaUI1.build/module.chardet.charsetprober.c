/* Generated code for Python source for module 'chardet.charsetprober'
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

/* The _module_chardet$charsetprober is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$charsetprober;
PyDictObject *moduledict_chardet$charsetprober;

/* The module constants used, if any. */
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_getLogger;
static PyObject *const_str_plain_isalpha;
extern PyObject *const_tuple_str_plain_self_str_plain_lang_filter_tuple;
extern PyObject *const_dict_empty;
static PyObject *const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e;
static PyObject *const_tuple_str_plain_buf_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_5750e5d38f91740e3dfa72c2f8aea9ca;
static PyObject *const_str_digest_d3adad97b2e012729b196682491f28f6;
static PyObject *const_tuple_86d712eaf53c925695a13b3ab1d2052b_tuple;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_enums;
static PyObject *const_bytes_chr_62;
extern PyObject *const_str_plain_filter_high_byte_only;
extern PyObject *const_str_plain_sub;
extern PyObject *const_str_plain_get_confidence;
static PyObject *const_str_digest_3f2cd01d68aea2af9a8754bded3275a2;
extern PyObject *const_tuple_str_plain_self_str_plain_buf_tuple;
extern PyObject *const_str_plain_DETECTING;
static PyObject *const_str_digest_107260837257a24dd33ded2c68b97b85;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain___doc__;
static PyObject *const_bytes_chr_128;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain___package__;
extern PyObject *const_float_0_95;
static PyObject *const_tuple_str_digest_ac7ef1983d08896f64f0a36d2144c0a1_tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_lang_filter;
static PyObject *const_str_plain_filtered;
static PyObject *const_str_digest_70ca23c973c1a0de004c414967a80408;
static PyObject *const_str_plain_last_char;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_filter_with_english_letters;
static PyObject *const_str_digest_40c7f3390d5eadc8b2a301a24554493c;
extern PyObject *const_slice_int_neg_1_none_none;
extern PyObject *const_str_plain___loader__;
static PyObject *const_bytes_digest_857f6e4ae06e44e10e00b0636ed9e207;
static PyObject *const_tuple_bytes_chr_32_tuple;
static PyObject *const_str_plain_in_tag;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain_charset_name;
extern PyObject *const_tuple_str_plain_ProbingState_tuple;
static PyObject *const_str_digest_8b29372adbec4b1f958241da0421792c;
extern PyObject *const_str_plain_buf;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_ProbingState;
static PyObject *const_str_digest_4ae3f27cfecb11378d7a141dcab11fb0;
extern PyObject *const_str_plain_reset;
static PyObject *const_str_digest_70860d60d1c19777c3acac2081cae1e7;
static PyObject *const_str_digest_9688abd04bb43b8a7c1d48e86da4b0a2;
static PyObject *const_str_plain_prev;
extern PyObject *const_str_plain_chardet;
static PyObject *const_str_plain_word;
static PyObject *const_str_plain_buf_char;
static PyObject *const_bytes_chr_60;
extern PyObject *const_str_plain_SHORTCUT_THRESHOLD;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_bytes_chr_32;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_bytes_digest_809dc873a952db29517e931db92b9f36;
static PyObject *const_str_digest_9514cd9de70ec5ab00b90cedb8906b68;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_str_digest_fe608024ba381559514d14d9008cc45a;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_words;
extern PyObject *const_str_plain_curr;
static PyObject *const_slice_none_int_neg_1_none;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_findall;
extern PyObject *const_str_plain_logger;
extern PyObject *const_str_plain_state;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_CharSetProber;
static PyObject *const_str_digest_bea83a9d5361fcbb9b98d9a9a4698d32;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain__state;
static PyObject *const_str_digest_ac7ef1983d08896f64f0a36d2144c0a1;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_feed;
static PyObject *const_tuple_3a24cf2ee44c5680320cf741436cd9b6_tuple;
extern PyObject *const_float_0_0;
static PyObject *const_tuple_3fb4591dc1675b2053c9ae02c85bd5b9_tuple;
extern PyObject *const_str_plain_filter_international_words;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_isalpha = UNSTREAM_STRING( &constant_bin[ 30297 ], 7, 1 );
    const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e = UNSTREAM_BYTEARRAY( &constant_bin[ 0 ], 0 );
    const_tuple_str_plain_buf_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_buf_tuple, 0, const_str_plain_buf ); Py_INCREF( const_str_plain_buf );
    const_str_digest_5750e5d38f91740e3dfa72c2f8aea9ca = UNSTREAM_STRING( &constant_bin[ 30304 ], 19, 0 );
    const_str_digest_d3adad97b2e012729b196682491f28f6 = UNSTREAM_STRING( &constant_bin[ 30323 ], 40, 0 );
    const_tuple_86d712eaf53c925695a13b3ab1d2052b_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_86d712eaf53c925695a13b3ab1d2052b_tuple, 0, const_str_plain_buf ); Py_INCREF( const_str_plain_buf );
    const_str_plain_filtered = UNSTREAM_STRING( &constant_bin[ 30363 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_86d712eaf53c925695a13b3ab1d2052b_tuple, 1, const_str_plain_filtered ); Py_INCREF( const_str_plain_filtered );
    const_str_plain_in_tag = UNSTREAM_STRING( &constant_bin[ 30371 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_86d712eaf53c925695a13b3ab1d2052b_tuple, 2, const_str_plain_in_tag ); Py_INCREF( const_str_plain_in_tag );
    const_str_plain_prev = UNSTREAM_STRING( &constant_bin[ 30377 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_86d712eaf53c925695a13b3ab1d2052b_tuple, 3, const_str_plain_prev ); Py_INCREF( const_str_plain_prev );
    PyTuple_SET_ITEM( const_tuple_86d712eaf53c925695a13b3ab1d2052b_tuple, 4, const_str_plain_curr ); Py_INCREF( const_str_plain_curr );
    const_str_plain_buf_char = UNSTREAM_STRING( &constant_bin[ 30381 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_86d712eaf53c925695a13b3ab1d2052b_tuple, 5, const_str_plain_buf_char ); Py_INCREF( const_str_plain_buf_char );
    const_bytes_chr_62 = UNSTREAM_BYTES( &constant_bin[ 533 ], 1 );
    const_str_digest_3f2cd01d68aea2af9a8754bded3275a2 = UNSTREAM_STRING( &constant_bin[ 30389 ], 41, 0 );
    const_str_digest_107260837257a24dd33ded2c68b97b85 = UNSTREAM_STRING( &constant_bin[ 30430 ], 19, 0 );
    const_bytes_chr_128 = UNSTREAM_BYTES( &constant_bin[ 3236 ], 1 );
    const_tuple_str_digest_ac7ef1983d08896f64f0a36d2144c0a1_tuple = PyTuple_New( 1 );
    const_str_digest_ac7ef1983d08896f64f0a36d2144c0a1 = UNSTREAM_STRING( &constant_bin[ 30449 ], 21, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_ac7ef1983d08896f64f0a36d2144c0a1_tuple, 0, const_str_digest_ac7ef1983d08896f64f0a36d2144c0a1 ); Py_INCREF( const_str_digest_ac7ef1983d08896f64f0a36d2144c0a1 );
    const_str_digest_70ca23c973c1a0de004c414967a80408 = UNSTREAM_STRING( &constant_bin[ 30470 ], 18, 0 );
    const_str_plain_last_char = UNSTREAM_STRING( &constant_bin[ 30488 ], 9, 1 );
    const_str_digest_40c7f3390d5eadc8b2a301a24554493c = UNSTREAM_STRING( &constant_bin[ 30497 ], 26, 0 );
    const_bytes_digest_857f6e4ae06e44e10e00b0636ed9e207 = UNSTREAM_BYTES( &constant_bin[ 30523 ], 37 );
    const_tuple_bytes_chr_32_tuple = PyTuple_New( 1 );
    const_bytes_chr_32 = UNSTREAM_BYTES( &constant_bin[ 41 ], 1 );
    PyTuple_SET_ITEM( const_tuple_bytes_chr_32_tuple, 0, const_bytes_chr_32 ); Py_INCREF( const_bytes_chr_32 );
    const_str_digest_8b29372adbec4b1f958241da0421792c = UNSTREAM_STRING( &constant_bin[ 30560 ], 102, 0 );
    const_str_digest_4ae3f27cfecb11378d7a141dcab11fb0 = UNSTREAM_STRING( &constant_bin[ 30662 ], 35, 0 );
    const_str_digest_70860d60d1c19777c3acac2081cae1e7 = UNSTREAM_STRING( &constant_bin[ 30697 ], 456, 0 );
    const_str_digest_9688abd04bb43b8a7c1d48e86da4b0a2 = UNSTREAM_STRING( &constant_bin[ 31153 ], 30, 0 );
    const_str_plain_word = UNSTREAM_STRING( &constant_bin[ 30358 ], 4, 1 );
    const_bytes_chr_60 = UNSTREAM_BYTES( &constant_bin[ 526 ], 1 );
    const_bytes_digest_809dc873a952db29517e931db92b9f36 = UNSTREAM_BYTES( &constant_bin[ 31183 ], 8 );
    const_str_digest_9514cd9de70ec5ab00b90cedb8906b68 = UNSTREAM_STRING( &constant_bin[ 31191 ], 28, 0 );
    const_str_digest_fe608024ba381559514d14d9008cc45a = UNSTREAM_STRING( &constant_bin[ 31219 ], 569, 0 );
    const_str_plain_words = UNSTREAM_STRING( &constant_bin[ 30358 ], 5, 1 );
    const_slice_none_int_neg_1_none = PySlice_New( Py_None, const_int_neg_1, Py_None );
    const_str_digest_bea83a9d5361fcbb9b98d9a9a4698d32 = UNSTREAM_STRING( &constant_bin[ 31788 ], 22, 0 );
    const_tuple_3a24cf2ee44c5680320cf741436cd9b6_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_3a24cf2ee44c5680320cf741436cd9b6_tuple, 0, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    PyTuple_SET_ITEM( const_tuple_3a24cf2ee44c5680320cf741436cd9b6_tuple, 1, const_str_plain___qualname__ ); Py_INCREF( const_str_plain___qualname__ );
    PyTuple_SET_ITEM( const_tuple_3a24cf2ee44c5680320cf741436cd9b6_tuple, 2, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_3a24cf2ee44c5680320cf741436cd9b6_tuple, 3, const_str_plain_SHORTCUT_THRESHOLD ); Py_INCREF( const_str_plain_SHORTCUT_THRESHOLD );
    PyTuple_SET_ITEM( const_tuple_3a24cf2ee44c5680320cf741436cd9b6_tuple, 4, const_str_plain___init__ ); Py_INCREF( const_str_plain___init__ );
    PyTuple_SET_ITEM( const_tuple_3a24cf2ee44c5680320cf741436cd9b6_tuple, 5, const_str_plain_reset ); Py_INCREF( const_str_plain_reset );
    PyTuple_SET_ITEM( const_tuple_3a24cf2ee44c5680320cf741436cd9b6_tuple, 6, const_str_plain_charset_name ); Py_INCREF( const_str_plain_charset_name );
    PyTuple_SET_ITEM( const_tuple_3a24cf2ee44c5680320cf741436cd9b6_tuple, 7, const_str_plain_feed ); Py_INCREF( const_str_plain_feed );
    PyTuple_SET_ITEM( const_tuple_3a24cf2ee44c5680320cf741436cd9b6_tuple, 8, const_str_plain_state ); Py_INCREF( const_str_plain_state );
    PyTuple_SET_ITEM( const_tuple_3a24cf2ee44c5680320cf741436cd9b6_tuple, 9, const_str_plain_get_confidence ); Py_INCREF( const_str_plain_get_confidence );
    PyTuple_SET_ITEM( const_tuple_3a24cf2ee44c5680320cf741436cd9b6_tuple, 10, const_str_plain_filter_high_byte_only ); Py_INCREF( const_str_plain_filter_high_byte_only );
    PyTuple_SET_ITEM( const_tuple_3a24cf2ee44c5680320cf741436cd9b6_tuple, 11, const_str_plain_filter_international_words ); Py_INCREF( const_str_plain_filter_international_words );
    PyTuple_SET_ITEM( const_tuple_3a24cf2ee44c5680320cf741436cd9b6_tuple, 12, const_str_plain_filter_with_english_letters ); Py_INCREF( const_str_plain_filter_with_english_letters );
    const_tuple_3fb4591dc1675b2053c9ae02c85bd5b9_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_3fb4591dc1675b2053c9ae02c85bd5b9_tuple, 0, const_str_plain_buf ); Py_INCREF( const_str_plain_buf );
    PyTuple_SET_ITEM( const_tuple_3fb4591dc1675b2053c9ae02c85bd5b9_tuple, 1, const_str_plain_filtered ); Py_INCREF( const_str_plain_filtered );
    PyTuple_SET_ITEM( const_tuple_3fb4591dc1675b2053c9ae02c85bd5b9_tuple, 2, const_str_plain_words ); Py_INCREF( const_str_plain_words );
    PyTuple_SET_ITEM( const_tuple_3fb4591dc1675b2053c9ae02c85bd5b9_tuple, 3, const_str_plain_word ); Py_INCREF( const_str_plain_word );
    PyTuple_SET_ITEM( const_tuple_3fb4591dc1675b2053c9ae02c85bd5b9_tuple, 4, const_str_plain_last_char ); Py_INCREF( const_str_plain_last_char );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$charsetprober( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4bffa50dc3cfcd78c50400186fa18172;
static PyCodeObject *codeobj_3f12afd452ad7a2ca85157465ee12469;
static PyCodeObject *codeobj_9ee0c29d496923970688b12ca4709762;
static PyCodeObject *codeobj_c776638e969b87d01fa43c60dcac659b;
static PyCodeObject *codeobj_646a0761f4c4afa8f584a7ce5a63222b;
static PyCodeObject *codeobj_f9552873f42de09c7928864c86afcfec;
static PyCodeObject *codeobj_dcb39724d0518383d88b7319295b7800;
static PyCodeObject *codeobj_e63ad8cb984cbb32442fac0e345cf120;
static PyCodeObject *codeobj_3d3b4e314e187ec3db7dc0d3ec05e9d5;
static PyCodeObject *codeobj_a2d83fc16edbf1bd79c15877a2a21999;
static PyCodeObject *codeobj_812cc4a284ec80dc03c6a80e4112e3e7;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_8b29372adbec4b1f958241da0421792c;
    codeobj_4bffa50dc3cfcd78c50400186fa18172 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_9688abd04bb43b8a7c1d48e86da4b0a2, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_3f12afd452ad7a2ca85157465ee12469 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CharSetProber, 35, const_tuple_3a24cf2ee44c5680320cf741436cd9b6_tuple, 0, 0, CO_NOFREE );
    codeobj_9ee0c29d496923970688b12ca4709762 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 39, const_tuple_str_plain_self_str_plain_lang_filter_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c776638e969b87d01fa43c60dcac659b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_charset_name, 47, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_646a0761f4c4afa8f584a7ce5a63222b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_feed, 51, const_tuple_str_plain_self_str_plain_buf_tuple, 2, 0, CO_NOFREE );
    codeobj_f9552873f42de09c7928864c86afcfec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_filter_high_byte_only, 61, const_tuple_str_plain_buf_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dcb39724d0518383d88b7319295b7800 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_filter_international_words, 66, const_tuple_3fb4591dc1675b2053c9ae02c85bd5b9_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e63ad8cb984cbb32442fac0e345cf120 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_filter_with_english_letters, 103, const_tuple_86d712eaf53c925695a13b3ab1d2052b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3d3b4e314e187ec3db7dc0d3ec05e9d5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_confidence, 58, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a2d83fc16edbf1bd79c15877a2a21999 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset, 44, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_812cc4a284ec80dc03c6a80e4112e3e7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_state, 54, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_2_reset(  );


static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_3_charset_name(  );


static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_4_feed(  );


static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_5_state(  );


static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_6_get_confidence(  );


static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_7_filter_high_byte_only(  );


static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_8_filter_international_words(  );


static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_9_filter_with_english_letters(  );


// The module function definitions.
static PyObject *impl_chardet$charsetprober$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_lang_filter = python_pars[ 1 ];
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
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_called_instance_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_9ee0c29d496923970688b12ca4709762 = NULL;

    struct Nuitka_FrameObject *frame_9ee0c29d496923970688b12ca4709762;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9ee0c29d496923970688b12ca4709762, codeobj_9ee0c29d496923970688b12ca4709762, module_chardet$charsetprober, sizeof(void *)+sizeof(void *) );
    frame_9ee0c29d496923970688b12ca4709762 = cache_frame_9ee0c29d496923970688b12ca4709762;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9ee0c29d496923970688b12ca4709762 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9ee0c29d496923970688b12ca4709762 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__state, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_lang_filter;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lang_filter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        type_description_1 = "oo";
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

        exception_lineno = 41;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_lang_filter, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain_logging );

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

        exception_lineno = 42;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_9ee0c29d496923970688b12ca4709762->m_frame.f_lineno = 42;
    tmp_assattr_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_digest_ac7ef1983d08896f64f0a36d2144c0a1_tuple, 0 ) );

    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "oo";
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

        exception_lineno = 42;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_logger, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 42;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9ee0c29d496923970688b12ca4709762 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9ee0c29d496923970688b12ca4709762 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9ee0c29d496923970688b12ca4709762, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9ee0c29d496923970688b12ca4709762->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9ee0c29d496923970688b12ca4709762, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9ee0c29d496923970688b12ca4709762,
        type_description_1,
        par_self,
        par_lang_filter
    );


    // Release cached frame.
    if ( frame_9ee0c29d496923970688b12ca4709762 == cache_frame_9ee0c29d496923970688b12ca4709762 )
    {
        Py_DECREF( frame_9ee0c29d496923970688b12ca4709762 );
    }
    cache_frame_9ee0c29d496923970688b12ca4709762 = NULL;

    assertFrameObject( frame_9ee0c29d496923970688b12ca4709762 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_lang_filter );
    par_lang_filter = NULL;

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

    Py_XDECREF( par_lang_filter );
    par_lang_filter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_1___init__ );
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


static PyObject *impl_chardet$charsetprober$$$function_2_reset( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_a2d83fc16edbf1bd79c15877a2a21999 = NULL;

    struct Nuitka_FrameObject *frame_a2d83fc16edbf1bd79c15877a2a21999;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a2d83fc16edbf1bd79c15877a2a21999, codeobj_a2d83fc16edbf1bd79c15877a2a21999, module_chardet$charsetprober, sizeof(void *) );
    frame_a2d83fc16edbf1bd79c15877a2a21999 = cache_frame_a2d83fc16edbf1bd79c15877a2a21999;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a2d83fc16edbf1bd79c15877a2a21999 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a2d83fc16edbf1bd79c15877a2a21999 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain_ProbingState );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProbingState" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_DETECTING );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
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

        exception_lineno = 45;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__state, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 45;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a2d83fc16edbf1bd79c15877a2a21999 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a2d83fc16edbf1bd79c15877a2a21999 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a2d83fc16edbf1bd79c15877a2a21999, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a2d83fc16edbf1bd79c15877a2a21999->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a2d83fc16edbf1bd79c15877a2a21999, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a2d83fc16edbf1bd79c15877a2a21999,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_a2d83fc16edbf1bd79c15877a2a21999 == cache_frame_a2d83fc16edbf1bd79c15877a2a21999 )
    {
        Py_DECREF( frame_a2d83fc16edbf1bd79c15877a2a21999 );
    }
    cache_frame_a2d83fc16edbf1bd79c15877a2a21999 = NULL;

    assertFrameObject( frame_a2d83fc16edbf1bd79c15877a2a21999 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_2_reset );
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
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_2_reset );
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


static PyObject *impl_chardet$charsetprober$$$function_3_charset_name( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_3_charset_name );
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
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_3_charset_name );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_chardet$charsetprober$$$function_4_feed( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_buf = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_4_feed );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_buf );
    par_buf = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_buf );
    par_buf = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_4_feed );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_chardet$charsetprober$$$function_5_state( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_812cc4a284ec80dc03c6a80e4112e3e7 = NULL;

    struct Nuitka_FrameObject *frame_812cc4a284ec80dc03c6a80e4112e3e7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_812cc4a284ec80dc03c6a80e4112e3e7, codeobj_812cc4a284ec80dc03c6a80e4112e3e7, module_chardet$charsetprober, sizeof(void *) );
    frame_812cc4a284ec80dc03c6a80e4112e3e7 = cache_frame_812cc4a284ec80dc03c6a80e4112e3e7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_812cc4a284ec80dc03c6a80e4112e3e7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_812cc4a284ec80dc03c6a80e4112e3e7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__state );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_812cc4a284ec80dc03c6a80e4112e3e7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_812cc4a284ec80dc03c6a80e4112e3e7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_812cc4a284ec80dc03c6a80e4112e3e7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_812cc4a284ec80dc03c6a80e4112e3e7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_812cc4a284ec80dc03c6a80e4112e3e7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_812cc4a284ec80dc03c6a80e4112e3e7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_812cc4a284ec80dc03c6a80e4112e3e7,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_812cc4a284ec80dc03c6a80e4112e3e7 == cache_frame_812cc4a284ec80dc03c6a80e4112e3e7 )
    {
        Py_DECREF( frame_812cc4a284ec80dc03c6a80e4112e3e7 );
    }
    cache_frame_812cc4a284ec80dc03c6a80e4112e3e7 = NULL;

    assertFrameObject( frame_812cc4a284ec80dc03c6a80e4112e3e7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_5_state );
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
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_5_state );
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


static PyObject *impl_chardet$charsetprober$$$function_6_get_confidence( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = const_float_0_0;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_6_get_confidence );
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
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_6_get_confidence );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_chardet$charsetprober$$$function_7_filter_high_byte_only( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_buf = python_pars[ 0 ];
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_f9552873f42de09c7928864c86afcfec = NULL;

    struct Nuitka_FrameObject *frame_f9552873f42de09c7928864c86afcfec;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f9552873f42de09c7928864c86afcfec, codeobj_f9552873f42de09c7928864c86afcfec, module_chardet$charsetprober, sizeof(void *) );
    frame_f9552873f42de09c7928864c86afcfec = cache_frame_f9552873f42de09c7928864c86afcfec;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f9552873f42de09c7928864c86afcfec );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f9552873f42de09c7928864c86afcfec ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sub );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_bytes_digest_809dc873a952db29517e931db92b9f36;
    tmp_args_element_name_2 = const_bytes_chr_32;
    tmp_args_element_name_3 = par_buf;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "buf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_f9552873f42de09c7928864c86afcfec->m_frame.f_lineno = 63;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_buf;
        par_buf = tmp_assign_source_1;
        Py_XDECREF( old );
    }


#if 0
    RESTORE_FRAME_EXCEPTION( frame_f9552873f42de09c7928864c86afcfec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f9552873f42de09c7928864c86afcfec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f9552873f42de09c7928864c86afcfec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f9552873f42de09c7928864c86afcfec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f9552873f42de09c7928864c86afcfec, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f9552873f42de09c7928864c86afcfec,
        type_description_1,
        par_buf
    );


    // Release cached frame.
    if ( frame_f9552873f42de09c7928864c86afcfec == cache_frame_f9552873f42de09c7928864c86afcfec )
    {
        Py_DECREF( frame_f9552873f42de09c7928864c86afcfec );
    }
    cache_frame_f9552873f42de09c7928864c86afcfec = NULL;

    assertFrameObject( frame_f9552873f42de09c7928864c86afcfec );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = par_buf;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_7_filter_high_byte_only );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_buf );
    Py_DECREF( par_buf );
    par_buf = NULL;

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

    Py_XDECREF( par_buf );
    par_buf = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_7_filter_high_byte_only );
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


static PyObject *impl_chardet$charsetprober$$$function_8_filter_international_words( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_buf = python_pars[ 0 ];
    PyObject *var_filtered = NULL;
    PyObject *var_words = NULL;
    PyObject *var_word = NULL;
    PyObject *var_last_char = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_dcb39724d0518383d88b7319295b7800 = NULL;

    struct Nuitka_FrameObject *frame_dcb39724d0518383d88b7319295b7800;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = BYTEARRAY_COPY( const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e );
    assert( var_filtered == NULL );
    var_filtered = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dcb39724d0518383d88b7319295b7800, codeobj_dcb39724d0518383d88b7319295b7800, module_chardet$charsetprober, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_dcb39724d0518383d88b7319295b7800 = cache_frame_dcb39724d0518383d88b7319295b7800;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dcb39724d0518383d88b7319295b7800 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dcb39724d0518383d88b7319295b7800 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_findall );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_bytes_digest_857f6e4ae06e44e10e00b0636ed9e207;
    tmp_args_element_name_2 = par_buf;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "buf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_dcb39724d0518383d88b7319295b7800->m_frame.f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_words == NULL );
    var_words = tmp_assign_source_2;

    tmp_iter_arg_1 = var_words;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooo";
            exception_lineno = 89;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = var_word;
        var_word = tmp_assign_source_5;
        Py_INCREF( var_word );
        Py_XDECREF( old );
    }

    tmp_source_name_2 = var_filtered;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filtered" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_extend );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_subscribed_name_1 = var_word;

    if ( tmp_subscribed_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "word" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_1 = const_slice_none_int_neg_1_none;
    tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 90;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    frame_dcb39724d0518383d88b7319295b7800->m_frame.f_lineno = 90;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_subscribed_name_2 = var_word;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "word" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_2 = const_slice_int_neg_1_none_none;
    tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_last_char;
        var_last_char = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_called_instance_1 = var_last_char;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_dcb39724d0518383d88b7319295b7800->m_frame.f_lineno = 97;
    tmp_operand_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_isalpha );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_and_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_compexpr_left_1 = var_last_char;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "last_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_compexpr_right_1 = const_bytes_chr_128;
    tmp_and_right_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 97;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
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
    tmp_assign_source_7 = const_bytes_chr_32;
    {
        PyObject *old = var_last_char;
        var_last_char = tmp_assign_source_7;
        Py_INCREF( var_last_char );
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_source_name_3 = var_filtered;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filtered" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_extend );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_4 = var_last_char;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "last_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    frame_dcb39724d0518383d88b7319295b7800->m_frame.f_lineno = 99;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "ooooo";
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

    tmp_return_value = var_filtered;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filtered" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dcb39724d0518383d88b7319295b7800 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dcb39724d0518383d88b7319295b7800 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dcb39724d0518383d88b7319295b7800 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dcb39724d0518383d88b7319295b7800, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dcb39724d0518383d88b7319295b7800->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dcb39724d0518383d88b7319295b7800, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dcb39724d0518383d88b7319295b7800,
        type_description_1,
        par_buf,
        var_filtered,
        var_words,
        var_word,
        var_last_char
    );


    // Release cached frame.
    if ( frame_dcb39724d0518383d88b7319295b7800 == cache_frame_dcb39724d0518383d88b7319295b7800 )
    {
        Py_DECREF( frame_dcb39724d0518383d88b7319295b7800 );
    }
    cache_frame_dcb39724d0518383d88b7319295b7800 = NULL;

    assertFrameObject( frame_dcb39724d0518383d88b7319295b7800 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_8_filter_international_words );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_buf );
    par_buf = NULL;

    Py_XDECREF( var_filtered );
    var_filtered = NULL;

    Py_XDECREF( var_words );
    var_words = NULL;

    Py_XDECREF( var_word );
    var_word = NULL;

    Py_XDECREF( var_last_char );
    var_last_char = NULL;

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

    Py_XDECREF( par_buf );
    par_buf = NULL;

    Py_XDECREF( var_filtered );
    var_filtered = NULL;

    Py_XDECREF( var_words );
    var_words = NULL;

    Py_XDECREF( var_word );
    var_word = NULL;

    Py_XDECREF( var_last_char );
    var_last_char = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_8_filter_international_words );
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


static PyObject *impl_chardet$charsetprober$$$function_9_filter_with_english_letters( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_buf = python_pars[ 0 ];
    PyObject *var_filtered = NULL;
    PyObject *var_in_tag = NULL;
    PyObject *var_prev = NULL;
    PyObject *var_curr = NULL;
    PyObject *var_buf_char = NULL;
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
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_start_name_1;
    PyObject *tmp_start_name_2;
    PyObject *tmp_start_name_3;
    PyObject *tmp_step_name_1;
    PyObject *tmp_step_name_2;
    PyObject *tmp_step_name_3;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_stop_name_2;
    PyObject *tmp_stop_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_xrange_low_1;
    static struct Nuitka_FrameObject *cache_frame_e63ad8cb984cbb32442fac0e345cf120 = NULL;

    struct Nuitka_FrameObject *frame_e63ad8cb984cbb32442fac0e345cf120;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = BYTEARRAY_COPY( const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e );
    assert( var_filtered == NULL );
    var_filtered = tmp_assign_source_1;

    tmp_assign_source_2 = Py_False;
    assert( var_in_tag == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_in_tag = tmp_assign_source_2;

    tmp_assign_source_3 = const_int_0;
    assert( var_prev == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_prev = tmp_assign_source_3;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e63ad8cb984cbb32442fac0e345cf120, codeobj_e63ad8cb984cbb32442fac0e345cf120, module_chardet$charsetprober, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e63ad8cb984cbb32442fac0e345cf120 = cache_frame_e63ad8cb984cbb32442fac0e345cf120;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e63ad8cb984cbb32442fac0e345cf120 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e63ad8cb984cbb32442fac0e345cf120 ) == 2 ); // Frame stack

    // Framed code:
    tmp_len_arg_1 = par_buf;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_xrange_low_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_xrange_low_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
    Py_DECREF( tmp_xrange_low_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
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
            exception_lineno = 119;
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
        PyObject *old = var_curr;
        var_curr = tmp_assign_source_6;
        Py_INCREF( var_curr );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_1 = par_buf;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "buf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_start_name_1 = var_curr;

    CHECK_OBJECT( tmp_start_name_1 );
    tmp_left_name_1 = var_curr;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_int_pos_1;
    tmp_stop_name_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_stop_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_step_name_1 = Py_None;
    tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    Py_DECREF( tmp_stop_name_1 );
    assert( tmp_subscript_name_1 != NULL );
    tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_buf_char;
        var_buf_char = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_buf_char;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_bytes_chr_62;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_8 = Py_False;
    {
        PyObject *old = var_in_tag;
        var_in_tag = tmp_assign_source_8;
        Py_INCREF( var_in_tag );
        Py_XDECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_compare_left_2 = var_buf_char;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "buf_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_2 = const_bytes_chr_60;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_9 = Py_True;
    {
        PyObject *old = var_in_tag;
        var_in_tag = tmp_assign_source_9;
        Py_INCREF( var_in_tag );
        Py_XDECREF( old );
    }

    branch_no_2:;
    branch_end_1:;
    tmp_compexpr_left_1 = var_buf_char;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "buf_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_compexpr_right_1 = const_bytes_chr_128;
    tmp_and_left_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 129;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    Py_DECREF( tmp_and_left_value_1 );
    tmp_called_instance_1 = var_buf_char;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "buf_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    frame_e63ad8cb984cbb32442fac0e345cf120->m_frame.f_lineno = 129;
    tmp_operand_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_isalpha );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    Py_INCREF( tmp_and_right_value_1 );
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
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 129;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_compexpr_left_2 = var_curr;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "curr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_compexpr_right_2 = var_prev;

    if ( tmp_compexpr_right_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prev" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_and_left_value_2 = RICH_COMPARE_GT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 131;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    Py_DECREF( tmp_and_left_value_2 );
    tmp_operand_name_2 = var_in_tag;

    if ( tmp_operand_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "in_tag" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_and_right_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    Py_INCREF( tmp_and_right_value_2 );
    tmp_cond_value_2 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_cond_value_2 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 131;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
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
    tmp_source_name_1 = var_filtered;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filtered" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_extend );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_subscribed_name_2 = par_buf;

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "buf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_start_name_2 = var_prev;

    if ( tmp_start_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prev" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_stop_name_2 = var_curr;

    if ( tmp_stop_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "curr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_step_name_2 = Py_None;
    tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
    assert( tmp_subscript_name_2 != NULL );
    tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscript_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 134;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    frame_e63ad8cb984cbb32442fac0e345cf120->m_frame.f_lineno = 134;
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


        exception_lineno = 134;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_2 = var_filtered;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filtered" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    frame_e63ad8cb984cbb32442fac0e345cf120->m_frame.f_lineno = 136;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_extend, &PyTuple_GET_ITEM( const_tuple_bytes_chr_32_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
    tmp_left_name_2 = var_curr;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "curr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_right_name_2 = const_int_pos_1;
    tmp_assign_source_10 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_prev;
        var_prev = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    branch_no_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
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

    tmp_cond_value_3 = var_in_tag;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "in_tag" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_no_5;
    }
    else
    {
        goto branch_yes_5;
    }
    branch_yes_5:;
    tmp_source_name_2 = var_filtered;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filtered" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 143;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_extend );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_3 = par_buf;

    if ( tmp_subscribed_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "buf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 143;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_3 = var_prev;

    if ( tmp_start_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prev" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 143;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_stop_name_3 = Py_None;
    tmp_step_name_3 = Py_None;
    tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
    assert( tmp_subscript_name_3 != NULL );
    tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscript_name_3 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 143;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_e63ad8cb984cbb32442fac0e345cf120->m_frame.f_lineno = 143;
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


        exception_lineno = 143;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_5:;
    tmp_return_value = var_filtered;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filtered" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e63ad8cb984cbb32442fac0e345cf120 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e63ad8cb984cbb32442fac0e345cf120 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e63ad8cb984cbb32442fac0e345cf120 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e63ad8cb984cbb32442fac0e345cf120, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e63ad8cb984cbb32442fac0e345cf120->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e63ad8cb984cbb32442fac0e345cf120, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e63ad8cb984cbb32442fac0e345cf120,
        type_description_1,
        par_buf,
        var_filtered,
        var_in_tag,
        var_prev,
        var_curr,
        var_buf_char
    );


    // Release cached frame.
    if ( frame_e63ad8cb984cbb32442fac0e345cf120 == cache_frame_e63ad8cb984cbb32442fac0e345cf120 )
    {
        Py_DECREF( frame_e63ad8cb984cbb32442fac0e345cf120 );
    }
    cache_frame_e63ad8cb984cbb32442fac0e345cf120 = NULL;

    assertFrameObject( frame_e63ad8cb984cbb32442fac0e345cf120 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_9_filter_with_english_letters );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_buf );
    par_buf = NULL;

    Py_XDECREF( var_filtered );
    var_filtered = NULL;

    Py_XDECREF( var_in_tag );
    var_in_tag = NULL;

    Py_XDECREF( var_prev );
    var_prev = NULL;

    Py_XDECREF( var_curr );
    var_curr = NULL;

    Py_XDECREF( var_buf_char );
    var_buf_char = NULL;

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

    Py_XDECREF( par_buf );
    par_buf = NULL;

    Py_XDECREF( var_filtered );
    var_filtered = NULL;

    Py_XDECREF( var_in_tag );
    var_in_tag = NULL;

    Py_XDECREF( var_prev );
    var_prev = NULL;

    Py_XDECREF( var_curr );
    var_curr = NULL;

    Py_XDECREF( var_buf_char );
    var_buf_char = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober$$$function_9_filter_with_english_letters );
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



static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$charsetprober$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_bea83a9d5361fcbb9b98d9a9a4698d32,
#endif
        codeobj_9ee0c29d496923970688b12ca4709762,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_chardet$charsetprober,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_2_reset(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$charsetprober$$$function_2_reset,
        const_str_plain_reset,
#if PYTHON_VERSION >= 330
        const_str_digest_107260837257a24dd33ded2c68b97b85,
#endif
        codeobj_a2d83fc16edbf1bd79c15877a2a21999,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_chardet$charsetprober,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_3_charset_name(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$charsetprober$$$function_3_charset_name,
        const_str_plain_charset_name,
#if PYTHON_VERSION >= 330
        const_str_digest_40c7f3390d5eadc8b2a301a24554493c,
#endif
        codeobj_c776638e969b87d01fa43c60dcac659b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_chardet$charsetprober,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_4_feed(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$charsetprober$$$function_4_feed,
        const_str_plain_feed,
#if PYTHON_VERSION >= 330
        const_str_digest_70ca23c973c1a0de004c414967a80408,
#endif
        codeobj_646a0761f4c4afa8f584a7ce5a63222b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_chardet$charsetprober,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_5_state(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$charsetprober$$$function_5_state,
        const_str_plain_state,
#if PYTHON_VERSION >= 330
        const_str_digest_5750e5d38f91740e3dfa72c2f8aea9ca,
#endif
        codeobj_812cc4a284ec80dc03c6a80e4112e3e7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_chardet$charsetprober,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_6_get_confidence(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$charsetprober$$$function_6_get_confidence,
        const_str_plain_get_confidence,
#if PYTHON_VERSION >= 330
        const_str_digest_9514cd9de70ec5ab00b90cedb8906b68,
#endif
        codeobj_3d3b4e314e187ec3db7dc0d3ec05e9d5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_chardet$charsetprober,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_7_filter_high_byte_only(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$charsetprober$$$function_7_filter_high_byte_only,
        const_str_plain_filter_high_byte_only,
#if PYTHON_VERSION >= 330
        const_str_digest_4ae3f27cfecb11378d7a141dcab11fb0,
#endif
        codeobj_f9552873f42de09c7928864c86afcfec,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_chardet$charsetprober,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_8_filter_international_words(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$charsetprober$$$function_8_filter_international_words,
        const_str_plain_filter_international_words,
#if PYTHON_VERSION >= 330
        const_str_digest_d3adad97b2e012729b196682491f28f6,
#endif
        codeobj_dcb39724d0518383d88b7319295b7800,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_chardet$charsetprober,
        const_str_digest_fe608024ba381559514d14d9008cc45a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$charsetprober$$$function_9_filter_with_english_letters(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$charsetprober$$$function_9_filter_with_english_letters,
        const_str_plain_filter_with_english_letters,
#if PYTHON_VERSION >= 330
        const_str_digest_3f2cd01d68aea2af9a8754bded3275a2,
#endif
        codeobj_e63ad8cb984cbb32442fac0e345cf120,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_chardet$charsetprober,
        const_str_digest_70860d60d1c19777c3acac2081cae1e7,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$charsetprober =
{
    PyModuleDef_HEAD_INIT,
    "chardet.charsetprober",   /* m_name */
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

MOD_INIT_DECL( chardet$charsetprober )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_chardet$charsetprober );
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
    puts("chardet.charsetprober: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.charsetprober: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initchardet$charsetprober" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$charsetprober = Py_InitModule4(
        "chardet.charsetprober",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_chardet$charsetprober = PyModule_Create( &mdef_chardet$charsetprober );
#endif

    moduledict_chardet$charsetprober = MODULE_DICT( module_chardet$charsetprober );

    CHECK_OBJECT( module_chardet$charsetprober );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_ac7ef1983d08896f64f0a36d2144c0a1, module_chardet$charsetprober );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var_SHORTCUT_THRESHOLD = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var_reset = NULL;
    PyObject *outline_0_var_charset_name = NULL;
    PyObject *outline_0_var_feed = NULL;
    PyObject *outline_0_var_state = NULL;
    PyObject *outline_0_var_get_confidence = NULL;
    PyObject *outline_0_var_filter_high_byte_only = NULL;
    PyObject *outline_0_var_filter_international_words = NULL;
    PyObject *outline_0_var_filter_with_english_letters = NULL;
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
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_staticmethod_arg_1;
    PyObject *tmp_staticmethod_arg_2;
    PyObject *tmp_staticmethod_arg_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_3f12afd452ad7a2ca85157465ee12469_2 = NULL;

    struct Nuitka_FrameObject *frame_3f12afd452ad7a2ca85157465ee12469_2;

    struct Nuitka_FrameObject *frame_4bffa50dc3cfcd78c50400186fa18172;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    // Locals dictionary setup.
PyObject *locals_dict_1 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_8b29372adbec4b1f958241da0421792c;
    UPDATE_STRING_DICT0( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_4bffa50dc3cfcd78c50400186fa18172 = MAKE_MODULE_FRAME( codeobj_4bffa50dc3cfcd78c50400186fa18172, module_chardet$charsetprober );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_4bffa50dc3cfcd78c50400186fa18172 );
    assert( Py_REFCNT( frame_4bffa50dc3cfcd78c50400186fa18172 ) == 2 );

    // Framed code:
    frame_4bffa50dc3cfcd78c50400186fa18172->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_ac7ef1983d08896f64f0a36d2144c0a1;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_4bffa50dc3cfcd78c50400186fa18172->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_chardet;
    UPDATE_STRING_DICT0( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_plain_logging;
    tmp_globals_name_1 = (PyObject *)moduledict_chardet$charsetprober;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_4bffa50dc3cfcd78c50400186fa18172->m_frame.f_lineno = 29;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_7 );
    tmp_name_name_2 = const_str_plain_re;
    tmp_globals_name_2 = (PyObject *)moduledict_chardet$charsetprober;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_4bffa50dc3cfcd78c50400186fa18172->m_frame.f_lineno = 30;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_8 );
    tmp_name_name_3 = const_str_plain_enums;
    tmp_globals_name_3 = (PyObject *)moduledict_chardet$charsetprober;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_ProbingState_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_4bffa50dc3cfcd78c50400186fa18172->m_frame.f_lineno = 32;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ProbingState );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain_ProbingState, tmp_assign_source_9 );
    tmp_assign_source_10 = const_tuple_type_object_tuple;
    assert( tmp_class_creation_1__bases == NULL );
    Py_INCREF( tmp_assign_source_10 );
    tmp_class_creation_1__bases = tmp_assign_source_10;

    tmp_assign_source_11 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_11;

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


        exception_lineno = 35;

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


        exception_lineno = 35;

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


        exception_lineno = 35;

        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

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
    tmp_assign_source_12 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 35;

        goto try_except_handler_1;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_12;

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


        exception_lineno = 35;

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


        exception_lineno = 35;

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


        exception_lineno = 35;

        goto try_except_handler_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_CharSetProber;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_4bffa50dc3cfcd78c50400186fa18172->m_frame.f_lineno = 35;
    tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_13 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_13;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_1);
    locals_dict_1 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_15 = const_str_digest_ac7ef1983d08896f64f0a36d2144c0a1;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_15 );
    outline_0_var___module__ = tmp_assign_source_15;

    tmp_assign_source_16 = const_str_plain_CharSetProber;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_16 );
    outline_0_var___qualname__ = tmp_assign_source_16;

    tmp_assign_source_17 = const_float_0_95;
    assert( outline_0_var_SHORTCUT_THRESHOLD == NULL );
    Py_INCREF( tmp_assign_source_17 );
    outline_0_var_SHORTCUT_THRESHOLD = tmp_assign_source_17;

    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_18 = MAKE_FUNCTION_chardet$charsetprober$$$function_1___init__( tmp_defaults_1 );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_18;

    tmp_assign_source_19 = MAKE_FUNCTION_chardet$charsetprober$$$function_2_reset(  );
    assert( outline_0_var_reset == NULL );
    outline_0_var_reset = tmp_assign_source_19;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3f12afd452ad7a2ca85157465ee12469_2, codeobj_3f12afd452ad7a2ca85157465ee12469, module_chardet$charsetprober, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3f12afd452ad7a2ca85157465ee12469_2 = cache_frame_3f12afd452ad7a2ca85157465ee12469_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3f12afd452ad7a2ca85157465ee12469_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3f12afd452ad7a2ca85157465ee12469_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_3 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_3 = MAKE_FUNCTION_chardet$charsetprober$$$function_3_charset_name(  );
    frame_3f12afd452ad7a2ca85157465ee12469_2->m_frame.f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_2 = "NoooooNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_charset_name == NULL );
    outline_0_var_charset_name = tmp_assign_source_20;

    tmp_assign_source_21 = MAKE_FUNCTION_chardet$charsetprober$$$function_4_feed(  );
    assert( outline_0_var_feed == NULL );
    outline_0_var_feed = tmp_assign_source_21;

    tmp_called_name_4 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_4 = MAKE_FUNCTION_chardet$charsetprober$$$function_5_state(  );
    frame_3f12afd452ad7a2ca85157465ee12469_2->m_frame.f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_2 = "NoooooooNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_state == NULL );
    outline_0_var_state = tmp_assign_source_22;

    tmp_assign_source_23 = MAKE_FUNCTION_chardet$charsetprober$$$function_6_get_confidence(  );
    assert( outline_0_var_get_confidence == NULL );
    outline_0_var_get_confidence = tmp_assign_source_23;

    tmp_staticmethod_arg_1 = MAKE_FUNCTION_chardet$charsetprober$$$function_7_filter_high_byte_only(  );
    tmp_assign_source_24 = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_1 );
    Py_DECREF( tmp_staticmethod_arg_1 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_2 = "NoooooooooNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_filter_high_byte_only == NULL );
    outline_0_var_filter_high_byte_only = tmp_assign_source_24;

    tmp_staticmethod_arg_2 = MAKE_FUNCTION_chardet$charsetprober$$$function_8_filter_international_words(  );
    tmp_assign_source_25 = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_2 );
    Py_DECREF( tmp_staticmethod_arg_2 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_2 = "NooooooooooNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_filter_international_words == NULL );
    outline_0_var_filter_international_words = tmp_assign_source_25;

    tmp_staticmethod_arg_3 = MAKE_FUNCTION_chardet$charsetprober$$$function_9_filter_with_english_letters(  );
    tmp_assign_source_26 = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_3 );
    Py_DECREF( tmp_staticmethod_arg_3 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_2 = "NoooooooooooN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_filter_with_english_letters == NULL );
    outline_0_var_filter_with_english_letters = tmp_assign_source_26;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f12afd452ad7a2ca85157465ee12469_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f12afd452ad7a2ca85157465ee12469_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3f12afd452ad7a2ca85157465ee12469_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3f12afd452ad7a2ca85157465ee12469_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3f12afd452ad7a2ca85157465ee12469_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3f12afd452ad7a2ca85157465ee12469_2,
        type_description_2,
        NULL,
        outline_0_var___qualname__,
        outline_0_var___module__,
        outline_0_var_SHORTCUT_THRESHOLD,
        outline_0_var___init__,
        outline_0_var_reset,
        outline_0_var_charset_name,
        outline_0_var_feed,
        outline_0_var_state,
        outline_0_var_get_confidence,
        outline_0_var_filter_high_byte_only,
        outline_0_var_filter_international_words,
        outline_0_var_filter_with_english_letters
    );


    // Release cached frame.
    if ( frame_3f12afd452ad7a2ca85157465ee12469_2 == cache_frame_3f12afd452ad7a2ca85157465ee12469_2 )
    {
        Py_DECREF( frame_3f12afd452ad7a2ca85157465ee12469_2 );
    }
    cache_frame_3f12afd452ad7a2ca85157465ee12469_2 = NULL;

    assertFrameObject( frame_3f12afd452ad7a2ca85157465ee12469_2 );

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
    tmp_tuple_element_2 = const_str_plain_CharSetProber;
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

        exception_lineno = 35;

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

        exception_lineno = 35;

        goto try_except_handler_2;
    }
    if ( outline_0_var_SHORTCUT_THRESHOLD != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_SHORTCUT_THRESHOLD,
            outline_0_var_SHORTCUT_THRESHOLD
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_SHORTCUT_THRESHOLD
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_SHORTCUT_THRESHOLD
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

        exception_lineno = 35;

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

        exception_lineno = 35;

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

        exception_lineno = 35;

        goto try_except_handler_2;
    }
    if ( outline_0_var_charset_name != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_charset_name,
            outline_0_var_charset_name
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_charset_name
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 35;

        goto try_except_handler_2;
    }
    if ( outline_0_var_feed != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_feed,
            outline_0_var_feed
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_feed
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_feed
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

        exception_lineno = 35;

        goto try_except_handler_2;
    }
    if ( outline_0_var_state != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_state,
            outline_0_var_state
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_state
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_state
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

        exception_lineno = 35;

        goto try_except_handler_2;
    }
    if ( outline_0_var_get_confidence != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_get_confidence,
            outline_0_var_get_confidence
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_get_confidence
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_get_confidence
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

        exception_lineno = 35;

        goto try_except_handler_2;
    }
    if ( outline_0_var_filter_high_byte_only != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_filter_high_byte_only,
            outline_0_var_filter_high_byte_only
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_filter_high_byte_only
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_filter_high_byte_only
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

        exception_lineno = 35;

        goto try_except_handler_2;
    }
    if ( outline_0_var_filter_international_words != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_filter_international_words,
            outline_0_var_filter_international_words
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_filter_international_words
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_filter_international_words
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

        exception_lineno = 35;

        goto try_except_handler_2;
    }
    if ( outline_0_var_filter_with_english_letters != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_filter_with_english_letters,
            outline_0_var_filter_with_english_letters
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_filter_with_english_letters
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_filter_with_english_letters
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

        exception_lineno = 35;

        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_4bffa50dc3cfcd78c50400186fa18172->m_frame.f_lineno = 35;
    tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_2;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_27;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober );
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

    Py_XDECREF( outline_0_var_SHORTCUT_THRESHOLD );
    outline_0_var_SHORTCUT_THRESHOLD = NULL;

    Py_XDECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    Py_XDECREF( outline_0_var_reset );
    outline_0_var_reset = NULL;

    Py_XDECREF( outline_0_var_charset_name );
    outline_0_var_charset_name = NULL;

    Py_XDECREF( outline_0_var_feed );
    outline_0_var_feed = NULL;

    Py_XDECREF( outline_0_var_state );
    outline_0_var_state = NULL;

    Py_XDECREF( outline_0_var_get_confidence );
    outline_0_var_get_confidence = NULL;

    Py_XDECREF( outline_0_var_filter_high_byte_only );
    outline_0_var_filter_high_byte_only = NULL;

    Py_XDECREF( outline_0_var_filter_international_words );
    outline_0_var_filter_international_words = NULL;

    Py_XDECREF( outline_0_var_filter_with_english_letters );
    outline_0_var_filter_with_english_letters = NULL;

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

    Py_XDECREF( outline_0_var_SHORTCUT_THRESHOLD );
    outline_0_var_SHORTCUT_THRESHOLD = NULL;

    Py_XDECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    Py_XDECREF( outline_0_var_reset );
    outline_0_var_reset = NULL;

    Py_XDECREF( outline_0_var_charset_name );
    outline_0_var_charset_name = NULL;

    Py_XDECREF( outline_0_var_feed );
    outline_0_var_feed = NULL;

    Py_XDECREF( outline_0_var_state );
    outline_0_var_state = NULL;

    Py_XDECREF( outline_0_var_get_confidence );
    outline_0_var_get_confidence = NULL;

    Py_XDECREF( outline_0_var_filter_high_byte_only );
    outline_0_var_filter_high_byte_only = NULL;

    Py_XDECREF( outline_0_var_filter_international_words );
    outline_0_var_filter_international_words = NULL;

    Py_XDECREF( outline_0_var_filter_with_english_letters );
    outline_0_var_filter_with_english_letters = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$charsetprober );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 35;
    goto try_except_handler_1;
    outline_result_1:;
    tmp_assign_source_14 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_chardet$charsetprober, (Nuitka_StringObject *)const_str_plain_CharSetProber, tmp_assign_source_14 );
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
    RESTORE_FRAME_EXCEPTION( frame_4bffa50dc3cfcd78c50400186fa18172 );
#endif
    popFrameStack();

    assertFrameObject( frame_4bffa50dc3cfcd78c50400186fa18172 );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4bffa50dc3cfcd78c50400186fa18172 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4bffa50dc3cfcd78c50400186fa18172, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4bffa50dc3cfcd78c50400186fa18172->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4bffa50dc3cfcd78c50400186fa18172, exception_lineno );
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


    return MOD_RETURN_VALUE( module_chardet$charsetprober );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
