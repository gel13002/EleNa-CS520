/* Generated code for Python source for module 'urllib3.poolmanager'
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

/* The _module_urllib3$poolmanager is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$poolmanager;
PyDictObject *moduledict_urllib3$poolmanager;

/* The module constants used, if any. */
extern PyObject *const_str_plain_headers;
static PyObject *const_str_plain_pool_key;
static PyObject *const_tuple_c53cff22b092b8d7532d73e3369484b7_tuple;
static PyObject *const_tuple_str_digest_901e90eee70586f15ff5cd8bfbf848b6_tuple;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_551bbe3f765f96b6cd00a79e122487ab_tuple;
extern PyObject *const_str_plain_request;
extern PyObject *const_str_plain_getLogger;
static PyObject *const_dict_3e5fe116b7b40d584f8f0df3fb9d55ce;
static PyObject *const_str_digest_eb89dd95343c4834c13975c4510db133;
static PyObject *const_str_plain__merge_pool_kwargs;
extern PyObject *const_str_plain_proxy_from_url;
static PyObject *const_str_plain_override;
extern PyObject *const_str_plain_proxy_url;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_LocationValueError;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_connection_pool_kw;
extern PyObject *const_str_plain_redirect_location;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_plain_exc_tb;
static PyObject *const_str_digest_b65382343add153bfe7a0e41b1f6dadd;
extern PyObject *const_str_plain_from_int;
extern PyObject *const_str_plain__proxy;
static PyObject *const_str_plain__new_pool;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain_num_pools;
extern PyObject *const_int_pos_80;
extern PyObject *const_str_plain_GET;
extern PyObject *const_str_plain_scheme;
static PyObject *const_str_digest_5cc25be09470e6d83192f743509a3e44;
extern PyObject *const_tuple_int_pos_10_none_tuple;
extern PyObject *const_str_plain_get_redirect_location;
static PyObject *const_tuple_0085cedc28a37ffab8d52a6bcc41bccd_tuple;
static PyObject *const_str_plain_headers_;
static PyObject *const_str_plain_key_fn_by_scheme;
extern PyObject *const_str_plain_assert_same_host;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d;
static PyObject *const_str_digest_8af5e725dd02cb9d6b081e0759f2b386;
static PyObject *const_tuple_ff3b4fc27b7f7cf07ef92f607b11a160_tuple;
static PyObject *const_str_digest_707a5a9b156f542056749b61f0d359c1;
extern PyObject *const_tuple_none_none_none_tuple;
static PyObject *const_str_digest_1552d535bdde2b752b496af3502874b7;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_tuple_57945d0bb5d77902f3c1b92860bc26a3_tuple;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_digest_5f62b442fbc7547d9ec4b7f4ffa4f085;
static PyObject *const_tuple_int_pos_10_none_none_tuple;
static PyObject *const_str_digest_9fbd1260836ddbad56854d8b9c0186c8;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_ssl_version;
extern PyObject *const_tuple_str_plain_Retry_tuple;
static PyObject *const_tuple_1f1c8b2e70a0da185a3f8e74b7f9c46d_tuple;
extern PyObject *const_str_plain_redirect;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_host;
extern PyObject *const_str_plain_status;
static PyObject *const_str_digest_6077c56a9bf23cde9bad19d172735047;
extern PyObject *const_str_plain_https;
extern PyObject *const_str_plain_parse_url;
static PyObject *const_str_plain_base_pool_kwargs;
extern PyObject *const_str_plain_proxy_headers;
extern PyObject *const_str_plain_p;
extern PyObject *const_tuple_str_plain_RequestMethods_tuple;
extern PyObject *const_str_digest_e68800bfc0da117494aca4ca9d48e152;
static PyObject *const_str_plain__set_proxy_headers;
extern PyObject *const_str_plain_value;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_digest_b63d90f3cfd130d49db0ff722bf44a6a;
static PyObject *const_str_digest_e5a07a0dc70d8af35bcd050243335215;
static PyObject *const_str_plain_key_class;
extern PyObject *const_str_digest_1edef47b55b65d108e2405bd6241f07f;
extern PyObject *const_str_plain_collections;
extern PyObject *const_str_plain_connection_from_url;
extern PyObject *const_str_plain_conn;
static PyObject *const_str_digest_c4d8d0af35cb6430f76f59b3d9c2397a;
static PyObject *const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple;
static PyObject *const_str_digest_a8258c43e85755a08fc604877b816c69;
extern PyObject *const_str_plain_netloc;
static PyObject *const_str_plain_pool_cls;
static PyObject *const_str_plain_socket_opts;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_ProxyManager;
extern PyObject *const_str_plain_context;
extern PyObject *const_str_plain_RecentlyUsedContainer;
static PyObject *const_str_digest_30b54feb3c940a6350ed755fb780fac0;
extern PyObject *const_str_plain_exc_type;
static PyObject *const_str_digest_fe600fcb68b91fafb7d8eee95d73cbfb;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_69168908e1e5c7a88a50867458762f21;
static PyObject *const_str_digest_df49728476f1c106520a9c1d8d838d08;
static PyObject *const_str_digest_41fd3afa98f245760a224549122eee16;
static PyObject *const_tuple_d809e6c1c02528295433eb5105003bd8_tuple;
static PyObject *const_tuple_f259b703b37c99fe3e92b91fabe3ae39_tuple;
static PyObject *const_str_plain_PoolKey;
extern PyObject *const_str_plain_ssl_context;
extern PyObject *const_str_plain_pool;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple;
extern PyObject *const_str_plain_retries;
extern PyObject *const_str_plain_exc_val;
extern PyObject *const_str_plain__socks_options;
extern PyObject *const_int_pos_10;
static PyObject *const_str_plain_connection_from_context;
static PyObject *const_str_digest_c693d3d582276b7b2edfad1a40061e7a;
extern PyObject *const_str_plain_proxy;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_tuple_str_digest_b63d90f3cfd130d49db0ff722bf44a6a_tuple;
static PyObject *const_tuple_7abf77e3e1e66a085af4a77af1d7ed95_tuple;
static PyObject *const_tuple_12025f98303f1eb57a598e7bc7f54179_tuple;
extern PyObject *const_str_plain_dispose_func;
static PyObject *const_tuple_920cb86ff1ba924c054bebc30bb82dc2_tuple;
extern PyObject *const_str_plain_cert_file;
extern PyObject *const_str_plain_Host;
static PyObject *const_str_digest_13408ef5640dc399fffe039ff946ada1;
static PyObject *const_list_8cc344de1d0e6b94d2846b0b3d67f4e3_list;
static PyObject *const_str_plain_pool_key_constructor;
static PyObject *const_str_plain__fields;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain__replace;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_urllib3;
extern PyObject *const_str_digest_901e90eee70586f15ff5cd8bfbf848b6;
static PyObject *const_str_plain__default_key_normalizer;
static PyObject *const_tuple_c5d721e05d6ef17f6d92babaeeca0e91_tuple;
extern PyObject *const_str_plain_HTTPSConnectionPool;
static PyObject *const_str_digest_a007fa63fdff14fb2c2e7bd41a045f21;
extern PyObject *const_str_plain_pop;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_response;
static PyObject *const_str_digest_505fec576d13a443afa582b42f7eb689;
extern PyObject *const_str_plain_connectionpool;
extern PyObject *const_str_plain_PoolManager;
extern PyObject *const_str_plain_urlopen;
static PyObject *const_tuple_str_plain_RecentlyUsedContainer_tuple;
static PyObject *const_str_digest_f02b70d6cf87b2d6dcb00916f7391e48;
static PyObject *const_str_digest_25eb4d20eeeb3591b633871959692d99;
extern PyObject *const_str_plain__proxy_headers;
static PyObject *const_tuple_a758d3e332005eb9c3fe225b1bc9610d_tuple;
extern PyObject *const_str_plain_Accept;
static PyObject *const_str_digest_3f3441160f61a71d44412f80bc2a80eb;
extern PyObject *const_str_plain_cert_reqs;
static PyObject *const_str_digest_fc6bc7d3ff39920b393c57bbb2c47096;
extern PyObject *const_str_plain_ca_cert_dir;
extern PyObject *const_str_plain_log;
extern PyObject *const_tuple_str_plain_HTTPConnectionPool_str_plain_HTTPSConnectionPool_tuple;
extern PyObject *const_str_plain_request_uri;
extern PyObject *const_str_plain_increment;
static PyObject *const_tuple_str_plain_scheme_str_plain_host_str_plain_port_tuple;
extern PyObject *const_str_plain_namedtuple;
extern PyObject *const_str_plain_lock;
static PyObject *const_str_digest_7656b16d642bbe814d26b601fd9549aa;
extern PyObject *const_str_angle_lambda;
static PyObject *const_str_digest_27aab67055f718697d7ee2aa049bc069;
extern PyObject *const_str_plain_pool_kwargs;
extern PyObject *const_str_plain_urljoin;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_tuple_str_plain_port_by_scheme_tuple;
static PyObject *const_str_digest_1445abaa24d4d64feabd13541f367d4c;
static PyObject *const_tuple_a855418c6a1bd615e00c41aa43309c56_tuple;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_207bd888d8d92daafa6abe19cac5a8f7;
static PyObject *const_tuple_str_plain_socket_options_tuple;
extern PyObject *const_str_plain_socket_options;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_functools;
extern PyObject *const_str_plain_ProxySchemeUnknown;
extern PyObject *const_str_plain_kw;
static PyObject *const_tuple_str_plain_retries_tuple;
static PyObject *const_tuple_str_plain_url_str_plain_kw_tuple;
extern PyObject *const_str_plain_update;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_partial;
extern PyObject *const_str_plain__collections;
static PyObject *const_str_plain_connection_from_pool_key;
extern PyObject *const_str_plain_port;
extern PyObject *const_str_plain_ca_certs;
static PyObject *const_tuple_none_str_plain_http_none_tuple;
static PyObject *const_str_digest_4464f0d3b4f3a9ab6e85c70a22b1e12e;
extern PyObject *const_str_plain_copy;
extern PyObject *const_int_pos_303;
static PyObject *const_tuple_7656c083a8a6b05672ed70cbe077e020_tuple;
extern PyObject *const_str_plain_field;
extern PyObject *const_str_plain_key;
static PyObject *const_tuple_str_plain_urljoin_tuple;
static PyObject *const_str_digest_d867a048a787bc50c8cc5e46f1c6583f;
extern PyObject *const_tuple_str_plain_parse_url_tuple;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_RequestMethods;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_clear;
extern PyObject *const_str_plain_key_file;
static PyObject *const_str_plain_request_context;
extern PyObject *const_str_plain_method;
static PyObject *const_str_plain_key_;
extern PyObject *const_str_plain_u;
extern PyObject *const_str_plain_HTTPConnectionPool;
static PyObject *const_str_plain_SSL_KEYWORDS;
extern PyObject *const_str_plain_get;
static PyObject *const_str_plain_connection_from_host;
extern PyObject *const_str_plain_MaxRetryError;
static PyObject *const_tuple_cfa7057e2ba3a6e05bcb9bd3b40fbe3e_tuple;
extern PyObject *const_str_plain__pool;
extern PyObject *const_str_digest_994b331706f7b8213e511b4daaa43bc4;
extern PyObject *const_str_plain_http;
static PyObject *const_str_plain_pools;
static PyObject *const_tuple_str_plain_http_str_plain_https_tuple;
static PyObject *const_str_plain__key_fields;
extern PyObject *const_str_plain_pool_classes_by_scheme;
extern PyObject *const_str_plain_Retry;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_info;
static PyObject *const_tuple_str_plain_p_tuple;
static PyObject *const_str_digest_2921ab8a3a55d26f8ca486a9b1c6e8ef;
extern PyObject *const_str_plain_raise_on_redirect;
static PyObject *const_str_digest_13018ed62f3da7cc2adaa4292e149ff3;
extern PyObject *const_str_plain_port_by_scheme;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_pool_key = UNSTREAM_STRING( &constant_bin[ 894439 ], 8, 1 );
    const_tuple_c53cff22b092b8d7532d73e3369484b7_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_c53cff22b092b8d7532d73e3369484b7_tuple, 0, const_str_plain_LocationValueError ); Py_INCREF( const_str_plain_LocationValueError );
    PyTuple_SET_ITEM( const_tuple_c53cff22b092b8d7532d73e3369484b7_tuple, 1, const_str_plain_MaxRetryError ); Py_INCREF( const_str_plain_MaxRetryError );
    PyTuple_SET_ITEM( const_tuple_c53cff22b092b8d7532d73e3369484b7_tuple, 2, const_str_plain_ProxySchemeUnknown ); Py_INCREF( const_str_plain_ProxySchemeUnknown );
    const_tuple_str_digest_901e90eee70586f15ff5cd8bfbf848b6_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_901e90eee70586f15ff5cd8bfbf848b6_tuple, 0, const_str_digest_901e90eee70586f15ff5cd8bfbf848b6 ); Py_INCREF( const_str_digest_901e90eee70586f15ff5cd8bfbf848b6 );
    const_tuple_551bbe3f765f96b6cd00a79e122487ab_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_551bbe3f765f96b6cd00a79e122487ab_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_551bbe3f765f96b6cd00a79e122487ab_tuple, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_551bbe3f765f96b6cd00a79e122487ab_tuple, 2, const_str_plain_pool_kwargs ); Py_INCREF( const_str_plain_pool_kwargs );
    PyTuple_SET_ITEM( const_tuple_551bbe3f765f96b6cd00a79e122487ab_tuple, 3, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    const_dict_3e5fe116b7b40d584f8f0df3fb9d55ce = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_3e5fe116b7b40d584f8f0df3fb9d55ce, const_str_plain_Accept, const_str_digest_994b331706f7b8213e511b4daaa43bc4 );
    assert( PyDict_Size( const_dict_3e5fe116b7b40d584f8f0df3fb9d55ce ) == 1 );
    const_str_digest_eb89dd95343c4834c13975c4510db133 = UNSTREAM_STRING( &constant_bin[ 894447 ], 397, 0 );
    const_str_plain__merge_pool_kwargs = UNSTREAM_STRING( &constant_bin[ 894844 ], 18, 1 );
    const_str_plain_override = UNSTREAM_STRING( &constant_bin[ 863669 ], 8, 1 );
    const_str_digest_b65382343add153bfe7a0e41b1f6dadd = UNSTREAM_STRING( &constant_bin[ 894862 ], 10, 0 );
    const_str_plain__new_pool = UNSTREAM_STRING( &constant_bin[ 894872 ], 9, 1 );
    const_str_digest_5cc25be09470e6d83192f743509a3e44 = UNSTREAM_STRING( &constant_bin[ 894881 ], 30, 0 );
    const_tuple_0085cedc28a37ffab8d52a6bcc41bccd_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_0085cedc28a37ffab8d52a6bcc41bccd_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0085cedc28a37ffab8d52a6bcc41bccd_tuple, 1, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    PyTuple_SET_ITEM( const_tuple_0085cedc28a37ffab8d52a6bcc41bccd_tuple, 2, const_str_plain_port ); Py_INCREF( const_str_plain_port );
    PyTuple_SET_ITEM( const_tuple_0085cedc28a37ffab8d52a6bcc41bccd_tuple, 3, const_str_plain_scheme ); Py_INCREF( const_str_plain_scheme );
    PyTuple_SET_ITEM( const_tuple_0085cedc28a37ffab8d52a6bcc41bccd_tuple, 4, const_str_plain_pool_kwargs ); Py_INCREF( const_str_plain_pool_kwargs );
    PyTuple_SET_ITEM( const_tuple_0085cedc28a37ffab8d52a6bcc41bccd_tuple, 5, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_plain_headers_ = UNSTREAM_STRING( &constant_bin[ 894911 ], 8, 1 );
    const_str_plain_key_fn_by_scheme = UNSTREAM_STRING( &constant_bin[ 894919 ], 16, 1 );
    const_str_digest_8af5e725dd02cb9d6b081e0759f2b386 = UNSTREAM_STRING( &constant_bin[ 894935 ], 470, 0 );
    const_tuple_ff3b4fc27b7f7cf07ef92f607b11a160_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_ff3b4fc27b7f7cf07ef92f607b11a160_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ff3b4fc27b7f7cf07ef92f607b11a160_tuple, 1, const_str_plain_num_pools ); Py_INCREF( const_str_plain_num_pools );
    PyTuple_SET_ITEM( const_tuple_ff3b4fc27b7f7cf07ef92f607b11a160_tuple, 2, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_ff3b4fc27b7f7cf07ef92f607b11a160_tuple, 3, const_str_plain_connection_pool_kw ); Py_INCREF( const_str_plain_connection_pool_kw );
    const_str_digest_707a5a9b156f542056749b61f0d359c1 = UNSTREAM_STRING( &constant_bin[ 895405 ], 28, 0 );
    const_str_digest_1552d535bdde2b752b496af3502874b7 = UNSTREAM_STRING( &constant_bin[ 895433 ], 64, 0 );
    const_tuple_57945d0bb5d77902f3c1b92860bc26a3_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_57945d0bb5d77902f3c1b92860bc26a3_tuple, 0, const_str_plain_key_file ); Py_INCREF( const_str_plain_key_file );
    PyTuple_SET_ITEM( const_tuple_57945d0bb5d77902f3c1b92860bc26a3_tuple, 1, const_str_plain_cert_file ); Py_INCREF( const_str_plain_cert_file );
    PyTuple_SET_ITEM( const_tuple_57945d0bb5d77902f3c1b92860bc26a3_tuple, 2, const_str_plain_cert_reqs ); Py_INCREF( const_str_plain_cert_reqs );
    PyTuple_SET_ITEM( const_tuple_57945d0bb5d77902f3c1b92860bc26a3_tuple, 3, const_str_plain_ca_certs ); Py_INCREF( const_str_plain_ca_certs );
    PyTuple_SET_ITEM( const_tuple_57945d0bb5d77902f3c1b92860bc26a3_tuple, 4, const_str_plain_ssl_version ); Py_INCREF( const_str_plain_ssl_version );
    PyTuple_SET_ITEM( const_tuple_57945d0bb5d77902f3c1b92860bc26a3_tuple, 5, const_str_plain_ca_cert_dir ); Py_INCREF( const_str_plain_ca_cert_dir );
    PyTuple_SET_ITEM( const_tuple_57945d0bb5d77902f3c1b92860bc26a3_tuple, 6, const_str_plain_ssl_context ); Py_INCREF( const_str_plain_ssl_context );
    const_tuple_int_pos_10_none_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_pos_10_none_none_tuple, 0, const_int_pos_10 ); Py_INCREF( const_int_pos_10 );
    PyTuple_SET_ITEM( const_tuple_int_pos_10_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_int_pos_10_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_str_digest_9fbd1260836ddbad56854d8b9c0186c8 = UNSTREAM_STRING( &constant_bin[ 895497 ], 21, 0 );
    const_tuple_1f1c8b2e70a0da185a3f8e74b7f9c46d_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 895518 ], 355 );
    const_str_digest_6077c56a9bf23cde9bad19d172735047 = UNSTREAM_STRING( &constant_bin[ 895873 ], 17, 0 );
    const_str_plain_base_pool_kwargs = UNSTREAM_STRING( &constant_bin[ 895890 ], 16, 1 );
    const_str_plain__set_proxy_headers = UNSTREAM_STRING( &constant_bin[ 895906 ], 18, 1 );
    const_str_digest_e5a07a0dc70d8af35bcd050243335215 = UNSTREAM_STRING( &constant_bin[ 895924 ], 35, 0 );
    const_str_plain_key_class = UNSTREAM_STRING( &constant_bin[ 895959 ], 9, 1 );
    const_str_digest_c4d8d0af35cb6430f76f59b3d9c2397a = UNSTREAM_STRING( &constant_bin[ 895968 ], 226, 0 );
    const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple, 1, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    PyTuple_SET_ITEM( const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple, 2, const_str_plain_port ); Py_INCREF( const_str_plain_port );
    PyTuple_SET_ITEM( const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple, 3, const_str_plain_scheme ); Py_INCREF( const_str_plain_scheme );
    PyTuple_SET_ITEM( const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple, 4, const_str_plain_pool_kwargs ); Py_INCREF( const_str_plain_pool_kwargs );
    const_str_plain_request_context = UNSTREAM_STRING( &constant_bin[ 896048 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple, 5, const_str_plain_request_context ); Py_INCREF( const_str_plain_request_context );
    const_str_digest_a8258c43e85755a08fc604877b816c69 = UNSTREAM_STRING( &constant_bin[ 896194 ], 251, 0 );
    const_str_plain_pool_cls = UNSTREAM_STRING( &constant_bin[ 896445 ], 8, 1 );
    const_str_plain_socket_opts = UNSTREAM_STRING( &constant_bin[ 896453 ], 11, 1 );
    const_str_digest_30b54feb3c940a6350ed755fb780fac0 = UNSTREAM_STRING( &constant_bin[ 896464 ], 19, 0 );
    const_str_digest_fe600fcb68b91fafb7d8eee95d73cbfb = UNSTREAM_STRING( &constant_bin[ 896483 ], 100, 0 );
    const_str_digest_69168908e1e5c7a88a50867458762f21 = UNSTREAM_STRING( &constant_bin[ 896583 ], 180, 0 );
    const_str_digest_df49728476f1c106520a9c1d8d838d08 = UNSTREAM_STRING( &constant_bin[ 896763 ], 36, 0 );
    const_str_digest_41fd3afa98f245760a224549122eee16 = UNSTREAM_STRING( &constant_bin[ 896799 ], 38, 0 );
    const_tuple_d809e6c1c02528295433eb5105003bd8_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_d809e6c1c02528295433eb5105003bd8_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d809e6c1c02528295433eb5105003bd8_tuple, 1, const_str_plain_scheme ); Py_INCREF( const_str_plain_scheme );
    PyTuple_SET_ITEM( const_tuple_d809e6c1c02528295433eb5105003bd8_tuple, 2, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    PyTuple_SET_ITEM( const_tuple_d809e6c1c02528295433eb5105003bd8_tuple, 3, const_str_plain_port ); Py_INCREF( const_str_plain_port );
    PyTuple_SET_ITEM( const_tuple_d809e6c1c02528295433eb5105003bd8_tuple, 4, const_str_plain_request_context ); Py_INCREF( const_str_plain_request_context );
    PyTuple_SET_ITEM( const_tuple_d809e6c1c02528295433eb5105003bd8_tuple, 5, const_str_plain_pool_cls ); Py_INCREF( const_str_plain_pool_cls );
    PyTuple_SET_ITEM( const_tuple_d809e6c1c02528295433eb5105003bd8_tuple, 6, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_d809e6c1c02528295433eb5105003bd8_tuple, 7, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    const_tuple_f259b703b37c99fe3e92b91fabe3ae39_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_f259b703b37c99fe3e92b91fabe3ae39_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_f259b703b37c99fe3e92b91fabe3ae39_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_f259b703b37c99fe3e92b91fabe3ae39_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_f259b703b37c99fe3e92b91fabe3ae39_tuple, 3, const_str_plain_redirect ); Py_INCREF( const_str_plain_redirect );
    PyTuple_SET_ITEM( const_tuple_f259b703b37c99fe3e92b91fabe3ae39_tuple, 4, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    PyTuple_SET_ITEM( const_tuple_f259b703b37c99fe3e92b91fabe3ae39_tuple, 5, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    PyTuple_SET_ITEM( const_tuple_f259b703b37c99fe3e92b91fabe3ae39_tuple, 6, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_f259b703b37c99fe3e92b91fabe3ae39_tuple, 7, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_plain_PoolKey = UNSTREAM_STRING( &constant_bin[ 896837 ], 7, 1 );
    const_str_plain_connection_from_context = UNSTREAM_STRING( &constant_bin[ 895936 ], 23, 1 );
    const_str_digest_c693d3d582276b7b2edfad1a40061e7a = UNSTREAM_STRING( &constant_bin[ 896799 ], 20, 0 );
    const_tuple_7abf77e3e1e66a085af4a77af1d7ed95_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_7abf77e3e1e66a085af4a77af1d7ed95_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_7abf77e3e1e66a085af4a77af1d7ed95_tuple, 1, const_str_plain_request_context ); Py_INCREF( const_str_plain_request_context );
    PyTuple_SET_ITEM( const_tuple_7abf77e3e1e66a085af4a77af1d7ed95_tuple, 2, const_str_plain_scheme ); Py_INCREF( const_str_plain_scheme );
    const_str_plain_pool_key_constructor = UNSTREAM_STRING( &constant_bin[ 896844 ], 20, 1 );
    PyTuple_SET_ITEM( const_tuple_7abf77e3e1e66a085af4a77af1d7ed95_tuple, 3, const_str_plain_pool_key_constructor ); Py_INCREF( const_str_plain_pool_key_constructor );
    PyTuple_SET_ITEM( const_tuple_7abf77e3e1e66a085af4a77af1d7ed95_tuple, 4, const_str_plain_pool_key ); Py_INCREF( const_str_plain_pool_key );
    const_tuple_12025f98303f1eb57a598e7bc7f54179_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_12025f98303f1eb57a598e7bc7f54179_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_12025f98303f1eb57a598e7bc7f54179_tuple, 1, const_str_plain_pool_key ); Py_INCREF( const_str_plain_pool_key );
    PyTuple_SET_ITEM( const_tuple_12025f98303f1eb57a598e7bc7f54179_tuple, 2, const_str_plain_request_context ); Py_INCREF( const_str_plain_request_context );
    PyTuple_SET_ITEM( const_tuple_12025f98303f1eb57a598e7bc7f54179_tuple, 3, const_str_plain_pool ); Py_INCREF( const_str_plain_pool );
    PyTuple_SET_ITEM( const_tuple_12025f98303f1eb57a598e7bc7f54179_tuple, 4, const_str_plain_scheme ); Py_INCREF( const_str_plain_scheme );
    PyTuple_SET_ITEM( const_tuple_12025f98303f1eb57a598e7bc7f54179_tuple, 5, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    PyTuple_SET_ITEM( const_tuple_12025f98303f1eb57a598e7bc7f54179_tuple, 6, const_str_plain_port ); Py_INCREF( const_str_plain_port );
    const_tuple_920cb86ff1ba924c054bebc30bb82dc2_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_920cb86ff1ba924c054bebc30bb82dc2_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_920cb86ff1ba924c054bebc30bb82dc2_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_920cb86ff1ba924c054bebc30bb82dc2_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_920cb86ff1ba924c054bebc30bb82dc2_tuple, 3, const_str_plain_redirect ); Py_INCREF( const_str_plain_redirect );
    PyTuple_SET_ITEM( const_tuple_920cb86ff1ba924c054bebc30bb82dc2_tuple, 4, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    PyTuple_SET_ITEM( const_tuple_920cb86ff1ba924c054bebc30bb82dc2_tuple, 5, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    PyTuple_SET_ITEM( const_tuple_920cb86ff1ba924c054bebc30bb82dc2_tuple, 6, const_str_plain_conn ); Py_INCREF( const_str_plain_conn );
    PyTuple_SET_ITEM( const_tuple_920cb86ff1ba924c054bebc30bb82dc2_tuple, 7, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_920cb86ff1ba924c054bebc30bb82dc2_tuple, 8, const_str_plain_redirect_location ); Py_INCREF( const_str_plain_redirect_location );
    PyTuple_SET_ITEM( const_tuple_920cb86ff1ba924c054bebc30bb82dc2_tuple, 9, const_str_plain_retries ); Py_INCREF( const_str_plain_retries );
    const_str_digest_13408ef5640dc399fffe039ff946ada1 = UNSTREAM_STRING( &constant_bin[ 896864 ], 21, 0 );
    const_list_8cc344de1d0e6b94d2846b0b3d67f4e3_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_8cc344de1d0e6b94d2846b0b3d67f4e3_list, 0, const_str_plain_PoolManager ); Py_INCREF( const_str_plain_PoolManager );
    PyList_SET_ITEM( const_list_8cc344de1d0e6b94d2846b0b3d67f4e3_list, 1, const_str_plain_ProxyManager ); Py_INCREF( const_str_plain_ProxyManager );
    PyList_SET_ITEM( const_list_8cc344de1d0e6b94d2846b0b3d67f4e3_list, 2, const_str_plain_proxy_from_url ); Py_INCREF( const_str_plain_proxy_from_url );
    const_str_plain__fields = UNSTREAM_STRING( &constant_bin[ 822186 ], 7, 1 );
    const_str_plain__default_key_normalizer = UNSTREAM_STRING( &constant_bin[ 896885 ], 23, 1 );
    const_tuple_c5d721e05d6ef17f6d92babaeeca0e91_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_c5d721e05d6ef17f6d92babaeeca0e91_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c5d721e05d6ef17f6d92babaeeca0e91_tuple, 1, const_str_plain_override ); Py_INCREF( const_str_plain_override );
    PyTuple_SET_ITEM( const_tuple_c5d721e05d6ef17f6d92babaeeca0e91_tuple, 2, const_str_plain_base_pool_kwargs ); Py_INCREF( const_str_plain_base_pool_kwargs );
    PyTuple_SET_ITEM( const_tuple_c5d721e05d6ef17f6d92babaeeca0e91_tuple, 3, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_c5d721e05d6ef17f6d92babaeeca0e91_tuple, 4, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_digest_a007fa63fdff14fb2c2e7bd41a045f21 = UNSTREAM_STRING( &constant_bin[ 896908 ], 31, 0 );
    const_str_digest_505fec576d13a443afa582b42f7eb689 = UNSTREAM_STRING( &constant_bin[ 896939 ], 804, 0 );
    const_tuple_str_plain_RecentlyUsedContainer_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_RecentlyUsedContainer_tuple, 0, const_str_plain_RecentlyUsedContainer ); Py_INCREF( const_str_plain_RecentlyUsedContainer );
    const_str_digest_f02b70d6cf87b2d6dcb00916f7391e48 = UNSTREAM_STRING( &constant_bin[ 897743 ], 33, 0 );
    const_str_digest_25eb4d20eeeb3591b633871959692d99 = UNSTREAM_STRING( &constant_bin[ 897776 ], 439, 0 );
    const_tuple_a758d3e332005eb9c3fe225b1bc9610d_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_a758d3e332005eb9c3fe225b1bc9610d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a758d3e332005eb9c3fe225b1bc9610d_tuple, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_a758d3e332005eb9c3fe225b1bc9610d_tuple, 2, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_a758d3e332005eb9c3fe225b1bc9610d_tuple, 3, const_str_plain_headers_ ); Py_INCREF( const_str_plain_headers_ );
    PyTuple_SET_ITEM( const_tuple_a758d3e332005eb9c3fe225b1bc9610d_tuple, 4, const_str_plain_netloc ); Py_INCREF( const_str_plain_netloc );
    const_str_digest_3f3441160f61a71d44412f80bc2a80eb = UNSTREAM_STRING( &constant_bin[ 898215 ], 887, 0 );
    const_str_digest_fc6bc7d3ff39920b393c57bbb2c47096 = UNSTREAM_STRING( &constant_bin[ 899102 ], 20, 0 );
    const_tuple_str_plain_scheme_str_plain_host_str_plain_port_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_scheme_str_plain_host_str_plain_port_tuple, 0, const_str_plain_scheme ); Py_INCREF( const_str_plain_scheme );
    PyTuple_SET_ITEM( const_tuple_str_plain_scheme_str_plain_host_str_plain_port_tuple, 1, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    PyTuple_SET_ITEM( const_tuple_str_plain_scheme_str_plain_host_str_plain_port_tuple, 2, const_str_plain_port ); Py_INCREF( const_str_plain_port );
    const_str_digest_7656b16d642bbe814d26b601fd9549aa = UNSTREAM_STRING( &constant_bin[ 899122 ], 144, 0 );
    const_str_digest_27aab67055f718697d7ee2aa049bc069 = UNSTREAM_STRING( &constant_bin[ 874041 ], 21, 0 );
    const_tuple_str_plain_port_by_scheme_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_port_by_scheme_tuple, 0, const_str_plain_port_by_scheme ); Py_INCREF( const_str_plain_port_by_scheme );
    const_str_digest_1445abaa24d4d64feabd13541f367d4c = UNSTREAM_STRING( &constant_bin[ 899266 ], 349, 0 );
    const_tuple_a855418c6a1bd615e00c41aa43309c56_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_a855418c6a1bd615e00c41aa43309c56_tuple, 0, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_a855418c6a1bd615e00c41aa43309c56_tuple, 1, const_str_plain__proxy_headers ); Py_INCREF( const_str_plain__proxy_headers );
    PyTuple_SET_ITEM( const_tuple_a855418c6a1bd615e00c41aa43309c56_tuple, 2, const_str_plain__socks_options ); Py_INCREF( const_str_plain__socks_options );
    const_str_digest_207bd888d8d92daafa6abe19cac5a8f7 = UNSTREAM_STRING( &constant_bin[ 899615 ], 31, 0 );
    const_tuple_str_plain_socket_options_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_socket_options_tuple, 0, const_str_plain_socket_options ); Py_INCREF( const_str_plain_socket_options );
    const_tuple_str_plain_retries_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_retries_tuple, 0, const_str_plain_retries ); Py_INCREF( const_str_plain_retries );
    const_tuple_str_plain_url_str_plain_kw_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_kw_tuple, 0, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_kw_tuple, 1, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    const_str_plain_connection_from_pool_key = UNSTREAM_STRING( &constant_bin[ 896775 ], 24, 1 );
    const_tuple_none_str_plain_http_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_str_plain_http_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_str_plain_http_none_tuple, 1, const_str_plain_http ); Py_INCREF( const_str_plain_http );
    PyTuple_SET_ITEM( const_tuple_none_str_plain_http_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_str_digest_4464f0d3b4f3a9ab6e85c70a22b1e12e = UNSTREAM_STRING( &constant_bin[ 899646 ], 279, 0 );
    const_tuple_7656c083a8a6b05672ed70cbe077e020_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_7656c083a8a6b05672ed70cbe077e020_tuple, 0, const_str_plain_key_class ); Py_INCREF( const_str_plain_key_class );
    PyTuple_SET_ITEM( const_tuple_7656c083a8a6b05672ed70cbe077e020_tuple, 1, const_str_plain_request_context ); Py_INCREF( const_str_plain_request_context );
    PyTuple_SET_ITEM( const_tuple_7656c083a8a6b05672ed70cbe077e020_tuple, 2, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    PyTuple_SET_ITEM( const_tuple_7656c083a8a6b05672ed70cbe077e020_tuple, 3, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_7656c083a8a6b05672ed70cbe077e020_tuple, 4, const_str_plain_socket_opts ); Py_INCREF( const_str_plain_socket_opts );
    PyTuple_SET_ITEM( const_tuple_7656c083a8a6b05672ed70cbe077e020_tuple, 5, const_str_plain_field ); Py_INCREF( const_str_plain_field );
    const_tuple_str_plain_urljoin_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_urljoin_tuple, 0, const_str_plain_urljoin ); Py_INCREF( const_str_plain_urljoin );
    const_str_digest_d867a048a787bc50c8cc5e46f1c6583f = UNSTREAM_STRING( &constant_bin[ 899925 ], 20, 0 );
    const_str_plain_key_ = UNSTREAM_STRING( &constant_bin[ 839026 ], 4, 1 );
    const_str_plain_SSL_KEYWORDS = UNSTREAM_STRING( &constant_bin[ 899945 ], 12, 1 );
    const_str_plain_connection_from_host = UNSTREAM_STRING( &constant_bin[ 897756 ], 20, 1 );
    const_tuple_cfa7057e2ba3a6e05bcb9bd3b40fbe3e_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_cfa7057e2ba3a6e05bcb9bd3b40fbe3e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_cfa7057e2ba3a6e05bcb9bd3b40fbe3e_tuple, 1, const_str_plain_proxy_url ); Py_INCREF( const_str_plain_proxy_url );
    PyTuple_SET_ITEM( const_tuple_cfa7057e2ba3a6e05bcb9bd3b40fbe3e_tuple, 2, const_str_plain_num_pools ); Py_INCREF( const_str_plain_num_pools );
    PyTuple_SET_ITEM( const_tuple_cfa7057e2ba3a6e05bcb9bd3b40fbe3e_tuple, 3, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_cfa7057e2ba3a6e05bcb9bd3b40fbe3e_tuple, 4, const_str_plain_proxy_headers ); Py_INCREF( const_str_plain_proxy_headers );
    PyTuple_SET_ITEM( const_tuple_cfa7057e2ba3a6e05bcb9bd3b40fbe3e_tuple, 5, const_str_plain_connection_pool_kw ); Py_INCREF( const_str_plain_connection_pool_kw );
    PyTuple_SET_ITEM( const_tuple_cfa7057e2ba3a6e05bcb9bd3b40fbe3e_tuple, 6, const_str_plain_proxy ); Py_INCREF( const_str_plain_proxy );
    PyTuple_SET_ITEM( const_tuple_cfa7057e2ba3a6e05bcb9bd3b40fbe3e_tuple, 7, const_str_plain_port ); Py_INCREF( const_str_plain_port );
    PyTuple_SET_ITEM( const_tuple_cfa7057e2ba3a6e05bcb9bd3b40fbe3e_tuple, 8, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_plain_pools = UNSTREAM_STRING( &constant_bin[ 790702 ], 5, 1 );
    const_tuple_str_plain_http_str_plain_https_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_http_str_plain_https_tuple, 0, const_str_plain_http ); Py_INCREF( const_str_plain_http );
    PyTuple_SET_ITEM( const_tuple_str_plain_http_str_plain_https_tuple, 1, const_str_plain_https ); Py_INCREF( const_str_plain_https );
    const_str_plain__key_fields = UNSTREAM_STRING( &constant_bin[ 899957 ], 11, 1 );
    const_tuple_str_plain_p_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_tuple, 0, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    const_str_digest_2921ab8a3a55d26f8ca486a9b1c6e8ef = UNSTREAM_STRING( &constant_bin[ 899968 ], 32, 0 );
    const_str_digest_13018ed62f3da7cc2adaa4292e149ff3 = UNSTREAM_STRING( &constant_bin[ 900000 ], 759, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$poolmanager( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_3d352b12587204be09d4a7591aaa59aa;
static PyCodeObject *codeobj_996ed43a98506bcce8dd420117477050;
static PyCodeObject *codeobj_7efab103d43f6b03a1a35773ad2637c1;
static PyCodeObject *codeobj_d5e7a739b319be72a283d330b6a4933b;
static PyCodeObject *codeobj_f4db1eec722960fdbe22437fcdfd10dc;
static PyCodeObject *codeobj_b9d0f02dbf286caa12d4ed8ff9ebca08;
static PyCodeObject *codeobj_c81a6af60fd0f30689bce6b7be4de74e;
static PyCodeObject *codeobj_e3453d11eedd6fa577f413b621c3b660;
static PyCodeObject *codeobj_0b9540d9d08385c8a2891c73a3d424c2;
static PyCodeObject *codeobj_ff4c3b4ee3836f59dbf3b6b6df51b64e;
static PyCodeObject *codeobj_4807ad014095c120eaf96ab5e7566066;
static PyCodeObject *codeobj_5bc6ef902ceb9ed83bafda5ddd72ab86;
static PyCodeObject *codeobj_6fe79e0c60848a6970a3fb5f3204ad2a;
static PyCodeObject *codeobj_ef35cdf6367df2c7364551c5a934f927;
static PyCodeObject *codeobj_8314de65c3dd67c65cde2f3f63b2f933;
static PyCodeObject *codeobj_812bd802095510ff145c148bfcb3694e;
static PyCodeObject *codeobj_fa32161c6fd3e2fb2dbe15bc74abfbb7;
static PyCodeObject *codeobj_6c9f965546a3a3ffcf8a3c965eafe16b;
static PyCodeObject *codeobj_901b2d76acc8184a03821ffaef862759;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_fe600fcb68b91fafb7d8eee95d73cbfb;
    codeobj_3d352b12587204be09d4a7591aaa59aa = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 155, const_tuple_str_plain_p_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_996ed43a98506bcce8dd420117477050 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_707a5a9b156f542056749b61f0d359c1, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_7efab103d43f6b03a1a35773ad2637c1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___enter__, 162, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d5e7a739b319be72a283d330b6a4933b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___exit__, 165, const_tuple_6e817ca9c0f5b8901da850442bb2575d_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f4db1eec722960fdbe22437fcdfd10dc = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 151, const_tuple_ff3b4fc27b7f7cf07ef92f607b11a160_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_b9d0f02dbf286caa12d4ed8ff9ebca08 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 379, const_tuple_cfa7057e2ba3a6e05bcb9bd3b40fbe3e_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS );
    codeobj_c81a6af60fd0f30689bce6b7be4de74e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__default_key_normalizer, 57, const_tuple_7656c083a8a6b05672ed70cbe077e020_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e3453d11eedd6fa577f413b621c3b660 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__merge_pool_kwargs, 281, const_tuple_c5d721e05d6ef17f6d92babaeeca0e91_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0b9540d9d08385c8a2891c73a3d424c2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__new_pool, 170, const_tuple_d809e6c1c02528295433eb5105003bd8_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ff4c3b4ee3836f59dbf3b6b6df51b64e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__set_proxy_headers, 410, const_tuple_a758d3e332005eb9c3fe225b1bc9610d_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4807ad014095c120eaf96ab5e7566066 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_clear, 197, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5bc6ef902ceb9ed83bafda5ddd72ab86 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_connection_from_context, 229, const_tuple_7abf77e3e1e66a085af4a77af1d7ed95_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6fe79e0c60848a6970a3fb5f3204ad2a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_connection_from_host, 206, const_tuple_f2954cb1ec4a9e9a93e63d117933d0b0_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ef35cdf6367df2c7364551c5a934f927 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_connection_from_host, 402, const_tuple_0085cedc28a37ffab8d52a6bcc41bccd_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_8314de65c3dd67c65cde2f3f63b2f933 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_connection_from_pool_key, 242, const_tuple_12025f98303f1eb57a598e7bc7f54179_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_812bd802095510ff145c148bfcb3694e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_connection_from_url, 266, const_tuple_551bbe3f765f96b6cd00a79e122487ab_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fa32161c6fd3e2fb2dbe15bc74abfbb7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_proxy_from_url, 439, const_tuple_str_plain_url_str_plain_kw_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_6c9f965546a3a3ffcf8a3c965eafe16b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_urlopen, 301, const_tuple_920cb86ff1ba924c054bebc30bb82dc2_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_901b2d76acc8184a03821ffaef862759 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_urlopen, 425, const_tuple_f259b703b37c99fe3e92b91fabe3ae39_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_7_complex_call_helper_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_pos_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_keywords_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_10_connection_from_url( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_11__merge_pool_kwargs(  );


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_12_urlopen( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_13___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_14_connection_from_host( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_15__set_proxy_headers( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_16_urlopen( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_17_proxy_from_url(  );


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_1__default_key_normalizer(  );


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_2___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_2___init__$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_3___enter__(  );


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_4___exit__(  );


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_5__new_pool( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_6_clear(  );


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_7_connection_from_host( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_8_connection_from_context(  );


static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_9_connection_from_pool_key( PyObject *defaults );


// The module function definitions.
static PyObject *impl_urllib3$poolmanager$$$function_1__default_key_normalizer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key_class = python_pars[ 0 ];
    PyObject *par_request_context = python_pars[ 1 ];
    PyObject *var_context = NULL;
    PyObject *var_key = NULL;
    PyObject *var_socket_opts = NULL;
    PyObject *var_field = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscribed_4;
    PyObject *tmp_ass_subscribed_5;
    PyObject *tmp_ass_subscribed_6;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subscript_4;
    PyObject *tmp_ass_subscript_5;
    PyObject *tmp_ass_subscript_6;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_ass_subvalue_4;
    PyObject *tmp_ass_subvalue_5;
    PyObject *tmp_ass_subvalue_6;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_name_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_frozenset_arg_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_left_name_1;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_tuple_arg_1;
    static struct Nuitka_FrameObject *cache_frame_c81a6af60fd0f30689bce6b7be4de74e = NULL;

    struct Nuitka_FrameObject *frame_c81a6af60fd0f30689bce6b7be4de74e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c81a6af60fd0f30689bce6b7be4de74e, codeobj_c81a6af60fd0f30689bce6b7be4de74e, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c81a6af60fd0f30689bce6b7be4de74e = cache_frame_c81a6af60fd0f30689bce6b7be4de74e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c81a6af60fd0f30689bce6b7be4de74e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c81a6af60fd0f30689bce6b7be4de74e ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_request_context;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_c81a6af60fd0f30689bce6b7be4de74e->m_frame.f_lineno = 78;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_context == NULL );
    var_context = tmp_assign_source_1;

    tmp_subscribed_name_1 = var_context;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_str_plain_scheme;
    tmp_called_instance_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_c81a6af60fd0f30689bce6b7be4de74e->m_frame.f_lineno = 79;
    tmp_ass_subvalue_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_lower );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = var_context;

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_plain_scheme;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = var_context;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = const_str_plain_host;
    tmp_called_instance_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_c81a6af60fd0f30689bce6b7be4de74e->m_frame.f_lineno = 80;
    tmp_ass_subvalue_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_lower );
    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_2 = var_context;

    if ( tmp_ass_subscribed_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = const_str_plain_host;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = const_tuple_a855418c6a1bd615e00c41aa43309c56_tuple;
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    assert( tmp_assign_source_2 != NULL );
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            exception_lineno = 83;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_assign_source_4 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_4 );
    {
        PyObject *old = var_key;
        var_key = tmp_assign_source_4;
        Py_INCREF( var_key );
        Py_XDECREF( old );
    }

    tmp_compexpr_left_1 = var_key;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = var_context;

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_and_left_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
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
    tmp_subscribed_name_3 = var_context;

    if ( tmp_subscribed_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_3 = var_key;

    if ( tmp_subscript_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_compexpr_right_2 = Py_None;
    tmp_and_right_value_1 = BOOL_FROM( tmp_compexpr_left_2 != tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    assert( !(tmp_cond_truth_1 == -1) );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_subscribed_name_4 = var_context;

    if ( tmp_subscribed_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_4 = var_key;

    if ( tmp_subscript_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_called_instance_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    frame_c81a6af60fd0f30689bce6b7be4de74e->m_frame.f_lineno = 85;
    tmp_frozenset_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_items );
    Py_DECREF( tmp_called_instance_4 );
    if ( tmp_frozenset_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_ass_subvalue_3 = PyFrozenSet_New( tmp_frozenset_arg_1 );
    Py_DECREF( tmp_frozenset_arg_1 );
    if ( tmp_ass_subvalue_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_ass_subscribed_3 = var_context;

    if ( tmp_ass_subscribed_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_ass_subscript_3 = var_key;

    if ( tmp_ass_subscript_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
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

    tmp_called_instance_5 = var_context;

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_c81a6af60fd0f30689bce6b7be4de74e->m_frame.f_lineno = 89;
    tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_socket_options_tuple, 0 ) );

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_socket_opts == NULL );
    var_socket_opts = tmp_assign_source_5;

    tmp_compare_left_1 = var_socket_opts;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_tuple_arg_1 = var_socket_opts;

    if ( tmp_tuple_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "socket_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subvalue_4 = PySequence_Tuple( tmp_tuple_arg_1 );
    if ( tmp_ass_subvalue_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_4 = var_context;

    if ( tmp_ass_subscribed_4 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_4 = const_str_plain_socket_options;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    Py_DECREF( tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    tmp_called_instance_6 = var_context;

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_c81a6af60fd0f30689bce6b7be4de74e->m_frame.f_lineno = 95;
    tmp_list_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_keys );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_2 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_6;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            exception_lineno = 95;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_8 );
    {
        PyObject *old = var_key;
        var_key = tmp_assign_source_8;
        Py_INCREF( var_key );
        Py_XDECREF( old );
    }

    tmp_source_name_1 = var_context;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pop );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    tmp_args_element_name_1 = var_key;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }

    frame_c81a6af60fd0f30689bce6b7be4de74e->m_frame.f_lineno = 96;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_ass_subvalue_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_ass_subvalue_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    tmp_ass_subscribed_5 = var_context;

    if ( tmp_ass_subscribed_5 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }

    tmp_left_name_1 = const_str_plain_key_;
    tmp_right_name_1 = var_key;

    if ( tmp_right_name_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }

    tmp_ass_subscript_5 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_ass_subscript_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_5 );

        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
    Py_DECREF( tmp_ass_subscript_5 );
    Py_DECREF( tmp_ass_subvalue_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_source_name_2 = par_key_class;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key_class" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__fields );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_3__for_iterator == NULL );
    tmp_for_loop_3__for_iterator = tmp_assign_source_9;

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator;

    CHECK_OBJECT( tmp_next_source_3 );
    tmp_assign_source_10 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            exception_lineno = 99;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_3__iter_value;
        tmp_for_loop_3__iter_value = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_assign_source_11 = tmp_for_loop_3__iter_value;

    CHECK_OBJECT( tmp_assign_source_11 );
    {
        PyObject *old = var_field;
        var_field = tmp_assign_source_11;
        Py_INCREF( var_field );
        Py_XDECREF( old );
    }

    tmp_compare_left_2 = var_field;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = var_context;

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_ass_subvalue_6 = Py_None;
    tmp_ass_subscribed_6 = var_context;

    if ( tmp_ass_subscribed_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }

    tmp_ass_subscript_6 = var_field;

    if ( tmp_ass_subscript_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "field" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    branch_no_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_3;
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

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    tmp_dircall_arg1_1 = par_key_class;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key_class" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = var_context;

    if ( tmp_dircall_arg2_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
        tmp_return_value = impl___internal__$$$function_7_complex_call_helper_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c81a6af60fd0f30689bce6b7be4de74e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c81a6af60fd0f30689bce6b7be4de74e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c81a6af60fd0f30689bce6b7be4de74e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c81a6af60fd0f30689bce6b7be4de74e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c81a6af60fd0f30689bce6b7be4de74e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c81a6af60fd0f30689bce6b7be4de74e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c81a6af60fd0f30689bce6b7be4de74e,
        type_description_1,
        par_key_class,
        par_request_context,
        var_context,
        var_key,
        var_socket_opts,
        var_field
    );


    // Release cached frame.
    if ( frame_c81a6af60fd0f30689bce6b7be4de74e == cache_frame_c81a6af60fd0f30689bce6b7be4de74e )
    {
        Py_DECREF( frame_c81a6af60fd0f30689bce6b7be4de74e );
    }
    cache_frame_c81a6af60fd0f30689bce6b7be4de74e = NULL;

    assertFrameObject( frame_c81a6af60fd0f30689bce6b7be4de74e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_1__default_key_normalizer );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_key_class );
    par_key_class = NULL;

    Py_XDECREF( par_request_context );
    par_request_context = NULL;

    Py_XDECREF( var_context );
    var_context = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_socket_opts );
    var_socket_opts = NULL;

    Py_XDECREF( var_field );
    var_field = NULL;

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

    Py_XDECREF( par_key_class );
    par_key_class = NULL;

    Py_XDECREF( par_request_context );
    par_request_context = NULL;

    Py_XDECREF( var_context );
    var_context = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_socket_opts );
    var_socket_opts = NULL;

    Py_XDECREF( var_field );
    var_field = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_1__default_key_normalizer );
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


static PyObject *impl_urllib3$poolmanager$$$function_2___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_num_pools = python_pars[ 1 ];
    PyObject *par_headers = python_pars[ 2 ];
    PyObject *par_connection_pool_kw = python_pars[ 3 ];
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f4db1eec722960fdbe22437fcdfd10dc = NULL;

    struct Nuitka_FrameObject *frame_f4db1eec722960fdbe22437fcdfd10dc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f4db1eec722960fdbe22437fcdfd10dc, codeobj_f4db1eec722960fdbe22437fcdfd10dc, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f4db1eec722960fdbe22437fcdfd10dc = cache_frame_f4db1eec722960fdbe22437fcdfd10dc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f4db1eec722960fdbe22437fcdfd10dc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f4db1eec722960fdbe22437fcdfd10dc ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_RequestMethods );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestMethods );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestMethods" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 152;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 152;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_headers;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 152;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_f4db1eec722960fdbe22437fcdfd10dc->m_frame.f_lineno = 152;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = par_connection_pool_kw;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connection_pool_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;
        type_description_1 = "oooo";
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

        exception_lineno = 153;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_connection_pool_kw, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_RecentlyUsedContainer );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RecentlyUsedContainer );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RecentlyUsedContainer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_num_pools;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "num_pools" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_dispose_func;
    tmp_dict_value_1 = MAKE_FUNCTION_urllib3$poolmanager$$$function_2___init__$$$function_1_lambda(  );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_f4db1eec722960fdbe22437fcdfd10dc->m_frame.f_lineno = 154;
    tmp_assattr_name_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
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

        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_pools, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_assattr_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_pool_classes_by_scheme );

    if (unlikely( tmp_assattr_name_3 == NULL ))
    {
        tmp_assattr_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pool_classes_by_scheme );
    }

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pool_classes_by_scheme" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        type_description_1 = "oooo";
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

        exception_lineno = 159;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_pool_classes_by_scheme, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_key_fn_by_scheme );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_key_fn_by_scheme );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "key_fn_by_scheme" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_f4db1eec722960fdbe22437fcdfd10dc->m_frame.f_lineno = 160;
    tmp_assattr_name_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_4 = par_self;

    if ( tmp_assattr_target_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_key_fn_by_scheme, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 160;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f4db1eec722960fdbe22437fcdfd10dc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f4db1eec722960fdbe22437fcdfd10dc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f4db1eec722960fdbe22437fcdfd10dc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f4db1eec722960fdbe22437fcdfd10dc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f4db1eec722960fdbe22437fcdfd10dc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f4db1eec722960fdbe22437fcdfd10dc,
        type_description_1,
        par_self,
        par_num_pools,
        par_headers,
        par_connection_pool_kw
    );


    // Release cached frame.
    if ( frame_f4db1eec722960fdbe22437fcdfd10dc == cache_frame_f4db1eec722960fdbe22437fcdfd10dc )
    {
        Py_DECREF( frame_f4db1eec722960fdbe22437fcdfd10dc );
    }
    cache_frame_f4db1eec722960fdbe22437fcdfd10dc = NULL;

    assertFrameObject( frame_f4db1eec722960fdbe22437fcdfd10dc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_2___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_num_pools );
    par_num_pools = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( par_connection_pool_kw );
    par_connection_pool_kw = NULL;

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

    Py_XDECREF( par_num_pools );
    par_num_pools = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( par_connection_pool_kw );
    par_connection_pool_kw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_2___init__ );
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


