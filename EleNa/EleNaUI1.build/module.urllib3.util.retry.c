/* Generated code for Python source for module 'urllib3.util.retry'
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

/* The _module_urllib3$util$retry is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$retry;
PyDictObject *moduledict_urllib3$util$retry;

/* The module constants used, if any. */
extern PyObject *const_str_plain_itertools;
static PyObject *const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_be3c2e7a479fa0076df719ca5a930f72;
static PyObject *const_tuple_true_none_tuple;
static PyObject *const_str_digest_96630de8eadb33fda97640a57fbbbd1c;
static PyObject *const_str_plain_slept;
extern PyObject *const_str_plain_getLogger;
static PyObject *const_str_plain_retry_date_tuple;
static PyObject *const_int_pos_120;
static PyObject *const_str_plain__sleep_backoff;
static PyObject *const_str_plain_RETRY_AFTER_STATUS_CODES;
static PyObject *const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple;
extern PyObject *const_str_digest_867cf107290997ea3f46e9cff397e1db;
extern PyObject *const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_unknown;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_redirect_location;
static PyObject *const_str_plain_backoff_factor;
extern PyObject *const_str_plain_total;
static PyObject *const_str_digest_9bdc7bd568ca4c860ba3d9ea8f97a38f;
extern PyObject *const_str_plain_PUT;
extern PyObject *const_str_plain_mktime;
extern PyObject *const_str_plain_err;
extern PyObject *const_str_plain_from_int;
static PyObject *const_str_digest_504591e526cc625e5b3bbfcf35d4ec2f;
extern PyObject *const_str_plain_raise_on_status;
static PyObject *const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple;
extern PyObject *const_str_plain_default;
static PyObject *const_str_digest_54874c179a81b955e41d4fd1580cddd0;
static PyObject *const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8;
extern PyObject *const_str_plain_GET;
extern PyObject *const_str_plain_email;
extern PyObject *const_str_plain_get_redirect_location;
static PyObject *const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple;
extern PyObject *const_str_plain_sleep_for_retry;
extern PyObject *const_str_plain_sleep;
extern PyObject *const_str_plain_cls;
extern PyObject *const_tuple_str_plain_self_str_plain_method_tuple;
extern PyObject *const_str_plain_read;
static PyObject *const_str_plain_respect_retry_after_header;
extern PyObject *const_str_plain_utils;
static PyObject *const_str_digest_297455e155b6c9736d87529e14591c5d;
static PyObject *const_int_pos_429;
static PyObject *const_str_digest_43a062f907032f59d25a421045c4a843;
extern PyObject *const_str_plain_connect;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_is_retry;
static PyObject *const_str_plain_RequestHistory;
extern PyObject *const_str_plain_time;
static PyObject *const_str_digest_9bd675e6213bb199ca6f348d80f9c5a6;
static PyObject *const_str_digest_00aff75c087fe7f80636ea13a09e3e82;
extern PyObject *const_str_plain___package__;
static PyObject *const_int_pos_413;
extern PyObject *const_str_plain_redirect;
extern PyObject *const_tuple_str_digest_53eb1bcf3283c3fcccb95b51de02ce94_tuple;
extern PyObject *const_tuple_str_plain_namedtuple_tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_status;
static PyObject *const_str_plain_consecutive_errors_len;
static PyObject *const_str_digest_52dc615064dbc739578d7b66bd4357d4;
extern PyObject *const_str_plain_packages;
static PyObject *const_str_digest_3d8456b692ba12d694b1345117db0cc2;
static PyObject *const_str_digest_b0594eafa05dc6a6810bb2c7c291548b;
static PyObject *const_str_plain__is_method_retryable;
extern PyObject *const_str_plain_min;
static PyObject *const_str_plain_is_exhausted;
extern PyObject *const_str_plain_six;
static PyObject *const_str_plain_method_whitelist;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21;
static PyObject *const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple;
extern PyObject *const_str_plain_seconds;
extern PyObject *const_str_plain_collections;
extern PyObject *const_str_plain__stacktrace;
extern PyObject *const_str_plain_SPECIFIC_ERROR;
static PyObject *const_str_plain_parse_retry_after;
static PyObject *const_str_digest_d3c5cf2f2d706173f393307c5fa372aa;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_4291b42c0261755daa9f58af16f24a8c;
static PyObject *const_str_digest_2d8b572caa8eac58f71c5c2fc1f268f9;
extern PyObject *const_str_plain_new;
extern PyObject *const_str_plain_status_code;
static PyObject *const_str_plain_BACKOFF_MAX;
static PyObject *const_str_digest_0ea7366bdeb0b49141acb3ad1441b7b5;
static PyObject *const_tuple_str_plain_self_str_plain_err_tuple;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_getheader;
extern PyObject *const_str_plain_retries;
static PyObject *const_str_digest_9db0c4e907a20455d898e46f602427d6;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_plain_exceptions;
static PyObject *const_str_digest_fc514c378d42c4c0744f71a520936e98;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain_error;
static PyObject *const_str_digest_d43b7afa583ad163d56ae0bbfdcdb575;
extern PyObject *const_str_plain_match;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain_ProtocolError;
static PyObject *const_str_digest_ca693a71271df261e783dd0ecf309ae0;
extern PyObject *const_str_plain_ReadTimeoutError;
extern PyObject *const_tuple_int_pos_3_tuple;
static PyObject *const_str_plain_TRACE;
static PyObject *const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple;
extern PyObject *const_tuple_none_none_none_none_none_none_tuple;
static PyObject *const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple;
extern PyObject *const_str_plain_DEFAULT;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_upper;
static PyObject *const_str_digest_541aafc09da4591a658272cb389856a5;
extern PyObject *const_str_plain_response;
static PyObject *const_str_plain_new_retries;
static PyObject *const_str_plain_get_retry_after;
static PyObject *const_str_digest_6659ea07dd436805b2630885700a6e61;
static PyObject *const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple;
static PyObject *const_str_plain_DEFAULT_METHOD_WHITELIST;
static PyObject *const_str_digest_7fb2c7a5424e28db1a201939b12c8399;
extern PyObject *const_str_plain_log;
extern PyObject *const_str_plain_x;
static PyObject *const_str_digest_bfee87cb73b0fbf33a8ade77b966813a;
static PyObject *const_str_digest_55857326d6523e3f76c12c271f391764;
static PyObject *const_str_plain_retry_after;
extern PyObject *const_str_plain_DELETE;
static PyObject *const_tuple_str_plain_self_str_plain_retry_counts_tuple;
extern PyObject *const_str_plain_increment;
static PyObject *const_str_plain_get_backoff_time;
extern PyObject *const_str_plain_namedtuple;
extern PyObject *const_str_plain_ResponseError;
static PyObject *const_tuple_str_plain_takewhile_tuple;
static PyObject *const_tuple_127197c4737cb36c42fbf87f97ea7a04_tuple;
extern PyObject *const_str_angle_lambda;
static PyObject *const_str_digest_4506185023298da4a69876975fb76211;
extern PyObject *const_str_plain_InvalidHeader;
extern PyObject *const_str_plain_HEAD;
static PyObject *const_str_plain_has_retry_after;
extern PyObject *const_int_pos_503;
static PyObject *const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_cause;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_plain__is_connection_error;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_str_plain__is_read_error;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_93b5718dbdad50e34931a5c649b12b14;
static PyObject *const_str_plain_retry_counts;
static PyObject *const_str_digest_683309cb722498c00ca029ec4e15acbf;
extern PyObject *const_str_plain_debug;
extern PyObject *const_str_plain_kw;
static PyObject *const_str_digest_e80b9085df081452c8caeed4571c51b7;
static PyObject *const_str_plain_status_forcelist;
extern PyObject *const_str_plain_params;
extern PyObject *const_str_plain_update;
extern PyObject *const_str_plain_ConnectTimeoutError;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_cfc303935f94cd9bd4759913289d5001;
extern PyObject *const_str_plain_OPTIONS;
static PyObject *const_str_plain_new_retry;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_history;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_takewhile;
static PyObject *const_str_plain_parsedate;
static PyObject *const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple;
extern PyObject *const_str_plain___repr__;
static PyObject *const_str_plain_retry_date;
extern PyObject *const_tuple_str_plain_six_tuple;
extern PyObject *const_str_plain_method;
static PyObject *const_str_digest_02862dad88b03d79d6c3df8ba5e79ff6;
static PyObject *const_tuple_71b948b56c382e70806b9258e1c97853_tuple;
static PyObject *const_str_plain_status_count;
static PyObject *const_str_plain_backoff;
static PyObject *const_str_digest_ed2c0b12f2250d745518387535c4958e;
static PyObject *const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple;
extern PyObject *const_str_plain_MaxRetryError;
extern PyObject *const_str_plain__pool;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_7e60379875538acb6d47a09b3bcd7fdf;
static PyObject *const_str_plain_backoff_value;
extern PyObject *const_str_plain_Retry;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_format;
static PyObject *const_tuple_str_plain_self_str_plain_backoff_tuple;
extern PyObject *const_str_digest_53eb1bcf3283c3fcccb95b51de02ce94;
extern PyObject *const_str_plain_GENERIC_ERROR;
static PyObject *const_str_digest_adf0407d4b5f2535bca90601d487b350;
static PyObject *const_str_digest_3ff146bf2cbf06e10d34294d9109668e;
extern PyObject *const_str_plain_reraise;
static PyObject *const_str_digest_25ded409e041cb7d54dbe844ec9f890e;
extern PyObject *const_str_plain_raise_on_redirect;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list = PyList_New( 5 );
    PyList_SET_ITEM( const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list, 0, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyList_SET_ITEM( const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyList_SET_ITEM( const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list, 2, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    PyList_SET_ITEM( const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list, 3, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    PyList_SET_ITEM( const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list, 4, const_str_plain_redirect_location ); Py_INCREF( const_str_plain_redirect_location );
    const_str_digest_be3c2e7a479fa0076df719ca5a930f72 = UNSTREAM_STRING( &constant_bin[ 915971 ], 128, 0 );
    const_tuple_true_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_true_none_tuple, 0, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_true_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_96630de8eadb33fda97640a57fbbbd1c = UNSTREAM_STRING( &constant_bin[ 916099 ], 40, 0 );
    const_str_plain_slept = UNSTREAM_STRING( &constant_bin[ 916139 ], 5, 1 );
    const_str_plain_retry_date_tuple = UNSTREAM_STRING( &constant_bin[ 916144 ], 16, 1 );
    const_int_pos_120 = PyLong_FromUnsignedLong( 120ul );
    const_str_plain__sleep_backoff = UNSTREAM_STRING( &constant_bin[ 916160 ], 14, 1 );
    const_str_plain_RETRY_AFTER_STATUS_CODES = UNSTREAM_STRING( &constant_bin[ 916174 ], 24, 1 );
    const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple, 2, const_str_plain_status_code ); Py_INCREF( const_str_plain_status_code );
    const_str_plain_has_retry_after = UNSTREAM_STRING( &constant_bin[ 861146 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple, 3, const_str_plain_has_retry_after ); Py_INCREF( const_str_plain_has_retry_after );
    const_str_plain_unknown = UNSTREAM_STRING( &constant_bin[ 622535 ], 7, 1 );
    const_str_plain_backoff_factor = UNSTREAM_STRING( &constant_bin[ 916198 ], 14, 1 );
    const_str_digest_9bdc7bd568ca4c860ba3d9ea8f97a38f = UNSTREAM_STRING( &constant_bin[ 916212 ], 21, 0 );
    const_str_digest_504591e526cc625e5b3bbfcf35d4ec2f = UNSTREAM_STRING( &constant_bin[ 916233 ], 20, 0 );
    const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple, 1, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    const_str_plain_retry_after = UNSTREAM_STRING( &constant_bin[ 861150 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple, 2, const_str_plain_retry_after ); Py_INCREF( const_str_plain_retry_after );
    const_str_digest_54874c179a81b955e41d4fd1580cddd0 = UNSTREAM_STRING( &constant_bin[ 916253 ], 52, 0 );
    const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8 = PyFrozenSet_New( NULL );
    PySet_Add( const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8, const_str_plain_PUT );
    PySet_Add( const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8, const_str_plain_GET );
    PySet_Add( const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8, const_str_plain_DELETE );
    PySet_Add( const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8, const_str_plain_HEAD );
    PySet_Add( const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8, const_str_plain_OPTIONS );
    const_str_plain_TRACE = UNSTREAM_STRING( &constant_bin[ 916305 ], 5, 1 );
    PySet_Add( const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8, const_str_plain_TRACE );
    assert( PySet_Size( const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8 ) == 6 );
    const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple, 1, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple, 2, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    const_str_plain_respect_retry_after_header = UNSTREAM_STRING( &constant_bin[ 916310 ], 26, 1 );
    const_str_digest_297455e155b6c9736d87529e14591c5d = UNSTREAM_STRING( &constant_bin[ 916336 ], 14, 0 );
    const_int_pos_429 = PyLong_FromUnsignedLong( 429ul );
    const_str_digest_43a062f907032f59d25a421045c4a843 = UNSTREAM_STRING( &constant_bin[ 916350 ], 14, 0 );
    const_str_plain_RequestHistory = UNSTREAM_STRING( &constant_bin[ 916364 ], 14, 1 );
    const_str_digest_9bd675e6213bb199ca6f348d80f9c5a6 = UNSTREAM_STRING( &constant_bin[ 916378 ], 99, 0 );
    const_str_digest_00aff75c087fe7f80636ea13a09e3e82 = UNSTREAM_STRING( &constant_bin[ 916477 ], 14, 0 );
    const_int_pos_413 = PyLong_FromUnsignedLong( 413ul );
    const_str_plain_consecutive_errors_len = UNSTREAM_STRING( &constant_bin[ 916491 ], 22, 1 );
    const_str_digest_52dc615064dbc739578d7b66bd4357d4 = UNSTREAM_STRING( &constant_bin[ 916513 ], 30, 0 );
    const_str_digest_3d8456b692ba12d694b1345117db0cc2 = UNSTREAM_STRING( &constant_bin[ 916543 ], 27, 0 );
    const_str_digest_b0594eafa05dc6a6810bb2c7c291548b = UNSTREAM_STRING( &constant_bin[ 916212 ], 11, 0 );
    const_str_plain__is_method_retryable = UNSTREAM_STRING( &constant_bin[ 916570 ], 20, 1 );
    const_str_plain_is_exhausted = UNSTREAM_STRING( &constant_bin[ 916590 ], 12, 1 );
    const_str_plain_method_whitelist = UNSTREAM_STRING( &constant_bin[ 916602 ], 16, 1 );
    const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21 = PyFrozenSet_New( NULL );
    PySet_Add( const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21, const_int_pos_503 );
    PySet_Add( const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21, const_int_pos_413 );
    PySet_Add( const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21, const_int_pos_429 );
    assert( PySet_Size( const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21 ) == 3 );
    const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 1, const_str_plain_retries ); Py_INCREF( const_str_plain_retries );
    PyTuple_SET_ITEM( const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 2, const_str_plain_redirect ); Py_INCREF( const_str_plain_redirect );
    PyTuple_SET_ITEM( const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 3, const_str_plain_default ); Py_INCREF( const_str_plain_default );
    const_str_plain_new_retries = UNSTREAM_STRING( &constant_bin[ 916618 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 4, const_str_plain_new_retries ); Py_INCREF( const_str_plain_new_retries );
    const_str_plain_parse_retry_after = UNSTREAM_STRING( &constant_bin[ 916629 ], 17, 1 );
    const_str_digest_d3c5cf2f2d706173f393307c5fa372aa = UNSTREAM_STRING( &constant_bin[ 916646 ], 15, 0 );
    const_str_digest_4291b42c0261755daa9f58af16f24a8c = UNSTREAM_STRING( &constant_bin[ 916661 ], 14, 0 );
    const_str_digest_2d8b572caa8eac58f71c5c2fc1f268f9 = UNSTREAM_STRING( &constant_bin[ 916675 ], 20, 0 );
    const_str_plain_BACKOFF_MAX = UNSTREAM_STRING( &constant_bin[ 916695 ], 11, 1 );
    const_str_digest_0ea7366bdeb0b49141acb3ad1441b7b5 = UNSTREAM_STRING( &constant_bin[ 916706 ], 26, 0 );
    const_tuple_str_plain_self_str_plain_err_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_err_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_err_tuple, 1, const_str_plain_err ); Py_INCREF( const_str_plain_err );
    const_str_digest_9db0c4e907a20455d898e46f602427d6 = UNSTREAM_STRING( &constant_bin[ 916732 ], 42, 0 );
    const_str_digest_fc514c378d42c4c0744f71a520936e98 = UNSTREAM_STRING( &constant_bin[ 916774 ], 74, 0 );
    const_str_digest_d43b7afa583ad163d56ae0bbfdcdb575 = UNSTREAM_STRING( &constant_bin[ 916848 ], 14, 0 );
    const_str_digest_ca693a71271df261e783dd0ecf309ae0 = UNSTREAM_STRING( &constant_bin[ 916862 ], 9, 0 );
    const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple, 0, const_str_plain_ConnectTimeoutError ); Py_INCREF( const_str_plain_ConnectTimeoutError );
    PyTuple_SET_ITEM( const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple, 1, const_str_plain_MaxRetryError ); Py_INCREF( const_str_plain_MaxRetryError );
    PyTuple_SET_ITEM( const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple, 2, const_str_plain_ProtocolError ); Py_INCREF( const_str_plain_ProtocolError );
    PyTuple_SET_ITEM( const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple, 3, const_str_plain_ReadTimeoutError ); Py_INCREF( const_str_plain_ReadTimeoutError );
    PyTuple_SET_ITEM( const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple, 4, const_str_plain_ResponseError ); Py_INCREF( const_str_plain_ResponseError );
    PyTuple_SET_ITEM( const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple, 5, const_str_plain_InvalidHeader ); Py_INCREF( const_str_plain_InvalidHeader );
    const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple = PyTuple_New( 17 );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 3, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 4, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 5, const_str_plain__pool ); Py_INCREF( const_str_plain__pool );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 6, const_str_plain__stacktrace ); Py_INCREF( const_str_plain__stacktrace );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 7, const_str_plain_total ); Py_INCREF( const_str_plain_total );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 8, const_str_plain_connect ); Py_INCREF( const_str_plain_connect );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 9, const_str_plain_read ); Py_INCREF( const_str_plain_read );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 10, const_str_plain_redirect ); Py_INCREF( const_str_plain_redirect );
    const_str_plain_status_count = UNSTREAM_STRING( &constant_bin[ 916871 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 11, const_str_plain_status_count ); Py_INCREF( const_str_plain_status_count );
    const_str_plain_cause = UNSTREAM_STRING( &constant_bin[ 833955 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 12, const_str_plain_cause ); Py_INCREF( const_str_plain_cause );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 13, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 14, const_str_plain_redirect_location ); Py_INCREF( const_str_plain_redirect_location );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 15, const_str_plain_history ); Py_INCREF( const_str_plain_history );
    const_str_plain_new_retry = UNSTREAM_STRING( &constant_bin[ 916883 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 16, const_str_plain_new_retry ); Py_INCREF( const_str_plain_new_retry );
    const_str_digest_541aafc09da4591a658272cb389856a5 = UNSTREAM_STRING( &constant_bin[ 916892 ], 124, 0 );
    const_str_plain_get_retry_after = UNSTREAM_STRING( &constant_bin[ 917016 ], 15, 1 );
    const_str_digest_6659ea07dd436805b2630885700a6e61 = UNSTREAM_STRING( &constant_bin[ 917031 ], 21, 0 );
    const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple, 0, const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd ); Py_INCREF( const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd );
    const_str_plain_DEFAULT_METHOD_WHITELIST = UNSTREAM_STRING( &constant_bin[ 917052 ], 24, 1 );
    const_str_digest_7fb2c7a5424e28db1a201939b12c8399 = UNSTREAM_STRING( &constant_bin[ 917076 ], 123, 0 );
    const_str_digest_bfee87cb73b0fbf33a8ade77b966813a = UNSTREAM_STRING( &constant_bin[ 917199 ], 4447, 0 );
    const_str_digest_55857326d6523e3f76c12c271f391764 = UNSTREAM_STRING( &constant_bin[ 921646 ], 417, 0 );
    const_tuple_str_plain_self_str_plain_retry_counts_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_retry_counts_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_retry_counts = UNSTREAM_STRING( &constant_bin[ 922063 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_retry_counts_tuple, 1, const_str_plain_retry_counts ); Py_INCREF( const_str_plain_retry_counts );
    const_str_plain_get_backoff_time = UNSTREAM_STRING( &constant_bin[ 916105 ], 16, 1 );
    const_tuple_str_plain_takewhile_tuple = PyTuple_New( 1 );
    const_str_plain_takewhile = UNSTREAM_STRING( &constant_bin[ 922075 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_takewhile_tuple, 0, const_str_plain_takewhile ); Py_INCREF( const_str_plain_takewhile );
    const_tuple_127197c4737cb36c42fbf87f97ea7a04_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 922084 ], 337 );
    const_str_digest_4506185023298da4a69876975fb76211 = UNSTREAM_STRING( &constant_bin[ 922421 ], 18, 0 );
    const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple, 1, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple, 2, const_str_plain_slept ); Py_INCREF( const_str_plain_slept );
    const_str_plain__is_connection_error = UNSTREAM_STRING( &constant_bin[ 922318 ], 20, 1 );
    const_str_plain__is_read_error = UNSTREAM_STRING( &constant_bin[ 916681 ], 14, 1 );
    const_str_digest_93b5718dbdad50e34931a5c649b12b14 = UNSTREAM_STRING( &constant_bin[ 922439 ], 18, 0 );
    const_str_digest_683309cb722498c00ca029ec4e15acbf = UNSTREAM_STRING( &constant_bin[ 922457 ], 23, 0 );
    const_str_digest_e80b9085df081452c8caeed4571c51b7 = UNSTREAM_STRING( &constant_bin[ 916099 ], 22, 0 );
    const_str_plain_status_forcelist = UNSTREAM_STRING( &constant_bin[ 919500 ], 16, 1 );
    const_str_digest_cfc303935f94cd9bd4759913289d5001 = UNSTREAM_STRING( &constant_bin[ 922480 ], 124, 0 );
    const_str_plain_parsedate = UNSTREAM_STRING( &constant_bin[ 922604 ], 9, 1 );
    const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple, 1, const_str_plain_consecutive_errors_len ); Py_INCREF( const_str_plain_consecutive_errors_len );
    const_str_plain_backoff_value = UNSTREAM_STRING( &constant_bin[ 922613 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple, 2, const_str_plain_backoff_value ); Py_INCREF( const_str_plain_backoff_value );
    const_str_plain_retry_date = UNSTREAM_STRING( &constant_bin[ 916144 ], 10, 1 );
    const_str_digest_02862dad88b03d79d6c3df8ba5e79ff6 = UNSTREAM_STRING( &constant_bin[ 922626 ], 24, 0 );
    const_tuple_71b948b56c382e70806b9258e1c97853_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_71b948b56c382e70806b9258e1c97853_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_71b948b56c382e70806b9258e1c97853_tuple, 1, const_str_plain_total ); Py_INCREF( const_str_plain_total );
    PyTuple_SET_ITEM( const_tuple_71b948b56c382e70806b9258e1c97853_tuple, 2, const_str_plain_connect ); Py_INCREF( const_str_plain_connect );
    PyTuple_SET_ITEM( const_tuple_71b948b56c382e70806b9258e1c97853_tuple, 3, const_str_plain_read ); Py_INCREF( const_str_plain_read );
    PyTuple_SET_ITEM( const_tuple_71b948b56c382e70806b9258e1c97853_tuple, 4, const_str_plain_redirect ); Py_INCREF( const_str_plain_redirect );
    PyTuple_SET_ITEM( const_tuple_71b948b56c382e70806b9258e1c97853_tuple, 5, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    PyTuple_SET_ITEM( const_tuple_71b948b56c382e70806b9258e1c97853_tuple, 6, const_str_plain_method_whitelist ); Py_INCREF( const_str_plain_method_whitelist );
    PyTuple_SET_ITEM( const_tuple_71b948b56c382e70806b9258e1c97853_tuple, 7, const_str_plain_status_forcelist ); Py_INCREF( const_str_plain_status_forcelist );
    PyTuple_SET_ITEM( const_tuple_71b948b56c382e70806b9258e1c97853_tuple, 8, const_str_plain_backoff_factor ); Py_INCREF( const_str_plain_backoff_factor );
    PyTuple_SET_ITEM( const_tuple_71b948b56c382e70806b9258e1c97853_tuple, 9, const_str_plain_raise_on_redirect ); Py_INCREF( const_str_plain_raise_on_redirect );
    PyTuple_SET_ITEM( const_tuple_71b948b56c382e70806b9258e1c97853_tuple, 10, const_str_plain_raise_on_status ); Py_INCREF( const_str_plain_raise_on_status );
    PyTuple_SET_ITEM( const_tuple_71b948b56c382e70806b9258e1c97853_tuple, 11, const_str_plain_history ); Py_INCREF( const_str_plain_history );
    PyTuple_SET_ITEM( const_tuple_71b948b56c382e70806b9258e1c97853_tuple, 12, const_str_plain_respect_retry_after_header ); Py_INCREF( const_str_plain_respect_retry_after_header );
    const_str_plain_backoff = UNSTREAM_STRING( &constant_bin[ 916109 ], 7, 1 );
    const_str_digest_ed2c0b12f2250d745518387535c4958e = UNSTREAM_STRING( &constant_bin[ 922650 ], 323, 0 );
    const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple, 1, const_str_plain_retry_after ); Py_INCREF( const_str_plain_retry_after );
    PyTuple_SET_ITEM( const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple, 2, const_str_plain_seconds ); Py_INCREF( const_str_plain_seconds );
    PyTuple_SET_ITEM( const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple, 3, const_str_plain_retry_date_tuple ); Py_INCREF( const_str_plain_retry_date_tuple );
    PyTuple_SET_ITEM( const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple, 4, const_str_plain_retry_date ); Py_INCREF( const_str_plain_retry_date );
    const_str_digest_7e60379875538acb6d47a09b3bcd7fdf = UNSTREAM_STRING( &constant_bin[ 922973 ], 26, 0 );
    const_tuple_str_plain_self_str_plain_backoff_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_backoff_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_backoff_tuple, 1, const_str_plain_backoff ); Py_INCREF( const_str_plain_backoff );
    const_str_digest_adf0407d4b5f2535bca90601d487b350 = UNSTREAM_STRING( &constant_bin[ 922999 ], 36, 0 );
    const_str_digest_3ff146bf2cbf06e10d34294d9109668e = UNSTREAM_STRING( &constant_bin[ 923035 ], 33, 0 );
    const_str_digest_25ded409e041cb7d54dbe844ec9f890e = UNSTREAM_STRING( &constant_bin[ 923068 ], 376, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$util$retry( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_dadf7351385a3ba1e0f4cc18bd553e01;
static PyCodeObject *codeobj_c81e14bb9a3202eb23dcc9d6c957c988;
static PyCodeObject *codeobj_7eb8f089326fa52e8c46cf8f812387f1;
static PyCodeObject *codeobj_cb6ed5b480ff013c735623b413972be4;
static PyCodeObject *codeobj_bcd8670db10ec96d0310200084787b1a;
static PyCodeObject *codeobj_58e54a7d89193f07fdc193f8bd56f73e;
static PyCodeObject *codeobj_c9c4c11fc22c2cc243b1f09c35ae5657;
static PyCodeObject *codeobj_22bbeefe4fef943d7eb6f582aa11ac80;
static PyCodeObject *codeobj_fb702e099d297330a1d1fbafc8fa362b;
static PyCodeObject *codeobj_0a417503792b1a0ebaac1f4da154c30a;
static PyCodeObject *codeobj_2d7adac084aa8b7839a8cb8c97924dc7;
static PyCodeObject *codeobj_5e26a373429199531e49458d1fc2da8f;
static PyCodeObject *codeobj_a27057749a546774be6ac484f0abdc34;
static PyCodeObject *codeobj_885f13db986b528b26dbebdcfb8a051b;
static PyCodeObject *codeobj_1d6417e4973690c8aec66a9159527d1f;
static PyCodeObject *codeobj_deb4b8d48f0cc0db5cb314dc8c2caf61;
static PyCodeObject *codeobj_997fec0d8f590a85b39a65dcf91f92ee;
static PyCodeObject *codeobj_3fa8b0a1d5431b18d4cd3ad1149fd9d8;
static PyCodeObject *codeobj_e9afd4168e8ba2be293946ce052a3403;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_9bd675e6213bb199ca6f348d80f9c5a6;
    codeobj_dadf7351385a3ba1e0f4cc18bd553e01 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 209, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c81e14bb9a3202eb23dcc9d6c957c988 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_3d8456b692ba12d694b1345117db0cc2, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_7eb8f089326fa52e8c46cf8f812387f1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Retry, 27, const_tuple_127197c4737cb36c42fbf87f97ea7a04_tuple, 0, 0, CO_NOFREE );
    codeobj_cb6ed5b480ff013c735623b413972be4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 152, const_tuple_71b948b56c382e70806b9258e1c97853_tuple, 13, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bcd8670db10ec96d0310200084787b1a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 394, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_58e54a7d89193f07fdc193f8bd56f73e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__is_connection_error, 273, const_tuple_str_plain_self_str_plain_err_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c9c4c11fc22c2cc243b1f09c35ae5657 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__is_method_retryable, 285, const_tuple_str_plain_self_str_plain_method_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_22bbeefe4fef943d7eb6f582aa11ac80 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__is_read_error, 279, const_tuple_str_plain_self_str_plain_err_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fb702e099d297330a1d1fbafc8fa362b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__sleep_backoff, 251, const_tuple_str_plain_self_str_plain_backoff_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0a417503792b1a0ebaac1f4da154c30a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_from_int, 189, const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2d7adac084aa8b7839a8cb8c97924dc7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_backoff_time, 203, const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5e26a373429199531e49458d1fc2da8f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_retry_after, 233, const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a27057749a546774be6ac484f0abdc34 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_increment, 319, const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_885f13db986b528b26dbebdcfb8a051b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_exhausted, 310, const_tuple_str_plain_self_str_plain_retry_counts_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1d6417e4973690c8aec66a9159527d1f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_retry, 294, const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_deb4b8d48f0cc0db5cb314dc8c2caf61 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_new, 175, const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_997fec0d8f590a85b39a65dcf91f92ee = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parse_retry_after, 217, const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3fa8b0a1d5431b18d4cd3ad1149fd9d8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sleep, 257, const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e9afd4168e8ba2be293946ce052a3403 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sleep_for_retry, 243, const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_7_complex_call_helper_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_10__is_connection_error(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_11__is_read_error(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_12__is_method_retryable(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_13_is_retry( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_14_is_exhausted(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_15_increment( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_16___repr__(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_2_new(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_3_from_int( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_4_get_backoff_time(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_5_parse_retry_after(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_6_get_retry_after(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_7_sleep_for_retry( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_8__sleep_backoff(  );


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_9_sleep( PyObject *defaults );


// The module function definitions.
static PyObject *impl_urllib3$util$retry$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_total = python_pars[ 1 ];
    PyObject *par_connect = python_pars[ 2 ];
    PyObject *par_read = python_pars[ 3 ];
    PyObject *par_redirect = python_pars[ 4 ];
    PyObject *par_status = python_pars[ 5 ];
    PyObject *par_method_whitelist = python_pars[ 6 ];
    PyObject *par_status_forcelist = python_pars[ 7 ];
    PyObject *par_backoff_factor = python_pars[ 8 ];
    PyObject *par_raise_on_redirect = python_pars[ 9 ];
    PyObject *par_raise_on_status = python_pars[ 10 ];
    PyObject *par_history = python_pars[ 11 ];
    PyObject *par_respect_retry_after_header = python_pars[ 12 ];
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
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_name_10;
    PyObject *tmp_assattr_name_11;
    PyObject *tmp_assattr_name_12;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
    PyObject *tmp_assattr_target_10;
    PyObject *tmp_assattr_target_11;
    PyObject *tmp_assattr_target_12;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
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
    static struct Nuitka_FrameObject *cache_frame_cb6ed5b480ff013c735623b413972be4 = NULL;

    struct Nuitka_FrameObject *frame_cb6ed5b480ff013c735623b413972be4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cb6ed5b480ff013c735623b413972be4, codeobj_cb6ed5b480ff013c735623b413972be4, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cb6ed5b480ff013c735623b413972be4 = cache_frame_cb6ed5b480ff013c735623b413972be4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cb6ed5b480ff013c735623b413972be4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cb6ed5b480ff013c735623b413972be4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_total;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_total, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_connect;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 158;
        type_description_1 = "ooooooooooooo";
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

        exception_lineno = 158;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_connect, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_read;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "read" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        type_description_1 = "ooooooooooooo";
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
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_read, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = par_status;

    if ( tmp_assattr_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        type_description_1 = "ooooooooooooo";
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

        exception_lineno = 160;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_status, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = par_redirect;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "redirect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = Py_False;
    tmp_or_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    assert( !(tmp_or_left_truth_1 == -1) );
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_compexpr_left_2 = par_total;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "total" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = Py_False;
    tmp_or_right_value_1 = BOOL_FROM( tmp_compexpr_left_2 == tmp_compexpr_right_2 );
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
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
    tmp_assign_source_1 = const_int_0;
    {
        PyObject *old = par_redirect;
        par_redirect = tmp_assign_source_1;
        Py_INCREF( par_redirect );
        Py_XDECREF( old );
    }

    tmp_assign_source_2 = Py_False;
    {
        PyObject *old = par_raise_on_redirect;
        par_raise_on_redirect = tmp_assign_source_2;
        Py_INCREF( par_raise_on_redirect );
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_assattr_name_5 = par_redirect;

    if ( tmp_assattr_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "redirect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 166;
        type_description_1 = "ooooooooooooo";
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

        exception_lineno = 166;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_redirect, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_2 = par_status_forcelist;

    if ( tmp_or_left_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status_forcelist" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "ooooooooooooo";
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
    tmp_or_right_value_2 = PySet_New( NULL );
    tmp_assattr_name_6 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    Py_INCREF( tmp_or_left_value_2 );
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

        exception_lineno = 167;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_status_forcelist, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        exception_lineno = 167;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_6 );
    tmp_assattr_name_7 = par_method_whitelist;

    if ( tmp_assattr_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method_whitelist" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_7 = par_self;

    if ( tmp_assattr_target_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_method_whitelist, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_8 = par_backoff_factor;

    if ( tmp_assattr_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "backoff_factor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 169;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_8 = par_self;

    if ( tmp_assattr_target_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 169;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_backoff_factor, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_9 = par_raise_on_redirect;

    if ( tmp_assattr_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "raise_on_redirect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_9 = par_self;

    if ( tmp_assattr_target_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_raise_on_redirect, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_10 = par_raise_on_status;

    if ( tmp_assattr_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "raise_on_status" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_10 = par_self;

    if ( tmp_assattr_target_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_raise_on_status, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_3 = par_history;

    if ( tmp_or_left_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "history" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
    if ( tmp_or_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_1 = "ooooooooooooo";
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
    tmp_or_right_value_3 = const_tuple_empty;
    tmp_assattr_name_11 = tmp_or_right_value_3;
    goto or_end_3;
    or_left_3:;
    tmp_assattr_name_11 = tmp_or_left_value_3;
    or_end_3:;
    tmp_assattr_target_11 = par_self;

    if ( tmp_assattr_target_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_history, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_12 = par_respect_retry_after_header;

    if ( tmp_assattr_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "respect_retry_after_header" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_12 = par_self;

    if ( tmp_assattr_target_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_respect_retry_after_header, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb6ed5b480ff013c735623b413972be4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb6ed5b480ff013c735623b413972be4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cb6ed5b480ff013c735623b413972be4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cb6ed5b480ff013c735623b413972be4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cb6ed5b480ff013c735623b413972be4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cb6ed5b480ff013c735623b413972be4,
        type_description_1,
        par_self,
        par_total,
        par_connect,
        par_read,
        par_redirect,
        par_status,
        par_method_whitelist,
        par_status_forcelist,
        par_backoff_factor,
        par_raise_on_redirect,
        par_raise_on_status,
        par_history,
        par_respect_retry_after_header
    );


    // Release cached frame.
    if ( frame_cb6ed5b480ff013c735623b413972be4 == cache_frame_cb6ed5b480ff013c735623b413972be4 )
    {
        Py_DECREF( frame_cb6ed5b480ff013c735623b413972be4 );
    }
    cache_frame_cb6ed5b480ff013c735623b413972be4 = NULL;

    assertFrameObject( frame_cb6ed5b480ff013c735623b413972be4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_total );
    par_total = NULL;

    Py_XDECREF( par_connect );
    par_connect = NULL;

    Py_XDECREF( par_read );
    par_read = NULL;

    Py_XDECREF( par_redirect );
    par_redirect = NULL;

    Py_XDECREF( par_status );
    par_status = NULL;

    Py_XDECREF( par_method_whitelist );
    par_method_whitelist = NULL;

    Py_XDECREF( par_status_forcelist );
    par_status_forcelist = NULL;

    Py_XDECREF( par_backoff_factor );
    par_backoff_factor = NULL;

    Py_XDECREF( par_raise_on_redirect );
    par_raise_on_redirect = NULL;

    Py_XDECREF( par_raise_on_status );
    par_raise_on_status = NULL;

    Py_XDECREF( par_history );
    par_history = NULL;

    Py_XDECREF( par_respect_retry_after_header );
    par_respect_retry_after_header = NULL;

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

    Py_XDECREF( par_total );
    par_total = NULL;

    Py_XDECREF( par_connect );
    par_connect = NULL;

    Py_XDECREF( par_read );
    par_read = NULL;

    Py_XDECREF( par_redirect );
    par_redirect = NULL;

    Py_XDECREF( par_status );
    par_status = NULL;

    Py_XDECREF( par_method_whitelist );
    par_method_whitelist = NULL;

    Py_XDECREF( par_status_forcelist );
    par_status_forcelist = NULL;

    Py_XDECREF( par_backoff_factor );
    par_backoff_factor = NULL;

    Py_XDECREF( par_raise_on_redirect );
    par_raise_on_redirect = NULL;

    Py_XDECREF( par_raise_on_status );
    par_raise_on_status = NULL;

    Py_XDECREF( par_history );
    par_history = NULL;

    Py_XDECREF( par_respect_retry_after_header );
    par_respect_retry_after_header = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_1___init__ );
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


static PyObject *impl_urllib3$util$retry$$$function_2_new( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_kw = python_pars[ 1 ];
    PyObject *var_params = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
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
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_deb4b8d48f0cc0db5cb314dc8c2caf61 = NULL;

    struct Nuitka_FrameObject *frame_deb4b8d48f0cc0db5cb314dc8c2caf61;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_deb4b8d48f0cc0db5cb314dc8c2caf61, codeobj_deb4b8d48f0cc0db5cb314dc8c2caf61, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_deb4b8d48f0cc0db5cb314dc8c2caf61 = cache_frame_deb4b8d48f0cc0db5cb314dc8c2caf61;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_deb4b8d48f0cc0db5cb314dc8c2caf61 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_deb4b8d48f0cc0db5cb314dc8c2caf61 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assign_source_1 = _PyDict_NewPresized( 11 );
    tmp_dict_key_1 = const_str_plain_total;
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_total );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 177;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_connect;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_connect );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 178;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_read;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_read );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 178;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_redirect;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_redirect );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 178;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_status;
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_status );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 178;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_method_whitelist;
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_method_whitelist );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 179;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_7 = const_str_plain_status_forcelist;
    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_status_forcelist );
    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 180;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_8 = const_str_plain_backoff_factor;
    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_backoff_factor );
    if ( tmp_dict_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 181;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_8, tmp_dict_value_8 );
    Py_DECREF( tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_9 = const_str_plain_raise_on_redirect;
    tmp_source_name_9 = par_self;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_raise_on_redirect );
    if ( tmp_dict_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 182;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_9, tmp_dict_value_9 );
    Py_DECREF( tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_10 = const_str_plain_raise_on_status;
    tmp_source_name_10 = par_self;

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_raise_on_status );
    if ( tmp_dict_value_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 183;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_10, tmp_dict_value_10 );
    Py_DECREF( tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_11 = const_str_plain_history;
    tmp_source_name_11 = par_self;

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_history );
    if ( tmp_dict_value_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 184;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_11, tmp_dict_value_11 );
    Py_DECREF( tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    assert( var_params == NULL );
    var_params = tmp_assign_source_1;

    tmp_source_name_12 = var_params;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_update );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_kw;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_deb4b8d48f0cc0db5cb314dc8c2caf61->m_frame.f_lineno = 186;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_type_arg_1 = par_self;

    if ( tmp_type_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = var_params;

    if ( tmp_dircall_arg2_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg2_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
        tmp_return_value = impl___internal__$$$function_7_complex_call_helper_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_deb4b8d48f0cc0db5cb314dc8c2caf61 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_deb4b8d48f0cc0db5cb314dc8c2caf61 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_deb4b8d48f0cc0db5cb314dc8c2caf61 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_deb4b8d48f0cc0db5cb314dc8c2caf61, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_deb4b8d48f0cc0db5cb314dc8c2caf61->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_deb4b8d48f0cc0db5cb314dc8c2caf61, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_deb4b8d48f0cc0db5cb314dc8c2caf61,
        type_description_1,
        par_self,
        par_kw,
        var_params
    );


    // Release cached frame.
    if ( frame_deb4b8d48f0cc0db5cb314dc8c2caf61 == cache_frame_deb4b8d48f0cc0db5cb314dc8c2caf61 )
    {
        Py_DECREF( frame_deb4b8d48f0cc0db5cb314dc8c2caf61 );
    }
    cache_frame_deb4b8d48f0cc0db5cb314dc8c2caf61 = NULL;

    assertFrameObject( frame_deb4b8d48f0cc0db5cb314dc8c2caf61 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_2_new );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

    Py_XDECREF( var_params );
    var_params = NULL;

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

    Py_XDECREF( par_kw );
    par_kw = NULL;

    Py_XDECREF( var_params );
    var_params = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_2_new );
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


static PyObject *impl_urllib3$util$retry$$$function_3_from_int( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_retries = python_pars[ 1 ];
    PyObject *par_redirect = python_pars[ 2 ];
    PyObject *par_default = python_pars[ 3 ];
    PyObject *var_new_retries = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_bool_arg_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    bool tmp_isnot_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0a417503792b1a0ebaac1f4da154c30a = NULL;

    struct Nuitka_FrameObject *frame_0a417503792b1a0ebaac1f4da154c30a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0a417503792b1a0ebaac1f4da154c30a, codeobj_0a417503792b1a0ebaac1f4da154c30a, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0a417503792b1a0ebaac1f4da154c30a = cache_frame_0a417503792b1a0ebaac1f4da154c30a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0a417503792b1a0ebaac1f4da154c30a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0a417503792b1a0ebaac1f4da154c30a ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_retries;

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
    tmp_compare_left_2 = par_default;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "default" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 193;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_assign_source_1 = par_default;

    if ( tmp_assign_source_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "default" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 193;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_assign_source_1 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_source_name_1 = par_cls;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 193;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_DEFAULT );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    condexpr_end_1:;
    {
        PyObject *old = par_retries;
        par_retries = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_isinstance_inst_1 = par_retries;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "retries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_Retry );

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

        exception_lineno = 195;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        type_description_1 = "ooooo";
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
    tmp_return_value = par_retries;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "retries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_bool_arg_1 = par_redirect;

    if ( tmp_bool_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "redirect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 198;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_1 = TO_BOOL( tmp_bool_arg_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        type_description_1 = "ooooo";
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
    tmp_and_right_value_1 = Py_None;
    tmp_assign_source_2 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_assign_source_2 = tmp_and_left_value_1;
    and_end_1:;
    {
        PyObject *old = par_redirect;
        par_redirect = tmp_assign_source_2;
        Py_INCREF( par_redirect );
        Py_XDECREF( old );
    }

    tmp_called_name_1 = par_cls;

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 199;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_retries;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "retries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 199;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_redirect;
    tmp_dict_value_1 = par_redirect;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_0a417503792b1a0ebaac1f4da154c30a->m_frame.f_lineno = 199;
    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_new_retries == NULL );
    var_new_retries = tmp_assign_source_3;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "log" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_debug );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_3ff146bf2cbf06e10d34294d9109668e;
    tmp_args_element_name_2 = par_retries;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "retries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_new_retries;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_retries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_0a417503792b1a0ebaac1f4da154c30a->m_frame.f_lineno = 200;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = var_new_retries;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_retries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a417503792b1a0ebaac1f4da154c30a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a417503792b1a0ebaac1f4da154c30a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a417503792b1a0ebaac1f4da154c30a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0a417503792b1a0ebaac1f4da154c30a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0a417503792b1a0ebaac1f4da154c30a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0a417503792b1a0ebaac1f4da154c30a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0a417503792b1a0ebaac1f4da154c30a,
        type_description_1,
        par_cls,
        par_retries,
        par_redirect,
        par_default,
        var_new_retries
    );


    // Release cached frame.
    if ( frame_0a417503792b1a0ebaac1f4da154c30a == cache_frame_0a417503792b1a0ebaac1f4da154c30a )
    {
        Py_DECREF( frame_0a417503792b1a0ebaac1f4da154c30a );
    }
    cache_frame_0a417503792b1a0ebaac1f4da154c30a = NULL;

    assertFrameObject( frame_0a417503792b1a0ebaac1f4da154c30a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_3_from_int );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_retries );
    par_retries = NULL;

    Py_XDECREF( par_redirect );
    par_redirect = NULL;

    Py_XDECREF( par_default );
    par_default = NULL;

    Py_XDECREF( var_new_retries );
    var_new_retries = NULL;

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

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_retries );
    par_retries = NULL;

    Py_XDECREF( par_redirect );
    par_redirect = NULL;

    Py_XDECREF( par_default );
    par_default = NULL;

    Py_XDECREF( var_new_retries );
    var_new_retries = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_3_from_int );
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


static PyObject *impl_urllib3$util$retry$$$function_4_get_backoff_time( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_consecutive_errors_len = NULL;
    PyObject *var_backoff_value = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_LtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_2d7adac084aa8b7839a8cb8c97924dc7 = NULL;

    struct Nuitka_FrameObject *frame_2d7adac084aa8b7839a8cb8c97924dc7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2d7adac084aa8b7839a8cb8c97924dc7, codeobj_2d7adac084aa8b7839a8cb8c97924dc7, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2d7adac084aa8b7839a8cb8c97924dc7 = cache_frame_2d7adac084aa8b7839a8cb8c97924dc7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2d7adac084aa8b7839a8cb8c97924dc7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2d7adac084aa8b7839a8cb8c97924dc7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_takewhile );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_takewhile );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "takewhile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 209;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = MAKE_FUNCTION_urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda(  );
    tmp_called_name_2 = (PyObject *)&PyReversed_Type;
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_history );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 210;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_2d7adac084aa8b7839a8cb8c97924dc7->m_frame.f_lineno = 210;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 210;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_2d7adac084aa8b7839a8cb8c97924dc7->m_frame.f_lineno = 209;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_1 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_consecutive_errors_len == NULL );
    var_consecutive_errors_len = tmp_assign_source_1;

    tmp_compare_left_1 = var_consecutive_errors_len;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_LtE_1 = RICH_COMPARE_BOOL_LE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_LtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_LtE_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = const_int_0;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 214;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_backoff_factor );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = const_int_pos_2;
    tmp_left_name_3 = var_consecutive_errors_len;

    if ( tmp_left_name_3 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "consecutive_errors_len" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 214;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = const_int_pos_1;
    tmp_right_name_2 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 214;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = POWER_OPERATION( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 214;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_backoff_value == NULL );
    var_backoff_value = tmp_assign_source_2;

    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_min );
    assert( tmp_called_name_3 != NULL );
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_BACKOFF_MAX );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = var_backoff_value;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_args_element_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "backoff_value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_2d7adac084aa8b7839a8cb8c97924dc7->m_frame.f_lineno = 215;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d7adac084aa8b7839a8cb8c97924dc7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d7adac084aa8b7839a8cb8c97924dc7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d7adac084aa8b7839a8cb8c97924dc7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2d7adac084aa8b7839a8cb8c97924dc7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2d7adac084aa8b7839a8cb8c97924dc7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2d7adac084aa8b7839a8cb8c97924dc7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2d7adac084aa8b7839a8cb8c97924dc7,
        type_description_1,
        par_self,
        var_consecutive_errors_len,
        var_backoff_value
    );


    // Release cached frame.
    if ( frame_2d7adac084aa8b7839a8cb8c97924dc7 == cache_frame_2d7adac084aa8b7839a8cb8c97924dc7 )
    {
        Py_DECREF( frame_2d7adac084aa8b7839a8cb8c97924dc7 );
    }
    cache_frame_2d7adac084aa8b7839a8cb8c97924dc7 = NULL;

    assertFrameObject( frame_2d7adac084aa8b7839a8cb8c97924dc7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_4_get_backoff_time );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_consecutive_errors_len );
    var_consecutive_errors_len = NULL;

    Py_XDECREF( var_backoff_value );
    var_backoff_value = NULL;

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

    Py_XDECREF( var_consecutive_errors_len );
    var_consecutive_errors_len = NULL;

    Py_XDECREF( var_backoff_value );
    var_backoff_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_4_get_backoff_time );
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


static PyObject *impl_urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_dadf7351385a3ba1e0f4cc18bd553e01 = NULL;

    struct Nuitka_FrameObject *frame_dadf7351385a3ba1e0f4cc18bd553e01;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dadf7351385a3ba1e0f4cc18bd553e01, codeobj_dadf7351385a3ba1e0f4cc18bd553e01, module_urllib3$util$retry, sizeof(void *) );
    frame_dadf7351385a3ba1e0f4cc18bd553e01 = cache_frame_dadf7351385a3ba1e0f4cc18bd553e01;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dadf7351385a3ba1e0f4cc18bd553e01 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dadf7351385a3ba1e0f4cc18bd553e01 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_x;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_redirect_location );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = Py_None;
    tmp_return_value = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dadf7351385a3ba1e0f4cc18bd553e01 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dadf7351385a3ba1e0f4cc18bd553e01 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dadf7351385a3ba1e0f4cc18bd553e01 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dadf7351385a3ba1e0f4cc18bd553e01, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dadf7351385a3ba1e0f4cc18bd553e01->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dadf7351385a3ba1e0f4cc18bd553e01, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dadf7351385a3ba1e0f4cc18bd553e01,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_dadf7351385a3ba1e0f4cc18bd553e01 == cache_frame_dadf7351385a3ba1e0f4cc18bd553e01 )
    {
        Py_DECREF( frame_dadf7351385a3ba1e0f4cc18bd553e01 );
    }
    cache_frame_dadf7351385a3ba1e0f4cc18bd553e01 = NULL;

    assertFrameObject( frame_dadf7351385a3ba1e0f4cc18bd553e01 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda );
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
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda );
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


static PyObject *impl_urllib3$util$retry$$$function_5_parse_retry_after( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_retry_after = python_pars[ 1 ];
    PyObject *var_seconds = NULL;
    PyObject *var_retry_date_tuple = NULL;
    PyObject *var_retry_date = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_int_arg_1;
    bool tmp_is_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static struct Nuitka_FrameObject *cache_frame_997fec0d8f590a85b39a65dcf91f92ee = NULL;

    struct Nuitka_FrameObject *frame_997fec0d8f590a85b39a65dcf91f92ee;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_997fec0d8f590a85b39a65dcf91f92ee, codeobj_997fec0d8f590a85b39a65dcf91f92ee, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_997fec0d8f590a85b39a65dcf91f92ee = cache_frame_997fec0d8f590a85b39a65dcf91f92ee;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_997fec0d8f590a85b39a65dcf91f92ee );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_997fec0d8f590a85b39a65dcf91f92ee ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_re );

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

        exception_lineno = 219;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_match );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_d43b7afa583ad163d56ae0bbfdcdb575;
    tmp_args_element_name_2 = par_retry_after;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "retry_after" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 219;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_997fec0d8f590a85b39a65dcf91f92ee->m_frame.f_lineno = 219;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 219;
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
    tmp_int_arg_1 = par_retry_after;

    if ( tmp_int_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "retry_after" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 220;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_seconds == NULL );
    var_seconds = tmp_assign_source_1;

    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_email );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_email );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "email" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 222;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_utils );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_parsedate );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_retry_after;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "retry_after" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 222;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_997fec0d8f590a85b39a65dcf91f92ee->m_frame.f_lineno = 222;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_retry_date_tuple == NULL );
    var_retry_date_tuple = tmp_assign_source_2;

    tmp_compare_left_1 = var_retry_date_tuple;

    CHECK_OBJECT( tmp_compare_left_1 );
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
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_InvalidHeader );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidHeader );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InvalidHeader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_digest_52dc615064dbc739578d7b66bd4357d4;
    tmp_right_name_1 = par_retry_after;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "retry_after" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_997fec0d8f590a85b39a65dcf91f92ee->m_frame.f_lineno = 224;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 224;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 225;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_mktime );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = var_retry_date_tuple;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "retry_date_tuple" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 225;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_997fec0d8f590a85b39a65dcf91f92ee->m_frame.f_lineno = 225;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_retry_date == NULL );
    var_retry_date = tmp_assign_source_3;

    tmp_left_name_2 = var_retry_date;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 226;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_997fec0d8f590a85b39a65dcf91f92ee->m_frame.f_lineno = 226;
    tmp_right_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_time );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_seconds == NULL );
    var_seconds = tmp_assign_source_4;

    branch_end_1:;
    tmp_compare_left_2 = var_seconds;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_5 = const_int_0;
    {
        PyObject *old = var_seconds;
        var_seconds = tmp_assign_source_5;
        Py_INCREF( var_seconds );
        Py_XDECREF( old );
    }

    branch_no_3:;
    tmp_return_value = var_seconds;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "seconds" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_997fec0d8f590a85b39a65dcf91f92ee );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_997fec0d8f590a85b39a65dcf91f92ee );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_997fec0d8f590a85b39a65dcf91f92ee );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_997fec0d8f590a85b39a65dcf91f92ee, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_997fec0d8f590a85b39a65dcf91f92ee->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_997fec0d8f590a85b39a65dcf91f92ee, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_997fec0d8f590a85b39a65dcf91f92ee,
        type_description_1,
        par_self,
        par_retry_after,
        var_seconds,
        var_retry_date_tuple,
        var_retry_date
    );


    // Release cached frame.
    if ( frame_997fec0d8f590a85b39a65dcf91f92ee == cache_frame_997fec0d8f590a85b39a65dcf91f92ee )
    {
        Py_DECREF( frame_997fec0d8f590a85b39a65dcf91f92ee );
    }
    cache_frame_997fec0d8f590a85b39a65dcf91f92ee = NULL;

    assertFrameObject( frame_997fec0d8f590a85b39a65dcf91f92ee );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_5_parse_retry_after );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_retry_after );
    par_retry_after = NULL;

    Py_XDECREF( var_seconds );
    var_seconds = NULL;

    Py_XDECREF( var_retry_date_tuple );
    var_retry_date_tuple = NULL;

    Py_XDECREF( var_retry_date );
    var_retry_date = NULL;

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

    Py_XDECREF( par_retry_after );
    par_retry_after = NULL;

    Py_XDECREF( var_seconds );
    var_seconds = NULL;

    Py_XDECREF( var_retry_date_tuple );
    var_retry_date_tuple = NULL;

    Py_XDECREF( var_retry_date );
    var_retry_date = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_5_parse_retry_after );
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


