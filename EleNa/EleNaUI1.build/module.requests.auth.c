/* Generated code for Python source for module 'requests.auth'
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

/* The _module_requests$auth is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$auth;
PyDictObject *moduledict_requests$auth;

/* The module constants used, if any. */
extern PyObject *const_str_plain_threading;
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
static PyObject *const_str_digest_51abe40552a340600cafb395a2df7065;
static PyObject *const_str_plain_handle_401;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_headers;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_digest_7b8850a6b4d3502f6f32cd3625c4afca;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_a48752b2d8c32906209a579a59eb860e;
extern PyObject *const_str_plain_request;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_latin1;
static PyObject *const_str_digest_67889f3b65748dbd83938a67635b28e4;
static PyObject *const_str_digest_41f78ead2be3f88523470f0013b27f8f;
static PyObject *const_str_plain_nonce;
extern PyObject *const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
static PyObject *const_tuple_str_digest_58295a7b2ee00e12bd235bdf35e32b18_tuple;
extern PyObject *const_str_plain_encode;
static PyObject *const_str_digest_df91c2e0090a913ed1897e8fca207ea2;
extern PyObject *const_str_plain__internal_utils;
extern PyObject *const_str_plain_is_redirect;
static PyObject *const_str_digest_fe0ad47fb591025246f4d96ff82e1a89;
extern PyObject *const_tuple_str_chr_44_tuple;
extern PyObject *const_str_plain_seek;
static PyObject *const_str_plain_chal;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_sub;
static PyObject *const_str_plain_authstr;
extern PyObject *const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc;
static PyObject *const_str_digest_e02f9ce6a3aecd2d8ba2ec46fd1d2168;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_plain_category;
static PyObject *const_str_plain_MD5;
static PyObject *const_tuple_str_plain_parse_dict_header_tuple;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_body;
static PyObject *const_str_plain_algorithm;
static PyObject *const_str_digest_507ca0310b2f37ea4b2584d4cca02846;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_chr_63;
static PyObject *const_tuple_str_plain_opaque_tuple;
static PyObject *const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain_pos;
static PyObject *const_str_digest_7d7309ebed4abfa9aab0d6db44793741;
static PyObject *const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_re;
static PyObject *const_tuple_str_plain_urlparse_str_plain_str_str_plain_basestring_tuple;
static PyObject *const_str_digest_4bfd8366dcc8506d555a9e4dbdeb488d;
extern PyObject *const_str_plain_lower;
static PyObject *const_tuple_523c034648fd62337f533a55bf071c15_tuple;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain_flags;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_urlparse;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_str;
extern PyObject *const_tuple_str_plain_to_native_string_tuple;
extern PyObject *const_str_plain___ne__;
static PyObject *const_str_digest_b0f8a4a055f15da2a394551a1933d695;
static PyObject *const_str_digest_3ae56c31f64e988caab68621b896b25f;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_chr_44;
static PyObject *const_str_plain_hexdigest;
static PyObject *const_str_plain_AuthBase;
static PyObject *const_str_plain_SHA;
extern PyObject *const_str_plain_hashlib;
static PyObject *const_str_plain_realm;
extern PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_digest_f2d2f5f01d8d9360355c50eb1d09d771;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_DeprecationWarning;
static PyObject *const_str_plain_num_401_calls;
extern PyObject *const_tuple_str_plain_extract_cookies_to_jar_tuple;
extern PyObject *const_str_plain_query;
extern PyObject *const_str_plain_IGNORECASE;
static PyObject *const_str_digest_f3a7a1ca53a484562486747f6ddca3a9;
extern PyObject *const_tuple_str_plain_latin1_tuple;
static PyObject *const_str_plain_init;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_plain_base64;
extern PyObject *const_int_pos_8;
static PyObject *const_str_digest_a664f80c1075d8cfb85f49618afc684b;
extern PyObject *const_str_plain__r;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_last_nonce;
extern PyObject *const_str_plain_username;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_status_code;
static PyObject *const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple;
static PyObject *const_str_digest_a88adb7a245cfc6a39c69917da364c05;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_HTTPBasicAuth;
extern PyObject *const_str_plain_prepare_cookies;
static PyObject *const_str_plain_sha_utf8;
extern PyObject *const_str_plain_raw;
extern PyObject *const_str_plain_tell;
extern PyObject *const_str_plain_r;
static PyObject *const_str_digest_7565d3f493b69797b6a3c9c487eadc9f;
extern PyObject *const_str_plain_send;
static PyObject *const_str_digest_1c9b8da2d58d815ba867b42285577d11;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_tuple_str_plain_b64encode_tuple;
extern PyObject *const_str_plain_compile;
static PyObject *const_str_plain_urandom;
static PyObject *const_str_plain_md5_utf8;
extern PyObject *const_str_plain_split;
static PyObject *const_str_digest_60aadb6b5e6f7210d6b0e13a6cd7dbcb;
extern PyObject *const_str_plain_ModuleSpec;
static PyObject *const_str_digest_7c3d6be840d0505baea6486b3a2fb076;
extern PyObject *const_int_pos_500;
static PyObject *const_str_digest_cb06648d43a209f35d822642f76d8852;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_int_pos_400;
static PyObject *const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple;
static PyObject *const_str_digest_c3a9a47fda757d3a3b31995c197a305a;
extern PyObject *const_str_plain_connection;
extern PyObject *const_str_plain_count;
extern PyObject *const_str_plain___eq__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_upper;
static PyObject *const_tuple_str_plain_qop_tuple;
extern PyObject *const_str_plain_content;
extern PyObject *const_str_plain__cookies;
extern PyObject *const_str_plain_response;
static PyObject *const_str_digest_58295a7b2ee00e12bd235bdf35e32b18;
extern PyObject *const_str_plain_Authorization;
static PyObject *const_str_plain_hash_utf8;
extern PyObject *const_str_plain_cookies;
static PyObject *const_slice_none_int_pos_16_none;
extern PyObject *const_str_plain_extract_cookies_to_jar;
static PyObject *const_str_plain_handle_redirect;
extern PyObject *const_str_plain_to_native_string;
static PyObject *const_tuple_str_plain_algorithm_tuple;
static PyObject *const_str_digest_437d9d9283e7705920d4361a76539982;
extern PyObject *const_str_plain_x;
static PyObject *const_str_plain_CONTENT_TYPE_FORM_URLENCODED;
static PyObject *const_str_digest_acf0af13ef75ff62ec9955ae4dcea3e9;
static PyObject *const_str_plain_CONTENT_TYPE_MULTI_PART;
static PyObject *const_str_digest_37d3a2307e31335fa61f05d3486fd568;
extern PyObject *const_tuple_str_plain_self_str_plain_r_tuple;
extern PyObject *const_str_angle_lambda;
static PyObject *const_str_digest_a82f8015cfcad4d42fa43483823a6f72;
static PyObject *const_str_digest_b77f7643e35654e714f8a732d97c3588;
static PyObject *const_str_digest_d69b853fcab0d61d934c8e6dc6bd2d6a;
static PyObject *const_str_plain_s_auth;
extern PyObject *const_str_plain_parse_dict_header;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_128a37116d6d30cc1592bb98f4d24b46;
static PyObject *const_str_digest_3267db0b9e319da1a85ef722557dd6fe;
static PyObject *const_str_digest_01a11c701578b78bc17e57844dca83b0;
static PyObject *const_str_plain_ctime;
extern PyObject *const_str_plain_basestring;
extern PyObject *const_str_plain_password;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain__thread_local;
extern PyObject *const_str_chr_47;
static PyObject *const_str_digest_2fc3f96e0216dbc7dcd34461a1c4d2ee;
extern PyObject *const_str_plain_sha1;
extern PyObject *const_str_plain_requests;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_fe400b7786b755fe7fa07749cdd2ff1e;
static PyObject *const_str_plain_prep;
static PyObject *const_str_digest_a49a175904e70dd9f5dc0f52dbebbfdb;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_digest;
static PyObject *const_str_plain_local;
extern PyObject *const_str_plain_other;
extern PyObject *const_str_plain_auth;
static PyObject *const_str_plain_build_digest_header;
static PyObject *const_str_digest_1086311fbf6e3245df872c941ed6e8ad;
static PyObject *const_str_digest_e1ae02aba66d45ac9d7f070694408d22;
extern PyObject *const_str_plain__basic_auth_str;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_5bf0e52ad3af9d76b6e6716841011fd0;
static PyObject *const_str_digest_69c286e01655beff40436b2cda33b552;
static PyObject *const_dict_d96fc9db79024853de9fbab06f7c41d9;
extern PyObject *const_str_plain_history;
extern PyObject *const_str_plain_url;
static PyObject *const_tuple_str_digest_a88adb7a245cfc6a39c69917da364c05_str_empty_tuple;
static PyObject *const_str_digest_919a2045e823b128b54cfd720f73e3bf;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_qop;
extern PyObject *const_bytes_chr_58;
static PyObject *const_tuple_int_pos_8_tuple;
static PyObject *const_str_plain_init_per_thread_state;
extern PyObject *const_str_plain_md5;
extern PyObject *const_str_plain_method;
extern PyObject *const_str_plain_b64encode;
extern PyObject *const_str_plain___call__;
extern PyObject *const_str_plain_register_hook;
static PyObject *const_tuple_f92adc9bdc83b23e016759a996e86bde_tuple;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_digest_5d735bc80d16f0fedbdde78344a2d394;
static PyObject *const_str_digest_ee22ae99a5537f5b922bb4b122196ae7;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_compat;
static PyObject *const_str_digest_8feb58bccefb99348c707686607244b3;
extern PyObject *const_str_plain_format;
static PyObject *const_str_plain_nonce_count;
static PyObject *const_str_plain_opaque;
static PyObject *const_str_digest_7a006474c4967997a79cedaecd602a45;
static PyObject *const_str_digest_aa04245735e0a296f4eee2c81c6c24b4;
static PyObject *const_str_digest_67bc2e2875f2a676ae8e8f2595c69cad;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_pat;
static PyObject *const_str_plain_HTTPDigestAuth;
static PyObject *const_str_plain_HTTPProxyAuth;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_51abe40552a340600cafb395a2df7065 = UNSTREAM_STRING( &constant_bin[ 804031 ], 22, 0 );
    const_str_plain_handle_401 = UNSTREAM_STRING( &constant_bin[ 804053 ], 10, 1 );
    const_str_digest_7b8850a6b4d3502f6f32cd3625c4afca = UNSTREAM_STRING( &constant_bin[ 804063 ], 8, 0 );
    const_str_digest_a48752b2d8c32906209a579a59eb860e = UNSTREAM_STRING( &constant_bin[ 804071 ], 52, 0 );
    const_str_digest_67889f3b65748dbd83938a67635b28e4 = UNSTREAM_STRING( &constant_bin[ 804123 ], 13, 0 );
    const_str_digest_41f78ead2be3f88523470f0013b27f8f = UNSTREAM_STRING( &constant_bin[ 804136 ], 52, 0 );
    const_str_plain_nonce = UNSTREAM_STRING( &constant_bin[ 804188 ], 5, 1 );
    const_tuple_str_digest_58295a7b2ee00e12bd235bdf35e32b18_tuple = PyTuple_New( 1 );
    const_str_digest_58295a7b2ee00e12bd235bdf35e32b18 = UNSTREAM_STRING( &constant_bin[ 804193 ], 7, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_58295a7b2ee00e12bd235bdf35e32b18_tuple, 0, const_str_digest_58295a7b2ee00e12bd235bdf35e32b18 ); Py_INCREF( const_str_digest_58295a7b2ee00e12bd235bdf35e32b18 );
    const_str_digest_df91c2e0090a913ed1897e8fca207ea2 = UNSTREAM_STRING( &constant_bin[ 794440 ], 29, 0 );
    const_str_digest_fe0ad47fb591025246f4d96ff82e1a89 = UNSTREAM_STRING( &constant_bin[ 804200 ], 111, 0 );
    const_str_plain_chal = UNSTREAM_STRING( &constant_bin[ 804311 ], 4, 1 );
    const_str_plain_authstr = UNSTREAM_STRING( &constant_bin[ 804315 ], 7, 1 );
    const_str_digest_e02f9ce6a3aecd2d8ba2ec46fd1d2168 = UNSTREAM_STRING( &constant_bin[ 804322 ], 13, 0 );
    const_str_plain_MD5 = UNSTREAM_STRING( &constant_bin[ 804335 ], 3, 1 );
    const_tuple_str_plain_parse_dict_header_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_parse_dict_header_tuple, 0, const_str_plain_parse_dict_header ); Py_INCREF( const_str_plain_parse_dict_header );
    const_str_plain_algorithm = UNSTREAM_STRING( &constant_bin[ 603084 ], 9, 1 );
    const_str_digest_507ca0310b2f37ea4b2584d4cca02846 = UNSTREAM_STRING( &constant_bin[ 804338 ], 28, 0 );
    const_tuple_str_plain_opaque_tuple = PyTuple_New( 1 );
    const_str_plain_opaque = UNSTREAM_STRING( &constant_bin[ 804366 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_opaque_tuple, 0, const_str_plain_opaque ); Py_INCREF( const_str_plain_opaque );
    const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_str_plain_hash_utf8 = UNSTREAM_STRING( &constant_bin[ 804372 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple, 2, const_str_plain_hash_utf8 ); Py_INCREF( const_str_plain_hash_utf8 );
    const_str_digest_7d7309ebed4abfa9aab0d6db44793741 = UNSTREAM_STRING( &constant_bin[ 804381 ], 13, 0 );
    const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple, 1, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_tuple_str_plain_urlparse_str_plain_str_str_plain_basestring_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_urlparse_str_plain_str_str_plain_basestring_tuple, 0, const_str_plain_urlparse ); Py_INCREF( const_str_plain_urlparse );
    PyTuple_SET_ITEM( const_tuple_str_plain_urlparse_str_plain_str_str_plain_basestring_tuple, 1, const_str_plain_str ); Py_INCREF( const_str_plain_str );
    PyTuple_SET_ITEM( const_tuple_str_plain_urlparse_str_plain_str_str_plain_basestring_tuple, 2, const_str_plain_basestring ); Py_INCREF( const_str_plain_basestring );
    const_str_digest_4bfd8366dcc8506d555a9e4dbdeb488d = UNSTREAM_STRING( &constant_bin[ 804394 ], 93, 0 );
    const_tuple_523c034648fd62337f533a55bf071c15_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_523c034648fd62337f533a55bf071c15_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_523c034648fd62337f533a55bf071c15_tuple, 1, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_523c034648fd62337f533a55bf071c15_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_plain_s_auth = UNSTREAM_STRING( &constant_bin[ 804487 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_523c034648fd62337f533a55bf071c15_tuple, 3, const_str_plain_s_auth ); Py_INCREF( const_str_plain_s_auth );
    PyTuple_SET_ITEM( const_tuple_523c034648fd62337f533a55bf071c15_tuple, 4, const_str_plain_pat ); Py_INCREF( const_str_plain_pat );
    const_str_plain_prep = UNSTREAM_STRING( &constant_bin[ 804493 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_523c034648fd62337f533a55bf071c15_tuple, 5, const_str_plain_prep ); Py_INCREF( const_str_plain_prep );
    PyTuple_SET_ITEM( const_tuple_523c034648fd62337f533a55bf071c15_tuple, 6, const_str_plain__r ); Py_INCREF( const_str_plain__r );
    const_str_digest_b0f8a4a055f15da2a394551a1933d695 = UNSTREAM_STRING( &constant_bin[ 804497 ], 14, 0 );
    const_str_digest_3ae56c31f64e988caab68621b896b25f = UNSTREAM_STRING( &constant_bin[ 804511 ], 22, 0 );
    const_str_plain_hexdigest = UNSTREAM_STRING( &constant_bin[ 804533 ], 9, 1 );
    const_str_plain_AuthBase = UNSTREAM_STRING( &constant_bin[ 804542 ], 8, 1 );
    const_str_plain_SHA = UNSTREAM_STRING( &constant_bin[ 607609 ], 3, 1 );
    const_str_plain_realm = UNSTREAM_STRING( &constant_bin[ 804550 ], 5, 1 );
    const_str_plain_num_401_calls = UNSTREAM_STRING( &constant_bin[ 804555 ], 13, 1 );
    const_str_digest_f3a7a1ca53a484562486747f6ddca3a9 = UNSTREAM_STRING( &constant_bin[ 804568 ], 22, 0 );
    const_str_plain_init = UNSTREAM_STRING( &constant_bin[ 24 ], 4, 1 );
    const_str_digest_a664f80c1075d8cfb85f49618afc684b = UNSTREAM_STRING( &constant_bin[ 804590 ], 63, 0 );
    const_str_plain_last_nonce = UNSTREAM_STRING( &constant_bin[ 804653 ], 10, 1 );
    const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, 1, const_str_plain_username ); Py_INCREF( const_str_plain_username );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, 2, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    const_str_digest_a88adb7a245cfc6a39c69917da364c05 = UNSTREAM_STRING( &constant_bin[ 804663 ], 16, 0 );
    const_str_plain_sha_utf8 = UNSTREAM_STRING( &constant_bin[ 804115 ], 8, 1 );
    const_str_digest_7565d3f493b69797b6a3c9c487eadc9f = UNSTREAM_STRING( &constant_bin[ 804679 ], 20, 0 );
    const_str_digest_1c9b8da2d58d815ba867b42285577d11 = UNSTREAM_STRING( &constant_bin[ 804699 ], 184, 0 );
    const_str_plain_urandom = UNSTREAM_STRING( &constant_bin[ 804883 ], 7, 1 );
    const_str_plain_md5_utf8 = UNSTREAM_STRING( &constant_bin[ 804890 ], 8, 1 );
    const_str_digest_60aadb6b5e6f7210d6b0e13a6cd7dbcb = UNSTREAM_STRING( &constant_bin[ 804898 ], 17, 0 );
    const_str_digest_7c3d6be840d0505baea6486b3a2fb076 = UNSTREAM_STRING( &constant_bin[ 804915 ], 30, 0 );
    const_str_digest_cb06648d43a209f35d822642f76d8852 = UNSTREAM_STRING( &constant_bin[ 804945 ], 20, 0 );
    const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple, 0, const_str_plain_username ); Py_INCREF( const_str_plain_username );
    PyTuple_SET_ITEM( const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple, 1, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    PyTuple_SET_ITEM( const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple, 2, const_str_plain_authstr ); Py_INCREF( const_str_plain_authstr );
    const_str_digest_c3a9a47fda757d3a3b31995c197a305a = UNSTREAM_STRING( &constant_bin[ 804965 ], 21, 0 );
    const_tuple_str_plain_qop_tuple = PyTuple_New( 1 );
    const_str_plain_qop = UNSTREAM_STRING( &constant_bin[ 804986 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_qop_tuple, 0, const_str_plain_qop ); Py_INCREF( const_str_plain_qop );
    const_slice_none_int_pos_16_none = PySlice_New( Py_None, const_int_pos_16, Py_None );
    const_str_plain_handle_redirect = UNSTREAM_STRING( &constant_bin[ 804930 ], 15, 1 );
    const_tuple_str_plain_algorithm_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_algorithm_tuple, 0, const_str_plain_algorithm ); Py_INCREF( const_str_plain_algorithm );
    const_str_digest_437d9d9283e7705920d4361a76539982 = UNSTREAM_STRING( &constant_bin[ 804989 ], 52, 0 );
    const_str_plain_CONTENT_TYPE_FORM_URLENCODED = UNSTREAM_STRING( &constant_bin[ 805041 ], 28, 1 );
    const_str_digest_acf0af13ef75ff62ec9955ae4dcea3e9 = UNSTREAM_STRING( &constant_bin[ 805069 ], 64, 0 );
    const_str_plain_CONTENT_TYPE_MULTI_PART = UNSTREAM_STRING( &constant_bin[ 805133 ], 23, 1 );
    const_str_digest_37d3a2307e31335fa61f05d3486fd568 = UNSTREAM_STRING( &constant_bin[ 805156 ], 36, 0 );
    const_str_digest_a82f8015cfcad4d42fa43483823a6f72 = UNSTREAM_STRING( &constant_bin[ 805192 ], 32, 0 );
    const_str_digest_b77f7643e35654e714f8a732d97c3588 = UNSTREAM_STRING( &constant_bin[ 805224 ], 94, 0 );
    const_str_digest_d69b853fcab0d61d934c8e6dc6bd2d6a = UNSTREAM_STRING( &constant_bin[ 805318 ], 16, 0 );
    const_str_digest_128a37116d6d30cc1592bb98f4d24b46 = UNSTREAM_STRING( &constant_bin[ 805334 ], 22, 0 );
    const_str_digest_3267db0b9e319da1a85ef722557dd6fe = UNSTREAM_STRING( &constant_bin[ 805356 ], 61, 0 );
    const_str_digest_01a11c701578b78bc17e57844dca83b0 = UNSTREAM_STRING( &constant_bin[ 805417 ], 4, 0 );
    const_str_plain_ctime = UNSTREAM_STRING( &constant_bin[ 805421 ], 5, 1 );
    const_str_plain__thread_local = UNSTREAM_STRING( &constant_bin[ 805426 ], 13, 1 );
    const_str_digest_2fc3f96e0216dbc7dcd34461a1c4d2ee = UNSTREAM_STRING( &constant_bin[ 805439 ], 52, 0 );
    const_str_digest_fe400b7786b755fe7fa07749cdd2ff1e = UNSTREAM_STRING( &constant_bin[ 805491 ], 62, 0 );
    const_str_digest_a49a175904e70dd9f5dc0f52dbebbfdb = UNSTREAM_STRING( &constant_bin[ 805553 ], 8, 0 );
    const_str_plain_local = UNSTREAM_STRING( &constant_bin[ 604267 ], 5, 1 );
    const_str_plain_build_digest_header = UNSTREAM_STRING( &constant_bin[ 804086 ], 19, 1 );
    const_str_digest_1086311fbf6e3245df872c941ed6e8ad = UNSTREAM_STRING( &constant_bin[ 805561 ], 21, 0 );
    const_str_digest_e1ae02aba66d45ac9d7f070694408d22 = UNSTREAM_STRING( &constant_bin[ 805582 ], 19, 0 );
    const_str_digest_5bf0e52ad3af9d76b6e6716841011fd0 = UNSTREAM_STRING( &constant_bin[ 805601 ], 41, 0 );
    const_str_digest_69c286e01655beff40436b2cda33b552 = UNSTREAM_STRING( &constant_bin[ 805642 ], 9, 0 );
    const_dict_d96fc9db79024853de9fbab06f7c41d9 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_d96fc9db79024853de9fbab06f7c41d9, const_str_plain_count, const_int_pos_1 );
    assert( PyDict_Size( const_dict_d96fc9db79024853de9fbab06f7c41d9 ) == 1 );
    const_tuple_str_digest_a88adb7a245cfc6a39c69917da364c05_str_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a88adb7a245cfc6a39c69917da364c05_str_empty_tuple, 0, const_str_digest_a88adb7a245cfc6a39c69917da364c05 ); Py_INCREF( const_str_digest_a88adb7a245cfc6a39c69917da364c05 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a88adb7a245cfc6a39c69917da364c05_str_empty_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    const_str_digest_919a2045e823b128b54cfd720f73e3bf = UNSTREAM_STRING( &constant_bin[ 805651 ], 28, 0 );
    const_tuple_int_pos_8_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_8_tuple, 0, const_int_pos_8 ); Py_INCREF( const_int_pos_8 );
    const_str_plain_init_per_thread_state = UNSTREAM_STRING( &constant_bin[ 805171 ], 21, 1 );
    const_tuple_f92adc9bdc83b23e016759a996e86bde_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 805679 ], 193 );
    const_str_digest_ee22ae99a5537f5b922bb4b122196ae7 = UNSTREAM_STRING( &constant_bin[ 805872 ], 23, 0 );
    const_str_digest_8feb58bccefb99348c707686607244b3 = UNSTREAM_STRING( &constant_bin[ 805895 ], 184, 0 );
    const_str_plain_nonce_count = UNSTREAM_STRING( &constant_bin[ 806079 ], 11, 1 );
    const_str_digest_7a006474c4967997a79cedaecd602a45 = UNSTREAM_STRING( &constant_bin[ 806090 ], 23, 0 );
    const_str_digest_aa04245735e0a296f4eee2c81c6c24b4 = UNSTREAM_STRING( &constant_bin[ 806113 ], 25, 0 );
    const_str_digest_67bc2e2875f2a676ae8e8f2595c69cad = UNSTREAM_STRING( &constant_bin[ 804071 ], 34, 0 );
    const_str_plain_HTTPDigestAuth = UNSTREAM_STRING( &constant_bin[ 804071 ], 14, 1 );
    const_str_plain_HTTPProxyAuth = UNSTREAM_STRING( &constant_bin[ 805334 ], 13, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$auth( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_2274dff947f2432fd337446cd61c8d46;
static PyCodeObject *codeobj_ff841ee5c3e16f6baf138128b43d4dbc;
static PyCodeObject *codeobj_e509e3ae18103386df1e574805e21c1c;
static PyCodeObject *codeobj_b010858bd836e80a2d4b8a5325e1dc34;
static PyCodeObject *codeobj_9b4fa040955345b0da376eec2902a499;
static PyCodeObject *codeobj_026fa7e5e0f86b4eceddd3243b883360;
static PyCodeObject *codeobj_c84b7b3d4de042699d321c501576644c;
static PyCodeObject *codeobj_6c676f40f25d9d94f21e092d9b2572c0;
static PyCodeObject *codeobj_c7c7abaf9fcb555fd716637822f576cf;
static PyCodeObject *codeobj_7e1690f117884a581786213a027b955f;
static PyCodeObject *codeobj_3964ea1eb7954ea30d533f5374d57251;
static PyCodeObject *codeobj_0f862401b888b210dfb9c1e01d67654a;
static PyCodeObject *codeobj_d8be0b3308947041db7cad90a4c9ab3f;
static PyCodeObject *codeobj_10ec33c9d87d9675f4408d9cb59775da;
static PyCodeObject *codeobj_53e28b6d5f88cc39c65fc0b5f1aabd91;
static PyCodeObject *codeobj_fadfc6089eaec930cab030ea5855eb79;
static PyCodeObject *codeobj_e686c3b111cad67e81dbbad4dceef8c2;
static PyCodeObject *codeobj_e3520a0241229beb405dbb07ca0d5d9f;
static PyCodeObject *codeobj_8e6d3ec84509659be213763ac64a9f43;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_b77f7643e35654e714f8a732d97c3588;
    codeobj_2274dff947f2432fd337446cd61c8d46 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 157, const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_ff841ee5c3e16f6baf138128b43d4dbc = MAKE_CODEOBJ( module_filename_obj, const_str_digest_3ae56c31f64e988caab68621b896b25f, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_e509e3ae18103386df1e574805e21c1c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 75, const_tuple_str_plain_self_str_plain_r_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b010858bd836e80a2d4b8a5325e1dc34 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 95, const_tuple_str_plain_self_str_plain_r_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9b4fa040955345b0da376eec2902a499 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 103, const_tuple_str_plain_self_str_plain_r_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_026fa7e5e0f86b4eceddd3243b883360 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 266, const_tuple_str_plain_self_str_plain_r_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c84b7b3d4de042699d321c501576644c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___eq__, 86, const_tuple_str_plain_self_str_plain_other_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6c676f40f25d9d94f21e092d9b2572c0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___eq__, 286, const_tuple_str_plain_self_str_plain_other_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c7c7abaf9fcb555fd716637822f576cf = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 82, const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7e1690f117884a581786213a027b955f = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 111, const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3964ea1eb7954ea30d533f5374d57251 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___ne__, 92, const_tuple_str_plain_self_str_plain_other_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0f862401b888b210dfb9c1e01d67654a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___ne__, 292, const_tuple_str_plain_self_str_plain_other_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d8be0b3308947041db7cad90a4c9ab3f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__basic_auth_str, 28, const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_10ec33c9d87d9675f4408d9cb59775da = MAKE_CODEOBJ( module_filename_obj, const_str_plain_build_digest_header, 127, const_tuple_f92adc9bdc83b23e016759a996e86bde_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_53e28b6d5f88cc39c65fc0b5f1aabd91 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_handle_401, 222, const_tuple_523c034648fd62337f533a55bf071c15_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_fadfc6089eaec930cab030ea5855eb79 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_handle_redirect, 217, const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_e686c3b111cad67e81dbbad4dceef8c2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_init_per_thread_state, 117, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e3520a0241229beb405dbb07ca0d5d9f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_md5_utf8, 145, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8e6d3ec84509659be213763ac64a9f43 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sha_utf8, 151, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_1_md5_utf8(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_2_sha_utf8(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_3_lambda( struct Nuitka_CellObject *closure_hash_utf8 );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_11_handle_redirect(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_12_handle_401(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_13___call__(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_14___eq__(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_15___ne__(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_1__basic_auth_str(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_2___call__(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_3___init__(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_4___eq__(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_5___ne__(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_6___call__(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_7___call__(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_8___init__(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_9_init_per_thread_state(  );


// The module function definitions.
static PyObject *impl_requests$auth$$$function_1__basic_auth_str( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_username = python_pars[ 0 ];
    PyObject *par_password = python_pars[ 1 ];
    PyObject *var_authstr = NULL;
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
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_cls_4;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    PyObject *tmp_isinstance_inst_4;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d8be0b3308947041db7cad90a4c9ab3f = NULL;

    struct Nuitka_FrameObject *frame_d8be0b3308947041db7cad90a4c9ab3f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d8be0b3308947041db7cad90a4c9ab3f, codeobj_d8be0b3308947041db7cad90a4c9ab3f, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d8be0b3308947041db7cad90a4c9ab3f = cache_frame_d8be0b3308947041db7cad90a4c9ab3f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d8be0b3308947041db7cad90a4c9ab3f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d8be0b3308947041db7cad90a4c9ab3f ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_username;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_basestring );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "basestring" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_source_name_2 = const_str_digest_1c9b8da2d58d815ba867b42285577d11;
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_format );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_1 = par_username;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_d8be0b3308947041db7cad90a4c9ab3f->m_frame.f_lineno = 40;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 40;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_category;
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_d8be0b3308947041db7cad90a4c9ab3f->m_frame.f_lineno = 39;
    tmp_unused = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_username;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_d8be0b3308947041db7cad90a4c9ab3f->m_frame.f_lineno = 46;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_username;
        par_username = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_isinstance_inst_2 = par_password;

    if ( tmp_isinstance_inst_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_basestring );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "basestring" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "ooo";
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
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_warn );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_source_name_4 = const_str_digest_8feb58bccefb99348c707686607244b3;
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_format );
    assert( tmp_called_name_5 != NULL );
    tmp_args_element_name_3 = par_password;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_d8be0b3308947041db7cad90a4c9ab3f->m_frame.f_lineno = 50;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 50;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_key_2 = const_str_plain_category;
    tmp_dict_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

    if (unlikely( tmp_dict_value_2 == NULL ))
    {
        tmp_dict_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
    }

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_d8be0b3308947041db7cad90a4c9ab3f->m_frame.f_lineno = 49;
    tmp_unused = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_password;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_d8be0b3308947041db7cad90a4c9ab3f->m_frame.f_lineno = 56;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_password;
        par_password = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_isinstance_inst_3 = par_username;

    if ( tmp_isinstance_inst_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str );

    if (unlikely( tmp_isinstance_cls_3 == NULL ))
    {
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
    }

    if ( tmp_isinstance_cls_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "ooo";
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
    tmp_called_instance_1 = par_username;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_d8be0b3308947041db7cad90a4c9ab3f->m_frame.f_lineno = 60;
    tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_latin1_tuple, 0 ) );

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_username;
        par_username = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    branch_no_3:;
    tmp_isinstance_inst_4 = par_password;

    if ( tmp_isinstance_inst_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_4 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str );

    if (unlikely( tmp_isinstance_cls_4 == NULL ))
    {
        tmp_isinstance_cls_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
    }

    if ( tmp_isinstance_cls_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_instance_2 = par_password;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_d8be0b3308947041db7cad90a4c9ab3f->m_frame.f_lineno = 63;
    tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_latin1_tuple, 0 ) );

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_password;
        par_password = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    branch_no_4:;
    tmp_left_name_1 = const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc;
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_to_native_string );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_to_native_string );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "to_native_string" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_b64encode );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b64encode );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "b64encode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = const_bytes_chr_58;
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_join );
    assert( tmp_called_name_9 != NULL );
    tmp_args_element_name_7 = PyTuple_New( 2 );
    tmp_tuple_element_3 = par_username;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_element_name_7, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = par_password;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_element_name_7, 1, tmp_tuple_element_3 );
    frame_d8be0b3308947041db7cad90a4c9ab3f->m_frame.f_lineno = 66;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_d8be0b3308947041db7cad90a4c9ab3f->m_frame.f_lineno = 66;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_called_instance_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_d8be0b3308947041db7cad90a4c9ab3f->m_frame.f_lineno = 66;
    tmp_args_element_name_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_strip );
    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_d8be0b3308947041db7cad90a4c9ab3f->m_frame.f_lineno = 65;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_authstr == NULL );
    var_authstr = tmp_assign_source_5;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_d8be0b3308947041db7cad90a4c9ab3f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d8be0b3308947041db7cad90a4c9ab3f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d8be0b3308947041db7cad90a4c9ab3f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d8be0b3308947041db7cad90a4c9ab3f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d8be0b3308947041db7cad90a4c9ab3f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d8be0b3308947041db7cad90a4c9ab3f,
        type_description_1,
        par_username,
        par_password,
        var_authstr
    );


    // Release cached frame.
    if ( frame_d8be0b3308947041db7cad90a4c9ab3f == cache_frame_d8be0b3308947041db7cad90a4c9ab3f )
    {
        Py_DECREF( frame_d8be0b3308947041db7cad90a4c9ab3f );
    }
    cache_frame_d8be0b3308947041db7cad90a4c9ab3f = NULL;

    assertFrameObject( frame_d8be0b3308947041db7cad90a4c9ab3f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_authstr;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_1__basic_auth_str );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_username );
    par_username = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;

    Py_XDECREF( var_authstr );
    var_authstr = NULL;

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

    Py_XDECREF( par_username );
    par_username = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_1__basic_auth_str );
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


static PyObject *impl_requests$auth$$$function_2___call__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_r = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    static struct Nuitka_FrameObject *cache_frame_e509e3ae18103386df1e574805e21c1c = NULL;

    struct Nuitka_FrameObject *frame_e509e3ae18103386df1e574805e21c1c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e509e3ae18103386df1e574805e21c1c, codeobj_e509e3ae18103386df1e574805e21c1c, module_requests$auth, sizeof(void *)+sizeof(void *) );
    frame_e509e3ae18103386df1e574805e21c1c = cache_frame_e509e3ae18103386df1e574805e21c1c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e509e3ae18103386df1e574805e21c1c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e509e3ae18103386df1e574805e21c1c ) == 2 ); // Frame stack

    // Framed code:
    tmp_make_exception_arg_1 = const_str_digest_507ca0310b2f37ea4b2584d4cca02846;
    frame_e509e3ae18103386df1e574805e21c1c->m_frame.f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 76;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e509e3ae18103386df1e574805e21c1c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e509e3ae18103386df1e574805e21c1c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e509e3ae18103386df1e574805e21c1c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e509e3ae18103386df1e574805e21c1c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e509e3ae18103386df1e574805e21c1c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e509e3ae18103386df1e574805e21c1c,
        type_description_1,
        par_self,
        par_r
    );


    // Release cached frame.
    if ( frame_e509e3ae18103386df1e574805e21c1c == cache_frame_e509e3ae18103386df1e574805e21c1c )
    {
        Py_DECREF( frame_e509e3ae18103386df1e574805e21c1c );
    }
    cache_frame_e509e3ae18103386df1e574805e21c1c = NULL;

    assertFrameObject( frame_e509e3ae18103386df1e574805e21c1c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_2___call__ );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_r );
    par_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_2___call__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_requests$auth$$$function_3___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_username = python_pars[ 1 ];
    PyObject *par_password = python_pars[ 2 ];
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
    static struct Nuitka_FrameObject *cache_frame_c7c7abaf9fcb555fd716637822f576cf = NULL;

    struct Nuitka_FrameObject *frame_c7c7abaf9fcb555fd716637822f576cf;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c7c7abaf9fcb555fd716637822f576cf, codeobj_c7c7abaf9fcb555fd716637822f576cf, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c7c7abaf9fcb555fd716637822f576cf = cache_frame_c7c7abaf9fcb555fd716637822f576cf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c7c7abaf9fcb555fd716637822f576cf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c7c7abaf9fcb555fd716637822f576cf ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_username;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_username, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_password;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
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

        exception_lineno = 84;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_password, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c7c7abaf9fcb555fd716637822f576cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c7c7abaf9fcb555fd716637822f576cf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c7c7abaf9fcb555fd716637822f576cf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c7c7abaf9fcb555fd716637822f576cf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c7c7abaf9fcb555fd716637822f576cf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c7c7abaf9fcb555fd716637822f576cf,
        type_description_1,
        par_self,
        par_username,
        par_password
    );


    // Release cached frame.
    if ( frame_c7c7abaf9fcb555fd716637822f576cf == cache_frame_c7c7abaf9fcb555fd716637822f576cf )
    {
        Py_DECREF( frame_c7c7abaf9fcb555fd716637822f576cf );
    }
    cache_frame_c7c7abaf9fcb555fd716637822f576cf = NULL;

    assertFrameObject( frame_c7c7abaf9fcb555fd716637822f576cf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_3___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_username );
    par_username = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;

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

    Py_XDECREF( par_username );
    par_username = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_3___init__ );
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


