/* Generated code for Python source for module 'urllib3.packages.ssl_match_hostname._implementation'
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

/* The _module_urllib3$packages$ssl_match_hostname$_implementation is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$packages$ssl_match_hostname$_implementation;
PyDictObject *moduledict_urllib3$packages$ssl_match_hostname$_implementation;

/* The module constants used, if any. */
static PyObject *const_tuple_str_plain_ipname_str_plain_host_ip_str_plain_ip_tuple;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_2827a02148585180db385ecab4334673;
extern PyObject *const_str_plain_CertificateError;
static PyObject *const_str_plain_dnsnames;
extern PyObject *const_dict_empty;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_4886b0b2f8d491d0ce3dae89a464bee3;
static PyObject *const_str_plain_san;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_tuple_67f07609e3644b8c19de10c902eeeb48_tuple;
static PyObject *const_str_digest_ef0818d8044e7af61529baa65d56b281;
extern PyObject *const_str_plain_commonName;
static PyObject *const_str_plain_host_ip;
extern PyObject *const_str_chr_42;
static PyObject *const_str_digest_9d2ee80bc8b6b38510f1287d710300dd;
extern PyObject *const_str_plain_sub;
static PyObject *const_str_plain__ipaddress_match;
extern PyObject *const_str_digest_e56abf9379492360b5ea0226e2912c30;
extern PyObject *const_str_plain_match_hostname;
static PyObject *const_tuple_str_plain_subject_tuple_empty_tuple;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_repr;
static PyObject *const_str_digest_cb4b3ec76f0e04caf09490892f20768f;
extern PyObject *const_str_digest_5445f5c70d719d755f5eecf9a5301ba4;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_dot;
extern PyObject *const_str_plain_lower;
static PyObject *const_str_plain_max_wildcards;
extern PyObject *const_str_plain___package__;
static PyObject *const_tuple_str_digest_a21015eda0a35a65e0c45d13bd50f6cd_tuple;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_bf444768bd6e1671ab2a507b3ebb9a78;
extern PyObject *const_str_plain_value;
static PyObject *const_str_digest_67325c16e6049950668b4d54af8157ef;
extern PyObject *const_str_plain_unicode;
extern PyObject *const_str_plain_IGNORECASE;
extern PyObject *const_str_plain_DNS;
static PyObject *const_str_plain_frag;
static PyObject *const_str_digest_f66ea29fd347bd1e1c153f7fc85b4c4d;
static PyObject *const_tuple_2093a7623858190feac335b978220df2_tuple;
extern PyObject *const_str_plain_parts;
static PyObject *const_str_digest_a21015eda0a35a65e0c45d13bd50f6cd;
extern PyObject *const_tuple_str_dot_tuple;
static PyObject *const_str_plain__dnsname_match;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_93d15f13bc4ddb17dc6e54285f512f62;
static PyObject *const_str_digest_46edd689caa2c90961077381033a48f1;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain___loader__;
static PyObject *const_str_digest_c8d28aa411cf9a88d9aed194157300dd;
extern PyObject *const_str_plain_errors;
static PyObject *const_str_plain_ip_address;
extern PyObject *const_str_plain_compile;
static PyObject *const_str_plain_ipaddress;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_match;
extern PyObject *const_str_plain_cert;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain_ip;
extern PyObject *const_tuple_int_pos_3_tuple;
extern PyObject *const_str_plain_strict;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_str_plain_count;
extern PyObject *const_str_plain___version__;
static PyObject *const_tuple_str_digest_3f122124238c5ee400de97226dfddd9b_tuple;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_digest_b8a3e24bd480f9d749e7f38794d9a804_tuple;
extern PyObject *const_str_plain_subject;
static PyObject *const_str_digest_b8ae32441dc7540b307e3e1dd1d9ff26;
extern PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
static PyObject *const_str_plain_ipname;
static PyObject *const_str_digest_3f122124238c5ee400de97226dfddd9b;
static PyObject *const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple;
static PyObject *const_str_digest_3b35d51050a71678e6a91f8af50bcd6c;
static PyObject *const_str_digest_a1821d5248f5f2bbed11f0437de80314;
static PyObject *const_str_plain_dn;
extern PyObject *const_tuple_str_plain_subjectAltName_tuple_empty_tuple;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_pats;
static PyObject *const_str_plain__to_unicode;
static PyObject *const_str_digest_cee8a0917b60d1bd22f94d241f22b50b;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_subjectAltName;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_digest_b8a3e24bd480f9d749e7f38794d9a804;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_hostname;
extern PyObject *const_tuple_str_plain_obj_tuple;
extern PyObject *const_str_plain_key;
static PyObject *const_str_plain_remainder;
static PyObject *const_str_plain_leftmost;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_rstrip;
static PyObject *const_str_digest_a0db21d4919b03bd7d8ccb97e7a49f28;
extern PyObject *const_str_plain_version_info;
static PyObject *const_dict_d42f90a6a4ebac59a20d994abd2b5b60;
extern PyObject *const_str_digest_76d751ede7bd087f9346e5a615d3c397;
extern PyObject *const_str_plain_get;
static PyObject *const_str_plain_wildcards;
extern PyObject *const_str_plain_ascii;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_pat;
static PyObject *const_str_plain_escape;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_ipname_str_plain_host_ip_str_plain_ip_tuple = PyTuple_New( 3 );
    const_str_plain_ipname = UNSTREAM_STRING( &constant_bin[ 893168 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ipname_str_plain_host_ip_str_plain_ip_tuple, 0, const_str_plain_ipname ); Py_INCREF( const_str_plain_ipname );
    const_str_plain_host_ip = UNSTREAM_STRING( &constant_bin[ 893174 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ipname_str_plain_host_ip_str_plain_ip_tuple, 1, const_str_plain_host_ip ); Py_INCREF( const_str_plain_host_ip );
    PyTuple_SET_ITEM( const_tuple_str_plain_ipname_str_plain_host_ip_str_plain_ip_tuple, 2, const_str_plain_ip ); Py_INCREF( const_str_plain_ip );
    const_str_digest_2827a02148585180db385ecab4334673 = UNSTREAM_STRING( &constant_bin[ 893181 ], 28, 0 );
    const_str_plain_dnsnames = UNSTREAM_STRING( &constant_bin[ 893209 ], 8, 1 );
    const_str_digest_4886b0b2f8d491d0ce3dae89a464bee3 = UNSTREAM_STRING( &constant_bin[ 799248 ], 2, 0 );
    const_str_plain_san = UNSTREAM_STRING( &constant_bin[ 893217 ], 3, 1 );
    const_tuple_67f07609e3644b8c19de10c902eeeb48_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_67f07609e3644b8c19de10c902eeeb48_tuple, 0, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    PyTuple_SET_ITEM( const_tuple_67f07609e3644b8c19de10c902eeeb48_tuple, 1, const_str_plain_hostname ); Py_INCREF( const_str_plain_hostname );
    PyTuple_SET_ITEM( const_tuple_67f07609e3644b8c19de10c902eeeb48_tuple, 2, const_str_plain_host_ip ); Py_INCREF( const_str_plain_host_ip );
    PyTuple_SET_ITEM( const_tuple_67f07609e3644b8c19de10c902eeeb48_tuple, 3, const_str_plain_dnsnames ); Py_INCREF( const_str_plain_dnsnames );
    PyTuple_SET_ITEM( const_tuple_67f07609e3644b8c19de10c902eeeb48_tuple, 4, const_str_plain_san ); Py_INCREF( const_str_plain_san );
    PyTuple_SET_ITEM( const_tuple_67f07609e3644b8c19de10c902eeeb48_tuple, 5, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_67f07609e3644b8c19de10c902eeeb48_tuple, 6, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_67f07609e3644b8c19de10c902eeeb48_tuple, 7, const_str_plain_sub ); Py_INCREF( const_str_plain_sub );
    const_str_digest_ef0818d8044e7af61529baa65d56b281 = UNSTREAM_STRING( &constant_bin[ 893220 ], 132, 0 );
    const_str_digest_9d2ee80bc8b6b38510f1287d710300dd = UNSTREAM_STRING( &constant_bin[ 893352 ], 51, 0 );
    const_str_plain__ipaddress_match = UNSTREAM_STRING( &constant_bin[ 893403 ], 16, 1 );
    const_tuple_str_plain_subject_tuple_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_subject_tuple_empty_tuple, 0, const_str_plain_subject ); Py_INCREF( const_str_plain_subject );
    PyTuple_SET_ITEM( const_tuple_str_plain_subject_tuple_empty_tuple, 1, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    const_str_digest_cb4b3ec76f0e04caf09490892f20768f = UNSTREAM_STRING( &constant_bin[ 893419 ], 297, 0 );
    const_str_plain_max_wildcards = UNSTREAM_STRING( &constant_bin[ 893716 ], 13, 1 );
    const_tuple_str_digest_a21015eda0a35a65e0c45d13bd50f6cd_tuple = PyTuple_New( 1 );
    const_str_digest_a21015eda0a35a65e0c45d13bd50f6cd = UNSTREAM_STRING( &constant_bin[ 893729 ], 5, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a21015eda0a35a65e0c45d13bd50f6cd_tuple, 0, const_str_digest_a21015eda0a35a65e0c45d13bd50f6cd ); Py_INCREF( const_str_digest_a21015eda0a35a65e0c45d13bd50f6cd );
    const_str_digest_bf444768bd6e1671ab2a507b3ebb9a78 = UNSTREAM_STRING( &constant_bin[ 893734 ], 2, 0 );
    const_str_digest_67325c16e6049950668b4d54af8157ef = UNSTREAM_STRING( &constant_bin[ 893736 ], 104, 0 );
    const_str_plain_frag = UNSTREAM_STRING( &constant_bin[ 846413 ], 4, 1 );
    const_str_digest_f66ea29fd347bd1e1c153f7fc85b4c4d = UNSTREAM_STRING( &constant_bin[ 893840 ], 116, 0 );
    const_tuple_2093a7623858190feac335b978220df2_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_2093a7623858190feac335b978220df2_tuple, 0, const_str_digest_4886b0b2f8d491d0ce3dae89a464bee3 ); Py_INCREF( const_str_digest_4886b0b2f8d491d0ce3dae89a464bee3 );
    const_str_digest_93d15f13bc4ddb17dc6e54285f512f62 = UNSTREAM_STRING( &constant_bin[ 893956 ], 5, 0 );
    PyTuple_SET_ITEM( const_tuple_2093a7623858190feac335b978220df2_tuple, 1, const_str_digest_93d15f13bc4ddb17dc6e54285f512f62 ); Py_INCREF( const_str_digest_93d15f13bc4ddb17dc6e54285f512f62 );
    const_str_plain__dnsname_match = UNSTREAM_STRING( &constant_bin[ 893961 ], 14, 1 );
    const_str_digest_46edd689caa2c90961077381033a48f1 = UNSTREAM_STRING( &constant_bin[ 893975 ], 7, 0 );
    const_str_digest_c8d28aa411cf9a88d9aed194157300dd = UNSTREAM_STRING( &constant_bin[ 893982 ], 2, 0 );
    const_str_plain_ip_address = UNSTREAM_STRING( &constant_bin[ 893984 ], 10, 1 );
    const_str_plain_ipaddress = UNSTREAM_STRING( &constant_bin[ 893404 ], 9, 1 );
    const_tuple_str_digest_3f122124238c5ee400de97226dfddd9b_tuple = PyTuple_New( 1 );
    const_str_digest_3f122124238c5ee400de97226dfddd9b = UNSTREAM_STRING( &constant_bin[ 642165 ], 4, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_3f122124238c5ee400de97226dfddd9b_tuple, 0, const_str_digest_3f122124238c5ee400de97226dfddd9b ); Py_INCREF( const_str_digest_3f122124238c5ee400de97226dfddd9b );
    const_tuple_str_digest_b8a3e24bd480f9d749e7f38794d9a804_tuple = PyTuple_New( 1 );
    const_str_digest_b8a3e24bd480f9d749e7f38794d9a804 = UNSTREAM_STRING( &constant_bin[ 893994 ], 61, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b8a3e24bd480f9d749e7f38794d9a804_tuple, 0, const_str_digest_b8a3e24bd480f9d749e7f38794d9a804 ); Py_INCREF( const_str_digest_b8a3e24bd480f9d749e7f38794d9a804 );
    const_str_digest_b8ae32441dc7540b307e3e1dd1d9ff26 = UNSTREAM_STRING( &constant_bin[ 894055 ], 74, 0 );
    const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple = PyTuple_New( 10 );
    const_str_plain_dn = UNSTREAM_STRING( &constant_bin[ 610284 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple, 0, const_str_plain_dn ); Py_INCREF( const_str_plain_dn );
    PyTuple_SET_ITEM( const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple, 1, const_str_plain_hostname ); Py_INCREF( const_str_plain_hostname );
    PyTuple_SET_ITEM( const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple, 2, const_str_plain_max_wildcards ); Py_INCREF( const_str_plain_max_wildcards );
    const_str_plain_pats = UNSTREAM_STRING( &constant_bin[ 894129 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple, 3, const_str_plain_pats ); Py_INCREF( const_str_plain_pats );
    PyTuple_SET_ITEM( const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple, 4, const_str_plain_parts ); Py_INCREF( const_str_plain_parts );
    const_str_plain_leftmost = UNSTREAM_STRING( &constant_bin[ 894133 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple, 5, const_str_plain_leftmost ); Py_INCREF( const_str_plain_leftmost );
    const_str_plain_remainder = UNSTREAM_STRING( &constant_bin[ 894141 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple, 6, const_str_plain_remainder ); Py_INCREF( const_str_plain_remainder );
    const_str_plain_wildcards = UNSTREAM_STRING( &constant_bin[ 893720 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple, 7, const_str_plain_wildcards ); Py_INCREF( const_str_plain_wildcards );
    PyTuple_SET_ITEM( const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple, 8, const_str_plain_frag ); Py_INCREF( const_str_plain_frag );
    PyTuple_SET_ITEM( const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple, 9, const_str_plain_pat ); Py_INCREF( const_str_plain_pat );
    const_str_digest_3b35d51050a71678e6a91f8af50bcd6c = UNSTREAM_STRING( &constant_bin[ 894150 ], 38, 0 );
    const_str_digest_a1821d5248f5f2bbed11f0437de80314 = UNSTREAM_STRING( &constant_bin[ 894188 ], 60, 0 );
    const_str_plain__to_unicode = UNSTREAM_STRING( &constant_bin[ 894248 ], 11, 1 );
    const_str_digest_cee8a0917b60d1bd22f94d241f22b50b = UNSTREAM_STRING( &constant_bin[ 894259 ], 136, 0 );
    const_str_digest_a0db21d4919b03bd7d8ccb97e7a49f28 = UNSTREAM_STRING( &constant_bin[ 894395 ], 44, 0 );
    const_dict_d42f90a6a4ebac59a20d994abd2b5b60 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_d42f90a6a4ebac59a20d994abd2b5b60, const_str_plain_encoding, const_str_plain_ascii );
    PyDict_SetItem( const_dict_d42f90a6a4ebac59a20d994abd2b5b60, const_str_plain_errors, const_str_plain_strict );
    assert( PyDict_Size( const_dict_d42f90a6a4ebac59a20d994abd2b5b60 ) == 2 );
    const_str_plain_escape = UNSTREAM_STRING( &constant_bin[ 35009 ], 6, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$packages$ssl_match_hostname$_implementation( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_1fa3208c8eeba4fa02e881cfa68ba7f3;
static PyCodeObject *codeobj_6c03a31065b6637bca1bd6d7d6926c2b;
static PyCodeObject *codeobj_91ee2f5b1127ee62e4a2d624e89fad69;
static PyCodeObject *codeobj_de5374beb4815b257b5a4e1155fc4ef4;
static PyCodeObject *codeobj_6ec2fd53280eb5e6dc476005c7cc7a49;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_ef0818d8044e7af61529baa65d56b281;
    codeobj_1fa3208c8eeba4fa02e881cfa68ba7f3 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_a1821d5248f5f2bbed11f0437de80314, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_6c03a31065b6637bca1bd6d7d6926c2b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__dnsname_match, 26, const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_91ee2f5b1127ee62e4a2d624e89fad69 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__ipaddress_match, 84, const_tuple_str_plain_ipname_str_plain_host_ip_str_plain_ip_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_de5374beb4815b257b5a4e1155fc4ef4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__to_unicode, 79, const_tuple_str_plain_obj_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6ec2fd53280eb5e6dc476005c7cc7a49 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_match_hostname, 96, const_tuple_67f07609e3644b8c19de10c902eeeb48_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_urllib3$packages$ssl_match_hostname$_implementation$$$function_1__dnsname_match( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$packages$ssl_match_hostname$_implementation$$$function_2__to_unicode(  );


static PyObject *MAKE_FUNCTION_urllib3$packages$ssl_match_hostname$_implementation$$$function_3__ipaddress_match(  );


static PyObject *MAKE_FUNCTION_urllib3$packages$ssl_match_hostname$_implementation$$$function_4_match_hostname(  );


// The module function definitions.
static PyObject *impl_urllib3$packages$ssl_match_hostname$_implementation$$$function_1__dnsname_match( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dn = python_pars[ 0 ];
    PyObject *par_hostname = python_pars[ 1 ];
    PyObject *par_max_wildcards = python_pars[ 2 ];
    PyObject *var_pats = NULL;
    PyObject *var_parts = NULL;
    PyObject *var_leftmost = NULL;
    PyObject *var_remainder = NULL;
    PyObject *var_wildcards = NULL;
    PyObject *var_frag = NULL;
    PyObject *var_pat = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_instance_8;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_next_source_1;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
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
    PyObject *tmp_source_name_10;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6c03a31065b6637bca1bd6d7d6926c2b = NULL;

    struct Nuitka_FrameObject *frame_6c03a31065b6637bca1bd6d7d6926c2b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_pats == NULL );
    var_pats = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6c03a31065b6637bca1bd6d7d6926c2b, codeobj_6c03a31065b6637bca1bd6d7d6926c2b, module_urllib3$packages$ssl_match_hostname$_implementation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6c03a31065b6637bca1bd6d7d6926c2b = cache_frame_6c03a31065b6637bca1bd6d7d6926c2b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6c03a31065b6637bca1bd6d7d6926c2b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6c03a31065b6637bca1bd6d7d6926c2b ) == 2 ); // Frame stack

    // Framed code:
    tmp_cond_value_1 = par_dn;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "oooooooooo";
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_instance_1 = par_dn;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_6c03a31065b6637bca1bd6d7d6926c2b->m_frame.f_lineno = 37;
    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_parts == NULL );
    var_parts = tmp_assign_source_2;

    tmp_subscribed_name_1 = var_parts;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_leftmost == NULL );
    var_leftmost = tmp_assign_source_3;

    tmp_subscribed_name_2 = var_parts;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = const_slice_int_pos_1_none_none;
    tmp_assign_source_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_remainder == NULL );
    var_remainder = tmp_assign_source_4;

    tmp_called_instance_2 = var_leftmost;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "leftmost" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_6c03a31065b6637bca1bd6d7d6926c2b->m_frame.f_lineno = 41;
    tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_count, &PyTuple_GET_ITEM( const_tuple_str_chr_42_tuple, 0 ) );

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_wildcards == NULL );
    var_wildcards = tmp_assign_source_5;

    tmp_compare_left_1 = var_wildcards;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = par_max_wildcards;

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "max_wildcards" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_CertificateError );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CertificateError );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CertificateError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_digest_a0db21d4919b03bd7d8ccb97e7a49f28;
    tmp_operand_name_1 = par_dn;

    if ( tmp_operand_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_6c03a31065b6637bca1bd6d7d6926c2b->m_frame.f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 47;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_cond_value_2 = var_wildcards;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "wildcards" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_called_instance_3 = par_dn;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_6c03a31065b6637bca1bd6d7d6926c2b->m_frame.f_lineno = 52;
    tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_lower );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_4 = par_hostname;

    if ( tmp_called_instance_4 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_6c03a31065b6637bca1bd6d7d6926c2b->m_frame.f_lineno = 52;
    tmp_compexpr_right_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_lower );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 52;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_compare_left_2 = var_leftmost;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "leftmost" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_str_chr_42;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_instance_5 = var_pats;

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pats" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_6c03a31065b6637bca1bd6d7d6926c2b->m_frame.f_lineno = 60;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_append, &PyTuple_GET_ITEM( const_tuple_str_digest_a21015eda0a35a65e0c45d13bd50f6cd_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_4;
    branch_no_4:;
    tmp_called_instance_6 = var_leftmost;

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "leftmost" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_6c03a31065b6637bca1bd6d7d6926c2b->m_frame.f_lineno = 61;
    tmp_or_left_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_digest_3f122124238c5ee400de97226dfddd9b_tuple, 0 ) );

    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 61;
        type_description_1 = "oooooooooo";
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
    Py_DECREF( tmp_or_left_value_1 );
    tmp_called_instance_7 = par_hostname;

    if ( tmp_called_instance_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_6c03a31065b6637bca1bd6d7d6926c2b->m_frame.f_lineno = 61;
    tmp_or_right_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_digest_3f122124238c5ee400de97226dfddd9b_tuple, 0 ) );

    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_3 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 61;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_1 = var_pats;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pats" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_escape );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 66;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_leftmost;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "leftmost" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_6c03a31065b6637bca1bd6d7d6926c2b->m_frame.f_lineno = 66;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 66;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_6c03a31065b6637bca1bd6d7d6926c2b->m_frame.f_lineno = 66;
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


        exception_lineno = 66;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_5;
    branch_no_5:;
    tmp_source_name_3 = var_pats;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pats" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_escape );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 69;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = var_leftmost;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "leftmost" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_6c03a31065b6637bca1bd6d7d6926c2b->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_called_instance_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_called_instance_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 69;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_6c03a31065b6637bca1bd6d7d6926c2b->m_frame.f_lineno = 69;
    tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_8, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_2093a7623858190feac335b978220df2_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_8 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 69;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_6c03a31065b6637bca1bd6d7d6926c2b->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_5:;
    branch_end_4:;
    tmp_iter_arg_1 = var_remainder;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "remainder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_6;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooo";
            exception_lineno = 72;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_8 );
    {
        PyObject *old = var_frag;
        var_frag = tmp_assign_source_8;
        Py_INCREF( var_frag );
        Py_XDECREF( old );
    }

    tmp_source_name_5 = var_pats;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pats" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_append );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_escape );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 73;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_7 = var_frag;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "frag" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    frame_6c03a31065b6637bca1bd6d7d6926c2b->m_frame.f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 73;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    frame_6c03a31065b6637bca1bd6d7d6926c2b->m_frame.f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooooooooo";
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

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_compile );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_3 = const_str_digest_c8d28aa411cf9a88d9aed194157300dd;
    tmp_source_name_8 = const_str_digest_e56abf9379492360b5ea0226e2912c30;
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_join );
    assert( tmp_called_name_9 != NULL );
    tmp_args_element_name_9 = var_pats;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pats" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_6c03a31065b6637bca1bd6d7d6926c2b->m_frame.f_lineno = 75;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 75;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 75;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = const_str_digest_bf444768bd6e1671ab2a507b3ebb9a78;
    tmp_args_element_name_8 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 75;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_IGNORECASE );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_8 );

        exception_lineno = 75;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_6c03a31065b6637bca1bd6d7d6926c2b->m_frame.f_lineno = 75;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_10 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_8 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_pat == NULL );
    var_pat = tmp_assign_source_9;

    tmp_source_name_10 = var_pat;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_match );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = par_hostname;

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_6c03a31065b6637bca1bd6d7d6926c2b->m_frame.f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c03a31065b6637bca1bd6d7d6926c2b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c03a31065b6637bca1bd6d7d6926c2b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c03a31065b6637bca1bd6d7d6926c2b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6c03a31065b6637bca1bd6d7d6926c2b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6c03a31065b6637bca1bd6d7d6926c2b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6c03a31065b6637bca1bd6d7d6926c2b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6c03a31065b6637bca1bd6d7d6926c2b,
        type_description_1,
        par_dn,
        par_hostname,
        par_max_wildcards,
        var_pats,
        var_parts,
        var_leftmost,
        var_remainder,
        var_wildcards,
        var_frag,
        var_pat
    );


    // Release cached frame.
    if ( frame_6c03a31065b6637bca1bd6d7d6926c2b == cache_frame_6c03a31065b6637bca1bd6d7d6926c2b )
    {
        Py_DECREF( frame_6c03a31065b6637bca1bd6d7d6926c2b );
    }
    cache_frame_6c03a31065b6637bca1bd6d7d6926c2b = NULL;

    assertFrameObject( frame_6c03a31065b6637bca1bd6d7d6926c2b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$ssl_match_hostname$_implementation$$$function_1__dnsname_match );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_dn );
    par_dn = NULL;

    Py_XDECREF( par_hostname );
    par_hostname = NULL;

    Py_XDECREF( par_max_wildcards );
    par_max_wildcards = NULL;

    Py_XDECREF( var_pats );
    var_pats = NULL;

    Py_XDECREF( var_parts );
    var_parts = NULL;

    Py_XDECREF( var_leftmost );
    var_leftmost = NULL;

    Py_XDECREF( var_remainder );
    var_remainder = NULL;

    Py_XDECREF( var_wildcards );
    var_wildcards = NULL;

    Py_XDECREF( var_frag );
    var_frag = NULL;

    Py_XDECREF( var_pat );
    var_pat = NULL;

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

    Py_XDECREF( par_dn );
    par_dn = NULL;

    Py_XDECREF( par_hostname );
    par_hostname = NULL;

    Py_XDECREF( par_max_wildcards );
    par_max_wildcards = NULL;

    Py_XDECREF( var_pats );
    var_pats = NULL;

    Py_XDECREF( var_parts );
    var_parts = NULL;

    Py_XDECREF( var_leftmost );
    var_leftmost = NULL;

    Py_XDECREF( var_remainder );
    var_remainder = NULL;

    Py_XDECREF( var_wildcards );
    var_wildcards = NULL;

    Py_XDECREF( var_frag );
    var_frag = NULL;

    Py_XDECREF( var_pat );
    var_pat = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$ssl_match_hostname$_implementation$$$function_1__dnsname_match );
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