static PyObject *impl_urllib3$util$retry$$$function_6_get_retry_after( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_response = python_pars[ 1 ];
    PyObject *var_retry_after = NULL;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_5e26a373429199531e49458d1fc2da8f = NULL;

    struct Nuitka_FrameObject *frame_5e26a373429199531e49458d1fc2da8f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5e26a373429199531e49458d1fc2da8f, codeobj_5e26a373429199531e49458d1fc2da8f, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5e26a373429199531e49458d1fc2da8f = cache_frame_5e26a373429199531e49458d1fc2da8f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5e26a373429199531e49458d1fc2da8f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5e26a373429199531e49458d1fc2da8f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_response;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_5e26a373429199531e49458d1fc2da8f->m_frame.f_lineno = 236;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getheader, &PyTuple_GET_ITEM( const_tuple_str_digest_53eb1bcf3283c3fcccb95b51de02ce94_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_retry_after == NULL );
    var_retry_after = tmp_assign_source_1;

    tmp_compare_left_1 = var_retry_after;

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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
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

        exception_lineno = 241;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parse_retry_after );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_retry_after;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "retry_after" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_5e26a373429199531e49458d1fc2da8f->m_frame.f_lineno = 241;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5e26a373429199531e49458d1fc2da8f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5e26a373429199531e49458d1fc2da8f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5e26a373429199531e49458d1fc2da8f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5e26a373429199531e49458d1fc2da8f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5e26a373429199531e49458d1fc2da8f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5e26a373429199531e49458d1fc2da8f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5e26a373429199531e49458d1fc2da8f,
        type_description_1,
        par_self,
        par_response,
        var_retry_after
    );


    // Release cached frame.
    if ( frame_5e26a373429199531e49458d1fc2da8f == cache_frame_5e26a373429199531e49458d1fc2da8f )
    {
        Py_DECREF( frame_5e26a373429199531e49458d1fc2da8f );
    }
    cache_frame_5e26a373429199531e49458d1fc2da8f = NULL;

    assertFrameObject( frame_5e26a373429199531e49458d1fc2da8f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_6_get_retry_after );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_retry_after );
    var_retry_after = NULL;

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

    Py_XDECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_retry_after );
    var_retry_after = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_6_get_retry_after );
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