static PyObject *impl_requests$auth$$$function_4___eq__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_default_2;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_c84b7b3d4de042699d321c501576644c = NULL;

    struct Nuitka_FrameObject *frame_c84b7b3d4de042699d321c501576644c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c84b7b3d4de042699d321c501576644c, codeobj_c84b7b3d4de042699d321c501576644c, module_requests$auth, sizeof(void *)+sizeof(void *) );
    frame_c84b7b3d4de042699d321c501576644c = cache_frame_c84b7b3d4de042699d321c501576644c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c84b7b3d4de042699d321c501576644c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c84b7b3d4de042699d321c501576644c ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_all );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = PyList_New( 2 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_username );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 88;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_getattr_target_1 = par_other;

    if ( tmp_getattr_target_1 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "other" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = const_str_plain_username;
    tmp_getattr_default_1 = Py_None;
    tmp_compexpr_right_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 88;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_list_element_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 88;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_password );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 89;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_getattr_target_2 = par_other;

    if ( tmp_getattr_target_2 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_compexpr_left_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "other" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_2 = const_str_plain_password;
    tmp_getattr_default_2 = Py_None;
    tmp_compexpr_right_2 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 89;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_list_element_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 89;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_args_element_name_1, 1, tmp_list_element_1 );
    frame_c84b7b3d4de042699d321c501576644c->m_frame.f_lineno = 87;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c84b7b3d4de042699d321c501576644c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c84b7b3d4de042699d321c501576644c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c84b7b3d4de042699d321c501576644c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c84b7b3d4de042699d321c501576644c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c84b7b3d4de042699d321c501576644c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c84b7b3d4de042699d321c501576644c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c84b7b3d4de042699d321c501576644c,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_c84b7b3d4de042699d321c501576644c == cache_frame_c84b7b3d4de042699d321c501576644c )
    {
        Py_DECREF( frame_c84b7b3d4de042699d321c501576644c );
    }
    cache_frame_c84b7b3d4de042699d321c501576644c = NULL;

    assertFrameObject( frame_c84b7b3d4de042699d321c501576644c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_4___eq__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_other );
    par_other = NULL;

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

    Py_XDECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_4___eq__ );
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


