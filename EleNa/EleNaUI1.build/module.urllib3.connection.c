/* Generated code for Python source for module 'urllib3.connection'
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

/* The _module_urllib3$connection is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$connection;
PyDictObject *moduledict_urllib3$connection;

/* The module constants used, if any. */
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_headers;
extern PyObject *const_str_plain_SubjectAltNameWarning;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_80f637382c7af69afc34ed6fe0d28101;
extern PyObject *const_str_plain_getLogger;
static PyObject *const_str_digest_6b674c2a52b85692f41de0a2e49ce316;
extern PyObject *const_str_plain_skip_accept_encoding;
extern PyObject *const_str_plain_CertificateError;
extern PyObject *const_str_digest_80cf594c6b193676cb3f905f65b5d391;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_HTTPConnection;
static PyObject *const_dict_93916f845314fde3dc45a1c4d3d34ff8;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain__GLOBAL_DEFAULT_TIMEOUT;
extern PyObject *const_str_plain_args;
static PyObject *const_tuple_str_plain_source_address_none_tuple;
extern PyObject *const_str_plain_binary_type;
extern PyObject *const_str_plain_encode;
static PyObject *const_str_digest_003800fb824e3437bbbf235acf31301c;
static PyObject *const_str_plain_stringish_types;
extern PyObject *const_tuple_str_plain_HTTPHeaderDict_tuple;
extern PyObject *const_str_plain_resolve_cert_reqs;
extern PyObject *const_str_plain_items;
static PyObject *const_str_digest_e8fecadf67c84324aa28152f08ceec4c;
extern PyObject *const_int_pos_80;
static PyObject *const_str_plain_today;
extern PyObject *const_str_plain_SocketError;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_HTTPSConnection;
extern PyObject *const_tuple_str_plain_utf8_tuple;
extern PyObject *const_str_plain_expanduser;
static PyObject *const_tuple_str_plain_HTTPConnection_tuple;
extern PyObject *const_str_plain_match_hostname;
extern PyObject *const_str_plain_putheader;
extern PyObject *const_str_plain_body;
extern PyObject *const_str_plain_assert_hostname;
extern PyObject *const_str_plain_PY3;
extern PyObject *const_str_plain_connect;
extern PyObject *const_str_plain_binary_form;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain_skip_host;
static PyObject *const_str_digest_6c5b3ee9bbe47a9b1ec0c71ed61345f6;
static PyObject *const_tuple_018985f238d784f3ba8650d3b8dd0ebf_tuple;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_str_plain_CERT_REQUIRED;
static PyObject *const_str_digest_9ba1c08e5bab7a37429c5bb8555c9014;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_none_none_none_none_none_none_none_tuple;
extern PyObject *const_str_plain_ssl_version;
static PyObject *const_tuple_ec2148e8e69feccf3e2ae72b685486fd_tuple;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_plain_IPPROTO_TCP;
extern PyObject *const_str_plain_set_cert;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_HTTPException;
extern PyObject *const_str_plain_host;
static PyObject *const_tuple_d6ef339f95fe7a0aadc4b44df969b43c_tuple;
extern PyObject *const_str_plain_packages;
extern PyObject *const_str_plain_https;
static PyObject *const_str_plain_RECENT_DATE;
static PyObject *const_tuple_str_plain_self_str_plain_args_str_plain_kw_tuple;
extern PyObject *const_str_plain_sock;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_VerifiedHTTPSConnection;
extern PyObject *const_str_plain_string_types;
static PyObject *const_str_plain__peer_cert;
extern PyObject *const_bytes_digest_103d73ccb44d3ba17b2afce6d3b01e78;
extern PyObject *const_str_plain_six;
extern PyObject *const_str_plain_value;
static PyObject *const_str_digest_23a97306f3a4bf1a3b9bf48c92fd45b8;
static PyObject *const_str_plain__protocol;
extern PyObject *const_str_plain_conn;
extern PyObject *const_str_plain_create_urllib3_context;
static PyObject *const_int_pos_443;
extern PyObject *const_str_plain_e;
static PyObject *const_tuple_str_plain_HTTPException_tuple;
static PyObject *const_str_digest_fbcb06792f2497ac6c7abd423e9e2d62;
extern PyObject *const_str_digest_a93bc1dc732be398b86f8538baa37185;
extern PyObject *const_str_plain_context;
extern PyObject *const_tuple_str_plain_self_str_plain_conn_tuple;
static PyObject *const_str_digest_b8059d78d07f1c28e74284d373f1a4be;
extern PyObject *const_str_plain_auto_open;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_assert_fingerprint;
static PyObject *const_str_digest_9edecb228e21673906c9e9045e5572f5;
extern PyObject *const_str_plain_datetime;
extern PyObject *const_str_plain_ssl_context;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_SystemTimeWarning;
static PyObject *const_int_pos_2016;
static PyObject *const_str_plain_len_str;
extern PyObject *const_str_plain_send;
extern PyObject *const_str_plain_verify_mode;
static PyObject *const_tuple_str_plain_cert_str_plain_asserted_hostname_str_plain_e_tuple;
static PyObject *const_str_plain_asserted_hostname;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_plain_HTTPHeaderDict;
extern PyObject *const_str_plain_util;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain__prepare_conn;
extern PyObject *const_str_digest_f4cf83dd2e7e2f235646bf31dc9dfbff;
extern PyObject *const_tuple_str_plain_error_str_plain_timeout_tuple;
static PyObject *const_str_digest_c6805becf79cf5eff4b2929a8bdf6b80;
extern PyObject *const_str_plain_cert_file;
extern PyObject *const_str_plain_cert;
extern PyObject *const_str_plain_NewConnectionError;
extern PyObject *const_str_digest_2b15502c566d8238f4869c227793bd1a;
extern PyObject *const_str_plain_ModuleSpec;
static PyObject *const_str_digest_76770aa881e569a0306b7353925db341;
extern PyObject *const_str_plain_urllib3;
extern PyObject *const_str_plain_strict;
static PyObject *const_tuple_5ad14fabeb389c57204efdecce20174a_tuple;
extern PyObject *const_str_plain_resolve_ssl_version;
extern PyObject *const_str_plain_putrequest;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_str_plain_source_address;
extern PyObject *const_str_plain_connection;
extern PyObject *const_str_plain_ssl;
extern PyObject *const_str_plain_pop;
extern PyObject *const_int_0;
extern PyObject *const_str_plain__new_conn;
extern PyObject *const_str_plain_DummyConnection;
static PyObject *const_str_digest_e0fe92f188862ba1c4cac2ad70dff86d;
extern PyObject *const_str_plain_server_hostname;
static PyObject *const_str_digest_5e42e68968b4150e2b97070212311786;
static PyObject *const_str_plain_TCP_NODELAY;
static PyObject *const_str_plain__tunnel_host;
static PyObject *const_str_digest_fa24e620292c5ddd664b0f39ae7cf5ea;
extern PyObject *const_tuple_int_pos_2_int_pos_7_tuple;
extern PyObject *const_str_plain_extra_kw;
extern PyObject *const_str_plain_cert_reqs;
static PyObject *const_tuple_str_plain_self_str_plain_extra_kw_str_plain_conn_str_plain_e_tuple;
extern PyObject *const_str_plain_ca_cert_dir;
extern PyObject *const_str_plain_endheaders;
extern PyObject *const_str_plain_log;
static PyObject *const_str_plain__match_hostname;
static PyObject *const_str_digest_df5958c87718dd50f2e0bfe7cc6ada5c;
static PyObject *const_tuple_str_plain_match_hostname_str_plain_CertificateError_tuple;
extern PyObject *const_str_plain_header;
extern PyObject *const_str_digest_03224f9e3167cae45c1e00020c2975eb;
static PyObject *const_tuple_c41d3061087d911f2fb0d6a979240304_tuple;
static PyObject *const_dict_a6ff982bac01e8d0bcf997a792f16c84;
extern PyObject *const_tuple_str_plain_subjectAltName_tuple_empty_tuple;
static PyObject *const_tuple_659bcfd89e2a907d800ea69675ef86b4_tuple;
extern PyObject *const_str_plain_ConnectionError;
extern PyObject *const_str_plain_CERT_NONE;
static PyObject *const_str_digest_e4b0b56d1d18c023aae13ad5e86b5a90;
static PyObject *const_str_plain_UnverifiedHTTPSConnection;
static PyObject *const_str_digest_b2bd82dd2dbc4f15314a5d4f089060d2;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain__tunnel;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_chunked;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_plain_is_time_off;
extern PyObject *const_str_plain_request_chunked;
extern PyObject *const_str_plain_socket_options;
static PyObject *const_tuple_e4d50c48f2ee1b6eb3ae021a15141bf1_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_subjectAltName;
extern PyObject *const_str_plain_sys;
static PyObject *const_tuple_str_digest_003800fb824e3437bbbf235acf31301c_tuple;
extern PyObject *const_str_plain_utf8;
extern PyObject *const_str_plain_chunk;
extern PyObject *const_str_plain_kw;
static PyObject *const_str_digest_f6189a2c440cbd27c022f13cff60a572;
static PyObject *const_tuple_int_pos_2016_int_pos_1_int_pos_1_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_socket;
static PyObject *const_str_plain__HTTPConnection;
extern PyObject *const_str_plain_ConnectTimeoutError;
extern PyObject *const_str_plain_ssl_wrap_socket;
extern PyObject *const_str_plain__collections;
extern PyObject *const_str_plain_ca_certs;
extern PyObject *const_str_plain_port;
extern PyObject *const_str_plain_SocketTimeout;
extern PyObject *const_str_plain_hostname;
extern PyObject *const_str_plain_getpeercert;
extern PyObject *const_slice_int_pos_2_none_none;
static PyObject *const_tuple_61284583746c6b5cc710968d0fedad5b_tuple;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_dc659baf5812ef509a1bfb99226d850c;
extern PyObject *const_str_plain_BaseSSLError;
static PyObject *const_str_digest_138ac2fe8317d63412cc87ad615d6704;
extern PyObject *const_str_plain_create_connection;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_key_file;
extern PyObject *const_tuple_bytes_digest_103d73ccb44d3ba17b2afce6d3b01e78_tuple;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_tuple_str_plain_six_tuple;
extern PyObject *const_str_plain_method;
extern PyObject *const_str_plain_keyfile;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_check_hostname;
static PyObject *const_str_plain_default_socket_options;
extern PyObject *const_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014;
extern PyObject *const_str_plain_http;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_default_port;
static PyObject *const_tuple_str_plain_strict_none_tuple;
static PyObject *const_str_plain_date;
static PyObject *const_str_digest_7624371d027c0c6002870d7abd6449de;
extern PyObject *const_str_plain_logging;
static PyObject *const_tuple_str_plain_connection_tuple;
static PyObject *const_tuple_str_plain_source_address_tuple;
extern PyObject *const_str_plain_certfile;
extern PyObject *const_str_digest_0a2ea16757d4dad15d4c8e0ada40cd0c;
extern PyObject *const_str_digest_0f2eb9f71c85852d8e24437103b38cdd;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_SSLError;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_tuple_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014_tuple;
extern PyObject *const_str_plain_is_verified;
static PyObject *const_tuple_1bf7ec2364041a6038f313c34bc76226_tuple;
extern PyObject *const_str_plain_port_by_scheme;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_80f637382c7af69afc34ed6fe0d28101 = UNSTREAM_STRING( &constant_bin[ 851506 ], 23, 0 );
    const_str_digest_6b674c2a52b85692f41de0a2e49ce316 = UNSTREAM_STRING( &constant_bin[ 851529 ], 23, 0 );
    const_dict_93916f845314fde3dc45a1c4d3d34ff8 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_93916f845314fde3dc45a1c4d3d34ff8, const_str_plain_http, const_int_pos_80 );
    const_int_pos_443 = PyLong_FromUnsignedLong( 443ul );
    PyDict_SetItem( const_dict_93916f845314fde3dc45a1c4d3d34ff8, const_str_plain_https, const_int_pos_443 );
    assert( PyDict_Size( const_dict_93916f845314fde3dc45a1c4d3d34ff8 ) == 2 );
    const_tuple_str_plain_source_address_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_source_address_none_tuple, 0, const_str_plain_source_address ); Py_INCREF( const_str_plain_source_address );
    PyTuple_SET_ITEM( const_tuple_str_plain_source_address_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_003800fb824e3437bbbf235acf31301c = UNSTREAM_STRING( &constant_bin[ 851552 ], 18, 0 );
    const_str_plain_stringish_types = UNSTREAM_STRING( &constant_bin[ 851570 ], 15, 1 );
    const_str_digest_e8fecadf67c84324aa28152f08ceec4c = UNSTREAM_STRING( &constant_bin[ 851585 ], 64, 0 );
    const_str_plain_today = UNSTREAM_STRING( &constant_bin[ 851649 ], 5, 1 );
    const_tuple_str_plain_HTTPConnection_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HTTPConnection_tuple, 0, const_str_plain_HTTPConnection ); Py_INCREF( const_str_plain_HTTPConnection );
    const_str_plain_skip_host = UNSTREAM_STRING( &constant_bin[ 851654 ], 9, 1 );
    const_str_digest_6c5b3ee9bbe47a9b1ec0c71ed61345f6 = UNSTREAM_STRING( &constant_bin[ 851663 ], 30, 0 );
    const_tuple_018985f238d784f3ba8650d3b8dd0ebf_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_018985f238d784f3ba8650d3b8dd0ebf_tuple, 0, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    PyTuple_SET_ITEM( const_tuple_018985f238d784f3ba8650d3b8dd0ebf_tuple, 1, const_str_plain___qualname__ ); Py_INCREF( const_str_plain___qualname__ );
    PyTuple_SET_ITEM( const_tuple_018985f238d784f3ba8650d3b8dd0ebf_tuple, 2, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_018985f238d784f3ba8650d3b8dd0ebf_tuple, 3, const_str_plain___doc__ ); Py_INCREF( const_str_plain___doc__ );
    const_str_plain_default_port = UNSTREAM_STRING( &constant_bin[ 851693 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_018985f238d784f3ba8650d3b8dd0ebf_tuple, 4, const_str_plain_default_port ); Py_INCREF( const_str_plain_default_port );
    const_str_plain_default_socket_options = UNSTREAM_STRING( &constant_bin[ 851705 ], 22, 1 );
    PyTuple_SET_ITEM( const_tuple_018985f238d784f3ba8650d3b8dd0ebf_tuple, 5, const_str_plain_default_socket_options ); Py_INCREF( const_str_plain_default_socket_options );
    PyTuple_SET_ITEM( const_tuple_018985f238d784f3ba8650d3b8dd0ebf_tuple, 6, const_str_plain_is_verified ); Py_INCREF( const_str_plain_is_verified );
    PyTuple_SET_ITEM( const_tuple_018985f238d784f3ba8650d3b8dd0ebf_tuple, 7, const_str_plain___init__ ); Py_INCREF( const_str_plain___init__ );
    PyTuple_SET_ITEM( const_tuple_018985f238d784f3ba8650d3b8dd0ebf_tuple, 8, const_str_plain__new_conn ); Py_INCREF( const_str_plain__new_conn );
    PyTuple_SET_ITEM( const_tuple_018985f238d784f3ba8650d3b8dd0ebf_tuple, 9, const_str_plain__prepare_conn ); Py_INCREF( const_str_plain__prepare_conn );
    PyTuple_SET_ITEM( const_tuple_018985f238d784f3ba8650d3b8dd0ebf_tuple, 10, const_str_plain_connect ); Py_INCREF( const_str_plain_connect );
    PyTuple_SET_ITEM( const_tuple_018985f238d784f3ba8650d3b8dd0ebf_tuple, 11, const_str_plain_request_chunked ); Py_INCREF( const_str_plain_request_chunked );
    const_str_digest_9ba1c08e5bab7a37429c5bb8555c9014 = UNSTREAM_STRING( &constant_bin[ 851727 ], 22, 0 );
    const_tuple_ec2148e8e69feccf3e2ae72b685486fd_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_ec2148e8e69feccf3e2ae72b685486fd_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ec2148e8e69feccf3e2ae72b685486fd_tuple, 1, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    PyTuple_SET_ITEM( const_tuple_ec2148e8e69feccf3e2ae72b685486fd_tuple, 2, const_str_plain_port ); Py_INCREF( const_str_plain_port );
    PyTuple_SET_ITEM( const_tuple_ec2148e8e69feccf3e2ae72b685486fd_tuple, 3, const_str_plain_key_file ); Py_INCREF( const_str_plain_key_file );
    PyTuple_SET_ITEM( const_tuple_ec2148e8e69feccf3e2ae72b685486fd_tuple, 4, const_str_plain_cert_file ); Py_INCREF( const_str_plain_cert_file );
    PyTuple_SET_ITEM( const_tuple_ec2148e8e69feccf3e2ae72b685486fd_tuple, 5, const_str_plain_strict ); Py_INCREF( const_str_plain_strict );
    PyTuple_SET_ITEM( const_tuple_ec2148e8e69feccf3e2ae72b685486fd_tuple, 6, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    PyTuple_SET_ITEM( const_tuple_ec2148e8e69feccf3e2ae72b685486fd_tuple, 7, const_str_plain_ssl_context ); Py_INCREF( const_str_plain_ssl_context );
    PyTuple_SET_ITEM( const_tuple_ec2148e8e69feccf3e2ae72b685486fd_tuple, 8, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    const_str_plain_IPPROTO_TCP = UNSTREAM_STRING( &constant_bin[ 851749 ], 11, 1 );
    const_tuple_d6ef339f95fe7a0aadc4b44df969b43c_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_d6ef339f95fe7a0aadc4b44df969b43c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d6ef339f95fe7a0aadc4b44df969b43c_tuple, 1, const_str_plain_conn ); Py_INCREF( const_str_plain_conn );
    PyTuple_SET_ITEM( const_tuple_d6ef339f95fe7a0aadc4b44df969b43c_tuple, 2, const_str_plain_hostname ); Py_INCREF( const_str_plain_hostname );
    const_str_plain_is_time_off = UNSTREAM_STRING( &constant_bin[ 851760 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_d6ef339f95fe7a0aadc4b44df969b43c_tuple, 3, const_str_plain_is_time_off ); Py_INCREF( const_str_plain_is_time_off );
    PyTuple_SET_ITEM( const_tuple_d6ef339f95fe7a0aadc4b44df969b43c_tuple, 4, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    PyTuple_SET_ITEM( const_tuple_d6ef339f95fe7a0aadc4b44df969b43c_tuple, 5, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    const_str_plain_RECENT_DATE = UNSTREAM_STRING( &constant_bin[ 851771 ], 11, 1 );
    const_tuple_str_plain_self_str_plain_args_str_plain_kw_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_args_str_plain_kw_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_args_str_plain_kw_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_args_str_plain_kw_tuple, 2, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    const_str_plain__peer_cert = UNSTREAM_STRING( &constant_bin[ 851782 ], 10, 1 );
    const_str_digest_23a97306f3a4bf1a3b9bf48c92fd45b8 = UNSTREAM_STRING( &constant_bin[ 851792 ], 27, 0 );
    const_str_plain__protocol = UNSTREAM_STRING( &constant_bin[ 834254 ], 9, 1 );
    const_tuple_str_plain_HTTPException_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HTTPException_tuple, 0, const_str_plain_HTTPException ); Py_INCREF( const_str_plain_HTTPException );
    const_str_digest_fbcb06792f2497ac6c7abd423e9e2d62 = UNSTREAM_STRING( &constant_bin[ 851819 ], 9, 0 );
    const_str_digest_b8059d78d07f1c28e74284d373f1a4be = UNSTREAM_STRING( &constant_bin[ 851828 ], 28, 0 );
    const_str_digest_9edecb228e21673906c9e9045e5572f5 = UNSTREAM_STRING( &constant_bin[ 851856 ], 234, 0 );
    const_int_pos_2016 = PyLong_FromUnsignedLong( 2016ul );
    const_str_plain_len_str = UNSTREAM_STRING( &constant_bin[ 852090 ], 7, 1 );
    const_tuple_str_plain_cert_str_plain_asserted_hostname_str_plain_e_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cert_str_plain_asserted_hostname_str_plain_e_tuple, 0, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    const_str_plain_asserted_hostname = UNSTREAM_STRING( &constant_bin[ 852097 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cert_str_plain_asserted_hostname_str_plain_e_tuple, 1, const_str_plain_asserted_hostname ); Py_INCREF( const_str_plain_asserted_hostname );
    PyTuple_SET_ITEM( const_tuple_str_plain_cert_str_plain_asserted_hostname_str_plain_e_tuple, 2, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_str_digest_c6805becf79cf5eff4b2929a8bdf6b80 = UNSTREAM_STRING( &constant_bin[ 852114 ], 24, 0 );
    const_str_digest_76770aa881e569a0306b7353925db341 = UNSTREAM_STRING( &constant_bin[ 852138 ], 87, 0 );
    const_tuple_5ad14fabeb389c57204efdecce20174a_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_5ad14fabeb389c57204efdecce20174a_tuple, 0, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    PyTuple_SET_ITEM( const_tuple_5ad14fabeb389c57204efdecce20174a_tuple, 1, const_str_plain___qualname__ ); Py_INCREF( const_str_plain___qualname__ );
    PyTuple_SET_ITEM( const_tuple_5ad14fabeb389c57204efdecce20174a_tuple, 2, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_5ad14fabeb389c57204efdecce20174a_tuple, 3, const_str_plain_default_port ); Py_INCREF( const_str_plain_default_port );
    PyTuple_SET_ITEM( const_tuple_5ad14fabeb389c57204efdecce20174a_tuple, 4, const_str_plain_ssl_version ); Py_INCREF( const_str_plain_ssl_version );
    PyTuple_SET_ITEM( const_tuple_5ad14fabeb389c57204efdecce20174a_tuple, 5, const_str_plain___init__ ); Py_INCREF( const_str_plain___init__ );
    PyTuple_SET_ITEM( const_tuple_5ad14fabeb389c57204efdecce20174a_tuple, 6, const_str_plain_connect ); Py_INCREF( const_str_plain_connect );
    const_str_digest_e0fe92f188862ba1c4cac2ad70dff86d = UNSTREAM_STRING( &constant_bin[ 852225 ], 112, 0 );
    const_str_digest_5e42e68968b4150e2b97070212311786 = UNSTREAM_STRING( &constant_bin[ 852337 ], 88, 0 );
    const_str_plain_TCP_NODELAY = UNSTREAM_STRING( &constant_bin[ 852425 ], 11, 1 );
    const_str_plain__tunnel_host = UNSTREAM_STRING( &constant_bin[ 852436 ], 12, 1 );
    const_str_digest_fa24e620292c5ddd664b0f39ae7cf5ea = UNSTREAM_STRING( &constant_bin[ 852448 ], 91, 0 );
    const_tuple_str_plain_self_str_plain_extra_kw_str_plain_conn_str_plain_e_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_extra_kw_str_plain_conn_str_plain_e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_extra_kw_str_plain_conn_str_plain_e_tuple, 1, const_str_plain_extra_kw ); Py_INCREF( const_str_plain_extra_kw );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_extra_kw_str_plain_conn_str_plain_e_tuple, 2, const_str_plain_conn ); Py_INCREF( const_str_plain_conn );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_extra_kw_str_plain_conn_str_plain_e_tuple, 3, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_str_plain__match_hostname = UNSTREAM_STRING( &constant_bin[ 852539 ], 15, 1 );
    const_str_digest_df5958c87718dd50f2e0bfe7cc6ada5c = UNSTREAM_STRING( &constant_bin[ 852554 ], 45, 0 );
    const_tuple_str_plain_match_hostname_str_plain_CertificateError_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_match_hostname_str_plain_CertificateError_tuple, 0, const_str_plain_match_hostname ); Py_INCREF( const_str_plain_match_hostname );
    PyTuple_SET_ITEM( const_tuple_str_plain_match_hostname_str_plain_CertificateError_tuple, 1, const_str_plain_CertificateError ); Py_INCREF( const_str_plain_CertificateError );
    const_tuple_c41d3061087d911f2fb0d6a979240304_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_c41d3061087d911f2fb0d6a979240304_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c41d3061087d911f2fb0d6a979240304_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_c41d3061087d911f2fb0d6a979240304_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_c41d3061087d911f2fb0d6a979240304_tuple, 3, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    PyTuple_SET_ITEM( const_tuple_c41d3061087d911f2fb0d6a979240304_tuple, 4, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_c41d3061087d911f2fb0d6a979240304_tuple, 5, const_str_plain_skip_accept_encoding ); Py_INCREF( const_str_plain_skip_accept_encoding );
    PyTuple_SET_ITEM( const_tuple_c41d3061087d911f2fb0d6a979240304_tuple, 6, const_str_plain_skip_host ); Py_INCREF( const_str_plain_skip_host );
    PyTuple_SET_ITEM( const_tuple_c41d3061087d911f2fb0d6a979240304_tuple, 7, const_str_plain_header ); Py_INCREF( const_str_plain_header );
    PyTuple_SET_ITEM( const_tuple_c41d3061087d911f2fb0d6a979240304_tuple, 8, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_c41d3061087d911f2fb0d6a979240304_tuple, 9, const_str_plain_stringish_types ); Py_INCREF( const_str_plain_stringish_types );
    PyTuple_SET_ITEM( const_tuple_c41d3061087d911f2fb0d6a979240304_tuple, 10, const_str_plain_chunk ); Py_INCREF( const_str_plain_chunk );
    PyTuple_SET_ITEM( const_tuple_c41d3061087d911f2fb0d6a979240304_tuple, 11, const_str_plain_len_str ); Py_INCREF( const_str_plain_len_str );
    const_dict_a6ff982bac01e8d0bcf997a792f16c84 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_a6ff982bac01e8d0bcf997a792f16c84, const_str_plain_binary_form, Py_True );
    assert( PyDict_Size( const_dict_a6ff982bac01e8d0bcf997a792f16c84 ) == 1 );
    const_tuple_659bcfd89e2a907d800ea69675ef86b4_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_659bcfd89e2a907d800ea69675ef86b4_tuple, 0, const_str_plain_resolve_cert_reqs ); Py_INCREF( const_str_plain_resolve_cert_reqs );
    PyTuple_SET_ITEM( const_tuple_659bcfd89e2a907d800ea69675ef86b4_tuple, 1, const_str_plain_resolve_ssl_version ); Py_INCREF( const_str_plain_resolve_ssl_version );
    PyTuple_SET_ITEM( const_tuple_659bcfd89e2a907d800ea69675ef86b4_tuple, 2, const_str_plain_assert_fingerprint ); Py_INCREF( const_str_plain_assert_fingerprint );
    PyTuple_SET_ITEM( const_tuple_659bcfd89e2a907d800ea69675ef86b4_tuple, 3, const_str_plain_create_urllib3_context ); Py_INCREF( const_str_plain_create_urllib3_context );
    PyTuple_SET_ITEM( const_tuple_659bcfd89e2a907d800ea69675ef86b4_tuple, 4, const_str_plain_ssl_wrap_socket ); Py_INCREF( const_str_plain_ssl_wrap_socket );
    const_str_digest_e4b0b56d1d18c023aae13ad5e86b5a90 = UNSTREAM_STRING( &constant_bin[ 852599 ], 24, 0 );
    const_str_plain_UnverifiedHTTPSConnection = UNSTREAM_STRING( &constant_bin[ 852623 ], 25, 1 );
    const_str_digest_b2bd82dd2dbc4f15314a5d4f089060d2 = UNSTREAM_STRING( &constant_bin[ 852648 ], 1147, 0 );
    const_str_plain__tunnel = UNSTREAM_STRING( &constant_bin[ 852436 ], 7, 1 );
    const_tuple_e4d50c48f2ee1b6eb3ae021a15141bf1_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_e4d50c48f2ee1b6eb3ae021a15141bf1_tuple, 0, const_str_plain_NewConnectionError ); Py_INCREF( const_str_plain_NewConnectionError );
    PyTuple_SET_ITEM( const_tuple_e4d50c48f2ee1b6eb3ae021a15141bf1_tuple, 1, const_str_plain_ConnectTimeoutError ); Py_INCREF( const_str_plain_ConnectTimeoutError );
    PyTuple_SET_ITEM( const_tuple_e4d50c48f2ee1b6eb3ae021a15141bf1_tuple, 2, const_str_plain_SubjectAltNameWarning ); Py_INCREF( const_str_plain_SubjectAltNameWarning );
    PyTuple_SET_ITEM( const_tuple_e4d50c48f2ee1b6eb3ae021a15141bf1_tuple, 3, const_str_plain_SystemTimeWarning ); Py_INCREF( const_str_plain_SystemTimeWarning );
    const_tuple_str_digest_003800fb824e3437bbbf235acf31301c_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_003800fb824e3437bbbf235acf31301c_tuple, 0, const_str_digest_003800fb824e3437bbbf235acf31301c ); Py_INCREF( const_str_digest_003800fb824e3437bbbf235acf31301c );
    const_str_digest_f6189a2c440cbd27c022f13cff60a572 = UNSTREAM_STRING( &constant_bin[ 853795 ], 32, 0 );
    const_tuple_int_pos_2016_int_pos_1_int_pos_1_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2016_int_pos_1_int_pos_1_tuple, 0, const_int_pos_2016 ); Py_INCREF( const_int_pos_2016 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2016_int_pos_1_int_pos_1_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2016_int_pos_1_int_pos_1_tuple, 2, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_str_plain__HTTPConnection = UNSTREAM_STRING( &constant_bin[ 851827 ], 15, 1 );
    const_tuple_61284583746c6b5cc710968d0fedad5b_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_61284583746c6b5cc710968d0fedad5b_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_61284583746c6b5cc710968d0fedad5b_tuple, 1, const_str_plain_key_file ); Py_INCREF( const_str_plain_key_file );
    PyTuple_SET_ITEM( const_tuple_61284583746c6b5cc710968d0fedad5b_tuple, 2, const_str_plain_cert_file ); Py_INCREF( const_str_plain_cert_file );
    PyTuple_SET_ITEM( const_tuple_61284583746c6b5cc710968d0fedad5b_tuple, 3, const_str_plain_cert_reqs ); Py_INCREF( const_str_plain_cert_reqs );
    PyTuple_SET_ITEM( const_tuple_61284583746c6b5cc710968d0fedad5b_tuple, 4, const_str_plain_ca_certs ); Py_INCREF( const_str_plain_ca_certs );
    PyTuple_SET_ITEM( const_tuple_61284583746c6b5cc710968d0fedad5b_tuple, 5, const_str_plain_assert_hostname ); Py_INCREF( const_str_plain_assert_hostname );
    PyTuple_SET_ITEM( const_tuple_61284583746c6b5cc710968d0fedad5b_tuple, 6, const_str_plain_assert_fingerprint ); Py_INCREF( const_str_plain_assert_fingerprint );
    PyTuple_SET_ITEM( const_tuple_61284583746c6b5cc710968d0fedad5b_tuple, 7, const_str_plain_ca_cert_dir ); Py_INCREF( const_str_plain_ca_cert_dir );
    const_str_digest_dc659baf5812ef509a1bfb99226d850c = UNSTREAM_STRING( &constant_bin[ 853827 ], 131, 0 );
    const_str_digest_138ac2fe8317d63412cc87ad615d6704 = UNSTREAM_STRING( &constant_bin[ 853958 ], 31, 0 );
    const_tuple_str_plain_strict_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_strict_none_tuple, 0, const_str_plain_strict ); Py_INCREF( const_str_plain_strict );
    PyTuple_SET_ITEM( const_tuple_str_plain_strict_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_plain_date = UNSTREAM_STRING( &constant_bin[ 608270 ], 4, 1 );
    const_str_digest_7624371d027c0c6002870d7abd6449de = UNSTREAM_STRING( &constant_bin[ 853989 ], 99, 0 );
    const_tuple_str_plain_connection_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_connection_tuple, 0, const_str_plain_connection ); Py_INCREF( const_str_plain_connection );
    const_tuple_str_plain_source_address_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_source_address_tuple, 0, const_str_plain_source_address ); Py_INCREF( const_str_plain_source_address );
    const_tuple_1bf7ec2364041a6038f313c34bc76226_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_1bf7ec2364041a6038f313c34bc76226_tuple, 0, const_str_digest_2b15502c566d8238f4869c227793bd1a ); Py_INCREF( const_str_digest_2b15502c566d8238f4869c227793bd1a );
    PyTuple_SET_ITEM( const_tuple_1bf7ec2364041a6038f313c34bc76226_tuple, 1, const_str_plain_chunked ); Py_INCREF( const_str_plain_chunked );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$connection( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a3315b004bdb768c8b24fdd09ad0f7e1;
static PyCodeObject *codeobj_38ba03ed01683d1df654a0e5d393bd00;
static PyCodeObject *codeobj_e5cb71e6d4cfe60da3caa2193d15a0b1;
static PyCodeObject *codeobj_b80ee0a0912c615c31fa20251d212ce5;
static PyCodeObject *codeobj_8639ab82649690ac7ad6cf87a375e30a;
static PyCodeObject *codeobj_ee47fda764d9d702a60793f38960f8da;
static PyCodeObject *codeobj_4864ce8aaadf427b701d3689cc4c088c;
static PyCodeObject *codeobj_38c3ae935c46b9f0b82d30f5529b53d3;
static PyCodeObject *codeobj_209b7e7234b809d0faf894e0487b66d2;
static PyCodeObject *codeobj_245a62f2727ce469008beeef46d55e25;
static PyCodeObject *codeobj_e62554c358f5e409f7b13b6034d3a544;
static PyCodeObject *codeobj_53b4b7cb6fb60b8961bd8d4230f01538;
static PyCodeObject *codeobj_6f9ce62ece5bbdc8b26c8a83644712c1;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_7624371d027c0c6002870d7abd6449de;
    codeobj_a3315b004bdb768c8b24fdd09ad0f7e1 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_23a97306f3a4bf1a3b9bf48c92fd45b8, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_38ba03ed01683d1df654a0e5d393bd00 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_HTTPConnection, 70, const_tuple_018985f238d784f3ba8650d3b8dd0ebf_tuple, 0, 0, CO_NOFREE );
    codeobj_e5cb71e6d4cfe60da3caa2193d15a0b1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_HTTPSConnection, 208, const_tuple_5ad14fabeb389c57204efdecce20174a_tuple, 0, 0, CO_NOFREE );
    codeobj_b80ee0a0912c615c31fa20251d212ce5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 106, const_tuple_str_plain_self_str_plain_args_str_plain_kw_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_8639ab82649690ac7ad6cf87a375e30a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 213, const_tuple_ec2148e8e69feccf3e2ae72b685486fd_tuple, 8, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_ee47fda764d9d702a60793f38960f8da = MAKE_CODEOBJ( module_filename_obj, const_str_plain__match_hostname, 354, const_tuple_str_plain_cert_str_plain_asserted_hostname_str_plain_e_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4864ce8aaadf427b701d3689cc4c088c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__new_conn, 127, const_tuple_str_plain_self_str_plain_extra_kw_str_plain_conn_str_plain_e_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_38c3ae935c46b9f0b82d30f5529b53d3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__prepare_conn, 154, const_tuple_str_plain_self_str_plain_conn_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_209b7e7234b809d0faf894e0487b66d2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_connect, 165, const_tuple_str_plain_self_str_plain_conn_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_245a62f2727ce469008beeef46d55e25 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_connect, 228, const_tuple_str_plain_self_str_plain_conn_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e62554c358f5e409f7b13b6034d3a544 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_connect, 282, const_tuple_d6ef339f95fe7a0aadc4b44df969b43c_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_53b4b7cb6fb60b8961bd8d4230f01538 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_request_chunked, 169, const_tuple_c41d3061087d911f2fb0d6a979240304_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6f9ce62ece5bbdc8b26c8a83644712c1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_cert, 257, const_tuple_61284583746c6b5cc710968d0fedad5b_tuple, 8, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_star_list_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_pos_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_10__match_hostname(  );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_2__new_conn(  );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_3__prepare_conn(  );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_4_connect(  );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_5_request_chunked( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_6___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_7_connect(  );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_8_set_cert( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_9_connect(  );


// The module function definitions.
static PyObject *impl_urllib3$connection$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kw = python_pars[ 2 ];
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b80ee0a0912c615c31fa20251d212ce5 = NULL;

    struct Nuitka_FrameObject *frame_b80ee0a0912c615c31fa20251d212ce5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b80ee0a0912c615c31fa20251d212ce5, codeobj_b80ee0a0912c615c31fa20251d212ce5, module_urllib3$connection, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b80ee0a0912c615c31fa20251d212ce5 = cache_frame_b80ee0a0912c615c31fa20251d212ce5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b80ee0a0912c615c31fa20251d212ce5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b80ee0a0912c615c31fa20251d212ce5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_PY3 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 107;
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
    tmp_called_instance_1 = par_kw;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_b80ee0a0912c615c31fa20251d212ce5->m_frame.f_lineno = 108;
    tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_strict_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_called_instance_2 = par_kw;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_b80ee0a0912c615c31fa20251d212ce5->m_frame.f_lineno = 111;
    tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_source_address_tuple, 0 ) );

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_1 = "ooo";
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

        exception_lineno = 111;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_source_address, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 111;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_version_info );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_tuple_int_pos_2_int_pos_7_tuple;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 113;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_instance_3 = par_kw;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_b80ee0a0912c615c31fa20251d212ce5->m_frame.f_lineno = 118;
    tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_source_address_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_source_name_3 = par_kw;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_pop );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_plain_socket_options;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_default_socket_options );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 122;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_b80ee0a0912c615c31fa20251d212ce5->m_frame.f_lineno = 122;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "ooo";
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

        exception_lineno = 122;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_socket_options, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 122;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain__HTTPConnection );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__HTTPConnection );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_HTTPConnection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___init__ );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_self;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = par_args;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg4_1 = par_kw;

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_unused = impl___internal__$$$function_8_complex_call_helper_pos_star_list_star_dict( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b80ee0a0912c615c31fa20251d212ce5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b80ee0a0912c615c31fa20251d212ce5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b80ee0a0912c615c31fa20251d212ce5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b80ee0a0912c615c31fa20251d212ce5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b80ee0a0912c615c31fa20251d212ce5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b80ee0a0912c615c31fa20251d212ce5,
        type_description_1,
        par_self,
        par_args,
        par_kw
    );


    // Release cached frame.
    if ( frame_b80ee0a0912c615c31fa20251d212ce5 == cache_frame_b80ee0a0912c615c31fa20251d212ce5 )
    {
        Py_DECREF( frame_b80ee0a0912c615c31fa20251d212ce5 );
    }
    cache_frame_b80ee0a0912c615c31fa20251d212ce5 = NULL;

    assertFrameObject( frame_b80ee0a0912c615c31fa20251d212ce5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

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

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_1___init__ );
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