static PyObject *impl_urllib3$util$retry$$$function_7_sleep_for_retry( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_response = python_pars[ 1 ];
    PyObject *var_retry_after = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e9afd4168e8ba2be293946ce052a3403 = NULL;

    struct Nuitka_FrameObject *frame_e9afd4168e8ba2be293946ce052a3403;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e9afd4168e8ba2be293946ce052a3403, codeobj_e9afd4168e8ba2be293946ce052a3403, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e9afd4168e8ba2be293946ce052a3403 = cache_frame_e9afd4168e8ba2be293946ce052a3403;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e9afd4168e8ba2be293946ce052a3403 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e9afd4168e8ba2be293946ce052a3403 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_retry_after );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_response;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 244;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_e9afd4168e8ba2be293946ce052a3403->m_frame.f_lineno = 244;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_retry_after == NULL );
    var_retry_after = tmp_assign_source_1;

    tmp_cond_value_1 = var_retry_after;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        type_description_1 = "ooo";
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 246;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sleep );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_retry_after;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "retry_after" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 246;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_e9afd4168e8ba2be293946ce052a3403->m_frame.f_lineno = 246;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9afd4168e8ba2be293946ce052a3403 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9afd4168e8ba2be293946ce052a3403 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e9afd4168e8ba2be293946ce052a3403 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e9afd4168e8ba2be293946ce052a3403, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e9afd4168e8ba2be293946ce052a3403->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e9afd4168e8ba2be293946ce052a3403, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e9afd4168e8ba2be293946ce052a3403,
        type_description_1,
        par_self,
        par_response,
        var_retry_after
    );


    // Release cached frame.
    if ( frame_e9afd4168e8ba2be293946ce052a3403 == cache_frame_e9afd4168e8ba2be293946ce052a3403 )
    {
        Py_DECREF( frame_e9afd4168e8ba2be293946ce052a3403 );
    }
    cache_frame_e9afd4168e8ba2be293946ce052a3403 = NULL;

    assertFrameObject( frame_e9afd4168e8ba2be293946ce052a3403 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_7_sleep_for_retry );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_retry_after );
    var_retry_after = NULL;

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

    Py_XDECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_retry_after );
    var_retry_after = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_7_sleep_for_retry );
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