static PyObject *impl_urllib3$poolmanager$$$function_2___init__$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_p = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_3d352b12587204be09d4a7591aaa59aa = NULL;

    struct Nuitka_FrameObject *frame_3d352b12587204be09d4a7591aaa59aa;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3d352b12587204be09d4a7591aaa59aa, codeobj_3d352b12587204be09d4a7591aaa59aa, module_urllib3$poolmanager, sizeof(void *) );
    frame_3d352b12587204be09d4a7591aaa59aa = cache_frame_3d352b12587204be09d4a7591aaa59aa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3d352b12587204be09d4a7591aaa59aa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3d352b12587204be09d4a7591aaa59aa ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_p;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_3d352b12587204be09d4a7591aaa59aa->m_frame.f_lineno = 155;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d352b12587204be09d4a7591aaa59aa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d352b12587204be09d4a7591aaa59aa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d352b12587204be09d4a7591aaa59aa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3d352b12587204be09d4a7591aaa59aa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3d352b12587204be09d4a7591aaa59aa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3d352b12587204be09d4a7591aaa59aa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3d352b12587204be09d4a7591aaa59aa,
        type_description_1,
        par_p
    );


    // Release cached frame.
    if ( frame_3d352b12587204be09d4a7591aaa59aa == cache_frame_3d352b12587204be09d4a7591aaa59aa )
    {
        Py_DECREF( frame_3d352b12587204be09d4a7591aaa59aa );
    }
    cache_frame_3d352b12587204be09d4a7591aaa59aa = NULL;

    assertFrameObject( frame_3d352b12587204be09d4a7591aaa59aa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_2___init__$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_p );
    par_p = NULL;

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

    Py_XDECREF( par_p );
    par_p = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_2___init__$$$function_1_lambda );
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