static PyObject *impl_urllib3$connection$$$function_2__new_conn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_extra_kw = NULL;
    PyObject *var_conn = NULL;
    PyObject *var_e = NULL;
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    static struct Nuitka_FrameObject *cache_frame_4864ce8aaadf427b701d3689cc4c088c = NULL;

    struct Nuitka_FrameObject *frame_4864ce8aaadf427b701d3689cc4c088c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyDict_New();
    assert( var_extra_kw == NULL );
    var_extra_kw = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4864ce8aaadf427b701d3689cc4c088c, codeobj_4864ce8aaadf427b701d3689cc4c088c, module_urllib3$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4864ce8aaadf427b701d3689cc4c088c = cache_frame_4864ce8aaadf427b701d3689cc4c088c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4864ce8aaadf427b701d3689cc4c088c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4864ce8aaadf427b701d3689cc4c088c ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_source_address );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 133;
        type_description_1 = "oooo";
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

        exception_lineno = 134;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_source_address );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = var_extra_kw;

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "extra_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_plain_source_address;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_socket_options );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 136;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_socket_options );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_2 = var_extra_kw;

    if ( tmp_ass_subscribed_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "extra_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = const_str_plain_socket_options;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    // Tried code:
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_connection );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_connection );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "connection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_create_connection );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyTuple_New( 2 );
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 141;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_host );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_tuple_element_1 );

        exception_lineno = 141;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 141;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_port );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_tuple_element_1 );

        exception_lineno = 141;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 141;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_timeout );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );

        exception_lineno = 141;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = var_extra_kw;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "extra_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 141;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_assign_source_2 = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( var_conn == NULL );
    var_conn = tmp_assign_source_2;

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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_4864ce8aaadf427b701d3689cc4c088c, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_4864ce8aaadf427b701d3689cc4c088c, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_SocketTimeout );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketTimeout );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SocketTimeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 143;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }

    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_3 = PyThreadState_GET()->exc_value;
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_e = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ConnectTimeoutError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_1 = par_self;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }

    tmp_left_name_1 = const_str_digest_03224f9e3167cae45c1e00020c2975eb;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_source_name_9 = par_self;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_host );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 146;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
    tmp_source_name_10 = par_self;

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_timeout );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 146;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    frame_4864ce8aaadf427b701d3689cc4c088c->m_frame.f_lineno = 144;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 144;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto try_except_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_2__new_conn );
    return NULL;
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

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_3;
    branch_no_3:;
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_SocketError );

    if (unlikely( tmp_compare_right_2 == NULL ))
    {
        tmp_compare_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketError );
    }

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SocketError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 148;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }

    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_4 = PyThreadState_GET()->exc_value;
    {
        PyObject *old = var_e;
        var_e = tmp_assign_source_4;
        Py_INCREF( var_e );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_NewConnectionError );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NewConnectionError );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NewConnectionError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 149;
        type_description_1 = "oooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_3 = par_self;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 150;
        type_description_1 = "oooo";
        goto try_except_handler_5;
    }

    tmp_left_name_2 = const_str_digest_a93bc1dc732be398b86f8538baa37185;
    tmp_right_name_2 = var_e;

    CHECK_OBJECT( tmp_right_name_2 );
    tmp_args_element_name_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_1 = "oooo";
        goto try_except_handler_5;
    }
    frame_4864ce8aaadf427b701d3689cc4c088c->m_frame.f_lineno = 149;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        type_description_1 = "oooo";
        goto try_except_handler_5;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 149;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto try_except_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_2__new_conn );
    return NULL;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 139;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_4864ce8aaadf427b701d3689cc4c088c->m_frame) frame_4864ce8aaadf427b701d3689cc4c088c->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_3;
    branch_end_4:;
    branch_end_3:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_2__new_conn );
    return NULL;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_4864ce8aaadf427b701d3689cc4c088c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_4864ce8aaadf427b701d3689cc4c088c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4864ce8aaadf427b701d3689cc4c088c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4864ce8aaadf427b701d3689cc4c088c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4864ce8aaadf427b701d3689cc4c088c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4864ce8aaadf427b701d3689cc4c088c,
        type_description_1,
        par_self,
        var_extra_kw,
        var_conn,
        var_e
    );


    // Release cached frame.
    if ( frame_4864ce8aaadf427b701d3689cc4c088c == cache_frame_4864ce8aaadf427b701d3689cc4c088c )
    {
        Py_DECREF( frame_4864ce8aaadf427b701d3689cc4c088c );
    }
    cache_frame_4864ce8aaadf427b701d3689cc4c088c = NULL;

    assertFrameObject( frame_4864ce8aaadf427b701d3689cc4c088c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_conn;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_2__new_conn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_extra_kw );
    var_extra_kw = NULL;

    Py_XDECREF( var_conn );
    var_conn = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_extra_kw );
    var_extra_kw = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_2__new_conn );
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


