/* Generated code for Python source for module 'urllib3.contrib.socks'
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

/* The _module_urllib3$contrib$socks is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$contrib$socks;
PyDictObject *moduledict_urllib3$contrib$socks;

/* The module constants used, if any. */
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_headers;
static PyObject *const_str_plain_SOCKSHTTPSConnection;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_proxy_url;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_HTTPConnection;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_connection_pool_kw;
extern PyObject *const_str_plain_args;
static PyObject *const_str_plain_proxy_rdns;
static PyObject *const_tuple_str_plain_ConnectTimeoutError_str_plain_NewConnectionError_tuple;
static PyObject *const_str_plain_socket_err;
extern PyObject *const_str_plain_num_pools;
static PyObject *const_tuple_3edd429784647e827acaea459ec3b61a_tuple;
extern PyObject *const_str_plain_scheme;
static PyObject *const_str_plain_SOCKSConnection;
extern PyObject *const_str_plain_SocketError;
extern PyObject *const_str_plain_HTTPSConnection;
static PyObject *const_str_digest_f78fd7e71ec8b1168658a1182c635393;
extern PyObject *const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d;
static PyObject *const_str_digest_b03980105d8ed0a56e9e14d3250ee347;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_host;
static PyObject *const_str_plain_PROXY_TYPE_SOCKS5;
static PyObject *const_str_plain_rdns;
extern PyObject *const_str_plain_https;
extern PyObject *const_tuple_str_plain_DependencyWarning_tuple;
extern PyObject *const_str_plain_parse_url;
static PyObject *const_str_digest_75fb4308a53d1e344eda8ae00b794973;
extern PyObject *const_str_plain_conn;
static PyObject *const_str_plain_socks4;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_plain_ProxyError;
static PyObject *const_tuple_str_plain__socks_options_tuple;
extern PyObject *const_str_plain_DependencyWarning;
extern PyObject *const_str_digest_a93bc1dc732be398b86f8538baa37185;
extern PyObject *const_str_plain_poolmanager;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_username;
extern PyObject *const_str_plain___loader__;
static PyObject *const_tuple_4dd84140ab6753455e9d66f614d40e8e_tuple;
extern PyObject *const_str_plain__socks_options;
extern PyObject *const_int_pos_10;
static PyObject *const_str_digest_f72fad5ee1f5fa45bf4f9a22d2727edb;
extern PyObject *const_str_plain_exceptions;
static PyObject *const_str_digest_2aefadf3d76d6ea1554d4b4c222ace1b;
extern PyObject *const_str_plain_error;
static PyObject *const_str_plain_SOCKSHTTPConnectionPool;
extern PyObject *const_tuple_str_plain_error_str_plain_timeout_tuple;
extern PyObject *const_str_plain_NewConnectionError;
extern PyObject *const_str_plain_ModuleSpec;
static PyObject *const_str_plain_proxy_port;
static PyObject *const_str_plain_proxy_username;
static PyObject *const_tuple_str_plain_HTTPConnection_str_plain_HTTPSConnection_tuple;
extern PyObject *const_str_plain_HTTPSConnectionPool;
extern PyObject *const_str_plain_source_address;
extern PyObject *const_str_plain_connection;
static PyObject *const_str_plain_proxy_addr;
extern PyObject *const_str_plain_ssl;
extern PyObject *const_str_plain_pop;
static PyObject *const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain__new_conn;
static PyObject *const_tuple_3da18a7d3337b6123a393d0fac458e07_tuple;
extern PyObject *const_str_plain_connectionpool;
extern PyObject *const_str_plain_PoolManager;
static PyObject *const_str_digest_0db81917611a5fd74de2cba5c5857df4;
static PyObject *const_str_plain_proxy_type;
extern PyObject *const_str_plain_extra_kw;
extern PyObject *const_str_plain_socks;
static PyObject *const_str_plain_PROXY_TYPE_SOCKS4;
extern PyObject *const_str_plain_parsed;
extern PyObject *const_tuple_str_plain_HTTPConnectionPool_str_plain_HTTPSConnectionPool_tuple;
extern PyObject *const_str_digest_03224f9e3167cae45c1e00020c2975eb;
static PyObject *const_str_digest_eeea122c4ef21297597db82f300a3894;
static PyObject *const_str_plain_proxy_host;
static PyObject *const_str_plain_socks5h;
static PyObject *const_tuple_str_plain_PoolManager_tuple;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_d2feb5bdfccf41aa10971180163e4a5d;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_socks4a;
extern PyObject *const_str_plain_socket_options;
extern PyObject *const_str_plain_password;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_socks_version;
static PyObject *const_str_digest_dc47b5c985c62efa64cf26cdf57dd814;
extern PyObject *const_str_plain_SOCKSProxyManager;
extern PyObject *const_str_plain_ConnectTimeoutError;
extern PyObject *const_str_plain_socket;
extern PyObject *const_str_plain_port;
extern PyObject *const_str_plain_SocketTimeout;
static PyObject *const_str_digest_f46252f7edbbe06b2f6f437384187e97;
static PyObject *const_str_plain_proxy_password;
extern PyObject *const_tuple_str_plain_parse_url_tuple;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_create_connection;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_socks5;
extern PyObject *const_str_plain_HTTPConnectionPool;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_http;
extern PyObject *const_str_plain_pool_classes_by_scheme;
static PyObject *const_tuple_f77af430e701f2d42aed96f529281747_tuple;
extern PyObject *const_str_plain_ConnectionCls;
static PyObject *const_tuple_none_none_int_pos_10_none_tuple;
extern PyObject *const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
static PyObject *const_str_digest_3f4b02086b794275b5d29bc539f749a6;
extern PyObject *const_str_digest_e03852224018ed217937e454110a99e9;
static PyObject *const_str_plain_socks_options;
static PyObject *const_str_plain_SOCKSHTTPSConnectionPool;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_SOCKSHTTPSConnection = UNSTREAM_STRING( &constant_bin[ 872531 ], 20, 1 );
    const_str_plain_proxy_rdns = UNSTREAM_STRING( &constant_bin[ 872551 ], 10, 1 );
    const_tuple_str_plain_ConnectTimeoutError_str_plain_NewConnectionError_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ConnectTimeoutError_str_plain_NewConnectionError_tuple, 0, const_str_plain_ConnectTimeoutError ); Py_INCREF( const_str_plain_ConnectTimeoutError );
    PyTuple_SET_ITEM( const_tuple_str_plain_ConnectTimeoutError_str_plain_NewConnectionError_tuple, 1, const_str_plain_NewConnectionError ); Py_INCREF( const_str_plain_NewConnectionError );
    const_str_plain_socket_err = UNSTREAM_STRING( &constant_bin[ 872561 ], 10, 1 );
    const_tuple_3edd429784647e827acaea459ec3b61a_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_3edd429784647e827acaea459ec3b61a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_3edd429784647e827acaea459ec3b61a_tuple, 1, const_str_plain_proxy_url ); Py_INCREF( const_str_plain_proxy_url );
    PyTuple_SET_ITEM( const_tuple_3edd429784647e827acaea459ec3b61a_tuple, 2, const_str_plain_username ); Py_INCREF( const_str_plain_username );
    PyTuple_SET_ITEM( const_tuple_3edd429784647e827acaea459ec3b61a_tuple, 3, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    PyTuple_SET_ITEM( const_tuple_3edd429784647e827acaea459ec3b61a_tuple, 4, const_str_plain_num_pools ); Py_INCREF( const_str_plain_num_pools );
    PyTuple_SET_ITEM( const_tuple_3edd429784647e827acaea459ec3b61a_tuple, 5, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_3edd429784647e827acaea459ec3b61a_tuple, 6, const_str_plain_connection_pool_kw ); Py_INCREF( const_str_plain_connection_pool_kw );
    PyTuple_SET_ITEM( const_tuple_3edd429784647e827acaea459ec3b61a_tuple, 7, const_str_plain_parsed ); Py_INCREF( const_str_plain_parsed );
    const_str_plain_socks_version = UNSTREAM_STRING( &constant_bin[ 872571 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_3edd429784647e827acaea459ec3b61a_tuple, 8, const_str_plain_socks_version ); Py_INCREF( const_str_plain_socks_version );
    const_str_plain_rdns = UNSTREAM_STRING( &constant_bin[ 872557 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_3edd429784647e827acaea459ec3b61a_tuple, 9, const_str_plain_rdns ); Py_INCREF( const_str_plain_rdns );
    const_str_plain_socks_options = UNSTREAM_STRING( &constant_bin[ 872584 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_3edd429784647e827acaea459ec3b61a_tuple, 10, const_str_plain_socks_options ); Py_INCREF( const_str_plain_socks_options );
    PyTuple_SET_ITEM( const_tuple_3edd429784647e827acaea459ec3b61a_tuple, 11, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_plain_SOCKSConnection = UNSTREAM_STRING( &constant_bin[ 872597 ], 15, 1 );
    const_str_digest_f78fd7e71ec8b1168658a1182c635393 = UNSTREAM_STRING( &constant_bin[ 872612 ], 194, 0 );
    const_str_digest_b03980105d8ed0a56e9e14d3250ee347 = UNSTREAM_STRING( &constant_bin[ 872806 ], 749, 0 );
    const_str_plain_PROXY_TYPE_SOCKS5 = UNSTREAM_STRING( &constant_bin[ 873555 ], 17, 1 );
    const_str_digest_75fb4308a53d1e344eda8ae00b794973 = UNSTREAM_STRING( &constant_bin[ 873572 ], 71, 0 );
    const_str_plain_socks4 = UNSTREAM_STRING( &constant_bin[ 873643 ], 6, 1 );
    const_tuple_str_plain__socks_options_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__socks_options_tuple, 0, const_str_plain__socks_options ); Py_INCREF( const_str_plain__socks_options );
    const_tuple_4dd84140ab6753455e9d66f614d40e8e_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_4dd84140ab6753455e9d66f614d40e8e_tuple, 0, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    PyTuple_SET_ITEM( const_tuple_4dd84140ab6753455e9d66f614d40e8e_tuple, 1, const_str_plain___qualname__ ); Py_INCREF( const_str_plain___qualname__ );
    PyTuple_SET_ITEM( const_tuple_4dd84140ab6753455e9d66f614d40e8e_tuple, 2, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_4dd84140ab6753455e9d66f614d40e8e_tuple, 3, const_str_plain_ConnectionCls ); Py_INCREF( const_str_plain_ConnectionCls );
    const_str_digest_f72fad5ee1f5fa45bf4f9a22d2727edb = UNSTREAM_STRING( &constant_bin[ 873649 ], 65, 0 );
    const_str_digest_2aefadf3d76d6ea1554d4b4c222ace1b = UNSTREAM_STRING( &constant_bin[ 873714 ], 25, 0 );
    const_str_plain_SOCKSHTTPConnectionPool = UNSTREAM_STRING( &constant_bin[ 873739 ], 23, 1 );
    const_str_plain_proxy_port = UNSTREAM_STRING( &constant_bin[ 873762 ], 10, 1 );
    const_str_plain_proxy_username = UNSTREAM_STRING( &constant_bin[ 873772 ], 14, 1 );
    const_tuple_str_plain_HTTPConnection_str_plain_HTTPSConnection_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HTTPConnection_str_plain_HTTPSConnection_tuple, 0, const_str_plain_HTTPConnection ); Py_INCREF( const_str_plain_HTTPConnection );
    PyTuple_SET_ITEM( const_tuple_str_plain_HTTPConnection_str_plain_HTTPSConnection_tuple, 1, const_str_plain_HTTPSConnection ); Py_INCREF( const_str_plain_HTTPSConnection );
    const_str_plain_proxy_addr = UNSTREAM_STRING( &constant_bin[ 873786 ], 10, 1 );
    const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple, 3, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_tuple_3da18a7d3337b6123a393d0fac458e07_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_3da18a7d3337b6123a393d0fac458e07_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_3da18a7d3337b6123a393d0fac458e07_tuple, 1, const_str_plain_extra_kw ); Py_INCREF( const_str_plain_extra_kw );
    PyTuple_SET_ITEM( const_tuple_3da18a7d3337b6123a393d0fac458e07_tuple, 2, const_str_plain_conn ); Py_INCREF( const_str_plain_conn );
    PyTuple_SET_ITEM( const_tuple_3da18a7d3337b6123a393d0fac458e07_tuple, 3, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_3da18a7d3337b6123a393d0fac458e07_tuple, 4, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    const_str_digest_0db81917611a5fd74de2cba5c5857df4 = UNSTREAM_STRING( &constant_bin[ 873796 ], 24, 0 );
    const_str_plain_proxy_type = UNSTREAM_STRING( &constant_bin[ 873820 ], 10, 1 );
    const_str_plain_PROXY_TYPE_SOCKS4 = UNSTREAM_STRING( &constant_bin[ 873830 ], 17, 1 );
    const_str_digest_eeea122c4ef21297597db82f300a3894 = UNSTREAM_STRING( &constant_bin[ 873847 ], 104, 0 );
    const_str_plain_proxy_host = UNSTREAM_STRING( &constant_bin[ 866354 ], 10, 1 );
    const_str_plain_socks5h = UNSTREAM_STRING( &constant_bin[ 873951 ], 7, 1 );
    const_tuple_str_plain_PoolManager_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PoolManager_tuple, 0, const_str_plain_PoolManager ); Py_INCREF( const_str_plain_PoolManager );
    const_str_digest_d2feb5bdfccf41aa10971180163e4a5d = UNSTREAM_STRING( &constant_bin[ 873958 ], 41, 0 );
    const_str_plain_socks4a = UNSTREAM_STRING( &constant_bin[ 873999 ], 7, 1 );
    const_str_digest_dc47b5c985c62efa64cf26cdf57dd814 = UNSTREAM_STRING( &constant_bin[ 874006 ], 30, 0 );
    const_str_digest_f46252f7edbbe06b2f6f437384187e97 = UNSTREAM_STRING( &constant_bin[ 874036 ], 26, 0 );
    const_str_plain_proxy_password = UNSTREAM_STRING( &constant_bin[ 874062 ], 14, 1 );
    const_str_plain_socks5 = UNSTREAM_STRING( &constant_bin[ 873951 ], 6, 1 );
    const_tuple_f77af430e701f2d42aed96f529281747_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_f77af430e701f2d42aed96f529281747_tuple, 0, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    PyTuple_SET_ITEM( const_tuple_f77af430e701f2d42aed96f529281747_tuple, 1, const_str_plain___qualname__ ); Py_INCREF( const_str_plain___qualname__ );
    PyTuple_SET_ITEM( const_tuple_f77af430e701f2d42aed96f529281747_tuple, 2, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_f77af430e701f2d42aed96f529281747_tuple, 3, const_str_plain___doc__ ); Py_INCREF( const_str_plain___doc__ );
    PyTuple_SET_ITEM( const_tuple_f77af430e701f2d42aed96f529281747_tuple, 4, const_str_plain_pool_classes_by_scheme ); Py_INCREF( const_str_plain_pool_classes_by_scheme );
    PyTuple_SET_ITEM( const_tuple_f77af430e701f2d42aed96f529281747_tuple, 5, const_str_plain___init__ ); Py_INCREF( const_str_plain___init__ );
    const_tuple_none_none_int_pos_10_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_none_none_int_pos_10_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_int_pos_10_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_int_pos_10_none_tuple, 2, const_int_pos_10 ); Py_INCREF( const_int_pos_10 );
    PyTuple_SET_ITEM( const_tuple_none_none_int_pos_10_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_str_digest_3f4b02086b794275b5d29bc539f749a6 = UNSTREAM_STRING( &constant_bin[ 874076 ], 102, 0 );
    const_str_plain_SOCKSHTTPSConnectionPool = UNSTREAM_STRING( &constant_bin[ 874178 ], 24, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$contrib$socks( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_2d2641af977563ea0557366720a7b98e;
static PyCodeObject *codeobj_1e9e925113bc73a0b73b3327812aa747;
static PyCodeObject *codeobj_4e715816d994c77420a01fda31efbbe9;
static PyCodeObject *codeobj_dd267abf1895d3acf3e9b57ea80cbf39;
static PyCodeObject *codeobj_ad5a2edad68000c12bd48a4caf2e64b1;
static PyCodeObject *codeobj_a8f81883ebe9ff4b94e7588312fc18a4;
static PyCodeObject *codeobj_3ef22eea72c350110da8909998446b00;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_3f4b02086b794275b5d29bc539f749a6;
    codeobj_2d2641af977563ea0557366720a7b98e = MAKE_CODEOBJ( module_filename_obj, const_str_digest_dc47b5c985c62efa64cf26cdf57dd814, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_1e9e925113bc73a0b73b3327812aa747 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SOCKSHTTPConnectionPool, 133, const_tuple_4dd84140ab6753455e9d66f614d40e8e_tuple, 0, 0, CO_NOFREE );
    codeobj_4e715816d994c77420a01fda31efbbe9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SOCKSHTTPSConnectionPool, 137, const_tuple_4dd84140ab6753455e9d66f614d40e8e_tuple, 0, 0, CO_NOFREE );
    codeobj_dd267abf1895d3acf3e9b57ea80cbf39 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SOCKSProxyManager, 141, const_tuple_f77af430e701f2d42aed96f529281747_tuple, 0, 0, CO_NOFREE );
    codeobj_ad5a2edad68000c12bd48a4caf2e64b1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 63, const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS );
    codeobj_a8f81883ebe9ff4b94e7588312fc18a4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 151, const_tuple_3edd429784647e827acaea459ec3b61a_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS );
    codeobj_3ef22eea72c350110da8909998446b00 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__new_conn, 67, const_tuple_3da18a7d3337b6123a393d0fac458e07_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$contrib$socks$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$socks$$$function_2__new_conn(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$socks$$$function_3___init__( PyObject *defaults );


// The module function definitions.
static PyObject *impl_urllib3$contrib$socks$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_object_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ad5a2edad68000c12bd48a4caf2e64b1 = NULL;

    struct Nuitka_FrameObject *frame_ad5a2edad68000c12bd48a4caf2e64b1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ad5a2edad68000c12bd48a4caf2e64b1, codeobj_ad5a2edad68000c12bd48a4caf2e64b1, module_urllib3$contrib$socks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ad5a2edad68000c12bd48a4caf2e64b1 = cache_frame_ad5a2edad68000c12bd48a4caf2e64b1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ad5a2edad68000c12bd48a4caf2e64b1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ad5a2edad68000c12bd48a4caf2e64b1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_ad5a2edad68000c12bd48a4caf2e64b1->m_frame.f_lineno = 64;
    tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain__socks_options_tuple, 0 ) );

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "oooN";
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
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__socks_options, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 64;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSConnection );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSConnection );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SOCKSConnection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "oooN";
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

        exception_lineno = 65;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = par_args;

    if ( tmp_dircall_arg2_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg3_1 = par_kwargs;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_unused = impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad5a2edad68000c12bd48a4caf2e64b1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad5a2edad68000c12bd48a4caf2e64b1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ad5a2edad68000c12bd48a4caf2e64b1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ad5a2edad68000c12bd48a4caf2e64b1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ad5a2edad68000c12bd48a4caf2e64b1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ad5a2edad68000c12bd48a4caf2e64b1,
        type_description_1,
        par_self,
        par_args,
        par_kwargs,
        NULL
    );


    // Release cached frame.
    if ( frame_ad5a2edad68000c12bd48a4caf2e64b1 == cache_frame_ad5a2edad68000c12bd48a4caf2e64b1 )
    {
        Py_DECREF( frame_ad5a2edad68000c12bd48a4caf2e64b1 );
    }
    cache_frame_ad5a2edad68000c12bd48a4caf2e64b1 = NULL;

    assertFrameObject( frame_ad5a2edad68000c12bd48a4caf2e64b1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

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

    Py_XDECREF( par_args );
    par_args = NULL;

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
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_1___init__ );
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