static PyObject *impl_urllib3$poolmanager$$$function_3___enter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = par_self;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_3___enter__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_3___enter__ );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_urllib3$poolmanager$$$function_4___exit__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_exc_type = python_pars[ 1 ];
    PyObject *par_exc_val = python_pars[ 2 ];
    PyObject *par_exc_tb = python_pars[ 3 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d5e7a739b319be72a283d330b6a4933b = NULL;

    struct Nuitka_FrameObject *frame_d5e7a739b319be72a283d330b6a4933b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d5e7a739b319be72a283d330b6a4933b, codeobj_d5e7a739b319be72a283d330b6a4933b, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d5e7a739b319be72a283d330b6a4933b = cache_frame_d5e7a739b319be72a283d330b6a4933b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d5e7a739b319be72a283d330b6a4933b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d5e7a739b319be72a283d330b6a4933b ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_d5e7a739b319be72a283d330b6a4933b->m_frame.f_lineno = 166;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_clear );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d5e7a739b319be72a283d330b6a4933b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d5e7a739b319be72a283d330b6a4933b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d5e7a739b319be72a283d330b6a4933b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d5e7a739b319be72a283d330b6a4933b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d5e7a739b319be72a283d330b6a4933b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d5e7a739b319be72a283d330b6a4933b,
        type_description_1,
        par_self,
        par_exc_type,
        par_exc_val,
        par_exc_tb
    );


    // Release cached frame.
    if ( frame_d5e7a739b319be72a283d330b6a4933b == cache_frame_d5e7a739b319be72a283d330b6a4933b )
    {
        Py_DECREF( frame_d5e7a739b319be72a283d330b6a4933b );
    }
    cache_frame_d5e7a739b319be72a283d330b6a4933b = NULL;

    assertFrameObject( frame_d5e7a739b319be72a283d330b6a4933b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_4___exit__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_exc_type );
    par_exc_type = NULL;

    Py_XDECREF( par_exc_val );
    par_exc_val = NULL;

    Py_XDECREF( par_exc_tb );
    par_exc_tb = NULL;

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

    Py_XDECREF( par_exc_type );
    par_exc_type = NULL;

    Py_XDECREF( par_exc_val );
    par_exc_val = NULL;

    Py_XDECREF( par_exc_tb );
    par_exc_tb = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_4___exit__ );
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