static PyObject *impl_urllib3$connection$$$function_3__prepare_conn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_conn = python_pars[ 1 ];
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
    PyObject *tmp_called_instance_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_38c3ae935c46b9f0b82d30f5529b53d3 = NULL;

    struct Nuitka_FrameObject *frame_38c3ae935c46b9f0b82d30f5529b53d3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_38c3ae935c46b9f0b82d30f5529b53d3, codeobj_38c3ae935c46b9f0b82d30f5529b53d3, module_urllib3$connection, sizeof(void *)+sizeof(void *) );
    frame_38c3ae935c46b9f0b82d30f5529b53d3 = cache_frame_38c3ae935c46b9f0b82d30f5529b53d3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_38c3ae935c46b9f0b82d30f5529b53d3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_38c3ae935c46b9f0b82d30f5529b53d3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_conn;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_sock, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_getattr_target_1 = par_self;

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = const_str_plain__tunnel_host;
    tmp_getattr_default_1 = Py_None;
    tmp_cond_value_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 159;
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
    tmp_called_instance_1 = par_self;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 161;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_38c3ae935c46b9f0b82d30f5529b53d3->m_frame.f_lineno = 161;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__tunnel );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
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

        exception_lineno = 163;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_auto_open, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_38c3ae935c46b9f0b82d30f5529b53d3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_38c3ae935c46b9f0b82d30f5529b53d3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_38c3ae935c46b9f0b82d30f5529b53d3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_38c3ae935c46b9f0b82d30f5529b53d3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_38c3ae935c46b9f0b82d30f5529b53d3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_38c3ae935c46b9f0b82d30f5529b53d3,
        type_description_1,
        par_self,
        par_conn
    );


    // Release cached frame.
    if ( frame_38c3ae935c46b9f0b82d30f5529b53d3 == cache_frame_38c3ae935c46b9f0b82d30f5529b53d3 )
    {
        Py_DECREF( frame_38c3ae935c46b9f0b82d30f5529b53d3 );
    }
    cache_frame_38c3ae935c46b9f0b82d30f5529b53d3 = NULL;

    assertFrameObject( frame_38c3ae935c46b9f0b82d30f5529b53d3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_3__prepare_conn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_conn );
    par_conn = NULL;

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

    Py_XDECREF( par_conn );
    par_conn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_3__prepare_conn );
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


static PyObject *impl_urllib3$connection$$$function_4_connect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_conn = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_209b7e7234b809d0faf894e0487b66d2 = NULL;

    struct Nuitka_FrameObject *frame_209b7e7234b809d0faf894e0487b66d2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_209b7e7234b809d0faf894e0487b66d2, codeobj_209b7e7234b809d0faf894e0487b66d2, module_urllib3$connection, sizeof(void *)+sizeof(void *) );
    frame_209b7e7234b809d0faf894e0487b66d2 = cache_frame_209b7e7234b809d0faf894e0487b66d2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_209b7e7234b809d0faf894e0487b66d2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_209b7e7234b809d0faf894e0487b66d2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_209b7e7234b809d0faf894e0487b66d2->m_frame.f_lineno = 166;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__new_conn );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_conn == NULL );
    var_conn = tmp_assign_source_1;

    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__prepare_conn );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_conn;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_209b7e7234b809d0faf894e0487b66d2->m_frame.f_lineno = 167;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_209b7e7234b809d0faf894e0487b66d2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_209b7e7234b809d0faf894e0487b66d2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_209b7e7234b809d0faf894e0487b66d2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_209b7e7234b809d0faf894e0487b66d2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_209b7e7234b809d0faf894e0487b66d2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_209b7e7234b809d0faf894e0487b66d2,
        type_description_1,
        par_self,
        var_conn
    );


    // Release cached frame.
    if ( frame_209b7e7234b809d0faf894e0487b66d2 == cache_frame_209b7e7234b809d0faf894e0487b66d2 )
    {
        Py_DECREF( frame_209b7e7234b809d0faf894e0487b66d2 );
    }
    cache_frame_209b7e7234b809d0faf894e0487b66d2 = NULL;

    assertFrameObject( frame_209b7e7234b809d0faf894e0487b66d2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_4_connect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_conn );
    var_conn = NULL;

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

    Py_XDECREF( var_conn );
    var_conn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_4_connect );
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


static PyObject *impl_urllib3$connection$$$function_5_request_chunked( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_body = python_pars[ 3 ];
    PyObject *par_headers = python_pars[ 4 ];
    PyObject *var_skip_accept_encoding = NULL;
    PyObject *var_skip_host = NULL;
    PyObject *var_header = NULL;
    PyObject *var_value = NULL;
    PyObject *var_stringish_types = NULL;
    PyObject *var_chunk = NULL;
    PyObject *var_len_str = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_name_1;
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
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_hex_arg_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_53b4b7cb6fb60b8961bd8d4230f01538 = NULL;

    struct Nuitka_FrameObject *frame_53b4b7cb6fb60b8961bd8d4230f01538;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_53b4b7cb6fb60b8961bd8d4230f01538, codeobj_53b4b7cb6fb60b8961bd8d4230f01538, module_urllib3$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_53b4b7cb6fb60b8961bd8d4230f01538 = cache_frame_53b4b7cb6fb60b8961bd8d4230f01538;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_53b4b7cb6fb60b8961bd8d4230f01538 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_53b4b7cb6fb60b8961bd8d4230f01538 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPHeaderDict );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPHeaderDict );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPHeaderDict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = par_headers;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_args_element_name_1 = par_headers;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_args_element_name_1 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_args_element_name_1 = PyDict_New();
    condexpr_end_1:;
    frame_53b4b7cb6fb60b8961bd8d4230f01538->m_frame.f_lineno = 174;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_headers;
        par_headers = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_compexpr_left_1 = const_str_digest_f4cf83dd2e7e2f235646bf31dc9dfbff;
    tmp_compexpr_right_1 = par_headers;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_assign_source_2 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_skip_accept_encoding == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_skip_accept_encoding = tmp_assign_source_2;

    tmp_compexpr_left_2 = const_str_plain_host;
    tmp_compexpr_right_2 = par_headers;

    if ( tmp_compexpr_right_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_skip_host == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_skip_host = tmp_assign_source_3;

    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_putrequest );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_method;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_url;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_key_1 = const_str_plain_skip_accept_encoding;
    tmp_dict_value_1 = var_skip_accept_encoding;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "skip_accept_encoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_skip_host;
    tmp_dict_value_2 = var_skip_host;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "skip_host" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_53b4b7cb6fb60b8961bd8d4230f01538->m_frame.f_lineno = 177;
    tmp_unused = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_1 = par_headers;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_53b4b7cb6fb60b8961bd8d4230f01538->m_frame.f_lineno = 183;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description_1 = "oooooooooooo";
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
            type_description_1 = "oooooooooooo";
            exception_lineno = 183;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_7 == NULL )
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


        type_description_1 = "oooooooooooo";
        exception_lineno = 183;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_8 == NULL )
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


        type_description_1 = "oooooooooooo";
        exception_lineno = 183;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
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

                type_description_1 = "oooooooooooo";
                exception_lineno = 183;
                goto try_except_handler_4;
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

        type_description_1 = "oooooooooooo";
        exception_lineno = 183;
        goto try_except_handler_4;
    }
    goto try_end_1;
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

    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_9 );
    {
        PyObject *old = var_header;
        var_header = tmp_assign_source_9;
        Py_INCREF( var_header );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_10 );
    {
        PyObject *old = var_value;
        var_value = tmp_assign_source_10;
        Py_INCREF( var_value );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_putheader );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_2 = var_header;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "header" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_3 = var_value;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }

    frame_53b4b7cb6fb60b8961bd8d4230f01538->m_frame.f_lineno = 184;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_compare_left_2 = const_str_digest_80cf594c6b193676cb3f905f65b5d391;
    tmp_compare_right_2 = par_headers;

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_instance_2 = par_self;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_53b4b7cb6fb60b8961bd8d4230f01538->m_frame.f_lineno = 186;
    tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_putheader, &PyTuple_GET_ITEM( const_tuple_1bf7ec2364041a6038f313c34bc76226_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_called_instance_3 = par_self;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_53b4b7cb6fb60b8961bd8d4230f01538->m_frame.f_lineno = 187;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_endheaders );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_compare_left_3 = par_body;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "body" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_string_types );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = PyTuple_New( 1 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_binary_type );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 190;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_2 );
    tmp_assign_source_11 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_stringish_types == NULL );
    var_stringish_types = tmp_assign_source_11;

    tmp_isinstance_inst_1 = par_body;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "body" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = var_stringish_types;

    CHECK_OBJECT( tmp_isinstance_cls_1 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "oooooooooooo";
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
    tmp_assign_source_12 = PyTuple_New( 1 );
    tmp_tuple_element_3 = par_body;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "body" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_12, 0, tmp_tuple_element_3 );
    {
        PyObject *old = par_body;
        par_body = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    branch_no_3:;
    tmp_iter_arg_3 = par_body;

    if ( tmp_iter_arg_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "body" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 193;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_13;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_14 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooo";
            exception_lineno = 193;
            goto try_except_handler_5;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_assign_source_15 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_15 );
    {
        PyObject *old = var_chunk;
        var_chunk = tmp_assign_source_15;
        Py_INCREF( var_chunk );
        Py_XDECREF( old );
    }

    tmp_cond_value_1 = var_chunk;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    goto loop_start_2;
    branch_no_4:;
    tmp_isinstance_inst_2 = var_chunk;

    if ( tmp_isinstance_inst_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chunk" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }

    tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_binary_type );
    if ( tmp_isinstance_cls_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    Py_DECREF( tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_5;
    }
    else
    {
        goto branch_yes_5;
    }
    branch_yes_5:;
    tmp_called_instance_4 = var_chunk;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chunk" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 197;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }

    frame_53b4b7cb6fb60b8961bd8d4230f01538->m_frame.f_lineno = 197;
    tmp_assign_source_16 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_utf8_tuple, 0 ) );

    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }
    {
        PyObject *old = var_chunk;
        var_chunk = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    branch_no_5:;
    tmp_len_arg_1 = var_chunk;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chunk" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 198;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }

    tmp_hex_arg_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_hex_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }
    tmp_subscribed_name_1 = BUILTIN_HEX( tmp_hex_arg_1 );
    Py_DECREF( tmp_hex_arg_1 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }
    tmp_subscript_name_1 = const_slice_int_pos_2_none_none;
    tmp_assign_source_17 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }
    {
        PyObject *old = var_len_str;
        var_len_str = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 199;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_send );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }
    tmp_called_instance_5 = var_len_str;

    if ( tmp_called_instance_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "len_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 199;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }

    frame_53b4b7cb6fb60b8961bd8d4230f01538->m_frame.f_lineno = 199;
    tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 199;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }
    frame_53b4b7cb6fb60b8961bd8d4230f01538->m_frame.f_lineno = 199;
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


        exception_lineno = 199;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_6 = par_self;

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }

    frame_53b4b7cb6fb60b8961bd8d4230f01538->m_frame.f_lineno = 200;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_send, &PyTuple_GET_ITEM( const_tuple_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_send );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }
    tmp_args_element_name_5 = var_chunk;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chunk" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }

    frame_53b4b7cb6fb60b8961bd8d4230f01538->m_frame.f_lineno = 201;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_7 = par_self;

    if ( tmp_called_instance_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 202;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }

    frame_53b4b7cb6fb60b8961bd8d4230f01538->m_frame.f_lineno = 202;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_send, &PyTuple_GET_ITEM( const_tuple_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    branch_no_2:;
    tmp_called_instance_8 = par_self;

    if ( tmp_called_instance_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 205;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_53b4b7cb6fb60b8961bd8d4230f01538->m_frame.f_lineno = 205;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_send, &PyTuple_GET_ITEM( const_tuple_bytes_digest_103d73ccb44d3ba17b2afce6d3b01e78_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_53b4b7cb6fb60b8961bd8d4230f01538 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_53b4b7cb6fb60b8961bd8d4230f01538 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_53b4b7cb6fb60b8961bd8d4230f01538, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_53b4b7cb6fb60b8961bd8d4230f01538->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_53b4b7cb6fb60b8961bd8d4230f01538, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_53b4b7cb6fb60b8961bd8d4230f01538,
        type_description_1,
        par_self,
        par_method,
        par_url,
        par_body,
        par_headers,
        var_skip_accept_encoding,
        var_skip_host,
        var_header,
        var_value,
        var_stringish_types,
        var_chunk,
        var_len_str
    );


    // Release cached frame.
    if ( frame_53b4b7cb6fb60b8961bd8d4230f01538 == cache_frame_53b4b7cb6fb60b8961bd8d4230f01538 )
    {
        Py_DECREF( frame_53b4b7cb6fb60b8961bd8d4230f01538 );
    }
    cache_frame_53b4b7cb6fb60b8961bd8d4230f01538 = NULL;

    assertFrameObject( frame_53b4b7cb6fb60b8961bd8d4230f01538 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_5_request_chunked );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_body );
    par_body = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( var_skip_accept_encoding );
    var_skip_accept_encoding = NULL;

    Py_XDECREF( var_skip_host );
    var_skip_host = NULL;

    Py_XDECREF( var_header );
    var_header = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_stringish_types );
    var_stringish_types = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

    Py_XDECREF( var_len_str );
    var_len_str = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_body );
    par_body = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( var_skip_accept_encoding );
    var_skip_accept_encoding = NULL;

    Py_XDECREF( var_skip_host );
    var_skip_host = NULL;

    Py_XDECREF( var_header );
    var_header = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_stringish_types );
    var_stringish_types = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

    Py_XDECREF( var_len_str );
    var_len_str = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_5_request_chunked );
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