static PyObject *impl_urllib3$contrib$socks$$$function_2__new_conn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *var_error = NULL;
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
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
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
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_type_5;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    static struct Nuitka_FrameObject *cache_frame_3ef22eea72c350110da8909998446b00 = NULL;

    struct Nuitka_FrameObject *frame_3ef22eea72c350110da8909998446b00;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyDict_New();
    assert( var_extra_kw == NULL );
    var_extra_kw = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3ef22eea72c350110da8909998446b00, codeobj_3ef22eea72c350110da8909998446b00, module_urllib3$contrib$socks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3ef22eea72c350110da8909998446b00 = cache_frame_3ef22eea72c350110da8909998446b00;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3ef22eea72c350110da8909998446b00 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3ef22eea72c350110da8909998446b00 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_source_address );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 72;
        type_description_1 = "ooooo";
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

        exception_lineno = 73;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_source_address );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "ooooo";
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

        exception_lineno = 73;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_plain_source_address;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "ooooo";
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

        exception_lineno = 75;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_socket_options );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 75;
        type_description_1 = "ooooo";
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

        exception_lineno = 76;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_socket_options );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "ooooo";
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

        exception_lineno = 76;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = const_str_plain_socket_options;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    // Tried code:
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_socks );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socks );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_create_connection );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
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

        exception_lineno = 80;
        type_description_1 = "ooooo";
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

        exception_lineno = 80;
        type_description_1 = "ooooo";
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

        exception_lineno = 80;
        type_description_1 = "ooooo";
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

        exception_lineno = 80;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 7 );
    tmp_dict_key_1 = const_str_plain_proxy_type;
    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__socks_options );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 81;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_1 = const_str_plain_socks_version;
    tmp_dict_value_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 81;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_proxy_addr;
    tmp_source_name_9 = par_self;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__socks_options );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 82;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_2 = const_str_plain_proxy_host;
    tmp_dict_value_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 82;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_proxy_port;
    tmp_source_name_10 = par_self;

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__socks_options );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 83;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_3 = const_str_plain_proxy_port;
    tmp_dict_value_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 83;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_proxy_username;
    tmp_source_name_11 = par_self;

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__socks_options );
    if ( tmp_subscribed_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 84;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_4 = const_str_plain_username;
    tmp_dict_value_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscribed_name_4 );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 84;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_proxy_password;
    tmp_source_name_12 = par_self;

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__socks_options );
    if ( tmp_subscribed_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 85;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_5 = const_str_plain_password;
    tmp_dict_value_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    Py_DECREF( tmp_subscribed_name_5 );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 85;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_proxy_rdns;
    tmp_source_name_13 = par_self;

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_subscribed_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__socks_options );
    if ( tmp_subscribed_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 86;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_6 = const_str_plain_rdns;
    tmp_dict_value_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    Py_DECREF( tmp_subscribed_name_6 );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 86;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_7 = const_str_plain_timeout;
    tmp_source_name_14 = par_self;

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_timeout );
    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 87;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = var_extra_kw;

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "extra_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_assign_source_2 = impl___internal__$$$function_4_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "ooooo";
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_3ef22eea72c350110da8909998446b00, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_3ef22eea72c350110da8909998446b00, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SocketTimeout );

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

        exception_lineno = 91;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }

    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "ooooo";
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );

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

        exception_lineno = 92;
        type_description_1 = "ooooo";
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

        exception_lineno = 93;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }

    tmp_left_name_1 = const_str_digest_03224f9e3167cae45c1e00020c2975eb;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_source_name_15 = par_self;

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_host );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 94;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
    tmp_source_name_16 = par_self;

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_timeout );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 94;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    frame_3ef22eea72c350110da8909998446b00->m_frame.f_lineno = 92;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 92;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto try_except_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_2__new_conn );
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
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_socks );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socks );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_ProxyError );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 96;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_compare_right_2 );
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
    tmp_source_name_18 = var_e;

    CHECK_OBJECT( tmp_source_name_18 );
    tmp_cond_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_socket_err );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 99;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
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
    tmp_source_name_19 = var_e;

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "e" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_socket_err );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    assert( var_error == NULL );
    var_error = tmp_assign_source_5;

    tmp_isinstance_inst_1 = var_error;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SocketTimeout );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketTimeout );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SocketTimeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ConnectTimeoutError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        type_description_1 = "ooooo";
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

        exception_lineno = 103;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_left_name_2 = const_str_digest_03224f9e3167cae45c1e00020c2975eb;
    tmp_right_name_2 = PyTuple_New( 2 );
    tmp_source_name_20 = par_self;

    if ( tmp_source_name_20 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_host );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 105;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_4 );
    tmp_source_name_21 = par_self;

    if ( tmp_source_name_21 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_timeout );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 105;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_4 );
    tmp_args_element_name_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    frame_3ef22eea72c350110da8909998446b00->m_frame.f_lineno = 102;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 102;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto try_except_handler_5;
    goto branch_end_6;
    branch_no_6:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_NewConnectionError );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NewConnectionError );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NewConnectionError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_5 = par_self;

    if ( tmp_args_element_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_left_name_3 = const_str_digest_a93bc1dc732be398b86f8538baa37185;
    tmp_right_name_3 = var_error;

    CHECK_OBJECT( tmp_right_name_3 );
    tmp_args_element_name_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    frame_3ef22eea72c350110da8909998446b00->m_frame.f_lineno = 108;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    exception_type = tmp_raise_type_3;
    exception_lineno = 108;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto try_except_handler_5;
    branch_end_6:;
    goto branch_end_5;
    branch_no_5:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_NewConnectionError );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NewConnectionError );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NewConnectionError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_7 = par_self;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_left_name_4 = const_str_digest_a93bc1dc732be398b86f8538baa37185;
    tmp_right_name_4 = var_e;

    if ( tmp_right_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "e" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    frame_3ef22eea72c350110da8909998446b00->m_frame.f_lineno = 113;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    exception_type = tmp_raise_type_4;
    exception_lineno = 113;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto try_except_handler_5;
    branch_end_5:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_2__new_conn );
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
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SocketError );

    if (unlikely( tmp_compare_right_3 == NULL ))
    {
        tmp_compare_right_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketError );
    }

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SocketError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }

    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_3 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_6 = PyThreadState_GET()->exc_value;
    {
        PyObject *old = var_e;
        var_e = tmp_assign_source_6;
        Py_INCREF( var_e );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_NewConnectionError );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NewConnectionError );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NewConnectionError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        type_description_1 = "ooooo";
        goto try_except_handler_6;
    }

    tmp_args_element_name_9 = par_self;

    if ( tmp_args_element_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        type_description_1 = "ooooo";
        goto try_except_handler_6;
    }

    tmp_left_name_5 = const_str_digest_a93bc1dc732be398b86f8538baa37185;
    tmp_right_name_5 = var_e;

    CHECK_OBJECT( tmp_right_name_5 );
    tmp_args_element_name_10 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description_1 = "ooooo";
        goto try_except_handler_6;
    }
    frame_3ef22eea72c350110da8909998446b00->m_frame.f_lineno = 119;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_raise_type_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "ooooo";
        goto try_except_handler_6;
    }
    exception_type = tmp_raise_type_5;
    exception_lineno = 119;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto try_except_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_2__new_conn );
    return NULL;
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

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_7;
    branch_no_7:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 78;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_3ef22eea72c350110da8909998446b00->m_frame) frame_3ef22eea72c350110da8909998446b00->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_3;
    branch_end_7:;
    branch_end_4:;
    branch_end_3:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_2__new_conn );
    return NULL;
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
    // End of try:
    try_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_3ef22eea72c350110da8909998446b00 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_3ef22eea72c350110da8909998446b00 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3ef22eea72c350110da8909998446b00, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3ef22eea72c350110da8909998446b00->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3ef22eea72c350110da8909998446b00, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3ef22eea72c350110da8909998446b00,
        type_description_1,
        par_self,
        var_extra_kw,
        var_conn,
        var_e,
        var_error
    );


    // Release cached frame.
    if ( frame_3ef22eea72c350110da8909998446b00 == cache_frame_3ef22eea72c350110da8909998446b00 )
    {
        Py_DECREF( frame_3ef22eea72c350110da8909998446b00 );
    }
    cache_frame_3ef22eea72c350110da8909998446b00 = NULL;

    assertFrameObject( frame_3ef22eea72c350110da8909998446b00 );

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
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_2__new_conn );
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

    Py_XDECREF( var_extra_kw );
    var_extra_kw = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_error );
    var_error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_2__new_conn );
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