static PyObject *impl_urllib3$poolmanager$$$function_5__new_pool( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_scheme = python_pars[ 1 ];
    PyObject *par_host = python_pars[ 2 ];
    PyObject *par_port = python_pars[ 3 ];
    PyObject *par_request_context = python_pars[ 4 ];
    PyObject *var_pool_cls = NULL;
    PyObject *var_key = NULL;
    PyObject *var_kw = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0b9540d9d08385c8a2891c73a3d424c2 = NULL;

    struct Nuitka_FrameObject *frame_0b9540d9d08385c8a2891c73a3d424c2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0b9540d9d08385c8a2891c73a3d424c2, codeobj_0b9540d9d08385c8a2891c73a3d424c2, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0b9540d9d08385c8a2891c73a3d424c2 = cache_frame_0b9540d9d08385c8a2891c73a3d424c2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0b9540d9d08385c8a2891c73a3d424c2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0b9540d9d08385c8a2891c73a3d424c2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pool_classes_by_scheme );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = par_scheme;

    if ( tmp_subscript_name_1 == NULL )
    {
        Py_DECREF( tmp_subscribed_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scheme" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_pool_cls == NULL );
    var_pool_cls = tmp_assign_source_1;

    tmp_compare_left_1 = par_request_context;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;
        type_description_1 = "oooooooo";
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
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_connection_pool_kw );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_0b9540d9d08385c8a2891c73a3d424c2->m_frame.f_lineno = 182;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_request_context;
        par_request_context = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_iter_arg_1 = const_tuple_str_plain_scheme_str_plain_host_str_plain_port_tuple;
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    assert( tmp_assign_source_3 != NULL );
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
            type_description_1 = "oooooooo";
            exception_lineno = 188;
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
        PyObject *old = var_key;
        var_key = tmp_assign_source_5;
        Py_INCREF( var_key );
        Py_XDECREF( old );
    }

    tmp_source_name_3 = par_request_context;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_pop );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = var_key;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = Py_None;
    frame_0b9540d9d08385c8a2891c73a3d424c2->m_frame.f_lineno = 189;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "oooooooo";
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

    tmp_compare_left_2 = par_scheme;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scheme" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_str_plain_http;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_iter_arg_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_SSL_KEYWORDS );

    if (unlikely( tmp_iter_arg_2 == NULL ))
    {
        tmp_iter_arg_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSL_KEYWORDS );
    }

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSL_KEYWORDS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_6;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooo";
            exception_lineno = 192;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_8 );
    {
        PyObject *old = var_kw;
        var_kw = tmp_assign_source_8;
        Py_INCREF( var_kw );
        Py_XDECREF( old );
    }

    tmp_source_name_4 = par_request_context;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 193;
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_pop );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
    }
    tmp_args_element_name_3 = var_kw;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 193;
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
    }

    tmp_args_element_name_4 = Py_None;
    frame_0b9540d9d08385c8a2891c73a3d424c2->m_frame.f_lineno = 193;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    branch_no_2:;
    tmp_dircall_arg1_1 = var_pool_cls;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pool_cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_host;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "host" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_port;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "port" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = par_request_context;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        type_description_1 = "oooooooo";
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


        exception_lineno = 195;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b9540d9d08385c8a2891c73a3d424c2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b9540d9d08385c8a2891c73a3d424c2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b9540d9d08385c8a2891c73a3d424c2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0b9540d9d08385c8a2891c73a3d424c2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0b9540d9d08385c8a2891c73a3d424c2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0b9540d9d08385c8a2891c73a3d424c2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0b9540d9d08385c8a2891c73a3d424c2,
        type_description_1,
        par_self,
        par_scheme,
        par_host,
        par_port,
        par_request_context,
        var_pool_cls,
        var_key,
        var_kw
    );


    // Release cached frame.
    if ( frame_0b9540d9d08385c8a2891c73a3d424c2 == cache_frame_0b9540d9d08385c8a2891c73a3d424c2 )
    {
        Py_DECREF( frame_0b9540d9d08385c8a2891c73a3d424c2 );
    }
    cache_frame_0b9540d9d08385c8a2891c73a3d424c2 = NULL;

    assertFrameObject( frame_0b9540d9d08385c8a2891c73a3d424c2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_5__new_pool );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_scheme );
    par_scheme = NULL;

    Py_XDECREF( par_host );
    par_host = NULL;

    Py_XDECREF( par_port );
    par_port = NULL;

    Py_XDECREF( par_request_context );
    par_request_context = NULL;

    Py_XDECREF( var_pool_cls );
    var_pool_cls = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_kw );
    var_kw = NULL;

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

    Py_XDECREF( par_scheme );
    par_scheme = NULL;

    Py_XDECREF( par_host );
    par_host = NULL;

    Py_XDECREF( par_port );
    par_port = NULL;

    Py_XDECREF( par_request_context );
    par_request_context = NULL;

    Py_XDECREF( var_pool_cls );
    var_pool_cls = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_kw );
    var_kw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_5__new_pool );
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


static PyObject *impl_urllib3$poolmanager$$$function_6_clear( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4807ad014095c120eaf96ab5e7566066 = NULL;

    struct Nuitka_FrameObject *frame_4807ad014095c120eaf96ab5e7566066;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4807ad014095c120eaf96ab5e7566066, codeobj_4807ad014095c120eaf96ab5e7566066, module_urllib3$poolmanager, sizeof(void *) );
    frame_4807ad014095c120eaf96ab5e7566066 = cache_frame_4807ad014095c120eaf96ab5e7566066;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4807ad014095c120eaf96ab5e7566066 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4807ad014095c120eaf96ab5e7566066 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pools );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_4807ad014095c120eaf96ab5e7566066->m_frame.f_lineno = 204;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_clear );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4807ad014095c120eaf96ab5e7566066 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4807ad014095c120eaf96ab5e7566066 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4807ad014095c120eaf96ab5e7566066, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4807ad014095c120eaf96ab5e7566066->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4807ad014095c120eaf96ab5e7566066, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4807ad014095c120eaf96ab5e7566066,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_4807ad014095c120eaf96ab5e7566066 == cache_frame_4807ad014095c120eaf96ab5e7566066 )
    {
        Py_DECREF( frame_4807ad014095c120eaf96ab5e7566066 );
    }
    cache_frame_4807ad014095c120eaf96ab5e7566066 = NULL;

    assertFrameObject( frame_4807ad014095c120eaf96ab5e7566066 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_6_clear );
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
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_6_clear );
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


static PyObject *impl_urllib3$poolmanager$$$function_7_connection_from_host( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_host = python_pars[ 1 ];
    PyObject *par_port = python_pars[ 2 ];
    PyObject *par_scheme = python_pars[ 3 ];
    PyObject *par_pool_kwargs = python_pars[ 4 ];
    PyObject *var_request_context = NULL;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_6fe79e0c60848a6970a3fb5f3204ad2a = NULL;

    struct Nuitka_FrameObject *frame_6fe79e0c60848a6970a3fb5f3204ad2a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6fe79e0c60848a6970a3fb5f3204ad2a, codeobj_6fe79e0c60848a6970a3fb5f3204ad2a, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6fe79e0c60848a6970a3fb5f3204ad2a = cache_frame_6fe79e0c60848a6970a3fb5f3204ad2a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6fe79e0c60848a6970a3fb5f3204ad2a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6fe79e0c60848a6970a3fb5f3204ad2a ) == 2 ); // Frame stack

    // Framed code:
    tmp_cond_value_1 = par_host;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description_1 = "oooooo";
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_LocationValueError );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LocationValueError );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LocationValueError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_6fe79e0c60848a6970a3fb5f3204ad2a->m_frame.f_lineno = 218;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_b63d90f3cfd130d49db0ff722bf44a6a_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 218;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 220;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__merge_pool_kwargs );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_pool_kwargs;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pool_kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 220;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_6fe79e0c60848a6970a3fb5f3204ad2a->m_frame.f_lineno = 220;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_request_context == NULL );
    var_request_context = tmp_assign_source_1;

    tmp_or_left_value_1 = par_scheme;

    if ( tmp_or_left_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scheme" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 221;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
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
    tmp_or_right_value_1 = const_str_plain_http;
    tmp_ass_subvalue_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_ass_subvalue_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_ass_subscribed_1 = var_request_context;

    CHECK_OBJECT( tmp_ass_subscribed_1 );
    tmp_ass_subscript_1 = const_str_plain_scheme;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = par_port;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "port" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 222;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_port_by_scheme );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_port_by_scheme );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "port_by_scheme" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 223;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_1 = var_request_context;

    if ( tmp_subscribed_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 223;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_str_plain_scheme;
    tmp_called_instance_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 223;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_6fe79e0c60848a6970a3fb5f3204ad2a->m_frame.f_lineno = 223;
    tmp_args_element_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 223;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_int_pos_80;
    frame_6fe79e0c60848a6970a3fb5f3204ad2a->m_frame.f_lineno = 223;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_port;
        par_port = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_ass_subvalue_2 = par_port;

    if ( tmp_ass_subvalue_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "port" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_2 = var_request_context;

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = const_str_plain_port;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_3 = par_host;

    if ( tmp_ass_subvalue_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "host" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 225;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_3 = var_request_context;

    if ( tmp_ass_subscribed_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 225;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_3 = const_str_plain_host;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 227;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_connection_from_context );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_request_context;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 227;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_6fe79e0c60848a6970a3fb5f3204ad2a->m_frame.f_lineno = 227;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6fe79e0c60848a6970a3fb5f3204ad2a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6fe79e0c60848a6970a3fb5f3204ad2a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6fe79e0c60848a6970a3fb5f3204ad2a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6fe79e0c60848a6970a3fb5f3204ad2a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6fe79e0c60848a6970a3fb5f3204ad2a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6fe79e0c60848a6970a3fb5f3204ad2a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6fe79e0c60848a6970a3fb5f3204ad2a,
        type_description_1,
        par_self,
        par_host,
        par_port,
        par_scheme,
        par_pool_kwargs,
        var_request_context
    );


    // Release cached frame.
    if ( frame_6fe79e0c60848a6970a3fb5f3204ad2a == cache_frame_6fe79e0c60848a6970a3fb5f3204ad2a )
    {
        Py_DECREF( frame_6fe79e0c60848a6970a3fb5f3204ad2a );
    }
    cache_frame_6fe79e0c60848a6970a3fb5f3204ad2a = NULL;

    assertFrameObject( frame_6fe79e0c60848a6970a3fb5f3204ad2a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_7_connection_from_host );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_host );
    par_host = NULL;

    Py_XDECREF( par_port );
    par_port = NULL;

    Py_XDECREF( par_scheme );
    par_scheme = NULL;

    Py_XDECREF( par_pool_kwargs );
    par_pool_kwargs = NULL;

    Py_XDECREF( var_request_context );
    var_request_context = NULL;

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

    Py_XDECREF( par_scheme );
    par_scheme = NULL;

    Py_XDECREF( par_pool_kwargs );
    par_pool_kwargs = NULL;

    Py_XDECREF( var_request_context );
    var_request_context = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_7_connection_from_host );
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


static PyObject *impl_urllib3$poolmanager$$$function_8_connection_from_context( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request_context = python_pars[ 1 ];
    PyObject *var_scheme = NULL;
    PyObject *var_pool_key_constructor = NULL;
    PyObject *var_pool_key = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_5bc6ef902ceb9ed83bafda5ddd72ab86 = NULL;

    struct Nuitka_FrameObject *frame_5bc6ef902ceb9ed83bafda5ddd72ab86;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5bc6ef902ceb9ed83bafda5ddd72ab86, codeobj_5bc6ef902ceb9ed83bafda5ddd72ab86, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5bc6ef902ceb9ed83bafda5ddd72ab86 = cache_frame_5bc6ef902ceb9ed83bafda5ddd72ab86;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5bc6ef902ceb9ed83bafda5ddd72ab86 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5bc6ef902ceb9ed83bafda5ddd72ab86 ) == 2 ); // Frame stack

    // Framed code:
    tmp_subscribed_name_1 = par_request_context;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_str_plain_scheme;
    tmp_called_instance_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_5bc6ef902ceb9ed83bafda5ddd72ab86->m_frame.f_lineno = 236;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_scheme == NULL );
    var_scheme = tmp_assign_source_1;

    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 237;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_key_fn_by_scheme );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = var_scheme;

    if ( tmp_subscript_name_2 == NULL )
    {
        Py_DECREF( tmp_subscribed_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scheme" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 237;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_pool_key_constructor == NULL );
    var_pool_key_constructor = tmp_assign_source_2;

    tmp_called_name_1 = var_pool_key_constructor;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = par_request_context;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 238;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_5bc6ef902ceb9ed83bafda5ddd72ab86->m_frame.f_lineno = 238;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_pool_key == NULL );
    var_pool_key = tmp_assign_source_3;

    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 240;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_connection_from_pool_key );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_pool_key;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pool_key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 240;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_request_context;
    tmp_dict_value_1 = par_request_context;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 240;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_5bc6ef902ceb9ed83bafda5ddd72ab86->m_frame.f_lineno = 240;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5bc6ef902ceb9ed83bafda5ddd72ab86 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5bc6ef902ceb9ed83bafda5ddd72ab86 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5bc6ef902ceb9ed83bafda5ddd72ab86 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5bc6ef902ceb9ed83bafda5ddd72ab86, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5bc6ef902ceb9ed83bafda5ddd72ab86->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5bc6ef902ceb9ed83bafda5ddd72ab86, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5bc6ef902ceb9ed83bafda5ddd72ab86,
        type_description_1,
        par_self,
        par_request_context,
        var_scheme,
        var_pool_key_constructor,
        var_pool_key
    );


    // Release cached frame.
    if ( frame_5bc6ef902ceb9ed83bafda5ddd72ab86 == cache_frame_5bc6ef902ceb9ed83bafda5ddd72ab86 )
    {
        Py_DECREF( frame_5bc6ef902ceb9ed83bafda5ddd72ab86 );
    }
    cache_frame_5bc6ef902ceb9ed83bafda5ddd72ab86 = NULL;

    assertFrameObject( frame_5bc6ef902ceb9ed83bafda5ddd72ab86 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_8_connection_from_context );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_request_context );
    par_request_context = NULL;

    Py_XDECREF( var_scheme );
    var_scheme = NULL;

    Py_XDECREF( var_pool_key_constructor );
    var_pool_key_constructor = NULL;

    Py_XDECREF( var_pool_key );
    var_pool_key = NULL;

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

    Py_XDECREF( par_request_context );
    par_request_context = NULL;

    Py_XDECREF( var_scheme );
    var_scheme = NULL;

    Py_XDECREF( var_pool_key_constructor );
    var_pool_key_constructor = NULL;

    Py_XDECREF( var_pool_key );
    var_pool_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_8_connection_from_context );
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