static PyObject *impl_urllib3$packages$ssl_match_hostname$_implementation$$$function_2__to_unicode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_de5374beb4815b257b5a4e1155fc4ef4 = NULL;

    struct Nuitka_FrameObject *frame_de5374beb4815b257b5a4e1155fc4ef4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_de5374beb4815b257b5a4e1155fc4ef4, codeobj_de5374beb4815b257b5a4e1155fc4ef4, module_urllib3$packages$ssl_match_hostname$_implementation, sizeof(void *) );
    frame_de5374beb4815b257b5a4e1155fc4ef4 = cache_frame_de5374beb4815b257b5a4e1155fc4ef4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_de5374beb4815b257b5a4e1155fc4ef4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_de5374beb4815b257b5a4e1155fc4ef4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_obj;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
    tmp_and_left_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "o";
        goto frame_exception_exit_1;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_tuple_int_pos_3_tuple;
    tmp_and_right_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "o";
        goto frame_exception_exit_1;
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

        exception_lineno = 80;
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_unicode );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unicode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_obj;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "obj" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_d42f90a6a4ebac59a20d994abd2b5b60 );
    frame_de5374beb4815b257b5a4e1155fc4ef4->m_frame.f_lineno = 81;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_obj;
        par_obj = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_return_value = par_obj;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "obj" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_de5374beb4815b257b5a4e1155fc4ef4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_de5374beb4815b257b5a4e1155fc4ef4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_de5374beb4815b257b5a4e1155fc4ef4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_de5374beb4815b257b5a4e1155fc4ef4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_de5374beb4815b257b5a4e1155fc4ef4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_de5374beb4815b257b5a4e1155fc4ef4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_de5374beb4815b257b5a4e1155fc4ef4,
        type_description_1,
        par_obj
    );


    // Release cached frame.
    if ( frame_de5374beb4815b257b5a4e1155fc4ef4 == cache_frame_de5374beb4815b257b5a4e1155fc4ef4 )
    {
        Py_DECREF( frame_de5374beb4815b257b5a4e1155fc4ef4 );
    }
    cache_frame_de5374beb4815b257b5a4e1155fc4ef4 = NULL;

    assertFrameObject( frame_de5374beb4815b257b5a4e1155fc4ef4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$ssl_match_hostname$_implementation$$$function_2__to_unicode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_obj );
    par_obj = NULL;

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

    Py_XDECREF( par_obj );
    par_obj = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$ssl_match_hostname$_implementation$$$function_2__to_unicode );
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