static PyObject *impl_urllib3$contrib$socks$$$function_3___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_proxy_url = python_pars[ 1 ];
    PyObject *par_username = python_pars[ 2 ];
    PyObject *par_password = python_pars[ 3 ];
    PyObject *par_num_pools = python_pars[ 4 ];
    PyObject *par_headers = python_pars[ 5 ];
    PyObject *par_connection_pool_kw = python_pars[ 6 ];
    PyObject *var_parsed = NULL;
    PyObject *var_socks_version = NULL;
    PyObject *var_rdns = NULL;
    PyObject *var_socks_options = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
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
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_object_name_1;
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
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_a8f81883ebe9ff4b94e7588312fc18a4 = NULL;

    struct Nuitka_FrameObject *frame_a8f81883ebe9ff4b94e7588312fc18a4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a8f81883ebe9ff4b94e7588312fc18a4, codeobj_a8f81883ebe9ff4b94e7588312fc18a4, module_urllib3$contrib$socks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a8f81883ebe9ff4b94e7588312fc18a4 = cache_frame_a8f81883ebe9ff4b94e7588312fc18a4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a8f81883ebe9ff4b94e7588312fc18a4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a8f81883ebe9ff4b94e7588312fc18a4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_parse_url );

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

        exception_lineno = 153;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_proxy_url;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_a8f81883ebe9ff4b94e7588312fc18a4->m_frame.f_lineno = 153;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }
    assert( var_parsed == NULL );
    var_parsed = tmp_assign_source_1;

    tmp_source_name_1 = var_parsed;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_scheme );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_socks5;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 155;
        type_description_1 = "oooooooooooN";
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_socks );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socks );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_PROXY_TYPE_SOCKS5 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }
    assert( var_socks_version == NULL );
    var_socks_version = tmp_assign_source_2;

    tmp_assign_source_3 = Py_False;
    assert( var_rdns == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_rdns = tmp_assign_source_3;

    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_3 = var_parsed;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parsed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 158;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_scheme );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_str_plain_socks5h;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 158;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_socks );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socks );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_PROXY_TYPE_SOCKS5 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }
    assert( var_socks_version == NULL );
    var_socks_version = tmp_assign_source_4;

    tmp_assign_source_5 = Py_True;
    assert( var_rdns == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_rdns = tmp_assign_source_5;

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_5 = var_parsed;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parsed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 161;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_scheme );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_str_plain_socks4;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 161;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_socks );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socks );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_PROXY_TYPE_SOCKS4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }
    assert( var_socks_version == NULL );
    var_socks_version = tmp_assign_source_6;

    tmp_assign_source_7 = Py_False;
    assert( var_rdns == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_rdns = tmp_assign_source_7;

    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_7 = var_parsed;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parsed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 164;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_scheme );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = const_str_plain_socks4a;
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 164;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_cmp_Eq_4 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_socks );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socks );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 165;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_PROXY_TYPE_SOCKS4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }
    assert( var_socks_version == NULL );
    var_socks_version = tmp_assign_source_8;

    tmp_assign_source_9 = Py_True;
    assert( var_rdns == NULL );
    Py_INCREF( tmp_assign_source_9 );
    var_rdns = tmp_assign_source_9;

    goto branch_end_4;
    branch_no_4:;
    tmp_left_name_1 = const_str_digest_d2feb5bdfccf41aa10971180163e4a5d;
    tmp_right_name_1 = par_proxy_url;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy_url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 169;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }
    frame_a8f81883ebe9ff4b94e7588312fc18a4->m_frame.f_lineno = 168;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 168;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooN";
    goto frame_exception_exit_1;
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    tmp_assattr_name_1 = par_proxy_url;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy_url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;
        type_description_1 = "oooooooooooN";
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

        exception_lineno = 172;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_proxy_url, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = _PyDict_NewPresized( 6 );
    tmp_dict_key_1 = const_str_plain_socks_version;
    tmp_dict_value_1 = var_socks_version;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "socks_version" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_10, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_proxy_host;
    tmp_source_name_9 = var_parsed;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parsed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_host );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_10 );

        exception_lineno = 176;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_10, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_proxy_port;
    tmp_source_name_10 = var_parsed;

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parsed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_port );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_10 );

        exception_lineno = 177;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_10, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_username;
    tmp_dict_value_4 = par_username;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_10, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_password;
    tmp_dict_value_5 = par_password;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_10, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_rdns;
    tmp_dict_value_6 = var_rdns;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rdns" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_10, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    assert( var_socks_options == NULL );
    var_socks_options = tmp_assign_source_10;

    tmp_ass_subvalue_1 = var_socks_options;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_ass_subscribed_1 = par_connection_pool_kw;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connection_pool_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_plain__socks_options;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SOCKSProxyManager" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "oooooooooooN";
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

        exception_lineno = 184;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_11 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_num_pools;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "num_pools" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_headers;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
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

        exception_lineno = 185;
        type_description_1 = "oooooooooooN";
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


        exception_lineno = 184;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SOCKSProxyManager" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_pool_classes_by_scheme );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "oooooooooooN";
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

        exception_lineno = 188;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_pool_classes_by_scheme, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 188;
        type_description_1 = "oooooooooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8f81883ebe9ff4b94e7588312fc18a4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8f81883ebe9ff4b94e7588312fc18a4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a8f81883ebe9ff4b94e7588312fc18a4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a8f81883ebe9ff4b94e7588312fc18a4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a8f81883ebe9ff4b94e7588312fc18a4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a8f81883ebe9ff4b94e7588312fc18a4,
        type_description_1,
        par_self,
        par_proxy_url,
        par_username,
        par_password,
        par_num_pools,
        par_headers,
        par_connection_pool_kw,
        var_parsed,
        var_socks_version,
        var_rdns,
        var_socks_options,
        NULL
    );


    // Release cached frame.
    if ( frame_a8f81883ebe9ff4b94e7588312fc18a4 == cache_frame_a8f81883ebe9ff4b94e7588312fc18a4 )
    {
        Py_DECREF( frame_a8f81883ebe9ff4b94e7588312fc18a4 );
    }
    cache_frame_a8f81883ebe9ff4b94e7588312fc18a4 = NULL;

    assertFrameObject( frame_a8f81883ebe9ff4b94e7588312fc18a4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_3___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_proxy_url );
    par_proxy_url = NULL;

    Py_XDECREF( par_username );
    par_username = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;

    Py_XDECREF( par_num_pools );
    par_num_pools = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( par_connection_pool_kw );
    par_connection_pool_kw = NULL;

    Py_XDECREF( var_parsed );
    var_parsed = NULL;

    Py_XDECREF( var_socks_version );
    var_socks_version = NULL;

    Py_XDECREF( var_rdns );
    var_rdns = NULL;

    Py_XDECREF( var_socks_options );
    var_socks_options = NULL;

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

    Py_XDECREF( par_username );
    par_username = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;

    Py_XDECREF( par_num_pools );
    par_num_pools = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( par_connection_pool_kw );
    par_connection_pool_kw = NULL;

    Py_XDECREF( var_parsed );
    var_parsed = NULL;

    Py_XDECREF( var_socks_version );
    var_socks_version = NULL;

    Py_XDECREF( var_rdns );
    var_rdns = NULL;

    Py_XDECREF( var_socks_options );
    var_socks_options = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks$$$function_3___init__ );
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