static PyObject *impl_urllib3$poolmanager$$$function_9_connection_from_pool_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pool_key = python_pars[ 1 ];
    PyObject *par_request_context = python_pars[ 2 ];
    PyObject *var_pool = NULL;
    PyObject *var_scheme = NULL;
    PyObject *var_host = NULL;
    PyObject *var_port = NULL;
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_name_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    PyObject *tmp_kw_name_1;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8314de65c3dd67c65cde2f3f63b2f933 = NULL;

    struct Nuitka_FrameObject *frame_8314de65c3dd67c65cde2f3f63b2f933;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8314de65c3dd67c65cde2f3f63b2f933, codeobj_8314de65c3dd67c65cde2f3f63b2f933, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8314de65c3dd67c65cde2f3f63b2f933 = cache_frame_8314de65c3dd67c65cde2f3f63b2f933;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8314de65c3dd67c65cde2f3f63b2f933 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8314de65c3dd67c65cde2f3f63b2f933 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_pools );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_lock );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__source == NULL );
    tmp_with_1__source = tmp_assign_source_1;

    tmp_source_name_3 = tmp_with_1__source;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_1 = LOOKUP_SPECIAL( tmp_source_name_3, const_str_plain___enter__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    frame_8314de65c3dd67c65cde2f3f63b2f933->m_frame.f_lineno = 250;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__enter == NULL );
    tmp_with_1__enter = tmp_assign_source_2;

    tmp_source_name_4 = tmp_with_1__source;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_assign_source_3 = LOOKUP_SPECIAL( tmp_source_name_4, const_str_plain___exit__ );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__exit == NULL );
    tmp_with_1__exit = tmp_assign_source_3;

    tmp_assign_source_4 = Py_True;
    assert( tmp_with_1__indicator == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_with_1__indicator = tmp_assign_source_4;

    // Tried code:
    // Tried code:
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 253;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_pools );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_get );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_1 = par_pool_key;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pool_key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 253;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    frame_8314de65c3dd67c65cde2f3f63b2f933->m_frame.f_lineno = 253;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    assert( var_pool == NULL );
    var_pool = tmp_assign_source_5;

    tmp_cond_value_1 = var_pool;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
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
    tmp_return_value = var_pool;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    branch_no_1:;
    tmp_subscribed_name_1 = par_request_context;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 258;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_subscript_name_1 = const_str_plain_scheme;
    tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    assert( var_scheme == NULL );
    var_scheme = tmp_assign_source_6;

    tmp_subscribed_name_2 = par_request_context;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 259;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_subscript_name_2 = const_str_plain_host;
    tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 259;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    assert( var_host == NULL );
    var_host = tmp_assign_source_7;

    tmp_subscribed_name_3 = par_request_context;

    if ( tmp_subscribed_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 260;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_subscript_name_3 = const_str_plain_port;
    tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    assert( var_port == NULL );
    var_port = tmp_assign_source_8;

    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__new_pool );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 261;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = var_scheme;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scheme" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_host;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "host" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_port;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "port" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_request_context;
    tmp_dict_value_1 = par_request_context;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_8314de65c3dd67c65cde2f3f63b2f933->m_frame.f_lineno = 261;
    tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 261;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = var_pool;
        var_pool = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_ass_subvalue_1 = var_pool;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 262;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_pools );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_ass_subscript_1 = par_pool_key;

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subscribed_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pool_key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 262;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;
        type_description_1 = "ooooooo";
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_8314de65c3dd67c65cde2f3f63b2f933, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_8314de65c3dd67c65cde2f3f63b2f933, exception_keeper_lineno_1 );
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


        exception_lineno = 250;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
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
    tmp_assign_source_10 = Py_False;
    {
        PyObject *old = tmp_with_1__indicator;
        tmp_with_1__indicator = tmp_assign_source_10;
        Py_INCREF( tmp_with_1__indicator );
        Py_XDECREF( old );
    }

    tmp_called_name_4 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_args_element_name_2 = PyThreadState_GET()->exc_type;
    tmp_args_element_name_3 = PyThreadState_GET()->exc_value;
    tmp_args_element_name_4 = PyThreadState_GET()->exc_traceback;
    frame_8314de65c3dd67c65cde2f3f63b2f933->m_frame.f_lineno = 250;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 250;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 250;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_8314de65c3dd67c65cde2f3f63b2f933->m_frame) frame_8314de65c3dd67c65cde2f3f63b2f933->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_5;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 250;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_8314de65c3dd67c65cde2f3f63b2f933->m_frame) frame_8314de65c3dd67c65cde2f3f63b2f933->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_5;
    branch_end_2:;
    goto try_end_2;
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
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_9_connection_from_pool_key );
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_3:;
    tmp_compare_left_2 = tmp_with_1__indicator;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_True;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_name_5 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_5 );
    frame_8314de65c3dd67c65cde2f3f63b2f933->m_frame.f_lineno = 250;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
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
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_name_6 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_6 );
    frame_8314de65c3dd67c65cde2f3f63b2f933->m_frame.f_lineno = 250;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );

        exception_lineno = 250;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_5:;
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
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_name_7 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_7 );
    frame_8314de65c3dd67c65cde2f3f63b2f933->m_frame.f_lineno = 250;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
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
    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    tmp_return_value = var_pool;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pool" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 264;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_8314de65c3dd67c65cde2f3f63b2f933 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_8314de65c3dd67c65cde2f3f63b2f933 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_8314de65c3dd67c65cde2f3f63b2f933 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8314de65c3dd67c65cde2f3f63b2f933, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8314de65c3dd67c65cde2f3f63b2f933->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8314de65c3dd67c65cde2f3f63b2f933, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8314de65c3dd67c65cde2f3f63b2f933,
        type_description_1,
        par_self,
        par_pool_key,
        par_request_context,
        var_pool,
        var_scheme,
        var_host,
        var_port
    );


    // Release cached frame.
    if ( frame_8314de65c3dd67c65cde2f3f63b2f933 == cache_frame_8314de65c3dd67c65cde2f3f63b2f933 )
    {
        Py_DECREF( frame_8314de65c3dd67c65cde2f3f63b2f933 );
    }
    cache_frame_8314de65c3dd67c65cde2f3f63b2f933 = NULL;

    assertFrameObject( frame_8314de65c3dd67c65cde2f3f63b2f933 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_9_connection_from_pool_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_pool_key );
    par_pool_key = NULL;

    Py_XDECREF( par_request_context );
    par_request_context = NULL;

    Py_XDECREF( var_pool );
    var_pool = NULL;

    Py_XDECREF( var_scheme );
    var_scheme = NULL;

    Py_XDECREF( var_host );
    var_host = NULL;

    Py_XDECREF( var_port );
    var_port = NULL;

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

    Py_XDECREF( par_pool_key );
    par_pool_key = NULL;

    Py_XDECREF( par_request_context );
    par_request_context = NULL;

    Py_XDECREF( var_pool );
    var_pool = NULL;

    Py_XDECREF( var_scheme );
    var_scheme = NULL;

    Py_XDECREF( var_host );
    var_host = NULL;

    Py_XDECREF( var_port );
    var_port = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_9_connection_from_pool_key );
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


static PyObject *impl_urllib3$poolmanager$$$function_10_connection_from_url( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_pool_kwargs = python_pars[ 2 ];
    PyObject *var_u = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_812bd802095510ff145c148bfcb3694e = NULL;

    struct Nuitka_FrameObject *frame_812bd802095510ff145c148bfcb3694e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_812bd802095510ff145c148bfcb3694e, codeobj_812bd802095510ff145c148bfcb3694e, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_812bd802095510ff145c148bfcb3694e = cache_frame_812bd802095510ff145c148bfcb3694e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_812bd802095510ff145c148bfcb3694e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_812bd802095510ff145c148bfcb3694e ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_parse_url );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_parse_url );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "parse_url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_url;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_812bd802095510ff145c148bfcb3694e->m_frame.f_lineno = 277;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_u == NULL );
    var_u = tmp_assign_source_1;

    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 278;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_connection_from_host );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_source_name_2 = var_u;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "u" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 278;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_host );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 278;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_dict_key_1 = const_str_plain_port;
    tmp_source_name_3 = var_u;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "u" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 278;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_port );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 278;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_scheme;
    tmp_source_name_4 = var_u;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "u" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 278;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_scheme );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 278;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_pool_kwargs;
    tmp_dict_value_3 = par_pool_kwargs;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pool_kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 279;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_812bd802095510ff145c148bfcb3694e->m_frame.f_lineno = 278;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_812bd802095510ff145c148bfcb3694e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_812bd802095510ff145c148bfcb3694e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_812bd802095510ff145c148bfcb3694e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_812bd802095510ff145c148bfcb3694e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_812bd802095510ff145c148bfcb3694e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_812bd802095510ff145c148bfcb3694e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_812bd802095510ff145c148bfcb3694e,
        type_description_1,
        par_self,
        par_url,
        par_pool_kwargs,
        var_u
    );


    // Release cached frame.
    if ( frame_812bd802095510ff145c148bfcb3694e == cache_frame_812bd802095510ff145c148bfcb3694e )
    {
        Py_DECREF( frame_812bd802095510ff145c148bfcb3694e );
    }
    cache_frame_812bd802095510ff145c148bfcb3694e = NULL;

    assertFrameObject( frame_812bd802095510ff145c148bfcb3694e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_10_connection_from_url );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_pool_kwargs );
    par_pool_kwargs = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

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

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_pool_kwargs );
    par_pool_kwargs = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_10_connection_from_url );
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


static PyObject *impl_urllib3$poolmanager$$$function_11__merge_pool_kwargs( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_override = python_pars[ 1 ];
    PyObject *var_base_pool_kwargs = NULL;
    PyObject *var_key = NULL;
    PyObject *var_value = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_delsubscr_subscript_1;
    PyObject *tmp_delsubscr_target_1;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_next_source_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static struct Nuitka_FrameObject *cache_frame_e3453d11eedd6fa577f413b621c3b660 = NULL;

    struct Nuitka_FrameObject *frame_e3453d11eedd6fa577f413b621c3b660;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e3453d11eedd6fa577f413b621c3b660, codeobj_e3453d11eedd6fa577f413b621c3b660, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e3453d11eedd6fa577f413b621c3b660 = cache_frame_e3453d11eedd6fa577f413b621c3b660;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e3453d11eedd6fa577f413b621c3b660 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e3453d11eedd6fa577f413b621c3b660 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_connection_pool_kw );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_e3453d11eedd6fa577f413b621c3b660->m_frame.f_lineno = 289;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_base_pool_kwargs == NULL );
    var_base_pool_kwargs = tmp_assign_source_1;

    tmp_cond_value_1 = par_override;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "override" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 290;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        type_description_1 = "ooooo";
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
    tmp_called_instance_2 = par_override;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "override" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 291;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_e3453d11eedd6fa577f413b621c3b660->m_frame.f_lineno = 291;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_items );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooo";
            exception_lineno = 291;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_5 == NULL )
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


        type_description_1 = "ooooo";
        exception_lineno = 291;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_6 == NULL )
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


        type_description_1 = "ooooo";
        exception_lineno = 291;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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

                type_description_1 = "ooooo";
                exception_lineno = 291;
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

        type_description_1 = "ooooo";
        exception_lineno = 291;
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

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_7 );
    {
        PyObject *old = var_key;
        var_key = tmp_assign_source_7;
        Py_INCREF( var_key );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_8 );
    {
        PyObject *old = var_value;
        var_value = tmp_assign_source_8;
        Py_INCREF( var_value );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_compare_left_1 = var_value;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 292;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    // Tried code:
    tmp_delsubscr_target_1 = var_base_pool_kwargs;

    if ( tmp_delsubscr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "base_pool_kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 294;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_delsubscr_subscript_1 = var_key;

    if ( tmp_delsubscr_subscript_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 294;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 294;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    goto try_end_3;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_e3453d11eedd6fa577f413b621c3b660, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_e3453d11eedd6fa577f413b621c3b660, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_KeyError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 295;
        type_description_1 = "ooooo";
        goto try_except_handler_6;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 293;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e3453d11eedd6fa577f413b621c3b660->m_frame) frame_e3453d11eedd6fa577f413b621c3b660->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_6;
    branch_no_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_11__merge_pool_kwargs );
    return NULL;
    // End of try:
    try_end_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_ass_subvalue_1 = var_value;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 298;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_ass_subscribed_1 = var_base_pool_kwargs;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "base_pool_kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 298;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_ass_subscript_1 = var_key;

    if ( tmp_ass_subscript_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 298;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    branch_end_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
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

    branch_no_1:;
    tmp_return_value = var_base_pool_kwargs;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "base_pool_kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 299;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_e3453d11eedd6fa577f413b621c3b660 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_e3453d11eedd6fa577f413b621c3b660 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_e3453d11eedd6fa577f413b621c3b660 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e3453d11eedd6fa577f413b621c3b660, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e3453d11eedd6fa577f413b621c3b660->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e3453d11eedd6fa577f413b621c3b660, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e3453d11eedd6fa577f413b621c3b660,
        type_description_1,
        par_self,
        par_override,
        var_base_pool_kwargs,
        var_key,
        var_value
    );


    // Release cached frame.
    if ( frame_e3453d11eedd6fa577f413b621c3b660 == cache_frame_e3453d11eedd6fa577f413b621c3b660 )
    {
        Py_DECREF( frame_e3453d11eedd6fa577f413b621c3b660 );
    }
    cache_frame_e3453d11eedd6fa577f413b621c3b660 = NULL;

    assertFrameObject( frame_e3453d11eedd6fa577f413b621c3b660 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_11__merge_pool_kwargs );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_override );
    par_override = NULL;

    Py_XDECREF( var_base_pool_kwargs );
    var_base_pool_kwargs = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_override );
    par_override = NULL;

    Py_XDECREF( var_base_pool_kwargs );
    var_base_pool_kwargs = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_11__merge_pool_kwargs );
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


static PyObject *impl_urllib3$poolmanager$$$function_12_urlopen( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_redirect = python_pars[ 3 ];
    PyObject *par_kw = python_pars[ 4 ];
    PyObject *var_u = NULL;
    PyObject *var_conn = NULL;
    PyObject *var_response = NULL;
    PyObject *var_redirect_location = NULL;
    PyObject *var_retries = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscribed_4;
    PyObject *tmp_ass_subscribed_5;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subscript_4;
    PyObject *tmp_ass_subscript_5;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_ass_subvalue_4;
    PyObject *tmp_ass_subvalue_5;
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
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_Eq_1;
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
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg1_3;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg2_3;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg3_2;
    PyObject *tmp_dircall_arg3_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6c9f965546a3a3ffcf8a3c965eafe16b = NULL;

    struct Nuitka_FrameObject *frame_6c9f965546a3a3ffcf8a3c965eafe16b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6c9f965546a3a3ffcf8a3c965eafe16b, codeobj_6c9f965546a3a3ffcf8a3c965eafe16b, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6c9f965546a3a3ffcf8a3c965eafe16b = cache_frame_6c9f965546a3a3ffcf8a3c965eafe16b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6c9f965546a3a3ffcf8a3c965eafe16b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6c9f965546a3a3ffcf8a3c965eafe16b ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_parse_url );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_parse_url );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "parse_url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 310;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_url;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_6c9f965546a3a3ffcf8a3c965eafe16b->m_frame.f_lineno = 310;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_u == NULL );
    var_u = tmp_assign_source_1;

    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 311;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_connection_from_host );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_source_name_2 = var_u;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "u" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 311;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_host );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 311;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_key_1 = const_str_plain_port;
    tmp_source_name_3 = var_u;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "u" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 311;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_port );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 311;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_scheme;
    tmp_source_name_4 = var_u;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "u" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 311;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_scheme );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 311;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_6c9f965546a3a3ffcf8a3c965eafe16b->m_frame.f_lineno = 311;
    tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_conn == NULL );
    var_conn = tmp_assign_source_2;

    tmp_ass_subvalue_1 = Py_False;
    tmp_ass_subscribed_1 = par_kw;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 313;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_plain_assert_same_host;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_2 = Py_False;
    tmp_ass_subscribed_2 = par_kw;

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 314;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = const_str_plain_redirect;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = const_str_plain_headers;
    tmp_compare_right_1 = par_kw;

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 315;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
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
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 316;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subvalue_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_headers );
    if ( tmp_ass_subvalue_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 316;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_3 = par_kw;

    if ( tmp_ass_subscribed_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 316;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_3 = const_str_plain_headers;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 316;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 318;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_proxy );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 != tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
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
    tmp_source_name_7 = var_u;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "u" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 318;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_scheme );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_str_plain_http;
    tmp_and_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_1 = "oooooooooo";
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

        exception_lineno = 318;
        type_description_1 = "oooooooooo";
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
    tmp_source_name_8 = var_conn;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 319;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_urlopen );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_method;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 319;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_url;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 319;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_2 );
    tmp_dircall_arg3_1 = par_kw;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 319;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_assign_source_3 = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_response == NULL );
    var_response = tmp_assign_source_3;

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_9 = var_conn;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 321;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_urlopen );
    if ( tmp_dircall_arg1_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_2 = PyTuple_New( 2 );
    tmp_tuple_element_3 = par_method;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 321;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_3 );
    tmp_source_name_10 = var_u;

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "u" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 321;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_request_uri );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_2 );

        exception_lineno = 321;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 1, tmp_tuple_element_3 );
    tmp_dircall_arg3_2 = par_kw;

    if ( tmp_dircall_arg3_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 321;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg3_2 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
        tmp_assign_source_4 = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_response == NULL );
    var_response = tmp_assign_source_4;

    branch_end_2:;
    tmp_and_left_value_2 = par_redirect;

    if ( tmp_and_left_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "redirect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 323;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 323;
        type_description_1 = "oooooooooo";
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
    tmp_called_instance_1 = var_response;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_6c9f965546a3a3ffcf8a3c965eafe16b->m_frame.f_lineno = 323;
    tmp_and_right_value_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_redirect_location );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 323;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    Py_INCREF( tmp_and_left_value_2 );
    tmp_assign_source_5 = tmp_and_left_value_2;
    and_end_2:;
    assert( var_redirect_location == NULL );
    var_redirect_location = tmp_assign_source_5;

    tmp_cond_value_2 = var_redirect_location;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
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
    tmp_return_value = var_response;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 325;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_urljoin );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urljoin );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "urljoin" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 328;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_url;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 328;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_redirect_location;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "redirect_location" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 328;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_6c9f965546a3a3ffcf8a3c965eafe16b->m_frame.f_lineno = 328;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_redirect_location;
        var_redirect_location = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_source_name_11 = var_response;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 331;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_status );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_303;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 331;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_7 = const_str_plain_GET;
    {
        PyObject *old = par_method;
        par_method = tmp_assign_source_7;
        Py_INCREF( par_method );
        Py_XDECREF( old );
    }

    branch_no_4:;
    tmp_called_instance_2 = par_kw;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 334;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_6c9f965546a3a3ffcf8a3c965eafe16b->m_frame.f_lineno = 334;
    tmp_assign_source_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_retries_tuple, 0 ) );

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_retries == NULL );
    var_retries = tmp_assign_source_8;

    tmp_isinstance_inst_1 = var_retries;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_Retry );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Retry" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 335;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
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
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_Retry );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Retry" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 336;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_from_int );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_4 = var_retries;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "retries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 336;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_key_3 = const_str_plain_redirect;
    tmp_dict_value_3 = par_redirect;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "redirect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 336;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_6c9f965546a3a3ffcf8a3c965eafe16b->m_frame.f_lineno = 336;
    tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_retries;
        var_retries = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    branch_no_5:;
    // Tried code:
    tmp_source_name_13 = var_retries;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "retries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 339;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_increment );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 339;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_5 = par_method;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 339;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = par_url;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 339;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_5 );
    tmp_kw_name_3 = _PyDict_NewPresized( 2 );
    tmp_dict_key_4 = const_str_plain_response;
    tmp_dict_value_4 = var_response;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 339;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain__pool;
    tmp_dict_value_5 = var_conn;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 339;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    frame_6c9f965546a3a3ffcf8a3c965eafe16b->m_frame.f_lineno = 339;
    tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 339;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_retries;
        var_retries = tmp_assign_source_10;
        Py_XDECREF( old );
    }

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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_6c9f965546a3a3ffcf8a3c965eafe16b, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_6c9f965546a3a3ffcf8a3c965eafe16b, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_MaxRetryError );

    if (unlikely( tmp_compare_right_3 == NULL ))
    {
        tmp_compare_right_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MaxRetryError );
    }

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MaxRetryError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 340;
        type_description_1 = "oooooooooo";
        goto try_except_handler_3;
    }

    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 340;
        type_description_1 = "oooooooooo";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_14 = var_retries;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "retries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 341;
        type_description_1 = "oooooooooo";
        goto try_except_handler_3;
    }

    tmp_cond_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_raise_on_redirect );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        type_description_1 = "oooooooooo";
        goto try_except_handler_3;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 341;
        type_description_1 = "oooooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 342;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_6c9f965546a3a3ffcf8a3c965eafe16b->m_frame) frame_6c9f965546a3a3ffcf8a3c965eafe16b->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooo";
    goto try_except_handler_3;
    branch_no_7:;
    tmp_return_value = var_response;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 343;
        type_description_1 = "oooooooooo";
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    goto branch_end_6;
    branch_no_6:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 338;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_6c9f965546a3a3ffcf8a3c965eafe16b->m_frame) frame_6c9f965546a3a3ffcf8a3c965eafe16b->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooo";
    goto try_except_handler_3;
    branch_end_6:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_12_urlopen );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
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
    // End of try:
    try_end_1:;
    tmp_ass_subvalue_4 = var_retries;

    CHECK_OBJECT( tmp_ass_subvalue_4 );
    tmp_ass_subscribed_4 = par_kw;

    if ( tmp_ass_subscribed_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 345;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_4 = const_str_plain_retries;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_5 = par_redirect;

    if ( tmp_ass_subvalue_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "redirect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 346;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_5 = par_kw;

    if ( tmp_ass_subscribed_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 346;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_5 = const_str_plain_redirect;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "log" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 348;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_info );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 348;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_str_digest_5f62b442fbc7547d9ec4b7f4ffa4f085;
    tmp_args_element_name_5 = par_url;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 348;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = var_redirect_location;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "redirect_location" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 348;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_6c9f965546a3a3ffcf8a3c965eafe16b->m_frame.f_lineno = 348;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 348;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_16 = par_self;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 349;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_3 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_urlopen );
    if ( tmp_dircall_arg1_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_3 = PyTuple_New( 2 );
    tmp_tuple_element_6 = par_method;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_3 );
        Py_DECREF( tmp_dircall_arg2_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 349;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = var_redirect_location;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_3 );
        Py_DECREF( tmp_dircall_arg2_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "redirect_location" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 349;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 1, tmp_tuple_element_6 );
    tmp_dircall_arg3_3 = par_kw;

    if ( tmp_dircall_arg3_3 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_3 );
        Py_DECREF( tmp_dircall_arg2_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 349;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg3_3 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3};
        tmp_return_value = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_6c9f965546a3a3ffcf8a3c965eafe16b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_6c9f965546a3a3ffcf8a3c965eafe16b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_6c9f965546a3a3ffcf8a3c965eafe16b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6c9f965546a3a3ffcf8a3c965eafe16b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6c9f965546a3a3ffcf8a3c965eafe16b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6c9f965546a3a3ffcf8a3c965eafe16b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6c9f965546a3a3ffcf8a3c965eafe16b,
        type_description_1,
        par_self,
        par_method,
        par_url,
        par_redirect,
        par_kw,
        var_u,
        var_conn,
        var_response,
        var_redirect_location,
        var_retries
    );


    // Release cached frame.
    if ( frame_6c9f965546a3a3ffcf8a3c965eafe16b == cache_frame_6c9f965546a3a3ffcf8a3c965eafe16b )
    {
        Py_DECREF( frame_6c9f965546a3a3ffcf8a3c965eafe16b );
    }
    cache_frame_6c9f965546a3a3ffcf8a3c965eafe16b = NULL;

    assertFrameObject( frame_6c9f965546a3a3ffcf8a3c965eafe16b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_12_urlopen );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_redirect );
    par_redirect = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    Py_XDECREF( var_conn );
    var_conn = NULL;

    Py_XDECREF( var_response );
    var_response = NULL;

    Py_XDECREF( var_redirect_location );
    var_redirect_location = NULL;

    Py_XDECREF( var_retries );
    var_retries = NULL;

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

    Py_XDECREF( par_redirect );
    par_redirect = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    Py_XDECREF( var_conn );
    var_conn = NULL;

    Py_XDECREF( var_response );
    var_response = NULL;

    Py_XDECREF( var_redirect_location );
    var_redirect_location = NULL;

    Py_XDECREF( var_retries );
    var_retries = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_12_urlopen );
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