static PyObject *impl_urllib3$packages$ssl_match_hostname$_implementation$$$function_3__ipaddress_match( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ipname = python_pars[ 0 ];
    PyObject *par_host_ip = python_pars[ 1 ];
    PyObject *var_ip = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_91ee2f5b1127ee62e4a2d624e89fad69 = NULL;

    struct Nuitka_FrameObject *frame_91ee2f5b1127ee62e4a2d624e89fad69;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_91ee2f5b1127ee62e4a2d624e89fad69, codeobj_91ee2f5b1127ee62e4a2d624e89fad69, module_urllib3$packages$ssl_match_hostname$_implementation, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_91ee2f5b1127ee62e4a2d624e89fad69 = cache_frame_91ee2f5b1127ee62e4a2d624e89fad69;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_91ee2f5b1127ee62e4a2d624e89fad69 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_91ee2f5b1127ee62e4a2d624e89fad69 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_ipaddress );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ipaddress );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ipaddress" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ip_address );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain__to_unicode );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__to_unicode );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_to_unicode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_ipname;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ipname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_91ee2f5b1127ee62e4a2d624e89fad69->m_frame.f_lineno = 92;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 92;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_91ee2f5b1127ee62e4a2d624e89fad69->m_frame.f_lineno = 92;
    tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_rstrip );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 92;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_91ee2f5b1127ee62e4a2d624e89fad69->m_frame.f_lineno = 92;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_ip == NULL );
    var_ip = tmp_assign_source_1;

    tmp_compexpr_left_1 = var_ip;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = par_host_ip;

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "host_ip" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_91ee2f5b1127ee62e4a2d624e89fad69 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_91ee2f5b1127ee62e4a2d624e89fad69 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_91ee2f5b1127ee62e4a2d624e89fad69 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_91ee2f5b1127ee62e4a2d624e89fad69, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_91ee2f5b1127ee62e4a2d624e89fad69->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_91ee2f5b1127ee62e4a2d624e89fad69, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_91ee2f5b1127ee62e4a2d624e89fad69,
        type_description_1,
        par_ipname,
        par_host_ip,
        var_ip
    );


    // Release cached frame.
    if ( frame_91ee2f5b1127ee62e4a2d624e89fad69 == cache_frame_91ee2f5b1127ee62e4a2d624e89fad69 )
    {
        Py_DECREF( frame_91ee2f5b1127ee62e4a2d624e89fad69 );
    }
    cache_frame_91ee2f5b1127ee62e4a2d624e89fad69 = NULL;

    assertFrameObject( frame_91ee2f5b1127ee62e4a2d624e89fad69 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$ssl_match_hostname$_implementation$$$function_3__ipaddress_match );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_ipname );
    par_ipname = NULL;

    Py_XDECREF( par_host_ip );
    par_host_ip = NULL;

    Py_XDECREF( var_ip );
    var_ip = NULL;

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

    Py_XDECREF( par_ipname );
    par_ipname = NULL;

    Py_XDECREF( par_host_ip );
    par_host_ip = NULL;

    Py_XDECREF( var_ip );
    var_ip = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$ssl_match_hostname$_implementation$$$function_3__ipaddress_match );
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