static PyObject *MAKE_FUNCTION_urllib3$contrib$socks$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$socks$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_0db81917611a5fd74de2cba5c5857df4,
#endif
        codeobj_ad5a2edad68000c12bd48a4caf2e64b1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$contrib$socks,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$socks$$$function_2__new_conn(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$socks$$$function_2__new_conn,
        const_str_plain__new_conn,
#if PYTHON_VERSION >= 330
        const_str_digest_2aefadf3d76d6ea1554d4b4c222ace1b,
#endif
        codeobj_3ef22eea72c350110da8909998446b00,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$contrib$socks,
        const_str_digest_f72fad5ee1f5fa45bf4f9a22d2727edb,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$socks$$$function_3___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$socks$$$function_3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_f46252f7edbbe06b2f6f437384187e97,
#endif
        codeobj_a8f81883ebe9ff4b94e7588312fc18a4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$contrib$socks,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$contrib$socks =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.contrib.socks",   /* m_name */
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

MOD_INIT_DECL( urllib3$contrib$socks )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$contrib$socks );
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
    puts("urllib3.contrib.socks: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.contrib.socks: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$contrib$socks" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$contrib$socks = Py_InitModule4(
        "urllib3.contrib.socks",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_urllib3$contrib$socks = PyModule_Create( &mdef_urllib3$contrib$socks );
#endif

    moduledict_urllib3$contrib$socks = MODULE_DICT( module_urllib3$contrib$socks );

    CHECK_OBJECT( module_urllib3$contrib$socks );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d0cac7c67d1189a986b25b7cf105347d, module_urllib3$contrib$socks );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var__new_conn = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_1_var___qualname__ = NULL;
    PyObject *outline_1_var___module__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_2_var___qualname__ = NULL;
    PyObject *outline_2_var___module__ = NULL;
    PyObject *outline_2_var_ConnectionCls = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_3_var___qualname__ = NULL;
    PyObject *outline_3_var___module__ = NULL;
    PyObject *outline_3_var_ConnectionCls = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_4_var___qualname__ = NULL;
    PyObject *outline_4_var___module__ = NULL;
    PyObject *outline_4_var___doc__ = NULL;
    PyObject *outline_4_var_pool_classes_by_scheme = NULL;
    PyObject *outline_4_var___init__ = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
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
    PyObject *tmp_called_name_12;
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
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
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
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
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
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_metaclass_name_3;
    PyObject *tmp_metaclass_name_4;
    PyObject *tmp_metaclass_name_5;
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
    PyObject *tmp_source_name_6;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1e9e925113bc73a0b73b3327812aa747_2 = NULL;

    struct Nuitka_FrameObject *frame_1e9e925113bc73a0b73b3327812aa747_2;

    static struct Nuitka_FrameObject *cache_frame_4e715816d994c77420a01fda31efbbe9_3 = NULL;

    struct Nuitka_FrameObject *frame_4e715816d994c77420a01fda31efbbe9_3;

    static struct Nuitka_FrameObject *cache_frame_dd267abf1895d3acf3e9b57ea80cbf39_4 = NULL;

    struct Nuitka_FrameObject *frame_dd267abf1895d3acf3e9b57ea80cbf39_4;

    struct Nuitka_FrameObject *frame_2d2641af977563ea0557366720a7b98e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
    tmp_assign_source_1 = const_str_digest_b03980105d8ed0a56e9e14d3250ee347;
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_3f4b02086b794275b5d29bc539f749a6;
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_2d2641af977563ea0557366720a7b98e = MAKE_MODULE_FRAME( codeobj_2d2641af977563ea0557366720a7b98e, module_urllib3$contrib$socks );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_2d2641af977563ea0557366720a7b98e );
    assert( Py_REFCNT( frame_2d2641af977563ea0557366720a7b98e ) == 2 );

    // Framed code:
    frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_e03852224018ed217937e454110a99e9;
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = 24;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( tmp_import_name_from_1 != NULL );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
    // Tried code:
    tmp_name_name_1 = const_str_plain_socks;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3$contrib$socks;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = 27;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_socks, tmp_assign_source_8 );
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_2d2641af977563ea0557366720a7b98e, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_2d2641af977563ea0557366720a7b98e, exception_keeper_lineno_1 );
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


        exception_lineno = 28;

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
    tmp_name_name_2 = const_str_plain_warnings;
    tmp_globals_name_2 = (PyObject *)moduledict_urllib3$contrib$socks;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = 29;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_9 );
    tmp_name_name_3 = const_str_plain_exceptions;
    tmp_globals_name_3 = (PyObject *)moduledict_urllib3$contrib$socks;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_DependencyWarning_tuple;
    tmp_level_name_3 = const_int_pos_2;
    frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = 30;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_2;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_DependencyWarning );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_DependencyWarning, tmp_assign_source_10 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_warnings );

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

        exception_lineno = 32;

        goto try_except_handler_2;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = const_str_digest_f78fd7e71ec8b1168658a1182c635393;
    tmp_args_element_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_DependencyWarning );

    if (unlikely( tmp_args_element_name_4 == NULL ))
    {
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DependencyWarning );
    }

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DependencyWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;

        goto try_except_handler_2;
    }

    frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = 32;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 39;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2d2641af977563ea0557366720a7b98e->m_frame) frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 26;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2d2641af977563ea0557366720a7b98e->m_frame) frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_end_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
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
    // End of try:
    try_end_1:;
    tmp_name_name_4 = const_str_plain_socket;
    tmp_globals_name_4 = (PyObject *)moduledict_urllib3$contrib$socks;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_error_str_plain_timeout_tuple;
    tmp_level_name_4 = const_int_0;
    frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = 41;
    tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_11;

    // Tried code:
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_error );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SocketError, tmp_assign_source_12 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_timeout );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SocketTimeout, tmp_assign_source_13 );
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

    Py_XDECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_name_name_5 = const_str_plain_connection;
    tmp_globals_name_5 = (PyObject *)moduledict_urllib3$contrib$socks;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_HTTPConnection_str_plain_HTTPSConnection_tuple;
    tmp_level_name_5 = const_int_pos_2;
    frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = 43;
    tmp_assign_source_14 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_14;

    // Tried code:
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_HTTPConnection );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_HTTPConnection, tmp_assign_source_15 );
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_HTTPSConnection );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_HTTPSConnection, tmp_assign_source_16 );
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

    Py_XDECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    tmp_name_name_6 = const_str_plain_connectionpool;
    tmp_globals_name_6 = (PyObject *)moduledict_urllib3$contrib$socks;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_HTTPConnectionPool_str_plain_HTTPSConnectionPool_tuple;
    tmp_level_name_6 = const_int_pos_2;
    frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = 46;
    tmp_assign_source_17 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_17;

    // Tried code:
    tmp_import_name_from_7 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_HTTPConnectionPool );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool, tmp_assign_source_18 );
    tmp_import_name_from_8 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_HTTPSConnectionPool );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_HTTPSConnectionPool, tmp_assign_source_19 );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    tmp_name_name_7 = const_str_plain_exceptions;
    tmp_globals_name_7 = (PyObject *)moduledict_urllib3$contrib$socks;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_ConnectTimeoutError_str_plain_NewConnectionError_tuple;
    tmp_level_name_7 = const_int_pos_2;
    frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = 49;
    tmp_assign_source_20 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_4__module == NULL );
    tmp_import_from_4__module = tmp_assign_source_20;

    // Tried code:
    tmp_import_name_from_9 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_ConnectTimeoutError );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError, tmp_assign_source_21 );
    tmp_import_name_from_10 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_NewConnectionError );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_NewConnectionError, tmp_assign_source_22 );
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

    Py_XDECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    tmp_name_name_8 = const_str_plain_poolmanager;
    tmp_globals_name_8 = (PyObject *)moduledict_urllib3$contrib$socks;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_PoolManager_tuple;
    tmp_level_name_8 = const_int_pos_2;
    frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = 50;
    tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_PoolManager );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_PoolManager, tmp_assign_source_23 );
    tmp_name_name_9 = const_str_digest_a8c5d5819c4db6abb50fe4e24bb09b9d;
    tmp_globals_name_9 = (PyObject *)moduledict_urllib3$contrib$socks;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_parse_url_tuple;
    tmp_level_name_9 = const_int_pos_2;
    frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = 51;
    tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_parse_url );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_parse_url, tmp_assign_source_24 );
    // Tried code:
    tmp_name_name_10 = const_str_plain_ssl;
    tmp_globals_name_10 = (PyObject *)moduledict_urllib3$contrib$socks;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = Py_None;
    tmp_level_name_10 = const_int_0;
    frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = 54;
    tmp_assign_source_25 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_ssl, tmp_assign_source_25 );
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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

    if ( exception_keeper_tb_7 == NULL )
    {
        exception_keeper_tb_7 = MAKE_TRACEBACK( frame_2d2641af977563ea0557366720a7b98e, exception_keeper_lineno_7 );
    }
    else if ( exception_keeper_lineno_7 != 0 )
    {
        exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_2d2641af977563ea0557366720a7b98e, exception_keeper_lineno_7 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    PyException_SetTraceback( exception_keeper_value_7, (PyObject *)exception_keeper_tb_7 );
    PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    // Tried code:
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_ImportError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_8;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_26 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_ssl, tmp_assign_source_26 );
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 53;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2d2641af977563ea0557366720a7b98e->m_frame) frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_8;
    branch_end_2:;
    goto try_end_7;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_6;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_6:;
    // Tried code:
    tmp_assign_source_27 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_HTTPConnection );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPConnection );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_27 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPConnection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;

        goto try_except_handler_9;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_27, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_27;

    tmp_assign_source_28 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_28;

    tmp_compare_left_3 = const_str_plain_metaclass;
    tmp_compare_right_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
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


        exception_lineno = 59;

        goto try_except_handler_9;
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


        exception_lineno = 59;

        goto try_except_handler_9;
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


        exception_lineno = 59;

        goto try_except_handler_9;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_9;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_29 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 59;

        goto try_except_handler_9;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_29;

    tmp_compare_left_4 = const_str_plain_metaclass;
    tmp_compare_right_4 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_4 );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_9;
    }
    branch_no_3:;
    tmp_hasattr_source_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_9;
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
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_9;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_SOCKSConnection;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = 59;
    tmp_assign_source_30 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_9;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_30 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_30;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_1);
    locals_dict_1 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_32 = const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_32 );
    outline_0_var___module__ = tmp_assign_source_32;

    tmp_assign_source_33 = const_str_digest_75fb4308a53d1e344eda8ae00b794973;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_33 );
    outline_0_var___doc__ = tmp_assign_source_33;

    tmp_assign_source_34 = const_str_plain_SOCKSConnection;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_34 );
    outline_0_var___qualname__ = tmp_assign_source_34;

    tmp_assign_source_35 = MAKE_FUNCTION_urllib3$contrib$socks$$$function_1___init__(  );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_35;

    tmp_assign_source_36 = MAKE_FUNCTION_urllib3$contrib$socks$$$function_2__new_conn(  );
    assert( outline_0_var__new_conn == NULL );
    outline_0_var__new_conn = tmp_assign_source_36;

    // Tried code:
    tmp_called_name_4 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_3 = const_str_plain_SOCKSConnection;
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

        exception_lineno = 59;

        goto try_except_handler_10;
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

        exception_lineno = 59;

        goto try_except_handler_10;
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

        exception_lineno = 59;

        goto try_except_handler_10;
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

        exception_lineno = 59;

        goto try_except_handler_10;
    }
    if ( outline_0_var__new_conn != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain__new_conn,
            outline_0_var__new_conn
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain__new_conn
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
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
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_3 );

        exception_lineno = 59;

        goto try_except_handler_10;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = 59;
    tmp_assign_source_37 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_10;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_37;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_10;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_10:;
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

    Py_XDECREF( outline_0_var__new_conn );
    outline_0_var__new_conn = NULL;

    goto outline_result_1;
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

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    Py_XDECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    Py_XDECREF( outline_0_var__new_conn );
    outline_0_var__new_conn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 59;
    goto try_except_handler_9;
    outline_result_1:;
    tmp_assign_source_31 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSConnection, tmp_assign_source_31 );
    goto try_end_8;
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Tried code:
    tmp_assign_source_38 = PyTuple_New( 2 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSConnection );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSConnection );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_38 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SOCKSConnection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;

        goto try_except_handler_11;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_38, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_HTTPSConnection );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPSConnection );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_38 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPSConnection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;

        goto try_except_handler_11;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_38, 1, tmp_tuple_element_4 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_38;

    tmp_assign_source_39 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_39;

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


        exception_lineno = 129;

        goto try_except_handler_11;
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


        exception_lineno = 129;

        goto try_except_handler_11;
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


        exception_lineno = 129;

        goto try_except_handler_11;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_11;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_bases_name_2 );
    tmp_assign_source_40 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_2 );

        exception_lineno = 129;

        goto try_except_handler_11;
    }
    Py_DECREF( tmp_metaclass_name_2 );
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_40;

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


        exception_lineno = 129;

        goto try_except_handler_11;
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


        exception_lineno = 129;

        goto try_except_handler_11;
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
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_11;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_5 = const_str_plain_SOCKSHTTPSConnection;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_5 );
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = 129;
    tmp_assign_source_41 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_11;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_41 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_41;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_2);
    locals_dict_2 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_43 = const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
    assert( outline_1_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_43 );
    outline_1_var___module__ = tmp_assign_source_43;

    tmp_assign_source_44 = const_str_plain_SOCKSHTTPSConnection;
    assert( outline_1_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_44 );
    outline_1_var___qualname__ = tmp_assign_source_44;

    // Tried code:
    tmp_called_name_6 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_args_name_4 = PyTuple_New( 3 );
    tmp_tuple_element_6 = const_str_plain_SOCKSHTTPSConnection;
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

        exception_lineno = 129;

        goto try_except_handler_12;
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

        exception_lineno = 129;

        goto try_except_handler_12;
    }
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_6 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = 129;
    tmp_assign_source_45 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto try_except_handler_12;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_45;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_12;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_12:;
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    Py_XDECREF( outline_1_var___qualname__ );
    outline_1_var___qualname__ = NULL;

    Py_XDECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    goto outline_result_2;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_1_var___qualname__ );
    outline_1_var___qualname__ = NULL;

    Py_XDECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 129;
    goto try_except_handler_11;
    outline_result_2:;
    tmp_assign_source_42 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPSConnection, tmp_assign_source_42 );
    goto try_end_9;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
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
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Tried code:
    tmp_assign_source_46 = PyTuple_New( 1 );
    tmp_tuple_element_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool );

    if (unlikely( tmp_tuple_element_7 == NULL ))
    {
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPConnectionPool );
    }

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_46 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPConnectionPool" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;

        goto try_except_handler_13;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_assign_source_46, 0, tmp_tuple_element_7 );
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_46;

    tmp_assign_source_47 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_47;

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


        exception_lineno = 133;

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


        exception_lineno = 133;

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


        exception_lineno = 133;

        goto try_except_handler_13;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

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
    tmp_assign_source_48 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_3 );

        exception_lineno = 133;

        goto try_except_handler_13;
    }
    Py_DECREF( tmp_metaclass_name_3 );
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_48;

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


        exception_lineno = 133;

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


        exception_lineno = 133;

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
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_13;
    }
    tmp_args_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_8 = const_str_plain_SOCKSHTTPConnectionPool;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_8 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_8 );
    tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_5 );
    frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = 133;
    tmp_assign_source_49 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_13;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_49 = PyDict_New();
    condexpr_end_9:;
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_49;

    tmp_set_locals = tmp_class_creation_3__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_3);
    locals_dict_3 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_51 = const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
    assert( outline_2_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_51 );
    outline_2_var___module__ = tmp_assign_source_51;

    tmp_assign_source_52 = const_str_plain_SOCKSHTTPConnectionPool;
    assert( outline_2_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_52 );
    outline_2_var___qualname__ = tmp_assign_source_52;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1e9e925113bc73a0b73b3327812aa747_2, codeobj_1e9e925113bc73a0b73b3327812aa747, module_urllib3$contrib$socks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1e9e925113bc73a0b73b3327812aa747_2 = cache_frame_1e9e925113bc73a0b73b3327812aa747_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1e9e925113bc73a0b73b3327812aa747_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1e9e925113bc73a0b73b3327812aa747_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assign_source_53 = PyDict_GetItem( locals_dict_3, const_str_plain_SOCKSConnection );

    if ( tmp_assign_source_53 == NULL )
    {
        tmp_assign_source_53 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSConnection );

        if (unlikely( tmp_assign_source_53 == NULL ))
        {
            tmp_assign_source_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSConnection );
        }

        if ( tmp_assign_source_53 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SOCKSConnection" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 134;
            type_description_2 = "NooN";
            goto frame_exception_exit_2;
        }

    }

    assert( outline_2_var_ConnectionCls == NULL );
    Py_INCREF( tmp_assign_source_53 );
    outline_2_var_ConnectionCls = tmp_assign_source_53;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_1e9e925113bc73a0b73b3327812aa747_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1e9e925113bc73a0b73b3327812aa747_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1e9e925113bc73a0b73b3327812aa747_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1e9e925113bc73a0b73b3327812aa747_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1e9e925113bc73a0b73b3327812aa747_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1e9e925113bc73a0b73b3327812aa747_2,
        type_description_2,
        NULL,
        outline_2_var___qualname__,
        outline_2_var___module__,
        outline_2_var_ConnectionCls
    );


    // Release cached frame.
    if ( frame_1e9e925113bc73a0b73b3327812aa747_2 == cache_frame_1e9e925113bc73a0b73b3327812aa747_2 )
    {
        Py_DECREF( frame_1e9e925113bc73a0b73b3327812aa747_2 );
    }
    cache_frame_1e9e925113bc73a0b73b3327812aa747_2 = NULL;

    assertFrameObject( frame_1e9e925113bc73a0b73b3327812aa747_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_14;
    skip_nested_handling_1:;
    tmp_called_name_8 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_8 );
    tmp_args_name_6 = PyTuple_New( 3 );
    tmp_tuple_element_9 = const_str_plain_SOCKSHTTPConnectionPool;
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

        exception_lineno = 133;

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

        exception_lineno = 133;

        goto try_except_handler_14;
    }
    if ( outline_2_var_ConnectionCls != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_9,
            const_str_plain_ConnectionCls,
            outline_2_var_ConnectionCls
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_9,
            const_str_plain_ConnectionCls
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_9,
                const_str_plain_ConnectionCls
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

        exception_lineno = 133;

        goto try_except_handler_14;
    }
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_9 );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_6 );
    frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = 133;
    tmp_assign_source_54 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_14;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_54;

    tmp_outline_return_value_3 = outline_2_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_3 );
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_14;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
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

    Py_XDECREF( outline_2_var_ConnectionCls );
    outline_2_var_ConnectionCls = NULL;

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

    Py_XDECREF( outline_2_var_ConnectionCls );
    outline_2_var_ConnectionCls = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 133;
    goto try_except_handler_13;
    outline_result_3:;
    tmp_assign_source_50 = tmp_outline_return_value_3;
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPConnectionPool, tmp_assign_source_50 );
    goto try_end_10;
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
    try_end_10:;
    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Tried code:
    tmp_assign_source_55 = PyTuple_New( 1 );
    tmp_tuple_element_10 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_HTTPSConnectionPool );

    if (unlikely( tmp_tuple_element_10 == NULL ))
    {
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPSConnectionPool );
    }

    if ( tmp_tuple_element_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_55 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPSConnectionPool" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;

        goto try_except_handler_15;
    }

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_assign_source_55, 0, tmp_tuple_element_10 );
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_55;

    tmp_assign_source_56 = PyDict_New();
    assert( tmp_class_creation_4__class_decl_dict == NULL );
    tmp_class_creation_4__class_decl_dict = tmp_assign_source_56;

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


        exception_lineno = 137;

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


        exception_lineno = 137;

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


        exception_lineno = 137;

        goto try_except_handler_15;
    }
    tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_4 );
    Py_DECREF( tmp_type_arg_4 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

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
    tmp_assign_source_57 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_4 );

        exception_lineno = 137;

        goto try_except_handler_15;
    }
    Py_DECREF( tmp_metaclass_name_4 );
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_57;

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


        exception_lineno = 137;

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


        exception_lineno = 137;

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
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___prepare__ );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_15;
    }
    tmp_args_name_7 = PyTuple_New( 2 );
    tmp_tuple_element_11 = const_str_plain_SOCKSHTTPSConnectionPool;
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_11 );
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_11 );
    tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_7 );
    frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = 137;
    tmp_assign_source_58 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_15;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_58 = PyDict_New();
    condexpr_end_12:;
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_58;

    tmp_set_locals = tmp_class_creation_4__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_4);
    locals_dict_4 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_60 = const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
    assert( outline_3_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_60 );
    outline_3_var___module__ = tmp_assign_source_60;

    tmp_assign_source_61 = const_str_plain_SOCKSHTTPSConnectionPool;
    assert( outline_3_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_61 );
    outline_3_var___qualname__ = tmp_assign_source_61;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4e715816d994c77420a01fda31efbbe9_3, codeobj_4e715816d994c77420a01fda31efbbe9, module_urllib3$contrib$socks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4e715816d994c77420a01fda31efbbe9_3 = cache_frame_4e715816d994c77420a01fda31efbbe9_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4e715816d994c77420a01fda31efbbe9_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4e715816d994c77420a01fda31efbbe9_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assign_source_62 = PyDict_GetItem( locals_dict_4, const_str_plain_SOCKSHTTPSConnection );

    if ( tmp_assign_source_62 == NULL )
    {
        tmp_assign_source_62 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPSConnection );

        if (unlikely( tmp_assign_source_62 == NULL ))
        {
            tmp_assign_source_62 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPSConnection );
        }

        if ( tmp_assign_source_62 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SOCKSHTTPSConnection" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 138;
            type_description_2 = "NooN";
            goto frame_exception_exit_3;
        }

    }

    assert( outline_3_var_ConnectionCls == NULL );
    Py_INCREF( tmp_assign_source_62 );
    outline_3_var_ConnectionCls = tmp_assign_source_62;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_4e715816d994c77420a01fda31efbbe9_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4e715816d994c77420a01fda31efbbe9_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4e715816d994c77420a01fda31efbbe9_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4e715816d994c77420a01fda31efbbe9_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4e715816d994c77420a01fda31efbbe9_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4e715816d994c77420a01fda31efbbe9_3,
        type_description_2,
        NULL,
        outline_3_var___qualname__,
        outline_3_var___module__,
        outline_3_var_ConnectionCls
    );


    // Release cached frame.
    if ( frame_4e715816d994c77420a01fda31efbbe9_3 == cache_frame_4e715816d994c77420a01fda31efbbe9_3 )
    {
        Py_DECREF( frame_4e715816d994c77420a01fda31efbbe9_3 );
    }
    cache_frame_4e715816d994c77420a01fda31efbbe9_3 = NULL;

    assertFrameObject( frame_4e715816d994c77420a01fda31efbbe9_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_16;
    skip_nested_handling_2:;
    tmp_called_name_10 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_10 );
    tmp_args_name_8 = PyTuple_New( 3 );
    tmp_tuple_element_12 = const_str_plain_SOCKSHTTPSConnectionPool;
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

        exception_lineno = 137;

        goto try_except_handler_16;
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

        exception_lineno = 137;

        goto try_except_handler_16;
    }
    if ( outline_3_var_ConnectionCls != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_12,
            const_str_plain_ConnectionCls,
            outline_3_var_ConnectionCls
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_12,
            const_str_plain_ConnectionCls
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_12,
                const_str_plain_ConnectionCls
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

        exception_lineno = 137;

        goto try_except_handler_16;
    }
    PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_12 );
    tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_8 );
    frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = 137;
    tmp_assign_source_63 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto try_except_handler_16;
    }
    assert( outline_3_var___class__ == NULL );
    outline_3_var___class__ = tmp_assign_source_63;

    tmp_outline_return_value_4 = outline_3_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_4 );
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_16;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
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

    Py_XDECREF( outline_3_var_ConnectionCls );
    outline_3_var_ConnectionCls = NULL;

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

    Py_XDECREF( outline_3_var_ConnectionCls );
    outline_3_var_ConnectionCls = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto outline_exception_4;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 137;
    goto try_except_handler_15;
    outline_result_4:;
    tmp_assign_source_59 = tmp_outline_return_value_4;
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPSConnectionPool, tmp_assign_source_59 );
    goto try_end_11;
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
    try_end_11:;
    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Tried code:
    tmp_assign_source_64 = PyTuple_New( 1 );
    tmp_tuple_element_13 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_PoolManager );

    if (unlikely( tmp_tuple_element_13 == NULL ))
    {
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolManager );
    }

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_64 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PoolManager" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 141;

        goto try_except_handler_17;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_assign_source_64, 0, tmp_tuple_element_13 );
    assert( tmp_class_creation_5__bases == NULL );
    tmp_class_creation_5__bases = tmp_assign_source_64;

    tmp_assign_source_65 = PyDict_New();
    assert( tmp_class_creation_5__class_decl_dict == NULL );
    tmp_class_creation_5__class_decl_dict = tmp_assign_source_65;

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


        exception_lineno = 141;

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


        exception_lineno = 141;

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
    tmp_subscribed_name_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_subscribed_name_5 );
    tmp_subscript_name_5 = const_int_0;
    tmp_type_arg_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_type_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_17;
    }
    tmp_metaclass_name_5 = BUILTIN_TYPE1( tmp_type_arg_5 );
    Py_DECREF( tmp_type_arg_5 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

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
    tmp_assign_source_66 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_5 );

        exception_lineno = 141;

        goto try_except_handler_17;
    }
    Py_DECREF( tmp_metaclass_name_5 );
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_66;

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


        exception_lineno = 141;

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


        exception_lineno = 141;

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
    tmp_source_name_6 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_17;
    }
    tmp_args_name_9 = PyTuple_New( 2 );
    tmp_tuple_element_14 = const_str_plain_SOCKSProxyManager;
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_tuple_element_14 );
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_14 );
    tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_9 );
    frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = 141;
    tmp_assign_source_67 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_name_9 );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_17;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_assign_source_67 = PyDict_New();
    condexpr_end_15:;
    assert( tmp_class_creation_5__prepared == NULL );
    tmp_class_creation_5__prepared = tmp_assign_source_67;

    tmp_set_locals = tmp_class_creation_5__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_5);
    locals_dict_5 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_69 = const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
    assert( outline_4_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_69 );
    outline_4_var___module__ = tmp_assign_source_69;

    tmp_assign_source_70 = const_str_digest_eeea122c4ef21297597db82f300a3894;
    assert( outline_4_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_70 );
    outline_4_var___doc__ = tmp_assign_source_70;

    tmp_assign_source_71 = const_str_plain_SOCKSProxyManager;
    assert( outline_4_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_71 );
    outline_4_var___qualname__ = tmp_assign_source_71;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dd267abf1895d3acf3e9b57ea80cbf39_4, codeobj_dd267abf1895d3acf3e9b57ea80cbf39, module_urllib3$contrib$socks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_dd267abf1895d3acf3e9b57ea80cbf39_4 = cache_frame_dd267abf1895d3acf3e9b57ea80cbf39_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dd267abf1895d3acf3e9b57ea80cbf39_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dd267abf1895d3acf3e9b57ea80cbf39_4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assign_source_72 = _PyDict_NewPresized( 2 );
    tmp_dict_key_1 = const_str_plain_http;
    tmp_dict_value_1 = PyDict_GetItem( locals_dict_5, const_str_plain_SOCKSHTTPConnectionPool );

    if ( tmp_dict_value_1 == NULL )
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPConnectionPool );

        if (unlikely( tmp_dict_value_1 == NULL ))
        {
            tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPConnectionPool );
        }

        if ( tmp_dict_value_1 == NULL )
        {
            Py_DECREF( tmp_assign_source_72 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SOCKSHTTPConnectionPool" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 147;
            type_description_2 = "NoooNN";
            goto frame_exception_exit_4;
        }

    }

    tmp_res = PyDict_SetItem( tmp_assign_source_72, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_https;
    tmp_dict_value_2 = PyDict_GetItem( locals_dict_5, const_str_plain_SOCKSHTTPSConnectionPool );

    if ( tmp_dict_value_2 == NULL )
    {
        tmp_dict_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPSConnectionPool );

        if (unlikely( tmp_dict_value_2 == NULL ))
        {
            tmp_dict_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSHTTPSConnectionPool );
        }

        if ( tmp_dict_value_2 == NULL )
        {
            Py_DECREF( tmp_assign_source_72 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SOCKSHTTPSConnectionPool" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 148;
            type_description_2 = "NoooNN";
            goto frame_exception_exit_4;
        }

    }

    tmp_res = PyDict_SetItem( tmp_assign_source_72, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    assert( outline_4_var_pool_classes_by_scheme == NULL );
    outline_4_var_pool_classes_by_scheme = tmp_assign_source_72;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd267abf1895d3acf3e9b57ea80cbf39_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd267abf1895d3acf3e9b57ea80cbf39_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dd267abf1895d3acf3e9b57ea80cbf39_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dd267abf1895d3acf3e9b57ea80cbf39_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dd267abf1895d3acf3e9b57ea80cbf39_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dd267abf1895d3acf3e9b57ea80cbf39_4,
        type_description_2,
        NULL,
        outline_4_var___qualname__,
        outline_4_var___module__,
        outline_4_var___doc__,
        outline_4_var_pool_classes_by_scheme,
        NULL
    );


    // Release cached frame.
    if ( frame_dd267abf1895d3acf3e9b57ea80cbf39_4 == cache_frame_dd267abf1895d3acf3e9b57ea80cbf39_4 )
    {
        Py_DECREF( frame_dd267abf1895d3acf3e9b57ea80cbf39_4 );
    }
    cache_frame_dd267abf1895d3acf3e9b57ea80cbf39_4 = NULL;

    assertFrameObject( frame_dd267abf1895d3acf3e9b57ea80cbf39_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;

    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_18;
    skip_nested_handling_3:;
    tmp_defaults_1 = const_tuple_none_none_int_pos_10_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_73 = MAKE_FUNCTION_urllib3$contrib$socks$$$function_3___init__( tmp_defaults_1 );
    assert( outline_4_var___init__ == NULL );
    outline_4_var___init__ = tmp_assign_source_73;

    tmp_called_name_12 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_12 );
    tmp_args_name_10 = PyTuple_New( 3 );
    tmp_tuple_element_15 = const_str_plain_SOCKSProxyManager;
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

        exception_lineno = 141;

        goto try_except_handler_18;
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

        exception_lineno = 141;

        goto try_except_handler_18;
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

        exception_lineno = 141;

        goto try_except_handler_18;
    }
    if ( outline_4_var_pool_classes_by_scheme != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_15,
            const_str_plain_pool_classes_by_scheme,
            outline_4_var_pool_classes_by_scheme
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_15,
            const_str_plain_pool_classes_by_scheme
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_15,
                const_str_plain_pool_classes_by_scheme
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

        exception_lineno = 141;

        goto try_except_handler_18;
    }
    if ( outline_4_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_15,
            const_str_plain___init__,
            outline_4_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_15,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_15,
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
        Py_DECREF( tmp_tuple_element_15 );

        exception_lineno = 141;

        goto try_except_handler_18;
    }
    PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_15 );
    tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_10 );
    frame_2d2641af977563ea0557366720a7b98e->m_frame.f_lineno = 141;
    tmp_assign_source_74 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_args_name_10 );
    if ( tmp_assign_source_74 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;

        goto try_except_handler_18;
    }
    assert( outline_4_var___class__ == NULL );
    outline_4_var___class__ = tmp_assign_source_74;

    tmp_outline_return_value_5 = outline_4_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_5 );
    Py_INCREF( tmp_outline_return_value_5 );
    goto try_return_handler_18;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
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

    Py_XDECREF( outline_4_var___doc__ );
    outline_4_var___doc__ = NULL;

    Py_XDECREF( outline_4_var_pool_classes_by_scheme );
    outline_4_var_pool_classes_by_scheme = NULL;

    Py_XDECREF( outline_4_var___init__ );
    outline_4_var___init__ = NULL;

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

    Py_XDECREF( outline_4_var___doc__ );
    outline_4_var___doc__ = NULL;

    Py_XDECREF( outline_4_var_pool_classes_by_scheme );
    outline_4_var_pool_classes_by_scheme = NULL;

    Py_XDECREF( outline_4_var___init__ );
    outline_4_var___init__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto outline_exception_5;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$socks );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_5:;
    exception_lineno = 141;
    goto try_except_handler_17;
    outline_result_5:;
    tmp_assign_source_68 = tmp_outline_return_value_5;
    UPDATE_STRING_DICT1( moduledict_urllib3$contrib$socks, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager, tmp_assign_source_68 );
    goto try_end_12;
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
    try_end_12:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_2d2641af977563ea0557366720a7b98e );
#endif
    popFrameStack();

    assertFrameObject( frame_2d2641af977563ea0557366720a7b98e );

    goto frame_no_exception_4;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_2d2641af977563ea0557366720a7b98e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2d2641af977563ea0557366720a7b98e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2d2641af977563ea0557366720a7b98e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2d2641af977563ea0557366720a7b98e, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;
    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;


    return MOD_RETURN_VALUE( module_urllib3$contrib$socks );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