static PyObject *impl_urllib3$poolmanager$$$function_13___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_proxy_url = python_pars[ 1 ];
    PyObject *par_num_pools = python_pars[ 2 ];
    PyObject *par_headers = python_pars[ 3 ];
    PyObject *par_proxy_headers = python_pars[ 4 ];
    PyObject *par_connection_pool_kw = python_pars[ 5 ];
    PyObject *var_proxy = NULL;
    PyObject *var_port = NULL;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_object_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
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
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b9d0f02dbf286caa12d4ed8ff9ebca08 = NULL;

    struct Nuitka_FrameObject *frame_b9d0f02dbf286caa12d4ed8ff9ebca08;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b9d0f02dbf286caa12d4ed8ff9ebca08, codeobj_b9d0f02dbf286caa12d4ed8ff9ebca08, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b9d0f02dbf286caa12d4ed8ff9ebca08 = cache_frame_b9d0f02dbf286caa12d4ed8ff9ebca08;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b9d0f02dbf286caa12d4ed8ff9ebca08 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b9d0f02dbf286caa12d4ed8ff9ebca08 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_proxy_url;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPConnectionPool" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 382;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        type_description_1 = "ooooooooN";
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
    tmp_left_name_1 = const_str_digest_b65382343add153bfe7a0e41b1f6dadd;
    tmp_right_name_1 = PyTuple_New( 3 );
    tmp_source_name_1 = par_proxy_url;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_scheme );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 383;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_source_name_2 = par_proxy_url;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy_url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 383;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_host );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 383;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_source_name_3 = par_proxy_url;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy_url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 384;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_port );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 384;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 2, tmp_tuple_element_1 );
    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_proxy_url;
        par_proxy_url = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_parse_url );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_parse_url );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "parse_url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 385;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_proxy_url;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_b9d0f02dbf286caa12d4ed8ff9ebca08->m_frame.f_lineno = 385;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    assert( var_proxy == NULL );
    var_proxy = tmp_assign_source_2;

    tmp_source_name_4 = var_proxy;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_port );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 386;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 386;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
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
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_port_by_scheme );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_port_by_scheme );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "port_by_scheme" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 387;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_get );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 387;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = var_proxy;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 387;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_scheme );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 387;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_int_pos_80;
    frame_b9d0f02dbf286caa12d4ed8ff9ebca08->m_frame.f_lineno = 387;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 387;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    assert( var_port == NULL );
    var_port = tmp_assign_source_3;

    tmp_source_name_7 = var_proxy;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 388;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__replace );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_port;
    tmp_dict_value_1 = var_port;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "port" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 388;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_b9d0f02dbf286caa12d4ed8ff9ebca08->m_frame.f_lineno = 388;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_proxy;
        var_proxy = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_source_name_8 = var_proxy;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 390;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_scheme );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_tuple_str_plain_http_str_plain_https_tuple;
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_ProxySchemeUnknown );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProxySchemeUnknown );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProxySchemeUnknown" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 391;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = var_proxy;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 391;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_scheme );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    frame_b9d0f02dbf286caa12d4ed8ff9ebca08->m_frame.f_lineno = 391;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 391;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_assattr_name_1 = var_proxy;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 393;
        type_description_1 = "ooooooooN";
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

        exception_lineno = 393;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_proxy, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = par_proxy_headers;

    if ( tmp_or_left_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy_headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 394;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 394;
        type_description_1 = "ooooooooN";
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
    tmp_assattr_name_2 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_assattr_name_2 = tmp_or_left_value_1;
    or_end_1:;
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

        exception_lineno = 394;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_proxy_headers, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 394;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_source_name_10 = par_self;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 396;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_proxy );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 396;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = par_connection_pool_kw;

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connection_pool_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 396;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_plain__proxy;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 396;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = par_self;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 397;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_proxy_headers );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_2 = par_connection_pool_kw;

    if ( tmp_ass_subscribed_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connection_pool_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 397;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = const_str_plain__proxy_headers;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_ProxyManager );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProxyManager );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProxyManager" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 399;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    if ( tmp_object_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 399;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_12 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_num_pools;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "num_pools" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 400;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_headers;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 400;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_2 );
    tmp_dircall_arg3_1 = par_connection_pool_kw;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connection_pool_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 400;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_unused = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        type_description_1 = "ooooooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b9d0f02dbf286caa12d4ed8ff9ebca08 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b9d0f02dbf286caa12d4ed8ff9ebca08 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b9d0f02dbf286caa12d4ed8ff9ebca08, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b9d0f02dbf286caa12d4ed8ff9ebca08->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b9d0f02dbf286caa12d4ed8ff9ebca08, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b9d0f02dbf286caa12d4ed8ff9ebca08,
        type_description_1,
        par_self,
        par_proxy_url,
        par_num_pools,
        par_headers,
        par_proxy_headers,
        par_connection_pool_kw,
        var_proxy,
        var_port,
        NULL
    );


    // Release cached frame.
    if ( frame_b9d0f02dbf286caa12d4ed8ff9ebca08 == cache_frame_b9d0f02dbf286caa12d4ed8ff9ebca08 )
    {
        Py_DECREF( frame_b9d0f02dbf286caa12d4ed8ff9ebca08 );
    }
    cache_frame_b9d0f02dbf286caa12d4ed8ff9ebca08 = NULL;

    assertFrameObject( frame_b9d0f02dbf286caa12d4ed8ff9ebca08 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_13___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_proxy_url );
    par_proxy_url = NULL;

    Py_XDECREF( par_num_pools );
    par_num_pools = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( par_proxy_headers );
    par_proxy_headers = NULL;

    Py_XDECREF( par_connection_pool_kw );
    par_connection_pool_kw = NULL;

    Py_XDECREF( var_proxy );
    var_proxy = NULL;

    Py_XDECREF( var_port );
    var_port = NULL;

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

    Py_XDECREF( par_proxy_url );
    par_proxy_url = NULL;

    Py_XDECREF( par_num_pools );
    par_num_pools = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( par_proxy_headers );
    par_proxy_headers = NULL;

    Py_XDECREF( par_connection_pool_kw );
    par_connection_pool_kw = NULL;

    Py_XDECREF( var_proxy );
    var_proxy = NULL;

    Py_XDECREF( var_port );
    var_port = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_13___init__ );
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


static PyObject *impl_urllib3$poolmanager$$$function_14_connection_from_host( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_host = python_pars[ 1 ];
    PyObject *par_port = python_pars[ 2 ];
    PyObject *par_scheme = python_pars[ 3 ];
    PyObject *par_pool_kwargs = python_pars[ 4 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_object_name_1;
    PyObject *tmp_object_name_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_type_name_1;
    PyObject *tmp_type_name_2;
    static struct Nuitka_FrameObject *cache_frame_ef35cdf6367df2c7364551c5a934f927 = NULL;

    struct Nuitka_FrameObject *frame_ef35cdf6367df2c7364551c5a934f927;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ef35cdf6367df2c7364551c5a934f927, codeobj_ef35cdf6367df2c7364551c5a934f927, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ef35cdf6367df2c7364551c5a934f927 = cache_frame_ef35cdf6367df2c7364551c5a934f927;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ef35cdf6367df2c7364551c5a934f927 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ef35cdf6367df2c7364551c5a934f927 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_scheme;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_str_plain_https;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 403;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
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
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_ProxyManager );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProxyManager );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProxyManager" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 404;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    if ( tmp_object_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 404;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_connection_from_host );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = par_host;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "host" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 405;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_port;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "port" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 405;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_scheme;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scheme" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 405;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_pool_kwargs;
    tmp_dict_value_1 = par_pool_kwargs;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pool_kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 405;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_ef35cdf6367df2c7364551c5a934f927->m_frame.f_lineno = 404;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_type_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_ProxyManager );

    if (unlikely( tmp_type_name_2 == NULL ))
    {
        tmp_type_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProxyManager );
    }

    if ( tmp_type_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProxyManager" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 407;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_2 = par_self;

    if ( tmp_object_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 407;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = BUILTIN_SUPER( tmp_type_name_2, tmp_object_name_2 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_connection_from_host );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 408;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_proxy );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 408;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_host );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 408;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 408;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_proxy );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 408;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_port );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 408;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 408;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_proxy );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 408;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_scheme );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 408;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_key_2 = const_str_plain_pool_kwargs;
    tmp_dict_value_2 = par_pool_kwargs;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pool_kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 408;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_ef35cdf6367df2c7364551c5a934f927->m_frame.f_lineno = 407;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef35cdf6367df2c7364551c5a934f927 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef35cdf6367df2c7364551c5a934f927 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef35cdf6367df2c7364551c5a934f927 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ef35cdf6367df2c7364551c5a934f927, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ef35cdf6367df2c7364551c5a934f927->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ef35cdf6367df2c7364551c5a934f927, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ef35cdf6367df2c7364551c5a934f927,
        type_description_1,
        par_self,
        par_host,
        par_port,
        par_scheme,
        par_pool_kwargs,
        NULL
    );


    // Release cached frame.
    if ( frame_ef35cdf6367df2c7364551c5a934f927 == cache_frame_ef35cdf6367df2c7364551c5a934f927 )
    {
        Py_DECREF( frame_ef35cdf6367df2c7364551c5a934f927 );
    }
    cache_frame_ef35cdf6367df2c7364551c5a934f927 = NULL;

    assertFrameObject( frame_ef35cdf6367df2c7364551c5a934f927 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_14_connection_from_host );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_host );
    par_host = NULL;

    Py_XDECREF( par_port );
    par_port = NULL;

    Py_XDECREF( par_scheme );
    par_scheme = NULL;

    Py_XDECREF( par_pool_kwargs );
    par_pool_kwargs = NULL;

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

    Py_XDECREF( par_scheme );
    par_scheme = NULL;

    Py_XDECREF( par_pool_kwargs );
    par_pool_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_14_connection_from_host );
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


static PyObject *impl_urllib3$poolmanager$$$function_15__set_proxy_headers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_headers = python_pars[ 2 ];
    PyObject *var_headers_ = NULL;
    PyObject *var_netloc = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ff4c3b4ee3836f59dbf3b6b6df51b64e = NULL;

    struct Nuitka_FrameObject *frame_ff4c3b4ee3836f59dbf3b6b6df51b64e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyDict_Copy( const_dict_3e5fe116b7b40d584f8f0df3fb9d55ce );
    assert( var_headers_ == NULL );
    var_headers_ = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ff4c3b4ee3836f59dbf3b6b6df51b64e, codeobj_ff4c3b4ee3836f59dbf3b6b6df51b64e, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ff4c3b4ee3836f59dbf3b6b6df51b64e = cache_frame_ff4c3b4ee3836f59dbf3b6b6df51b64e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ff4c3b4ee3836f59dbf3b6b6df51b64e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ff4c3b4ee3836f59dbf3b6b6df51b64e ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_parse_url );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_parse_url );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "parse_url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 417;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_url;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_ff4c3b4ee3836f59dbf3b6b6df51b64e->m_frame.f_lineno = 417;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 417;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_netloc );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 417;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_netloc == NULL );
    var_netloc = tmp_assign_source_2;

    tmp_cond_value_1 = var_netloc;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 418;
        type_description_1 = "ooooo";
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
    tmp_ass_subvalue_1 = var_netloc;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_ass_subscribed_1 = var_headers_;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers_" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 419;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_plain_Host;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 419;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_cond_value_2 = par_headers;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 421;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 421;
        type_description_1 = "ooooo";
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
    tmp_source_name_2 = var_headers_;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers_" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 422;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_update );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 422;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_headers;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 422;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_ff4c3b4ee3836f59dbf3b6b6df51b64e->m_frame.f_lineno = 422;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 422;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_return_value = var_headers_;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers_" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 423;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ff4c3b4ee3836f59dbf3b6b6df51b64e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ff4c3b4ee3836f59dbf3b6b6df51b64e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ff4c3b4ee3836f59dbf3b6b6df51b64e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ff4c3b4ee3836f59dbf3b6b6df51b64e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ff4c3b4ee3836f59dbf3b6b6df51b64e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ff4c3b4ee3836f59dbf3b6b6df51b64e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ff4c3b4ee3836f59dbf3b6b6df51b64e,
        type_description_1,
        par_self,
        par_url,
        par_headers,
        var_headers_,
        var_netloc
    );


    // Release cached frame.
    if ( frame_ff4c3b4ee3836f59dbf3b6b6df51b64e == cache_frame_ff4c3b4ee3836f59dbf3b6b6df51b64e )
    {
        Py_DECREF( frame_ff4c3b4ee3836f59dbf3b6b6df51b64e );
    }
    cache_frame_ff4c3b4ee3836f59dbf3b6b6df51b64e = NULL;

    assertFrameObject( frame_ff4c3b4ee3836f59dbf3b6b6df51b64e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_15__set_proxy_headers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( var_headers_ );
    var_headers_ = NULL;

    Py_XDECREF( var_netloc );
    var_netloc = NULL;

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

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( var_headers_ );
    var_headers_ = NULL;

    Py_XDECREF( var_netloc );
    var_netloc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_15__set_proxy_headers );
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