static PyObject *impl_urllib3$packages$ssl_match_hostname$_implementation$$$function_4_match_hostname( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cert = python_pars[ 0 ];
    PyObject *par_hostname = python_pars[ 1 ];
    PyObject *var_host_ip = NULL;
    PyObject *var_dnsnames = NULL;
    PyObject *var_san = NULL;
    PyObject *var_key = NULL;
    PyObject *var_value = NULL;
    PyObject *var_sub = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
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
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
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
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
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
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
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
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6ec2fd53280eb5e6dc476005c7cc7a49 = NULL;

    struct Nuitka_FrameObject *frame_6ec2fd53280eb5e6dc476005c7cc7a49;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6ec2fd53280eb5e6dc476005c7cc7a49, codeobj_6ec2fd53280eb5e6dc476005c7cc7a49, module_urllib3$packages$ssl_match_hostname$_implementation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6ec2fd53280eb5e6dc476005c7cc7a49 = cache_frame_6ec2fd53280eb5e6dc476005c7cc7a49;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6ec2fd53280eb5e6dc476005c7cc7a49 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6ec2fd53280eb5e6dc476005c7cc7a49 ) == 2 ); // Frame stack

    // Framed code:
    tmp_cond_value_1 = par_cert;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "oooooooo";
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
    tmp_make_exception_arg_1 = const_str_digest_f66ea29fd347bd1e1c153f7fc85b4c4d;
    frame_6ec2fd53280eb5e6dc476005c7cc7a49->m_frame.f_lineno = 105;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 105;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    // Tried code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_ipaddress );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ipaddress );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ipaddress" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 110;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ip_address );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain__to_unicode );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__to_unicode );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_to_unicode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 110;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = par_hostname;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 110;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    frame_6ec2fd53280eb5e6dc476005c7cc7a49->m_frame.f_lineno = 110;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 110;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    frame_6ec2fd53280eb5e6dc476005c7cc7a49->m_frame.f_lineno = 110;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    assert( var_host_ip == NULL );
    var_host_ip = tmp_assign_source_1;

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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_6ec2fd53280eb5e6dc476005c7cc7a49, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_6ec2fd53280eb5e6dc476005c7cc7a49, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ValueError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_2 = Py_None;
    assert( var_host_ip == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_host_ip = tmp_assign_source_2;

    goto branch_end_2;
    branch_no_2:;
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_UnicodeError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_3 = Py_None;
    assert( var_host_ip == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_host_ip = tmp_assign_source_3;

    goto branch_end_3;
    branch_no_3:;
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_AttributeError;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_compare_left_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_ipaddress );

    if (unlikely( tmp_compare_left_4 == NULL ))
    {
        tmp_compare_left_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ipaddress );
    }

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ipaddress" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
    }

    tmp_compare_right_4 = Py_None;
    tmp_is_1 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_4 = Py_None;
    assert( var_host_ip == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_host_ip = tmp_assign_source_4;

    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 124;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_6ec2fd53280eb5e6dc476005c7cc7a49->m_frame) frame_6ec2fd53280eb5e6dc476005c7cc7a49->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooo";
    goto try_except_handler_3;
    branch_end_5:;
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 108;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_6ec2fd53280eb5e6dc476005c7cc7a49->m_frame) frame_6ec2fd53280eb5e6dc476005c7cc7a49->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooo";
    goto try_except_handler_3;
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
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
    NUITKA_CANNOT_GET_HERE( urllib3$packages$ssl_match_hostname$_implementation$$$function_4_match_hostname );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_assign_source_5 = PyList_New( 0 );
    assert( var_dnsnames == NULL );
    var_dnsnames = tmp_assign_source_5;

    tmp_called_instance_1 = par_cert;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 126;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_6ec2fd53280eb5e6dc476005c7cc7a49->m_frame.f_lineno = 126;
    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_subjectAltName_tuple_empty_tuple, 0 ) );

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_san == NULL );
    var_san = tmp_assign_source_6;

    tmp_iter_arg_1 = var_san;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_7;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooo";
            exception_lineno = 127;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "oooooooo";
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_10 == NULL )
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


        type_description_1 = "oooooooo";
        exception_lineno = 127;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_11 == NULL )
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


        type_description_1 = "oooooooo";
        exception_lineno = 127;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
        Py_XDECREF( old );
    }

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

                type_description_1 = "oooooooo";
                exception_lineno = 127;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooooooo";
        exception_lineno = 127;
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

    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_12 );
    {
        PyObject *old = var_key;
        var_key = tmp_assign_source_12;
        Py_INCREF( var_key );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_13 );
    {
        PyObject *old = var_value;
        var_value = tmp_assign_source_13;
        Py_INCREF( var_value );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_compare_left_5 = var_key;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 128;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    tmp_compare_right_5 = const_str_plain_DNS;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_compexpr_left_1 = var_host_ip;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "host_ip" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
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
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain__dnsname_match );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dnsname_match );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_dnsname_match" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_3 = var_value;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_4 = par_hostname;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    frame_6ec2fd53280eb5e6dc476005c7cc7a49->m_frame.f_lineno = 129;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_and_right_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_cond_value_2 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_2 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 129;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_4;
    branch_no_7:;
    tmp_source_name_2 = var_dnsnames;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dnsnames" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_5 = var_value;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    frame_6ec2fd53280eb5e6dc476005c7cc7a49->m_frame.f_lineno = 131;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_6;
    branch_no_6:;
    tmp_compare_left_6 = var_key;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    tmp_compare_right_6 = const_str_digest_76d751ede7bd087f9346e5a615d3c397;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_compexpr_left_2 = var_host_ip;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "host_ip" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    tmp_compexpr_right_2 = Py_None;
    tmp_and_left_value_2 = BOOL_FROM( tmp_compexpr_left_2 != tmp_compexpr_right_2 );
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    assert( !(tmp_and_left_truth_2 == -1) );
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain__ipaddress_match );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ipaddress_match );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_ipaddress_match" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_6 = var_value;

    if ( tmp_args_element_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_7 = var_host_ip;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "host_ip" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    frame_6ec2fd53280eb5e6dc476005c7cc7a49->m_frame.f_lineno = 133;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_and_right_value_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_cond_value_3 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    Py_INCREF( tmp_and_left_value_2 );
    tmp_cond_value_3 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 133;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_4;
    branch_no_9:;
    tmp_source_name_3 = var_dnsnames;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dnsnames" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_8 = var_value;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    frame_6ec2fd53280eb5e6dc476005c7cc7a49->m_frame.f_lineno = 135;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    branch_no_8:;
    branch_end_6:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Return handler code:
    try_return_handler_4:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_cond_value_4 = var_dnsnames;

    if ( tmp_cond_value_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dnsnames" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_no_10;
    }
    else
    {
        goto branch_yes_10;
    }
    branch_yes_10:;
    tmp_called_instance_2 = par_cert;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 139;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_6ec2fd53280eb5e6dc476005c7cc7a49->m_frame.f_lineno = 139;
    tmp_iter_arg_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_subject_tuple_empty_tuple, 0 ) );

    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_14;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_15 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_15 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooo";
            exception_lineno = 139;
            goto try_except_handler_7;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    tmp_assign_source_16 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_16 );
    {
        PyObject *old = var_sub;
        var_sub = tmp_assign_source_16;
        Py_INCREF( var_sub );
        Py_XDECREF( old );
    }

    tmp_iter_arg_4 = var_sub;

    CHECK_OBJECT( tmp_iter_arg_4 );
    tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "oooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_for_loop_3__for_iterator;
        tmp_for_loop_3__for_iterator = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator;

    CHECK_OBJECT( tmp_next_source_3 );
    tmp_assign_source_18 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_18 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooo";
            exception_lineno = 140;
            goto try_except_handler_8;
        }
    }

    {
        PyObject *old = tmp_for_loop_3__iter_value;
        tmp_for_loop_3__iter_value = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_5 = tmp_for_loop_3__iter_value;

    CHECK_OBJECT( tmp_iter_arg_5 );
    tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_5 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "oooooooo";
        goto try_except_handler_9;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter;
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_19;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_20 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
    if ( tmp_assign_source_20 == NULL )
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


        type_description_1 = "oooooooo";
        exception_lineno = 140;
        goto try_except_handler_10;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_1;
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_20;
        Py_XDECREF( old );
    }

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_21 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
    if ( tmp_assign_source_21 == NULL )
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


        type_description_1 = "oooooooo";
        exception_lineno = 140;
        goto try_except_handler_10;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_2;
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_21;
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

                type_description_1 = "oooooooo";
                exception_lineno = 140;
                goto try_except_handler_10;
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

        type_description_1 = "oooooooo";
        exception_lineno = 140;
        goto try_except_handler_10;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_9;
    // End of try:
    try_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_8;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_22 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_22 );
    {
        PyObject *old = var_key;
        var_key = tmp_assign_source_22;
        Py_INCREF( var_key );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_23 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_23 );
    {
        PyObject *old = var_value;
        var_value = tmp_assign_source_23;
        Py_INCREF( var_value );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_compare_left_7 = var_key;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 143;
        type_description_1 = "oooooooo";
        goto try_except_handler_8;
    }

    tmp_compare_right_7 = const_str_plain_commonName;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "oooooooo";
        goto try_except_handler_8;
    }
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain__dnsname_match );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dnsname_match );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_dnsname_match" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        type_description_1 = "oooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_9 = var_value;

    if ( tmp_args_element_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        type_description_1 = "oooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_10 = par_hostname;

    if ( tmp_args_element_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        type_description_1 = "oooooooo";
        goto try_except_handler_8;
    }

    frame_6ec2fd53280eb5e6dc476005c7cc7a49->m_frame.f_lineno = 144;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_cond_value_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_1 = "oooooooo";
        goto try_except_handler_8;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 144;
        type_description_1 = "oooooooo";
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_8;
    branch_no_12:;
    tmp_source_name_4 = var_dnsnames;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dnsnames" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        type_description_1 = "oooooooo";
        goto try_except_handler_8;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "oooooooo";
        goto try_except_handler_8;
    }
    tmp_args_element_name_11 = var_value;

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        type_description_1 = "oooooooo";
        goto try_except_handler_8;
    }

    frame_6ec2fd53280eb5e6dc476005c7cc7a49->m_frame.f_lineno = 146;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "oooooooo";
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_unused );
    branch_no_11:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "oooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_8;
    // Return handler code:
    try_return_handler_8:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    goto try_return_handler_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_7;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_1 = "oooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_9;
    // Return handler code:
    try_return_handler_7:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    branch_no_10:;
    tmp_len_arg_1 = var_dnsnames;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dnsnames" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_8 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_8 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_8 );

        exception_lineno = 147;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_8 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_CertificateError );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CertificateError );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CertificateError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 148;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_digest_3b35d51050a71678e6a91f8af50bcd6c;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_hostname;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 150;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_source_name_5 = const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_join );
    assert( tmp_called_name_10 != NULL );
    tmp_called_name_11 = (PyObject *)&PyMap_Type;
    tmp_args_element_name_14 = LOOKUP_BUILTIN( const_str_plain_repr );
    assert( tmp_args_element_name_14 != NULL );
    tmp_args_element_name_15 = var_dnsnames;

    if ( tmp_args_element_name_15 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        Py_DECREF( tmp_called_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dnsnames" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 150;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_6ec2fd53280eb5e6dc476005c7cc7a49->m_frame.f_lineno = 150;
    {
        PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_args_element_name_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
    }

    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 150;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_6ec2fd53280eb5e6dc476005c7cc7a49->m_frame.f_lineno = 150;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 150;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_args_element_name_12 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_6ec2fd53280eb5e6dc476005c7cc7a49->m_frame.f_lineno = 148;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 148;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
    goto branch_end_13;
    branch_no_13:;
    tmp_len_arg_2 = var_dnsnames;

    if ( tmp_len_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dnsnames" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 151;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_9 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_9 = const_int_pos_1;
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_9 );

        exception_lineno = 151;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_9 );
    if ( tmp_cmp_Eq_4 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_CertificateError );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CertificateError );
    }

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CertificateError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 152;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = const_str_digest_2827a02148585180db385ecab4334673;
    tmp_right_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_hostname;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 154;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_2 );
    tmp_subscribed_name_1 = var_dnsnames;

    if ( tmp_subscribed_name_1 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dnsnames" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 154;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_int_0;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 154;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_2 );
    tmp_args_element_name_16 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_6ec2fd53280eb5e6dc476005c7cc7a49->m_frame.f_lineno = 152;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_args_element_name_16 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    exception_lineno = 152;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
    goto branch_end_14;
    branch_no_14:;
    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_CertificateError );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CertificateError );
    }

    if ( tmp_called_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CertificateError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_6ec2fd53280eb5e6dc476005c7cc7a49->m_frame.f_lineno = 156;
    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, &PyTuple_GET_ITEM( const_tuple_str_digest_b8a3e24bd480f9d749e7f38794d9a804_tuple, 0 ) );

    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_4;
    exception_lineno = 156;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
    branch_end_14:;
    branch_end_13:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_6ec2fd53280eb5e6dc476005c7cc7a49 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_6ec2fd53280eb5e6dc476005c7cc7a49 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_6ec2fd53280eb5e6dc476005c7cc7a49 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6ec2fd53280eb5e6dc476005c7cc7a49, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6ec2fd53280eb5e6dc476005c7cc7a49->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6ec2fd53280eb5e6dc476005c7cc7a49, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6ec2fd53280eb5e6dc476005c7cc7a49,
        type_description_1,
        par_cert,
        par_hostname,
        var_host_ip,
        var_dnsnames,
        var_san,
        var_key,
        var_value,
        var_sub
    );


    // Release cached frame.
    if ( frame_6ec2fd53280eb5e6dc476005c7cc7a49 == cache_frame_6ec2fd53280eb5e6dc476005c7cc7a49 )
    {
        Py_DECREF( frame_6ec2fd53280eb5e6dc476005c7cc7a49 );
    }
    cache_frame_6ec2fd53280eb5e6dc476005c7cc7a49 = NULL;

    assertFrameObject( frame_6ec2fd53280eb5e6dc476005c7cc7a49 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$ssl_match_hostname$_implementation$$$function_4_match_hostname );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( par_hostname );
    par_hostname = NULL;

    Py_XDECREF( var_host_ip );
    var_host_ip = NULL;

    Py_XDECREF( var_dnsnames );
    var_dnsnames = NULL;

    Py_XDECREF( var_san );
    var_san = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_sub );
    var_sub = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( par_hostname );
    par_hostname = NULL;

    Py_XDECREF( var_host_ip );
    var_host_ip = NULL;

    Py_XDECREF( var_dnsnames );
    var_dnsnames = NULL;

    Py_XDECREF( var_san );
    var_san = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_sub );
    var_sub = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$ssl_match_hostname$_implementation$$$function_4_match_hostname );
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