static PyObject *impl_urllib3$util$retry$$$function_8__sleep_backoff( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_backoff = NULL;
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
    int tmp_cmp_LtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_fb702e099d297330a1d1fbafc8fa362b = NULL;

    struct Nuitka_FrameObject *frame_fb702e099d297330a1d1fbafc8fa362b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fb702e099d297330a1d1fbafc8fa362b, codeobj_fb702e099d297330a1d1fbafc8fa362b, module_urllib3$util$retry, sizeof(void *)+sizeof(void *) );
    frame_fb702e099d297330a1d1fbafc8fa362b = cache_frame_fb702e099d297330a1d1fbafc8fa362b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fb702e099d297330a1d1fbafc8fa362b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fb702e099d297330a1d1fbafc8fa362b ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_fb702e099d297330a1d1fbafc8fa362b->m_frame.f_lineno = 252;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_backoff_time );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_backoff == NULL );
    var_backoff = tmp_assign_source_1;

    tmp_compare_left_1 = var_backoff;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_LtE_1 = RICH_COMPARE_BOOL_LE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_LtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_LtE_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 255;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sleep );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_backoff;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "backoff" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 255;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_fb702e099d297330a1d1fbafc8fa362b->m_frame.f_lineno = 255;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fb702e099d297330a1d1fbafc8fa362b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fb702e099d297330a1d1fbafc8fa362b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fb702e099d297330a1d1fbafc8fa362b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fb702e099d297330a1d1fbafc8fa362b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fb702e099d297330a1d1fbafc8fa362b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fb702e099d297330a1d1fbafc8fa362b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fb702e099d297330a1d1fbafc8fa362b,
        type_description_1,
        par_self,
        var_backoff
    );


    // Release cached frame.
    if ( frame_fb702e099d297330a1d1fbafc8fa362b == cache_frame_fb702e099d297330a1d1fbafc8fa362b )
    {
        Py_DECREF( frame_fb702e099d297330a1d1fbafc8fa362b );
    }
    cache_frame_fb702e099d297330a1d1fbafc8fa362b = NULL;

    assertFrameObject( frame_fb702e099d297330a1d1fbafc8fa362b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_8__sleep_backoff );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_backoff );
    var_backoff = NULL;

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

    Py_XDECREF( var_backoff );
    var_backoff = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_8__sleep_backoff );
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