static PyObject *impl_urllib3$poolmanager$$$function_16_urlopen( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_redirect = python_pars[ 3 ];
    PyObject *par_kw = python_pars[ 4 ];
    PyObject *var_u = NULL;
    PyObject *var_headers = NULL;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_object_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_name_1;
    static struct Nuitka_FrameObject *cache_frame_901b2d76acc8184a03821ffaef862759 = NULL;

    struct Nuitka_FrameObject *frame_901b2d76acc8184a03821ffaef862759;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_901b2d76acc8184a03821ffaef862759, codeobj_901b2d76acc8184a03821ffaef862759, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_901b2d76acc8184a03821ffaef862759 = cache_frame_901b2d76acc8184a03821ffaef862759;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_901b2d76acc8184a03821ffaef862759 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_901b2d76acc8184a03821ffaef862759 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_parse_url );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_parse_url );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "parse_url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 427;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_url;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_901b2d76acc8184a03821ffaef862759->m_frame.f_lineno = 427;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 427;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }
    assert( var_u == NULL );
    var_u = tmp_assign_source_1;

    tmp_source_name_1 = var_u;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_scheme );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 429;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_http;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 429;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = par_kw;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 433;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 433;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = const_str_plain_headers;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 433;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_headers );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 433;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }
    frame_901b2d76acc8184a03821ffaef862759->m_frame.f_lineno = 433;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 433;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }
    assert( var_headers == NULL );
    var_headers = tmp_assign_source_2;

    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 434;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__set_proxy_headers );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 434;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_url;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 434;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = var_headers;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 434;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }

    frame_901b2d76acc8184a03821ffaef862759->m_frame.f_lineno = 434;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 434;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = par_kw;

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 434;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_plain_headers;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 434;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_ProxyManager );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProxyManager );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProxyManager" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 436;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    if ( tmp_object_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 436;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 436;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_urlopen );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 436;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_method;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 436;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_url;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 436;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_redirect;
    tmp_dict_value_1 = par_redirect;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "redirect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 436;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
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

        exception_lineno = 436;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_4_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 436;
        type_description_1 = "oooooooN";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_901b2d76acc8184a03821ffaef862759 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_901b2d76acc8184a03821ffaef862759 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_901b2d76acc8184a03821ffaef862759 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_901b2d76acc8184a03821ffaef862759, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_901b2d76acc8184a03821ffaef862759->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_901b2d76acc8184a03821ffaef862759, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_901b2d76acc8184a03821ffaef862759,
        type_description_1,
        par_self,
        par_method,
        par_url,
        par_redirect,
        par_kw,
        var_u,
        var_headers,
        NULL
    );


    // Release cached frame.
    if ( frame_901b2d76acc8184a03821ffaef862759 == cache_frame_901b2d76acc8184a03821ffaef862759 )
    {
        Py_DECREF( frame_901b2d76acc8184a03821ffaef862759 );
    }
    cache_frame_901b2d76acc8184a03821ffaef862759 = NULL;

    assertFrameObject( frame_901b2d76acc8184a03821ffaef862759 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_16_urlopen );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_redirect );
    par_redirect = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    Py_XDECREF( var_headers );
    var_headers = NULL;

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

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_redirect );
    par_redirect = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    Py_XDECREF( var_headers );
    var_headers = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_16_urlopen );
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