static PyObject *MAKE_FUNCTION_urllib3$packages$ssl_match_hostname$_implementation$$$function_1__dnsname_match( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$ssl_match_hostname$_implementation$$$function_1__dnsname_match,
        const_str_plain__dnsname_match,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6c03a31065b6637bca1bd6d7d6926c2b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$packages$ssl_match_hostname$_implementation,
        const_str_digest_67325c16e6049950668b4d54af8157ef,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$ssl_match_hostname$_implementation$$$function_2__to_unicode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$ssl_match_hostname$_implementation$$$function_2__to_unicode,
        const_str_plain__to_unicode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_de5374beb4815b257b5a4e1155fc4ef4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$packages$ssl_match_hostname$_implementation,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$ssl_match_hostname$_implementation$$$function_3__ipaddress_match(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$ssl_match_hostname$_implementation$$$function_3__ipaddress_match,
        const_str_plain__ipaddress_match,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_91ee2f5b1127ee62e4a2d624e89fad69,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$packages$ssl_match_hostname$_implementation,
        const_str_digest_cee8a0917b60d1bd22f94d241f22b50b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$ssl_match_hostname$_implementation$$$function_4_match_hostname(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$ssl_match_hostname$_implementation$$$function_4_match_hostname,
        const_str_plain_match_hostname,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6ec2fd53280eb5e6dc476005c7cc7a49,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$packages$ssl_match_hostname$_implementation,
        const_str_digest_cb4b3ec76f0e04caf09490892f20768f,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$packages$ssl_match_hostname$_implementation =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.packages.ssl_match_hostname._implementation",   /* m_name */
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

MOD_INIT_DECL( urllib3$packages$ssl_match_hostname$_implementation )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$packages$ssl_match_hostname$_implementation );
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
    puts("urllib3.packages.ssl_match_hostname._implementation: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.packages.ssl_match_hostname._implementation: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$packages$ssl_match_hostname$_implementation" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$packages$ssl_match_hostname$_implementation = Py_InitModule4(
        "urllib3.packages.ssl_match_hostname._implementation",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_urllib3$packages$ssl_match_hostname$_implementation = PyModule_Create( &mdef_urllib3$packages$ssl_match_hostname$_implementation );
#endif

    moduledict_urllib3$packages$ssl_match_hostname$_implementation = MODULE_DICT( module_urllib3$packages$ssl_match_hostname$_implementation );

    CHECK_OBJECT( module_urllib3$packages$ssl_match_hostname$_implementation );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_9d2ee80bc8b6b38510f1287d710300dd, module_urllib3$packages$ssl_match_hostname$_implementation );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
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
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_type_arg_1;
    struct Nuitka_FrameObject *frame_1fa3208c8eeba4fa02e881cfa68ba7f3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    // Locals dictionary setup.
PyObject *locals_dict_1 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = const_str_digest_b8ae32441dc7540b307e3e1dd1d9ff26;
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_ef0818d8044e7af61529baa65d56b281;
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_1fa3208c8eeba4fa02e881cfa68ba7f3 = MAKE_MODULE_FRAME( codeobj_1fa3208c8eeba4fa02e881cfa68ba7f3, module_urllib3$packages$ssl_match_hostname$_implementation );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_1fa3208c8eeba4fa02e881cfa68ba7f3 );
    assert( Py_REFCNT( frame_1fa3208c8eeba4fa02e881cfa68ba7f3 ) == 2 );

    // Framed code:
    frame_1fa3208c8eeba4fa02e881cfa68ba7f3->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_9d2ee80bc8b6b38510f1287d710300dd;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_1fa3208c8eeba4fa02e881cfa68ba7f3->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_5445f5c70d719d755f5eecf9a5301ba4;
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_plain_re;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3$packages$ssl_match_hostname$_implementation;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_1fa3208c8eeba4fa02e881cfa68ba7f3->m_frame.f_lineno = 6;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_7 );
    tmp_name_name_2 = const_str_plain_sys;
    tmp_globals_name_2 = (PyObject *)moduledict_urllib3$packages$ssl_match_hostname$_implementation;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_1fa3208c8eeba4fa02e881cfa68ba7f3->m_frame.f_lineno = 7;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    assert( tmp_assign_source_8 != NULL );
    UPDATE_STRING_DICT1( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_8 );
    // Tried code:
    tmp_name_name_3 = const_str_plain_ipaddress;
    tmp_globals_name_3 = (PyObject *)moduledict_urllib3$packages$ssl_match_hostname$_implementation;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_1fa3208c8eeba4fa02e881cfa68ba7f3->m_frame.f_lineno = 15;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_ipaddress, tmp_assign_source_9 );
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_1fa3208c8eeba4fa02e881cfa68ba7f3, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_1fa3208c8eeba4fa02e881cfa68ba7f3, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_2;
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
    tmp_assign_source_10 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_ipaddress, tmp_assign_source_10 );
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 14;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1fa3208c8eeba4fa02e881cfa68ba7f3->m_frame) frame_1fa3208c8eeba4fa02e881cfa68ba7f3->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_end_1:;
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
    NUITKA_CANNOT_GET_HERE( urllib3$packages$ssl_match_hostname$_implementation );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    tmp_assign_source_11 = const_str_digest_46edd689caa2c90961077381033a48f1;
    UPDATE_STRING_DICT0( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_11 );
    tmp_assign_source_12 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_12, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_12;

    tmp_assign_source_13 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_13;

    // Tried code:
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


        exception_lineno = 22;

        goto try_except_handler_3;
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

        goto try_except_handler_3;
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

        goto try_except_handler_3;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_3;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_14 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 22;

        goto try_except_handler_3;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_14;

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


        exception_lineno = 22;

        goto try_except_handler_3;
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


        exception_lineno = 22;

        goto try_except_handler_3;
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

        goto try_except_handler_3;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_CertificateError;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_1fa3208c8eeba4fa02e881cfa68ba7f3->m_frame.f_lineno = 22;
    tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_3;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_15 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_15;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_1);
    locals_dict_1 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_17 = const_str_digest_9d2ee80bc8b6b38510f1287d710300dd;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_17 );
    outline_0_var___module__ = tmp_assign_source_17;

    tmp_assign_source_18 = const_str_plain_CertificateError;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_18 );
    outline_0_var___qualname__ = tmp_assign_source_18;

    // Tried code:
    tmp_called_name_3 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_3 = const_str_plain_CertificateError;
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

        goto try_except_handler_4;
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

        goto try_except_handler_4;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_1fa3208c8eeba4fa02e881cfa68ba7f3->m_frame.f_lineno = 22;
    tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_4;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_19;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$packages$ssl_match_hostname$_implementation );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    goto outline_result_1;
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

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$packages$ssl_match_hostname$_implementation );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 22;
    goto try_except_handler_3;
    outline_result_1:;
    tmp_assign_source_16 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_CertificateError, tmp_assign_source_16 );
    goto try_end_3;
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_1fa3208c8eeba4fa02e881cfa68ba7f3 );
#endif
    popFrameStack();

    assertFrameObject( frame_1fa3208c8eeba4fa02e881cfa68ba7f3 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_1fa3208c8eeba4fa02e881cfa68ba7f3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1fa3208c8eeba4fa02e881cfa68ba7f3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1fa3208c8eeba4fa02e881cfa68ba7f3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1fa3208c8eeba4fa02e881cfa68ba7f3, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    tmp_defaults_1 = const_tuple_int_pos_1_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_20 = MAKE_FUNCTION_urllib3$packages$ssl_match_hostname$_implementation$$$function_1__dnsname_match( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain__dnsname_match, tmp_assign_source_20 );
    tmp_assign_source_21 = MAKE_FUNCTION_urllib3$packages$ssl_match_hostname$_implementation$$$function_2__to_unicode(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain__to_unicode, tmp_assign_source_21 );
    tmp_assign_source_22 = MAKE_FUNCTION_urllib3$packages$ssl_match_hostname$_implementation$$$function_3__ipaddress_match(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain__ipaddress_match, tmp_assign_source_22 );
    tmp_assign_source_23 = MAKE_FUNCTION_urllib3$packages$ssl_match_hostname$_implementation$$$function_4_match_hostname(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_match_hostname, tmp_assign_source_23 );

    return MOD_RETURN_VALUE( module_urllib3$packages$ssl_match_hostname$_implementation );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