static PyObject *impl_requests$auth$$$function_5___ne__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_3964ea1eb7954ea30d533f5374d57251 = NULL;

    struct Nuitka_FrameObject *frame_3964ea1eb7954ea30d533f5374d57251;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3964ea1eb7954ea30d533f5374d57251, codeobj_3964ea1eb7954ea30d533f5374d57251, module_requests$auth, sizeof(void *)+sizeof(void *) );
    frame_3964ea1eb7954ea30d533f5374d57251 = cache_frame_3964ea1eb7954ea30d533f5374d57251;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3964ea1eb7954ea30d533f5374d57251 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3964ea1eb7954ea30d533f5374d57251 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compexpr_left_1 = par_self;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = par_other;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_operand_name_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3964ea1eb7954ea30d533f5374d57251 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3964ea1eb7954ea30d533f5374d57251 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3964ea1eb7954ea30d533f5374d57251 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3964ea1eb7954ea30d533f5374d57251, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3964ea1eb7954ea30d533f5374d57251->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3964ea1eb7954ea30d533f5374d57251, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3964ea1eb7954ea30d533f5374d57251,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_3964ea1eb7954ea30d533f5374d57251 == cache_frame_3964ea1eb7954ea30d533f5374d57251 )
    {
        Py_DECREF( frame_3964ea1eb7954ea30d533f5374d57251 );
    }
    cache_frame_3964ea1eb7954ea30d533f5374d57251 = NULL;

    assertFrameObject( frame_3964ea1eb7954ea30d533f5374d57251 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_5___ne__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_other );
    par_other = NULL;

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

    Py_XDECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_5___ne__ );
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


static PyObject *impl_requests$auth$$$function_6___call__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_r = python_pars[ 1 ];
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_called_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_b010858bd836e80a2d4b8a5325e1dc34 = NULL;

    struct Nuitka_FrameObject *frame_b010858bd836e80a2d4b8a5325e1dc34;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b010858bd836e80a2d4b8a5325e1dc34, codeobj_b010858bd836e80a2d4b8a5325e1dc34, module_requests$auth, sizeof(void *)+sizeof(void *) );
    frame_b010858bd836e80a2d4b8a5325e1dc34 = cache_frame_b010858bd836e80a2d4b8a5325e1dc34;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b010858bd836e80a2d4b8a5325e1dc34 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b010858bd836e80a2d4b8a5325e1dc34 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain__basic_auth_str );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__basic_auth_str );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_basic_auth_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_username );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_password );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 96;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_b010858bd836e80a2d4b8a5325e1dc34->m_frame.f_lineno = 96;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_r;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_headers );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        exception_lineno = 96;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = const_str_plain_Authorization;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = par_r;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b010858bd836e80a2d4b8a5325e1dc34 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b010858bd836e80a2d4b8a5325e1dc34 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b010858bd836e80a2d4b8a5325e1dc34 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b010858bd836e80a2d4b8a5325e1dc34, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b010858bd836e80a2d4b8a5325e1dc34->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b010858bd836e80a2d4b8a5325e1dc34, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b010858bd836e80a2d4b8a5325e1dc34,
        type_description_1,
        par_self,
        par_r
    );


    // Release cached frame.
    if ( frame_b010858bd836e80a2d4b8a5325e1dc34 == cache_frame_b010858bd836e80a2d4b8a5325e1dc34 )
    {
        Py_DECREF( frame_b010858bd836e80a2d4b8a5325e1dc34 );
    }
    cache_frame_b010858bd836e80a2d4b8a5325e1dc34 = NULL;

    assertFrameObject( frame_b010858bd836e80a2d4b8a5325e1dc34 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_6___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_r );
    par_r = NULL;

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

    Py_XDECREF( par_r );
    par_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_6___call__ );
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


static PyObject *impl_requests$auth$$$function_7___call__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_r = python_pars[ 1 ];
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_called_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_9b4fa040955345b0da376eec2902a499 = NULL;

    struct Nuitka_FrameObject *frame_9b4fa040955345b0da376eec2902a499;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9b4fa040955345b0da376eec2902a499, codeobj_9b4fa040955345b0da376eec2902a499, module_requests$auth, sizeof(void *)+sizeof(void *) );
    frame_9b4fa040955345b0da376eec2902a499 = cache_frame_9b4fa040955345b0da376eec2902a499;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9b4fa040955345b0da376eec2902a499 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9b4fa040955345b0da376eec2902a499 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain__basic_auth_str );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__basic_auth_str );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_basic_auth_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_username );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_password );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 104;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_9b4fa040955345b0da376eec2902a499->m_frame.f_lineno = 104;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_r;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_headers );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        exception_lineno = 104;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = par_r;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9b4fa040955345b0da376eec2902a499 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9b4fa040955345b0da376eec2902a499 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9b4fa040955345b0da376eec2902a499 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9b4fa040955345b0da376eec2902a499, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9b4fa040955345b0da376eec2902a499->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9b4fa040955345b0da376eec2902a499, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9b4fa040955345b0da376eec2902a499,
        type_description_1,
        par_self,
        par_r
    );


    // Release cached frame.
    if ( frame_9b4fa040955345b0da376eec2902a499 == cache_frame_9b4fa040955345b0da376eec2902a499 )
    {
        Py_DECREF( frame_9b4fa040955345b0da376eec2902a499 );
    }
    cache_frame_9b4fa040955345b0da376eec2902a499 = NULL;

    assertFrameObject( frame_9b4fa040955345b0da376eec2902a499 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_7___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_r );
    par_r = NULL;

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

    Py_XDECREF( par_r );
    par_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_7___call__ );
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


static PyObject *impl_requests$auth$$$function_8___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_username = python_pars[ 1 ];
    PyObject *par_password = python_pars[ 2 ];
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
    static struct Nuitka_FrameObject *cache_frame_7e1690f117884a581786213a027b955f = NULL;

    struct Nuitka_FrameObject *frame_7e1690f117884a581786213a027b955f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7e1690f117884a581786213a027b955f, codeobj_7e1690f117884a581786213a027b955f, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7e1690f117884a581786213a027b955f = cache_frame_7e1690f117884a581786213a027b955f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7e1690f117884a581786213a027b955f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7e1690f117884a581786213a027b955f ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_username;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_username, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_password;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
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

        exception_lineno = 113;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_password, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_threading );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_threading );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "threading" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_7e1690f117884a581786213a027b955f->m_frame.f_lineno = 115;
    tmp_assattr_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_local );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "ooo";
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

        exception_lineno = 115;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__thread_local, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 115;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7e1690f117884a581786213a027b955f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7e1690f117884a581786213a027b955f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7e1690f117884a581786213a027b955f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7e1690f117884a581786213a027b955f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7e1690f117884a581786213a027b955f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7e1690f117884a581786213a027b955f,
        type_description_1,
        par_self,
        par_username,
        par_password
    );


    // Release cached frame.
    if ( frame_7e1690f117884a581786213a027b955f == cache_frame_7e1690f117884a581786213a027b955f )
    {
        Py_DECREF( frame_7e1690f117884a581786213a027b955f );
    }
    cache_frame_7e1690f117884a581786213a027b955f = NULL;

    assertFrameObject( frame_7e1690f117884a581786213a027b955f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_8___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_username );
    par_username = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;

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

    Py_XDECREF( par_username );
    par_username = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_8___init__ );
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


static PyObject *impl_requests$auth$$$function_9_init_per_thread_state( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    static struct Nuitka_FrameObject *cache_frame_e686c3b111cad67e81dbbad4dceef8c2 = NULL;

    struct Nuitka_FrameObject *frame_e686c3b111cad67e81dbbad4dceef8c2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e686c3b111cad67e81dbbad4dceef8c2, codeobj_e686c3b111cad67e81dbbad4dceef8c2, module_requests$auth, sizeof(void *) );
    frame_e686c3b111cad67e81dbbad4dceef8c2 = cache_frame_e686c3b111cad67e81dbbad4dceef8c2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e686c3b111cad67e81dbbad4dceef8c2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e686c3b111cad67e81dbbad4dceef8c2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_hasattr_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__thread_local );
    if ( tmp_hasattr_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_hasattr_attr_1 = const_str_plain_init;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    Py_DECREF( tmp_hasattr_source_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_assattr_name_1 = Py_True;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__thread_local );
    if ( tmp_assattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_init, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_target_1 );

        exception_lineno = 120;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_target_1 );
    tmp_assattr_name_2 = const_str_empty;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__thread_local );
    if ( tmp_assattr_target_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_last_nonce, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_target_2 );

        exception_lineno = 121;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_target_2 );
    tmp_assattr_name_3 = const_int_0;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__thread_local );
    if ( tmp_assattr_target_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_nonce_count, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_target_3 );

        exception_lineno = 122;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_target_3 );
    tmp_assattr_name_4 = PyDict_New();
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 123;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__thread_local );
    if ( tmp_assattr_target_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 123;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_chal, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );
        Py_DECREF( tmp_assattr_target_4 );

        exception_lineno = 123;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    Py_DECREF( tmp_assattr_target_4 );
    tmp_assattr_name_5 = Py_None;
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__thread_local );
    if ( tmp_assattr_target_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_pos, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_target_5 );

        exception_lineno = 124;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_target_5 );
    tmp_assattr_name_6 = Py_None;
    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__thread_local );
    if ( tmp_assattr_target_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_num_401_calls, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_target_6 );

        exception_lineno = 125;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_target_6 );
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e686c3b111cad67e81dbbad4dceef8c2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e686c3b111cad67e81dbbad4dceef8c2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e686c3b111cad67e81dbbad4dceef8c2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e686c3b111cad67e81dbbad4dceef8c2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e686c3b111cad67e81dbbad4dceef8c2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e686c3b111cad67e81dbbad4dceef8c2,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_e686c3b111cad67e81dbbad4dceef8c2 == cache_frame_e686c3b111cad67e81dbbad4dceef8c2 )
    {
        Py_DECREF( frame_e686c3b111cad67e81dbbad4dceef8c2 );
    }
    cache_frame_e686c3b111cad67e81dbbad4dceef8c2 = NULL;

    assertFrameObject( frame_e686c3b111cad67e81dbbad4dceef8c2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_9_init_per_thread_state );
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
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_9_init_per_thread_state );
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