static PyObject *impl_urllib3$poolmanager$$$function_17_proxy_from_url( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[ 0 ];
    PyObject *par_kw = python_pars[ 1 ];
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
    int tmp_res;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_fa32161c6fd3e2fb2dbe15bc74abfbb7 = NULL;

    struct Nuitka_FrameObject *frame_fa32161c6fd3e2fb2dbe15bc74abfbb7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fa32161c6fd3e2fb2dbe15bc74abfbb7, codeobj_fa32161c6fd3e2fb2dbe15bc74abfbb7, module_urllib3$poolmanager, sizeof(void *)+sizeof(void *) );
    frame_fa32161c6fd3e2fb2dbe15bc74abfbb7 = cache_frame_fa32161c6fd3e2fb2dbe15bc74abfbb7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fa32161c6fd3e2fb2dbe15bc74abfbb7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fa32161c6fd3e2fb2dbe15bc74abfbb7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_ProxyManager );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProxyManager );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProxyManager" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 440;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_proxy_url;
    tmp_dict_value_1 = par_url;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg3_1 = par_kw;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_5_complex_call_helper_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 440;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa32161c6fd3e2fb2dbe15bc74abfbb7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa32161c6fd3e2fb2dbe15bc74abfbb7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa32161c6fd3e2fb2dbe15bc74abfbb7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fa32161c6fd3e2fb2dbe15bc74abfbb7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fa32161c6fd3e2fb2dbe15bc74abfbb7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fa32161c6fd3e2fb2dbe15bc74abfbb7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fa32161c6fd3e2fb2dbe15bc74abfbb7,
        type_description_1,
        par_url,
        par_kw
    );


    // Release cached frame.
    if ( frame_fa32161c6fd3e2fb2dbe15bc74abfbb7 == cache_frame_fa32161c6fd3e2fb2dbe15bc74abfbb7 )
    {
        Py_DECREF( frame_fa32161c6fd3e2fb2dbe15bc74abfbb7 );
    }
    cache_frame_fa32161c6fd3e2fb2dbe15bc74abfbb7 = NULL;

    assertFrameObject( frame_fa32161c6fd3e2fb2dbe15bc74abfbb7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_17_proxy_from_url );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

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
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager$$$function_17_proxy_from_url );
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



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_10_connection_from_url( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_10_connection_from_url,
        const_str_plain_connection_from_url,
#if PYTHON_VERSION >= 330
        const_str_digest_207bd888d8d92daafa6abe19cac5a8f7,
#endif
        codeobj_812bd802095510ff145c148bfcb3694e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$poolmanager,
        const_str_digest_8af5e725dd02cb9d6b081e0759f2b386,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_11__merge_pool_kwargs(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_11__merge_pool_kwargs,
        const_str_plain__merge_pool_kwargs,
#if PYTHON_VERSION >= 330
        const_str_digest_5cc25be09470e6d83192f743509a3e44,
#endif
        codeobj_e3453d11eedd6fa577f413b621c3b660,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$poolmanager,
        const_str_digest_4464f0d3b4f3a9ab6e85c70a22b1e12e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_12_urlopen( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_12_urlopen,
        const_str_plain_urlopen,
#if PYTHON_VERSION >= 330
        const_str_digest_30b54feb3c940a6350ed755fb780fac0,
#endif
        codeobj_6c9f965546a3a3ffcf8a3c965eafe16b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$poolmanager,
        const_str_digest_1445abaa24d4d64feabd13541f367d4c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_13___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_13___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_27aab67055f718697d7ee2aa049bc069,
#endif
        codeobj_b9d0f02dbf286caa12d4ed8ff9ebca08,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$poolmanager,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_14_connection_from_host( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_14_connection_from_host,
        const_str_plain_connection_from_host,
#if PYTHON_VERSION >= 330
        const_str_digest_f02b70d6cf87b2d6dcb00916f7391e48,
#endif
        codeobj_ef35cdf6367df2c7364551c5a934f927,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$poolmanager,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_15__set_proxy_headers( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_15__set_proxy_headers,
        const_str_plain__set_proxy_headers,
#if PYTHON_VERSION >= 330
        const_str_digest_a007fa63fdff14fb2c2e7bd41a045f21,
#endif
        codeobj_ff4c3b4ee3836f59dbf3b6b6df51b64e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$poolmanager,
        const_str_digest_7656b16d642bbe814d26b601fd9549aa,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_16_urlopen( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_16_urlopen,
        const_str_plain_urlopen,
#if PYTHON_VERSION >= 330
        const_str_digest_fc6bc7d3ff39920b393c57bbb2c47096,
#endif
        codeobj_901b2d76acc8184a03821ffaef862759,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$poolmanager,
        const_str_digest_1552d535bdde2b752b496af3502874b7,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_17_proxy_from_url(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_17_proxy_from_url,
        const_str_plain_proxy_from_url,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fa32161c6fd3e2fb2dbe15bc74abfbb7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$poolmanager,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_1__default_key_normalizer(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_1__default_key_normalizer,
        const_str_plain__default_key_normalizer,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c81a6af60fd0f30689bce6b7be4de74e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$poolmanager,
        const_str_digest_13018ed62f3da7cc2adaa4292e149ff3,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_2___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_c693d3d582276b7b2edfad1a40061e7a,
#endif
        codeobj_f4db1eec722960fdbe22437fcdfd10dc,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$poolmanager,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_2___init__$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_2___init__$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        const_str_digest_41fd3afa98f245760a224549122eee16,
#endif
        codeobj_3d352b12587204be09d4a7591aaa59aa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$poolmanager,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_3___enter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_3___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 330
        const_str_digest_9fbd1260836ddbad56854d8b9c0186c8,
#endif
        codeobj_7efab103d43f6b03a1a35773ad2637c1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$poolmanager,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_4___exit__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_4___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 330
        const_str_digest_d867a048a787bc50c8cc5e46f1c6583f,
#endif
        codeobj_d5e7a739b319be72a283d330b6a4933b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$poolmanager,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_5__new_pool( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_5__new_pool,
        const_str_plain__new_pool,
#if PYTHON_VERSION >= 330
        const_str_digest_13408ef5640dc399fffe039ff946ada1,
#endif
        codeobj_0b9540d9d08385c8a2891c73a3d424c2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$poolmanager,
        const_str_digest_25eb4d20eeeb3591b633871959692d99,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_6_clear(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_6_clear,
        const_str_plain_clear,
#if PYTHON_VERSION >= 330
        const_str_digest_6077c56a9bf23cde9bad19d172735047,
#endif
        codeobj_4807ad014095c120eaf96ab5e7566066,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$poolmanager,
        const_str_digest_69168908e1e5c7a88a50867458762f21,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_7_connection_from_host( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_7_connection_from_host,
        const_str_plain_connection_from_host,
#if PYTHON_VERSION >= 330
        const_str_digest_2921ab8a3a55d26f8ca486a9b1c6e8ef,
#endif
        codeobj_6fe79e0c60848a6970a3fb5f3204ad2a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$poolmanager,
        const_str_digest_eb89dd95343c4834c13975c4510db133,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_8_connection_from_context(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_8_connection_from_context,
        const_str_plain_connection_from_context,
#if PYTHON_VERSION >= 330
        const_str_digest_e5a07a0dc70d8af35bcd050243335215,
#endif
        codeobj_5bc6ef902ceb9ed83bafda5ddd72ab86,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$poolmanager,
        const_str_digest_c4d8d0af35cb6430f76f59b3d9c2397a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$poolmanager$$$function_9_connection_from_pool_key( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$poolmanager$$$function_9_connection_from_pool_key,
        const_str_plain_connection_from_pool_key,
#if PYTHON_VERSION >= 330
        const_str_digest_df49728476f1c106520a9c1d8d838d08,
#endif
        codeobj_8314de65c3dd67c65cde2f3f63b2f933,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$poolmanager,
        const_str_digest_a8258c43e85755a08fc604877b816c69,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$poolmanager =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.poolmanager",   /* m_name */
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

MOD_INIT_DECL( urllib3$poolmanager )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$poolmanager );
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
    puts("urllib3.poolmanager: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.poolmanager: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$poolmanager" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$poolmanager = Py_InitModule4(
        "urllib3.poolmanager",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_urllib3$poolmanager = PyModule_Create( &mdef_urllib3$poolmanager );
#endif

    moduledict_urllib3$poolmanager = MODULE_DICT( module_urllib3$poolmanager );

    CHECK_OBJECT( module_urllib3$poolmanager );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_901e90eee70586f15ff5cd8bfbf848b6, module_urllib3$poolmanager );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_0_var_proxy = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var___enter__ = NULL;
    PyObject *outline_0_var___exit__ = NULL;
    PyObject *outline_0_var__new_pool = NULL;
    PyObject *outline_0_var_clear = NULL;
    PyObject *outline_0_var_connection_from_host = NULL;
    PyObject *outline_0_var_connection_from_context = NULL;
    PyObject *outline_0_var_connection_from_pool_key = NULL;
    PyObject *outline_0_var_connection_from_url = NULL;
    PyObject *outline_0_var__merge_pool_kwargs = NULL;
    PyObject *outline_0_var_urlopen = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_1_var___qualname__ = NULL;
    PyObject *outline_1_var___module__ = NULL;
    PyObject *outline_1_var___doc__ = NULL;
    PyObject *outline_1_var___init__ = NULL;
    PyObject *outline_1_var_connection_from_host = NULL;
    PyObject *outline_1_var__set_proxy_headers = NULL;
    PyObject *outline_1_var_urlopen = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_defaults_7;
    PyObject *tmp_defaults_8;
    PyObject *tmp_defaults_9;
    PyObject *tmp_defaults_10;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
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
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
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
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
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
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    struct Nuitka_FrameObject *frame_996ed43a98506bcce8dd420117477050;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    // Locals dictionary setup.
PyObject *locals_dict_1 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_2 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_fe600fcb68b91fafb7d8eee95d73cbfb;
    UPDATE_STRING_DICT0( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_996ed43a98506bcce8dd420117477050 = MAKE_MODULE_FRAME( codeobj_996ed43a98506bcce8dd420117477050, module_urllib3$poolmanager );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_996ed43a98506bcce8dd420117477050 );
    assert( Py_REFCNT( frame_996ed43a98506bcce8dd420117477050 ) == 2 );

    // Framed code:
    frame_996ed43a98506bcce8dd420117477050->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_901e90eee70586f15ff5cd8bfbf848b6;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_996ed43a98506bcce8dd420117477050->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_urllib3;
    UPDATE_STRING_DICT0( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    frame_996ed43a98506bcce8dd420117477050->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
    tmp_name_name_1 = const_str_plain_collections;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3$poolmanager;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_996ed43a98506bcce8dd420117477050->m_frame.f_lineno = 2;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_collections, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_plain_functools;
    tmp_globals_name_2 = (PyObject *)moduledict_urllib3$poolmanager;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_996ed43a98506bcce8dd420117477050->m_frame.f_lineno = 3;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_functools, tmp_assign_source_9 );
    tmp_name_name_3 = const_str_plain_logging;
    tmp_globals_name_3 = (PyObject *)moduledict_urllib3$poolmanager;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_996ed43a98506bcce8dd420117477050->m_frame.f_lineno = 4;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_10 );
    tmp_name_name_4 = const_str_plain__collections;
    tmp_globals_name_4 = (PyObject *)moduledict_urllib3$poolmanager;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_RecentlyUsedContainer_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_996ed43a98506bcce8dd420117477050->m_frame.f_lineno = 6;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_RecentlyUsedContainer );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_RecentlyUsedContainer, tmp_assign_source_11 );
    tmp_name_name_5 = const_str_plain_connectionpool;
    tmp_globals_name_5 = (PyObject *)moduledict_urllib3$poolmanager;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_HTTPConnectionPool_str_plain_HTTPSConnectionPool_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_996ed43a98506bcce8dd420117477050->m_frame.f_lineno = 7;
    tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_12;

    // Tried code:
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_HTTPConnectionPool );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool, tmp_assign_source_13 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_HTTPSConnectionPool );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_HTTPSConnectionPool, tmp_assign_source_14 );
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

    tmp_name_name_6 = const_str_plain_connectionpool;
    tmp_globals_name_6 = (PyObject *)moduledict_urllib3$poolmanager;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_port_by_scheme_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_996ed43a98506bcce8dd420117477050->m_frame.f_lineno = 8;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_port_by_scheme );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_port_by_scheme, tmp_assign_source_15 );
    tmp_name_name_7 = const_str_plain_exceptions;
    tmp_globals_name_7 = (PyObject *)moduledict_urllib3$poolmanager;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_c53cff22b092b8d7532d73e3369484b7_tuple;
    tmp_level_name_7 = const_int_pos_1;
    frame_996ed43a98506bcce8dd420117477050->m_frame.f_lineno = 9;
    tmp_assign_source_16 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_16;

    // Tried code:
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_LocationValueError );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_LocationValueError, tmp_assign_source_17 );
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_MaxRetryError );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_MaxRetryError, tmp_assign_source_18 );
    tmp_import_name_from_8 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_ProxySchemeUnknown );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_ProxySchemeUnknown, tmp_assign_source_19 );
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

    Py_XDECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    tmp_name_name_8 = const_str_digest_1edef47b55b65d108e2405bd6241f07f;
    tmp_globals_name_8 = (PyObject *)moduledict_urllib3$poolmanager;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_urljoin_tuple;
    tmp_level_name_8 = const_int_pos_1;
    frame_996ed43a98506bcce8dd420117477050->m_frame.f_lineno = 10;
    tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_urljoin );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_urljoin, tmp_assign_source_20 );
    tmp_name_name_9 = const_str_plain_request;
    tmp_globals_name_9 = (PyObject *)moduledict_urllib3$poolmanager;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_RequestMethods_tuple;
    tmp_level_name_9 = const_int_pos_1;
    frame_996ed43a98506bcce8dd420117477050->m_frame.f_lineno = 11;
    tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_RequestMethods );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_RequestMethods, tmp_assign_source_21 );
    tmp_name_name_10 = const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d;
    tmp_globals_name_10 = (PyObject *)moduledict_urllib3$poolmanager;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = const_tuple_str_plain_parse_url_tuple;
    tmp_level_name_10 = const_int_pos_1;
    frame_996ed43a98506bcce8dd420117477050->m_frame.f_lineno = 12;
    tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_parse_url );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_parse_url, tmp_assign_source_22 );
    tmp_name_name_11 = const_str_digest_e68800bfc0da117494aca4ca9d48e152;
    tmp_globals_name_11 = (PyObject *)moduledict_urllib3$poolmanager;
    tmp_locals_name_11 = Py_None;
    tmp_fromlist_name_11 = const_tuple_str_plain_Retry_tuple;
    tmp_level_name_11 = const_int_pos_1;
    frame_996ed43a98506bcce8dd420117477050->m_frame.f_lineno = 13;
    tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_Retry );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_Retry, tmp_assign_source_23 );
    tmp_assign_source_24 = LIST_COPY( const_list_8cc344de1d0e6b94d2846b0b3d67f4e3_list );
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_24 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_logging );

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

        exception_lineno = 19;

        goto frame_exception_exit_1;
    }

    frame_996ed43a98506bcce8dd420117477050->m_frame.f_lineno = 19;
    tmp_assign_source_25 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_digest_901e90eee70586f15ff5cd8bfbf848b6_tuple, 0 ) );

    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_25 );
    tmp_assign_source_26 = const_tuple_57945d0bb5d77902f3c1b92860bc26a3_tuple;
    UPDATE_STRING_DICT0( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_SSL_KEYWORDS, tmp_assign_source_26 );
    tmp_assign_source_27 = const_tuple_1f1c8b2e70a0da185a3f8e74b7f9c46d_tuple;
    UPDATE_STRING_DICT0( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain__key_fields, tmp_assign_source_27 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_collections );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_collections );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "collections" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;

        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_namedtuple );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_str_plain_PoolKey;
    tmp_args_element_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain__key_fields );

    if (unlikely( tmp_args_element_name_4 == NULL ))
    {
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__key_fields );
    }

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_key_fields" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;

        goto frame_exception_exit_1;
    }

    frame_996ed43a98506bcce8dd420117477050->m_frame.f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_PoolKey, tmp_assign_source_28 );
    tmp_assign_source_29 = MAKE_FUNCTION_urllib3$poolmanager$$$function_1__default_key_normalizer(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain__default_key_normalizer, tmp_assign_source_29 );
    tmp_assign_source_30 = _PyDict_NewPresized( 2 );
    tmp_dict_key_1 = const_str_plain_http;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_functools );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_functools );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_30 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "functools" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;

        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_partial );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_30 );

        exception_lineno = 111;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain__default_key_normalizer );

    if (unlikely( tmp_args_element_name_5 == NULL ))
    {
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__default_key_normalizer );
    }

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_30 );
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_default_key_normalizer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_PoolKey );

    if (unlikely( tmp_args_element_name_6 == NULL ))
    {
        tmp_args_element_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolKey );
    }

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_30 );
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PoolKey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;

        goto frame_exception_exit_1;
    }

    frame_996ed43a98506bcce8dd420117477050->m_frame.f_lineno = 111;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_30 );

        exception_lineno = 111;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_https;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_functools );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_functools );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_30 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "functools" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;

        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_partial );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_30 );

        exception_lineno = 112;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain__default_key_normalizer );

    if (unlikely( tmp_args_element_name_7 == NULL ))
    {
        tmp_args_element_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__default_key_normalizer );
    }

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_30 );
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_default_key_normalizer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_PoolKey );

    if (unlikely( tmp_args_element_name_8 == NULL ))
    {
        tmp_args_element_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolKey );
    }

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_30 );
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PoolKey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;

        goto frame_exception_exit_1;
    }

    frame_996ed43a98506bcce8dd420117477050->m_frame.f_lineno = 112;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_30 );

        exception_lineno = 112;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_30, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_key_fn_by_scheme, tmp_assign_source_30 );
    tmp_assign_source_31 = _PyDict_NewPresized( 2 );
    tmp_dict_key_3 = const_str_plain_http;
    tmp_dict_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool );

    if (unlikely( tmp_dict_value_3 == NULL ))
    {
        tmp_dict_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool );
    }

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_31 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPConnectionPool" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_31, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_https;
    tmp_dict_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_HTTPSConnectionPool );

    if (unlikely( tmp_dict_value_4 == NULL ))
    {
        tmp_dict_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPSConnectionPool );
    }

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_31 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPSConnectionPool" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_31, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_pool_classes_by_scheme, tmp_assign_source_31 );
    // Tried code:
    tmp_assign_source_32 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_RequestMethods );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestMethods );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestMethods" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;

        goto try_except_handler_3;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_32, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_32;

    tmp_assign_source_33 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_33;

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


        exception_lineno = 121;

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


        exception_lineno = 121;

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


        exception_lineno = 121;

        goto try_except_handler_3;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;

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
    tmp_assign_source_34 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 121;

        goto try_except_handler_3;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_34;

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


        exception_lineno = 121;

        goto try_except_handler_3;
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


        exception_lineno = 121;

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
    tmp_source_name_4 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;

        goto try_except_handler_3;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_PoolManager;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_996ed43a98506bcce8dd420117477050->m_frame.f_lineno = 121;
    tmp_assign_source_35 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;

        goto try_except_handler_3;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_35 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_35;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_1);
    locals_dict_1 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_37 = const_str_digest_901e90eee70586f15ff5cd8bfbf848b6;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_37 );
    outline_0_var___module__ = tmp_assign_source_37;

    tmp_assign_source_38 = const_str_digest_505fec576d13a443afa582b42f7eb689;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_38 );
    outline_0_var___doc__ = tmp_assign_source_38;

    tmp_assign_source_39 = const_str_plain_PoolManager;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_39 );
    outline_0_var___qualname__ = tmp_assign_source_39;

    tmp_assign_source_40 = Py_None;
    assert( outline_0_var_proxy == NULL );
    Py_INCREF( tmp_assign_source_40 );
    outline_0_var_proxy = tmp_assign_source_40;

    tmp_defaults_1 = const_tuple_int_pos_10_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_41 = MAKE_FUNCTION_urllib3$poolmanager$$$function_2___init__( tmp_defaults_1 );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_41;

    tmp_assign_source_42 = MAKE_FUNCTION_urllib3$poolmanager$$$function_3___enter__(  );
    assert( outline_0_var___enter__ == NULL );
    outline_0_var___enter__ = tmp_assign_source_42;

    tmp_assign_source_43 = MAKE_FUNCTION_urllib3$poolmanager$$$function_4___exit__(  );
    assert( outline_0_var___exit__ == NULL );
    outline_0_var___exit__ = tmp_assign_source_43;

    tmp_defaults_2 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_44 = MAKE_FUNCTION_urllib3$poolmanager$$$function_5__new_pool( tmp_defaults_2 );
    assert( outline_0_var__new_pool == NULL );
    outline_0_var__new_pool = tmp_assign_source_44;

    tmp_assign_source_45 = MAKE_FUNCTION_urllib3$poolmanager$$$function_6_clear(  );
    assert( outline_0_var_clear == NULL );
    outline_0_var_clear = tmp_assign_source_45;

    tmp_defaults_3 = const_tuple_none_str_plain_http_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_46 = MAKE_FUNCTION_urllib3$poolmanager$$$function_7_connection_from_host( tmp_defaults_3 );
    assert( outline_0_var_connection_from_host == NULL );
    outline_0_var_connection_from_host = tmp_assign_source_46;

    tmp_assign_source_47 = MAKE_FUNCTION_urllib3$poolmanager$$$function_8_connection_from_context(  );
    assert( outline_0_var_connection_from_context == NULL );
    outline_0_var_connection_from_context = tmp_assign_source_47;

    tmp_defaults_4 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_assign_source_48 = MAKE_FUNCTION_urllib3$poolmanager$$$function_9_connection_from_pool_key( tmp_defaults_4 );
    assert( outline_0_var_connection_from_pool_key == NULL );
    outline_0_var_connection_from_pool_key = tmp_assign_source_48;

    tmp_defaults_5 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_5 );
    tmp_assign_source_49 = MAKE_FUNCTION_urllib3$poolmanager$$$function_10_connection_from_url( tmp_defaults_5 );
    assert( outline_0_var_connection_from_url == NULL );
    outline_0_var_connection_from_url = tmp_assign_source_49;

    tmp_assign_source_50 = MAKE_FUNCTION_urllib3$poolmanager$$$function_11__merge_pool_kwargs(  );
    assert( outline_0_var__merge_pool_kwargs == NULL );
    outline_0_var__merge_pool_kwargs = tmp_assign_source_50;

    tmp_defaults_6 = const_tuple_true_tuple;
    Py_INCREF( tmp_defaults_6 );
    tmp_assign_source_51 = MAKE_FUNCTION_urllib3$poolmanager$$$function_12_urlopen( tmp_defaults_6 );
    assert( outline_0_var_urlopen == NULL );
    outline_0_var_urlopen = tmp_assign_source_51;

    // Tried code:
    tmp_called_name_6 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_3 = const_str_plain_PoolManager;
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

        exception_lineno = 121;

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

        exception_lineno = 121;

        goto try_except_handler_4;
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

        exception_lineno = 121;

        goto try_except_handler_4;
    }
    if ( outline_0_var_proxy != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_proxy,
            outline_0_var_proxy
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_proxy
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_proxy
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

        exception_lineno = 121;

        goto try_except_handler_4;
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

        exception_lineno = 121;

        goto try_except_handler_4;
    }
    if ( outline_0_var___enter__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain___enter__,
            outline_0_var___enter__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain___enter__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain___enter__
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

        exception_lineno = 121;

        goto try_except_handler_4;
    }
    if ( outline_0_var___exit__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain___exit__,
            outline_0_var___exit__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain___exit__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain___exit__
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

        exception_lineno = 121;

        goto try_except_handler_4;
    }
    if ( outline_0_var__new_pool != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain__new_pool,
            outline_0_var__new_pool
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain__new_pool
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain__new_pool
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

        exception_lineno = 121;

        goto try_except_handler_4;
    }
    if ( outline_0_var_clear != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_clear,
            outline_0_var_clear
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_clear
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_clear
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

        exception_lineno = 121;

        goto try_except_handler_4;
    }
    if ( outline_0_var_connection_from_host != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_connection_from_host,
            outline_0_var_connection_from_host
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_connection_from_host
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_connection_from_host
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

        exception_lineno = 121;

        goto try_except_handler_4;
    }
    if ( outline_0_var_connection_from_context != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_connection_from_context,
            outline_0_var_connection_from_context
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_connection_from_context
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_connection_from_context
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

        exception_lineno = 121;

        goto try_except_handler_4;
    }
    if ( outline_0_var_connection_from_pool_key != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_connection_from_pool_key,
            outline_0_var_connection_from_pool_key
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_connection_from_pool_key
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_connection_from_pool_key
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

        exception_lineno = 121;

        goto try_except_handler_4;
    }
    if ( outline_0_var_connection_from_url != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_connection_from_url,
            outline_0_var_connection_from_url
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_connection_from_url
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_connection_from_url
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

        exception_lineno = 121;

        goto try_except_handler_4;
    }
    if ( outline_0_var__merge_pool_kwargs != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain__merge_pool_kwargs,
            outline_0_var__merge_pool_kwargs
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain__merge_pool_kwargs
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain__merge_pool_kwargs
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

        exception_lineno = 121;

        goto try_except_handler_4;
    }
    if ( outline_0_var_urlopen != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_urlopen,
            outline_0_var_urlopen
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_urlopen
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_urlopen
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

        exception_lineno = 121;

        goto try_except_handler_4;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_996ed43a98506bcce8dd420117477050->m_frame.f_lineno = 121;
    tmp_assign_source_52 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;

        goto try_except_handler_4;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_52;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager );
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

    Py_XDECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    Py_XDECREF( outline_0_var_proxy );
    outline_0_var_proxy = NULL;

    Py_XDECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    Py_XDECREF( outline_0_var___enter__ );
    outline_0_var___enter__ = NULL;

    Py_XDECREF( outline_0_var___exit__ );
    outline_0_var___exit__ = NULL;

    Py_XDECREF( outline_0_var__new_pool );
    outline_0_var__new_pool = NULL;

    Py_XDECREF( outline_0_var_clear );
    outline_0_var_clear = NULL;

    Py_XDECREF( outline_0_var_connection_from_host );
    outline_0_var_connection_from_host = NULL;

    Py_XDECREF( outline_0_var_connection_from_context );
    outline_0_var_connection_from_context = NULL;

    Py_XDECREF( outline_0_var_connection_from_pool_key );
    outline_0_var_connection_from_pool_key = NULL;

    Py_XDECREF( outline_0_var_connection_from_url );
    outline_0_var_connection_from_url = NULL;

    Py_XDECREF( outline_0_var__merge_pool_kwargs );
    outline_0_var__merge_pool_kwargs = NULL;

    Py_XDECREF( outline_0_var_urlopen );
    outline_0_var_urlopen = NULL;

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

    Py_XDECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    Py_XDECREF( outline_0_var_proxy );
    outline_0_var_proxy = NULL;

    Py_XDECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    Py_XDECREF( outline_0_var___enter__ );
    outline_0_var___enter__ = NULL;

    Py_XDECREF( outline_0_var___exit__ );
    outline_0_var___exit__ = NULL;

    Py_XDECREF( outline_0_var__new_pool );
    outline_0_var__new_pool = NULL;

    Py_XDECREF( outline_0_var_clear );
    outline_0_var_clear = NULL;

    Py_XDECREF( outline_0_var_connection_from_host );
    outline_0_var_connection_from_host = NULL;

    Py_XDECREF( outline_0_var_connection_from_context );
    outline_0_var_connection_from_context = NULL;

    Py_XDECREF( outline_0_var_connection_from_pool_key );
    outline_0_var_connection_from_pool_key = NULL;

    Py_XDECREF( outline_0_var_connection_from_url );
    outline_0_var_connection_from_url = NULL;

    Py_XDECREF( outline_0_var__merge_pool_kwargs );
    outline_0_var__merge_pool_kwargs = NULL;

    Py_XDECREF( outline_0_var_urlopen );
    outline_0_var_urlopen = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 121;
    goto try_except_handler_3;
    outline_result_1:;
    tmp_assign_source_36 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_PoolManager, tmp_assign_source_36 );
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
    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Tried code:
    tmp_assign_source_53 = PyTuple_New( 1 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_PoolManager );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolManager );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_53 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PoolManager" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 352;

        goto try_except_handler_5;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_53, 0, tmp_tuple_element_4 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_53;

    tmp_assign_source_54 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_54;

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


        exception_lineno = 352;

        goto try_except_handler_5;
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


        exception_lineno = 352;

        goto try_except_handler_5;
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


        exception_lineno = 352;

        goto try_except_handler_5;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 352;

        goto try_except_handler_5;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_bases_name_2 );
    tmp_assign_source_55 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_2 );

        exception_lineno = 352;

        goto try_except_handler_5;
    }
    Py_DECREF( tmp_metaclass_name_2 );
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_55;

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


        exception_lineno = 352;

        goto try_except_handler_5;
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


        exception_lineno = 352;

        goto try_except_handler_5;
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
    tmp_source_name_5 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___prepare__ );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 352;

        goto try_except_handler_5;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_5 = const_str_plain_ProxyManager;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_5 );
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_996ed43a98506bcce8dd420117477050->m_frame.f_lineno = 352;
    tmp_assign_source_56 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 352;

        goto try_except_handler_5;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_56 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_56;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_2);
    locals_dict_2 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_58 = const_str_digest_901e90eee70586f15ff5cd8bfbf848b6;
    assert( outline_1_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_58 );
    outline_1_var___module__ = tmp_assign_source_58;

    tmp_assign_source_59 = const_str_digest_3f3441160f61a71d44412f80bc2a80eb;
    assert( outline_1_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_59 );
    outline_1_var___doc__ = tmp_assign_source_59;

    tmp_assign_source_60 = const_str_plain_ProxyManager;
    assert( outline_1_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_60 );
    outline_1_var___qualname__ = tmp_assign_source_60;

    tmp_defaults_7 = const_tuple_int_pos_10_none_none_tuple;
    Py_INCREF( tmp_defaults_7 );
    tmp_assign_source_61 = MAKE_FUNCTION_urllib3$poolmanager$$$function_13___init__( tmp_defaults_7 );
    assert( outline_1_var___init__ == NULL );
    outline_1_var___init__ = tmp_assign_source_61;

    tmp_defaults_8 = const_tuple_none_str_plain_http_none_tuple;
    Py_INCREF( tmp_defaults_8 );
    tmp_assign_source_62 = MAKE_FUNCTION_urllib3$poolmanager$$$function_14_connection_from_host( tmp_defaults_8 );
    assert( outline_1_var_connection_from_host == NULL );
    outline_1_var_connection_from_host = tmp_assign_source_62;

    tmp_defaults_9 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_9 );
    tmp_assign_source_63 = MAKE_FUNCTION_urllib3$poolmanager$$$function_15__set_proxy_headers( tmp_defaults_9 );
    assert( outline_1_var__set_proxy_headers == NULL );
    outline_1_var__set_proxy_headers = tmp_assign_source_63;

    tmp_defaults_10 = const_tuple_true_tuple;
    Py_INCREF( tmp_defaults_10 );
    tmp_assign_source_64 = MAKE_FUNCTION_urllib3$poolmanager$$$function_16_urlopen( tmp_defaults_10 );
    assert( outline_1_var_urlopen == NULL );
    outline_1_var_urlopen = tmp_assign_source_64;

    // Tried code:
    tmp_called_name_8 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_8 );
    tmp_args_name_4 = PyTuple_New( 3 );
    tmp_tuple_element_6 = const_str_plain_ProxyManager;
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

        exception_lineno = 352;

        goto try_except_handler_6;
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

        exception_lineno = 352;

        goto try_except_handler_6;
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

        exception_lineno = 352;

        goto try_except_handler_6;
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

        exception_lineno = 352;

        goto try_except_handler_6;
    }
    if ( outline_1_var_connection_from_host != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_6,
            const_str_plain_connection_from_host,
            outline_1_var_connection_from_host
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_6,
            const_str_plain_connection_from_host
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_6,
                const_str_plain_connection_from_host
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

        exception_lineno = 352;

        goto try_except_handler_6;
    }
    if ( outline_1_var__set_proxy_headers != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_6,
            const_str_plain__set_proxy_headers,
            outline_1_var__set_proxy_headers
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_6,
            const_str_plain__set_proxy_headers
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_6,
                const_str_plain__set_proxy_headers
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

        exception_lineno = 352;

        goto try_except_handler_6;
    }
    if ( outline_1_var_urlopen != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_6,
            const_str_plain_urlopen,
            outline_1_var_urlopen
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_6,
            const_str_plain_urlopen
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_6,
                const_str_plain_urlopen
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

        exception_lineno = 352;

        goto try_except_handler_6;
    }
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_6 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_996ed43a98506bcce8dd420117477050->m_frame.f_lineno = 352;
    tmp_assign_source_65 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 352;

        goto try_except_handler_6;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_65;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
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

    Py_XDECREF( outline_1_var_connection_from_host );
    outline_1_var_connection_from_host = NULL;

    Py_XDECREF( outline_1_var__set_proxy_headers );
    outline_1_var__set_proxy_headers = NULL;

    Py_XDECREF( outline_1_var_urlopen );
    outline_1_var_urlopen = NULL;

    goto outline_result_2;
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

    Py_XDECREF( outline_1_var___qualname__ );
    outline_1_var___qualname__ = NULL;

    Py_XDECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    Py_XDECREF( outline_1_var___doc__ );
    outline_1_var___doc__ = NULL;

    Py_XDECREF( outline_1_var___init__ );
    outline_1_var___init__ = NULL;

    Py_XDECREF( outline_1_var_connection_from_host );
    outline_1_var_connection_from_host = NULL;

    Py_XDECREF( outline_1_var__set_proxy_headers );
    outline_1_var__set_proxy_headers = NULL;

    Py_XDECREF( outline_1_var_urlopen );
    outline_1_var_urlopen = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$poolmanager );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 352;
    goto try_except_handler_5;
    outline_result_2:;
    tmp_assign_source_57 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_ProxyManager, tmp_assign_source_57 );
    goto try_end_4;
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

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_996ed43a98506bcce8dd420117477050 );
#endif
    popFrameStack();

    assertFrameObject( frame_996ed43a98506bcce8dd420117477050 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_996ed43a98506bcce8dd420117477050 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_996ed43a98506bcce8dd420117477050, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_996ed43a98506bcce8dd420117477050->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_996ed43a98506bcce8dd420117477050, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    tmp_assign_source_66 = MAKE_FUNCTION_urllib3$poolmanager$$$function_17_proxy_from_url(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$poolmanager, (Nuitka_StringObject *)const_str_plain_proxy_from_url, tmp_assign_source_66 );

    return MOD_RETURN_VALUE( module_urllib3$poolmanager );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