static PyObject *impl_urllib3$util$retry$$$function_9_sleep( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_response = python_pars[ 1 ];
    PyObject *var_slept = NULL;
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3fa8b0a1d5431b18d4cd3ad1149fd9d8 = NULL;

    struct Nuitka_FrameObject *frame_3fa8b0a1d5431b18d4cd3ad1149fd9d8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3fa8b0a1d5431b18d4cd3ad1149fd9d8, codeobj_3fa8b0a1d5431b18d4cd3ad1149fd9d8, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3fa8b0a1d5431b18d4cd3ad1149fd9d8 = cache_frame_3fa8b0a1d5431b18d4cd3ad1149fd9d8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3fa8b0a1d5431b18d4cd3ad1149fd9d8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3fa8b0a1d5431b18d4cd3ad1149fd9d8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_cond_value_1 = par_response;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        type_description_1 = "ooo";
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
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sleep_for_retry );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 267;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_response;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 267;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_3fa8b0a1d5431b18d4cd3ad1149fd9d8->m_frame.f_lineno = 267;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 267;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_slept == NULL );
    var_slept = tmp_assign_source_1;

    tmp_cond_value_2 = var_slept;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        type_description_1 = "ooo";
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    branch_no_1:;
    tmp_called_instance_1 = par_self;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 271;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_3fa8b0a1d5431b18d4cd3ad1149fd9d8->m_frame.f_lineno = 271;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__sleep_backoff );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fa8b0a1d5431b18d4cd3ad1149fd9d8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fa8b0a1d5431b18d4cd3ad1149fd9d8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fa8b0a1d5431b18d4cd3ad1149fd9d8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3fa8b0a1d5431b18d4cd3ad1149fd9d8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3fa8b0a1d5431b18d4cd3ad1149fd9d8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3fa8b0a1d5431b18d4cd3ad1149fd9d8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3fa8b0a1d5431b18d4cd3ad1149fd9d8,
        type_description_1,
        par_self,
        par_response,
        var_slept
    );


    // Release cached frame.
    if ( frame_3fa8b0a1d5431b18d4cd3ad1149fd9d8 == cache_frame_3fa8b0a1d5431b18d4cd3ad1149fd9d8 )
    {
        Py_DECREF( frame_3fa8b0a1d5431b18d4cd3ad1149fd9d8 );
    }
    cache_frame_3fa8b0a1d5431b18d4cd3ad1149fd9d8 = NULL;

    assertFrameObject( frame_3fa8b0a1d5431b18d4cd3ad1149fd9d8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_9_sleep );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_slept );
    var_slept = NULL;

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

    Py_XDECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_slept );
    var_slept = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_9_sleep );
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


static PyObject *impl_urllib3$util$retry$$$function_10__is_connection_error( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_err = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_58e54a7d89193f07fdc193f8bd56f73e = NULL;

    struct Nuitka_FrameObject *frame_58e54a7d89193f07fdc193f8bd56f73e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_58e54a7d89193f07fdc193f8bd56f73e, codeobj_58e54a7d89193f07fdc193f8bd56f73e, module_urllib3$util$retry, sizeof(void *)+sizeof(void *) );
    frame_58e54a7d89193f07fdc193f8bd56f73e = cache_frame_58e54a7d89193f07fdc193f8bd56f73e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_58e54a7d89193f07fdc193f8bd56f73e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_58e54a7d89193f07fdc193f8bd56f73e ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_err;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ConnectTimeoutError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_58e54a7d89193f07fdc193f8bd56f73e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_58e54a7d89193f07fdc193f8bd56f73e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_58e54a7d89193f07fdc193f8bd56f73e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_58e54a7d89193f07fdc193f8bd56f73e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_58e54a7d89193f07fdc193f8bd56f73e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_58e54a7d89193f07fdc193f8bd56f73e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_58e54a7d89193f07fdc193f8bd56f73e,
        type_description_1,
        par_self,
        par_err
    );


    // Release cached frame.
    if ( frame_58e54a7d89193f07fdc193f8bd56f73e == cache_frame_58e54a7d89193f07fdc193f8bd56f73e )
    {
        Py_DECREF( frame_58e54a7d89193f07fdc193f8bd56f73e );
    }
    cache_frame_58e54a7d89193f07fdc193f8bd56f73e = NULL;

    assertFrameObject( frame_58e54a7d89193f07fdc193f8bd56f73e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_10__is_connection_error );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_err );
    par_err = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_err );
    par_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_10__is_connection_error );
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


static PyObject *impl_urllib3$util$retry$$$function_11__is_read_error( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_err = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_22bbeefe4fef943d7eb6f582aa11ac80 = NULL;

    struct Nuitka_FrameObject *frame_22bbeefe4fef943d7eb6f582aa11ac80;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_22bbeefe4fef943d7eb6f582aa11ac80, codeobj_22bbeefe4fef943d7eb6f582aa11ac80, module_urllib3$util$retry, sizeof(void *)+sizeof(void *) );
    frame_22bbeefe4fef943d7eb6f582aa11ac80 = cache_frame_22bbeefe4fef943d7eb6f582aa11ac80;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_22bbeefe4fef943d7eb6f582aa11ac80 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_22bbeefe4fef943d7eb6f582aa11ac80 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_err;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ReadTimeoutError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 283;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ProtocolError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProtocolError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProtocolError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 283;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
    tmp_return_value = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_22bbeefe4fef943d7eb6f582aa11ac80 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_22bbeefe4fef943d7eb6f582aa11ac80 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_22bbeefe4fef943d7eb6f582aa11ac80 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_22bbeefe4fef943d7eb6f582aa11ac80, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_22bbeefe4fef943d7eb6f582aa11ac80->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_22bbeefe4fef943d7eb6f582aa11ac80, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_22bbeefe4fef943d7eb6f582aa11ac80,
        type_description_1,
        par_self,
        par_err
    );


    // Release cached frame.
    if ( frame_22bbeefe4fef943d7eb6f582aa11ac80 == cache_frame_22bbeefe4fef943d7eb6f582aa11ac80 )
    {
        Py_DECREF( frame_22bbeefe4fef943d7eb6f582aa11ac80 );
    }
    cache_frame_22bbeefe4fef943d7eb6f582aa11ac80 = NULL;

    assertFrameObject( frame_22bbeefe4fef943d7eb6f582aa11ac80 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_11__is_read_error );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_err );
    par_err = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_err );
    par_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_11__is_read_error );
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


static PyObject *impl_urllib3$util$retry$$$function_12__is_method_retryable( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_c9c4c11fc22c2cc243b1f09c35ae5657 = NULL;

    struct Nuitka_FrameObject *frame_c9c4c11fc22c2cc243b1f09c35ae5657;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c9c4c11fc22c2cc243b1f09c35ae5657, codeobj_c9c4c11fc22c2cc243b1f09c35ae5657, module_urllib3$util$retry, sizeof(void *)+sizeof(void *) );
    frame_c9c4c11fc22c2cc243b1f09c35ae5657 = cache_frame_c9c4c11fc22c2cc243b1f09c35ae5657;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c9c4c11fc22c2cc243b1f09c35ae5657 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c9c4c11fc22c2cc243b1f09c35ae5657 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_method_whitelist );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 289;
        type_description_1 = "oo";
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
    tmp_called_instance_1 = par_method;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 289;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_c9c4c11fc22c2cc243b1f09c35ae5657->m_frame.f_lineno = 289;
    tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_upper );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
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

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_method_whitelist );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 289;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
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

        exception_lineno = 289;
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c9c4c11fc22c2cc243b1f09c35ae5657 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c9c4c11fc22c2cc243b1f09c35ae5657 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c9c4c11fc22c2cc243b1f09c35ae5657 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c9c4c11fc22c2cc243b1f09c35ae5657, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c9c4c11fc22c2cc243b1f09c35ae5657->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c9c4c11fc22c2cc243b1f09c35ae5657, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c9c4c11fc22c2cc243b1f09c35ae5657,
        type_description_1,
        par_self,
        par_method
    );


    // Release cached frame.
    if ( frame_c9c4c11fc22c2cc243b1f09c35ae5657 == cache_frame_c9c4c11fc22c2cc243b1f09c35ae5657 )
    {
        Py_DECREF( frame_c9c4c11fc22c2cc243b1f09c35ae5657 );
    }
    cache_frame_c9c4c11fc22c2cc243b1f09c35ae5657 = NULL;

    assertFrameObject( frame_c9c4c11fc22c2cc243b1f09c35ae5657 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_12__is_method_retryable );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_12__is_method_retryable );
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


static PyObject *impl_urllib3$util$retry$$$function_13_is_retry( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_status_code = python_pars[ 2 ];
    PyObject *par_has_retry_after = python_pars[ 3 ];
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
    int tmp_and_left_truth_3;
    int tmp_and_left_truth_4;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_left_value_4;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_and_right_value_4;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    static struct Nuitka_FrameObject *cache_frame_1d6417e4973690c8aec66a9159527d1f = NULL;

    struct Nuitka_FrameObject *frame_1d6417e4973690c8aec66a9159527d1f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1d6417e4973690c8aec66a9159527d1f, codeobj_1d6417e4973690c8aec66a9159527d1f, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1d6417e4973690c8aec66a9159527d1f = cache_frame_1d6417e4973690c8aec66a9159527d1f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1d6417e4973690c8aec66a9159527d1f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1d6417e4973690c8aec66a9159527d1f ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__is_method_retryable );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_method;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 301;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_1d6417e4973690c8aec66a9159527d1f->m_frame.f_lineno = 301;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 301;
        type_description_1 = "oooo";
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 304;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_status_forcelist );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 304;
        type_description_1 = "oooo";
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
    tmp_compexpr_left_1 = par_status_code;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status_code" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 304;
        type_description_1 = "oooo";
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

        exception_lineno = 304;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_status_forcelist );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_1 );
    tmp_cond_value_2 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_2 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 304;
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
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 307;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_total );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 308;
        type_description_1 = "oooo";
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
    Py_DECREF( tmp_and_left_value_2 );
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 307;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_respect_retry_after_header );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_3 );

        exception_lineno = 308;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    Py_DECREF( tmp_and_left_value_3 );
    tmp_and_left_value_4 = par_has_retry_after;

    if ( tmp_and_left_value_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "has_retry_after" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 308;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    if ( tmp_and_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_4 == 1 )
    {
        goto and_right_4;
    }
    else
    {
        goto and_left_4;
    }
    and_right_4:;
    tmp_compexpr_left_2 = par_status_code;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status_code" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 308;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
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

        exception_lineno = 308;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_RETRY_AFTER_STATUS_CODES );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_4 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_and_right_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_3 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    tmp_and_right_value_3 = tmp_and_left_value_4;
    and_end_4:;
    Py_INCREF( tmp_and_right_value_3 );
    tmp_and_right_value_2 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_and_right_value_2 = tmp_and_left_value_3;
    and_end_3:;
    tmp_return_value = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_return_value = tmp_and_left_value_2;
    and_end_2:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d6417e4973690c8aec66a9159527d1f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d6417e4973690c8aec66a9159527d1f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d6417e4973690c8aec66a9159527d1f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1d6417e4973690c8aec66a9159527d1f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1d6417e4973690c8aec66a9159527d1f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1d6417e4973690c8aec66a9159527d1f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1d6417e4973690c8aec66a9159527d1f,
        type_description_1,
        par_self,
        par_method,
        par_status_code,
        par_has_retry_after
    );


    // Release cached frame.
    if ( frame_1d6417e4973690c8aec66a9159527d1f == cache_frame_1d6417e4973690c8aec66a9159527d1f )
    {
        Py_DECREF( frame_1d6417e4973690c8aec66a9159527d1f );
    }
    cache_frame_1d6417e4973690c8aec66a9159527d1f = NULL;

    assertFrameObject( frame_1d6417e4973690c8aec66a9159527d1f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_13_is_retry );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_status_code );
    par_status_code = NULL;

    Py_XDECREF( par_has_retry_after );
    par_has_retry_after = NULL;

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

    Py_XDECREF( par_status_code );
    par_status_code = NULL;

    Py_XDECREF( par_has_retry_after );
    par_has_retry_after = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_13_is_retry );
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


static PyObject *impl_urllib3$util$retry$$$function_14_is_exhausted( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_retry_counts = NULL;
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
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_885f13db986b528b26dbebdcfb8a051b = NULL;

    struct Nuitka_FrameObject *frame_885f13db986b528b26dbebdcfb8a051b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_885f13db986b528b26dbebdcfb8a051b, codeobj_885f13db986b528b26dbebdcfb8a051b, module_urllib3$util$retry, sizeof(void *)+sizeof(void *) );
    frame_885f13db986b528b26dbebdcfb8a051b = cache_frame_885f13db986b528b26dbebdcfb8a051b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_885f13db986b528b26dbebdcfb8a051b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_885f13db986b528b26dbebdcfb8a051b ) == 2 ); // Frame stack

    // Framed code:
    tmp_assign_source_1 = PyTuple_New( 5 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_total );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 312;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_1, 0, tmp_tuple_element_1 );
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 312;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_connect );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 312;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_1, 1, tmp_tuple_element_1 );
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 312;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_read );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 312;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_1, 2, tmp_tuple_element_1 );
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 312;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_redirect );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 312;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_1, 3, tmp_tuple_element_1 );
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 312;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_status );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 312;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_1, 4, tmp_tuple_element_1 );
    assert( var_retry_counts == NULL );
    var_retry_counts = tmp_assign_source_1;

    tmp_called_name_1 = (PyObject *)&PyFilter_Type;
    tmp_args_element_name_1 = Py_None;
    tmp_args_element_name_2 = var_retry_counts;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_885f13db986b528b26dbebdcfb8a051b->m_frame.f_lineno = 313;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_retry_counts;
        assert( old != NULL );
        var_retry_counts = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_cond_value_1 = var_retry_counts;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        type_description_1 = "oo";
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
    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_min );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_3 = var_retry_counts;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "retry_counts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 317;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_885f13db986b528b26dbebdcfb8a051b->m_frame.f_lineno = 317;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 317;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 317;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_885f13db986b528b26dbebdcfb8a051b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_885f13db986b528b26dbebdcfb8a051b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_885f13db986b528b26dbebdcfb8a051b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_885f13db986b528b26dbebdcfb8a051b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_885f13db986b528b26dbebdcfb8a051b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_885f13db986b528b26dbebdcfb8a051b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_885f13db986b528b26dbebdcfb8a051b,
        type_description_1,
        par_self,
        var_retry_counts
    );


    // Release cached frame.
    if ( frame_885f13db986b528b26dbebdcfb8a051b == cache_frame_885f13db986b528b26dbebdcfb8a051b )
    {
        Py_DECREF( frame_885f13db986b528b26dbebdcfb8a051b );
    }
    cache_frame_885f13db986b528b26dbebdcfb8a051b = NULL;

    assertFrameObject( frame_885f13db986b528b26dbebdcfb8a051b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_14_is_exhausted );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_retry_counts );
    var_retry_counts = NULL;

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

    Py_XDECREF( var_retry_counts );
    var_retry_counts = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_14_is_exhausted );
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