static PyObject *impl_urllib3$connection$$$function_6___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_host = python_pars[ 1 ];
    PyObject *par_port = python_pars[ 2 ];
    PyObject *par_key_file = python_pars[ 3 ];
    PyObject *par_cert_file = python_pars[ 4 ];
    PyObject *par_strict = python_pars[ 5 ];
    PyObject *par_timeout = python_pars[ 6 ];
    PyObject *par_ssl_context = python_pars[ 7 ];
    PyObject *par_kw = python_pars[ 8 ];
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
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8639ab82649690ac7ad6cf87a375e30a = NULL;

    struct Nuitka_FrameObject *frame_8639ab82649690ac7ad6cf87a375e30a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8639ab82649690ac7ad6cf87a375e30a, codeobj_8639ab82649690ac7ad6cf87a375e30a, module_urllib3$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8639ab82649690ac7ad6cf87a375e30a = cache_frame_8639ab82649690ac7ad6cf87a375e30a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8639ab82649690ac7ad6cf87a375e30a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8639ab82649690ac7ad6cf87a375e30a ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPConnection );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPConnection );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPConnection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = par_self;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_host;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "host" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_port;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "port" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 2, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
    tmp_dict_key_1 = const_str_plain_strict;
    tmp_dict_value_1 = par_strict;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "strict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_timeout;
    tmp_dict_value_2 = par_timeout;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = par_kw;

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_unused = impl___internal__$$$function_4_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = par_key_file;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key_file" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 220;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 220;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key_file, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_cert_file;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert_file" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 221;
        type_description_1 = "ooooooooo";
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

        exception_lineno = 221;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_cert_file, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_ssl_context;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ssl_context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 222;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 222;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_ssl_context, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = const_str_plain_https;
    tmp_assattr_target_4 = par_self;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 226;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__protocol, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8639ab82649690ac7ad6cf87a375e30a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8639ab82649690ac7ad6cf87a375e30a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8639ab82649690ac7ad6cf87a375e30a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8639ab82649690ac7ad6cf87a375e30a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8639ab82649690ac7ad6cf87a375e30a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8639ab82649690ac7ad6cf87a375e30a,
        type_description_1,
        par_self,
        par_host,
        par_port,
        par_key_file,
        par_cert_file,
        par_strict,
        par_timeout,
        par_ssl_context,
        par_kw
    );


    // Release cached frame.
    if ( frame_8639ab82649690ac7ad6cf87a375e30a == cache_frame_8639ab82649690ac7ad6cf87a375e30a )
    {
        Py_DECREF( frame_8639ab82649690ac7ad6cf87a375e30a );
    }
    cache_frame_8639ab82649690ac7ad6cf87a375e30a = NULL;

    assertFrameObject( frame_8639ab82649690ac7ad6cf87a375e30a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_6___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_host );
    par_host = NULL;

    Py_XDECREF( par_port );
    par_port = NULL;

    Py_XDECREF( par_key_file );
    par_key_file = NULL;

    Py_XDECREF( par_cert_file );
    par_cert_file = NULL;

    Py_XDECREF( par_strict );
    par_strict = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

    Py_XDECREF( par_ssl_context );
    par_ssl_context = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

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

    Py_XDECREF( par_host );
    par_host = NULL;

    Py_XDECREF( par_port );
    par_port = NULL;

    Py_XDECREF( par_key_file );
    par_key_file = NULL;

    Py_XDECREF( par_cert_file );
    par_cert_file = NULL;

    Py_XDECREF( par_strict );
    par_strict = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

    Py_XDECREF( par_ssl_context );
    par_ssl_context = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_6___init__ );
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


static PyObject *impl_urllib3$connection$$$function_7_connect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_conn = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_245a62f2727ce469008beeef46d55e25 = NULL;

    struct Nuitka_FrameObject *frame_245a62f2727ce469008beeef46d55e25;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_245a62f2727ce469008beeef46d55e25, codeobj_245a62f2727ce469008beeef46d55e25, module_urllib3$connection, sizeof(void *)+sizeof(void *) );
    frame_245a62f2727ce469008beeef46d55e25 = cache_frame_245a62f2727ce469008beeef46d55e25;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_245a62f2727ce469008beeef46d55e25 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_245a62f2727ce469008beeef46d55e25 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_245a62f2727ce469008beeef46d55e25->m_frame.f_lineno = 229;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__new_conn );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_conn == NULL );
    var_conn = tmp_assign_source_1;

    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__prepare_conn );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_conn;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_245a62f2727ce469008beeef46d55e25->m_frame.f_lineno = 230;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;
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

        exception_lineno = 232;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ssl_context );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        type_description_1 = "oo";
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_create_urllib3_context );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_create_urllib3_context );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "create_urllib3_context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 233;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_key_1 = const_str_plain_ssl_version;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_resolve_ssl_version );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_resolve_ssl_version );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "resolve_ssl_version" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 234;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_245a62f2727ce469008beeef46d55e25->m_frame.f_lineno = 234;
    tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_none_tuple, 0 ) );

    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 234;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_cert_reqs;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "resolve_cert_reqs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 235;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_245a62f2727ce469008beeef46d55e25->m_frame.f_lineno = 235;
    tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_none_tuple, 0 ) );

    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 235;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_245a62f2727ce469008beeef46d55e25->m_frame.f_lineno = 233;
    tmp_assattr_name_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        type_description_1 = "oo";
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

        exception_lineno = 233;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_ssl_context, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 233;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    branch_no_1:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl_wrap_socket );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl_wrap_socket );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl_wrap_socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 238;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = _PyDict_NewPresized( 4 );
    tmp_dict_key_3 = const_str_plain_sock;
    tmp_dict_value_3 = var_conn;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 239;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_keyfile;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 240;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_key_file );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 240;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_certfile;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_cert_file );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 241;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_ssl_context;
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ssl_context );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 242;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    frame_245a62f2727ce469008beeef46d55e25->m_frame.f_lineno = 238;
    tmp_assattr_name_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        type_description_1 = "oo";
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

        exception_lineno = 238;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_sock, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 238;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_245a62f2727ce469008beeef46d55e25 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_245a62f2727ce469008beeef46d55e25 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_245a62f2727ce469008beeef46d55e25, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_245a62f2727ce469008beeef46d55e25->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_245a62f2727ce469008beeef46d55e25, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_245a62f2727ce469008beeef46d55e25,
        type_description_1,
        par_self,
        var_conn
    );


    // Release cached frame.
    if ( frame_245a62f2727ce469008beeef46d55e25 == cache_frame_245a62f2727ce469008beeef46d55e25 )
    {
        Py_DECREF( frame_245a62f2727ce469008beeef46d55e25 );
    }
    cache_frame_245a62f2727ce469008beeef46d55e25 = NULL;

    assertFrameObject( frame_245a62f2727ce469008beeef46d55e25 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_7_connect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_conn );
    var_conn = NULL;

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

    Py_XDECREF( var_conn );
    var_conn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_7_connect );
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


static PyObject *impl_urllib3$connection$$$function_8_set_cert( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key_file = python_pars[ 1 ];
    PyObject *par_cert_file = python_pars[ 2 ];
    PyObject *par_cert_reqs = python_pars[ 3 ];
    PyObject *par_ca_certs = python_pars[ 4 ];
    PyObject *par_assert_hostname = python_pars[ 5 ];
    PyObject *par_assert_fingerprint = python_pars[ 6 ];
    PyObject *par_ca_cert_dir = python_pars[ 7 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    bool tmp_is_1;
    bool tmp_isnot_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    static struct Nuitka_FrameObject *cache_frame_6f9ce62ece5bbdc8b26c8a83644712c1 = NULL;

    struct Nuitka_FrameObject *frame_6f9ce62ece5bbdc8b26c8a83644712c1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6f9ce62ece5bbdc8b26c8a83644712c1, codeobj_6f9ce62ece5bbdc8b26c8a83644712c1, module_urllib3$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6f9ce62ece5bbdc8b26c8a83644712c1 = cache_frame_6f9ce62ece5bbdc8b26c8a83644712c1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6f9ce62ece5bbdc8b26c8a83644712c1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6f9ce62ece5bbdc8b26c8a83644712c1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_cert_reqs;

    CHECK_OBJECT( tmp_compare_left_1 );
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
    tmp_or_left_value_1 = par_ca_certs;

    if ( tmp_or_left_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ca_certs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 269;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
        type_description_1 = "oooooooo";
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
    tmp_or_right_value_1 = par_ca_cert_dir;

    if ( tmp_or_right_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ca_cert_dir" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 269;
        type_description_1 = "oooooooo";
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


        exception_lineno = 269;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_1 = const_str_plain_CERT_REQUIRED;
    {
        PyObject *old = par_cert_reqs;
        par_cert_reqs = tmp_assign_source_1;
        Py_INCREF( par_cert_reqs );
        Py_XDECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 271;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ssl_context );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 272;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ssl_context );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_verify_mode );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_cert_reqs;
        par_cert_reqs = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    branch_no_3:;
    branch_end_2:;
    branch_no_1:;
    tmp_assattr_name_1 = par_key_file;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key_file" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 274;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 274;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key_file, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_cert_file;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert_file" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 275;
        type_description_1 = "oooooooo";
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

        exception_lineno = 275;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_cert_file, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_cert_reqs;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert_reqs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 276;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 276;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_cert_reqs, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = par_assert_hostname;

    if ( tmp_assattr_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "assert_hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_4 = par_self;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_assert_hostname, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = par_assert_fingerprint;

    if ( tmp_assattr_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "assert_fingerprint" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 278;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_5 = par_self;

    if ( tmp_assattr_target_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 278;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_assert_fingerprint, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_1 = par_ca_certs;

    if ( tmp_and_left_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ca_certs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 279;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        type_description_1 = "oooooooo";
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
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 279;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_path );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_expanduser );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_ca_certs;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ca_certs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 279;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_6f9ce62ece5bbdc8b26c8a83644712c1->m_frame.f_lineno = 279;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_and_right_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_6 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_assattr_name_6 = tmp_and_left_value_1;
    and_end_1:;
    tmp_assattr_target_6 = par_self;

    if ( tmp_assattr_target_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 279;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_ca_certs, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        exception_lineno = 279;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_6 );
    tmp_and_left_value_2 = par_ca_cert_dir;

    if ( tmp_and_left_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ca_cert_dir" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 280;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
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
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 280;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_path );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_expanduser );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_ca_cert_dir;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ca_cert_dir" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 280;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_6f9ce62ece5bbdc8b26c8a83644712c1->m_frame.f_lineno = 280;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_and_right_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_7 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    Py_INCREF( tmp_and_left_value_2 );
    tmp_assattr_name_7 = tmp_and_left_value_2;
    and_end_2:;
    tmp_assattr_target_7 = par_self;

    if ( tmp_assattr_target_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 280;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_ca_cert_dir, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_7 );

        exception_lineno = 280;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_7 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f9ce62ece5bbdc8b26c8a83644712c1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f9ce62ece5bbdc8b26c8a83644712c1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6f9ce62ece5bbdc8b26c8a83644712c1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6f9ce62ece5bbdc8b26c8a83644712c1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6f9ce62ece5bbdc8b26c8a83644712c1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6f9ce62ece5bbdc8b26c8a83644712c1,
        type_description_1,
        par_self,
        par_key_file,
        par_cert_file,
        par_cert_reqs,
        par_ca_certs,
        par_assert_hostname,
        par_assert_fingerprint,
        par_ca_cert_dir
    );


    // Release cached frame.
    if ( frame_6f9ce62ece5bbdc8b26c8a83644712c1 == cache_frame_6f9ce62ece5bbdc8b26c8a83644712c1 )
    {
        Py_DECREF( frame_6f9ce62ece5bbdc8b26c8a83644712c1 );
    }
    cache_frame_6f9ce62ece5bbdc8b26c8a83644712c1 = NULL;

    assertFrameObject( frame_6f9ce62ece5bbdc8b26c8a83644712c1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_8_set_cert );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key_file );
    par_key_file = NULL;

    Py_XDECREF( par_cert_file );
    par_cert_file = NULL;

    Py_XDECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    Py_XDECREF( par_ca_certs );
    par_ca_certs = NULL;

    Py_XDECREF( par_assert_hostname );
    par_assert_hostname = NULL;

    Py_XDECREF( par_assert_fingerprint );
    par_assert_fingerprint = NULL;

    Py_XDECREF( par_ca_cert_dir );
    par_ca_cert_dir = NULL;

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

    Py_XDECREF( par_key_file );
    par_key_file = NULL;

    Py_XDECREF( par_cert_file );
    par_cert_file = NULL;

    Py_XDECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    Py_XDECREF( par_ca_certs );
    par_ca_certs = NULL;

    Py_XDECREF( par_assert_hostname );
    par_assert_hostname = NULL;

    Py_XDECREF( par_assert_fingerprint );
    par_assert_fingerprint = NULL;

    Py_XDECREF( par_ca_cert_dir );
    par_ca_cert_dir = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_8_set_cert );
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