static PyObject *impl_requests$auth$$$function_10_build_digest_header( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *var_realm = NULL;
    PyObject *var_nonce = NULL;
    PyObject *var_qop = NULL;
    PyObject *var_algorithm = NULL;
    PyObject *var_opaque = NULL;
    struct Nuitka_CellObject *var_hash_utf8 = PyCell_EMPTY();
    PyObject *var__algorithm = NULL;
    PyObject *var_md5_utf8 = NULL;
    PyObject *var_sha_utf8 = NULL;
    PyObject *var_KD = NULL;
    PyObject *var_entdig = NULL;
    PyObject *var_p_parsed = NULL;
    PyObject *var_path = NULL;
    PyObject *var_A1 = NULL;
    PyObject *var_A2 = NULL;
    PyObject *var_HA1 = NULL;
    PyObject *var_HA2 = NULL;
    PyObject *var_ncvalue = NULL;
    PyObject *var_s = NULL;
    PyObject *var_cnonce = NULL;
    PyObject *var_respdig = NULL;
    PyObject *var_noncebit = NULL;
    PyObject *var_base = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_instance_8;
    PyObject *tmp_called_instance_9;
    PyObject *tmp_called_instance_10;
    PyObject *tmp_called_instance_11;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_isnot_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_left_name_9;
    PyObject *tmp_left_name_10;
    PyObject *tmp_left_name_11;
    PyObject *tmp_left_name_12;
    PyObject *tmp_left_name_13;
    PyObject *tmp_left_name_14;
    PyObject *tmp_left_name_15;
    PyObject *tmp_left_name_16;
    PyObject *tmp_left_name_17;
    PyObject *tmp_left_name_18;
    PyObject *tmp_left_name_19;
    PyObject *tmp_left_name_20;
    PyObject *tmp_left_name_21;
    PyObject *tmp_left_name_22;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    int tmp_or_left_truth_3;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_left_value_3;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_or_right_value_3;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    PyObject *tmp_right_name_9;
    PyObject *tmp_right_name_10;
    PyObject *tmp_right_name_11;
    PyObject *tmp_right_name_12;
    PyObject *tmp_right_name_13;
    PyObject *tmp_right_name_14;
    PyObject *tmp_right_name_15;
    PyObject *tmp_right_name_16;
    PyObject *tmp_right_name_17;
    PyObject *tmp_right_name_18;
    PyObject *tmp_right_name_19;
    PyObject *tmp_right_name_20;
    PyObject *tmp_right_name_21;
    PyObject *tmp_right_name_22;
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
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    static struct Nuitka_FrameObject *cache_frame_10ec33c9d87d9675f4408d9cb59775da = NULL;

    struct Nuitka_FrameObject *frame_10ec33c9d87d9675f4408d9cb59775da;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_10ec33c9d87d9675f4408d9cb59775da, codeobj_10ec33c9d87d9675f4408d9cb59775da, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_10ec33c9d87d9675f4408d9cb59775da = cache_frame_10ec33c9d87d9675f4408d9cb59775da;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_10ec33c9d87d9675f4408d9cb59775da );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_10ec33c9d87d9675f4408d9cb59775da ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__thread_local );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_chal );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_str_plain_realm;
    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_realm == NULL );
    var_realm = tmp_assign_source_1;

    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__thread_local );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_chal );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_str_plain_nonce;
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_nonce == NULL );
    var_nonce = tmp_assign_source_2;

    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__thread_local );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_chal );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_10ec33c9d87d9675f4408d9cb59775da->m_frame.f_lineno = 134;
    tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_qop_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_qop == NULL );
    var_qop = tmp_assign_source_3;

    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__thread_local );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_chal );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_10ec33c9d87d9675f4408d9cb59775da->m_frame.f_lineno = 135;
    tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_algorithm_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_algorithm == NULL );
    var_algorithm = tmp_assign_source_4;

    tmp_source_name_10 = par_self;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__thread_local );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_chal );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_10ec33c9d87d9675f4408d9cb59775da->m_frame.f_lineno = 136;
    tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_opaque_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_opaque == NULL );
    var_opaque = tmp_assign_source_5;

    tmp_assign_source_6 = Py_None;
    {
        PyObject *old = PyCell_GET( var_hash_utf8 );
        PyCell_SET( var_hash_utf8, tmp_assign_source_6 );
        Py_INCREF( tmp_assign_source_6 );
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_algorithm;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "algorithm" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 139;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

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
    tmp_assign_source_7 = const_str_plain_MD5;
    assert( var__algorithm == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var__algorithm = tmp_assign_source_7;

    goto branch_end_1;
    branch_no_1:;
    tmp_called_instance_4 = var_algorithm;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "algorithm" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 142;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_10ec33c9d87d9675f4408d9cb59775da->m_frame.f_lineno = 142;
    tmp_assign_source_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_upper );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var__algorithm == NULL );
    var__algorithm = tmp_assign_source_8;

    branch_end_1:;
    tmp_compexpr_left_1 = var__algorithm;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = const_str_plain_MD5;
    tmp_or_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 144;
        type_description_1 = "oooooooocooooooooooooooooo";
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
    tmp_compexpr_left_2 = var__algorithm;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_algorithm" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = const_str_digest_a49a175904e70dd9f5dc0f52dbebbfdb;
    tmp_or_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 144;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_9 = MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_1_md5_utf8(  );
    assert( var_md5_utf8 == NULL );
    var_md5_utf8 = tmp_assign_source_9;

    tmp_assign_source_10 = var_md5_utf8;

    CHECK_OBJECT( tmp_assign_source_10 );
    {
        PyObject *old = PyCell_GET( var_hash_utf8 );
        PyCell_SET( var_hash_utf8, tmp_assign_source_10 );
        Py_INCREF( tmp_assign_source_10 );
        Py_XDECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_compare_left_2 = var__algorithm;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_algorithm" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 150;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_str_plain_SHA;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_11 = MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_2_sha_utf8(  );
    assert( var_sha_utf8 == NULL );
    var_sha_utf8 = tmp_assign_source_11;

    tmp_assign_source_12 = var_sha_utf8;

    CHECK_OBJECT( tmp_assign_source_12 );
    {
        PyObject *old = PyCell_GET( var_hash_utf8 );
        PyCell_SET( var_hash_utf8, tmp_assign_source_12 );
        Py_INCREF( tmp_assign_source_12 );
        Py_XDECREF( old );
    }

    branch_no_3:;
    branch_end_2:;
    tmp_assign_source_13 = MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_3_lambda( var_hash_utf8 );
    assert( var_KD == NULL );
    var_KD = tmp_assign_source_13;

    if ( var_hash_utf8 == NULL )
    {
        tmp_compare_left_3 = NULL;
    }
    else
    {
        tmp_compare_left_3 = PyCell_GET( var_hash_utf8 );
    }

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hash_utf8" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = Py_None;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_4:;
    tmp_assign_source_14 = Py_None;
    assert( var_entdig == NULL );
    Py_INCREF( tmp_assign_source_14 );
    var_entdig = tmp_assign_source_14;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_urlparse );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "urlparse" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 164;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_url;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 164;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_10ec33c9d87d9675f4408d9cb59775da->m_frame.f_lineno = 164;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_p_parsed == NULL );
    var_p_parsed = tmp_assign_source_15;

    tmp_source_name_11 = var_p_parsed;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_or_left_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_path );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 166;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_2 == 1 )
    {
        goto or_left_2;
    }
    else
    {
        goto or_right_2;
    }
    or_right_2:;
    Py_DECREF( tmp_or_left_value_2 );
    tmp_or_right_value_2 = const_str_chr_47;
    Py_INCREF( tmp_or_right_value_2 );
    tmp_assign_source_16 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_assign_source_16 = tmp_or_left_value_2;
    or_end_2:;
    assert( var_path == NULL );
    var_path = tmp_assign_source_16;

    tmp_source_name_12 = var_p_parsed;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p_parsed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_query );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 167;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_left_name_1 = var_path;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = const_str_chr_63;
    tmp_source_name_13 = var_p_parsed;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p_parsed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_query );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_17 = tmp_left_name_1;
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_path = tmp_assign_source_17;

    branch_no_5:;
    tmp_left_name_3 = const_str_digest_7b8850a6b4d3502f6f32cd3625c4afca;
    tmp_right_name_3 = PyTuple_New( 3 );
    tmp_source_name_14 = par_self;

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_right_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_username );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 170;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_realm;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_right_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "realm" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_1 );
    tmp_source_name_15 = par_self;

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_right_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_password );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 170;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_3, 2, tmp_tuple_element_1 );
    tmp_assign_source_18 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_A1 == NULL );
    var_A1 = tmp_assign_source_18;

    tmp_left_name_4 = const_str_digest_f2d2f5f01d8d9360355c50eb1d09d771;
    tmp_right_name_4 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_method;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_right_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_path;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_right_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_2 );
    tmp_assign_source_19 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_A2 == NULL );
    var_A2 = tmp_assign_source_19;

    if ( var_hash_utf8 == NULL )
    {
        tmp_called_name_2 = NULL;
    }
    else
    {
        tmp_called_name_2 = PyCell_GET( var_hash_utf8 );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hash_utf8" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_A1;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_10ec33c9d87d9675f4408d9cb59775da->m_frame.f_lineno = 173;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_HA1 == NULL );
    var_HA1 = tmp_assign_source_20;

    if ( var_hash_utf8 == NULL )
    {
        tmp_called_name_3 = NULL;
    }
    else
    {
        tmp_called_name_3 = PyCell_GET( var_hash_utf8 );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hash_utf8" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_A2;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "A2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_10ec33c9d87d9675f4408d9cb59775da->m_frame.f_lineno = 174;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_HA2 == NULL );
    var_HA2 = tmp_assign_source_21;

    tmp_compare_left_4 = var_nonce;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nonce" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_17 = par_self;

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain__thread_local );
    if ( tmp_source_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_last_nonce );
    Py_DECREF( tmp_source_name_16 );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_4 );

        exception_lineno = 176;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_4 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_19 = par_self;

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__thread_local );
    if ( tmp_source_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_nonce_count );
    Py_DECREF( tmp_source_name_18 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_inplace_assign_attr_1__start == NULL );
    tmp_inplace_assign_attr_1__start = tmp_assign_source_22;

    // Tried code:
    tmp_left_name_5 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_left_name_5 );
    tmp_right_name_5 = const_int_pos_1;
    tmp_assign_source_23 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_inplace_assign_attr_1__end == NULL );
    tmp_inplace_assign_attr_1__end = tmp_assign_source_23;

    // Tried code:
    tmp_compare_left_5 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_compare_right_5 );
    tmp_isnot_1 = ( tmp_compare_left_5 != tmp_compare_right_5 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_source_name_20 = par_self;

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto try_except_handler_3;
    }

    tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__thread_local );
    if ( tmp_assattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_nonce_count, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_target_1 );

        exception_lineno = 177;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_assattr_target_1 );
    branch_no_7:;
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

    goto branch_end_6;
    branch_no_6:;
    tmp_assattr_name_2 = const_int_pos_1;
    tmp_source_name_21 = par_self;

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain__thread_local );
    if ( tmp_assattr_target_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_nonce_count, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_target_2 );

        exception_lineno = 179;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_target_2 );
    branch_end_6:;
    tmp_left_name_6 = const_str_digest_01a11c701578b78bc17e57844dca83b0;
    tmp_source_name_23 = par_self;

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain__thread_local );
    if ( tmp_source_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_nonce_count );
    Py_DECREF( tmp_source_name_22 );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ncvalue == NULL );
    var_ncvalue = tmp_assign_source_24;

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_25 = par_self;

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain__thread_local );
    if ( tmp_source_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_nonce_count );
    Py_DECREF( tmp_source_name_24 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_10ec33c9d87d9675f4408d9cb59775da->m_frame.f_lineno = 181;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_called_instance_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_called_instance_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_10ec33c9d87d9675f4408d9cb59775da->m_frame.f_lineno = 181;
    tmp_assign_source_25 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_5 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_s == NULL );
    var_s = tmp_assign_source_25;

    tmp_left_name_7 = var_s;

    CHECK_OBJECT( tmp_left_name_7 );
    tmp_called_instance_6 = var_nonce;

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nonce" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_10ec33c9d87d9675f4408d9cb59775da->m_frame.f_lineno = 182;
    tmp_right_name_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
    tmp_assign_source_26 = tmp_left_name_7;
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_s = tmp_assign_source_26;

    tmp_left_name_8 = var_s;

    CHECK_OBJECT( tmp_left_name_8 );
    tmp_called_instance_8 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_called_instance_8 == NULL ))
    {
        tmp_called_instance_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_called_instance_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_10ec33c9d87d9675f4408d9cb59775da->m_frame.f_lineno = 183;
    tmp_called_instance_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_ctime );
    if ( tmp_called_instance_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_10ec33c9d87d9675f4408d9cb59775da->m_frame.f_lineno = 183;
    tmp_right_name_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_7 );
    if ( tmp_right_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_8, tmp_right_name_8 );
    tmp_assign_source_27 = tmp_left_name_8;
    Py_DECREF( tmp_right_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_s = tmp_assign_source_27;

    tmp_left_name_9 = var_s;

    CHECK_OBJECT( tmp_left_name_9 );
    tmp_called_instance_9 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_called_instance_9 == NULL ))
    {
        tmp_called_instance_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_called_instance_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_10ec33c9d87d9675f4408d9cb59775da->m_frame.f_lineno = 184;
    tmp_right_name_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_urandom, &PyTuple_GET_ITEM( const_tuple_int_pos_8_tuple, 0 ) );

    if ( tmp_right_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_9, tmp_right_name_9 );
    tmp_assign_source_28 = tmp_left_name_9;
    Py_DECREF( tmp_right_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_s = tmp_assign_source_28;

    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_hashlib );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib );
    }

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashlib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_sha1 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = var_s;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_10ec33c9d87d9675f4408d9cb59775da->m_frame.f_lineno = 186;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_called_instance_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_called_instance_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_10ec33c9d87d9675f4408d9cb59775da->m_frame.f_lineno = 186;
    tmp_subscribed_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_10, const_str_plain_hexdigest );
    Py_DECREF( tmp_called_instance_10 );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_3 = const_slice_none_int_pos_16_none;
    tmp_assign_source_29 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_cnonce == NULL );
    var_cnonce = tmp_assign_source_29;

    tmp_compare_left_6 = var__algorithm;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_algorithm" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = const_str_digest_a49a175904e70dd9f5dc0f52dbebbfdb;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    if ( var_hash_utf8 == NULL )
    {
        tmp_called_name_6 = NULL;
    }
    else
    {
        tmp_called_name_6 = PyCell_GET( var_hash_utf8 );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hash_utf8" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_10 = const_str_digest_7b8850a6b4d3502f6f32cd3625c4afca;
    tmp_right_name_10 = PyTuple_New( 3 );
    tmp_tuple_element_3 = var_HA1;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_right_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "HA1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_right_name_10, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_nonce;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_right_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nonce" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_right_name_10, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_cnonce;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_right_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cnonce" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_right_name_10, 2, tmp_tuple_element_3 );
    tmp_args_element_name_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_10, tmp_right_name_10 );
    Py_DECREF( tmp_right_name_10 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_10ec33c9d87d9675f4408d9cb59775da->m_frame.f_lineno = 188;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_HA1;
        var_HA1 = tmp_assign_source_30;
        Py_XDECREF( old );
    }

    branch_no_8:;
    tmp_cond_value_3 = var_qop;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "qop" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_no_9;
    }
    else
    {
        goto branch_yes_9;
    }
    branch_yes_9:;
    tmp_called_name_7 = var_KD;

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "KD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = var_HA1;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "HA1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_11 = const_str_digest_f2d2f5f01d8d9360355c50eb1d09d771;
    tmp_right_name_11 = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_nonce;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_right_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nonce" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_right_name_11, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_HA2;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_right_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "HA2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_right_name_11, 1, tmp_tuple_element_4 );
    tmp_args_element_name_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_11, tmp_right_name_11 );
    Py_DECREF( tmp_right_name_11 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_10ec33c9d87d9675f4408d9cb59775da->m_frame.f_lineno = 191;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_respdig == NULL );
    var_respdig = tmp_assign_source_31;

    goto branch_end_9;
    branch_no_9:;
    tmp_compexpr_left_3 = var_qop;

    if ( tmp_compexpr_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "qop" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_3 = const_str_plain_auth;
    tmp_or_left_value_3 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_or_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
    if ( tmp_or_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_3 );

        exception_lineno = 192;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_3 == 1 )
    {
        goto or_left_3;
    }
    else
    {
        goto or_right_3;
    }
    or_right_3:;
    Py_DECREF( tmp_or_left_value_3 );
    tmp_compexpr_left_4 = const_str_plain_auth;
    tmp_called_instance_11 = var_qop;

    if ( tmp_called_instance_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "qop" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_10ec33c9d87d9675f4408d9cb59775da->m_frame.f_lineno = 192;
    tmp_compexpr_right_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_44_tuple, 0 ) );

    if ( tmp_compexpr_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_3 = SEQUENCE_CONTAINS( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_right_4 );
    if ( tmp_or_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_or_right_value_3 );
    tmp_cond_value_4 = tmp_or_right_value_3;
    goto or_end_3;
    or_left_3:;
    tmp_cond_value_4 = tmp_or_left_value_3;
    or_end_3:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 192;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_left_name_12 = const_str_digest_b0f8a4a055f15da2a394551a1933d695;
    tmp_right_name_12 = PyTuple_New( 5 );
    tmp_tuple_element_5 = var_nonce;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_right_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nonce" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 194;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_right_name_12, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_ncvalue;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_right_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ncvalue" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 194;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_right_name_12, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_cnonce;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_right_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cnonce" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 194;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_right_name_12, 2, tmp_tuple_element_5 );
    tmp_tuple_element_5 = const_str_plain_auth;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_right_name_12, 3, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_HA2;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_right_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "HA2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 194;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_right_name_12, 4, tmp_tuple_element_5 );
    tmp_assign_source_32 = BINARY_OPERATION_REMAINDER( tmp_left_name_12, tmp_right_name_12 );
    Py_DECREF( tmp_right_name_12 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_noncebit == NULL );
    var_noncebit = tmp_assign_source_32;

    tmp_called_name_8 = var_KD;

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "KD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = var_HA1;

    if ( tmp_args_element_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "HA1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = var_noncebit;

    CHECK_OBJECT( tmp_args_element_name_10 );
    frame_10ec33c9d87d9675f4408d9cb59775da->m_frame.f_lineno = 196;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_respdig == NULL );
    var_respdig = tmp_assign_source_33;

    goto branch_end_10;
    branch_no_10:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_10:;
    branch_end_9:;
    tmp_assattr_name_3 = var_nonce;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nonce" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_27 = par_self;

    if ( tmp_source_name_27 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain__thread_local );
    if ( tmp_assattr_target_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_last_nonce, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_target_3 );

        exception_lineno = 201;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_target_3 );
    tmp_left_name_13 = const_str_digest_fe400b7786b755fe7fa07749cdd2ff1e;
    tmp_right_name_13 = PyTuple_New( 5 );
    tmp_source_name_28 = par_self;

    if ( tmp_source_name_28 == NULL )
    {
        Py_DECREF( tmp_right_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 205;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_username );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_13 );

        exception_lineno = 205;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_13, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = var_realm;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_right_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "realm" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 205;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_right_name_13, 1, tmp_tuple_element_6 );
    tmp_tuple_element_6 = var_nonce;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_right_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nonce" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 205;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_right_name_13, 2, tmp_tuple_element_6 );
    tmp_tuple_element_6 = var_path;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_right_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 205;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_right_name_13, 3, tmp_tuple_element_6 );
    tmp_tuple_element_6 = var_respdig;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_right_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "respdig" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 205;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_right_name_13, 4, tmp_tuple_element_6 );
    tmp_assign_source_34 = BINARY_OPERATION_REMAINDER( tmp_left_name_13, tmp_right_name_13 );
    Py_DECREF( tmp_right_name_13 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_base == NULL );
    var_base = tmp_assign_source_34;

    tmp_cond_value_5 = var_opaque;

    if ( tmp_cond_value_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "opaque" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 206;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_left_name_14 = var_base;

    CHECK_OBJECT( tmp_left_name_14 );
    tmp_left_name_15 = const_str_digest_7d7309ebed4abfa9aab0d6db44793741;
    tmp_right_name_15 = var_opaque;

    if ( tmp_right_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "opaque" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 207;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_14 = BINARY_OPERATION_REMAINDER( tmp_left_name_15, tmp_right_name_15 );
    if ( tmp_right_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_14, tmp_right_name_14 );
    tmp_assign_source_35 = tmp_left_name_14;
    Py_DECREF( tmp_right_name_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_base = tmp_assign_source_35;

    branch_no_11:;
    tmp_cond_value_6 = var_algorithm;

    if ( tmp_cond_value_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "algorithm" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 208;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_left_name_16 = var_base;

    CHECK_OBJECT( tmp_left_name_16 );
    tmp_left_name_17 = const_str_digest_d69b853fcab0d61d934c8e6dc6bd2d6a;
    tmp_right_name_17 = var_algorithm;

    if ( tmp_right_name_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "algorithm" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 209;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_16 = BINARY_OPERATION_REMAINDER( tmp_left_name_17, tmp_right_name_17 );
    if ( tmp_right_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_16, tmp_right_name_16 );
    tmp_assign_source_36 = tmp_left_name_16;
    Py_DECREF( tmp_right_name_16 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_base = tmp_assign_source_36;

    branch_no_12:;
    tmp_cond_value_7 = var_entdig;

    if ( tmp_cond_value_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "entdig" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 210;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_left_name_18 = var_base;

    if ( tmp_left_name_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "base" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 211;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_19 = const_str_digest_e02f9ce6a3aecd2d8ba2ec46fd1d2168;
    tmp_right_name_19 = var_entdig;

    if ( tmp_right_name_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "entdig" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 211;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_18 = BINARY_OPERATION_REMAINDER( tmp_left_name_19, tmp_right_name_19 );
    if ( tmp_right_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_18, tmp_right_name_18 );
    tmp_assign_source_37 = tmp_left_name_18;
    Py_DECREF( tmp_right_name_18 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_base = tmp_assign_source_37;

    branch_no_13:;
    tmp_cond_value_8 = var_qop;

    if ( tmp_cond_value_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "qop" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 212;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_left_name_20 = var_base;

    if ( tmp_left_name_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "base" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 213;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_21 = const_str_digest_a82f8015cfcad4d42fa43483823a6f72;
    tmp_right_name_21 = PyTuple_New( 2 );
    tmp_tuple_element_7 = var_ncvalue;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_right_name_21 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ncvalue" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 213;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_right_name_21, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = var_cnonce;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_right_name_21 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cnonce" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 213;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_right_name_21, 1, tmp_tuple_element_7 );
    tmp_right_name_20 = BINARY_OPERATION_REMAINDER( tmp_left_name_21, tmp_right_name_21 );
    Py_DECREF( tmp_right_name_21 );
    if ( tmp_right_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_20, tmp_right_name_20 );
    tmp_assign_source_38 = tmp_left_name_20;
    Py_DECREF( tmp_right_name_20 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_base = tmp_assign_source_38;

    branch_no_14:;
    tmp_left_name_22 = const_str_digest_69c286e01655beff40436b2cda33b552;
    tmp_right_name_22 = var_base;

    if ( tmp_right_name_22 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "base" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_22, tmp_right_name_22 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_1 = "oooooooocooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10ec33c9d87d9675f4408d9cb59775da );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_10ec33c9d87d9675f4408d9cb59775da );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10ec33c9d87d9675f4408d9cb59775da );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_10ec33c9d87d9675f4408d9cb59775da, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_10ec33c9d87d9675f4408d9cb59775da->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_10ec33c9d87d9675f4408d9cb59775da, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_10ec33c9d87d9675f4408d9cb59775da,
        type_description_1,
        par_self,
        par_method,
        par_url,
        var_realm,
        var_nonce,
        var_qop,
        var_algorithm,
        var_opaque,
        var_hash_utf8,
        var__algorithm,
        var_md5_utf8,
        var_sha_utf8,
        var_KD,
        var_entdig,
        var_p_parsed,
        var_path,
        var_A1,
        var_A2,
        var_HA1,
        var_HA2,
        var_ncvalue,
        var_s,
        var_cnonce,
        var_respdig,
        var_noncebit,
        var_base
    );


    // Release cached frame.
    if ( frame_10ec33c9d87d9675f4408d9cb59775da == cache_frame_10ec33c9d87d9675f4408d9cb59775da )
    {
        Py_DECREF( frame_10ec33c9d87d9675f4408d9cb59775da );
    }
    cache_frame_10ec33c9d87d9675f4408d9cb59775da = NULL;

    assertFrameObject( frame_10ec33c9d87d9675f4408d9cb59775da );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_10_build_digest_header );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( var_realm );
    var_realm = NULL;

    Py_XDECREF( var_nonce );
    var_nonce = NULL;

    Py_XDECREF( var_qop );
    var_qop = NULL;

    Py_XDECREF( var_algorithm );
    var_algorithm = NULL;

    Py_XDECREF( var_opaque );
    var_opaque = NULL;

    CHECK_OBJECT( (PyObject *)var_hash_utf8 );
    Py_DECREF( var_hash_utf8 );
    var_hash_utf8 = NULL;

    Py_XDECREF( var__algorithm );
    var__algorithm = NULL;

    Py_XDECREF( var_md5_utf8 );
    var_md5_utf8 = NULL;

    Py_XDECREF( var_sha_utf8 );
    var_sha_utf8 = NULL;

    Py_XDECREF( var_KD );
    var_KD = NULL;

    Py_XDECREF( var_entdig );
    var_entdig = NULL;

    Py_XDECREF( var_p_parsed );
    var_p_parsed = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_A1 );
    var_A1 = NULL;

    Py_XDECREF( var_A2 );
    var_A2 = NULL;

    Py_XDECREF( var_HA1 );
    var_HA1 = NULL;

    Py_XDECREF( var_HA2 );
    var_HA2 = NULL;

    Py_XDECREF( var_ncvalue );
    var_ncvalue = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_cnonce );
    var_cnonce = NULL;

    Py_XDECREF( var_respdig );
    var_respdig = NULL;

    Py_XDECREF( var_noncebit );
    var_noncebit = NULL;

    Py_XDECREF( var_base );
    var_base = NULL;

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

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( var_realm );
    var_realm = NULL;

    Py_XDECREF( var_nonce );
    var_nonce = NULL;

    Py_XDECREF( var_qop );
    var_qop = NULL;

    Py_XDECREF( var_algorithm );
    var_algorithm = NULL;

    Py_XDECREF( var_opaque );
    var_opaque = NULL;

    CHECK_OBJECT( (PyObject *)var_hash_utf8 );
    Py_DECREF( var_hash_utf8 );
    var_hash_utf8 = NULL;

    Py_XDECREF( var__algorithm );
    var__algorithm = NULL;

    Py_XDECREF( var_md5_utf8 );
    var_md5_utf8 = NULL;

    Py_XDECREF( var_sha_utf8 );
    var_sha_utf8 = NULL;

    Py_XDECREF( var_KD );
    var_KD = NULL;

    Py_XDECREF( var_entdig );
    var_entdig = NULL;

    Py_XDECREF( var_p_parsed );
    var_p_parsed = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_A1 );
    var_A1 = NULL;

    Py_XDECREF( var_A2 );
    var_A2 = NULL;

    Py_XDECREF( var_HA1 );
    var_HA1 = NULL;

    Py_XDECREF( var_HA2 );
    var_HA2 = NULL;

    Py_XDECREF( var_ncvalue );
    var_ncvalue = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_cnonce );
    var_cnonce = NULL;

    Py_XDECREF( var_respdig );
    var_respdig = NULL;

    Py_XDECREF( var_noncebit );
    var_noncebit = NULL;

    Py_XDECREF( var_base );
    var_base = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_10_build_digest_header );
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


static PyObject *impl_requests$auth$$$function_10_build_digest_header$$$function_1_md5_utf8( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_e3520a0241229beb405dbb07ca0d5d9f = NULL;

    struct Nuitka_FrameObject *frame_e3520a0241229beb405dbb07ca0d5d9f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e3520a0241229beb405dbb07ca0d5d9f, codeobj_e3520a0241229beb405dbb07ca0d5d9f, module_requests$auth, sizeof(void *) );
    frame_e3520a0241229beb405dbb07ca0d5d9f = cache_frame_e3520a0241229beb405dbb07ca0d5d9f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e3520a0241229beb405dbb07ca0d5d9f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e3520a0241229beb405dbb07ca0d5d9f ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_x;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_instance_1 = par_x;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_e3520a0241229beb405dbb07ca0d5d9f->m_frame.f_lineno = 147;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_x;
        par_x = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_hashlib );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashlib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 148;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_md5 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_x;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 148;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_e3520a0241229beb405dbb07ca0d5d9f->m_frame.f_lineno = 148;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_called_instance_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_e3520a0241229beb405dbb07ca0d5d9f->m_frame.f_lineno = 148;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_hexdigest );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e3520a0241229beb405dbb07ca0d5d9f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e3520a0241229beb405dbb07ca0d5d9f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e3520a0241229beb405dbb07ca0d5d9f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e3520a0241229beb405dbb07ca0d5d9f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e3520a0241229beb405dbb07ca0d5d9f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e3520a0241229beb405dbb07ca0d5d9f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e3520a0241229beb405dbb07ca0d5d9f,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_e3520a0241229beb405dbb07ca0d5d9f == cache_frame_e3520a0241229beb405dbb07ca0d5d9f )
    {
        Py_DECREF( frame_e3520a0241229beb405dbb07ca0d5d9f );
    }
    cache_frame_e3520a0241229beb405dbb07ca0d5d9f = NULL;

    assertFrameObject( frame_e3520a0241229beb405dbb07ca0d5d9f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_10_build_digest_header$$$function_1_md5_utf8 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_x );
    par_x = NULL;

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

    Py_XDECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_10_build_digest_header$$$function_1_md5_utf8 );
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


static PyObject *impl_requests$auth$$$function_10_build_digest_header$$$function_2_sha_utf8( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_8e6d3ec84509659be213763ac64a9f43 = NULL;

    struct Nuitka_FrameObject *frame_8e6d3ec84509659be213763ac64a9f43;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8e6d3ec84509659be213763ac64a9f43, codeobj_8e6d3ec84509659be213763ac64a9f43, module_requests$auth, sizeof(void *) );
    frame_8e6d3ec84509659be213763ac64a9f43 = cache_frame_8e6d3ec84509659be213763ac64a9f43;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8e6d3ec84509659be213763ac64a9f43 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8e6d3ec84509659be213763ac64a9f43 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_x;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 152;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_instance_1 = par_x;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_8e6d3ec84509659be213763ac64a9f43->m_frame.f_lineno = 153;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_x;
        par_x = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_hashlib );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashlib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 154;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sha1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_x;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 154;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_8e6d3ec84509659be213763ac64a9f43->m_frame.f_lineno = 154;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_called_instance_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_8e6d3ec84509659be213763ac64a9f43->m_frame.f_lineno = 154;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_hexdigest );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e6d3ec84509659be213763ac64a9f43 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e6d3ec84509659be213763ac64a9f43 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e6d3ec84509659be213763ac64a9f43 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8e6d3ec84509659be213763ac64a9f43, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8e6d3ec84509659be213763ac64a9f43->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8e6d3ec84509659be213763ac64a9f43, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8e6d3ec84509659be213763ac64a9f43,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_8e6d3ec84509659be213763ac64a9f43 == cache_frame_8e6d3ec84509659be213763ac64a9f43 )
    {
        Py_DECREF( frame_8e6d3ec84509659be213763ac64a9f43 );
    }
    cache_frame_8e6d3ec84509659be213763ac64a9f43 = NULL;

    assertFrameObject( frame_8e6d3ec84509659be213763ac64a9f43 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_10_build_digest_header$$$function_2_sha_utf8 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_x );
    par_x = NULL;

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

    Py_XDECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_10_build_digest_header$$$function_2_sha_utf8 );
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