static PyObject *impl_urllib3$util$retry$$$function_15_increment( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_response = python_pars[ 3 ];
    PyObject *par_error = python_pars[ 4 ];
    PyObject *par__pool = python_pars[ 5 ];
    PyObject *par__stacktrace = python_pars[ 6 ];
    PyObject *var_total = NULL;
    PyObject *var_connect = NULL;
    PyObject *var_read = NULL;
    PyObject *var_redirect = NULL;
    PyObject *var_status_count = NULL;
    PyObject *var_cause = NULL;
    PyObject *var_status = NULL;
    PyObject *var_redirect_location = NULL;
    PyObject *var_history = NULL;
    PyObject *var_new_retry = NULL;
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
    int tmp_and_left_truth_3;
    int tmp_and_left_truth_4;
    int tmp_and_left_truth_5;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_left_value_4;
    PyObject *tmp_and_left_value_5;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_and_right_value_4;
    PyObject *tmp_and_right_value_5;
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
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_args_element_name_22;
    PyObject *tmp_args_element_name_23;
    PyObject *tmp_args_element_name_24;
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
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
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
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
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
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    bool tmp_isnot_4;
    bool tmp_isnot_5;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_a27057749a546774be6ac484f0abdc34 = NULL;

    struct Nuitka_FrameObject *frame_a27057749a546774be6ac484f0abdc34;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a27057749a546774be6ac484f0abdc34, codeobj_a27057749a546774be6ac484f0abdc34, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a27057749a546774be6ac484f0abdc34 = cache_frame_a27057749a546774be6ac484f0abdc34;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a27057749a546774be6ac484f0abdc34 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a27057749a546774be6ac484f0abdc34 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_total );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = Py_False;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
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
    tmp_and_right_value_1 = par_error;

    if ( tmp_and_right_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 331;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

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


        exception_lineno = 331;
        type_description_1 = "ooooooooooooooooo";
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 333;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_reraise );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 333;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_type_arg_1 = par_error;

    if ( tmp_type_arg_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 333;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 333;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_error;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 333;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par__stacktrace;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_stacktrace" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 333;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_a27057749a546774be6ac484f0abdc34->m_frame.f_lineno = 333;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 333;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 333;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
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

        exception_lineno = 335;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_total );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_total == NULL );
    var_total = tmp_assign_source_1;

    tmp_compare_left_1 = var_total;

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
    tmp_left_name_1 = var_total;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "total" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 337;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_2 = tmp_left_name_1;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_total = tmp_assign_source_2;

    branch_no_2:;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 339;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_connect );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 339;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_connect == NULL );
    var_connect = tmp_assign_source_3;

    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 340;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_read );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 340;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_read == NULL );
    var_read = tmp_assign_source_4;

    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 341;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_redirect );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_redirect == NULL );
    var_redirect = tmp_assign_source_5;

    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 342;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_status );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_status_count == NULL );
    var_status_count = tmp_assign_source_6;

    tmp_assign_source_7 = const_str_plain_unknown;
    assert( var_cause == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_cause = tmp_assign_source_7;

    tmp_assign_source_8 = Py_None;
    assert( var_status == NULL );
    Py_INCREF( tmp_assign_source_8 );
    var_status = tmp_assign_source_8;

    tmp_assign_source_9 = Py_None;
    assert( var_redirect_location == NULL );
    Py_INCREF( tmp_assign_source_9 );
    var_redirect_location = tmp_assign_source_9;

    tmp_and_left_value_2 = par_error;

    if ( tmp_and_left_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 347;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        type_description_1 = "ooooooooooooooooo";
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
    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 347;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__is_connection_error );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_error;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 347;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_a27057749a546774be6ac484f0abdc34->m_frame.f_lineno = 347;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_and_right_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    Py_INCREF( tmp_and_left_value_2 );
    tmp_cond_value_2 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 347;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_compare_left_2 = var_connect;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 349;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_False;
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
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 350;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_reraise );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_type_arg_2 = par_error;

    if ( tmp_type_arg_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 350;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = BUILTIN_TYPE1( tmp_type_arg_2 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 350;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = par_error;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 350;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = par__stacktrace;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_stacktrace" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 350;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_a27057749a546774be6ac484f0abdc34->m_frame.f_lineno = 350;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 350;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_compare_left_3 = var_connect;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 351;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_left_name_2 = var_connect;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 352;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_10 = tmp_left_name_2;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 352;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_connect = tmp_assign_source_10;

    branch_no_5:;
    branch_end_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_and_left_value_3 = par_error;

    if ( tmp_and_left_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 354;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 354;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    tmp_source_name_10 = par_self;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 354;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__is_read_error );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 354;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = par_error;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 354;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_a27057749a546774be6ac484f0abdc34->m_frame.f_lineno = 354;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_and_right_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 354;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    Py_INCREF( tmp_and_left_value_3 );
    tmp_cond_value_3 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 354;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_compexpr_left_2 = var_read;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "read" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 356;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = Py_False;
    tmp_or_left_value_1 = BOOL_FROM( tmp_compexpr_left_2 == tmp_compexpr_right_2 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    assert( !(tmp_or_left_truth_1 == -1) );
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_source_name_11 = par_self;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 356;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__is_method_retryable );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = par_method;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 356;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_a27057749a546774be6ac484f0abdc34->m_frame.f_lineno = 356;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_4 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_4 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 357;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_reraise );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_type_arg_3 = par_error;

    if ( tmp_type_arg_3 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 357;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = BUILTIN_TYPE1( tmp_type_arg_3 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 357;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = par_error;

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 357;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = par__stacktrace;

    if ( tmp_args_element_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_stacktrace" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 357;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_a27057749a546774be6ac484f0abdc34->m_frame.f_lineno = 357;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    exception_lineno = 357;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
    goto branch_end_7;
    branch_no_7:;
    tmp_compare_left_4 = var_read;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "read" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 358;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = Py_None;
    tmp_isnot_3 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    if ( tmp_isnot_3 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_left_name_3 = var_read;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "read" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 359;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_11 = tmp_left_name_3;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_read = tmp_assign_source_11;

    branch_no_8:;
    branch_end_7:;
    goto branch_end_6;
    branch_no_6:;
    tmp_and_left_value_4 = par_response;

    if ( tmp_and_left_value_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 361;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    if ( tmp_and_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 361;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_4 == 1 )
    {
        goto and_right_4;
    }
    else
    {
        goto and_left_4;
    }
    and_right_4:;
    tmp_called_instance_1 = par_response;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 361;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_a27057749a546774be6ac484f0abdc34->m_frame.f_lineno = 361;
    tmp_and_right_value_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_redirect_location );
    if ( tmp_and_right_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 361;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_5 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    Py_INCREF( tmp_and_left_value_4 );
    tmp_cond_value_5 = tmp_and_left_value_4;
    and_end_4:;
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 361;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_compare_left_5 = var_redirect;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "redirect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 363;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = Py_None;
    tmp_isnot_4 = ( tmp_compare_left_5 != tmp_compare_right_5 );
    if ( tmp_isnot_4 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_left_name_4 = var_redirect;

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "redirect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 364;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_4 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_4, tmp_right_name_4 );
    tmp_assign_source_12 = tmp_left_name_4;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 364;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_redirect = tmp_assign_source_12;

    branch_no_10:;
    tmp_assign_source_13 = const_str_digest_93b5718dbdad50e34931a5c649b12b14;
    {
        PyObject *old = var_cause;
        var_cause = tmp_assign_source_13;
        Py_INCREF( var_cause );
        Py_XDECREF( old );
    }

    tmp_called_instance_2 = par_response;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 366;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_a27057749a546774be6ac484f0abdc34->m_frame.f_lineno = 366;
    tmp_assign_source_14 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_get_redirect_location );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 366;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_redirect_location;
        var_redirect_location = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_source_name_13 = par_response;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 367;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_status );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_status;
        var_status = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    goto branch_end_9;
    branch_no_9:;
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ResponseError );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ResponseError );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ResponseError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 372;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_16 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_GENERIC_ERROR );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_cause;
        var_cause = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    tmp_and_left_value_5 = par_response;

    if ( tmp_and_left_value_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 373;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_5 = CHECK_IF_TRUE( tmp_and_left_value_5 );
    if ( tmp_and_left_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_5 == 1 )
    {
        goto and_right_5;
    }
    else
    {
        goto and_left_5;
    }
    and_right_5:;
    tmp_source_name_15 = par_response;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 373;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_status );
    if ( tmp_and_right_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_6 = tmp_and_right_value_5;
    goto and_end_5;
    and_left_5:;
    Py_INCREF( tmp_and_left_value_5 );
    tmp_cond_value_6 = tmp_and_left_value_5;
    and_end_5:;
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 373;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_compare_left_6 = var_status_count;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status_count" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 374;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = Py_None;
    tmp_isnot_5 = ( tmp_compare_left_6 != tmp_compare_right_6 );
    if ( tmp_isnot_5 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_left_name_5 = var_status_count;

    if ( tmp_left_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status_count" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 375;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_5 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_5, tmp_right_name_5 );
    tmp_assign_source_17 = tmp_left_name_5;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_status_count = tmp_assign_source_17;

    branch_no_12:;
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ResponseError );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ResponseError );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ResponseError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 376;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_SPECIFIC_ERROR );
    if ( tmp_source_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_format );
    Py_DECREF( tmp_source_name_16 );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_status_code;
    tmp_source_name_18 = par_response;

    if ( tmp_source_name_18 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 377;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_status );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 377;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_a27057749a546774be6ac484f0abdc34->m_frame.f_lineno = 376;
    tmp_assign_source_18 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_7, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_cause;
        var_cause = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    tmp_source_name_19 = par_response;

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 378;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_19 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_status );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_status;
        var_status = tmp_assign_source_19;
        Py_XDECREF( old );
    }

    branch_no_11:;
    branch_end_9:;
    branch_end_6:;
    branch_end_3:;
    tmp_source_name_20 = par_self;

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 380;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_history );
    if ( tmp_left_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 380;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_6 = PyTuple_New( 1 );
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_RequestHistory );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestHistory );
    }

    if ( tmp_called_name_8 == NULL )
    {
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestHistory" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 380;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_13 = par_method;

    if ( tmp_args_element_name_13 == NULL )
    {
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 380;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_14 = par_url;

    if ( tmp_args_element_name_14 == NULL )
    {
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 380;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_15 = par_error;

    if ( tmp_args_element_name_15 == NULL )
    {
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 380;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_16 = var_status;

    if ( tmp_args_element_name_16 == NULL )
    {
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 380;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_17 = var_redirect_location;

    if ( tmp_args_element_name_17 == NULL )
    {
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "redirect_location" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 380;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_a27057749a546774be6ac484f0abdc34->m_frame.f_lineno = 380;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_8, call_args );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );

        exception_lineno = 380;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_6, 0, tmp_tuple_element_1 );
    tmp_assign_source_20 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 380;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_history == NULL );
    var_history = tmp_assign_source_20;

    tmp_source_name_21 = par_self;

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 382;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_new );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_2 = _PyDict_NewPresized( 6 );
    tmp_dict_key_2 = const_str_plain_total;
    tmp_dict_value_2 = var_total;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "total" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 383;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_connect;
    tmp_dict_value_3 = var_connect;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 384;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_read;
    tmp_dict_value_4 = var_read;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "read" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 384;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_redirect;
    tmp_dict_value_5 = var_redirect;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "redirect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 384;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_status;
    tmp_dict_value_6 = var_status_count;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status_count" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 384;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_7 = const_str_plain_history;
    tmp_dict_value_7 = var_history;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "history" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 385;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    frame_a27057749a546774be6ac484f0abdc34->m_frame.f_lineno = 382;
    tmp_assign_source_21 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_9, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_new_retry == NULL );
    var_new_retry = tmp_assign_source_21;

    tmp_called_instance_3 = var_new_retry;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_a27057749a546774be6ac484f0abdc34->m_frame.f_lineno = 387;
    tmp_cond_value_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_is_exhausted );
    if ( tmp_cond_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 387;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        exception_lineno = 387;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_MaxRetryError );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MaxRetryError );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MaxRetryError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 388;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_18 = par__pool;

    if ( tmp_args_element_name_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_pool" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 388;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_19 = par_url;

    if ( tmp_args_element_name_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 388;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_2 = par_error;

    if ( tmp_or_left_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "error" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 388;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
        type_description_1 = "ooooooooooooooooo";
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
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ResponseError );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ResponseError );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ResponseError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 388;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_21 = var_cause;

    if ( tmp_args_element_name_21 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cause" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 388;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_a27057749a546774be6ac484f0abdc34->m_frame.f_lineno = 388;
    {
        PyObject *call_args[] = { tmp_args_element_name_21 };
        tmp_or_right_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_20 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    Py_INCREF( tmp_or_left_value_2 );
    tmp_args_element_name_20 = tmp_or_left_value_2;
    or_end_2:;
    frame_a27057749a546774be6ac484f0abdc34->m_frame.f_lineno = 388;
    {
        PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_20 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_4;
    exception_lineno = 388;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_13:;
    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "log" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 390;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_debug );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_22 = const_str_digest_adf0407d4b5f2535bca90601d487b350;
    tmp_args_element_name_23 = par_url;

    if ( tmp_args_element_name_23 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 390;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_24 = var_new_retry;

    if ( tmp_args_element_name_24 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_retry" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 390;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_a27057749a546774be6ac484f0abdc34->m_frame.f_lineno = 390;
    {
        PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = var_new_retry;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_retry" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 392;
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a27057749a546774be6ac484f0abdc34 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a27057749a546774be6ac484f0abdc34 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a27057749a546774be6ac484f0abdc34 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a27057749a546774be6ac484f0abdc34, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a27057749a546774be6ac484f0abdc34->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a27057749a546774be6ac484f0abdc34, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a27057749a546774be6ac484f0abdc34,
        type_description_1,
        par_self,
        par_method,
        par_url,
        par_response,
        par_error,
        par__pool,
        par__stacktrace,
        var_total,
        var_connect,
        var_read,
        var_redirect,
        var_status_count,
        var_cause,
        var_status,
        var_redirect_location,
        var_history,
        var_new_retry
    );


    // Release cached frame.
    if ( frame_a27057749a546774be6ac484f0abdc34 == cache_frame_a27057749a546774be6ac484f0abdc34 )
    {
        Py_DECREF( frame_a27057749a546774be6ac484f0abdc34 );
    }
    cache_frame_a27057749a546774be6ac484f0abdc34 = NULL;

    assertFrameObject( frame_a27057749a546774be6ac484f0abdc34 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_15_increment );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_response );
    par_response = NULL;

    Py_XDECREF( par_error );
    par_error = NULL;

    Py_XDECREF( par__pool );
    par__pool = NULL;

    Py_XDECREF( par__stacktrace );
    par__stacktrace = NULL;

    Py_XDECREF( var_total );
    var_total = NULL;

    Py_XDECREF( var_connect );
    var_connect = NULL;

    Py_XDECREF( var_read );
    var_read = NULL;

    Py_XDECREF( var_redirect );
    var_redirect = NULL;

    Py_XDECREF( var_status_count );
    var_status_count = NULL;

    Py_XDECREF( var_cause );
    var_cause = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    Py_XDECREF( var_redirect_location );
    var_redirect_location = NULL;

    Py_XDECREF( var_history );
    var_history = NULL;

    Py_XDECREF( var_new_retry );
    var_new_retry = NULL;

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

    Py_XDECREF( par_response );
    par_response = NULL;

    Py_XDECREF( par_error );
    par_error = NULL;

    Py_XDECREF( par__pool );
    par__pool = NULL;

    Py_XDECREF( par__stacktrace );
    par__stacktrace = NULL;

    Py_XDECREF( var_total );
    var_total = NULL;

    Py_XDECREF( var_connect );
    var_connect = NULL;

    Py_XDECREF( var_read );
    var_read = NULL;

    Py_XDECREF( var_redirect );
    var_redirect = NULL;

    Py_XDECREF( var_status_count );
    var_status_count = NULL;

    Py_XDECREF( var_cause );
    var_cause = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    Py_XDECREF( var_redirect_location );
    var_redirect_location = NULL;

    Py_XDECREF( var_history );
    var_history = NULL;

    Py_XDECREF( var_new_retry );
    var_new_retry = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_15_increment );
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


static PyObject *impl_urllib3$util$retry$$$function_16___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_bcd8670db10ec96d0310200084787b1a = NULL;

    struct Nuitka_FrameObject *frame_bcd8670db10ec96d0310200084787b1a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bcd8670db10ec96d0310200084787b1a, codeobj_bcd8670db10ec96d0310200084787b1a, module_urllib3$util$retry, sizeof(void *) );
    frame_bcd8670db10ec96d0310200084787b1a = cache_frame_bcd8670db10ec96d0310200084787b1a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bcd8670db10ec96d0310200084787b1a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bcd8670db10ec96d0310200084787b1a ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = const_str_digest_541aafc09da4591a658272cb389856a5;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
    assert( tmp_called_name_1 != NULL );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_key_1 = const_str_plain_cls;
    tmp_type_arg_1 = par_self;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_dict_value_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_dict_value_1 != NULL );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_self;
    tmp_dict_value_2 = par_self;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_bcd8670db10ec96d0310200084787b1a->m_frame.f_lineno = 395;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 395;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bcd8670db10ec96d0310200084787b1a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bcd8670db10ec96d0310200084787b1a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bcd8670db10ec96d0310200084787b1a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bcd8670db10ec96d0310200084787b1a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bcd8670db10ec96d0310200084787b1a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bcd8670db10ec96d0310200084787b1a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bcd8670db10ec96d0310200084787b1a,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_bcd8670db10ec96d0310200084787b1a == cache_frame_bcd8670db10ec96d0310200084787b1a )
    {
        Py_DECREF( frame_bcd8670db10ec96d0310200084787b1a );
    }
    cache_frame_bcd8670db10ec96d0310200084787b1a = NULL;

    assertFrameObject( frame_bcd8670db10ec96d0310200084787b1a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_16___repr__ );
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
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry$$$function_16___repr__ );
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



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_10__is_connection_error(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_10__is_connection_error,
        const_str_plain__is_connection_error,
#if PYTHON_VERSION >= 330
        const_str_digest_7e60379875538acb6d47a09b3bcd7fdf,
#endif
        codeobj_58e54a7d89193f07fdc193f8bd56f73e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        const_str_digest_7fb2c7a5424e28db1a201939b12c8399,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_11__is_read_error(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_11__is_read_error,
        const_str_plain__is_read_error,
#if PYTHON_VERSION >= 330
        const_str_digest_2d8b572caa8eac58f71c5c2fc1f268f9,
#endif
        codeobj_22bbeefe4fef943d7eb6f582aa11ac80,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        const_str_digest_be3c2e7a479fa0076df719ca5a930f72,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_12__is_method_retryable(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_12__is_method_retryable,
        const_str_plain__is_method_retryable,
#if PYTHON_VERSION >= 330
        const_str_digest_0ea7366bdeb0b49141acb3ad1441b7b5,
#endif
        codeobj_c9c4c11fc22c2cc243b1f09c35ae5657,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        const_str_digest_cfc303935f94cd9bd4759913289d5001,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_13_is_retry( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_13_is_retry,
        const_str_plain_is_retry,
#if PYTHON_VERSION >= 330
        const_str_digest_43a062f907032f59d25a421045c4a843,
#endif
        codeobj_1d6417e4973690c8aec66a9159527d1f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        const_str_digest_25ded409e041cb7d54dbe844ec9f890e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_14_is_exhausted(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_14_is_exhausted,
        const_str_plain_is_exhausted,
#if PYTHON_VERSION >= 330
        const_str_digest_4506185023298da4a69876975fb76211,
#endif
        codeobj_885f13db986b528b26dbebdcfb8a051b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        const_str_digest_02862dad88b03d79d6c3df8ba5e79ff6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_15_increment( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_15_increment,
        const_str_plain_increment,
#if PYTHON_VERSION >= 330
        const_str_digest_d3c5cf2f2d706173f393307c5fa372aa,
#endif
        codeobj_a27057749a546774be6ac484f0abdc34,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        const_str_digest_55857326d6523e3f76c12c271f391764,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_16___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_16___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 330
        const_str_digest_4291b42c0261755daa9f58af16f24a8c,
#endif
        codeobj_bcd8670db10ec96d0310200084787b1a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_297455e155b6c9736d87529e14591c5d,
#endif
        codeobj_cb6ed5b480ff013c735623b413972be4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_2_new(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_2_new,
        const_str_plain_new,
#if PYTHON_VERSION >= 330
        const_str_digest_ca693a71271df261e783dd0ecf309ae0,
#endif
        codeobj_deb4b8d48f0cc0db5cb314dc8c2caf61,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_3_from_int( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_3_from_int,
        const_str_plain_from_int,
#if PYTHON_VERSION >= 330
        const_str_digest_00aff75c087fe7f80636ea13a09e3e82,
#endif
        codeobj_0a417503792b1a0ebaac1f4da154c30a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        const_str_digest_54874c179a81b955e41d4fd1580cddd0,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_4_get_backoff_time(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_4_get_backoff_time,
        const_str_plain_get_backoff_time,
#if PYTHON_VERSION >= 330
        const_str_digest_e80b9085df081452c8caeed4571c51b7,
#endif
        codeobj_2d7adac084aa8b7839a8cb8c97924dc7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        const_str_digest_fc514c378d42c4c0744f71a520936e98,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        const_str_digest_96630de8eadb33fda97640a57fbbbd1c,
#endif
        codeobj_dadf7351385a3ba1e0f4cc18bd553e01,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_5_parse_retry_after(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_5_parse_retry_after,
        const_str_plain_parse_retry_after,
#if PYTHON_VERSION >= 330
        const_str_digest_683309cb722498c00ca029ec4e15acbf,
#endif
        codeobj_997fec0d8f590a85b39a65dcf91f92ee,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_6_get_retry_after(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_6_get_retry_after,
        const_str_plain_get_retry_after,
#if PYTHON_VERSION >= 330
        const_str_digest_6659ea07dd436805b2630885700a6e61,
#endif
        codeobj_5e26a373429199531e49458d1fc2da8f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        const_str_digest_9db0c4e907a20455d898e46f602427d6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_7_sleep_for_retry( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_7_sleep_for_retry,
        const_str_plain_sleep_for_retry,
#if PYTHON_VERSION >= 330
        const_str_digest_9bdc7bd568ca4c860ba3d9ea8f97a38f,
#endif
        codeobj_e9afd4168e8ba2be293946ce052a3403,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_8__sleep_backoff(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_8__sleep_backoff,
        const_str_plain__sleep_backoff,
#if PYTHON_VERSION >= 330
        const_str_digest_504591e526cc625e5b3bbfcf35d4ec2f,
#endif
        codeobj_fb702e099d297330a1d1fbafc8fa362b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_9_sleep( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_9_sleep,
        const_str_plain_sleep,
#if PYTHON_VERSION >= 330
        const_str_digest_b0594eafa05dc6a6810bb2c7c291548b,
#endif
        codeobj_3fa8b0a1d5431b18d4cd3ad1149fd9d8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_urllib3$util$retry,
        const_str_digest_ed2c0b12f2250d745518387535c4958e,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$util$retry =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.util.retry",   /* m_name */
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

MOD_INIT_DECL( urllib3$util$retry )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$util$retry );
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
    puts("urllib3.util.retry: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.retry: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$util$retry" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$util$retry = Py_InitModule4(
        "urllib3.util.retry",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_urllib3$util$retry = PyModule_Create( &mdef_urllib3$util$retry );
#endif

    moduledict_urllib3$util$retry = MODULE_DICT( module_urllib3$util$retry );

    CHECK_OBJECT( module_urllib3$util$retry );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd, module_urllib3$util$retry );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_0_var_DEFAULT_METHOD_WHITELIST = NULL;
    PyObject *outline_0_var_RETRY_AFTER_STATUS_CODES = NULL;
    PyObject *outline_0_var_BACKOFF_MAX = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var_new = NULL;
    PyObject *outline_0_var_from_int = NULL;
    PyObject *outline_0_var_get_backoff_time = NULL;
    PyObject *outline_0_var_parse_retry_after = NULL;
    PyObject *outline_0_var_get_retry_after = NULL;
    PyObject *outline_0_var_sleep_for_retry = NULL;
    PyObject *outline_0_var__sleep_backoff = NULL;
    PyObject *outline_0_var_sleep = NULL;
    PyObject *outline_0_var__is_connection_error = NULL;
    PyObject *outline_0_var__is_read_error = NULL;
    PyObject *outline_0_var__is_method_retryable = NULL;
    PyObject *outline_0_var_is_retry = NULL;
    PyObject *outline_0_var_is_exhausted = NULL;
    PyObject *outline_0_var_increment = NULL;
    PyObject *outline_0_var___repr__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_classmethod_arg_1;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_dict_name_1;
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
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
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
    PyObject *tmp_key_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_level_name_8;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_name_name_8;
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
    static struct Nuitka_FrameObject *cache_frame_7eb8f089326fa52e8c46cf8f812387f1_2 = NULL;

    struct Nuitka_FrameObject *frame_7eb8f089326fa52e8c46cf8f812387f1_2;

    struct Nuitka_FrameObject *frame_c81e14bb9a3202eb23dcc9d6c957c988;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    // Locals dictionary setup.
PyObject *locals_dict_1 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_9bd675e6213bb199ca6f348d80f9c5a6;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_c81e14bb9a3202eb23dcc9d6c957c988 = MAKE_MODULE_FRAME( codeobj_c81e14bb9a3202eb23dcc9d6c957c988, module_urllib3$util$retry );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_c81e14bb9a3202eb23dcc9d6c957c988 );
    assert( Py_REFCNT( frame_c81e14bb9a3202eb23dcc9d6c957c988 ) == 2 );

    // Framed code:
    frame_c81e14bb9a3202eb23dcc9d6c957c988->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_c81e14bb9a3202eb23dcc9d6c957c988->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_867cf107290997ea3f46e9cff397e1db;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    frame_c81e14bb9a3202eb23dcc9d6c957c988->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
    tmp_name_name_1 = const_str_plain_time;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3$util$retry;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_c81e14bb9a3202eb23dcc9d6c957c988->m_frame.f_lineno = 2;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( tmp_assign_source_8 != NULL );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_plain_logging;
    tmp_globals_name_2 = (PyObject *)moduledict_urllib3$util$retry;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_c81e14bb9a3202eb23dcc9d6c957c988->m_frame.f_lineno = 3;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_9 );
    tmp_name_name_3 = const_str_plain_collections;
    tmp_globals_name_3 = (PyObject *)moduledict_urllib3$util$retry;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_namedtuple_tuple;
    tmp_level_name_3 = const_int_0;
    frame_c81e14bb9a3202eb23dcc9d6c957c988->m_frame.f_lineno = 4;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_namedtuple );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_namedtuple, tmp_assign_source_10 );
    tmp_name_name_4 = const_str_plain_itertools;
    tmp_globals_name_4 = (PyObject *)moduledict_urllib3$util$retry;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_takewhile_tuple;
    tmp_level_name_4 = const_int_0;
    frame_c81e14bb9a3202eb23dcc9d6c957c988->m_frame.f_lineno = 5;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    assert( tmp_import_name_from_3 != NULL );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_takewhile );
    Py_DECREF( tmp_import_name_from_3 );
    assert( tmp_assign_source_11 != NULL );
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_takewhile, tmp_assign_source_11 );
    tmp_name_name_5 = const_str_plain_email;
    tmp_globals_name_5 = (PyObject *)moduledict_urllib3$util$retry;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = Py_None;
    tmp_level_name_5 = const_int_0;
    frame_c81e14bb9a3202eb23dcc9d6c957c988->m_frame.f_lineno = 6;
    tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_email, tmp_assign_source_12 );
    tmp_name_name_6 = const_str_plain_re;
    tmp_globals_name_6 = (PyObject *)moduledict_urllib3$util$retry;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = Py_None;
    tmp_level_name_6 = const_int_0;
    frame_c81e14bb9a3202eb23dcc9d6c957c988->m_frame.f_lineno = 7;
    tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_13 );
    tmp_name_name_7 = const_str_plain_exceptions;
    tmp_globals_name_7 = (PyObject *)moduledict_urllib3$util$retry;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple;
    tmp_level_name_7 = const_int_pos_2;
    frame_c81e14bb9a3202eb23dcc9d6c957c988->m_frame.f_lineno = 9;
    tmp_assign_source_14 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_14;

    // Tried code:
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_ConnectTimeoutError );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError, tmp_assign_source_15 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_MaxRetryError );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_MaxRetryError, tmp_assign_source_16 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_ProtocolError );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ProtocolError, tmp_assign_source_17 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_ReadTimeoutError );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError, tmp_assign_source_18 );
    tmp_import_name_from_8 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_ResponseError );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ResponseError, tmp_assign_source_19 );
    tmp_import_name_from_9 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_InvalidHeader );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_InvalidHeader, tmp_assign_source_20 );
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

    tmp_name_name_8 = const_str_plain_packages;
    tmp_globals_name_8 = (PyObject *)moduledict_urllib3$util$retry;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_six_tuple;
    tmp_level_name_8 = const_int_pos_2;
    frame_c81e14bb9a3202eb23dcc9d6c957c988->m_frame.f_lineno = 17;
    tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_six );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_21 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_logging );

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

        exception_lineno = 20;

        goto frame_exception_exit_1;
    }

    frame_c81e14bb9a3202eb23dcc9d6c957c988->m_frame.f_lineno = 20;
    tmp_assign_source_22 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple, 0 ) );

    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_22 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_namedtuple );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_namedtuple );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "namedtuple" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;

        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = const_str_plain_RequestHistory;
    tmp_call_arg_element_2 = LIST_COPY( const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list );
    frame_c81e14bb9a3202eb23dcc9d6c957c988->m_frame.f_lineno = 23;
    {
        PyObject *call_args[] = { tmp_call_arg_element_1, tmp_call_arg_element_2 };
        tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_RequestHistory, tmp_assign_source_23 );
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


        exception_lineno = 27;

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


        exception_lineno = 27;

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


        exception_lineno = 27;

        goto try_except_handler_2;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

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

        exception_lineno = 27;

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


        exception_lineno = 27;

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


        exception_lineno = 27;

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
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto try_except_handler_2;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_Retry;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_c81e14bb9a3202eb23dcc9d6c957c988->m_frame.f_lineno = 27;
    tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

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
    tmp_assign_source_29 = const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_29 );
    outline_0_var___module__ = tmp_assign_source_29;

    tmp_assign_source_30 = const_str_digest_bfee87cb73b0fbf33a8ade77b966813a;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_30 );
    outline_0_var___doc__ = tmp_assign_source_30;

    tmp_assign_source_31 = const_str_plain_Retry;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_31 );
    outline_0_var___qualname__ = tmp_assign_source_31;

    tmp_assign_source_32 = const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8;
    assert( outline_0_var_DEFAULT_METHOD_WHITELIST == NULL );
    Py_INCREF( tmp_assign_source_32 );
    outline_0_var_DEFAULT_METHOD_WHITELIST = tmp_assign_source_32;

    tmp_assign_source_33 = const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21;
    assert( outline_0_var_RETRY_AFTER_STATUS_CODES == NULL );
    Py_INCREF( tmp_assign_source_33 );
    outline_0_var_RETRY_AFTER_STATUS_CODES = tmp_assign_source_33;

    tmp_assign_source_34 = const_int_pos_120;
    assert( outline_0_var_BACKOFF_MAX == NULL );
    Py_INCREF( tmp_assign_source_34 );
    outline_0_var_BACKOFF_MAX = tmp_assign_source_34;

    tmp_defaults_1 = PyTuple_New( 12 );
    tmp_tuple_element_2 = const_int_pos_10;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_1, 3, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_1, 4, tmp_tuple_element_2 );
    tmp_tuple_element_2 = outline_0_var_DEFAULT_METHOD_WHITELIST;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_1, 5, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_1, 6, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_int_0;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_1, 7, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_True;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_1, 8, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_True;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_1, 9, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_1, 10, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_True;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_1, 11, tmp_tuple_element_2 );
    tmp_assign_source_35 = MAKE_FUNCTION_urllib3$util$retry$$$function_1___init__( tmp_defaults_1 );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_35;

    tmp_assign_source_36 = MAKE_FUNCTION_urllib3$util$retry$$$function_2_new(  );
    assert( outline_0_var_new == NULL );
    outline_0_var_new = tmp_assign_source_36;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7eb8f089326fa52e8c46cf8f812387f1_2, codeobj_7eb8f089326fa52e8c46cf8f812387f1, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7eb8f089326fa52e8c46cf8f812387f1_2 = cache_frame_7eb8f089326fa52e8c46cf8f812387f1_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7eb8f089326fa52e8c46cf8f812387f1_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7eb8f089326fa52e8c46cf8f812387f1_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_defaults_2 = const_tuple_true_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_classmethod_arg_1 = MAKE_FUNCTION_urllib3$util$retry$$$function_3_from_int( tmp_defaults_2 );
    tmp_assign_source_37 = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_1 );
    Py_DECREF( tmp_classmethod_arg_1 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_2 = "NooooooooNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_from_int == NULL );
    outline_0_var_from_int = tmp_assign_source_37;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_7eb8f089326fa52e8c46cf8f812387f1_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7eb8f089326fa52e8c46cf8f812387f1_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7eb8f089326fa52e8c46cf8f812387f1_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7eb8f089326fa52e8c46cf8f812387f1_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7eb8f089326fa52e8c46cf8f812387f1_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7eb8f089326fa52e8c46cf8f812387f1_2,
        type_description_2,
        NULL,
        outline_0_var___qualname__,
        outline_0_var___module__,
        outline_0_var___doc__,
        outline_0_var_DEFAULT_METHOD_WHITELIST,
        outline_0_var_RETRY_AFTER_STATUS_CODES,
        outline_0_var_BACKOFF_MAX,
        outline_0_var___init__,
        outline_0_var_new,
        outline_0_var_from_int,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    );


    // Release cached frame.
    if ( frame_7eb8f089326fa52e8c46cf8f812387f1_2 == cache_frame_7eb8f089326fa52e8c46cf8f812387f1_2 )
    {
        Py_DECREF( frame_7eb8f089326fa52e8c46cf8f812387f1_2 );
    }
    cache_frame_7eb8f089326fa52e8c46cf8f812387f1_2 = NULL;

    assertFrameObject( frame_7eb8f089326fa52e8c46cf8f812387f1_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_3;
    skip_nested_handling_1:;
    tmp_assign_source_38 = MAKE_FUNCTION_urllib3$util$retry$$$function_4_get_backoff_time(  );
    assert( outline_0_var_get_backoff_time == NULL );
    outline_0_var_get_backoff_time = tmp_assign_source_38;

    tmp_assign_source_39 = MAKE_FUNCTION_urllib3$util$retry$$$function_5_parse_retry_after(  );
    assert( outline_0_var_parse_retry_after == NULL );
    outline_0_var_parse_retry_after = tmp_assign_source_39;

    tmp_assign_source_40 = MAKE_FUNCTION_urllib3$util$retry$$$function_6_get_retry_after(  );
    assert( outline_0_var_get_retry_after == NULL );
    outline_0_var_get_retry_after = tmp_assign_source_40;

    tmp_defaults_3 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_41 = MAKE_FUNCTION_urllib3$util$retry$$$function_7_sleep_for_retry( tmp_defaults_3 );
    assert( outline_0_var_sleep_for_retry == NULL );
    outline_0_var_sleep_for_retry = tmp_assign_source_41;

    tmp_assign_source_42 = MAKE_FUNCTION_urllib3$util$retry$$$function_8__sleep_backoff(  );
    assert( outline_0_var__sleep_backoff == NULL );
    outline_0_var__sleep_backoff = tmp_assign_source_42;

    tmp_defaults_4 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_assign_source_43 = MAKE_FUNCTION_urllib3$util$retry$$$function_9_sleep( tmp_defaults_4 );
    assert( outline_0_var_sleep == NULL );
    outline_0_var_sleep = tmp_assign_source_43;

    tmp_assign_source_44 = MAKE_FUNCTION_urllib3$util$retry$$$function_10__is_connection_error(  );
    assert( outline_0_var__is_connection_error == NULL );
    outline_0_var__is_connection_error = tmp_assign_source_44;

    tmp_assign_source_45 = MAKE_FUNCTION_urllib3$util$retry$$$function_11__is_read_error(  );
    assert( outline_0_var__is_read_error == NULL );
    outline_0_var__is_read_error = tmp_assign_source_45;

    tmp_assign_source_46 = MAKE_FUNCTION_urllib3$util$retry$$$function_12__is_method_retryable(  );
    assert( outline_0_var__is_method_retryable == NULL );
    outline_0_var__is_method_retryable = tmp_assign_source_46;

    tmp_defaults_5 = const_tuple_false_tuple;
    Py_INCREF( tmp_defaults_5 );
    tmp_assign_source_47 = MAKE_FUNCTION_urllib3$util$retry$$$function_13_is_retry( tmp_defaults_5 );
    assert( outline_0_var_is_retry == NULL );
    outline_0_var_is_retry = tmp_assign_source_47;

    tmp_assign_source_48 = MAKE_FUNCTION_urllib3$util$retry$$$function_14_is_exhausted(  );
    assert( outline_0_var_is_exhausted == NULL );
    outline_0_var_is_exhausted = tmp_assign_source_48;

    tmp_defaults_6 = const_tuple_none_none_none_none_none_none_tuple;
    Py_INCREF( tmp_defaults_6 );
    tmp_assign_source_49 = MAKE_FUNCTION_urllib3$util$retry$$$function_15_increment( tmp_defaults_6 );
    assert( outline_0_var_increment == NULL );
    outline_0_var_increment = tmp_assign_source_49;

    tmp_assign_source_50 = MAKE_FUNCTION_urllib3$util$retry$$$function_16___repr__(  );
    assert( outline_0_var___repr__ == NULL );
    outline_0_var___repr__ = tmp_assign_source_50;

    tmp_called_name_4 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_3 = const_str_plain_Retry;
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

        exception_lineno = 27;

        goto try_except_handler_3;
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

        exception_lineno = 27;

        goto try_except_handler_3;
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

        exception_lineno = 27;

        goto try_except_handler_3;
    }
    if ( outline_0_var_DEFAULT_METHOD_WHITELIST != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_DEFAULT_METHOD_WHITELIST,
            outline_0_var_DEFAULT_METHOD_WHITELIST
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_DEFAULT_METHOD_WHITELIST
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_DEFAULT_METHOD_WHITELIST
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

        exception_lineno = 27;

        goto try_except_handler_3;
    }
    if ( outline_0_var_RETRY_AFTER_STATUS_CODES != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_RETRY_AFTER_STATUS_CODES,
            outline_0_var_RETRY_AFTER_STATUS_CODES
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_RETRY_AFTER_STATUS_CODES
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_RETRY_AFTER_STATUS_CODES
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

        exception_lineno = 27;

        goto try_except_handler_3;
    }
    if ( outline_0_var_BACKOFF_MAX != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_BACKOFF_MAX,
            outline_0_var_BACKOFF_MAX
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_BACKOFF_MAX
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_BACKOFF_MAX
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

        exception_lineno = 27;

        goto try_except_handler_3;
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

        exception_lineno = 27;

        goto try_except_handler_3;
    }
    if ( outline_0_var_new != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_new,
            outline_0_var_new
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_new
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_new
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

        exception_lineno = 27;

        goto try_except_handler_3;
    }
    if ( outline_0_var_from_int != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_from_int,
            outline_0_var_from_int
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_from_int
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_from_int
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

        exception_lineno = 27;

        goto try_except_handler_3;
    }
    if ( outline_0_var_get_backoff_time != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_get_backoff_time,
            outline_0_var_get_backoff_time
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_get_backoff_time
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_get_backoff_time
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

        exception_lineno = 27;

        goto try_except_handler_3;
    }
    if ( outline_0_var_parse_retry_after != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_parse_retry_after,
            outline_0_var_parse_retry_after
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_parse_retry_after
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_parse_retry_after
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

        exception_lineno = 27;

        goto try_except_handler_3;
    }
    if ( outline_0_var_get_retry_after != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_get_retry_after,
            outline_0_var_get_retry_after
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_get_retry_after
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_get_retry_after
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

        exception_lineno = 27;

        goto try_except_handler_3;
    }
    if ( outline_0_var_sleep_for_retry != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_sleep_for_retry,
            outline_0_var_sleep_for_retry
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_sleep_for_retry
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_sleep_for_retry
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

        exception_lineno = 27;

        goto try_except_handler_3;
    }
    if ( outline_0_var__sleep_backoff != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain__sleep_backoff,
            outline_0_var__sleep_backoff
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain__sleep_backoff
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain__sleep_backoff
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

        exception_lineno = 27;

        goto try_except_handler_3;
    }
    if ( outline_0_var_sleep != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_sleep,
            outline_0_var_sleep
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_sleep
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_sleep
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

        exception_lineno = 27;

        goto try_except_handler_3;
    }
    if ( outline_0_var__is_connection_error != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain__is_connection_error,
            outline_0_var__is_connection_error
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain__is_connection_error
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain__is_connection_error
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

        exception_lineno = 27;

        goto try_except_handler_3;
    }
    if ( outline_0_var__is_read_error != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain__is_read_error,
            outline_0_var__is_read_error
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain__is_read_error
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain__is_read_error
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

        exception_lineno = 27;

        goto try_except_handler_3;
    }
    if ( outline_0_var__is_method_retryable != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain__is_method_retryable,
            outline_0_var__is_method_retryable
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain__is_method_retryable
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain__is_method_retryable
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

        exception_lineno = 27;

        goto try_except_handler_3;
    }
    if ( outline_0_var_is_retry != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_is_retry,
            outline_0_var_is_retry
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_is_retry
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_is_retry
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

        exception_lineno = 27;

        goto try_except_handler_3;
    }
    if ( outline_0_var_is_exhausted != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_is_exhausted,
            outline_0_var_is_exhausted
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_is_exhausted
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_is_exhausted
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

        exception_lineno = 27;

        goto try_except_handler_3;
    }
    if ( outline_0_var_increment != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_increment,
            outline_0_var_increment
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_increment
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_increment
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

        exception_lineno = 27;

        goto try_except_handler_3;
    }
    if ( outline_0_var___repr__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain___repr__,
            outline_0_var___repr__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain___repr__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain___repr__
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

        exception_lineno = 27;

        goto try_except_handler_3;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_c81e14bb9a3202eb23dcc9d6c957c988->m_frame.f_lineno = 27;
    tmp_assign_source_51 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto try_except_handler_3;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_51;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry );
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

    Py_XDECREF( outline_0_var_DEFAULT_METHOD_WHITELIST );
    outline_0_var_DEFAULT_METHOD_WHITELIST = NULL;

    Py_XDECREF( outline_0_var_RETRY_AFTER_STATUS_CODES );
    outline_0_var_RETRY_AFTER_STATUS_CODES = NULL;

    Py_XDECREF( outline_0_var_BACKOFF_MAX );
    outline_0_var_BACKOFF_MAX = NULL;

    Py_XDECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    Py_XDECREF( outline_0_var_new );
    outline_0_var_new = NULL;

    Py_XDECREF( outline_0_var_from_int );
    outline_0_var_from_int = NULL;

    Py_XDECREF( outline_0_var_get_backoff_time );
    outline_0_var_get_backoff_time = NULL;

    Py_XDECREF( outline_0_var_parse_retry_after );
    outline_0_var_parse_retry_after = NULL;

    Py_XDECREF( outline_0_var_get_retry_after );
    outline_0_var_get_retry_after = NULL;

    Py_XDECREF( outline_0_var_sleep_for_retry );
    outline_0_var_sleep_for_retry = NULL;

    Py_XDECREF( outline_0_var__sleep_backoff );
    outline_0_var__sleep_backoff = NULL;

    Py_XDECREF( outline_0_var_sleep );
    outline_0_var_sleep = NULL;

    Py_XDECREF( outline_0_var__is_connection_error );
    outline_0_var__is_connection_error = NULL;

    Py_XDECREF( outline_0_var__is_read_error );
    outline_0_var__is_read_error = NULL;

    Py_XDECREF( outline_0_var__is_method_retryable );
    outline_0_var__is_method_retryable = NULL;

    Py_XDECREF( outline_0_var_is_retry );
    outline_0_var_is_retry = NULL;

    Py_XDECREF( outline_0_var_is_exhausted );
    outline_0_var_is_exhausted = NULL;

    Py_XDECREF( outline_0_var_increment );
    outline_0_var_increment = NULL;

    Py_XDECREF( outline_0_var___repr__ );
    outline_0_var___repr__ = NULL;

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

    Py_XDECREF( outline_0_var_DEFAULT_METHOD_WHITELIST );
    outline_0_var_DEFAULT_METHOD_WHITELIST = NULL;

    Py_XDECREF( outline_0_var_RETRY_AFTER_STATUS_CODES );
    outline_0_var_RETRY_AFTER_STATUS_CODES = NULL;

    Py_XDECREF( outline_0_var_BACKOFF_MAX );
    outline_0_var_BACKOFF_MAX = NULL;

    Py_XDECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    Py_XDECREF( outline_0_var_new );
    outline_0_var_new = NULL;

    Py_XDECREF( outline_0_var_from_int );
    outline_0_var_from_int = NULL;

    Py_XDECREF( outline_0_var_get_backoff_time );
    outline_0_var_get_backoff_time = NULL;

    Py_XDECREF( outline_0_var_parse_retry_after );
    outline_0_var_parse_retry_after = NULL;

    Py_XDECREF( outline_0_var_get_retry_after );
    outline_0_var_get_retry_after = NULL;

    Py_XDECREF( outline_0_var_sleep_for_retry );
    outline_0_var_sleep_for_retry = NULL;

    Py_XDECREF( outline_0_var__sleep_backoff );
    outline_0_var__sleep_backoff = NULL;

    Py_XDECREF( outline_0_var_sleep );
    outline_0_var_sleep = NULL;

    Py_XDECREF( outline_0_var__is_connection_error );
    outline_0_var__is_connection_error = NULL;

    Py_XDECREF( outline_0_var__is_read_error );
    outline_0_var__is_read_error = NULL;

    Py_XDECREF( outline_0_var__is_method_retryable );
    outline_0_var__is_method_retryable = NULL;

    Py_XDECREF( outline_0_var_is_retry );
    outline_0_var_is_retry = NULL;

    Py_XDECREF( outline_0_var_is_exhausted );
    outline_0_var_is_exhausted = NULL;

    Py_XDECREF( outline_0_var_increment );
    outline_0_var_increment = NULL;

    Py_XDECREF( outline_0_var___repr__ );
    outline_0_var___repr__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$retry );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 27;
    goto try_except_handler_2;
    outline_result_1:;
    tmp_assign_source_28 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_Retry, tmp_assign_source_28 );
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

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_Retry );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Retry" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 401;

        goto frame_exception_exit_1;
    }

    frame_c81e14bb9a3202eb23dcc9d6c957c988->m_frame.f_lineno = 401;
    tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_int_pos_3_tuple, 0 ) );

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;

        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_Retry );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry );
    }

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Retry" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 401;

        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_DEFAULT, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 401;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c81e14bb9a3202eb23dcc9d6c957c988 );
#endif
    popFrameStack();

    assertFrameObject( frame_c81e14bb9a3202eb23dcc9d6c957c988 );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c81e14bb9a3202eb23dcc9d6c957c988 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c81e14bb9a3202eb23dcc9d6c957c988, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c81e14bb9a3202eb23dcc9d6c957c988->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c81e14bb9a3202eb23dcc9d6c957c988, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;

    return MOD_RETURN_VALUE( module_urllib3$util$retry );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