static PyObject *impl_urllib3$connection$$$function_9_connect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_conn = NULL;
    PyObject *var_hostname = NULL;
    PyObject *var_is_time_off = NULL;
    PyObject *var_context = NULL;
    PyObject *var_cert = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
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
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_default_2;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e62554c358f5e409f7b13b6034d3a544 = NULL;

    struct Nuitka_FrameObject *frame_e62554c358f5e409f7b13b6034d3a544;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e62554c358f5e409f7b13b6034d3a544, codeobj_e62554c358f5e409f7b13b6034d3a544, module_urllib3$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e62554c358f5e409f7b13b6034d3a544 = cache_frame_e62554c358f5e409f7b13b6034d3a544;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e62554c358f5e409f7b13b6034d3a544 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e62554c358f5e409f7b13b6034d3a544 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_e62554c358f5e409f7b13b6034d3a544->m_frame.f_lineno = 284;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__new_conn );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_conn == NULL );
    var_conn = tmp_assign_source_1;

    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 286;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_host );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_hostname == NULL );
    var_hostname = tmp_assign_source_2;

    tmp_getattr_target_1 = par_self;

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 287;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = const_str_plain__tunnel_host;
    tmp_getattr_default_1 = Py_None;
    tmp_cond_value_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 287;
        type_description_1 = "oooooo";
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
    tmp_assattr_name_1 = var_conn;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 291;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 291;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_sock, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_2 = par_self;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 294;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_e62554c358f5e409f7b13b6034d3a544->m_frame.f_lineno = 294;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain__tunnel );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 294;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
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

        exception_lineno = 296;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_auto_open, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 299;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__tunnel_host );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_hostname;
        var_hostname = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 301;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_date );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_e62554c358f5e409f7b13b6034d3a544->m_frame.f_lineno = 301;
    tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_today );
    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_RECENT_DATE );

    if (unlikely( tmp_compexpr_right_1 == NULL ))
    {
        tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RECENT_DATE );
    }

    if ( tmp_compexpr_right_1 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RECENT_DATE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 301;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_4 = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_is_time_off == NULL );
    var_is_time_off = tmp_assign_source_4;

    tmp_cond_value_2 = var_is_time_off;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 303;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_warn );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = const_str_digest_76770aa881e569a0306b7353925db341;
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_format );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_RECENT_DATE );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RECENT_DATE );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RECENT_DATE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 305;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_e62554c358f5e409f7b13b6034d3a544->m_frame.f_lineno = 304;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 304;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_SystemTimeWarning );

    if (unlikely( tmp_args_element_name_3 == NULL ))
    {
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SystemTimeWarning );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SystemTimeWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 306;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_e62554c358f5e409f7b13b6034d3a544->m_frame.f_lineno = 303;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 311;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ssl_context );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_create_urllib3_context );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_create_urllib3_context );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "create_urllib3_context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 312;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_key_1 = const_str_plain_ssl_version;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_resolve_ssl_version );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_resolve_ssl_version );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "resolve_ssl_version" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 313;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 313;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ssl_version );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 313;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_e62554c358f5e409f7b13b6034d3a544->m_frame.f_lineno = 313;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 313;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_cert_reqs;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "resolve_cert_reqs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 314;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 314;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_cert_reqs );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 314;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_e62554c358f5e409f7b13b6034d3a544->m_frame.f_lineno = 314;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 314;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_e62554c358f5e409f7b13b6034d3a544->m_frame.f_lineno = 312;
    tmp_assattr_name_3 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        type_description_1 = "oooooo";
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

        exception_lineno = 312;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_ssl_context, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 312;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    branch_no_3:;
    tmp_source_name_9 = par_self;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 317;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_ssl_context );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 317;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_context == NULL );
    var_context = tmp_assign_source_5;

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "resolve_cert_reqs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 318;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = par_self;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 318;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_cert_reqs );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_e62554c358f5e409f7b13b6034d3a544->m_frame.f_lineno = 318;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assattr_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_4 = var_context;

    if ( tmp_assattr_target_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 318;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_verify_mode, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 318;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl_wrap_socket );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl_wrap_socket );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl_wrap_socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 319;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = _PyDict_NewPresized( 7 );
    tmp_dict_key_3 = const_str_plain_sock;
    tmp_dict_value_3 = var_conn;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 320;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_keyfile;
    tmp_source_name_11 = par_self;

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 321;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_key_file );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 321;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_certfile;
    tmp_source_name_12 = par_self;

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 322;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_cert_file );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 322;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_ca_certs;
    tmp_source_name_13 = par_self;

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 323;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_ca_certs );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 323;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_7 = const_str_plain_ca_cert_dir;
    tmp_source_name_14 = par_self;

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 324;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_ca_cert_dir );
    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 324;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_8 = const_str_plain_server_hostname;
    tmp_dict_value_8 = var_hostname;

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 325;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_9 = const_str_plain_ssl_context;
    tmp_dict_value_9 = var_context;

    if ( tmp_dict_value_9 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 326;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    frame_e62554c358f5e409f7b13b6034d3a544->m_frame.f_lineno = 319;
    tmp_assattr_name_5 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_7, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;
        type_description_1 = "oooooo";
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

        exception_lineno = 319;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_sock, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 319;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    tmp_source_name_15 = par_self;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 328;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_assert_fingerprint );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 328;
        type_description_1 = "oooooo";
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
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_assert_fingerprint );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_assert_fingerprint );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "assert_fingerprint" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 329;
        type_description_1 = "oooooo";
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

        exception_lineno = 329;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_sock );
    if ( tmp_source_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_getpeercert );
    Py_DECREF( tmp_source_name_16 );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_3 = PyDict_Copy( const_dict_a6ff982bac01e8d0bcf997a792f16c84 );
    frame_e62554c358f5e409f7b13b6034d3a544->m_frame.f_lineno = 329;
    tmp_args_element_name_7 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_9, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_18 = par_self;

    if ( tmp_source_name_18 == NULL )
    {
        Py_DECREF( tmp_args_element_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 330;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_assert_fingerprint );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 330;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_e62554c358f5e409f7b13b6034d3a544->m_frame.f_lineno = 329;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_4;
    branch_no_4:;
    tmp_source_name_19 = var_context;

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 331;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_verify_mode );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_source_name_20 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 331;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_CERT_NONE );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 331;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 333;
        type_description_1 = "oooooo";
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
    Py_DECREF( tmp_and_left_value_1 );
    tmp_getattr_target_2 = var_context;

    if ( tmp_getattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 332;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_2 = const_str_plain_check_hostname;
    tmp_getattr_default_2 = Py_False;
    tmp_operand_name_1 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 332;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 332;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 333;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
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
    tmp_source_name_21 = par_self;

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 333;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_assert_hostname );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 333;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_3 = Py_False;
    tmp_and_right_value_2 = BOOL_FROM( tmp_compexpr_left_3 != tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    tmp_and_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_and_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
    Py_INCREF( tmp_and_right_value_1 );
    tmp_cond_value_4 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_4 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 333;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_22 = par_self;

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 337;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_sock );
    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_e62554c358f5e409f7b13b6034d3a544->m_frame.f_lineno = 337;
    tmp_assign_source_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_getpeercert );
    Py_DECREF( tmp_called_instance_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_cert == NULL );
    var_cert = tmp_assign_source_6;

    tmp_called_instance_5 = var_cert;

    CHECK_OBJECT( tmp_called_instance_5 );
    frame_e62554c358f5e409f7b13b6034d3a544->m_frame.f_lineno = 338;
    tmp_cond_value_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_subjectAltName_tuple_empty_tuple, 0 ) );

    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 338;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_no_6;
    }
    else
    {
        goto branch_yes_6;
    }
    branch_yes_6:;
    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 339;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_warn );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 339;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_24 = const_str_digest_9edecb228e21673906c9e9045e5572f5;
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_format );
    assert( tmp_called_name_11 != NULL );
    tmp_args_element_name_10 = var_hostname;

    if ( tmp_args_element_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 343;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_e62554c358f5e409f7b13b6034d3a544->m_frame.f_lineno = 340;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_args_element_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 340;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_SubjectAltNameWarning );

    if (unlikely( tmp_args_element_name_11 == NULL ))
    {
        tmp_args_element_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SubjectAltNameWarning );
    }

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SubjectAltNameWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 344;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_e62554c358f5e409f7b13b6034d3a544->m_frame.f_lineno = 339;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 339;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain__match_hostname );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__match_hostname );
    }

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_match_hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 346;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = var_cert;

    if ( tmp_args_element_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 346;
        type_description_1 = "oooooo";
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

        exception_lineno = 346;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_assert_hostname );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 346;
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
    Py_DECREF( tmp_or_left_value_1 );
    tmp_or_right_value_1 = var_hostname;

    if ( tmp_or_right_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 346;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_or_right_value_1 );
    tmp_args_element_name_13 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_args_element_name_13 = tmp_or_left_value_1;
    or_end_1:;
    frame_e62554c358f5e409f7b13b6034d3a544->m_frame.f_lineno = 346;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_5:;
    branch_end_4:;
    tmp_source_name_26 = var_context;

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 349;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_verify_mode );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_27 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_source_name_27 == NULL ))
    {
        tmp_source_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_source_name_27 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 349;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_CERT_REQUIRED );
    if ( tmp_compexpr_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_4 );

        exception_lineno = 349;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    Py_DECREF( tmp_compexpr_right_4 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 350;
        type_description_1 = "oooooo";
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
    tmp_source_name_28 = par_self;

    if ( tmp_source_name_28 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 350;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_assert_fingerprint );
    if ( tmp_compexpr_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_5 = Py_None;
    tmp_or_right_value_2 = BOOL_FROM( tmp_compexpr_left_5 != tmp_compexpr_right_5 );
    Py_DECREF( tmp_compexpr_left_5 );
    Py_INCREF( tmp_or_right_value_2 );
    tmp_assattr_name_6 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_assattr_name_6 = tmp_or_left_value_2;
    or_end_2:;
    tmp_assattr_target_6 = par_self;

    if ( tmp_assattr_target_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 348;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_is_verified, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        exception_lineno = 348;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_6 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e62554c358f5e409f7b13b6034d3a544 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e62554c358f5e409f7b13b6034d3a544 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e62554c358f5e409f7b13b6034d3a544, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e62554c358f5e409f7b13b6034d3a544->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e62554c358f5e409f7b13b6034d3a544, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e62554c358f5e409f7b13b6034d3a544,
        type_description_1,
        par_self,
        var_conn,
        var_hostname,
        var_is_time_off,
        var_context,
        var_cert
    );


    // Release cached frame.
    if ( frame_e62554c358f5e409f7b13b6034d3a544 == cache_frame_e62554c358f5e409f7b13b6034d3a544 )
    {
        Py_DECREF( frame_e62554c358f5e409f7b13b6034d3a544 );
    }
    cache_frame_e62554c358f5e409f7b13b6034d3a544 = NULL;

    assertFrameObject( frame_e62554c358f5e409f7b13b6034d3a544 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_9_connect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_conn );
    var_conn = NULL;

    Py_XDECREF( var_hostname );
    var_hostname = NULL;

    Py_XDECREF( var_is_time_off );
    var_is_time_off = NULL;

    Py_XDECREF( var_context );
    var_context = NULL;

    Py_XDECREF( var_cert );
    var_cert = NULL;

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

    Py_XDECREF( var_conn );
    var_conn = NULL;

    Py_XDECREF( var_hostname );
    var_hostname = NULL;

    Py_XDECREF( var_is_time_off );
    var_is_time_off = NULL;

    Py_XDECREF( var_context );
    var_context = NULL;

    Py_XDECREF( var_cert );
    var_cert = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_9_connect );
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


static PyObject *impl_urllib3$connection$$$function_10__match_hostname( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cert = python_pars[ 0 ];
    PyObject *par_asserted_hostname = python_pars[ 1 ];
    PyObject *var_e = NULL;
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ee47fda764d9d702a60793f38960f8da = NULL;

    struct Nuitka_FrameObject *frame_ee47fda764d9d702a60793f38960f8da;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ee47fda764d9d702a60793f38960f8da, codeobj_ee47fda764d9d702a60793f38960f8da, module_urllib3$connection, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ee47fda764d9d702a60793f38960f8da = cache_frame_ee47fda764d9d702a60793f38960f8da;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ee47fda764d9d702a60793f38960f8da );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ee47fda764d9d702a60793f38960f8da ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_match_hostname );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_match_hostname );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "match_hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 356;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_cert;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_asserted_hostname;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_ee47fda764d9d702a60793f38960f8da->m_frame.f_lineno = 356;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_ee47fda764d9d702a60793f38960f8da, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_ee47fda764d9d702a60793f38960f8da, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_CertificateError );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CertificateError );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CertificateError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 357;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }

    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        type_description_1 = "ooo";
        goto try_except_handler_3;
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
    tmp_assign_source_1 = PyThreadState_GET()->exc_value;
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_e = tmp_assign_source_1;

    // Tried code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "log" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 358;
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_error );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 358;
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_3 = const_str_digest_e8fecadf67c84324aa28152f08ceec4c;
    tmp_args_element_name_4 = par_asserted_hostname;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "asserted_hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 360;
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_5 = par_cert;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 360;
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }

    frame_ee47fda764d9d702a60793f38960f8da->m_frame.f_lineno = 358;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 358;
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = par_cert;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 364;
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }

    tmp_assattr_target_1 = var_e;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "e" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 364;
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__peer_cert, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 364;
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 365;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ee47fda764d9d702a60793f38960f8da->m_frame) frame_ee47fda764d9d702a60793f38960f8da->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_10__match_hostname );
    return NULL;
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

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 355;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ee47fda764d9d702a60793f38960f8da->m_frame) frame_ee47fda764d9d702a60793f38960f8da->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    branch_end_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_10__match_hostname );
    return NULL;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_ee47fda764d9d702a60793f38960f8da );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_ee47fda764d9d702a60793f38960f8da );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ee47fda764d9d702a60793f38960f8da, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ee47fda764d9d702a60793f38960f8da->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ee47fda764d9d702a60793f38960f8da, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ee47fda764d9d702a60793f38960f8da,
        type_description_1,
        par_cert,
        par_asserted_hostname,
        var_e
    );


    // Release cached frame.
    if ( frame_ee47fda764d9d702a60793f38960f8da == cache_frame_ee47fda764d9d702a60793f38960f8da )
    {
        Py_DECREF( frame_ee47fda764d9d702a60793f38960f8da );
    }
    cache_frame_ee47fda764d9d702a60793f38960f8da = NULL;

    assertFrameObject( frame_ee47fda764d9d702a60793f38960f8da );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_10__match_hostname );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( par_asserted_hostname );
    par_asserted_hostname = NULL;

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

    Py_XDECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( par_asserted_hostname );
    par_asserted_hostname = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_10__match_hostname );
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



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_10__match_hostname(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_10__match_hostname,
        const_str_plain__match_hostname,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ee47fda764d9d702a60793f38960f8da,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$connection,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_80f637382c7af69afc34ed6fe0d28101,
#endif
        codeobj_b80ee0a0912c615c31fa20251d212ce5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$connection,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_2__new_conn(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_2__new_conn,
        const_str_plain__new_conn,
#if PYTHON_VERSION >= 330
        const_str_digest_c6805becf79cf5eff4b2929a8bdf6b80,
#endif
        codeobj_4864ce8aaadf427b701d3689cc4c088c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$connection,
        const_str_digest_e0fe92f188862ba1c4cac2ad70dff86d,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_3__prepare_conn(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_3__prepare_conn,
        const_str_plain__prepare_conn,
#if PYTHON_VERSION >= 330
        const_str_digest_b8059d78d07f1c28e74284d373f1a4be,
#endif
        codeobj_38c3ae935c46b9f0b82d30f5529b53d3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$connection,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_4_connect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_4_connect,
        const_str_plain_connect,
#if PYTHON_VERSION >= 330
        const_str_digest_9ba1c08e5bab7a37429c5bb8555c9014,
#endif
        codeobj_209b7e7234b809d0faf894e0487b66d2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$connection,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_5_request_chunked( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_5_request_chunked,
        const_str_plain_request_chunked,
#if PYTHON_VERSION >= 330
        const_str_digest_6c5b3ee9bbe47a9b1ec0c71ed61345f6,
#endif
        codeobj_53b4b7cb6fb60b8961bd8d4230f01538,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$connection,
        const_str_digest_dc659baf5812ef509a1bfb99226d850c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_6___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_e4b0b56d1d18c023aae13ad5e86b5a90,
#endif
        codeobj_8639ab82649690ac7ad6cf87a375e30a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$connection,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_7_connect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_7_connect,
        const_str_plain_connect,
#if PYTHON_VERSION >= 330
        const_str_digest_6b674c2a52b85692f41de0a2e49ce316,
#endif
        codeobj_245a62f2727ce469008beeef46d55e25,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$connection,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_8_set_cert( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_8_set_cert,
        const_str_plain_set_cert,
#if PYTHON_VERSION >= 330
        const_str_digest_f6189a2c440cbd27c022f13cff60a572,
#endif
        codeobj_6f9ce62ece5bbdc8b26c8a83644712c1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$connection,
        const_str_digest_5e42e68968b4150e2b97070212311786,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_9_connect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_9_connect,
        const_str_plain_connect,
#if PYTHON_VERSION >= 330
        const_str_digest_138ac2fe8317d63412cc87ad615d6704,
#endif
        codeobj_e62554c358f5e409f7b13b6034d3a544,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$connection,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$connection =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.connection",   /* m_name */
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

MOD_INIT_DECL( urllib3$connection )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$connection );
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
    puts("urllib3.connection: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.connection: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$connection" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$connection = Py_InitModule4(
        "urllib3.connection",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_urllib3$connection = PyModule_Create( &mdef_urllib3$connection );
#endif

    moduledict_urllib3$connection = MODULE_DICT( module_urllib3$connection );

    CHECK_OBJECT( module_urllib3$connection );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_003800fb824e3437bbbf235acf31301c, module_urllib3$connection );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_1_var___qualname__ = NULL;
    PyObject *outline_1_var___module__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_2_var___qualname__ = NULL;
    PyObject *outline_2_var___module__ = NULL;
    PyObject *outline_2_var___doc__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_3_var___qualname__ = NULL;
    PyObject *outline_3_var___module__ = NULL;
    PyObject *outline_3_var___doc__ = NULL;
    PyObject *outline_3_var_default_port = NULL;
    PyObject *outline_3_var_default_socket_options = NULL;
    PyObject *outline_3_var_is_verified = NULL;
    PyObject *outline_3_var___init__ = NULL;
    PyObject *outline_3_var__new_conn = NULL;
    PyObject *outline_3_var__prepare_conn = NULL;
    PyObject *outline_3_var_connect = NULL;
    PyObject *outline_3_var_request_chunked = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_4_var___qualname__ = NULL;
    PyObject *outline_4_var___module__ = NULL;
    PyObject *outline_4_var_default_port = NULL;
    PyObject *outline_4_var_ssl_version = NULL;
    PyObject *outline_4_var___init__ = NULL;
    PyObject *outline_4_var_connect = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_5_var___qualname__ = NULL;
    PyObject *outline_5_var___module__ = NULL;
    PyObject *outline_5_var___doc__ = NULL;
    PyObject *outline_5_var_cert_reqs = NULL;
    PyObject *outline_5_var_ca_certs = NULL;
    PyObject *outline_5_var_ca_cert_dir = NULL;
    PyObject *outline_5_var_ssl_version = NULL;
    PyObject *outline_5_var_assert_fingerprint = NULL;
    PyObject *outline_5_var_set_cert = NULL;
    PyObject *outline_5_var_connect = NULL;
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
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
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
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
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
    PyObject *tmp_args_name_11;
    PyObject *tmp_args_name_12;
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
    PyObject *tmp_assign_source_74;
    PyObject *tmp_assign_source_75;
    PyObject *tmp_assign_source_76;
    PyObject *tmp_assign_source_77;
    PyObject *tmp_assign_source_78;
    PyObject *tmp_assign_source_79;
    PyObject *tmp_assign_source_80;
    PyObject *tmp_assign_source_81;
    PyObject *tmp_assign_source_82;
    PyObject *tmp_assign_source_83;
    PyObject *tmp_assign_source_84;
    PyObject *tmp_assign_source_85;
    PyObject *tmp_assign_source_86;
    PyObject *tmp_assign_source_87;
    PyObject *tmp_assign_source_88;
    PyObject *tmp_assign_source_89;
    PyObject *tmp_assign_source_90;
    PyObject *tmp_assign_source_91;
    PyObject *tmp_assign_source_92;
    PyObject *tmp_assign_source_93;
    PyObject *tmp_assign_source_94;
    PyObject *tmp_assign_source_95;
    PyObject *tmp_assign_source_96;
    PyObject *tmp_assign_source_97;
    PyObject *tmp_assign_source_98;
    PyObject *tmp_assign_source_99;
    PyObject *tmp_assign_source_100;
    PyObject *tmp_assign_source_101;
    PyObject *tmp_assign_source_102;
    PyObject *tmp_assign_source_103;
    PyObject *tmp_assign_source_104;
    PyObject *tmp_assign_source_105;
    PyObject *tmp_assign_source_106;
    PyObject *tmp_assign_source_107;
    PyObject *tmp_assign_source_108;
    PyObject *tmp_assign_source_109;
    PyObject *tmp_assign_source_110;
    PyObject *tmp_assign_source_111;
    PyObject *tmp_assign_source_112;
    PyObject *tmp_assign_source_113;
    PyObject *tmp_assign_source_114;
    PyObject *tmp_assign_source_115;
    PyObject *tmp_assign_source_116;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_bases_name_4;
    PyObject *tmp_bases_name_5;
    PyObject *tmp_bases_name_6;
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
    int tmp_cmp_In_11;
    int tmp_cmp_In_12;
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
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
    PyObject *tmp_compare_left_13;
    PyObject *tmp_compare_left_14;
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
    PyObject *tmp_compare_right_11;
    PyObject *tmp_compare_right_12;
    PyObject *tmp_compare_right_13;
    PyObject *tmp_compare_right_14;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
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
    PyObject *tmp_fromlist_name_12;
    PyObject *tmp_fromlist_name_13;
    PyObject *tmp_fromlist_name_14;
    PyObject *tmp_fromlist_name_15;
    PyObject *tmp_fromlist_name_16;
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
    PyObject *tmp_globals_name_12;
    PyObject *tmp_globals_name_13;
    PyObject *tmp_globals_name_14;
    PyObject *tmp_globals_name_15;
    PyObject *tmp_globals_name_16;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_attr_3;
    PyObject *tmp_hasattr_attr_4;
    PyObject *tmp_hasattr_attr_5;
    PyObject *tmp_hasattr_attr_6;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_hasattr_source_3;
    PyObject *tmp_hasattr_source_4;
    PyObject *tmp_hasattr_source_5;
    PyObject *tmp_hasattr_source_6;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_import_name_from_10;
    PyObject *tmp_import_name_from_11;
    PyObject *tmp_import_name_from_12;
    PyObject *tmp_import_name_from_13;
    PyObject *tmp_import_name_from_14;
    PyObject *tmp_import_name_from_15;
    PyObject *tmp_import_name_from_16;
    PyObject *tmp_import_name_from_17;
    PyObject *tmp_import_name_from_18;
    PyObject *tmp_import_name_from_19;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_key_name_6;
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
    PyObject *tmp_kw_name_11;
    PyObject *tmp_kw_name_12;
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
    PyObject *tmp_level_name_12;
    PyObject *tmp_level_name_13;
    PyObject *tmp_level_name_14;
    PyObject *tmp_level_name_15;
    PyObject *tmp_level_name_16;
    PyObject *tmp_list_element_1;
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
    PyObject *tmp_locals_name_12;
    PyObject *tmp_locals_name_13;
    PyObject *tmp_locals_name_14;
    PyObject *tmp_locals_name_15;
    PyObject *tmp_locals_name_16;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_metaclass_name_3;
    PyObject *tmp_metaclass_name_4;
    PyObject *tmp_metaclass_name_5;
    PyObject *tmp_metaclass_name_6;
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
    PyObject *tmp_name_name_12;
    PyObject *tmp_name_name_13;
    PyObject *tmp_name_name_14;
    PyObject *tmp_name_name_15;
    PyObject *tmp_name_name_16;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
    PyObject *tmp_outline_return_value_5;
    PyObject *tmp_outline_return_value_6;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
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
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
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
    PyObject *tmp_tuple_element_16;
    PyObject *tmp_tuple_element_17;
    PyObject *tmp_tuple_element_18;
    PyObject *tmp_tuple_element_19;
    PyObject *tmp_tuple_element_20;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_type_arg_4;
    PyObject *tmp_type_arg_5;
    PyObject *tmp_type_arg_6;
    static struct Nuitka_FrameObject *cache_frame_38ba03ed01683d1df654a0e5d393bd00_2 = NULL;

    struct Nuitka_FrameObject *frame_38ba03ed01683d1df654a0e5d393bd00_2;

    static struct Nuitka_FrameObject *cache_frame_e5cb71e6d4cfe60da3caa2193d15a0b1_3 = NULL;

    struct Nuitka_FrameObject *frame_e5cb71e6d4cfe60da3caa2193d15a0b1_3;

    struct Nuitka_FrameObject *frame_a3315b004bdb768c8b24fdd09ad0f7e1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    tmp_outline_return_value_5 = NULL;
    tmp_outline_return_value_6 = NULL;
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

    // Locals dictionary setup.
PyObject *locals_dict_6 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_7624371d027c0c6002870d7abd6449de;
    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_a3315b004bdb768c8b24fdd09ad0f7e1 = MAKE_MODULE_FRAME( codeobj_a3315b004bdb768c8b24fdd09ad0f7e1, module_urllib3$connection );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a3315b004bdb768c8b24fdd09ad0f7e1 );
    assert( Py_REFCNT( frame_a3315b004bdb768c8b24fdd09ad0f7e1 ) == 2 );

    // Framed code:
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_003800fb824e3437bbbf235acf31301c;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_urllib3;
    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
    tmp_name_name_1 = const_str_plain_datetime;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 2;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_datetime, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_plain_logging;
    tmp_globals_name_2 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 3;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_9 );
    tmp_name_name_3 = const_str_plain_os;
    tmp_globals_name_3 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 4;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_10 );
    tmp_name_name_4 = const_str_plain_sys;
    tmp_globals_name_4 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = Py_None;
    tmp_level_name_4 = const_int_0;
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 5;
    tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    assert( tmp_assign_source_11 != NULL );
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_11 );
    tmp_name_name_5 = const_str_plain_socket;
    tmp_globals_name_5 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = Py_None;
    tmp_level_name_5 = const_int_0;
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 6;
    tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_socket, tmp_assign_source_12 );
    tmp_name_name_6 = const_str_plain_socket;
    tmp_globals_name_6 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_error_str_plain_timeout_tuple;
    tmp_level_name_6 = const_int_0;
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 7;
    tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_13;

    // Tried code:
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_error );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_SocketError, tmp_assign_source_14 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_timeout );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_SocketTimeout, tmp_assign_source_15 );
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

    tmp_name_name_7 = const_str_plain_warnings;
    tmp_globals_name_7 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = Py_None;
    tmp_level_name_7 = const_int_0;
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 8;
    tmp_assign_source_16 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_16 );
    tmp_name_name_8 = const_str_plain_packages;
    tmp_globals_name_8 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_six_tuple;
    tmp_level_name_8 = const_int_pos_1;
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 9;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_six );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_17 );
    tmp_name_name_9 = const_str_digest_0f2eb9f71c85852d8e24437103b38cdd;
    tmp_globals_name_9 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_HTTPConnection_tuple;
    tmp_level_name_9 = const_int_pos_1;
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 10;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_HTTPConnection );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain__HTTPConnection, tmp_assign_source_18 );
    tmp_name_name_10 = const_str_digest_0f2eb9f71c85852d8e24437103b38cdd;
    tmp_globals_name_10 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = const_tuple_str_plain_HTTPException_tuple;
    tmp_level_name_10 = const_int_pos_1;
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 11;
    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_HTTPException );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPException, tmp_assign_source_19 );
    // Tried code:
    tmp_name_name_11 = const_str_plain_ssl;
    tmp_globals_name_11 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_11 = Py_None;
    tmp_fromlist_name_11 = Py_None;
    tmp_level_name_11 = const_int_0;
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 14;
    tmp_assign_source_20 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl, tmp_assign_source_20 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 15;

        goto try_except_handler_2;
    }

    tmp_assign_source_21 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_SSLError );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_BaseSSLError, tmp_assign_source_21 );
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_a3315b004bdb768c8b24fdd09ad0f7e1, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_a3315b004bdb768c8b24fdd09ad0f7e1, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PyException_SetTraceback( exception_keeper_value_2, (PyObject *)exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyExc_ImportError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyExc_AttributeError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 16;

        goto try_except_handler_3;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_22 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl, tmp_assign_source_22 );
    tmp_assign_source_23 = PyTuple_New( 1 );
    tmp_tuple_element_2 = PyExc_BaseException;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_23, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_23;

    tmp_assign_source_24 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_24;

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


        exception_lineno = 19;

        goto try_except_handler_4;
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


        exception_lineno = 19;

        goto try_except_handler_4;
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


        exception_lineno = 19;

        goto try_except_handler_4;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_4;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_25 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 19;

        goto try_except_handler_4;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_25;

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


        exception_lineno = 19;

        goto try_except_handler_4;
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


        exception_lineno = 19;

        goto try_except_handler_4;
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
    tmp_source_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_4;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_3 = const_str_plain_BaseSSLError;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_3 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 19;
    tmp_assign_source_26 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_4;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_26 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_26;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_1);
    locals_dict_1 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_28 = const_str_digest_003800fb824e3437bbbf235acf31301c;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_28 );
    outline_0_var___module__ = tmp_assign_source_28;

    tmp_assign_source_29 = const_str_plain_BaseSSLError;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_29 );
    outline_0_var___qualname__ = tmp_assign_source_29;

    // Tried code:
    tmp_called_name_3 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_4 = const_str_plain_BaseSSLError;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = locals_dict_1;
    Py_INCREF( tmp_tuple_element_4 );
    if ( outline_0_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_4,
            const_str_plain___qualname__,
            outline_0_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_4,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_4,
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
        Py_DECREF( tmp_tuple_element_4 );

        exception_lineno = 19;

        goto try_except_handler_5;
    }
    if ( outline_0_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_4,
            const_str_plain___module__,
            outline_0_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_4,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_4,
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
        Py_DECREF( tmp_tuple_element_4 );

        exception_lineno = 19;

        goto try_except_handler_5;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 19;
    tmp_assign_source_30 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_5;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_30;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_5:;
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
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 19;
    goto try_except_handler_4;
    outline_result_1:;
    tmp_assign_source_27 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_BaseSSLError, tmp_assign_source_27 );
    goto try_end_3;
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

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 13;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame) frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_3;
    branch_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_2:;
    // Tried code:
    tmp_assign_source_31 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ConnectionError );

    if (unlikely( tmp_assign_source_31 == NULL ))
    {
        tmp_assign_source_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError );
    }

    if ( tmp_assign_source_31 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ConnectionError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;

        goto try_except_handler_6;
    }

    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ConnectionError, tmp_assign_source_31 );
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_2 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_6 == NULL )
    {
        exception_keeper_tb_6 = MAKE_TRACEBACK( frame_a3315b004bdb768c8b24fdd09ad0f7e1, exception_keeper_lineno_6 );
    }
    else if ( exception_keeper_lineno_6 != 0 )
    {
        exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_a3315b004bdb768c8b24fdd09ad0f7e1, exception_keeper_lineno_6 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    PyException_SetTraceback( exception_keeper_value_6, (PyObject *)exception_keeper_tb_6 );
    PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    // Tried code:
    tmp_compare_left_4 = PyThreadState_GET()->exc_type;
    tmp_compare_right_4 = PyExc_NameError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_7;
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
    tmp_assign_source_32 = PyTuple_New( 1 );
    tmp_tuple_element_5 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_32, 0, tmp_tuple_element_5 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_32;

    tmp_assign_source_33 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_33;

    // Tried code:
    tmp_compare_left_5 = const_str_plain_metaclass;
    tmp_compare_right_5 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_5 );
    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
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


        exception_lineno = 27;

        goto try_except_handler_8;
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


        exception_lineno = 27;

        goto try_except_handler_8;
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


        exception_lineno = 27;

        goto try_except_handler_8;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto try_except_handler_8;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_bases_name_2 );
    tmp_assign_source_34 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_2 );

        exception_lineno = 27;

        goto try_except_handler_8;
    }
    Py_DECREF( tmp_metaclass_name_2 );
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_34;

    tmp_compare_left_6 = const_str_plain_metaclass;
    tmp_compare_right_6 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_6 );
    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    assert( !(tmp_cmp_In_4 == -1) );
    if ( tmp_cmp_In_4 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto try_except_handler_8;
    }
    branch_no_4:;
    tmp_hasattr_source_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_2 );
    tmp_hasattr_attr_2 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto try_except_handler_8;
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
    tmp_source_name_3 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto try_except_handler_8;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_6 = const_str_plain_ConnectionError;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_6 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_6 );
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 27;
    tmp_assign_source_35 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto try_except_handler_8;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_35 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_35;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_2);
    locals_dict_2 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_37 = const_str_digest_003800fb824e3437bbbf235acf31301c;
    assert( outline_1_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_37 );
    outline_1_var___module__ = tmp_assign_source_37;

    tmp_assign_source_38 = const_str_plain_ConnectionError;
    assert( outline_1_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_38 );
    outline_1_var___qualname__ = tmp_assign_source_38;

    // Tried code:
    tmp_called_name_5 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_5 );
    tmp_args_name_4 = PyTuple_New( 3 );
    tmp_tuple_element_7 = const_str_plain_ConnectionError;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_7 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_7 );
    tmp_tuple_element_7 = locals_dict_2;
    Py_INCREF( tmp_tuple_element_7 );
    if ( outline_1_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain___qualname__,
            outline_1_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
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
        Py_DECREF( tmp_tuple_element_7 );

        exception_lineno = 27;

        goto try_except_handler_9;
    }
    if ( outline_1_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain___module__,
            outline_1_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
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
        Py_DECREF( tmp_tuple_element_7 );

        exception_lineno = 27;

        goto try_except_handler_9;
    }
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_7 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 27;
    tmp_assign_source_39 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto try_except_handler_9;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_39;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_9;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_9:;
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    Py_XDECREF( outline_1_var___qualname__ );
    outline_1_var___qualname__ = NULL;

    Py_XDECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    goto outline_result_2;
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

    Py_XDECREF( outline_1_var___qualname__ );
    outline_1_var___qualname__ = NULL;

    Py_XDECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 27;
    goto try_except_handler_8;
    outline_result_2:;
    tmp_assign_source_36 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ConnectionError, tmp_assign_source_36 );
    goto try_end_6;
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

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_7;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 23;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame) frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_7;
    branch_end_3:;
    goto try_end_7;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_5;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_5:;
    tmp_name_name_12 = const_str_plain_exceptions;
    tmp_globals_name_12 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_12 = Py_None;
    tmp_fromlist_name_12 = const_tuple_e4d50c48f2ee1b6eb3ae021a15141bf1_tuple;
    tmp_level_name_12 = const_int_pos_1;
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 31;
    tmp_assign_source_40 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_40;

    // Tried code:
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_41 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_NewConnectionError );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_10;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_NewConnectionError, tmp_assign_source_41 );
    tmp_import_name_from_8 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_42 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_ConnectTimeoutError );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_10;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError, tmp_assign_source_42 );
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_43 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_SubjectAltNameWarning );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_10;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_SubjectAltNameWarning, tmp_assign_source_43 );
    tmp_import_name_from_10 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_44 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_SystemTimeWarning );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_10;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_SystemTimeWarning, tmp_assign_source_44 );
    goto try_end_8;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    tmp_name_name_13 = const_str_digest_0a2ea16757d4dad15d4c8e0ada40cd0c;
    tmp_globals_name_13 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_13 = Py_None;
    tmp_fromlist_name_13 = const_tuple_str_plain_match_hostname_str_plain_CertificateError_tuple;
    tmp_level_name_13 = const_int_pos_1;
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 37;
    tmp_assign_source_45 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_45;

    // Tried code:
    tmp_import_name_from_11 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_46 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_match_hostname );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_11;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_match_hostname, tmp_assign_source_46 );
    tmp_import_name_from_12 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_47 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_CertificateError );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_11;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_CertificateError, tmp_assign_source_47 );
    goto try_end_9;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    tmp_name_name_14 = const_str_digest_fbcb06792f2497ac6c7abd423e9e2d62;
    tmp_globals_name_14 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_14 = Py_None;
    tmp_fromlist_name_14 = const_tuple_659bcfd89e2a907d800ea69675ef86b4_tuple;
    tmp_level_name_14 = const_int_pos_1;
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 39;
    tmp_assign_source_48 = IMPORT_MODULE5( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_4__module == NULL );
    tmp_import_from_4__module = tmp_assign_source_48;

    // Tried code:
    tmp_import_name_from_13 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_49 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_resolve_cert_reqs );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto try_except_handler_12;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs, tmp_assign_source_49 );
    tmp_import_name_from_14 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    tmp_assign_source_50 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_resolve_ssl_version );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto try_except_handler_12;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_resolve_ssl_version, tmp_assign_source_50 );
    tmp_import_name_from_15 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_15 );
    tmp_assign_source_51 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_assert_fingerprint );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto try_except_handler_12;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_assert_fingerprint, tmp_assign_source_51 );
    tmp_import_name_from_16 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_16 );
    tmp_assign_source_52 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_create_urllib3_context );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto try_except_handler_12;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_create_urllib3_context, tmp_assign_source_52 );
    tmp_import_name_from_17 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_17 );
    tmp_assign_source_53 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_ssl_wrap_socket );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto try_except_handler_12;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl_wrap_socket, tmp_assign_source_53 );
    goto try_end_10;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    tmp_name_name_15 = const_str_plain_util;
    tmp_globals_name_15 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_15 = Py_None;
    tmp_fromlist_name_15 = const_tuple_str_plain_connection_tuple;
    tmp_level_name_15 = const_int_pos_1;
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 48;
    tmp_import_name_from_18 = IMPORT_MODULE5( tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15, tmp_level_name_15 );
    if ( tmp_import_name_from_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_54 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_connection );
    Py_DECREF( tmp_import_name_from_18 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_connection, tmp_assign_source_54 );
    tmp_name_name_16 = const_str_plain__collections;
    tmp_globals_name_16 = (PyObject *)moduledict_urllib3$connection;
    tmp_locals_name_16 = Py_None;
    tmp_fromlist_name_16 = const_tuple_str_plain_HTTPHeaderDict_tuple;
    tmp_level_name_16 = const_int_pos_1;
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 50;
    tmp_import_name_from_19 = IMPORT_MODULE5( tmp_name_name_16, tmp_globals_name_16, tmp_locals_name_16, tmp_fromlist_name_16, tmp_level_name_16 );
    if ( tmp_import_name_from_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_55 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_HTTPHeaderDict );
    Py_DECREF( tmp_import_name_from_19 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPHeaderDict, tmp_assign_source_55 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_logging );

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

        exception_lineno = 52;

        goto frame_exception_exit_1;
    }

    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 52;
    tmp_assign_source_56 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_digest_003800fb824e3437bbbf235acf31301c_tuple, 0 ) );

    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_56 );
    tmp_assign_source_57 = PyDict_Copy( const_dict_93916f845314fde3dc45a1c4d3d34ff8 );
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_port_by_scheme, tmp_assign_source_57 );
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;

        goto frame_exception_exit_1;
    }

    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 62;
    tmp_assign_source_58 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_2, const_str_plain_date, &PyTuple_GET_ITEM( const_tuple_int_pos_2016_int_pos_1_int_pos_1_tuple, 0 ) );

    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_RECENT_DATE, tmp_assign_source_58 );
    tmp_assign_source_59 = const_tuple_type_object_tuple;
    assert( tmp_class_creation_3__bases == NULL );
    Py_INCREF( tmp_assign_source_59 );
    tmp_class_creation_3__bases = tmp_assign_source_59;

    tmp_assign_source_60 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_60;

    // Tried code:
    tmp_compare_left_7 = const_str_plain_metaclass;
    tmp_compare_right_7 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_7 );
    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
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


        exception_lineno = 65;

        goto try_except_handler_13;
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


        exception_lineno = 65;

        goto try_except_handler_13;
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


        exception_lineno = 65;

        goto try_except_handler_13;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_13;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_3 );
    condexpr_end_8:;
    condexpr_end_7:;
    tmp_bases_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_bases_name_3 );
    tmp_assign_source_61 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_3 );

        exception_lineno = 65;

        goto try_except_handler_13;
    }
    Py_DECREF( tmp_metaclass_name_3 );
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_61;

    tmp_compare_left_8 = const_str_plain_metaclass;
    tmp_compare_right_8 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_8 );
    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    assert( !(tmp_cmp_In_6 == -1) );
    if ( tmp_cmp_In_6 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_13;
    }
    branch_no_5:;
    tmp_hasattr_source_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_3 );
    tmp_hasattr_attr_3 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_3, tmp_hasattr_attr_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_13;
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
    tmp_source_name_4 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_13;
    }
    tmp_args_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_8 = const_str_plain_DummyConnection;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_8 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_8 );
    tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_5 );
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 65;
    tmp_assign_source_62 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_13;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_62 = PyDict_New();
    condexpr_end_9:;
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_62;

    tmp_set_locals = tmp_class_creation_3__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_3);
    locals_dict_3 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_64 = const_str_digest_003800fb824e3437bbbf235acf31301c;
    assert( outline_2_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_64 );
    outline_2_var___module__ = tmp_assign_source_64;

    tmp_assign_source_65 = const_str_digest_df5958c87718dd50f2e0bfe7cc6ada5c;
    assert( outline_2_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_65 );
    outline_2_var___doc__ = tmp_assign_source_65;

    tmp_assign_source_66 = const_str_plain_DummyConnection;
    assert( outline_2_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_66 );
    outline_2_var___qualname__ = tmp_assign_source_66;

    // Tried code:
    tmp_called_name_7 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_7 );
    tmp_args_name_6 = PyTuple_New( 3 );
    tmp_tuple_element_9 = const_str_plain_DummyConnection;
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

        exception_lineno = 65;

        goto try_except_handler_14;
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

        exception_lineno = 65;

        goto try_except_handler_14;
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

        exception_lineno = 65;

        goto try_except_handler_14;
    }
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_9 );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_6 );
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 65;
    tmp_assign_source_67 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_14;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_67;

    tmp_outline_return_value_3 = outline_2_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_3 );
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_14;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_14:;
    CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
    Py_DECREF( outline_2_var___class__ );
    outline_2_var___class__ = NULL;

    Py_XDECREF( outline_2_var___qualname__ );
    outline_2_var___qualname__ = NULL;

    Py_XDECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    Py_XDECREF( outline_2_var___doc__ );
    outline_2_var___doc__ = NULL;

    goto outline_result_3;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
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

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 65;
    goto try_except_handler_13;
    outline_result_3:;
    tmp_assign_source_63 = tmp_outline_return_value_3;
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_DummyConnection, tmp_assign_source_63 );
    goto try_end_11;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
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
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Tried code:
    tmp_assign_source_68 = PyTuple_New( 2 );
    tmp_tuple_element_10 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain__HTTPConnection );

    if (unlikely( tmp_tuple_element_10 == NULL ))
    {
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__HTTPConnection );
    }

    if ( tmp_tuple_element_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_68 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_HTTPConnection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;

        goto try_except_handler_15;
    }

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_assign_source_68, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = (PyObject *)&PyBaseObject_Type;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_assign_source_68, 1, tmp_tuple_element_10 );
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_68;

    tmp_assign_source_69 = PyDict_New();
    assert( tmp_class_creation_4__class_decl_dict == NULL );
    tmp_class_creation_4__class_decl_dict = tmp_assign_source_69;

    tmp_compare_left_9 = const_str_plain_metaclass;
    tmp_compare_right_9 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_9 );
    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_9, tmp_compare_left_9 );
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


        exception_lineno = 70;

        goto try_except_handler_15;
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


        exception_lineno = 70;

        goto try_except_handler_15;
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


        exception_lineno = 70;

        goto try_except_handler_15;
    }
    tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_4 );
    Py_DECREF( tmp_type_arg_4 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;

        goto try_except_handler_15;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_4 );
    condexpr_end_11:;
    condexpr_end_10:;
    tmp_bases_name_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_bases_name_4 );
    tmp_assign_source_70 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    if ( tmp_assign_source_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_4 );

        exception_lineno = 70;

        goto try_except_handler_15;
    }
    Py_DECREF( tmp_metaclass_name_4 );
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_70;

    tmp_compare_left_10 = const_str_plain_metaclass;
    tmp_compare_right_10 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_10 );
    tmp_cmp_In_8 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    assert( !(tmp_cmp_In_8 == -1) );
    if ( tmp_cmp_In_8 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;

        goto try_except_handler_15;
    }
    branch_no_6:;
    tmp_hasattr_source_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_4 );
    tmp_hasattr_attr_4 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_4, tmp_hasattr_attr_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;

        goto try_except_handler_15;
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
    tmp_source_name_5 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___prepare__ );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;

        goto try_except_handler_15;
    }
    tmp_args_name_7 = PyTuple_New( 2 );
    tmp_tuple_element_11 = const_str_plain_HTTPConnection;
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_11 );
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_11 );
    tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_7 );
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 70;
    tmp_assign_source_71 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;

        goto try_except_handler_15;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_71 = PyDict_New();
    condexpr_end_12:;
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_71;

    tmp_set_locals = tmp_class_creation_4__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_4);
    locals_dict_4 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_73 = const_str_digest_003800fb824e3437bbbf235acf31301c;
    assert( outline_3_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_73 );
    outline_3_var___module__ = tmp_assign_source_73;

    tmp_assign_source_74 = const_str_digest_b2bd82dd2dbc4f15314a5d4f089060d2;
    assert( outline_3_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_74 );
    outline_3_var___doc__ = tmp_assign_source_74;

    tmp_assign_source_75 = const_str_plain_HTTPConnection;
    assert( outline_3_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_75 );
    outline_3_var___qualname__ = tmp_assign_source_75;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_38ba03ed01683d1df654a0e5d393bd00_2, codeobj_38ba03ed01683d1df654a0e5d393bd00, module_urllib3$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_38ba03ed01683d1df654a0e5d393bd00_2 = cache_frame_38ba03ed01683d1df654a0e5d393bd00_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_38ba03ed01683d1df654a0e5d393bd00_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_38ba03ed01683d1df654a0e5d393bd00_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_subscribed_name_5 = PyDict_GetItem( locals_dict_4, const_str_plain_port_by_scheme );

    if ( tmp_subscribed_name_5 == NULL )
    {
        tmp_subscribed_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_port_by_scheme );

        if (unlikely( tmp_subscribed_name_5 == NULL ))
        {
            tmp_subscribed_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_port_by_scheme );
        }

        if ( tmp_subscribed_name_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "port_by_scheme" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 97;
            type_description_2 = "NoooNNNNNNNN";
            goto frame_exception_exit_2;
        }

    }

    tmp_subscript_name_5 = const_str_plain_http;
    tmp_assign_source_76 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_assign_source_76 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_2 = "NoooNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_3_var_default_port == NULL );
    outline_3_var_default_port = tmp_assign_source_76;

    tmp_assign_source_77 = PyList_New( 1 );
    tmp_list_element_1 = PyTuple_New( 3 );
    tmp_source_name_6 = PyDict_GetItem( locals_dict_4, const_str_plain_socket );

    if ( tmp_source_name_6 == NULL )
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_socket );

        if (unlikely( tmp_source_name_6 == NULL ))
        {
            tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
        }

        if ( tmp_source_name_6 == NULL )
        {
            Py_DECREF( tmp_assign_source_77 );
            Py_DECREF( tmp_list_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 101;
            type_description_2 = "NooooNNNNNNN";
            goto frame_exception_exit_2;
        }

    }

    tmp_tuple_element_12 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_IPPROTO_TCP );
    if ( tmp_tuple_element_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_77 );
        Py_DECREF( tmp_list_element_1 );

        exception_lineno = 101;
        type_description_2 = "NooooNNNNNNN";
        goto frame_exception_exit_2;
    }
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_12 );
    tmp_source_name_7 = PyDict_GetItem( locals_dict_4, const_str_plain_socket );

    if ( tmp_source_name_7 == NULL )
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_socket );

        if (unlikely( tmp_source_name_7 == NULL ))
        {
            tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
        }

        if ( tmp_source_name_7 == NULL )
        {
            Py_DECREF( tmp_assign_source_77 );
            Py_DECREF( tmp_list_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 101;
            type_description_2 = "NooooNNNNNNN";
            goto frame_exception_exit_2;
        }

    }

    tmp_tuple_element_12 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_TCP_NODELAY );
    if ( tmp_tuple_element_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_77 );
        Py_DECREF( tmp_list_element_1 );

        exception_lineno = 101;
        type_description_2 = "NooooNNNNNNN";
        goto frame_exception_exit_2;
    }
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_12 );
    tmp_tuple_element_12 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_list_element_1, 2, tmp_tuple_element_12 );
    PyList_SET_ITEM( tmp_assign_source_77, 0, tmp_list_element_1 );
    assert( outline_3_var_default_socket_options == NULL );
    outline_3_var_default_socket_options = tmp_assign_source_77;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_38ba03ed01683d1df654a0e5d393bd00_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_38ba03ed01683d1df654a0e5d393bd00_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_38ba03ed01683d1df654a0e5d393bd00_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_38ba03ed01683d1df654a0e5d393bd00_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_38ba03ed01683d1df654a0e5d393bd00_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_38ba03ed01683d1df654a0e5d393bd00_2,
        type_description_2,
        NULL,
        outline_3_var___qualname__,
        outline_3_var___module__,
        outline_3_var___doc__,
        outline_3_var_default_port,
        outline_3_var_default_socket_options,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    );


    // Release cached frame.
    if ( frame_38ba03ed01683d1df654a0e5d393bd00_2 == cache_frame_38ba03ed01683d1df654a0e5d393bd00_2 )
    {
        Py_DECREF( frame_38ba03ed01683d1df654a0e5d393bd00_2 );
    }
    cache_frame_38ba03ed01683d1df654a0e5d393bd00_2 = NULL;

    assertFrameObject( frame_38ba03ed01683d1df654a0e5d393bd00_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_16;
    skip_nested_handling_1:;
    tmp_assign_source_78 = Py_False;
    assert( outline_3_var_is_verified == NULL );
    Py_INCREF( tmp_assign_source_78 );
    outline_3_var_is_verified = tmp_assign_source_78;

    tmp_assign_source_79 = MAKE_FUNCTION_urllib3$connection$$$function_1___init__(  );
    assert( outline_3_var___init__ == NULL );
    outline_3_var___init__ = tmp_assign_source_79;

    tmp_assign_source_80 = MAKE_FUNCTION_urllib3$connection$$$function_2__new_conn(  );
    assert( outline_3_var__new_conn == NULL );
    outline_3_var__new_conn = tmp_assign_source_80;

    tmp_assign_source_81 = MAKE_FUNCTION_urllib3$connection$$$function_3__prepare_conn(  );
    assert( outline_3_var__prepare_conn == NULL );
    outline_3_var__prepare_conn = tmp_assign_source_81;

    tmp_assign_source_82 = MAKE_FUNCTION_urllib3$connection$$$function_4_connect(  );
    assert( outline_3_var_connect == NULL );
    outline_3_var_connect = tmp_assign_source_82;

    tmp_defaults_1 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_83 = MAKE_FUNCTION_urllib3$connection$$$function_5_request_chunked( tmp_defaults_1 );
    assert( outline_3_var_request_chunked == NULL );
    outline_3_var_request_chunked = tmp_assign_source_83;

    tmp_called_name_9 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_9 );
    tmp_args_name_8 = PyTuple_New( 3 );
    tmp_tuple_element_13 = const_str_plain_HTTPConnection;
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_13 );
    tmp_tuple_element_13 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_13 );
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_13 );
    tmp_tuple_element_13 = locals_dict_4;
    Py_INCREF( tmp_tuple_element_13 );
    if ( outline_3_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_13,
            const_str_plain___qualname__,
            outline_3_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_13,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_13,
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
        Py_DECREF( tmp_tuple_element_13 );

        exception_lineno = 70;

        goto try_except_handler_16;
    }
    if ( outline_3_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_13,
            const_str_plain___module__,
            outline_3_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_13,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_13,
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
        Py_DECREF( tmp_tuple_element_13 );

        exception_lineno = 70;

        goto try_except_handler_16;
    }
    if ( outline_3_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_13,
            const_str_plain___doc__,
            outline_3_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_13,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_13,
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
        Py_DECREF( tmp_tuple_element_13 );

        exception_lineno = 70;

        goto try_except_handler_16;
    }
    if ( outline_3_var_default_port != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_13,
            const_str_plain_default_port,
            outline_3_var_default_port
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_13,
            const_str_plain_default_port
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_13,
                const_str_plain_default_port
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
        Py_DECREF( tmp_tuple_element_13 );

        exception_lineno = 70;

        goto try_except_handler_16;
    }
    if ( outline_3_var_default_socket_options != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_13,
            const_str_plain_default_socket_options,
            outline_3_var_default_socket_options
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_13,
            const_str_plain_default_socket_options
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_13,
                const_str_plain_default_socket_options
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
        Py_DECREF( tmp_tuple_element_13 );

        exception_lineno = 70;

        goto try_except_handler_16;
    }
    if ( outline_3_var_is_verified != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_13,
            const_str_plain_is_verified,
            outline_3_var_is_verified
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_13,
            const_str_plain_is_verified
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_13,
                const_str_plain_is_verified
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
        Py_DECREF( tmp_tuple_element_13 );

        exception_lineno = 70;

        goto try_except_handler_16;
    }
    if ( outline_3_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_13,
            const_str_plain___init__,
            outline_3_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_13,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_13,
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
        Py_DECREF( tmp_tuple_element_13 );

        exception_lineno = 70;

        goto try_except_handler_16;
    }
    if ( outline_3_var__new_conn != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_13,
            const_str_plain__new_conn,
            outline_3_var__new_conn
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_13,
            const_str_plain__new_conn
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_13,
                const_str_plain__new_conn
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
        Py_DECREF( tmp_tuple_element_13 );

        exception_lineno = 70;

        goto try_except_handler_16;
    }
    if ( outline_3_var__prepare_conn != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_13,
            const_str_plain__prepare_conn,
            outline_3_var__prepare_conn
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_13,
            const_str_plain__prepare_conn
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_13,
                const_str_plain__prepare_conn
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
        Py_DECREF( tmp_tuple_element_13 );

        exception_lineno = 70;

        goto try_except_handler_16;
    }
    if ( outline_3_var_connect != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_13,
            const_str_plain_connect,
            outline_3_var_connect
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_13,
            const_str_plain_connect
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_13,
                const_str_plain_connect
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
        Py_DECREF( tmp_tuple_element_13 );

        exception_lineno = 70;

        goto try_except_handler_16;
    }
    if ( outline_3_var_request_chunked != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_13,
            const_str_plain_request_chunked,
            outline_3_var_request_chunked
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_13,
            const_str_plain_request_chunked
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_13,
                const_str_plain_request_chunked
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
        Py_DECREF( tmp_tuple_element_13 );

        exception_lineno = 70;

        goto try_except_handler_16;
    }
    PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_13 );
    tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_8 );
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 70;
    tmp_assign_source_84 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_84 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;

        goto try_except_handler_16;
    }
    assert( outline_3_var___class__ == NULL );
    outline_3_var___class__ = tmp_assign_source_84;

    tmp_outline_return_value_4 = outline_3_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_4 );
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_16;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_16:;
    CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
    Py_DECREF( outline_3_var___class__ );
    outline_3_var___class__ = NULL;

    Py_XDECREF( outline_3_var___qualname__ );
    outline_3_var___qualname__ = NULL;

    Py_XDECREF( outline_3_var___module__ );
    outline_3_var___module__ = NULL;

    Py_XDECREF( outline_3_var___doc__ );
    outline_3_var___doc__ = NULL;

    Py_XDECREF( outline_3_var_default_port );
    outline_3_var_default_port = NULL;

    Py_XDECREF( outline_3_var_default_socket_options );
    outline_3_var_default_socket_options = NULL;

    Py_XDECREF( outline_3_var_is_verified );
    outline_3_var_is_verified = NULL;

    Py_XDECREF( outline_3_var___init__ );
    outline_3_var___init__ = NULL;

    Py_XDECREF( outline_3_var__new_conn );
    outline_3_var__new_conn = NULL;

    Py_XDECREF( outline_3_var__prepare_conn );
    outline_3_var__prepare_conn = NULL;

    Py_XDECREF( outline_3_var_connect );
    outline_3_var_connect = NULL;

    Py_XDECREF( outline_3_var_request_chunked );
    outline_3_var_request_chunked = NULL;

    goto outline_result_4;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
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

    Py_XDECREF( outline_3_var_default_port );
    outline_3_var_default_port = NULL;

    Py_XDECREF( outline_3_var_default_socket_options );
    outline_3_var_default_socket_options = NULL;

    Py_XDECREF( outline_3_var_is_verified );
    outline_3_var_is_verified = NULL;

    Py_XDECREF( outline_3_var___init__ );
    outline_3_var___init__ = NULL;

    Py_XDECREF( outline_3_var__new_conn );
    outline_3_var__new_conn = NULL;

    Py_XDECREF( outline_3_var__prepare_conn );
    outline_3_var__prepare_conn = NULL;

    Py_XDECREF( outline_3_var_connect );
    outline_3_var_connect = NULL;

    Py_XDECREF( outline_3_var_request_chunked );
    outline_3_var_request_chunked = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto outline_exception_4;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 70;
    goto try_except_handler_15;
    outline_result_4:;
    tmp_assign_source_72 = tmp_outline_return_value_4;
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPConnection, tmp_assign_source_72 );
    goto try_end_12;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
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
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Tried code:
    tmp_assign_source_85 = PyTuple_New( 1 );
    tmp_tuple_element_14 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPConnection );

    if (unlikely( tmp_tuple_element_14 == NULL ))
    {
        tmp_tuple_element_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPConnection );
    }

    if ( tmp_tuple_element_14 == NULL )
    {
        Py_DECREF( tmp_assign_source_85 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPConnection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 208;

        goto try_except_handler_17;
    }

    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_assign_source_85, 0, tmp_tuple_element_14 );
    assert( tmp_class_creation_5__bases == NULL );
    tmp_class_creation_5__bases = tmp_assign_source_85;

    tmp_assign_source_86 = PyDict_New();
    assert( tmp_class_creation_5__class_decl_dict == NULL );
    tmp_class_creation_5__class_decl_dict = tmp_assign_source_86;

    tmp_compare_left_11 = const_str_plain_metaclass;
    tmp_compare_right_11 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_11 );
    tmp_cmp_In_9 = PySequence_Contains( tmp_compare_right_11, tmp_compare_left_11 );
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


        exception_lineno = 208;

        goto try_except_handler_17;
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


        exception_lineno = 208;

        goto try_except_handler_17;
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
    tmp_subscribed_name_6 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_subscribed_name_6 );
    tmp_subscript_name_6 = const_int_0;
    tmp_type_arg_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_type_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;

        goto try_except_handler_17;
    }
    tmp_metaclass_name_5 = BUILTIN_TYPE1( tmp_type_arg_5 );
    Py_DECREF( tmp_type_arg_5 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;

        goto try_except_handler_17;
    }
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_metaclass_name_5 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_5 );
    condexpr_end_14:;
    condexpr_end_13:;
    tmp_bases_name_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_bases_name_5 );
    tmp_assign_source_87 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
    if ( tmp_assign_source_87 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_5 );

        exception_lineno = 208;

        goto try_except_handler_17;
    }
    Py_DECREF( tmp_metaclass_name_5 );
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_87;

    tmp_compare_left_12 = const_str_plain_metaclass;
    tmp_compare_right_12 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_12 );
    tmp_cmp_In_10 = PySequence_Contains( tmp_compare_right_12, tmp_compare_left_12 );
    assert( !(tmp_cmp_In_10 == -1) );
    if ( tmp_cmp_In_10 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;

        goto try_except_handler_17;
    }
    branch_no_7:;
    tmp_hasattr_source_5 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_5 );
    tmp_hasattr_attr_5 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_5, tmp_hasattr_attr_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;

        goto try_except_handler_17;
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
    tmp_source_name_8 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___prepare__ );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;

        goto try_except_handler_17;
    }
    tmp_args_name_9 = PyTuple_New( 2 );
    tmp_tuple_element_15 = const_str_plain_HTTPSConnection;
    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_15 );
    tmp_tuple_element_15 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_tuple_element_15 );
    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_15 );
    tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_9 );
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 208;
    tmp_assign_source_88 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_name_9 );
    if ( tmp_assign_source_88 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;

        goto try_except_handler_17;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_assign_source_88 = PyDict_New();
    condexpr_end_15:;
    assert( tmp_class_creation_5__prepared == NULL );
    tmp_class_creation_5__prepared = tmp_assign_source_88;

    tmp_set_locals = tmp_class_creation_5__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_5);
    locals_dict_5 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_90 = const_str_digest_003800fb824e3437bbbf235acf31301c;
    assert( outline_4_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_90 );
    outline_4_var___module__ = tmp_assign_source_90;

    tmp_assign_source_91 = const_str_plain_HTTPSConnection;
    assert( outline_4_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_91 );
    outline_4_var___qualname__ = tmp_assign_source_91;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e5cb71e6d4cfe60da3caa2193d15a0b1_3, codeobj_e5cb71e6d4cfe60da3caa2193d15a0b1, module_urllib3$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e5cb71e6d4cfe60da3caa2193d15a0b1_3 = cache_frame_e5cb71e6d4cfe60da3caa2193d15a0b1_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e5cb71e6d4cfe60da3caa2193d15a0b1_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e5cb71e6d4cfe60da3caa2193d15a0b1_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_subscribed_name_7 = PyDict_GetItem( locals_dict_5, const_str_plain_port_by_scheme );

    if ( tmp_subscribed_name_7 == NULL )
    {
        tmp_subscribed_name_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_port_by_scheme );

        if (unlikely( tmp_subscribed_name_7 == NULL ))
        {
            tmp_subscribed_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_port_by_scheme );
        }

        if ( tmp_subscribed_name_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "port_by_scheme" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 209;
            type_description_2 = "NooNNNN";
            goto frame_exception_exit_3;
        }

    }

    tmp_subscript_name_7 = const_str_plain_https;
    tmp_assign_source_92 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_assign_source_92 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        type_description_2 = "NooNNNN";
        goto frame_exception_exit_3;
    }
    assert( outline_4_var_default_port == NULL );
    outline_4_var_default_port = tmp_assign_source_92;

    tmp_assign_source_93 = Py_None;
    assert( outline_4_var_ssl_version == NULL );
    Py_INCREF( tmp_assign_source_93 );
    outline_4_var_ssl_version = tmp_assign_source_93;

    tmp_defaults_2 = PyTuple_New( 6 );
    tmp_tuple_element_16 = Py_None;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_16 );
    tmp_tuple_element_16 = Py_None;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_defaults_2, 1, tmp_tuple_element_16 );
    tmp_tuple_element_16 = Py_None;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_defaults_2, 2, tmp_tuple_element_16 );
    tmp_tuple_element_16 = Py_None;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_defaults_2, 3, tmp_tuple_element_16 );
    tmp_source_name_9 = PyDict_GetItem( locals_dict_5, const_str_plain_socket );

    if ( tmp_source_name_9 == NULL )
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_socket );

        if (unlikely( tmp_source_name_9 == NULL ))
        {
            tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
        }

        if ( tmp_source_name_9 == NULL )
        {
            Py_DECREF( tmp_defaults_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 214;
            type_description_2 = "NooooNN";
            goto frame_exception_exit_3;
        }

    }

    tmp_tuple_element_16 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__GLOBAL_DEFAULT_TIMEOUT );
    if ( tmp_tuple_element_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_2 );

        exception_lineno = 214;
        type_description_2 = "NooooNN";
        goto frame_exception_exit_3;
    }
    PyTuple_SET_ITEM( tmp_defaults_2, 4, tmp_tuple_element_16 );
    tmp_tuple_element_16 = Py_None;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_defaults_2, 5, tmp_tuple_element_16 );
    tmp_assign_source_94 = MAKE_FUNCTION_urllib3$connection$$$function_6___init__( tmp_defaults_2 );
    assert( outline_4_var___init__ == NULL );
    outline_4_var___init__ = tmp_assign_source_94;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5cb71e6d4cfe60da3caa2193d15a0b1_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5cb71e6d4cfe60da3caa2193d15a0b1_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e5cb71e6d4cfe60da3caa2193d15a0b1_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e5cb71e6d4cfe60da3caa2193d15a0b1_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e5cb71e6d4cfe60da3caa2193d15a0b1_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e5cb71e6d4cfe60da3caa2193d15a0b1_3,
        type_description_2,
        NULL,
        outline_4_var___qualname__,
        outline_4_var___module__,
        outline_4_var_default_port,
        outline_4_var_ssl_version,
        outline_4_var___init__,
        NULL
    );


    // Release cached frame.
    if ( frame_e5cb71e6d4cfe60da3caa2193d15a0b1_3 == cache_frame_e5cb71e6d4cfe60da3caa2193d15a0b1_3 )
    {
        Py_DECREF( frame_e5cb71e6d4cfe60da3caa2193d15a0b1_3 );
    }
    cache_frame_e5cb71e6d4cfe60da3caa2193d15a0b1_3 = NULL;

    assertFrameObject( frame_e5cb71e6d4cfe60da3caa2193d15a0b1_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_18;
    skip_nested_handling_2:;
    tmp_assign_source_95 = MAKE_FUNCTION_urllib3$connection$$$function_7_connect(  );
    assert( outline_4_var_connect == NULL );
    outline_4_var_connect = tmp_assign_source_95;

    tmp_called_name_11 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_11 );
    tmp_args_name_10 = PyTuple_New( 3 );
    tmp_tuple_element_17 = const_str_plain_HTTPSConnection;
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_17 );
    tmp_tuple_element_17 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_tuple_element_17 );
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_17 );
    tmp_tuple_element_17 = locals_dict_5;
    Py_INCREF( tmp_tuple_element_17 );
    if ( outline_4_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_17,
            const_str_plain___qualname__,
            outline_4_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_17,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_17,
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
        Py_DECREF( tmp_tuple_element_17 );

        exception_lineno = 208;

        goto try_except_handler_18;
    }
    if ( outline_4_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_17,
            const_str_plain___module__,
            outline_4_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_17,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_17,
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
        Py_DECREF( tmp_tuple_element_17 );

        exception_lineno = 208;

        goto try_except_handler_18;
    }
    if ( outline_4_var_default_port != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_17,
            const_str_plain_default_port,
            outline_4_var_default_port
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_17,
            const_str_plain_default_port
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_17,
                const_str_plain_default_port
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
        Py_DECREF( tmp_tuple_element_17 );

        exception_lineno = 208;

        goto try_except_handler_18;
    }
    if ( outline_4_var_ssl_version != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_17,
            const_str_plain_ssl_version,
            outline_4_var_ssl_version
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_17,
            const_str_plain_ssl_version
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_17,
                const_str_plain_ssl_version
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
        Py_DECREF( tmp_tuple_element_17 );

        exception_lineno = 208;

        goto try_except_handler_18;
    }
    if ( outline_4_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_17,
            const_str_plain___init__,
            outline_4_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_17,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_17,
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
        Py_DECREF( tmp_args_name_10 );
        Py_DECREF( tmp_tuple_element_17 );

        exception_lineno = 208;

        goto try_except_handler_18;
    }
    if ( outline_4_var_connect != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_17,
            const_str_plain_connect,
            outline_4_var_connect
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_17,
            const_str_plain_connect
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_17,
                const_str_plain_connect
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
        Py_DECREF( tmp_tuple_element_17 );

        exception_lineno = 208;

        goto try_except_handler_18;
    }
    PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_17 );
    tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_10 );
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 208;
    tmp_assign_source_96 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_args_name_10 );
    if ( tmp_assign_source_96 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;

        goto try_except_handler_18;
    }
    assert( outline_4_var___class__ == NULL );
    outline_4_var___class__ = tmp_assign_source_96;

    tmp_outline_return_value_5 = outline_4_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_5 );
    Py_INCREF( tmp_outline_return_value_5 );
    goto try_return_handler_18;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_18:;
    CHECK_OBJECT( (PyObject *)outline_4_var___class__ );
    Py_DECREF( outline_4_var___class__ );
    outline_4_var___class__ = NULL;

    Py_XDECREF( outline_4_var___qualname__ );
    outline_4_var___qualname__ = NULL;

    Py_XDECREF( outline_4_var___module__ );
    outline_4_var___module__ = NULL;

    Py_XDECREF( outline_4_var_default_port );
    outline_4_var_default_port = NULL;

    Py_XDECREF( outline_4_var_ssl_version );
    outline_4_var_ssl_version = NULL;

    Py_XDECREF( outline_4_var___init__ );
    outline_4_var___init__ = NULL;

    Py_XDECREF( outline_4_var_connect );
    outline_4_var_connect = NULL;

    goto outline_result_5;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_4_var___qualname__ );
    outline_4_var___qualname__ = NULL;

    Py_XDECREF( outline_4_var___module__ );
    outline_4_var___module__ = NULL;

    Py_XDECREF( outline_4_var_default_port );
    outline_4_var_default_port = NULL;

    Py_XDECREF( outline_4_var_ssl_version );
    outline_4_var_ssl_version = NULL;

    Py_XDECREF( outline_4_var___init__ );
    outline_4_var___init__ = NULL;

    Py_XDECREF( outline_4_var_connect );
    outline_4_var_connect = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto outline_exception_5;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_5:;
    exception_lineno = 208;
    goto try_except_handler_17;
    outline_result_5:;
    tmp_assign_source_89 = tmp_outline_return_value_5;
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPSConnection, tmp_assign_source_89 );
    goto try_end_13;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
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
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    // Tried code:
    tmp_assign_source_97 = PyTuple_New( 1 );
    tmp_tuple_element_18 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPSConnection );

    if (unlikely( tmp_tuple_element_18 == NULL ))
    {
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPSConnection );
    }

    if ( tmp_tuple_element_18 == NULL )
    {
        Py_DECREF( tmp_assign_source_97 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPSConnection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 246;

        goto try_except_handler_19;
    }

    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_assign_source_97, 0, tmp_tuple_element_18 );
    assert( tmp_class_creation_6__bases == NULL );
    tmp_class_creation_6__bases = tmp_assign_source_97;

    tmp_assign_source_98 = PyDict_New();
    assert( tmp_class_creation_6__class_decl_dict == NULL );
    tmp_class_creation_6__class_decl_dict = tmp_assign_source_98;

    tmp_compare_left_13 = const_str_plain_metaclass;
    tmp_compare_right_13 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_13 );
    tmp_cmp_In_11 = PySequence_Contains( tmp_compare_right_13, tmp_compare_left_13 );
    assert( !(tmp_cmp_In_11 == -1) );
    if ( tmp_cmp_In_11 == 1 )
    {
        goto condexpr_true_16;
    }
    else
    {
        goto condexpr_false_16;
    }
    condexpr_true_16:;
    tmp_dict_name_6 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_6 );
    tmp_key_name_6 = const_str_plain_metaclass;
    tmp_metaclass_name_6 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;

        goto try_except_handler_19;
    }
    goto condexpr_end_16;
    condexpr_false_16:;
    tmp_cond_value_6 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_cond_value_6 );
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;

        goto try_except_handler_19;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto condexpr_true_17;
    }
    else
    {
        goto condexpr_false_17;
    }
    condexpr_true_17:;
    tmp_subscribed_name_8 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_subscribed_name_8 );
    tmp_subscript_name_8 = const_int_0;
    tmp_type_arg_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_type_arg_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;

        goto try_except_handler_19;
    }
    tmp_metaclass_name_6 = BUILTIN_TYPE1( tmp_type_arg_6 );
    Py_DECREF( tmp_type_arg_6 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;

        goto try_except_handler_19;
    }
    goto condexpr_end_17;
    condexpr_false_17:;
    tmp_metaclass_name_6 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_6 );
    condexpr_end_17:;
    condexpr_end_16:;
    tmp_bases_name_6 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_bases_name_6 );
    tmp_assign_source_99 = SELECT_METACLASS( tmp_metaclass_name_6, tmp_bases_name_6 );
    if ( tmp_assign_source_99 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_6 );

        exception_lineno = 246;

        goto try_except_handler_19;
    }
    Py_DECREF( tmp_metaclass_name_6 );
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_99;

    tmp_compare_left_14 = const_str_plain_metaclass;
    tmp_compare_right_14 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_14 );
    tmp_cmp_In_12 = PySequence_Contains( tmp_compare_right_14, tmp_compare_left_14 );
    assert( !(tmp_cmp_In_12 == -1) );
    if ( tmp_cmp_In_12 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;

        goto try_except_handler_19;
    }
    branch_no_8:;
    tmp_hasattr_source_6 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_6 );
    tmp_hasattr_attr_6 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_6, tmp_hasattr_attr_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;

        goto try_except_handler_19;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_18;
    }
    else
    {
        goto condexpr_false_18;
    }
    condexpr_true_18:;
    tmp_source_name_10 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;

        goto try_except_handler_19;
    }
    tmp_args_name_11 = PyTuple_New( 2 );
    tmp_tuple_element_19 = const_str_plain_VerifiedHTTPSConnection;
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_args_name_11, 0, tmp_tuple_element_19 );
    tmp_tuple_element_19 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_tuple_element_19 );
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_args_name_11, 1, tmp_tuple_element_19 );
    tmp_kw_name_11 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_11 );
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 246;
    tmp_assign_source_100 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_11, tmp_kw_name_11 );
    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_name_11 );
    if ( tmp_assign_source_100 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;

        goto try_except_handler_19;
    }
    goto condexpr_end_18;
    condexpr_false_18:;
    tmp_assign_source_100 = PyDict_New();
    condexpr_end_18:;
    assert( tmp_class_creation_6__prepared == NULL );
    tmp_class_creation_6__prepared = tmp_assign_source_100;

    tmp_set_locals = tmp_class_creation_6__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_6);
    locals_dict_6 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_102 = const_str_digest_003800fb824e3437bbbf235acf31301c;
    assert( outline_5_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_102 );
    outline_5_var___module__ = tmp_assign_source_102;

    tmp_assign_source_103 = const_str_digest_fa24e620292c5ddd664b0f39ae7cf5ea;
    assert( outline_5_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_103 );
    outline_5_var___doc__ = tmp_assign_source_103;

    tmp_assign_source_104 = const_str_plain_VerifiedHTTPSConnection;
    assert( outline_5_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_104 );
    outline_5_var___qualname__ = tmp_assign_source_104;

    tmp_assign_source_105 = Py_None;
    assert( outline_5_var_cert_reqs == NULL );
    Py_INCREF( tmp_assign_source_105 );
    outline_5_var_cert_reqs = tmp_assign_source_105;

    tmp_assign_source_106 = Py_None;
    assert( outline_5_var_ca_certs == NULL );
    Py_INCREF( tmp_assign_source_106 );
    outline_5_var_ca_certs = tmp_assign_source_106;

    tmp_assign_source_107 = Py_None;
    assert( outline_5_var_ca_cert_dir == NULL );
    Py_INCREF( tmp_assign_source_107 );
    outline_5_var_ca_cert_dir = tmp_assign_source_107;

    tmp_assign_source_108 = Py_None;
    assert( outline_5_var_ssl_version == NULL );
    Py_INCREF( tmp_assign_source_108 );
    outline_5_var_ssl_version = tmp_assign_source_108;

    tmp_assign_source_109 = Py_None;
    assert( outline_5_var_assert_fingerprint == NULL );
    Py_INCREF( tmp_assign_source_109 );
    outline_5_var_assert_fingerprint = tmp_assign_source_109;

    tmp_defaults_3 = const_tuple_none_none_none_none_none_none_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_110 = MAKE_FUNCTION_urllib3$connection$$$function_8_set_cert( tmp_defaults_3 );
    assert( outline_5_var_set_cert == NULL );
    outline_5_var_set_cert = tmp_assign_source_110;

    tmp_assign_source_111 = MAKE_FUNCTION_urllib3$connection$$$function_9_connect(  );
    assert( outline_5_var_connect == NULL );
    outline_5_var_connect = tmp_assign_source_111;

    // Tried code:
    tmp_called_name_13 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_called_name_13 );
    tmp_args_name_12 = PyTuple_New( 3 );
    tmp_tuple_element_20 = const_str_plain_VerifiedHTTPSConnection;
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_12, 0, tmp_tuple_element_20 );
    tmp_tuple_element_20 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_tuple_element_20 );
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_12, 1, tmp_tuple_element_20 );
    tmp_tuple_element_20 = locals_dict_6;
    Py_INCREF( tmp_tuple_element_20 );
    if ( outline_5_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_20,
            const_str_plain___qualname__,
            outline_5_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_20,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_20,
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
        Py_DECREF( tmp_args_name_12 );
        Py_DECREF( tmp_tuple_element_20 );

        exception_lineno = 246;

        goto try_except_handler_20;
    }
    if ( outline_5_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_20,
            const_str_plain___module__,
            outline_5_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_20,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_20,
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
        Py_DECREF( tmp_args_name_12 );
        Py_DECREF( tmp_tuple_element_20 );

        exception_lineno = 246;

        goto try_except_handler_20;
    }
    if ( outline_5_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_20,
            const_str_plain___doc__,
            outline_5_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_20,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_20,
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
        Py_DECREF( tmp_args_name_12 );
        Py_DECREF( tmp_tuple_element_20 );

        exception_lineno = 246;

        goto try_except_handler_20;
    }
    if ( outline_5_var_cert_reqs != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_20,
            const_str_plain_cert_reqs,
            outline_5_var_cert_reqs
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_20,
            const_str_plain_cert_reqs
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_20,
                const_str_plain_cert_reqs
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
        Py_DECREF( tmp_args_name_12 );
        Py_DECREF( tmp_tuple_element_20 );

        exception_lineno = 246;

        goto try_except_handler_20;
    }
    if ( outline_5_var_ca_certs != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_20,
            const_str_plain_ca_certs,
            outline_5_var_ca_certs
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_20,
            const_str_plain_ca_certs
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_20,
                const_str_plain_ca_certs
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
        Py_DECREF( tmp_args_name_12 );
        Py_DECREF( tmp_tuple_element_20 );

        exception_lineno = 246;

        goto try_except_handler_20;
    }
    if ( outline_5_var_ca_cert_dir != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_20,
            const_str_plain_ca_cert_dir,
            outline_5_var_ca_cert_dir
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_20,
            const_str_plain_ca_cert_dir
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_20,
                const_str_plain_ca_cert_dir
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
        Py_DECREF( tmp_args_name_12 );
        Py_DECREF( tmp_tuple_element_20 );

        exception_lineno = 246;

        goto try_except_handler_20;
    }
    if ( outline_5_var_ssl_version != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_20,
            const_str_plain_ssl_version,
            outline_5_var_ssl_version
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_20,
            const_str_plain_ssl_version
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_20,
                const_str_plain_ssl_version
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
        Py_DECREF( tmp_args_name_12 );
        Py_DECREF( tmp_tuple_element_20 );

        exception_lineno = 246;

        goto try_except_handler_20;
    }
    if ( outline_5_var_assert_fingerprint != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_20,
            const_str_plain_assert_fingerprint,
            outline_5_var_assert_fingerprint
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_20,
            const_str_plain_assert_fingerprint
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_20,
                const_str_plain_assert_fingerprint
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
        Py_DECREF( tmp_args_name_12 );
        Py_DECREF( tmp_tuple_element_20 );

        exception_lineno = 246;

        goto try_except_handler_20;
    }
    if ( outline_5_var_set_cert != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_20,
            const_str_plain_set_cert,
            outline_5_var_set_cert
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_20,
            const_str_plain_set_cert
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_20,
                const_str_plain_set_cert
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
        Py_DECREF( tmp_args_name_12 );
        Py_DECREF( tmp_tuple_element_20 );

        exception_lineno = 246;

        goto try_except_handler_20;
    }
    if ( outline_5_var_connect != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_20,
            const_str_plain_connect,
            outline_5_var_connect
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_20,
            const_str_plain_connect
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_20,
                const_str_plain_connect
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
        Py_DECREF( tmp_args_name_12 );
        Py_DECREF( tmp_tuple_element_20 );

        exception_lineno = 246;

        goto try_except_handler_20;
    }
    PyTuple_SET_ITEM( tmp_args_name_12, 2, tmp_tuple_element_20 );
    tmp_kw_name_12 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_12 );
    frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame.f_lineno = 246;
    tmp_assign_source_112 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_12, tmp_kw_name_12 );
    Py_DECREF( tmp_args_name_12 );
    if ( tmp_assign_source_112 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;

        goto try_except_handler_20;
    }
    assert( outline_5_var___class__ == NULL );
    outline_5_var___class__ = tmp_assign_source_112;

    tmp_outline_return_value_6 = outline_5_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_6 );
    Py_INCREF( tmp_outline_return_value_6 );
    goto try_return_handler_20;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_20:;
    CHECK_OBJECT( (PyObject *)outline_5_var___class__ );
    Py_DECREF( outline_5_var___class__ );
    outline_5_var___class__ = NULL;

    Py_XDECREF( outline_5_var___qualname__ );
    outline_5_var___qualname__ = NULL;

    Py_XDECREF( outline_5_var___module__ );
    outline_5_var___module__ = NULL;

    Py_XDECREF( outline_5_var___doc__ );
    outline_5_var___doc__ = NULL;

    Py_XDECREF( outline_5_var_cert_reqs );
    outline_5_var_cert_reqs = NULL;

    Py_XDECREF( outline_5_var_ca_certs );
    outline_5_var_ca_certs = NULL;

    Py_XDECREF( outline_5_var_ca_cert_dir );
    outline_5_var_ca_cert_dir = NULL;

    Py_XDECREF( outline_5_var_ssl_version );
    outline_5_var_ssl_version = NULL;

    Py_XDECREF( outline_5_var_assert_fingerprint );
    outline_5_var_assert_fingerprint = NULL;

    Py_XDECREF( outline_5_var_set_cert );
    outline_5_var_set_cert = NULL;

    Py_XDECREF( outline_5_var_connect );
    outline_5_var_connect = NULL;

    goto outline_result_6;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_5_var___qualname__ );
    outline_5_var___qualname__ = NULL;

    Py_XDECREF( outline_5_var___module__ );
    outline_5_var___module__ = NULL;

    Py_XDECREF( outline_5_var___doc__ );
    outline_5_var___doc__ = NULL;

    Py_XDECREF( outline_5_var_cert_reqs );
    outline_5_var_cert_reqs = NULL;

    Py_XDECREF( outline_5_var_ca_certs );
    outline_5_var_ca_certs = NULL;

    Py_XDECREF( outline_5_var_ca_cert_dir );
    outline_5_var_ca_cert_dir = NULL;

    Py_XDECREF( outline_5_var_ssl_version );
    outline_5_var_ssl_version = NULL;

    Py_XDECREF( outline_5_var_assert_fingerprint );
    outline_5_var_assert_fingerprint = NULL;

    Py_XDECREF( outline_5_var_set_cert );
    outline_5_var_set_cert = NULL;

    Py_XDECREF( outline_5_var_connect );
    outline_5_var_connect = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto outline_exception_6;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_6:;
    exception_lineno = 246;
    goto try_except_handler_19;
    outline_result_6:;
    tmp_assign_source_101 = tmp_outline_return_value_6;
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_VerifiedHTTPSConnection, tmp_assign_source_101 );
    goto try_end_14;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    Py_XDECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    tmp_assign_source_113 = MAKE_FUNCTION_urllib3$connection$$$function_10__match_hostname(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain__match_hostname, tmp_assign_source_113 );
    tmp_cond_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl );

    if (unlikely( tmp_cond_value_7 == NULL ))
    {
        tmp_cond_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
    }

    if ( tmp_cond_value_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ssl" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 368;

        goto frame_exception_exit_1;
    }

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;

        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_assign_source_114 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPSConnection );

    if (unlikely( tmp_assign_source_114 == NULL ))
    {
        tmp_assign_source_114 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPSConnection );
    }

    if ( tmp_assign_source_114 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPSConnection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 370;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_UnverifiedHTTPSConnection, tmp_assign_source_114 );
    tmp_assign_source_115 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_VerifiedHTTPSConnection );

    if (unlikely( tmp_assign_source_115 == NULL ))
    {
        tmp_assign_source_115 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VerifiedHTTPSConnection );
    }

    if ( tmp_assign_source_115 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "VerifiedHTTPSConnection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 371;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPSConnection, tmp_assign_source_115 );
    goto branch_end_9;
    branch_no_9:;
    tmp_assign_source_116 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_DummyConnection );

    if (unlikely( tmp_assign_source_116 == NULL ))
    {
        tmp_assign_source_116 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DummyConnection );
    }

    if ( tmp_assign_source_116 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DummyConnection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 373;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPSConnection, tmp_assign_source_116 );
    branch_end_9:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_a3315b004bdb768c8b24fdd09ad0f7e1 );
#endif
    popFrameStack();

    assertFrameObject( frame_a3315b004bdb768c8b24fdd09ad0f7e1 );

    goto frame_no_exception_3;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_a3315b004bdb768c8b24fdd09ad0f7e1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a3315b004bdb768c8b24fdd09ad0f7e1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a3315b004bdb768c8b24fdd09ad0f7e1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a3315b004bdb768c8b24fdd09ad0f7e1, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;

    return MOD_RETURN_VALUE( module_urllib3$connection );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