static PyObject *impl_requests$auth$$$function_10_build_digest_header$$$function_3_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *par_d = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_2274dff947f2432fd337446cd61c8d46 = NULL;

    struct Nuitka_FrameObject *frame_2274dff947f2432fd337446cd61c8d46;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2274dff947f2432fd337446cd61c8d46, codeobj_2274dff947f2432fd337446cd61c8d46, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2274dff947f2432fd337446cd61c8d46 = cache_frame_2274dff947f2432fd337446cd61c8d46;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2274dff947f2432fd337446cd61c8d46 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2274dff947f2432fd337446cd61c8d46 ) == 2 ); // Frame stack

    // Framed code:
    if ( self->m_closure[0] == NULL )
    {
        tmp_called_name_1 = NULL;
    }
    else
    {
        tmp_called_name_1 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "hash_utf8" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;
        type_description_1 = "ooc";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_digest_f2d2f5f01d8d9360355c50eb1d09d771;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_s;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_d;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "ooc";
        goto frame_exception_exit_1;
    }
    frame_2274dff947f2432fd337446cd61c8d46->m_frame.f_lineno = 157;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "ooc";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2274dff947f2432fd337446cd61c8d46 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2274dff947f2432fd337446cd61c8d46 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2274dff947f2432fd337446cd61c8d46 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2274dff947f2432fd337446cd61c8d46, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2274dff947f2432fd337446cd61c8d46->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2274dff947f2432fd337446cd61c8d46, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2274dff947f2432fd337446cd61c8d46,
        type_description_1,
        par_s,
        par_d,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_2274dff947f2432fd337446cd61c8d46 == cache_frame_2274dff947f2432fd337446cd61c8d46 )
    {
        Py_DECREF( frame_2274dff947f2432fd337446cd61c8d46 );
    }
    cache_frame_2274dff947f2432fd337446cd61c8d46 = NULL;

    assertFrameObject( frame_2274dff947f2432fd337446cd61c8d46 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_10_build_digest_header$$$function_3_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( par_d );
    par_d = NULL;

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

    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( par_d );
    par_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_10_build_digest_header$$$function_3_lambda );
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


static PyObject *impl_requests$auth$$$function_11_handle_redirect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_r = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_fadfc6089eaec930cab030ea5855eb79 = NULL;

    struct Nuitka_FrameObject *frame_fadfc6089eaec930cab030ea5855eb79;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fadfc6089eaec930cab030ea5855eb79, codeobj_fadfc6089eaec930cab030ea5855eb79, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fadfc6089eaec930cab030ea5855eb79 = cache_frame_fadfc6089eaec930cab030ea5855eb79;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fadfc6089eaec930cab030ea5855eb79 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fadfc6089eaec930cab030ea5855eb79 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_r;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_redirect );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 219;
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
    tmp_assattr_name_1 = const_int_pos_1;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 220;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__thread_local );
    if ( tmp_assattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_num_401_calls, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_target_1 );

        exception_lineno = 220;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_target_1 );
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fadfc6089eaec930cab030ea5855eb79 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fadfc6089eaec930cab030ea5855eb79 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fadfc6089eaec930cab030ea5855eb79, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fadfc6089eaec930cab030ea5855eb79->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fadfc6089eaec930cab030ea5855eb79, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fadfc6089eaec930cab030ea5855eb79,
        type_description_1,
        par_self,
        par_r,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_fadfc6089eaec930cab030ea5855eb79 == cache_frame_fadfc6089eaec930cab030ea5855eb79 )
    {
        Py_DECREF( frame_fadfc6089eaec930cab030ea5855eb79 );
    }
    cache_frame_fadfc6089eaec930cab030ea5855eb79 = NULL;

    assertFrameObject( frame_fadfc6089eaec930cab030ea5855eb79 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_11_handle_redirect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_r );
    par_r = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_r );
    par_r = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_11_handle_redirect );
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


static PyObject *impl_requests$auth$$$function_12_handle_401( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_r = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_s_auth = NULL;
    PyObject *var_pat = NULL;
    PyObject *var_prep = NULL;
    PyObject *var__r = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
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
    PyObject *tmp_called_name_8;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
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
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_source_name_31;
    PyObject *tmp_source_name_32;
    PyObject *tmp_source_name_33;
    PyObject *tmp_source_name_34;
    PyObject *tmp_source_name_35;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_53e28b6d5f88cc39c65fc0b5f1aabd91 = NULL;

    struct Nuitka_FrameObject *frame_53e28b6d5f88cc39c65fc0b5f1aabd91;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_53e28b6d5f88cc39c65fc0b5f1aabd91, codeobj_53e28b6d5f88cc39c65fc0b5f1aabd91, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_53e28b6d5f88cc39c65fc0b5f1aabd91 = cache_frame_53e28b6d5f88cc39c65fc0b5f1aabd91;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_53e28b6d5f88cc39c65fc0b5f1aabd91 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_53e28b6d5f88cc39c65fc0b5f1aabd91 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_r;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_status_code );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_comparison_chain_1__operand_2 == NULL );
    tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;

    tmp_compexpr_left_1 = const_int_pos_400;
    tmp_compexpr_right_1 = tmp_comparison_chain_1__operand_2;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_assign_source_2 = RICH_COMPARE_LE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_comparison_chain_1__comparison_result == NULL );
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;

    tmp_cond_value_2 = tmp_comparison_chain_1__comparison_result;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    branch_no_2:;
    tmp_compexpr_left_2 = tmp_comparison_chain_1__operand_2;

    CHECK_OBJECT( tmp_compexpr_left_2 );
    tmp_compexpr_right_2 = const_int_pos_500;
    tmp_outline_return_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_outline_return_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_12_handle_401 );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( tmp_comparison_chain_1__operand_2 );
    tmp_comparison_chain_1__operand_2 = NULL;

    Py_XDECREF( tmp_comparison_chain_1__comparison_result );
    tmp_comparison_chain_1__comparison_result = NULL;

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

    Py_XDECREF( tmp_comparison_chain_1__operand_2 );
    tmp_comparison_chain_1__operand_2 = NULL;

    Py_XDECREF( tmp_comparison_chain_1__comparison_result );
    tmp_comparison_chain_1__comparison_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_12_handle_401 );
    return NULL;
    outline_result_1:;
    tmp_cond_value_1 = tmp_outline_return_value_1;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 231;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_assattr_name_1 = const_int_pos_1;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 232;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__thread_local );
    if ( tmp_assattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_num_401_calls, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_target_1 );

        exception_lineno = 232;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_target_1 );
    tmp_return_value = par_r;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 233;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 235;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__thread_local );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_pos );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_7 = par_r;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 238;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_request );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_body );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_seek );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = par_self;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 238;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__thread_local );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 238;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_pos );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 238;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_53e28b6d5f88cc39c65fc0b5f1aabd91->m_frame.f_lineno = 238;
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


        exception_lineno = 238;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    tmp_source_name_10 = par_r;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 239;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_headers );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_53e28b6d5f88cc39c65fc0b5f1aabd91->m_frame.f_lineno = 239;
    tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_digest_a88adb7a245cfc6a39c69917da364c05_str_empty_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_s_auth == NULL );
    var_s_auth = tmp_assign_source_3;

    tmp_compexpr_left_3 = const_str_plain_digest;
    tmp_called_instance_2 = var_s_auth;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_53e28b6d5f88cc39c65fc0b5f1aabd91->m_frame.f_lineno = 241;
    tmp_compexpr_right_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_lower );
    if ( tmp_compexpr_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_right_3 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
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
    tmp_source_name_12 = par_self;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__thread_local );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_num_401_calls );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_4 = const_int_pos_2;
    tmp_and_right_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_3 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 241;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_14 = par_self;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 243;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__thread_local );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_num_401_calls );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_inplace_assign_attr_1__start == NULL );
    tmp_inplace_assign_attr_1__start = tmp_assign_source_4;

    // Tried code:
    tmp_left_name_1 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_int_pos_1;
    tmp_assign_source_5 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    assert( tmp_inplace_assign_attr_1__end == NULL );
    tmp_inplace_assign_attr_1__end = tmp_assign_source_5;

    // Tried code:
    tmp_compare_left_2 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assattr_name_2 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_source_name_15 = par_self;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 243;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_assattr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__thread_local );
    if ( tmp_assattr_target_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_num_401_calls, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_target_2 );

        exception_lineno = 243;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_assattr_target_2 );
    branch_no_5:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    Py_XDECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 244;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_compile );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = const_tuple_str_digest_58295a7b2ee00e12bd235bdf35e32b18_tuple;
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_flags;
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 244;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_IGNORECASE );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 244;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_53e28b6d5f88cc39c65fc0b5f1aabd91->m_frame.f_lineno = 244;
    tmp_assign_source_6 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_pat == NULL );
    var_pat = tmp_assign_source_6;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_parse_dict_header );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_parse_dict_header );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "parse_dict_header" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 245;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_18 = var_pat;

    CHECK_OBJECT( tmp_source_name_18 );
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_sub );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_empty;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_s_auth;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s_auth" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 245;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_1 );
    tmp_kw_name_2 = PyDict_Copy( const_dict_d96fc9db79024853de9fbab06f7c41d9 );
    frame_53e28b6d5f88cc39c65fc0b5f1aabd91->m_frame.f_lineno = 245;
    tmp_args_element_name_2 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_53e28b6d5f88cc39c65fc0b5f1aabd91->m_frame.f_lineno = 245;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assattr_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_19 = par_self;

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 245;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__thread_local );
    if ( tmp_assattr_target_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 245;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_chal, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_target_3 );

        exception_lineno = 245;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    Py_DECREF( tmp_assattr_target_3 );
    tmp_source_name_20 = par_r;

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 249;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_unused = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_content );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_3 = par_r;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 250;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_53e28b6d5f88cc39c65fc0b5f1aabd91->m_frame.f_lineno = 250;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_21 = par_r;

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 251;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_request );
    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_53e28b6d5f88cc39c65fc0b5f1aabd91->m_frame.f_lineno = 251;
    tmp_assign_source_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_copy );
    Py_DECREF( tmp_called_instance_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_prep == NULL );
    var_prep = tmp_assign_source_7;

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "extract_cookies_to_jar" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 252;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_22 = var_prep;

    CHECK_OBJECT( tmp_source_name_22 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain__cookies );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_23 = par_r;

    if ( tmp_source_name_23 == NULL )
    {
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 252;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_request );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 252;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_24 = par_r;

    if ( tmp_source_name_24 == NULL )
    {
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 252;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_raw );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 252;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_53e28b6d5f88cc39c65fc0b5f1aabd91->m_frame.f_lineno = 252;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_25 = var_prep;

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prep" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 253;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_prepare_cookies );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_26 = var_prep;

    if ( tmp_source_name_26 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prep" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 253;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain__cookies );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 253;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_53e28b6d5f88cc39c65fc0b5f1aabd91->m_frame.f_lineno = 253;
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


        exception_lineno = 253;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_27 = par_self;

    if ( tmp_source_name_27 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 255;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_build_digest_header );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_28 = var_prep;

    if ( tmp_source_name_28 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prep" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 256;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_method );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 256;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_29 = var_prep;

    if ( tmp_source_name_29 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prep" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 256;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_url );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 256;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_53e28b6d5f88cc39c65fc0b5f1aabd91->m_frame.f_lineno = 255;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_7 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_30 = var_prep;

    if ( tmp_source_name_30 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prep" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 255;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_headers );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        exception_lineno = 255;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = const_str_plain_Authorization;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_32 = par_r;

    if ( tmp_source_name_32 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 257;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_connection );
    if ( tmp_source_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_send );
    Py_DECREF( tmp_source_name_31 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_prep;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prep" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 257;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_2 );
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

        exception_lineno = 257;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_assign_source_8 = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var__r == NULL );
    var__r = tmp_assign_source_8;

    tmp_source_name_34 = var__r;

    CHECK_OBJECT( tmp_source_name_34 );
    tmp_source_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_history );
    if ( tmp_source_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_append );
    Py_DECREF( tmp_source_name_33 );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = par_r;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 258;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_53e28b6d5f88cc39c65fc0b5f1aabd91->m_frame.f_lineno = 258;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_4 = var_prep;

    if ( tmp_assattr_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prep" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 259;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_4 = var__r;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 259;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_request, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 259;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = var__r;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_4:;
    tmp_assattr_name_5 = const_int_pos_1;
    tmp_source_name_35 = par_self;

    if ( tmp_source_name_35 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_5 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain__thread_local );
    if ( tmp_assattr_target_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 263;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_num_401_calls, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_target_5 );

        exception_lineno = 263;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_target_5 );
    tmp_return_value = par_r;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 264;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_53e28b6d5f88cc39c65fc0b5f1aabd91 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_53e28b6d5f88cc39c65fc0b5f1aabd91 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_53e28b6d5f88cc39c65fc0b5f1aabd91 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_53e28b6d5f88cc39c65fc0b5f1aabd91, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_53e28b6d5f88cc39c65fc0b5f1aabd91->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_53e28b6d5f88cc39c65fc0b5f1aabd91, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_53e28b6d5f88cc39c65fc0b5f1aabd91,
        type_description_1,
        par_self,
        par_r,
        par_kwargs,
        var_s_auth,
        var_pat,
        var_prep,
        var__r
    );


    // Release cached frame.
    if ( frame_53e28b6d5f88cc39c65fc0b5f1aabd91 == cache_frame_53e28b6d5f88cc39c65fc0b5f1aabd91 )
    {
        Py_DECREF( frame_53e28b6d5f88cc39c65fc0b5f1aabd91 );
    }
    cache_frame_53e28b6d5f88cc39c65fc0b5f1aabd91 = NULL;

    assertFrameObject( frame_53e28b6d5f88cc39c65fc0b5f1aabd91 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_12_handle_401 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_r );
    par_r = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_s_auth );
    var_s_auth = NULL;

    Py_XDECREF( var_pat );
    var_pat = NULL;

    Py_XDECREF( var_prep );
    var_prep = NULL;

    Py_XDECREF( var__r );
    var__r = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_r );
    par_r = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_s_auth );
    var_s_auth = NULL;

    Py_XDECREF( var_pat );
    var_pat = NULL;

    Py_XDECREF( var_prep );
    var_prep = NULL;

    Py_XDECREF( var__r );
    var__r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_12_handle_401 );
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


static PyObject *impl_requests$auth$$$function_13___call__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_r = python_pars[ 1 ];
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
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
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_026fa7e5e0f86b4eceddd3243b883360 = NULL;

    struct Nuitka_FrameObject *frame_026fa7e5e0f86b4eceddd3243b883360;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_026fa7e5e0f86b4eceddd3243b883360, codeobj_026fa7e5e0f86b4eceddd3243b883360, module_requests$auth, sizeof(void *)+sizeof(void *) );
    frame_026fa7e5e0f86b4eceddd3243b883360 = cache_frame_026fa7e5e0f86b4eceddd3243b883360;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_026fa7e5e0f86b4eceddd3243b883360 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_026fa7e5e0f86b4eceddd3243b883360 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_026fa7e5e0f86b4eceddd3243b883360->m_frame.f_lineno = 268;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_init_per_thread_state );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 270;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__thread_local );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 270;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_last_nonce );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 270;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 270;
        type_description_1 = "oo";
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
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 271;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_build_digest_header );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_r;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 271;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_method );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 271;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_r;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 271;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_url );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 271;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_026fa7e5e0f86b4eceddd3243b883360->m_frame.f_lineno = 271;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_r;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 271;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_headers );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        exception_lineno = 271;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = const_str_plain_Authorization;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    // Tried code:
    tmp_source_name_7 = par_r;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 273;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_body );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    frame_026fa7e5e0f86b4eceddd3243b883360->m_frame.f_lineno = 273;
    tmp_assattr_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_tell );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 273;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__thread_local );
    if ( tmp_assattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 273;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_pos, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_target_1 );

        exception_lineno = 273;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_target_1 );
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_026fa7e5e0f86b4eceddd3243b883360, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_026fa7e5e0f86b4eceddd3243b883360, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
        type_description_1 = "oo";
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
    tmp_assattr_name_2 = Py_None;
    tmp_source_name_9 = par_self;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 279;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }

    tmp_assattr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__thread_local );
    if ( tmp_assattr_target_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_pos, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_target_2 );

        exception_lineno = 279;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_assattr_target_2 );
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 272;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_026fa7e5e0f86b4eceddd3243b883360->m_frame) frame_026fa7e5e0f86b4eceddd3243b883360->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
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
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_13___call__ );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_source_name_10 = par_r;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 280;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_register_hook );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_str_plain_response;
    tmp_source_name_11 = par_self;

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 280;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_handle_401 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 280;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_026fa7e5e0f86b4eceddd3243b883360->m_frame.f_lineno = 280;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_12 = par_r;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 281;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_register_hook );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = const_str_plain_response;
    tmp_source_name_13 = par_self;

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 281;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_handle_redirect );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 281;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_026fa7e5e0f86b4eceddd3243b883360->m_frame.f_lineno = 281;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_3 = const_int_pos_1;
    tmp_source_name_14 = par_self;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 282;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__thread_local );
    if ( tmp_assattr_target_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_num_401_calls, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_target_3 );

        exception_lineno = 282;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_target_3 );
    tmp_return_value = par_r;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 284;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_026fa7e5e0f86b4eceddd3243b883360 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_026fa7e5e0f86b4eceddd3243b883360 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_026fa7e5e0f86b4eceddd3243b883360 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_026fa7e5e0f86b4eceddd3243b883360, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_026fa7e5e0f86b4eceddd3243b883360->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_026fa7e5e0f86b4eceddd3243b883360, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_026fa7e5e0f86b4eceddd3243b883360,
        type_description_1,
        par_self,
        par_r
    );


    // Release cached frame.
    if ( frame_026fa7e5e0f86b4eceddd3243b883360 == cache_frame_026fa7e5e0f86b4eceddd3243b883360 )
    {
        Py_DECREF( frame_026fa7e5e0f86b4eceddd3243b883360 );
    }
    cache_frame_026fa7e5e0f86b4eceddd3243b883360 = NULL;

    assertFrameObject( frame_026fa7e5e0f86b4eceddd3243b883360 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_13___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_r );
    par_r = NULL;

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

    Py_XDECREF( par_r );
    par_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_13___call__ );
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


static PyObject *impl_requests$auth$$$function_14___eq__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_default_2;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_6c676f40f25d9d94f21e092d9b2572c0 = NULL;

    struct Nuitka_FrameObject *frame_6c676f40f25d9d94f21e092d9b2572c0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6c676f40f25d9d94f21e092d9b2572c0, codeobj_6c676f40f25d9d94f21e092d9b2572c0, module_requests$auth, sizeof(void *)+sizeof(void *) );
    frame_6c676f40f25d9d94f21e092d9b2572c0 = cache_frame_6c676f40f25d9d94f21e092d9b2572c0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6c676f40f25d9d94f21e092d9b2572c0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6c676f40f25d9d94f21e092d9b2572c0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_all );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = PyList_New( 2 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_username );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 288;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_getattr_target_1 = par_other;

    if ( tmp_getattr_target_1 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "other" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 288;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = const_str_plain_username;
    tmp_getattr_default_1 = Py_None;
    tmp_compexpr_right_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 288;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_list_element_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 288;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 289;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_password );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 289;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_getattr_target_2 = par_other;

    if ( tmp_getattr_target_2 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_compexpr_left_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "other" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 289;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_2 = const_str_plain_password;
    tmp_getattr_default_2 = Py_None;
    tmp_compexpr_right_2 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 289;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_list_element_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 289;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_args_element_name_1, 1, tmp_list_element_1 );
    frame_6c676f40f25d9d94f21e092d9b2572c0->m_frame.f_lineno = 287;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c676f40f25d9d94f21e092d9b2572c0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c676f40f25d9d94f21e092d9b2572c0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c676f40f25d9d94f21e092d9b2572c0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6c676f40f25d9d94f21e092d9b2572c0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6c676f40f25d9d94f21e092d9b2572c0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6c676f40f25d9d94f21e092d9b2572c0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6c676f40f25d9d94f21e092d9b2572c0,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_6c676f40f25d9d94f21e092d9b2572c0 == cache_frame_6c676f40f25d9d94f21e092d9b2572c0 )
    {
        Py_DECREF( frame_6c676f40f25d9d94f21e092d9b2572c0 );
    }
    cache_frame_6c676f40f25d9d94f21e092d9b2572c0 = NULL;

    assertFrameObject( frame_6c676f40f25d9d94f21e092d9b2572c0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_14___eq__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_other );
    par_other = NULL;

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

    Py_XDECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_14___eq__ );
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


static PyObject *impl_requests$auth$$$function_15___ne__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_0f862401b888b210dfb9c1e01d67654a = NULL;

    struct Nuitka_FrameObject *frame_0f862401b888b210dfb9c1e01d67654a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0f862401b888b210dfb9c1e01d67654a, codeobj_0f862401b888b210dfb9c1e01d67654a, module_requests$auth, sizeof(void *)+sizeof(void *) );
    frame_0f862401b888b210dfb9c1e01d67654a = cache_frame_0f862401b888b210dfb9c1e01d67654a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0f862401b888b210dfb9c1e01d67654a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0f862401b888b210dfb9c1e01d67654a ) == 2 ); // Frame stack

    // Framed code:
    tmp_compexpr_left_1 = par_self;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = par_other;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_operand_name_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f862401b888b210dfb9c1e01d67654a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f862401b888b210dfb9c1e01d67654a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f862401b888b210dfb9c1e01d67654a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0f862401b888b210dfb9c1e01d67654a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0f862401b888b210dfb9c1e01d67654a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0f862401b888b210dfb9c1e01d67654a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0f862401b888b210dfb9c1e01d67654a,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_0f862401b888b210dfb9c1e01d67654a == cache_frame_0f862401b888b210dfb9c1e01d67654a )
    {
        Py_DECREF( frame_0f862401b888b210dfb9c1e01d67654a );
    }
    cache_frame_0f862401b888b210dfb9c1e01d67654a = NULL;

    assertFrameObject( frame_0f862401b888b210dfb9c1e01d67654a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_15___ne__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_other );
    par_other = NULL;

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

    Py_XDECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_15___ne__ );
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



static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_10_build_digest_header,
        const_str_plain_build_digest_header,
#if PYTHON_VERSION >= 330
        const_str_digest_67bc2e2875f2a676ae8e8f2595c69cad,
#endif
        codeobj_10ec33c9d87d9675f4408d9cb59775da,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$auth,
        const_str_digest_df91c2e0090a913ed1897e8fca207ea2,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_1_md5_utf8(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_10_build_digest_header$$$function_1_md5_utf8,
        const_str_plain_md5_utf8,
#if PYTHON_VERSION >= 330
        const_str_digest_437d9d9283e7705920d4361a76539982,
#endif
        codeobj_e3520a0241229beb405dbb07ca0d5d9f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$auth,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_2_sha_utf8(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_10_build_digest_header$$$function_2_sha_utf8,
        const_str_plain_sha_utf8,
#if PYTHON_VERSION >= 330
        const_str_digest_a48752b2d8c32906209a579a59eb860e,
#endif
        codeobj_8e6d3ec84509659be213763ac64a9f43,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$auth,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_3_lambda( struct Nuitka_CellObject *closure_hash_utf8 )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_10_build_digest_header$$$function_3_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        const_str_digest_41f78ead2be3f88523470f0013b27f8f,
#endif
        codeobj_2274dff947f2432fd337446cd61c8d46,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$auth,
        Py_None,
        1
    );

result->m_closure[0] = closure_hash_utf8;
Py_INCREF( result->m_closure[0] );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_11_handle_redirect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_11_handle_redirect,
        const_str_plain_handle_redirect,
#if PYTHON_VERSION >= 330
        const_str_digest_7c3d6be840d0505baea6486b3a2fb076,
#endif
        codeobj_fadfc6089eaec930cab030ea5855eb79,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$auth,
        const_str_digest_5bf0e52ad3af9d76b6e6716841011fd0,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_12_handle_401(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_12_handle_401,
        const_str_plain_handle_401,
#if PYTHON_VERSION >= 330
        const_str_digest_aa04245735e0a296f4eee2c81c6c24b4,
#endif
        codeobj_53e28b6d5f88cc39c65fc0b5f1aabd91,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$auth,
        const_str_digest_fe0ad47fb591025246f4d96ff82e1a89,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_13___call__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_13___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 330
        const_str_digest_7a006474c4967997a79cedaecd602a45,
#endif
        codeobj_026fa7e5e0f86b4eceddd3243b883360,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$auth,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_14___eq__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_14___eq__,
        const_str_plain___eq__,
#if PYTHON_VERSION >= 330
        const_str_digest_c3a9a47fda757d3a3b31995c197a305a,
#endif
        codeobj_6c676f40f25d9d94f21e092d9b2572c0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$auth,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_15___ne__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_15___ne__,
        const_str_plain___ne__,
#if PYTHON_VERSION >= 330
        const_str_digest_1086311fbf6e3245df872c941ed6e8ad,
#endif
        codeobj_0f862401b888b210dfb9c1e01d67654a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$auth,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_1__basic_auth_str(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_1__basic_auth_str,
        const_str_plain__basic_auth_str,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d8be0b3308947041db7cad90a4c9ab3f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$auth,
        const_str_digest_919a2045e823b128b54cfd720f73e3bf,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_2___call__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_2___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 330
        const_str_digest_60aadb6b5e6f7210d6b0e13a6cd7dbcb,
#endif
        codeobj_e509e3ae18103386df1e574805e21c1c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$auth,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_3___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_51abe40552a340600cafb395a2df7065,
#endif
        codeobj_c7c7abaf9fcb555fd716637822f576cf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$auth,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_4___eq__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_4___eq__,
        const_str_plain___eq__,
#if PYTHON_VERSION >= 330
        const_str_digest_7565d3f493b69797b6a3c9c487eadc9f,
#endif
        codeobj_c84b7b3d4de042699d321c501576644c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$auth,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_5___ne__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_5___ne__,
        const_str_plain___ne__,
#if PYTHON_VERSION >= 330
        const_str_digest_cb06648d43a209f35d822642f76d8852,
#endif
        codeobj_3964ea1eb7954ea30d533f5374d57251,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$auth,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_6___call__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_6___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 330
        const_str_digest_f3a7a1ca53a484562486747f6ddca3a9,
#endif
        codeobj_b010858bd836e80a2d4b8a5325e1dc34,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$auth,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_7___call__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_7___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 330
        const_str_digest_128a37116d6d30cc1592bb98f4d24b46,
#endif
        codeobj_9b4fa040955345b0da376eec2902a499,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$auth,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_8___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_ee22ae99a5537f5b922bb4b122196ae7,
#endif
        codeobj_7e1690f117884a581786213a027b955f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$auth,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_9_init_per_thread_state(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_9_init_per_thread_state,
        const_str_plain_init_per_thread_state,
#if PYTHON_VERSION >= 330
        const_str_digest_37d3a2307e31335fa61f05d3486fd568,
#endif
        codeobj_e686c3b111cad67e81dbbad4dceef8c2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$auth,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$auth =
{
    PyModuleDef_HEAD_INIT,
    "requests.auth",   /* m_name */
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

MOD_INIT_DECL( requests$auth )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$auth );
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
    puts("requests.auth: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.auth: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrequests$auth" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$auth = Py_InitModule4(
        "requests.auth",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_requests$auth = PyModule_Create( &mdef_requests$auth );
#endif

    moduledict_requests$auth = MODULE_DICT( module_requests$auth );

    CHECK_OBJECT( module_requests$auth );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_67889f3b65748dbd83938a67635b28e4, module_requests$auth );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_0_var___call__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_1_var___qualname__ = NULL;
    PyObject *outline_1_var___module__ = NULL;
    PyObject *outline_1_var___doc__ = NULL;
    PyObject *outline_1_var___init__ = NULL;
    PyObject *outline_1_var___eq__ = NULL;
    PyObject *outline_1_var___ne__ = NULL;
    PyObject *outline_1_var___call__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_2_var___qualname__ = NULL;
    PyObject *outline_2_var___module__ = NULL;
    PyObject *outline_2_var___doc__ = NULL;
    PyObject *outline_2_var___call__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_3_var___qualname__ = NULL;
    PyObject *outline_3_var___module__ = NULL;
    PyObject *outline_3_var___doc__ = NULL;
    PyObject *outline_3_var___init__ = NULL;
    PyObject *outline_3_var_init_per_thread_state = NULL;
    PyObject *outline_3_var_build_digest_header = NULL;
    PyObject *outline_3_var_handle_redirect = NULL;
    PyObject *outline_3_var_handle_401 = NULL;
    PyObject *outline_3_var___call__ = NULL;
    PyObject *outline_3_var___eq__ = NULL;
    PyObject *outline_3_var___ne__ = NULL;
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
    PyObject *tmp_import_from_1__module = NULL;
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
    PyObject *tmp_assign_source_58;
    PyObject *tmp_assign_source_59;
    PyObject *tmp_assign_source_60;
    PyObject *tmp_assign_source_61;
    PyObject *tmp_assign_source_62;
    PyObject *tmp_assign_source_63;
    PyObject *tmp_assign_source_64;
    PyObject *tmp_assign_source_65;
    PyObject *tmp_assign_source_66;
    PyObject *tmp_assign_source_67;
    PyObject *tmp_assign_source_68;
    PyObject *tmp_assign_source_69;
    PyObject *tmp_assign_source_70;
    PyObject *tmp_assign_source_71;
    PyObject *tmp_assign_source_72;
    PyObject *tmp_assign_source_73;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_bases_name_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
    int tmp_cmp_In_8;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_fromlist_name_8;
    PyObject *tmp_fromlist_name_9;
    PyObject *tmp_fromlist_name_10;
    PyObject *tmp_fromlist_name_11;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_globals_name_9;
    PyObject *tmp_globals_name_10;
    PyObject *tmp_globals_name_11;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_attr_3;
    PyObject *tmp_hasattr_attr_4;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_hasattr_source_3;
    PyObject *tmp_hasattr_source_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_kw_name_7;
    PyObject *tmp_kw_name_8;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_level_name_8;
    PyObject *tmp_level_name_9;
    PyObject *tmp_level_name_10;
    PyObject *tmp_level_name_11;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_locals_name_9;
    PyObject *tmp_locals_name_10;
    PyObject *tmp_locals_name_11;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_metaclass_name_3;
    PyObject *tmp_metaclass_name_4;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_name_name_8;
    PyObject *tmp_name_name_9;
    PyObject *tmp_name_name_10;
    PyObject *tmp_name_name_11;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
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
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_type_arg_4;
    struct Nuitka_FrameObject *frame_ff841ee5c3e16f6baf138128b43d4dbc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    // Locals dictionary setup.
PyObject *locals_dict_1 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_2 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_3 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_4 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = const_str_digest_4bfd8366dcc8506d555a9e4dbdeb488d;
    UPDATE_STRING_DICT0( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_b77f7643e35654e714f8a732d97c3588;
    UPDATE_STRING_DICT0( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_ff841ee5c3e16f6baf138128b43d4dbc = MAKE_MODULE_FRAME( codeobj_ff841ee5c3e16f6baf138128b43d4dbc, module_requests$auth );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_ff841ee5c3e16f6baf138128b43d4dbc );
    assert( Py_REFCNT( frame_ff841ee5c3e16f6baf138128b43d4dbc ) == 2 );

    // Framed code:
    frame_ff841ee5c3e16f6baf138128b43d4dbc->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_67889f3b65748dbd83938a67635b28e4;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_ff841ee5c3e16f6baf138128b43d4dbc->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_requests;
    UPDATE_STRING_DICT0( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_plain_os;
    tmp_globals_name_1 = (PyObject *)moduledict_requests$auth;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_ff841ee5c3e16f6baf138128b43d4dbc->m_frame.f_lineno = 10;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_7 );
    tmp_name_name_2 = const_str_plain_re;
    tmp_globals_name_2 = (PyObject *)moduledict_requests$auth;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_ff841ee5c3e16f6baf138128b43d4dbc->m_frame.f_lineno = 11;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_8 );
    tmp_name_name_3 = const_str_plain_time;
    tmp_globals_name_3 = (PyObject *)moduledict_requests$auth;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_ff841ee5c3e16f6baf138128b43d4dbc->m_frame.f_lineno = 12;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    assert( tmp_assign_source_9 != NULL );
    UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_9 );
    tmp_name_name_4 = const_str_plain_hashlib;
    tmp_globals_name_4 = (PyObject *)moduledict_requests$auth;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = Py_None;
    tmp_level_name_4 = const_int_0;
    frame_ff841ee5c3e16f6baf138128b43d4dbc->m_frame.f_lineno = 13;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_hashlib, tmp_assign_source_10 );
    tmp_name_name_5 = const_str_plain_threading;
    tmp_globals_name_5 = (PyObject *)moduledict_requests$auth;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = Py_None;
    tmp_level_name_5 = const_int_0;
    frame_ff841ee5c3e16f6baf138128b43d4dbc->m_frame.f_lineno = 14;
    tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_threading, tmp_assign_source_11 );
    tmp_name_name_6 = const_str_plain_warnings;
    tmp_globals_name_6 = (PyObject *)moduledict_requests$auth;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = Py_None;
    tmp_level_name_6 = const_int_0;
    frame_ff841ee5c3e16f6baf138128b43d4dbc->m_frame.f_lineno = 15;
    tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_12 );
    tmp_name_name_7 = const_str_plain_base64;
    tmp_globals_name_7 = (PyObject *)moduledict_requests$auth;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_b64encode_tuple;
    tmp_level_name_7 = const_int_0;
    frame_ff841ee5c3e16f6baf138128b43d4dbc->m_frame.f_lineno = 17;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_b64encode );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_b64encode, tmp_assign_source_13 );
    tmp_name_name_8 = const_str_plain_compat;
    tmp_globals_name_8 = (PyObject *)moduledict_requests$auth;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_urlparse_str_plain_str_str_plain_basestring_tuple;
    tmp_level_name_8 = const_int_pos_1;
    frame_ff841ee5c3e16f6baf138128b43d4dbc->m_frame.f_lineno = 19;
    tmp_assign_source_14 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_14;

    // Tried code:
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_urlparse );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_urlparse, tmp_assign_source_15 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_str );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str, tmp_assign_source_16 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_basestring );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_basestring, tmp_assign_source_17 );
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

    tmp_name_name_9 = const_str_plain_cookies;
    tmp_globals_name_9 = (PyObject *)moduledict_requests$auth;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_extract_cookies_to_jar_tuple;
    tmp_level_name_9 = const_int_pos_1;
    frame_ff841ee5c3e16f6baf138128b43d4dbc->m_frame.f_lineno = 20;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_extract_cookies_to_jar );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar, tmp_assign_source_18 );
    tmp_name_name_10 = const_str_plain__internal_utils;
    tmp_globals_name_10 = (PyObject *)moduledict_requests$auth;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = const_tuple_str_plain_to_native_string_tuple;
    tmp_level_name_10 = const_int_pos_1;
    frame_ff841ee5c3e16f6baf138128b43d4dbc->m_frame.f_lineno = 21;
    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_to_native_string );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_to_native_string, tmp_assign_source_19 );
    tmp_name_name_11 = const_str_plain_utils;
    tmp_globals_name_11 = (PyObject *)moduledict_requests$auth;
    tmp_locals_name_11 = Py_None;
    tmp_fromlist_name_11 = const_tuple_str_plain_parse_dict_header_tuple;
    tmp_level_name_11 = const_int_pos_1;
    frame_ff841ee5c3e16f6baf138128b43d4dbc->m_frame.f_lineno = 22;
    tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_parse_dict_header );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_parse_dict_header, tmp_assign_source_20 );
    tmp_assign_source_21 = const_str_digest_5d735bc80d16f0fedbdde78344a2d394;
    UPDATE_STRING_DICT0( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_CONTENT_TYPE_FORM_URLENCODED, tmp_assign_source_21 );
    tmp_assign_source_22 = const_str_digest_e1ae02aba66d45ac9d7f070694408d22;
    UPDATE_STRING_DICT0( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_CONTENT_TYPE_MULTI_PART, tmp_assign_source_22 );
    tmp_assign_source_23 = MAKE_FUNCTION_requests$auth$$$function_1__basic_auth_str(  );
    UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain__basic_auth_str, tmp_assign_source_23 );
    tmp_assign_source_24 = const_tuple_type_object_tuple;
    assert( tmp_class_creation_1__bases == NULL );
    Py_INCREF( tmp_assign_source_24 );
    tmp_class_creation_1__bases = tmp_assign_source_24;

    tmp_assign_source_25 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_25;

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


        exception_lineno = 72;

        goto try_except_handler_2;
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


        exception_lineno = 72;

        goto try_except_handler_2;
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


        exception_lineno = 72;

        goto try_except_handler_2;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_26 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 72;

        goto try_except_handler_2;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_26;

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


        exception_lineno = 72;

        goto try_except_handler_2;
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


        exception_lineno = 72;

        goto try_except_handler_2;
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


        exception_lineno = 72;

        goto try_except_handler_2;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_AuthBase;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_ff841ee5c3e16f6baf138128b43d4dbc->m_frame.f_lineno = 72;
    tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_2;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_27 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_27;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_1);
    locals_dict_1 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_29 = const_str_digest_67889f3b65748dbd83938a67635b28e4;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_29 );
    outline_0_var___module__ = tmp_assign_source_29;

    tmp_assign_source_30 = const_str_digest_2fc3f96e0216dbc7dcd34461a1c4d2ee;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_30 );
    outline_0_var___doc__ = tmp_assign_source_30;

    tmp_assign_source_31 = const_str_plain_AuthBase;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_31 );
    outline_0_var___qualname__ = tmp_assign_source_31;

    tmp_assign_source_32 = MAKE_FUNCTION_requests$auth$$$function_2___call__(  );
    assert( outline_0_var___call__ == NULL );
    outline_0_var___call__ = tmp_assign_source_32;

    // Tried code:
    tmp_called_name_3 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_2 = const_str_plain_AuthBase;
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

        exception_lineno = 72;

        goto try_except_handler_3;
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

        exception_lineno = 72;

        goto try_except_handler_3;
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

        exception_lineno = 72;

        goto try_except_handler_3;
    }
    if ( outline_0_var___call__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain___call__,
            outline_0_var___call__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain___call__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain___call__
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

        exception_lineno = 72;

        goto try_except_handler_3;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_ff841ee5c3e16f6baf138128b43d4dbc->m_frame.f_lineno = 72;
    tmp_assign_source_33 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto try_except_handler_3;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_33;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    Py_XDECREF( outline_0_var___call__ );
    outline_0_var___call__ = NULL;

    goto outline_result_1;
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

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    Py_XDECREF( outline_0_var___call__ );
    outline_0_var___call__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 72;
    goto try_except_handler_2;
    outline_result_1:;
    tmp_assign_source_28 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_AuthBase, tmp_assign_source_28 );
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Tried code:
    tmp_assign_source_34 = PyTuple_New( 1 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_AuthBase );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AuthBase );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_34 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AuthBase" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;

        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_34, 0, tmp_tuple_element_3 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_34;

    tmp_assign_source_35 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_35;

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


        exception_lineno = 79;

        goto try_except_handler_4;
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


        exception_lineno = 79;

        goto try_except_handler_4;
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


        exception_lineno = 79;

        goto try_except_handler_4;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;

        goto try_except_handler_4;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_bases_name_2 );
    tmp_assign_source_36 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_2 );

        exception_lineno = 79;

        goto try_except_handler_4;
    }
    Py_DECREF( tmp_metaclass_name_2 );
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_36;

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


        exception_lineno = 79;

        goto try_except_handler_4;
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


        exception_lineno = 79;

        goto try_except_handler_4;
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


        exception_lineno = 79;

        goto try_except_handler_4;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_4 = const_str_plain_HTTPBasicAuth;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_ff841ee5c3e16f6baf138128b43d4dbc->m_frame.f_lineno = 79;
    tmp_assign_source_37 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;

        goto try_except_handler_4;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_37 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_37;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_2);
    locals_dict_2 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_39 = const_str_digest_67889f3b65748dbd83938a67635b28e4;
    assert( outline_1_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_39 );
    outline_1_var___module__ = tmp_assign_source_39;

    tmp_assign_source_40 = const_str_digest_a664f80c1075d8cfb85f49618afc684b;
    assert( outline_1_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_40 );
    outline_1_var___doc__ = tmp_assign_source_40;

    tmp_assign_source_41 = const_str_plain_HTTPBasicAuth;
    assert( outline_1_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_41 );
    outline_1_var___qualname__ = tmp_assign_source_41;

    tmp_assign_source_42 = MAKE_FUNCTION_requests$auth$$$function_3___init__(  );
    assert( outline_1_var___init__ == NULL );
    outline_1_var___init__ = tmp_assign_source_42;

    tmp_assign_source_43 = MAKE_FUNCTION_requests$auth$$$function_4___eq__(  );
    assert( outline_1_var___eq__ == NULL );
    outline_1_var___eq__ = tmp_assign_source_43;

    tmp_assign_source_44 = MAKE_FUNCTION_requests$auth$$$function_5___ne__(  );
    assert( outline_1_var___ne__ == NULL );
    outline_1_var___ne__ = tmp_assign_source_44;

    tmp_assign_source_45 = MAKE_FUNCTION_requests$auth$$$function_6___call__(  );
    assert( outline_1_var___call__ == NULL );
    outline_1_var___call__ = tmp_assign_source_45;

    // Tried code:
    tmp_called_name_5 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_5 );
    tmp_args_name_4 = PyTuple_New( 3 );
    tmp_tuple_element_5 = const_str_plain_HTTPBasicAuth;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = locals_dict_2;
    Py_INCREF( tmp_tuple_element_5 );
    if ( outline_1_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_5,
            const_str_plain___qualname__,
            outline_1_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_5,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_5,
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
        Py_DECREF( tmp_tuple_element_5 );

        exception_lineno = 79;

        goto try_except_handler_5;
    }
    if ( outline_1_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_5,
            const_str_plain___module__,
            outline_1_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_5,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_5,
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
        Py_DECREF( tmp_tuple_element_5 );

        exception_lineno = 79;

        goto try_except_handler_5;
    }
    if ( outline_1_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_5,
            const_str_plain___doc__,
            outline_1_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_5,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_5,
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
        Py_DECREF( tmp_tuple_element_5 );

        exception_lineno = 79;

        goto try_except_handler_5;
    }
    if ( outline_1_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_5,
            const_str_plain___init__,
            outline_1_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_5,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_5,
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
        Py_DECREF( tmp_tuple_element_5 );

        exception_lineno = 79;

        goto try_except_handler_5;
    }
    if ( outline_1_var___eq__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_5,
            const_str_plain___eq__,
            outline_1_var___eq__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_5,
            const_str_plain___eq__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_5,
                const_str_plain___eq__
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
        Py_DECREF( tmp_tuple_element_5 );

        exception_lineno = 79;

        goto try_except_handler_5;
    }
    if ( outline_1_var___ne__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_5,
            const_str_plain___ne__,
            outline_1_var___ne__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_5,
            const_str_plain___ne__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_5,
                const_str_plain___ne__
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
        Py_DECREF( tmp_tuple_element_5 );

        exception_lineno = 79;

        goto try_except_handler_5;
    }
    if ( outline_1_var___call__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_5,
            const_str_plain___call__,
            outline_1_var___call__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_5,
            const_str_plain___call__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_5,
                const_str_plain___call__
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
        Py_DECREF( tmp_tuple_element_5 );

        exception_lineno = 79;

        goto try_except_handler_5;
    }
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_5 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_ff841ee5c3e16f6baf138128b43d4dbc->m_frame.f_lineno = 79;
    tmp_assign_source_46 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;

        goto try_except_handler_5;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_46;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_5:;
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

    Py_XDECREF( outline_1_var___eq__ );
    outline_1_var___eq__ = NULL;

    Py_XDECREF( outline_1_var___ne__ );
    outline_1_var___ne__ = NULL;

    Py_XDECREF( outline_1_var___call__ );
    outline_1_var___call__ = NULL;

    goto outline_result_2;
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

    Py_XDECREF( outline_1_var___qualname__ );
    outline_1_var___qualname__ = NULL;

    Py_XDECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    Py_XDECREF( outline_1_var___doc__ );
    outline_1_var___doc__ = NULL;

    Py_XDECREF( outline_1_var___init__ );
    outline_1_var___init__ = NULL;

    Py_XDECREF( outline_1_var___eq__ );
    outline_1_var___eq__ = NULL;

    Py_XDECREF( outline_1_var___ne__ );
    outline_1_var___ne__ = NULL;

    Py_XDECREF( outline_1_var___call__ );
    outline_1_var___call__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 79;
    goto try_except_handler_4;
    outline_result_2:;
    tmp_assign_source_38 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_HTTPBasicAuth, tmp_assign_source_38 );
    goto try_end_3;
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

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Tried code:
    tmp_assign_source_47 = PyTuple_New( 1 );
    tmp_tuple_element_6 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_HTTPBasicAuth );

    if (unlikely( tmp_tuple_element_6 == NULL ))
    {
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPBasicAuth );
    }

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_47 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPBasicAuth" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;

        goto try_except_handler_6;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_assign_source_47, 0, tmp_tuple_element_6 );
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_47;

    tmp_assign_source_48 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_48;

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


        exception_lineno = 100;

        goto try_except_handler_6;
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


        exception_lineno = 100;

        goto try_except_handler_6;
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


        exception_lineno = 100;

        goto try_except_handler_6;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_6;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_3 );
    condexpr_end_8:;
    condexpr_end_7:;
    tmp_bases_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_bases_name_3 );
    tmp_assign_source_49 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_3 );

        exception_lineno = 100;

        goto try_except_handler_6;
    }
    Py_DECREF( tmp_metaclass_name_3 );
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_49;

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


        exception_lineno = 100;

        goto try_except_handler_6;
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


        exception_lineno = 100;

        goto try_except_handler_6;
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


        exception_lineno = 100;

        goto try_except_handler_6;
    }
    tmp_args_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_7 = const_str_plain_HTTPProxyAuth;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_7 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_7 );
    tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_5 );
    frame_ff841ee5c3e16f6baf138128b43d4dbc->m_frame.f_lineno = 100;
    tmp_assign_source_50 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_6;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_50 = PyDict_New();
    condexpr_end_9:;
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_50;

    tmp_set_locals = tmp_class_creation_3__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_3);
    locals_dict_3 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_52 = const_str_digest_67889f3b65748dbd83938a67635b28e4;
    assert( outline_2_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_52 );
    outline_2_var___module__ = tmp_assign_source_52;

    tmp_assign_source_53 = const_str_digest_3267db0b9e319da1a85ef722557dd6fe;
    assert( outline_2_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_53 );
    outline_2_var___doc__ = tmp_assign_source_53;

    tmp_assign_source_54 = const_str_plain_HTTPProxyAuth;
    assert( outline_2_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_54 );
    outline_2_var___qualname__ = tmp_assign_source_54;

    tmp_assign_source_55 = MAKE_FUNCTION_requests$auth$$$function_7___call__(  );
    assert( outline_2_var___call__ == NULL );
    outline_2_var___call__ = tmp_assign_source_55;

    // Tried code:
    tmp_called_name_7 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_7 );
    tmp_args_name_6 = PyTuple_New( 3 );
    tmp_tuple_element_8 = const_str_plain_HTTPProxyAuth;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_8 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_8 );
    tmp_tuple_element_8 = locals_dict_3;
    Py_INCREF( tmp_tuple_element_8 );
    if ( outline_2_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_8,
            const_str_plain___qualname__,
            outline_2_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_8,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_8,
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
        Py_DECREF( tmp_tuple_element_8 );

        exception_lineno = 100;

        goto try_except_handler_7;
    }
    if ( outline_2_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_8,
            const_str_plain___module__,
            outline_2_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_8,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_8,
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
        Py_DECREF( tmp_tuple_element_8 );

        exception_lineno = 100;

        goto try_except_handler_7;
    }
    if ( outline_2_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_8,
            const_str_plain___doc__,
            outline_2_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_8,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_8,
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
        Py_DECREF( tmp_tuple_element_8 );

        exception_lineno = 100;

        goto try_except_handler_7;
    }
    if ( outline_2_var___call__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_8,
            const_str_plain___call__,
            outline_2_var___call__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_8,
            const_str_plain___call__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_8,
                const_str_plain___call__
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
        Py_DECREF( tmp_tuple_element_8 );

        exception_lineno = 100;

        goto try_except_handler_7;
    }
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_8 );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_6 );
    frame_ff841ee5c3e16f6baf138128b43d4dbc->m_frame.f_lineno = 100;
    tmp_assign_source_56 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_7;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_56;

    tmp_outline_return_value_3 = outline_2_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_3 );
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_7:;
    CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
    Py_DECREF( outline_2_var___class__ );
    outline_2_var___class__ = NULL;

    Py_XDECREF( outline_2_var___qualname__ );
    outline_2_var___qualname__ = NULL;

    Py_XDECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    Py_XDECREF( outline_2_var___doc__ );
    outline_2_var___doc__ = NULL;

    Py_XDECREF( outline_2_var___call__ );
    outline_2_var___call__ = NULL;

    goto outline_result_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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

    Py_XDECREF( outline_2_var___call__ );
    outline_2_var___call__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 100;
    goto try_except_handler_6;
    outline_result_3:;
    tmp_assign_source_51 = tmp_outline_return_value_3;
    UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_HTTPProxyAuth, tmp_assign_source_51 );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Tried code:
    tmp_assign_source_57 = PyTuple_New( 1 );
    tmp_tuple_element_9 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_AuthBase );

    if (unlikely( tmp_tuple_element_9 == NULL ))
    {
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AuthBase );
    }

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_57 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AuthBase" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;

        goto try_except_handler_8;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_assign_source_57, 0, tmp_tuple_element_9 );
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_57;

    tmp_assign_source_58 = PyDict_New();
    assert( tmp_class_creation_4__class_decl_dict == NULL );
    tmp_class_creation_4__class_decl_dict = tmp_assign_source_58;

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


        exception_lineno = 108;

        goto try_except_handler_8;
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


        exception_lineno = 108;

        goto try_except_handler_8;
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


        exception_lineno = 108;

        goto try_except_handler_8;
    }
    tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_4 );
    Py_DECREF( tmp_type_arg_4 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_8;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_4 );
    condexpr_end_11:;
    condexpr_end_10:;
    tmp_bases_name_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_bases_name_4 );
    tmp_assign_source_59 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_4 );

        exception_lineno = 108;

        goto try_except_handler_8;
    }
    Py_DECREF( tmp_metaclass_name_4 );
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_59;

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


        exception_lineno = 108;

        goto try_except_handler_8;
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


        exception_lineno = 108;

        goto try_except_handler_8;
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


        exception_lineno = 108;

        goto try_except_handler_8;
    }
    tmp_args_name_7 = PyTuple_New( 2 );
    tmp_tuple_element_10 = const_str_plain_HTTPDigestAuth;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_10 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_10 );
    tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_7 );
    frame_ff841ee5c3e16f6baf138128b43d4dbc->m_frame.f_lineno = 108;
    tmp_assign_source_60 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_8;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_60 = PyDict_New();
    condexpr_end_12:;
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_60;

    tmp_set_locals = tmp_class_creation_4__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_4);
    locals_dict_4 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_62 = const_str_digest_67889f3b65748dbd83938a67635b28e4;
    assert( outline_3_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_62 );
    outline_3_var___module__ = tmp_assign_source_62;

    tmp_assign_source_63 = const_str_digest_acf0af13ef75ff62ec9955ae4dcea3e9;
    assert( outline_3_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_63 );
    outline_3_var___doc__ = tmp_assign_source_63;

    tmp_assign_source_64 = const_str_plain_HTTPDigestAuth;
    assert( outline_3_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_64 );
    outline_3_var___qualname__ = tmp_assign_source_64;

    tmp_assign_source_65 = MAKE_FUNCTION_requests$auth$$$function_8___init__(  );
    assert( outline_3_var___init__ == NULL );
    outline_3_var___init__ = tmp_assign_source_65;

    tmp_assign_source_66 = MAKE_FUNCTION_requests$auth$$$function_9_init_per_thread_state(  );
    assert( outline_3_var_init_per_thread_state == NULL );
    outline_3_var_init_per_thread_state = tmp_assign_source_66;

    tmp_assign_source_67 = MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header(  );
    assert( outline_3_var_build_digest_header == NULL );
    outline_3_var_build_digest_header = tmp_assign_source_67;

    tmp_assign_source_68 = MAKE_FUNCTION_requests$auth$$$function_11_handle_redirect(  );
    assert( outline_3_var_handle_redirect == NULL );
    outline_3_var_handle_redirect = tmp_assign_source_68;

    tmp_assign_source_69 = MAKE_FUNCTION_requests$auth$$$function_12_handle_401(  );
    assert( outline_3_var_handle_401 == NULL );
    outline_3_var_handle_401 = tmp_assign_source_69;

    tmp_assign_source_70 = MAKE_FUNCTION_requests$auth$$$function_13___call__(  );
    assert( outline_3_var___call__ == NULL );
    outline_3_var___call__ = tmp_assign_source_70;

    tmp_assign_source_71 = MAKE_FUNCTION_requests$auth$$$function_14___eq__(  );
    assert( outline_3_var___eq__ == NULL );
    outline_3_var___eq__ = tmp_assign_source_71;

    tmp_assign_source_72 = MAKE_FUNCTION_requests$auth$$$function_15___ne__(  );
    assert( outline_3_var___ne__ == NULL );
    outline_3_var___ne__ = tmp_assign_source_72;

    // Tried code:
    tmp_called_name_9 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_9 );
    tmp_args_name_8 = PyTuple_New( 3 );
    tmp_tuple_element_11 = const_str_plain_HTTPDigestAuth;
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_11 );
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_11 );
    tmp_tuple_element_11 = locals_dict_4;
    Py_INCREF( tmp_tuple_element_11 );
    if ( outline_3_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_11,
            const_str_plain___qualname__,
            outline_3_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_11,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_11,
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
        Py_DECREF( tmp_tuple_element_11 );

        exception_lineno = 108;

        goto try_except_handler_9;
    }
    if ( outline_3_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_11,
            const_str_plain___module__,
            outline_3_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_11,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_11,
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
        Py_DECREF( tmp_tuple_element_11 );

        exception_lineno = 108;

        goto try_except_handler_9;
    }
    if ( outline_3_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_11,
            const_str_plain___doc__,
            outline_3_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_11,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_11,
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
        Py_DECREF( tmp_tuple_element_11 );

        exception_lineno = 108;

        goto try_except_handler_9;
    }
    if ( outline_3_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_11,
            const_str_plain___init__,
            outline_3_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_11,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_11,
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
        Py_DECREF( tmp_args_name_8 );
        Py_DECREF( tmp_tuple_element_11 );

        exception_lineno = 108;

        goto try_except_handler_9;
    }
    if ( outline_3_var_init_per_thread_state != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_11,
            const_str_plain_init_per_thread_state,
            outline_3_var_init_per_thread_state
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_11,
            const_str_plain_init_per_thread_state
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_11,
                const_str_plain_init_per_thread_state
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
        Py_DECREF( tmp_tuple_element_11 );

        exception_lineno = 108;

        goto try_except_handler_9;
    }
    if ( outline_3_var_build_digest_header != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_11,
            const_str_plain_build_digest_header,
            outline_3_var_build_digest_header
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_11,
            const_str_plain_build_digest_header
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_11,
                const_str_plain_build_digest_header
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
        Py_DECREF( tmp_tuple_element_11 );

        exception_lineno = 108;

        goto try_except_handler_9;
    }
    if ( outline_3_var_handle_redirect != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_11,
            const_str_plain_handle_redirect,
            outline_3_var_handle_redirect
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_11,
            const_str_plain_handle_redirect
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_11,
                const_str_plain_handle_redirect
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
        Py_DECREF( tmp_tuple_element_11 );

        exception_lineno = 108;

        goto try_except_handler_9;
    }
    if ( outline_3_var_handle_401 != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_11,
            const_str_plain_handle_401,
            outline_3_var_handle_401
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_11,
            const_str_plain_handle_401
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_11,
                const_str_plain_handle_401
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
        Py_DECREF( tmp_tuple_element_11 );

        exception_lineno = 108;

        goto try_except_handler_9;
    }
    if ( outline_3_var___call__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_11,
            const_str_plain___call__,
            outline_3_var___call__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_11,
            const_str_plain___call__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_11,
                const_str_plain___call__
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
        Py_DECREF( tmp_tuple_element_11 );

        exception_lineno = 108;

        goto try_except_handler_9;
    }
    if ( outline_3_var___eq__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_11,
            const_str_plain___eq__,
            outline_3_var___eq__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_11,
            const_str_plain___eq__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_11,
                const_str_plain___eq__
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
        Py_DECREF( tmp_tuple_element_11 );

        exception_lineno = 108;

        goto try_except_handler_9;
    }
    if ( outline_3_var___ne__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_11,
            const_str_plain___ne__,
            outline_3_var___ne__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_11,
            const_str_plain___ne__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_11,
                const_str_plain___ne__
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
        Py_DECREF( tmp_tuple_element_11 );

        exception_lineno = 108;

        goto try_except_handler_9;
    }
    PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_11 );
    tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_8 );
    frame_ff841ee5c3e16f6baf138128b43d4dbc->m_frame.f_lineno = 108;
    tmp_assign_source_73 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_73 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_9;
    }
    assert( outline_3_var___class__ == NULL );
    outline_3_var___class__ = tmp_assign_source_73;

    tmp_outline_return_value_4 = outline_3_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_4 );
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_9;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_9:;
    CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
    Py_DECREF( outline_3_var___class__ );
    outline_3_var___class__ = NULL;

    Py_XDECREF( outline_3_var___qualname__ );
    outline_3_var___qualname__ = NULL;

    Py_XDECREF( outline_3_var___module__ );
    outline_3_var___module__ = NULL;

    Py_XDECREF( outline_3_var___doc__ );
    outline_3_var___doc__ = NULL;

    Py_XDECREF( outline_3_var___init__ );
    outline_3_var___init__ = NULL;

    Py_XDECREF( outline_3_var_init_per_thread_state );
    outline_3_var_init_per_thread_state = NULL;

    Py_XDECREF( outline_3_var_build_digest_header );
    outline_3_var_build_digest_header = NULL;

    Py_XDECREF( outline_3_var_handle_redirect );
    outline_3_var_handle_redirect = NULL;

    Py_XDECREF( outline_3_var_handle_401 );
    outline_3_var_handle_401 = NULL;

    Py_XDECREF( outline_3_var___call__ );
    outline_3_var___call__ = NULL;

    Py_XDECREF( outline_3_var___eq__ );
    outline_3_var___eq__ = NULL;

    Py_XDECREF( outline_3_var___ne__ );
    outline_3_var___ne__ = NULL;

    goto outline_result_4;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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

    Py_XDECREF( outline_3_var___init__ );
    outline_3_var___init__ = NULL;

    Py_XDECREF( outline_3_var_init_per_thread_state );
    outline_3_var_init_per_thread_state = NULL;

    Py_XDECREF( outline_3_var_build_digest_header );
    outline_3_var_build_digest_header = NULL;

    Py_XDECREF( outline_3_var_handle_redirect );
    outline_3_var_handle_redirect = NULL;

    Py_XDECREF( outline_3_var_handle_401 );
    outline_3_var_handle_401 = NULL;

    Py_XDECREF( outline_3_var___call__ );
    outline_3_var___call__ = NULL;

    Py_XDECREF( outline_3_var___eq__ );
    outline_3_var___eq__ = NULL;

    Py_XDECREF( outline_3_var___ne__ );
    outline_3_var___ne__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto outline_exception_4;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 108;
    goto try_except_handler_8;
    outline_result_4:;
    tmp_assign_source_61 = tmp_outline_return_value_4;
    UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_HTTPDigestAuth, tmp_assign_source_61 );
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ff841ee5c3e16f6baf138128b43d4dbc );
#endif
    popFrameStack();

    assertFrameObject( frame_ff841ee5c3e16f6baf138128b43d4dbc );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ff841ee5c3e16f6baf138128b43d4dbc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ff841ee5c3e16f6baf138128b43d4dbc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ff841ee5c3e16f6baf138128b43d4dbc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ff841ee5c3e16f6baf138128b43d4dbc, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;


    return MOD_RETURN_VALUE( module_requests$auth );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
