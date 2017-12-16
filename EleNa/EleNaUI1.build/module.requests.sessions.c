/* Generated code for Python source for module 'requests.sessions'
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

/* The _module_requests$sessions is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$sessions;
PyDictObject *moduledict_requests$sessions;

/* The module constants used, if any. */
static PyObject *const_str_digest_8ae4830b7ee99e05bb48d2cc82ed2d03;
extern PyObject *const_str_plain_headers;
extern PyObject *const_tuple_str_plain_self_str_plain_args_tuple;
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_70c41d0154ea67575d96c5031e23167a_tuple;
static PyObject *const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple;
static PyObject *const_str_digest_33222436398dec9a5c85de068ea71100;
extern PyObject *const_str_plain__next;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_keys_to_move;
static PyObject *const_str_plain_POST;
extern PyObject *const_str_plain_decode_content;
extern PyObject *const_str_plain_Request;
extern PyObject *const_str_angle_listcontraction;
extern PyObject *const_str_plain_encode;
extern PyObject *const_tuple_str_plain_CaseInsensitiveDict_tuple;
extern PyObject *const_str_plain_PUT;
static PyObject *const_str_plain_see_other;
extern PyObject *const_str_plain_temporary_redirect;
static PyObject *const_str_plain_redirect_parsed;
static PyObject *const_str_digest_7958def53e7364fc2fff7ba47f70e8b6;
static PyObject *const_str_digest_0cf52c61701094af14cce92132a5b4f5;
extern PyObject *const_tuple_str_plain_response_tuple;
static PyObject *const_tuple_str_plain_REQUESTS_CA_BUNDLE_tuple;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_Windows;
static PyObject *const_str_digest_83a4d90de9f8b0862d918bd04dff2cc4;
static PyObject *const_str_plain_bypass_proxy;
extern PyObject *const_str_plain_prepare_auth;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_plain_start;
extern PyObject *const_str_plain_models;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_str_plain_is_py3;
extern PyObject *const_str_plain_time;
static PyObject *const_str_plain_merge_environment_settings;
extern PyObject *const_str_angle_genexpr;
static PyObject *const_str_plain_environ_proxies;
static PyObject *const_str_plain_original_parsed;
extern PyObject *const_str_plain_proxies;
extern PyObject *const_str_plain_head;
extern PyObject *const_str_plain_seconds;
static PyObject *const_str_digest_34636d59879a5f018bde828d81ac59b6;
static PyObject *const_str_digest_1c229bac7f81999111a1bfbc0984644e;
static PyObject *const_str_digest_e811a9baa0ffd56d1b59860a4fbec4dc;
extern PyObject *const_tuple_28660caee0ff66870715c0ba247cbcaa_tuple;
extern PyObject *const_tuple_str_plain_allow_redirects_false_tuple;
static PyObject *const_str_digest_131435ff30698deac2d874478938fdd4;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_ContentDecodingError;
static PyObject *const_str_plain_CURL_CA_BUNDLE;
extern PyObject *const_str_digest_3c9527fc53ea2272c2080ca035d6631c;
static PyObject *const_str_digest_504b77692b694460b8c25198a52c83ba;
static PyObject *const_tuple_str_plain_stream_tuple;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_plain_proxy;
extern PyObject *const_tuple_str_plain_codes_tuple;
extern PyObject *const_str_digest_2b15502c566d8238f4869c227793bd1a;
extern PyObject *const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3;
extern PyObject *const_str_plain_found;
static PyObject *const_str_plain_yield_requests;
extern PyObject *const_str_plain_HTTPAdapter;
extern PyObject *const_str_plain_pop;
extern PyObject *const_int_0;
static PyObject *const_str_digest_3dc3a32088712bcdf672f48f5c0bf5c5;
extern PyObject *const_str_plain_response;
extern PyObject *const_str_plain_cookies;
extern PyObject *const_str_plain_extract_cookies_to_jar;
extern PyObject *const_str_plain_to_native_string;
extern PyObject *const_str_plain_patch;
static PyObject *const_tuple_0768baf36cf4776fb1bb180caf4d39ca_tuple;
static PyObject *const_tuple_str_plain_default_hooks_str_plain_dispatch_hook_tuple;
extern PyObject *const_str_plain_location;
static PyObject *const_tuple_str_plain_k_str_plain_self_str_plain_prefix_tuple;
extern PyObject *const_str_plain_setdefault;
extern PyObject *const_str_plain_no_proxy;
static PyObject *const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_cb48bb05adb0e091eb1c115fffeb4c8a;
extern PyObject *const_str_plain_password;
static PyObject *const_str_plain_rebuild_proxies;
static PyObject *const_str_plain_prepare_request;
static PyObject *const_tuple_false_none_true_none_none_false_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_geturl;
extern PyObject *const_str_plain_post;
extern PyObject *const_str_plain_state;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_merge_cookies;
extern PyObject *const_str_plain_get_auth_from_url;
static PyObject *const_str_digest_75001dc77fbb691e7475fd8848494419;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_startswith;
static PyObject *const_tuple_8b3ec114aaebfeb6fdc902e5b511052a_tuple;
extern PyObject *const_str_plain_to_key_val_list;
extern PyObject *const_str_plain_TooManyRedirects;
static PyObject *const_str_digest_0bca56866bcf0b75f74d31c9da00963c;
static PyObject *const_str_digest_489820f4fee1c95447c20d7aee4bc394;
static PyObject *const_str_plain_preferred_clock;
static PyObject *const_str_digest_247cc702d848ae8b6a2bfe101921c67f;
extern PyObject *const_str_plain_timedelta;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_latin1;
static PyObject *const_tuple_88099abfc2d744feb222ef53bae67000_tuple;
extern PyObject *const_str_plain_GET;
static PyObject *const_str_digest_0da4ca7e1d267b7753ceb4b2770531dd;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain_platform;
static PyObject *const_str_digest_1e854b3c946780bd62f1ad991507dc9c;
static PyObject *const_str_plain_mount;
extern PyObject *const_str_plain_lower;
static PyObject *const_tuple_str_plain_resp_str_plain_gen_tuple;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_put;
extern PyObject *const_str_plain_urlparse;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_plain_parsed_rurl;
static PyObject *const_str_plain_dict_class;
static PyObject *const_str_plain_merge_setting;
extern PyObject *const_str_plain_p;
static PyObject *const_tuple_7aac126bdaa9bb9ff1e0f840392a8d15_tuple;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_insert;
extern PyObject *const_str_plain_collections;
extern PyObject *const_tuple_str_plain_latin1_tuple;
extern PyObject *const_str_plain_all;
static PyObject *const_tuple_3a39e276216da4457335999d85bec4c4_tuple;
extern PyObject *const_str_plain_netloc;
static PyObject *const_tuple_str_plain_REDIRECT_STATI_tuple;
extern PyObject *const_str_plain_structures;
extern PyObject *const_str_plain_datetime;
static PyObject *const_tuple_str_plain_self_str_plain_resp_str_plain_location_tuple;
extern PyObject *const_str_plain_raw;
extern PyObject *const_tuple_str_plain_timedelta_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_state_tuple;
static PyObject *const_str_plain_adapters;
static PyObject *const_tuple_str_plain_CURL_CA_BUNDLE_tuple;
extern PyObject *const_str_plain_default_headers;
extern PyObject *const_str_plain_permanent_redirect;
extern PyObject *const_str_plain_k;
static PyObject *const_str_digest_92db2e8ed71c2e367d5357b04d0462c4;
static PyObject *const_str_plain_rewindable;
static PyObject *const_tuple_str_plain_to_key_val_list_str_plain_default_headers_tuple;
static PyObject *const_str_plain_REQUESTS_CA_BUNDLE;
static PyObject *const_str_plain_adapter;
static PyObject *const_list_dc982aca766e4d1362a255cd6d36b4fb_list;
extern PyObject *const_str_plain_upper;
static PyObject *const_str_digest_21406c84cc6f02469836def5bcdcadba;
extern PyObject *const_str_plain__body_position;
static PyObject *const_str_plain_perf_counter;
static PyObject *const_tuple_71d8ae6f747dd9ae85144ec882f93203_tuple;
extern PyObject *const_str_plain_moved;
extern PyObject *const_str_plain_parsed;
extern PyObject *const_str_plain_DELETE;
static PyObject *const_str_digest_382a6a157ce1707d0f242d5ea1fea71c;
static PyObject *const_str_digest_83853292c48098773b03eae760dcfe38;
extern PyObject *const_str_plain_InvalidSchema;
static PyObject *const_str_digest_f7f26a899d15b0307bb1388a5bda3892;
extern PyObject *const_str_plain_req;
extern PyObject *const_str_plain_v;
static PyObject *const_str_digest_368818c648e1111518d4140f8cd94f10;
static PyObject *const_str_plain_get_redirect_target;
static PyObject *const_str_plain_none_keys;
extern PyObject *const_str_plain_hostname;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_key;
static PyObject *const_dict_5a980a96e502e21a57174819267c7344;
static PyObject *const_str_digest_f2636f029da6046e540b6721c0c69c64;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_cookiejar_from_dict;
extern PyObject *const_str_plain_method;
static PyObject *const_str_plain_max_redirects;
static PyObject *const_str_plain_SessionRedirectMixin;
extern PyObject *const_str_plain_compat;
extern PyObject *const_str_plain_delete;
static PyObject *const_str_digest_fa3b2211e965dde050b87ae23cfb152f;
extern PyObject *const_str_plain_allow_redirects;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_str_digest_48d563b3d6be908aabde89b2dd46bb34;
extern PyObject *const_str_plain_status_codes;
static PyObject *const_str_digest_3773766f3922dc10926506cd67493626;
static PyObject *const_str_plain_trust_env;
extern PyObject *const_str_plain_request;
static PyObject *const_str_digest_28eb6d6e3c84195b87f5eda206592417;
static PyObject *const_tuple_fe4fef8ddb51312f9e467cc7141cf495_tuple;
static PyObject *const_str_digest_a2bd5503741425b00dbffd7aa6b079f3;
static PyObject *const_str_plain_get_adapter;
static PyObject *const_str_plain_session_hooks;
extern PyObject *const_str_plain_prefix;
extern PyObject *const_str_plain_json;
static PyObject *const_str_digest_19cf6e4b470974146c094a9eb3c6c9c0;
extern PyObject *const_str_plain__internal_utils;
static PyObject *const_str_digest_7e68f1bdd87458491c575c9c8a14f24c;
extern PyObject *const_str_plain_scheme;
static PyObject *const_tuple_dea3fb298c7cf88cd70133cab5554ba7_tuple;
extern PyObject *const_str_plain_elapsed;
extern PyObject *const_tuple_a95b72743b8804bf0e9cb38b968c0b18_tuple;
extern PyObject *const_str_plain_body;
static PyObject *const_str_digest_df652bc3c79065c8732d0893d1f77479;
static PyObject *const_str_digest_2326510b09c332a083755ce27f812d9d;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_clock;
static PyObject *const_str_digest_7c06a402579f6f9d9db7f3e04da983fc;
static PyObject *const_str_plain_purged_headers;
extern PyObject *const_str_plain_cookielib;
static PyObject *const_str_digest_ab50d4439ade3e74bd04aeb12b9713ae;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_plain_PATCH;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_digest_f2d2f5f01d8d9360355c50eb1d09d771;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_8f1f8a6d2be18d195ed7df0d436d212e;
static PyObject *const_str_digest_69a73433942a43d30c3208872597fbc4;
static PyObject *const_str_plain_merged_cookies;
static PyObject *const_str_digest_e53d4a974ffbd6783b2c04e911c575f6;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_default_hooks;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_REDIRECT_STATI;
extern PyObject *const_str_plain_session;
extern PyObject *const_str_plain_files;
static PyObject *const_str_plain_rebuild_auth;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain_stream;
static PyObject *const_tuple_str_plain_HTTPAdapter_tuple;
extern PyObject *const_str_plain_content;
extern PyObject *const_str_plain___setstate__;
extern PyObject *const_str_plain_dispatch_hook;
extern PyObject *const_str_plain_CaseInsensitiveDict;
extern PyObject *const_str_plain_Cookie;
static PyObject *const_str_plain_session_setting;
extern PyObject *const_str_plain_Authorization;
extern PyObject *const_str_plain_requote_uri;
static PyObject *const_str_digest_67055a59082a8581b7a2c86a2d1c1f83;
static PyObject *const_str_digest_d41fb1dddc6f7cfe3e1d581e7ccdd852;
static PyObject *const_str_plain_env_proxies;
extern PyObject *const_tuple_str_plain_all_tuple;
static PyObject *const_str_plain_resolve_redirects;
static PyObject *const_str_plain_request_setting;
extern PyObject *const_str_plain_system;
static PyObject *const_str_digest_e46ea1d9ca0677a0f1ae14af39cbbfc2;
static PyObject *const_str_plain_new_proxies;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_utf8;
static PyObject *const_str_digest_b49e9dfe95a484cf32f4e0dcf61e3c53;
extern PyObject *const_str_plain_requests;
extern PyObject *const_str_plain_update;
extern PyObject *const_str_plain_get_environ_proxies;
extern PyObject *const_str_plain_OPTIONS;
extern PyObject *const_str_plain___getstate__;
extern PyObject *const_str_plain_Mapping;
static PyObject *const_str_plain_new_auth;
static PyObject *const_tuple_52694123e02956767caa4fbf60cd1485_tuple;
static PyObject *const_tuple_b9ba4ced99a0ce31f3399e306cb806b0_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_url_str_plain_data_str_plain_kwargs_tuple;
extern PyObject *const_str_plain_prepare;
extern PyObject *const_str_plain_get;
static PyObject *const_str_digest_bb0c986a4d44a65e09f2da3af698fc66;
extern PyObject *const_str_plain_resp;
static PyObject *const_tuple_56022d833a2133ea98bc9669558d4a13_tuple;
extern PyObject *const_tuple_str_plain__basic_auth_str_tuple;
static PyObject *const_str_digest_391836e2dd6fe23dba9e1473e5ddf5c0;
static PyObject *const_str_digest_7905fa3cf6a1b7f0e3f1aa2a48144462;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_digest_13971ae58b983978540cbb4bbf3b1360;
static PyObject *const_str_plain_prefetch;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
extern PyObject *const_str_plain_hooks;
static PyObject *const_tuple_d59df39ec93ca03c50048d25a33ece73_tuple;
static PyObject *const_str_digest_8b3e93dde92996b29edc87dca601bdd4;
extern PyObject *const_str_plain_codes;
static PyObject *const_str_plain_gen;
static PyObject *const_str_digest_dfcd0fe2f27ce725c44199fb8c6f7973;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain_is_redirect;
extern PyObject *const_tuple_str_plain_no_proxy_tuple;
static PyObject *const_str_plain_adapter_kwargs;
static PyObject *const_str_digest_0850b94f6eea1bda1db9b25ee4381193;
extern PyObject *const_str_plain___enter__;
static PyObject *const_str_digest_962cc75eef259550816f5f0e877500ef;
static PyObject *const_str_digest_04d355f4e958fc387ef0f67f1046b28c;
static PyObject *const_tuple_str_plain_k_str_plain_v_str_plain_merged_setting_tuple;
extern PyObject *const_str_plain_environ;
extern PyObject *const_tuple_str_plain_to_native_string_tuple;
static PyObject *const_dict_d7fd5bd8b432e83dcd02aee0b5fbde86;
extern PyObject *const_str_plain_get_netrc_auth;
static PyObject *const_str_plain_merge_hooks;
extern PyObject *const_str_plain_Session;
extern PyObject *const_tuple_str_plain_allow_redirects_true_tuple;
extern PyObject *const_str_plain___attrs__;
extern PyObject *const_str_plain_ChunkedEncodingError;
static PyObject *const_tuple_e6a6f1c11ceb58ad93c55185ed71c231_tuple;
extern PyObject *const_str_plain_username;
extern PyObject *const_str_plain_status_code;
static PyObject *const_str_plain_merged_setting;
static PyObject *const_str_plain_hist;
static PyObject *const_tuple_667f897da4eaa203681d962b0447b021_tuple;
extern PyObject *const_str_plain_prepare_cookies;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_send;
extern PyObject *const_str_plain_attr;
extern PyObject *const_str_plain_should_bypass_proxies;
static PyObject *const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple;
extern PyObject *const_str_plain_prepared_request;
extern PyObject *const_str_plain_cert;
static PyObject *const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple;
extern PyObject *const_str_plain__cookies;
static PyObject *const_str_digest_70e065559513e1162375c7bbb9f9de21;
static PyObject *const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple;
static PyObject *const_tuple_59ffa986ae907cb93da3cb0708948d9b_tuple;
extern PyObject *const_str_plain_OrderedDict;
static PyObject *const_str_digest_dde136ad554213eb3ece20209a69ac24;
extern PyObject *const_str_plain_header;
extern PyObject *const_str_plain_verify;
static PyObject *const_str_digest_a1b7979c671004beb348b3acf3fa3833;
static PyObject *const_str_digest_0334ac5a65e948ab1a00ac2f5cfe75c1;
extern PyObject *const_str_plain_PreparedRequest;
extern PyObject *const_str_plain_HEAD;
extern PyObject *const_str_plain_urljoin;
static PyObject *const_str_plain_rebuild_method;
extern PyObject *const_str_plain_rewind_body;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple;
static PyObject *const_str_digest_dac01d786625c94b9a42a81aff30f4e0;
extern PyObject *const_str_plain_params;
extern PyObject *const_str_plain_RequestsCookieJar;
extern PyObject *const_str_plain_values;
static PyObject *const_tuple_str_plain_Mapping_tuple;
extern PyObject *const_str_plain_auth;
static PyObject *const_tuple_str_plain_self_str_plain_v_tuple;
extern PyObject *const_str_plain__basic_auth_str;
extern PyObject *const_str_plain_history;
extern PyObject *const_str_plain_DEFAULT_REDIRECT_LIMIT;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_CookieJar;
static PyObject *const_str_plain_request_hooks;
static PyObject *const_str_digest_147a008155143b0e10b18dcd3be84fb5;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_8ae4830b7ee99e05bb48d2cc82ed2d03 = UNSTREAM_STRING( &constant_bin[ 825832 ], 35, 0 );
    const_tuple_70c41d0154ea67575d96c5031e23167a_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_70c41d0154ea67575d96c5031e23167a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_70c41d0154ea67575d96c5031e23167a_tuple, 1, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_70c41d0154ea67575d96c5031e23167a_tuple, 2, const_str_plain_cookies ); Py_INCREF( const_str_plain_cookies );
    const_str_plain_merged_cookies = UNSTREAM_STRING( &constant_bin[ 825867 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_70c41d0154ea67575d96c5031e23167a_tuple, 3, const_str_plain_merged_cookies ); Py_INCREF( const_str_plain_merged_cookies );
    PyTuple_SET_ITEM( const_tuple_70c41d0154ea67575d96c5031e23167a_tuple, 4, const_str_plain_auth ); Py_INCREF( const_str_plain_auth );
    PyTuple_SET_ITEM( const_tuple_70c41d0154ea67575d96c5031e23167a_tuple, 5, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 1, const_str_plain_prepared_request ); Py_INCREF( const_str_plain_prepared_request );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 2, const_str_plain_proxies ); Py_INCREF( const_str_plain_proxies );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 3, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 4, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 5, const_str_plain_scheme ); Py_INCREF( const_str_plain_scheme );
    const_str_plain_new_proxies = UNSTREAM_STRING( &constant_bin[ 825881 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 6, const_str_plain_new_proxies ); Py_INCREF( const_str_plain_new_proxies );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 7, const_str_plain_no_proxy ); Py_INCREF( const_str_plain_no_proxy );
    const_str_plain_bypass_proxy = UNSTREAM_STRING( &constant_bin[ 825892 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 8, const_str_plain_bypass_proxy ); Py_INCREF( const_str_plain_bypass_proxy );
    const_str_plain_environ_proxies = UNSTREAM_STRING( &constant_bin[ 825904 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 9, const_str_plain_environ_proxies ); Py_INCREF( const_str_plain_environ_proxies );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 10, const_str_plain_proxy ); Py_INCREF( const_str_plain_proxy );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 11, const_str_plain_username ); Py_INCREF( const_str_plain_username );
    PyTuple_SET_ITEM( const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 12, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    const_str_digest_33222436398dec9a5c85de068ea71100 = UNSTREAM_STRING( &constant_bin[ 825919 ], 11, 0 );
    const_str_plain_keys_to_move = UNSTREAM_STRING( &constant_bin[ 825930 ], 12, 1 );
    const_str_plain_POST = UNSTREAM_STRING( &constant_bin[ 607863 ], 4, 1 );
    const_str_plain_see_other = UNSTREAM_STRING( &constant_bin[ 825942 ], 9, 1 );
    const_str_plain_redirect_parsed = UNSTREAM_STRING( &constant_bin[ 825951 ], 15, 1 );
    const_str_digest_7958def53e7364fc2fff7ba47f70e8b6 = UNSTREAM_STRING( &constant_bin[ 825966 ], 2033, 0 );
    const_str_digest_0cf52c61701094af14cce92132a5b4f5 = UNSTREAM_STRING( &constant_bin[ 827999 ], 42, 0 );
    const_tuple_str_plain_REQUESTS_CA_BUNDLE_tuple = PyTuple_New( 1 );
    const_str_plain_REQUESTS_CA_BUNDLE = UNSTREAM_STRING( &constant_bin[ 828041 ], 18, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_REQUESTS_CA_BUNDLE_tuple, 0, const_str_plain_REQUESTS_CA_BUNDLE ); Py_INCREF( const_str_plain_REQUESTS_CA_BUNDLE );
    const_str_digest_83a4d90de9f8b0862d918bd04dff2cc4 = UNSTREAM_STRING( &constant_bin[ 828059 ], 230, 0 );
    const_str_plain_merge_environment_settings = UNSTREAM_STRING( &constant_bin[ 828289 ], 26, 1 );
    const_str_plain_original_parsed = UNSTREAM_STRING( &constant_bin[ 828315 ], 15, 1 );
    const_str_digest_34636d59879a5f018bde828d81ac59b6 = UNSTREAM_STRING( &constant_bin[ 828330 ], 382, 0 );
    const_str_digest_1c229bac7f81999111a1bfbc0984644e = UNSTREAM_STRING( &constant_bin[ 828712 ], 233, 0 );
    const_str_digest_e811a9baa0ffd56d1b59860a4fbec4dc = UNSTREAM_STRING( &constant_bin[ 828945 ], 17, 0 );
    const_str_digest_131435ff30698deac2d874478938fdd4 = UNSTREAM_STRING( &constant_bin[ 828962 ], 432, 0 );
    const_str_plain_CURL_CA_BUNDLE = UNSTREAM_STRING( &constant_bin[ 829394 ], 14, 1 );
    const_str_digest_504b77692b694460b8c25198a52c83ba = UNSTREAM_STRING( &constant_bin[ 607525 ], 8, 0 );
    const_tuple_str_plain_stream_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_stream_tuple, 0, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    const_str_plain_yield_requests = UNSTREAM_STRING( &constant_bin[ 829408 ], 14, 1 );
    const_str_digest_3dc3a32088712bcdf672f48f5c0bf5c5 = UNSTREAM_STRING( &constant_bin[ 829422 ], 94, 0 );
    const_tuple_0768baf36cf4776fb1bb180caf4d39ca_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_0768baf36cf4776fb1bb180caf4d39ca_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0768baf36cf4776fb1bb180caf4d39ca_tuple, 1, const_str_plain_prefix ); Py_INCREF( const_str_plain_prefix );
    const_str_plain_adapter = UNSTREAM_STRING( &constant_bin[ 791449 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_0768baf36cf4776fb1bb180caf4d39ca_tuple, 2, const_str_plain_adapter ); Py_INCREF( const_str_plain_adapter );
    PyTuple_SET_ITEM( const_tuple_0768baf36cf4776fb1bb180caf4d39ca_tuple, 3, const_str_plain_keys_to_move ); Py_INCREF( const_str_plain_keys_to_move );
    PyTuple_SET_ITEM( const_tuple_0768baf36cf4776fb1bb180caf4d39ca_tuple, 4, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    const_tuple_str_plain_default_hooks_str_plain_dispatch_hook_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_default_hooks_str_plain_dispatch_hook_tuple, 0, const_str_plain_default_hooks ); Py_INCREF( const_str_plain_default_hooks );
    PyTuple_SET_ITEM( const_tuple_str_plain_default_hooks_str_plain_dispatch_hook_tuple, 1, const_str_plain_dispatch_hook ); Py_INCREF( const_str_plain_dispatch_hook );
    const_tuple_str_plain_k_str_plain_self_str_plain_prefix_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_k_str_plain_self_str_plain_prefix_tuple, 0, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_str_plain_k_str_plain_self_str_plain_prefix_tuple, 1, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_k_str_plain_self_str_plain_prefix_tuple, 2, const_str_plain_prefix ); Py_INCREF( const_str_plain_prefix );
    const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 5, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 6, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 7, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 8, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 9, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 10, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 11, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 12, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple, 13, Py_None ); Py_INCREF( Py_None );
    const_str_digest_cb48bb05adb0e091eb1c115fffeb4c8a = UNSTREAM_STRING( &constant_bin[ 829516 ], 15, 0 );
    const_str_plain_rebuild_proxies = UNSTREAM_STRING( &constant_bin[ 829531 ], 15, 1 );
    const_str_plain_prepare_request = UNSTREAM_STRING( &constant_bin[ 829546 ], 15, 1 );
    const_tuple_false_none_true_none_none_false_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_false_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_false_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_false_tuple, 2, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_false_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_false_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_false_tuple, 5, Py_False ); Py_INCREF( Py_False );
    const_str_digest_75001dc77fbb691e7475fd8848494419 = UNSTREAM_STRING( &constant_bin[ 829561 ], 347, 0 );
    const_tuple_8b3ec114aaebfeb6fdc902e5b511052a_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_8b3ec114aaebfeb6fdc902e5b511052a_tuple, 0, const_str_plain_TooManyRedirects ); Py_INCREF( const_str_plain_TooManyRedirects );
    PyTuple_SET_ITEM( const_tuple_8b3ec114aaebfeb6fdc902e5b511052a_tuple, 1, const_str_plain_InvalidSchema ); Py_INCREF( const_str_plain_InvalidSchema );
    PyTuple_SET_ITEM( const_tuple_8b3ec114aaebfeb6fdc902e5b511052a_tuple, 2, const_str_plain_ChunkedEncodingError ); Py_INCREF( const_str_plain_ChunkedEncodingError );
    PyTuple_SET_ITEM( const_tuple_8b3ec114aaebfeb6fdc902e5b511052a_tuple, 3, const_str_plain_ContentDecodingError ); Py_INCREF( const_str_plain_ContentDecodingError );
    const_str_digest_0bca56866bcf0b75f74d31c9da00963c = UNSTREAM_STRING( &constant_bin[ 829908 ], 33, 0 );
    const_str_digest_489820f4fee1c95447c20d7aee4bc394 = UNSTREAM_STRING( &constant_bin[ 829941 ], 232, 0 );
    const_str_plain_preferred_clock = UNSTREAM_STRING( &constant_bin[ 830173 ], 15, 1 );
    const_str_digest_247cc702d848ae8b6a2bfe101921c67f = UNSTREAM_STRING( &constant_bin[ 830188 ], 428, 0 );
    const_tuple_88099abfc2d744feb222ef53bae67000_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_88099abfc2d744feb222ef53bae67000_tuple, 0, const_str_plain_cookiejar_from_dict ); Py_INCREF( const_str_plain_cookiejar_from_dict );
    PyTuple_SET_ITEM( const_tuple_88099abfc2d744feb222ef53bae67000_tuple, 1, const_str_plain_extract_cookies_to_jar ); Py_INCREF( const_str_plain_extract_cookies_to_jar );
    PyTuple_SET_ITEM( const_tuple_88099abfc2d744feb222ef53bae67000_tuple, 2, const_str_plain_RequestsCookieJar ); Py_INCREF( const_str_plain_RequestsCookieJar );
    PyTuple_SET_ITEM( const_tuple_88099abfc2d744feb222ef53bae67000_tuple, 3, const_str_plain_merge_cookies ); Py_INCREF( const_str_plain_merge_cookies );
    const_str_digest_0da4ca7e1d267b7753ceb4b2770531dd = UNSTREAM_STRING( &constant_bin[ 830616 ], 55, 0 );
    const_str_digest_1e854b3c946780bd62f1ad991507dc9c = UNSTREAM_STRING( &constant_bin[ 830671 ], 20, 0 );
    const_str_plain_mount = UNSTREAM_STRING( &constant_bin[ 606430 ], 5, 1 );
    const_tuple_str_plain_resp_str_plain_gen_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_resp_str_plain_gen_tuple, 0, const_str_plain_resp ); Py_INCREF( const_str_plain_resp );
    const_str_plain_gen = UNSTREAM_STRING( &constant_bin[ 604200 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_resp_str_plain_gen_tuple, 1, const_str_plain_gen ); Py_INCREF( const_str_plain_gen );
    const_str_plain_parsed_rurl = UNSTREAM_STRING( &constant_bin[ 830691 ], 11, 1 );
    const_str_plain_dict_class = UNSTREAM_STRING( &constant_bin[ 830702 ], 10, 1 );
    const_str_plain_merge_setting = UNSTREAM_STRING( &constant_bin[ 830712 ], 13, 1 );
    const_tuple_7aac126bdaa9bb9ff1e0f840392a8d15_tuple = PyTuple_New( 6 );
    const_str_plain_request_setting = UNSTREAM_STRING( &constant_bin[ 830725 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_7aac126bdaa9bb9ff1e0f840392a8d15_tuple, 0, const_str_plain_request_setting ); Py_INCREF( const_str_plain_request_setting );
    const_str_plain_session_setting = UNSTREAM_STRING( &constant_bin[ 830740 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_7aac126bdaa9bb9ff1e0f840392a8d15_tuple, 1, const_str_plain_session_setting ); Py_INCREF( const_str_plain_session_setting );
    PyTuple_SET_ITEM( const_tuple_7aac126bdaa9bb9ff1e0f840392a8d15_tuple, 2, const_str_plain_dict_class ); Py_INCREF( const_str_plain_dict_class );
    const_str_plain_merged_setting = UNSTREAM_STRING( &constant_bin[ 830755 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_7aac126bdaa9bb9ff1e0f840392a8d15_tuple, 3, const_str_plain_merged_setting ); Py_INCREF( const_str_plain_merged_setting );
    const_str_plain_none_keys = UNSTREAM_STRING( &constant_bin[ 830769 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_7aac126bdaa9bb9ff1e0f840392a8d15_tuple, 4, const_str_plain_none_keys ); Py_INCREF( const_str_plain_none_keys );
    PyTuple_SET_ITEM( const_tuple_7aac126bdaa9bb9ff1e0f840392a8d15_tuple, 5, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    const_tuple_3a39e276216da4457335999d85bec4c4_tuple = PyTuple_New( 19 );
    PyTuple_SET_ITEM( const_tuple_3a39e276216da4457335999d85bec4c4_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_3a39e276216da4457335999d85bec4c4_tuple, 1, const_str_plain_resp ); Py_INCREF( const_str_plain_resp );
    PyTuple_SET_ITEM( const_tuple_3a39e276216da4457335999d85bec4c4_tuple, 2, const_str_plain_req ); Py_INCREF( const_str_plain_req );
    PyTuple_SET_ITEM( const_tuple_3a39e276216da4457335999d85bec4c4_tuple, 3, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_3a39e276216da4457335999d85bec4c4_tuple, 4, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    PyTuple_SET_ITEM( const_tuple_3a39e276216da4457335999d85bec4c4_tuple, 5, const_str_plain_verify ); Py_INCREF( const_str_plain_verify );
    PyTuple_SET_ITEM( const_tuple_3a39e276216da4457335999d85bec4c4_tuple, 6, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    PyTuple_SET_ITEM( const_tuple_3a39e276216da4457335999d85bec4c4_tuple, 7, const_str_plain_proxies ); Py_INCREF( const_str_plain_proxies );
    PyTuple_SET_ITEM( const_tuple_3a39e276216da4457335999d85bec4c4_tuple, 8, const_str_plain_yield_requests ); Py_INCREF( const_str_plain_yield_requests );
    const_str_plain_adapter_kwargs = UNSTREAM_STRING( &constant_bin[ 830778 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_3a39e276216da4457335999d85bec4c4_tuple, 9, const_str_plain_adapter_kwargs ); Py_INCREF( const_str_plain_adapter_kwargs );
    const_str_plain_hist = UNSTREAM_STRING( &constant_bin[ 830792 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_3a39e276216da4457335999d85bec4c4_tuple, 10, const_str_plain_hist ); Py_INCREF( const_str_plain_hist );
    PyTuple_SET_ITEM( const_tuple_3a39e276216da4457335999d85bec4c4_tuple, 11, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_3a39e276216da4457335999d85bec4c4_tuple, 12, const_str_plain_prepared_request ); Py_INCREF( const_str_plain_prepared_request );
    PyTuple_SET_ITEM( const_tuple_3a39e276216da4457335999d85bec4c4_tuple, 13, const_str_plain_parsed_rurl ); Py_INCREF( const_str_plain_parsed_rurl );
    PyTuple_SET_ITEM( const_tuple_3a39e276216da4457335999d85bec4c4_tuple, 14, const_str_plain_parsed ); Py_INCREF( const_str_plain_parsed );
    const_str_plain_purged_headers = UNSTREAM_STRING( &constant_bin[ 830796 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_3a39e276216da4457335999d85bec4c4_tuple, 15, const_str_plain_purged_headers ); Py_INCREF( const_str_plain_purged_headers );
    PyTuple_SET_ITEM( const_tuple_3a39e276216da4457335999d85bec4c4_tuple, 16, const_str_plain_header ); Py_INCREF( const_str_plain_header );
    PyTuple_SET_ITEM( const_tuple_3a39e276216da4457335999d85bec4c4_tuple, 17, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    const_str_plain_rewindable = UNSTREAM_STRING( &constant_bin[ 830810 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_3a39e276216da4457335999d85bec4c4_tuple, 18, const_str_plain_rewindable ); Py_INCREF( const_str_plain_rewindable );
    const_tuple_str_plain_REDIRECT_STATI_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_REDIRECT_STATI_tuple, 0, const_str_plain_REDIRECT_STATI ); Py_INCREF( const_str_plain_REDIRECT_STATI );
    const_tuple_str_plain_self_str_plain_resp_str_plain_location_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_resp_str_plain_location_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_resp_str_plain_location_tuple, 1, const_str_plain_resp ); Py_INCREF( const_str_plain_resp );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_resp_str_plain_location_tuple, 2, const_str_plain_location ); Py_INCREF( const_str_plain_location );
    const_str_plain_adapters = UNSTREAM_STRING( &constant_bin[ 791449 ], 8, 1 );
    const_tuple_str_plain_CURL_CA_BUNDLE_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_CURL_CA_BUNDLE_tuple, 0, const_str_plain_CURL_CA_BUNDLE ); Py_INCREF( const_str_plain_CURL_CA_BUNDLE );
    const_str_digest_92db2e8ed71c2e367d5357b04d0462c4 = UNSTREAM_STRING( &constant_bin[ 830820 ], 12, 0 );
    const_tuple_str_plain_to_key_val_list_str_plain_default_headers_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_to_key_val_list_str_plain_default_headers_tuple, 0, const_str_plain_to_key_val_list ); Py_INCREF( const_str_plain_to_key_val_list );
    PyTuple_SET_ITEM( const_tuple_str_plain_to_key_val_list_str_plain_default_headers_tuple, 1, const_str_plain_default_headers ); Py_INCREF( const_str_plain_default_headers );
    const_list_dc982aca766e4d1362a255cd6d36b4fb_list = PyList_New( 13 );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 0, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 1, const_str_plain_cookies ); Py_INCREF( const_str_plain_cookies );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 2, const_str_plain_auth ); Py_INCREF( const_str_plain_auth );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 3, const_str_plain_proxies ); Py_INCREF( const_str_plain_proxies );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 4, const_str_plain_hooks ); Py_INCREF( const_str_plain_hooks );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 5, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 6, const_str_plain_verify ); Py_INCREF( const_str_plain_verify );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 7, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    const_str_plain_prefetch = UNSTREAM_STRING( &constant_bin[ 830832 ], 8, 1 );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 8, const_str_plain_prefetch ); Py_INCREF( const_str_plain_prefetch );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 9, const_str_plain_adapters ); Py_INCREF( const_str_plain_adapters );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 10, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    const_str_plain_trust_env = UNSTREAM_STRING( &constant_bin[ 830840 ], 9, 1 );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 11, const_str_plain_trust_env ); Py_INCREF( const_str_plain_trust_env );
    const_str_plain_max_redirects = UNSTREAM_STRING( &constant_bin[ 830849 ], 13, 1 );
    PyList_SET_ITEM( const_list_dc982aca766e4d1362a255cd6d36b4fb_list, 12, const_str_plain_max_redirects ); Py_INCREF( const_str_plain_max_redirects );
    const_str_digest_21406c84cc6f02469836def5bcdcadba = UNSTREAM_STRING( &constant_bin[ 830862 ], 147, 0 );
    const_str_plain_perf_counter = UNSTREAM_STRING( &constant_bin[ 831009 ], 12, 1 );
    const_tuple_71d8ae6f747dd9ae85144ec882f93203_tuple = PyTuple_New( 3 );
    const_str_plain_request_hooks = UNSTREAM_STRING( &constant_bin[ 831021 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_71d8ae6f747dd9ae85144ec882f93203_tuple, 0, const_str_plain_request_hooks ); Py_INCREF( const_str_plain_request_hooks );
    const_str_plain_session_hooks = UNSTREAM_STRING( &constant_bin[ 831034 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_71d8ae6f747dd9ae85144ec882f93203_tuple, 1, const_str_plain_session_hooks ); Py_INCREF( const_str_plain_session_hooks );
    PyTuple_SET_ITEM( const_tuple_71d8ae6f747dd9ae85144ec882f93203_tuple, 2, const_str_plain_dict_class ); Py_INCREF( const_str_plain_dict_class );
    const_str_digest_382a6a157ce1707d0f242d5ea1fea71c = UNSTREAM_STRING( &constant_bin[ 831047 ], 13, 0 );
    const_str_digest_83853292c48098773b03eae760dcfe38 = UNSTREAM_STRING( &constant_bin[ 831060 ], 66, 0 );
    const_str_digest_f7f26a899d15b0307bb1388a5bda3892 = UNSTREAM_STRING( &constant_bin[ 831126 ], 11, 0 );
    const_str_digest_368818c648e1111518d4140f8cd94f10 = UNSTREAM_STRING( &constant_bin[ 831137 ], 26, 0 );
    const_str_plain_get_redirect_target = UNSTREAM_STRING( &constant_bin[ 831163 ], 19, 1 );
    const_dict_5a980a96e502e21a57174819267c7344 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_5a980a96e502e21a57174819267c7344, const_str_plain_yield_requests, Py_True );
    assert( PyDict_Size( const_dict_5a980a96e502e21a57174819267c7344 ) == 1 );
    const_str_digest_f2636f029da6046e540b6721c0c69c64 = UNSTREAM_STRING( &constant_bin[ 831182 ], 38, 0 );
    const_str_plain_SessionRedirectMixin = UNSTREAM_STRING( &constant_bin[ 829908 ], 20, 1 );
    const_str_digest_fa3b2211e965dde050b87ae23cfb152f = UNSTREAM_STRING( &constant_bin[ 831220 ], 16, 0 );
    const_str_digest_48d563b3d6be908aabde89b2dd46bb34 = UNSTREAM_STRING( &constant_bin[ 831236 ], 73, 0 );
    const_str_digest_3773766f3922dc10926506cd67493626 = UNSTREAM_STRING( &constant_bin[ 831309 ], 233, 0 );
    const_str_digest_28eb6d6e3c84195b87f5eda206592417 = UNSTREAM_STRING( &constant_bin[ 831542 ], 229, 0 );
    const_tuple_fe4fef8ddb51312f9e467cc7141cf495_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_fe4fef8ddb51312f9e467cc7141cf495_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_fe4fef8ddb51312f9e467cc7141cf495_tuple, 1, const_str_plain_prepared_request ); Py_INCREF( const_str_plain_prepared_request );
    PyTuple_SET_ITEM( const_tuple_fe4fef8ddb51312f9e467cc7141cf495_tuple, 2, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_fe4fef8ddb51312f9e467cc7141cf495_tuple, 3, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_fe4fef8ddb51312f9e467cc7141cf495_tuple, 4, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_fe4fef8ddb51312f9e467cc7141cf495_tuple, 5, const_str_plain_original_parsed ); Py_INCREF( const_str_plain_original_parsed );
    PyTuple_SET_ITEM( const_tuple_fe4fef8ddb51312f9e467cc7141cf495_tuple, 6, const_str_plain_redirect_parsed ); Py_INCREF( const_str_plain_redirect_parsed );
    const_str_plain_new_auth = UNSTREAM_STRING( &constant_bin[ 831771 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_fe4fef8ddb51312f9e467cc7141cf495_tuple, 7, const_str_plain_new_auth ); Py_INCREF( const_str_plain_new_auth );
    const_str_digest_a2bd5503741425b00dbffd7aa6b079f3 = UNSTREAM_STRING( &constant_bin[ 831779 ], 81, 0 );
    const_str_plain_get_adapter = UNSTREAM_STRING( &constant_bin[ 831860 ], 11, 1 );
    const_str_digest_19cf6e4b470974146c094a9eb3c6c9c0 = UNSTREAM_STRING( &constant_bin[ 831871 ], 126, 0 );
    const_str_digest_7e68f1bdd87458491c575c9c8a14f24c = UNSTREAM_STRING( &constant_bin[ 831997 ], 43, 0 );
    const_tuple_dea3fb298c7cf88cd70133cab5554ba7_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_dea3fb298c7cf88cd70133cab5554ba7_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_dea3fb298c7cf88cd70133cab5554ba7_tuple, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_dea3fb298c7cf88cd70133cab5554ba7_tuple, 2, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_dea3fb298c7cf88cd70133cab5554ba7_tuple, 3, const_str_plain_json ); Py_INCREF( const_str_plain_json );
    PyTuple_SET_ITEM( const_tuple_dea3fb298c7cf88cd70133cab5554ba7_tuple, 4, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_digest_df652bc3c79065c8732d0893d1f77479 = UNSTREAM_STRING( &constant_bin[ 832040 ], 12, 0 );
    const_str_digest_2326510b09c332a083755ce27f812d9d = UNSTREAM_STRING( &constant_bin[ 832052 ], 14, 0 );
    const_str_plain_clock = UNSTREAM_STRING( &constant_bin[ 830183 ], 5, 1 );
    const_str_digest_7c06a402579f6f9d9db7f3e04da983fc = UNSTREAM_STRING( &constant_bin[ 606984 ], 7, 0 );
    const_str_digest_ab50d4439ade3e74bd04aeb12b9713ae = UNSTREAM_STRING( &constant_bin[ 832066 ], 13, 0 );
    const_str_plain_PATCH = UNSTREAM_STRING( &constant_bin[ 799627 ], 5, 1 );
    const_str_digest_8f1f8a6d2be18d195ed7df0d436d212e = UNSTREAM_STRING( &constant_bin[ 832079 ], 35, 0 );
    const_str_digest_69a73433942a43d30c3208872597fbc4 = UNSTREAM_STRING( &constant_bin[ 832114 ], 15, 0 );
    const_str_digest_e53d4a974ffbd6783b2c04e911c575f6 = UNSTREAM_STRING( &constant_bin[ 832129 ], 23, 0 );
    const_str_plain_rebuild_auth = UNSTREAM_STRING( &constant_bin[ 829929 ], 12, 1 );
    const_tuple_str_plain_HTTPAdapter_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HTTPAdapter_tuple, 0, const_str_plain_HTTPAdapter ); Py_INCREF( const_str_plain_HTTPAdapter );
    const_str_digest_67055a59082a8581b7a2c86a2d1c1f83 = UNSTREAM_STRING( &constant_bin[ 832152 ], 232, 0 );
    const_str_digest_d41fb1dddc6f7cfe3e1d581e7ccdd852 = UNSTREAM_STRING( &constant_bin[ 832384 ], 119, 0 );
    const_str_plain_env_proxies = UNSTREAM_STRING( &constant_bin[ 832503 ], 11, 1 );
    const_str_plain_resolve_redirects = UNSTREAM_STRING( &constant_bin[ 817710 ], 17, 1 );
    const_str_digest_e46ea1d9ca0677a0f1ae14af39cbbfc2 = UNSTREAM_STRING( &constant_bin[ 832514 ], 34, 0 );
    const_str_digest_b49e9dfe95a484cf32f4e0dcf61e3c53 = UNSTREAM_STRING( &constant_bin[ 832548 ], 20, 0 );
    const_tuple_52694123e02956767caa4fbf60cd1485_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_52694123e02956767caa4fbf60cd1485_tuple, 0, const_str_plain_cookielib ); Py_INCREF( const_str_plain_cookielib );
    PyTuple_SET_ITEM( const_tuple_52694123e02956767caa4fbf60cd1485_tuple, 1, const_str_plain_is_py3 ); Py_INCREF( const_str_plain_is_py3 );
    PyTuple_SET_ITEM( const_tuple_52694123e02956767caa4fbf60cd1485_tuple, 2, const_str_plain_OrderedDict ); Py_INCREF( const_str_plain_OrderedDict );
    PyTuple_SET_ITEM( const_tuple_52694123e02956767caa4fbf60cd1485_tuple, 3, const_str_plain_urljoin ); Py_INCREF( const_str_plain_urljoin );
    PyTuple_SET_ITEM( const_tuple_52694123e02956767caa4fbf60cd1485_tuple, 4, const_str_plain_urlparse ); Py_INCREF( const_str_plain_urlparse );
    const_tuple_b9ba4ced99a0ce31f3399e306cb806b0_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_b9ba4ced99a0ce31f3399e306cb806b0_tuple, 0, const_str_digest_3c9527fc53ea2272c2080ca035d6631c ); Py_INCREF( const_str_digest_3c9527fc53ea2272c2080ca035d6631c );
    PyTuple_SET_ITEM( const_tuple_b9ba4ced99a0ce31f3399e306cb806b0_tuple, 1, const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3 ); Py_INCREF( const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3 );
    PyTuple_SET_ITEM( const_tuple_b9ba4ced99a0ce31f3399e306cb806b0_tuple, 2, const_str_digest_2b15502c566d8238f4869c227793bd1a ); Py_INCREF( const_str_digest_2b15502c566d8238f4869c227793bd1a );
    const_tuple_str_plain_self_str_plain_url_str_plain_data_str_plain_kwargs_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 2, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 3, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_digest_bb0c986a4d44a65e09f2da3af698fc66 = UNSTREAM_STRING( &constant_bin[ 832568 ], 395, 0 );
    const_tuple_56022d833a2133ea98bc9669558d4a13_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 1, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 3, const_str_plain_allow_redirects ); Py_INCREF( const_str_plain_allow_redirects );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 4, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 5, const_str_plain_hooks ); Py_INCREF( const_str_plain_hooks );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 6, const_str_plain_adapter ); Py_INCREF( const_str_plain_adapter );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 7, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 8, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 9, const_str_plain_elapsed ); Py_INCREF( const_str_plain_elapsed );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 10, const_str_plain_resp ); Py_INCREF( const_str_plain_resp );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 11, const_str_plain_gen ); Py_INCREF( const_str_plain_gen );
    PyTuple_SET_ITEM( const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 12, const_str_plain_history ); Py_INCREF( const_str_plain_history );
    const_str_digest_391836e2dd6fe23dba9e1473e5ddf5c0 = UNSTREAM_STRING( &constant_bin[ 832963 ], 98, 0 );
    const_str_digest_7905fa3cf6a1b7f0e3f1aa2a48144462 = UNSTREAM_STRING( &constant_bin[ 833061 ], 16, 0 );
    const_str_digest_13971ae58b983978540cbb4bbf3b1360 = UNSTREAM_STRING( &constant_bin[ 606989 ], 2, 0 );
    const_tuple_d59df39ec93ca03c50048d25a33ece73_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_d59df39ec93ca03c50048d25a33ece73_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d59df39ec93ca03c50048d25a33ece73_tuple, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_d59df39ec93ca03c50048d25a33ece73_tuple, 2, const_str_plain_prefix ); Py_INCREF( const_str_plain_prefix );
    PyTuple_SET_ITEM( const_tuple_d59df39ec93ca03c50048d25a33ece73_tuple, 3, const_str_plain_adapter ); Py_INCREF( const_str_plain_adapter );
    const_str_digest_8b3e93dde92996b29edc87dca601bdd4 = UNSTREAM_STRING( &constant_bin[ 833077 ], 130, 0 );
    const_str_digest_dfcd0fe2f27ce725c44199fb8c6f7973 = UNSTREAM_STRING( &constant_bin[ 833207 ], 36, 0 );
    const_str_digest_0850b94f6eea1bda1db9b25ee4381193 = UNSTREAM_STRING( &constant_bin[ 833243 ], 40, 0 );
    const_str_digest_962cc75eef259550816f5f0e877500ef = UNSTREAM_STRING( &constant_bin[ 833283 ], 12, 0 );
    const_str_digest_04d355f4e958fc387ef0f67f1046b28c = UNSTREAM_STRING( &constant_bin[ 833295 ], 345, 0 );
    const_tuple_str_plain_k_str_plain_v_str_plain_merged_setting_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_k_str_plain_v_str_plain_merged_setting_tuple, 0, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_str_plain_k_str_plain_v_str_plain_merged_setting_tuple, 1, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_str_plain_k_str_plain_v_str_plain_merged_setting_tuple, 2, const_str_plain_merged_setting ); Py_INCREF( const_str_plain_merged_setting );
    const_dict_d7fd5bd8b432e83dcd02aee0b5fbde86 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_d7fd5bd8b432e83dcd02aee0b5fbde86, const_str_plain_decode_content, Py_False );
    assert( PyDict_Size( const_dict_d7fd5bd8b432e83dcd02aee0b5fbde86 ) == 1 );
    const_str_plain_merge_hooks = UNSTREAM_STRING( &constant_bin[ 833640 ], 11, 1 );
    const_tuple_e6a6f1c11ceb58ad93c55185ed71c231_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_e6a6f1c11ceb58ad93c55185ed71c231_tuple, 0, const_str_plain_Request ); Py_INCREF( const_str_plain_Request );
    PyTuple_SET_ITEM( const_tuple_e6a6f1c11ceb58ad93c55185ed71c231_tuple, 1, const_str_plain_PreparedRequest ); Py_INCREF( const_str_plain_PreparedRequest );
    PyTuple_SET_ITEM( const_tuple_e6a6f1c11ceb58ad93c55185ed71c231_tuple, 2, const_str_plain_DEFAULT_REDIRECT_LIMIT ); Py_INCREF( const_str_plain_DEFAULT_REDIRECT_LIMIT );
    const_tuple_667f897da4eaa203681d962b0447b021_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_667f897da4eaa203681d962b0447b021_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_667f897da4eaa203681d962b0447b021_tuple, 1, const_str_plain_prepared_request ); Py_INCREF( const_str_plain_prepared_request );
    PyTuple_SET_ITEM( const_tuple_667f897da4eaa203681d962b0447b021_tuple, 2, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_667f897da4eaa203681d962b0447b021_tuple, 3, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple, 2, const_str_plain_proxies ); Py_INCREF( const_str_plain_proxies );
    PyTuple_SET_ITEM( const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple, 3, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple, 4, const_str_plain_verify ); Py_INCREF( const_str_plain_verify );
    PyTuple_SET_ITEM( const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple, 5, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    PyTuple_SET_ITEM( const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple, 6, const_str_plain_no_proxy ); Py_INCREF( const_str_plain_no_proxy );
    PyTuple_SET_ITEM( const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple, 7, const_str_plain_env_proxies ); Py_INCREF( const_str_plain_env_proxies );
    PyTuple_SET_ITEM( const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple, 8, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple, 9, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_digest_70e065559513e1162375c7bbb9f9de21 = UNSTREAM_STRING( &constant_bin[ 833651 ], 13, 0 );
    const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple, 0, const_str_digest_13971ae58b983978540cbb4bbf3b1360 ); Py_INCREF( const_str_digest_13971ae58b983978540cbb4bbf3b1360 );
    const_tuple_59ffa986ae907cb93da3cb0708948d9b_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 833664 ], 176 );
    const_str_digest_dde136ad554213eb3ece20209a69ac24 = UNSTREAM_STRING( &constant_bin[ 833840 ], 22, 0 );
    const_str_digest_a1b7979c671004beb348b3acf3fa3833 = UNSTREAM_STRING( &constant_bin[ 833862 ], 19, 0 );
    const_str_digest_0334ac5a65e948ab1a00ac2f5cfe75c1 = UNSTREAM_STRING( &constant_bin[ 833881 ], 169, 0 );
    const_str_plain_rebuild_method = UNSTREAM_STRING( &constant_bin[ 832100 ], 14, 1 );
    const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple, 0, const_str_plain_requote_uri ); Py_INCREF( const_str_plain_requote_uri );
    PyTuple_SET_ITEM( const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple, 1, const_str_plain_get_environ_proxies ); Py_INCREF( const_str_plain_get_environ_proxies );
    PyTuple_SET_ITEM( const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple, 2, const_str_plain_get_netrc_auth ); Py_INCREF( const_str_plain_get_netrc_auth );
    PyTuple_SET_ITEM( const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple, 3, const_str_plain_should_bypass_proxies ); Py_INCREF( const_str_plain_should_bypass_proxies );
    PyTuple_SET_ITEM( const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple, 4, const_str_plain_get_auth_from_url ); Py_INCREF( const_str_plain_get_auth_from_url );
    PyTuple_SET_ITEM( const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple, 5, const_str_plain_rewind_body ); Py_INCREF( const_str_plain_rewind_body );
    const_str_digest_dac01d786625c94b9a42a81aff30f4e0 = UNSTREAM_STRING( &constant_bin[ 834050 ], 39, 0 );
    const_tuple_str_plain_Mapping_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Mapping_tuple, 0, const_str_plain_Mapping ); Py_INCREF( const_str_plain_Mapping );
    const_tuple_str_plain_self_str_plain_v_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_v_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_v_tuple, 1, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_str_digest_147a008155143b0e10b18dcd3be84fb5 = UNSTREAM_STRING( &constant_bin[ 831145 ], 17, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$sessions( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b7eabeb24ac1b3519b40c1d8fa461fd9;
static PyCodeObject *codeobj_5f26bcb7d2b0eb936ce7be3bdc0b55c5;
static PyCodeObject *codeobj_df8cdb1ceaf201e469160008bfd07a2d;
static PyCodeObject *codeobj_d7d66ad3803168e6e827c2d21da18667;
static PyCodeObject *codeobj_aff07de792d0461855b7d18dd9473963;
static PyCodeObject *codeobj_82b7c004272d14ec9bf6cc24bb482aff;
static PyCodeObject *codeobj_3dbc53feff077017138221ab86d6a11b;
static PyCodeObject *codeobj_2e531a1d9b261c99f28d85d8838ccada;
static PyCodeObject *codeobj_e14613643a73aa5be8f777675b5978f5;
static PyCodeObject *codeobj_cf34dfd880914595a36ee253ef5f9ca3;
static PyCodeObject *codeobj_accdb9a05331e72382794a68b5889343;
static PyCodeObject *codeobj_7311397e377d527f02c01978c68e3c16;
static PyCodeObject *codeobj_3c14a69fee2fcdf1a747ddcdea93f4dc;
static PyCodeObject *codeobj_88483baf205b9ee8bff13bb50e70a461;
static PyCodeObject *codeobj_2505b37575ccd10606b65d1a23743d5c;
static PyCodeObject *codeobj_c51066680f63a91b6971b64f2dc5d9aa;
static PyCodeObject *codeobj_c5ea51f86708eb5f6972aa45a5e9d941;
static PyCodeObject *codeobj_fd4b7653e0288ef2edb5235c7193d2c8;
static PyCodeObject *codeobj_137c8537bf98127cf929caff6016363a;
static PyCodeObject *codeobj_f263e12dad3577785d2ba62b5f89ab58;
static PyCodeObject *codeobj_40281ea47d3fd30fa36545ce1db1089f;
static PyCodeObject *codeobj_736c65a889c37cf86e656450ecdb9cb3;
static PyCodeObject *codeobj_d3621c95c850666f6f82e857bfe621b5;
static PyCodeObject *codeobj_28fa292ab1a9e00710b21730e9b74453;
static PyCodeObject *codeobj_bb0a7504040268bd6396414d620d0d5a;
static PyCodeObject *codeobj_0721f1546bec673c1b47623ae9a5d2ec;
static PyCodeObject *codeobj_1bf85da4b935e876136e3a6f95ed72b3;
static PyCodeObject *codeobj_9b0a444774ff7b7c95271951e4f94cac;
static PyCodeObject *codeobj_e3339ef434efd1f766d7c3ce27f40568;
static PyCodeObject *codeobj_c8a5727fbc9485f31e8cd821c02a78d7;
static PyCodeObject *codeobj_0ed0d954af937e35bc1df0ac60d22690;
static PyCodeObject *codeobj_e1a3b16a293c083dd6619a85be9eea96;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_391836e2dd6fe23dba9e1473e5ddf5c0;
    codeobj_b7eabeb24ac1b3519b40c1d8fa461fd9 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 722, const_tuple_28660caee0ff66870715c0ba247cbcaa_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5f26bcb7d2b0eb936ce7be3bdc0b55c5 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcontraction, 74, const_tuple_str_plain_k_str_plain_v_str_plain_merged_setting_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_df8cdb1ceaf201e469160008bfd07a2d = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcontraction, 640, const_tuple_str_plain_resp_str_plain_gen_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d7d66ad3803168e6e827c2d21da18667 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcontraction, 716, const_tuple_str_plain_k_str_plain_self_str_plain_prefix_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_aff07de792d0461855b7d18dd9473963 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_368818c648e1111518d4140f8cd94f10, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_82b7c004272d14ec9bf6cc24bb482aff = MAKE_CODEOBJ( module_filename_obj, const_str_plain___enter__, 395, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3dbc53feff077017138221ab86d6a11b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___exit__, 398, const_tuple_str_plain_self_str_plain_args_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_2e531a1d9b261c99f28d85d8838ccada = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getstate__, 721, const_tuple_str_plain_self_str_plain_state_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e14613643a73aa5be8f777675b5978f5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 340, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cf34dfd880914595a36ee253ef5f9ca3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___setstate__, 725, const_tuple_a95b72743b8804bf0e9cb38b968c0b18_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_accdb9a05331e72382794a68b5889343 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 705, const_tuple_str_plain_self_str_plain_v_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7311397e377d527f02c01978c68e3c16 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_delete, 579, const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_3c14a69fee2fcdf1a747ddcdea93f4dc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get, 512, const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_88483baf205b9ee8bff13bb50e70a461 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_adapter, 691, const_tuple_d59df39ec93ca03c50048d25a33ece73_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2505b37575ccd10606b65d1a23743d5c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_redirect_target, 98, const_tuple_str_plain_self_str_plain_resp_str_plain_location_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c51066680f63a91b6971b64f2dc5d9aa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_head, 534, const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_c5ea51f86708eb5f6972aa45a5e9d941 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_merge_environment_settings, 662, const_tuple_46ae976d9143c6c70c2b1fa058486e00_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fd4b7653e0288ef2edb5235c7193d2c8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_merge_hooks, 81, const_tuple_71d8ae6f747dd9ae85144ec882f93203_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_137c8537bf98127cf929caff6016363a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_merge_setting, 50, const_tuple_7aac126bdaa9bb9ff1e0f840392a8d15_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f263e12dad3577785d2ba62b5f89ab58 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mount, 710, const_tuple_0768baf36cf4776fb1bb180caf4d39ca_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_40281ea47d3fd30fa36545ce1db1089f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_options, 523, const_tuple_str_plain_self_str_plain_url_str_plain_kwargs_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_736c65a889c37cf86e656450ecdb9cb3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_patch, 568, const_tuple_str_plain_self_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_d3621c95c850666f6f82e857bfe621b5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_post, 545, const_tuple_dea3fb298c7cf88cd70133cab5554ba7_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_28fa292ab1a9e00710b21730e9b74453 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_prepare_request, 401, const_tuple_70c41d0154ea67575d96c5031e23167a_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bb0a7504040268bd6396414d620d0d5a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_put, 557, const_tuple_str_plain_self_str_plain_url_str_plain_data_str_plain_kwargs_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_0721f1546bec673c1b47623ae9a5d2ec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rebuild_auth, 227, const_tuple_fe4fef8ddb51312f9e467cc7141cf495_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1bf85da4b935e876136e3a6f95ed72b3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rebuild_method, 292, const_tuple_667f897da4eaa203681d962b0447b021_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9b0a444774ff7b7c95271951e4f94cac = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rebuild_proxies, 251, const_tuple_7117d2813beb46b78a1a5b0932434a6f_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e3339ef434efd1f766d7c3ce27f40568 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_request, 441, const_tuple_59ffa986ae907cb93da3cb0708948d9b_tuple, 17, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c8a5727fbc9485f31e8cd821c02a78d7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_resolve_redirects, 119, const_tuple_3a39e276216da4457335999d85bec4c4_tuple, 9, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_0ed0d954af937e35bc1df0ac60d22690 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_send, 589, const_tuple_56022d833a2133ea98bc9669558d4a13_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_e1a3b16a293c083dd6619a85be9eea96 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_session, 730, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *requests$sessions$$$function_4_resolve_redirects$$$genobj_1_resolve_redirects_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void requests$sessions$$$function_4_resolve_redirects$$$genobj_1_resolve_redirects_context( struct Nuitka_GeneratorObject *generator );
#endif


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *requests$sessions$$$function_25___getstate__$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void requests$sessions$$$function_25___getstate__$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_10___exit__(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_11_prepare_request(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_12_request( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_13_get(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_14_options(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_15_head(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_16_post( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_17_put( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_18_patch( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_19_delete(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_1_merge_setting( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_20_send(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_21_merge_environment_settings(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_22_get_adapter(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_23_close(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_24_mount(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_25___getstate__(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_26___setstate__(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_27_session(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_2_merge_hooks( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_3_get_redirect_target(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_4_resolve_redirects( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_5_rebuild_auth(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_6_rebuild_proxies(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_7_rebuild_method(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_8___init__(  );


static PyObject *MAKE_FUNCTION_requests$sessions$$$function_9___enter__(  );


// The module function definitions.
static PyObject *impl_requests$sessions$$$function_1_merge_setting( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_request_setting = python_pars[ 0 ];
    PyObject *par_session_setting = python_pars[ 1 ];
    PyObject *par_dict_class = python_pars[ 2 ];
    PyObject *var_merged_setting = NULL;
    PyObject *var_none_keys = NULL;
    PyObject *var_key = NULL;
    PyObject *outline_0_var_k = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcontraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcontraction_1__$0 = NULL;
    PyObject *tmp_listcontraction_1__contraction = NULL;
    PyObject *tmp_listcontraction_1__iter_value_0 = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
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
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_delsubscr_subscript_1;
    PyObject *tmp_delsubscr_target_1;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5f26bcb7d2b0eb936ce7be3bdc0b55c5_2 = NULL;

    struct Nuitka_FrameObject *frame_5f26bcb7d2b0eb936ce7be3bdc0b55c5_2;

    static struct Nuitka_FrameObject *cache_frame_137c8537bf98127cf929caff6016363a = NULL;

    struct Nuitka_FrameObject *frame_137c8537bf98127cf929caff6016363a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_137c8537bf98127cf929caff6016363a, codeobj_137c8537bf98127cf929caff6016363a, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_137c8537bf98127cf929caff6016363a = cache_frame_137c8537bf98127cf929caff6016363a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_137c8537bf98127cf929caff6016363a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_137c8537bf98127cf929caff6016363a ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_session_setting;

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
    tmp_return_value = par_request_setting;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_setting" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_compare_left_2 = par_request_setting;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_setting" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = par_session_setting;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "session_setting" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_isinstance_inst_1 = par_session_setting;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "session_setting" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_Mapping );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Mapping );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Mapping" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
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
    tmp_isinstance_inst_2 = par_request_setting;

    if ( tmp_isinstance_inst_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_setting" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_Mapping );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Mapping );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Mapping" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooooo";
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


        exception_lineno = 65;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_return_value = par_request_setting;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_setting" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_called_name_1 = par_dict_class;

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dict_class" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_to_key_val_list );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_to_key_val_list );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "to_key_val_list" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_session_setting;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "session_setting" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_137c8537bf98127cf929caff6016363a->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_137c8537bf98127cf929caff6016363a->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_merged_setting == NULL );
    var_merged_setting = tmp_assign_source_1;

    tmp_source_name_1 = var_merged_setting;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_update );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_to_key_val_list );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_to_key_val_list );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "to_key_val_list" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_request_setting;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_setting" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_137c8537bf98127cf929caff6016363a->m_frame.f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 70;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_137c8537bf98127cf929caff6016363a->m_frame.f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code:
    tmp_called_instance_1 = var_merged_setting;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "merged_setting" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    frame_137c8537bf98127cf929caff6016363a->m_frame.f_lineno = 74;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    assert( tmp_listcontraction_1__$0 == NULL );
    tmp_listcontraction_1__$0 = tmp_assign_source_3;

    tmp_assign_source_4 = PyList_New( 0 );
    assert( tmp_listcontraction_1__contraction == NULL );
    tmp_listcontraction_1__contraction = tmp_assign_source_4;

    MAKE_OR_REUSE_FRAME( cache_frame_5f26bcb7d2b0eb936ce7be3bdc0b55c5_2, codeobj_5f26bcb7d2b0eb936ce7be3bdc0b55c5, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5f26bcb7d2b0eb936ce7be3bdc0b55c5_2 = cache_frame_5f26bcb7d2b0eb936ce7be3bdc0b55c5_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5f26bcb7d2b0eb936ce7be3bdc0b55c5_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5f26bcb7d2b0eb936ce7be3bdc0b55c5_2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_listcontraction_1__$0;

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
            type_description_2 = "ooo";
            exception_lineno = 74;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_listcontraction_1__iter_value_0;
        tmp_listcontraction_1__iter_value_0 = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_listcontraction_1__iter_value_0;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_2 = "ooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_listcontraction$tuple_unpack_1__source_iter;
        tmp_listcontraction$tuple_unpack_1__source_iter = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_listcontraction$tuple_unpack_1__source_iter;

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


        type_description_2 = "ooo";
        exception_lineno = 74;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_listcontraction$tuple_unpack_1__element_1;
        tmp_listcontraction$tuple_unpack_1__element_1 = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_listcontraction$tuple_unpack_1__source_iter;

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


        type_description_2 = "ooo";
        exception_lineno = 74;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_listcontraction$tuple_unpack_1__element_2;
        tmp_listcontraction$tuple_unpack_1__element_2 = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_iterator_name_1 = tmp_listcontraction$tuple_unpack_1__source_iter;

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

                type_description_2 = "ooo";
                exception_lineno = 74;
                goto try_except_handler_5;
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

        type_description_2 = "ooo";
        exception_lineno = 74;
        goto try_except_handler_5;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__source_iter );
    tmp_listcontraction$tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_1 );
    tmp_listcontraction$tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_2 );
    tmp_listcontraction$tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__source_iter );
    tmp_listcontraction$tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_9 = tmp_listcontraction$tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_9 );
    {
        PyObject *old = outline_0_var_k;
        outline_0_var_k = tmp_assign_source_9;
        Py_INCREF( outline_0_var_k );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_1 );
    tmp_listcontraction$tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_10 = tmp_listcontraction$tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_10 );
    {
        PyObject *old = outline_0_var_v;
        outline_0_var_v = tmp_assign_source_10;
        Py_INCREF( outline_0_var_v );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_2 );
    tmp_listcontraction$tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_1 );
    tmp_listcontraction$tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_2 );
    tmp_listcontraction$tuple_unpack_1__element_2 = NULL;

    tmp_compare_left_3 = outline_0_var_v;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "v" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_2 = "ooo";
        goto try_except_handler_3;
    }

    tmp_compare_right_3 = Py_None;
    tmp_is_3 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_3 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_append_list_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_append_value_1 = outline_0_var_k;

    if ( tmp_append_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "k" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_2 = "ooo";
        goto try_except_handler_3;
    }

    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_2 = "ooo";
        goto try_except_handler_3;
    }
    branch_no_4:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_2 = "ooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_1_merge_setting );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    Py_XDECREF( tmp_listcontraction_1__$0 );
    tmp_listcontraction_1__$0 = NULL;

    Py_XDECREF( tmp_listcontraction_1__contraction );
    tmp_listcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_1__iter_value_0 );
    tmp_listcontraction_1__iter_value_0 = NULL;

    goto frame_return_exit_2;
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

    Py_XDECREF( tmp_listcontraction_1__$0 );
    tmp_listcontraction_1__$0 = NULL;

    Py_XDECREF( tmp_listcontraction_1__contraction );
    tmp_listcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_1__iter_value_0 );
    tmp_listcontraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f26bcb7d2b0eb936ce7be3bdc0b55c5_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f26bcb7d2b0eb936ce7be3bdc0b55c5_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f26bcb7d2b0eb936ce7be3bdc0b55c5_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5f26bcb7d2b0eb936ce7be3bdc0b55c5_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5f26bcb7d2b0eb936ce7be3bdc0b55c5_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5f26bcb7d2b0eb936ce7be3bdc0b55c5_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5f26bcb7d2b0eb936ce7be3bdc0b55c5_2,
        type_description_2,
        outline_0_var_k,
        outline_0_var_v,
        var_merged_setting
    );


    // Release cached frame.
    if ( frame_5f26bcb7d2b0eb936ce7be3bdc0b55c5_2 == cache_frame_5f26bcb7d2b0eb936ce7be3bdc0b55c5_2 )
    {
        Py_DECREF( frame_5f26bcb7d2b0eb936ce7be3bdc0b55c5_2 );
    }
    cache_frame_5f26bcb7d2b0eb936ce7be3bdc0b55c5_2 = NULL;

    assertFrameObject( frame_5f26bcb7d2b0eb936ce7be3bdc0b55c5_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oooooo";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_1_merge_setting );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_k );
    outline_0_var_k = NULL;

    Py_XDECREF( outline_0_var_v );
    outline_0_var_v = NULL;

    goto outline_result_1;
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

    Py_XDECREF( outline_0_var_k );
    outline_0_var_k = NULL;

    Py_XDECREF( outline_0_var_v );
    outline_0_var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_1_merge_setting );
    return NULL;
    outline_exception_1:;
    exception_lineno = 74;
    goto frame_exception_exit_1;
    outline_result_1:;
    tmp_assign_source_2 = tmp_outline_return_value_1;
    assert( var_none_keys == NULL );
    var_none_keys = tmp_assign_source_2;

    tmp_iter_arg_3 = var_none_keys;

    CHECK_OBJECT( tmp_iter_arg_3 );
    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_11;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_12 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            exception_lineno = 75;
            goto try_except_handler_6;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_assign_source_13 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_13 );
    {
        PyObject *old = var_key;
        var_key = tmp_assign_source_13;
        Py_INCREF( var_key );
        Py_XDECREF( old );
    }

    tmp_delsubscr_target_1 = var_merged_setting;

    if ( tmp_delsubscr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "merged_setting" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "oooooo";
        goto try_except_handler_6;
    }

    tmp_delsubscr_subscript_1 = var_key;

    CHECK_OBJECT( tmp_delsubscr_subscript_1 );
    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooooo";
        goto try_except_handler_6;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "oooooo";
        goto try_except_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
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
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = var_merged_setting;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "merged_setting" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_137c8537bf98127cf929caff6016363a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_137c8537bf98127cf929caff6016363a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_137c8537bf98127cf929caff6016363a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_137c8537bf98127cf929caff6016363a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_137c8537bf98127cf929caff6016363a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_137c8537bf98127cf929caff6016363a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_137c8537bf98127cf929caff6016363a,
        type_description_1,
        par_request_setting,
        par_session_setting,
        par_dict_class,
        var_merged_setting,
        var_none_keys,
        var_key
    );


    // Release cached frame.
    if ( frame_137c8537bf98127cf929caff6016363a == cache_frame_137c8537bf98127cf929caff6016363a )
    {
        Py_DECREF( frame_137c8537bf98127cf929caff6016363a );
    }
    cache_frame_137c8537bf98127cf929caff6016363a = NULL;

    assertFrameObject( frame_137c8537bf98127cf929caff6016363a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_1_merge_setting );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_request_setting );
    par_request_setting = NULL;

    Py_XDECREF( par_session_setting );
    par_session_setting = NULL;

    Py_XDECREF( par_dict_class );
    par_dict_class = NULL;

    Py_XDECREF( var_merged_setting );
    var_merged_setting = NULL;

    Py_XDECREF( var_none_keys );
    var_none_keys = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

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

    Py_XDECREF( par_request_setting );
    par_request_setting = NULL;

    Py_XDECREF( par_session_setting );
    par_session_setting = NULL;

    Py_XDECREF( par_dict_class );
    par_dict_class = NULL;

    Py_XDECREF( var_merged_setting );
    var_merged_setting = NULL;

    Py_XDECREF( var_none_keys );
    var_none_keys = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_1_merge_setting );
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


static PyObject *impl_requests$sessions$$$function_2_merge_hooks( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_request_hooks = python_pars[ 0 ];
    PyObject *par_session_hooks = python_pars[ 1 ];
    PyObject *par_dict_class = python_pars[ 2 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_fd4b7653e0288ef2edb5235c7193d2c8 = NULL;

    struct Nuitka_FrameObject *frame_fd4b7653e0288ef2edb5235c7193d2c8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fd4b7653e0288ef2edb5235c7193d2c8, codeobj_fd4b7653e0288ef2edb5235c7193d2c8, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fd4b7653e0288ef2edb5235c7193d2c8 = cache_frame_fd4b7653e0288ef2edb5235c7193d2c8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fd4b7653e0288ef2edb5235c7193d2c8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fd4b7653e0288ef2edb5235c7193d2c8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compexpr_left_1 = par_session_hooks;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = Py_None;
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
    tmp_called_instance_1 = par_session_hooks;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "session_hooks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_fd4b7653e0288ef2edb5235c7193d2c8->m_frame.f_lineno = 87;
    tmp_compexpr_left_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_response_tuple, 0 ) );

    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = PyList_New( 0 );
    tmp_or_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 87;
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
    tmp_return_value = par_request_hooks;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_hooks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_compexpr_left_3 = par_request_hooks;

    if ( tmp_compexpr_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_hooks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_3 = Py_None;
    tmp_or_left_value_2 = BOOL_FROM( tmp_compexpr_left_3 == tmp_compexpr_right_3 );
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    assert( !(tmp_or_left_truth_2 == -1) );
    if ( tmp_or_left_truth_2 == 1 )
    {
        goto or_left_2;
    }
    else
    {
        goto or_right_2;
    }
    or_right_2:;
    tmp_called_instance_2 = par_request_hooks;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_hooks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_fd4b7653e0288ef2edb5235c7193d2c8->m_frame.f_lineno = 90;
    tmp_compexpr_left_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_response_tuple, 0 ) );

    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_4 = PyList_New( 0 );
    tmp_or_right_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    Py_DECREF( tmp_compexpr_right_4 );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    Py_INCREF( tmp_or_left_value_2 );
    tmp_cond_value_2 = tmp_or_left_value_2;
    or_end_2:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 90;
        type_description_1 = "ooo";
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
    tmp_return_value = par_session_hooks;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "session_hooks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_setting );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "merge_setting" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_request_hooks;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_hooks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_session_hooks;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "session_hooks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_dict_class;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dict_class" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_fd4b7653e0288ef2edb5235c7193d2c8->m_frame.f_lineno = 93;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

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
    RESTORE_FRAME_EXCEPTION( frame_fd4b7653e0288ef2edb5235c7193d2c8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd4b7653e0288ef2edb5235c7193d2c8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd4b7653e0288ef2edb5235c7193d2c8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fd4b7653e0288ef2edb5235c7193d2c8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fd4b7653e0288ef2edb5235c7193d2c8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fd4b7653e0288ef2edb5235c7193d2c8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fd4b7653e0288ef2edb5235c7193d2c8,
        type_description_1,
        par_request_hooks,
        par_session_hooks,
        par_dict_class
    );


    // Release cached frame.
    if ( frame_fd4b7653e0288ef2edb5235c7193d2c8 == cache_frame_fd4b7653e0288ef2edb5235c7193d2c8 )
    {
        Py_DECREF( frame_fd4b7653e0288ef2edb5235c7193d2c8 );
    }
    cache_frame_fd4b7653e0288ef2edb5235c7193d2c8 = NULL;

    assertFrameObject( frame_fd4b7653e0288ef2edb5235c7193d2c8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_2_merge_hooks );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_request_hooks );
    par_request_hooks = NULL;

    Py_XDECREF( par_session_hooks );
    par_session_hooks = NULL;

    Py_XDECREF( par_dict_class );
    par_dict_class = NULL;

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

    Py_XDECREF( par_request_hooks );
    par_request_hooks = NULL;

    Py_XDECREF( par_session_hooks );
    par_session_hooks = NULL;

    Py_XDECREF( par_dict_class );
    par_dict_class = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_2_merge_hooks );
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


static PyObject *impl_requests$sessions$$$function_3_get_redirect_target( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_resp = python_pars[ 1 ];
    PyObject *var_location = NULL;
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
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_2505b37575ccd10606b65d1a23743d5c = NULL;

    struct Nuitka_FrameObject *frame_2505b37575ccd10606b65d1a23743d5c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2505b37575ccd10606b65d1a23743d5c, codeobj_2505b37575ccd10606b65d1a23743d5c, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2505b37575ccd10606b65d1a23743d5c = cache_frame_2505b37575ccd10606b65d1a23743d5c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2505b37575ccd10606b65d1a23743d5c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2505b37575ccd10606b65d1a23743d5c ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_resp;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_redirect );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 106;
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
    tmp_source_name_2 = par_resp;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_headers );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_str_plain_location;
    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_location == NULL );
    var_location = tmp_assign_source_1;

    tmp_cond_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_is_py3 );

    if (unlikely( tmp_cond_value_2 == NULL ))
    {
        tmp_cond_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_py3 );
    }

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_py3" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
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
    tmp_called_instance_1 = var_location;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_2505b37575ccd10606b65d1a23743d5c->m_frame.f_lineno = 115;
    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_latin1_tuple, 0 ) );

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_location;
        var_location = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_to_native_string );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_to_native_string );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "to_native_string" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = var_location;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = const_str_plain_utf8;
    frame_2505b37575ccd10606b65d1a23743d5c->m_frame.f_lineno = 116;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2505b37575ccd10606b65d1a23743d5c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2505b37575ccd10606b65d1a23743d5c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2505b37575ccd10606b65d1a23743d5c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2505b37575ccd10606b65d1a23743d5c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2505b37575ccd10606b65d1a23743d5c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2505b37575ccd10606b65d1a23743d5c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2505b37575ccd10606b65d1a23743d5c,
        type_description_1,
        par_self,
        par_resp,
        var_location
    );


    // Release cached frame.
    if ( frame_2505b37575ccd10606b65d1a23743d5c == cache_frame_2505b37575ccd10606b65d1a23743d5c )
    {
        Py_DECREF( frame_2505b37575ccd10606b65d1a23743d5c );
    }
    cache_frame_2505b37575ccd10606b65d1a23743d5c = NULL;

    assertFrameObject( frame_2505b37575ccd10606b65d1a23743d5c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_3_get_redirect_target );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_resp );
    par_resp = NULL;

    Py_XDECREF( var_location );
    var_location = NULL;

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

    Py_XDECREF( par_resp );
    par_resp = NULL;

    Py_XDECREF( var_location );
    var_location = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_3_get_redirect_target );
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


static PyObject *impl_requests$sessions$$$function_4_resolve_redirects( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_resp = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_req = PyCell_NEW1( python_pars[ 2 ] );
    struct Nuitka_CellObject *par_stream = PyCell_NEW1( python_pars[ 3 ] );
    struct Nuitka_CellObject *par_timeout = PyCell_NEW1( python_pars[ 4 ] );
    struct Nuitka_CellObject *par_verify = PyCell_NEW1( python_pars[ 5 ] );
    struct Nuitka_CellObject *par_cert = PyCell_NEW1( python_pars[ 6 ] );
    struct Nuitka_CellObject *par_proxies = PyCell_NEW1( python_pars[ 7 ] );
    struct Nuitka_CellObject *par_yield_requests = PyCell_NEW1( python_pars[ 8 ] );
    struct Nuitka_CellObject *par_adapter_kwargs = PyCell_NEW1( python_pars[ 9 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Nuitka_Generator_New(
        requests$sessions$$$function_4_resolve_redirects$$$genobj_1_resolve_redirects_context,
        module_requests$sessions,
        const_str_plain_resolve_redirects,
#if PYTHON_VERSION >= 350
        const_str_digest_f2636f029da6046e540b6721c0c69c64,
#endif
        codeobj_c8a5727fbc9485f31e8cd821c02a78d7,
        10
    );

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_adapter_kwargs;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] = par_cert;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[2] = par_proxies;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[2] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[3] = par_req;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[3] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[4] = par_resp;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[4] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[5] = par_self;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[5] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[6] = par_stream;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[6] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[7] = par_timeout;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[7] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[8] = par_verify;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[8] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[9] = par_yield_requests;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[9] );
    assert( Py_SIZE( tmp_return_value ) >= 10 ); 


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_4_resolve_redirects );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_resp );
    Py_DECREF( par_resp );
    par_resp = NULL;

    CHECK_OBJECT( (PyObject *)par_req );
    Py_DECREF( par_req );
    par_req = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_verify );
    Py_DECREF( par_verify );
    par_verify = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    CHECK_OBJECT( (PyObject *)par_yield_requests );
    Py_DECREF( par_yield_requests );
    par_yield_requests = NULL;

    CHECK_OBJECT( (PyObject *)par_adapter_kwargs );
    Py_DECREF( par_adapter_kwargs );
    par_adapter_kwargs = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_resp );
    Py_DECREF( par_resp );
    par_resp = NULL;

    CHECK_OBJECT( (PyObject *)par_req );
    Py_DECREF( par_req );
    par_req = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_verify );
    Py_DECREF( par_verify );
    par_verify = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    CHECK_OBJECT( (PyObject *)par_yield_requests );
    Py_DECREF( par_yield_requests );
    par_yield_requests = NULL;

    CHECK_OBJECT( (PyObject *)par_adapter_kwargs );
    Py_DECREF( par_adapter_kwargs );
    par_adapter_kwargs = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_4_resolve_redirects );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct requests$sessions$$$function_4_resolve_redirects$$$genobj_1_resolve_redirects_locals {
    PyObject *var_hist
    PyObject *var_url
    PyObject *var_prepared_request
    PyObject *var_parsed_rurl
    PyObject *var_parsed
    PyObject *var_purged_headers
    PyObject *var_header
    PyObject *var_headers
    PyObject *var_rewindable
    PyObject *tmp_for_loop_1__for_iterator
    PyObject *tmp_for_loop_1__iter_value
    PyObject *exception_type
    PyObject *exception_value
    PyTracebackObject *exception_tb
    int exception_lineno
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
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
    PyObject *tmp_args_element_name_25;
    PyObject *tmp_args_element_name_26;
    PyObject *tmp_args_element_name_27;
    PyObject *tmp_args_element_name_28;
    PyObject *tmp_args_element_name_29;
    PyObject *tmp_args_name_1;
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
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
    PyObject *tmp_called_name_19;
    PyObject *tmp_called_name_20;
    PyObject *tmp_called_name_21;
    int tmp_cmp_GtE_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
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
    PyObject *tmp_delsubscr_subscript_1;
    PyObject *tmp_delsubscr_target_1;
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
    PyObject *tmp_expression_name_1;
    PyObject *tmp_expression_name_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *requests$sessions$$$function_4_resolve_redirects$$$genobj_1_resolve_redirects_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void requests$sessions$$$function_4_resolve_redirects$$$genobj_1_resolve_redirects_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_hist = NULL;
    PyObject *var_url = NULL;
    PyObject *var_prepared_request = NULL;
    PyObject *var_parsed_rurl = NULL;
    PyObject *var_parsed = NULL;
    PyObject *var_purged_headers = NULL;
    PyObject *var_header = NULL;
    PyObject *var_headers = NULL;
    PyObject *var_rewindable = NULL;
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
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
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
    PyObject *tmp_args_element_name_25;
    PyObject *tmp_args_element_name_26;
    PyObject *tmp_args_element_name_27;
    PyObject *tmp_args_element_name_28;
    PyObject *tmp_args_element_name_29;
    PyObject *tmp_args_name_1;
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
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
    PyObject *tmp_called_name_19;
    PyObject *tmp_called_name_20;
    PyObject *tmp_called_name_21;
    int tmp_cmp_GtE_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
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
    PyObject *tmp_delsubscr_subscript_1;
    PyObject *tmp_delsubscr_target_1;
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
    PyObject *tmp_expression_name_1;
    PyObject *tmp_expression_name_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_hist == NULL );
    var_hist = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_c8a5727fbc9485f31e8cd821c02a78d7, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_frame_generator;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

    generator->m_frame->m_frame.f_exc_type = thread_state->exc_type;
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = thread_state->exc_value;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = thread_state->exc_traceback;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Framed code:
    if ( generator->m_closure[5] == NULL )
    {
        tmp_source_name_1 = NULL;
    }
    else
    {
        tmp_source_name_1 = PyCell_GET( generator->m_closure[5] );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_redirect_target );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    if ( generator->m_closure[4] == NULL )
    {
        tmp_args_element_name_1 = NULL;
    }
    else
    {
        tmp_args_element_name_1 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 125;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_url == NULL );
    var_url = tmp_assign_source_2;

    loop_start_1:;
    tmp_cond_value_1 = var_url;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 126;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "ccccccccccooooooooo";
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
    goto loop_end_1;
    branch_no_1:;
    if ( generator->m_closure[3] == NULL )
    {
        tmp_called_instance_1 = NULL;
    }
    else
    {
        tmp_called_instance_1 = PyCell_GET( generator->m_closure[3] );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "req" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 127;
    tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_prepared_request;
        var_prepared_request = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_source_name_2 = var_hist;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hist" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    if ( generator->m_closure[4] == NULL )
    {
        tmp_args_element_name_2 = NULL;
    }
    else
    {
        tmp_args_element_name_2 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 131;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_subscribed_name_1 = var_hist;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hist" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_slice_int_pos_1_none_none;
    tmp_assattr_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    if ( generator->m_closure[4] == NULL )
    {
        tmp_assattr_target_1 = NULL;
    }
    else
    {
        tmp_assattr_target_1 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_history, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 132;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    // Tried code:
    if ( generator->m_closure[4] == NULL )
    {
        tmp_source_name_3 = NULL;
    }
    else
    {
        tmp_source_name_3 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        type_description_1 = "ccccccccccooooooooo";
        goto try_except_handler_2;
    }

    tmp_unused = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_content );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "ccccccccccooooooooo";
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( generator->m_frame, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, generator->m_frame, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_ChunkedEncodingError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ChunkedEncodingError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_compare_right_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ChunkedEncodingError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        type_description_1 = "ccccccccccooooooooo";
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_ContentDecodingError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ContentDecodingError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_compare_right_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ContentDecodingError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        type_description_1 = "ccccccccccooooooooo";
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyExc_RuntimeError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 2, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 136;
        type_description_1 = "ccccccccccooooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    if ( generator->m_closure[4] == NULL )
    {
        tmp_source_name_5 = NULL;
    }
    else
    {
        tmp_source_name_5 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        type_description_1 = "ccccccccccooooooooo";
        goto try_except_handler_3;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_raw );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "ccccccccccooooooooo";
        goto try_except_handler_3;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_read );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "ccccccccccooooooooo";
        goto try_except_handler_3;
    }
    tmp_kw_name_1 = PyDict_Copy( const_dict_d7fd5bd8b432e83dcd02aee0b5fbde86 );
    generator->m_frame->m_frame.f_lineno = 137;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "ccccccccccooooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 134;
    }

    if (exception_tb && exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ccccccccccooooooooo";
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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_4_resolve_redirects$$$genobj_1_resolve_redirects );
    return;
    // End of try:
    try_end_1:;
    if ( generator->m_closure[4] == NULL )
    {
        tmp_source_name_6 = NULL;
    }
    else
    {
        tmp_source_name_6 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 139;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_history );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    if ( generator->m_closure[5] == NULL )
    {
        tmp_source_name_7 = NULL;
    }
    else
    {
        tmp_source_name_7 = PyCell_GET( generator->m_closure[5] );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 139;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_max_redirects );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 139;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 139;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_TooManyRedirects );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TooManyRedirects );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TooManyRedirects" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_left_name_1 = const_str_digest_dde136ad554213eb3ece20209a69ac24;
    if ( generator->m_closure[5] == NULL )
    {
        tmp_source_name_8 = NULL;
    }
    else
    {
        tmp_source_name_8 = PyCell_GET( generator->m_closure[5] );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_max_redirects );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 140;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 140;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_response;
    if ( generator->m_closure[4] == NULL )
    {
        tmp_dict_value_1 = NULL;
    }
    else
    {
        tmp_dict_value_1 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    generator->m_frame->m_frame.f_lineno = 140;
    tmp_raise_type_1 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 140;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ccccccccccooooooooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    if ( generator->m_closure[4] == NULL )
    {
        tmp_called_instance_2 = NULL;
    }
    else
    {
        tmp_called_instance_2 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 143;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 143;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_3 = var_url;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 146;
    tmp_cond_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_digest_13971ae58b983978540cbb4bbf3b1360_tuple, 0 ) );

    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 146;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
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
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urlparse );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "urlparse" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    if ( generator->m_closure[4] == NULL )
    {
        tmp_source_name_9 = NULL;
    }
    else
    {
        tmp_source_name_9 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_url );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    generator->m_frame->m_frame.f_lineno = 147;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_parsed_rurl;
        var_parsed_rurl = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_left_name_2 = const_str_digest_f2d2f5f01d8d9360355c50eb1d09d771;
    tmp_right_name_2 = PyTuple_New( 2 );
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_to_native_string );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_to_native_string );
    }

    if ( tmp_called_name_6 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "to_native_string" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 148;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = var_parsed_rurl;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_scheme );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 148;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    generator->m_frame->m_frame.f_lineno = 148;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 148;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_url;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 148;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_3 );
    tmp_assign_source_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_url;
        var_url = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    branch_no_4:;
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urlparse );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "urlparse" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 151;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = var_url;

    if ( tmp_args_element_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 151;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 151;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_parsed;
        var_parsed = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_called_instance_4 = var_parsed;

    CHECK_OBJECT( tmp_called_instance_4 );
    generator->m_frame->m_frame.f_lineno = 152;
    tmp_assign_source_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_geturl );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_url;
        var_url = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_source_name_11 = var_parsed;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parsed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_netloc );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 157;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_no_5;
    }
    else
    {
        goto branch_yes_5;
    }
    branch_yes_5:;
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urljoin );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urljoin );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "urljoin" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 158;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    if ( generator->m_closure[4] == NULL )
    {
        tmp_source_name_12 = NULL;
    }
    else
    {
        tmp_source_name_12 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 158;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_url );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_requote_uri );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_requote_uri );
    }

    if ( tmp_called_name_9 == NULL )
    {
        Py_DECREF( tmp_args_element_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "requote_uri" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 158;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = var_url;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_args_element_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 158;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 158;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_6 );

        exception_lineno = 158;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    generator->m_frame->m_frame.f_lineno = 158;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_url;
        var_url = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    goto branch_end_5;
    branch_no_5:;
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_requote_uri );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_requote_uri );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "requote_uri" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = var_url;

    if ( tmp_args_element_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 160;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_url;
        var_url = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    branch_end_5:;
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_to_native_string );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_to_native_string );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "to_native_string" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = var_url;

    CHECK_OBJECT( tmp_args_element_name_10 );
    generator->m_frame->m_frame.f_lineno = 162;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = var_prepared_request;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prepared_request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_url, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 162;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    if ( generator->m_closure[5] == NULL )
    {
        tmp_source_name_13 = NULL;
    }
    else
    {
        tmp_source_name_13 = PyCell_GET( generator->m_closure[5] );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 164;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_rebuild_method );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = var_prepared_request;

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prepared_request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 164;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    if ( generator->m_closure[4] == NULL )
    {
        tmp_args_element_name_12 = NULL;
    }
    else
    {
        tmp_args_element_name_12 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_args_element_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 164;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 164;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    if ( generator->m_closure[4] == NULL )
    {
        tmp_source_name_14 = NULL;
    }
    else
    {
        tmp_source_name_14 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_status_code );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = PyTuple_New( 2 );
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_codes );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codes );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_compare_left_3 );
        Py_DECREF( tmp_compare_right_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "codes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_temporary_redirect );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );
        Py_DECREF( tmp_compare_right_3 );

        exception_lineno = 167;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_compare_right_3, 0, tmp_tuple_element_4 );
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_codes );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codes );
    }

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_compare_left_3 );
        Py_DECREF( tmp_compare_right_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "codes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_permanent_redirect );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );
        Py_DECREF( tmp_compare_right_3 );

        exception_lineno = 167;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_compare_right_3, 1, tmp_tuple_element_4 );
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    Py_DECREF( tmp_compare_left_3 );
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_10 = const_tuple_b9ba4ced99a0ce31f3399e306cb806b0_tuple;
    {
        PyObject *old = var_purged_headers;
        var_purged_headers = tmp_assign_source_10;
        Py_INCREF( var_purged_headers );
        Py_XDECREF( old );
    }

    tmp_iter_arg_1 = const_tuple_b9ba4ced99a0ce31f3399e306cb806b0_tuple;
    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_1 );
    assert( tmp_assign_source_11 != NULL );
    {
        PyObject *old = tmp_for_loop_1__for_iterator;
        tmp_for_loop_1__for_iterator = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_12 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ccccccccccooooooooo";
            exception_lineno = 170;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_assign_source_13 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_13 );
    {
        PyObject *old = var_header;
        var_header = tmp_assign_source_13;
        Py_INCREF( var_header );
        Py_XDECREF( old );
    }

    tmp_source_name_18 = var_prepared_request;

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prepared_request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;
        type_description_1 = "ccccccccccooooooooo";
        goto try_except_handler_4;
    }

    tmp_source_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_headers );
    if ( tmp_source_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_1 = "ccccccccccooooooooo";
        goto try_except_handler_4;
    }
    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_pop );
    Py_DECREF( tmp_source_name_17 );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_1 = "ccccccccccooooooooo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_13 = var_header;

    if ( tmp_args_element_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "header" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;
        type_description_1 = "ccccccccccooooooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_14 = Py_None;
    generator->m_frame->m_frame.f_lineno = 171;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_1 = "ccccccccccooooooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_1 = "ccccccccccooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
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

    tmp_assattr_name_3 = Py_None;
    tmp_assattr_target_3 = var_prepared_request;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prepared_request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_body, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    tmp_source_name_19 = var_prepared_request;

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prepared_request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_headers );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_headers;
        var_headers = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_delsubscr_target_1 = var_headers;

    CHECK_OBJECT( tmp_delsubscr_target_1 );
    tmp_delsubscr_subscript_1 = const_str_plain_Cookie;
    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "ccccccccccooooooooo";
        goto try_except_handler_5;
    }
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

    // Preserve existing published exception.
    exception_preserved_type_2 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_4 == NULL )
    {
        exception_keeper_tb_4 = MAKE_TRACEBACK( generator->m_frame, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != 0 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, generator->m_frame, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PyException_SetTraceback( exception_keeper_value_4, (PyObject *)exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    // Tried code:
    tmp_compare_left_4 = PyThreadState_GET()->exc_type;
    tmp_compare_right_4 = PyExc_KeyError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "ccccccccccooooooooo";
        goto try_except_handler_6;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_no_7;
    }
    else
    {
        goto branch_yes_7;
    }
    branch_yes_7:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 175;
    }

    if (exception_tb && exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ccccccccccooooooooo";
    goto try_except_handler_6;
    branch_no_7:;
    goto try_end_5;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_4;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_4_resolve_redirects$$$genobj_1_resolve_redirects );
    return;
    // End of try:
    try_end_4:;
    tmp_called_name_14 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );

    if (unlikely( tmp_called_name_14 == NULL ))
    {
        tmp_called_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );
    }

    if ( tmp_called_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "extract_cookies_to_jar" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_20 = var_prepared_request;

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prepared_request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__cookies );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    if ( generator->m_closure[3] == NULL )
    {
        tmp_args_element_name_16 = NULL;
    }
    else
    {
        tmp_args_element_name_16 = PyCell_GET( generator->m_closure[3] );
    }

    if ( tmp_args_element_name_16 == NULL )
    {
        Py_DECREF( tmp_args_element_name_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "req" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    if ( generator->m_closure[4] == NULL )
    {
        tmp_source_name_21 = NULL;
    }
    else
    {
        tmp_source_name_21 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_source_name_21 == NULL )
    {
        Py_DECREF( tmp_args_element_name_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_raw );
    if ( tmp_args_element_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_15 );

        exception_lineno = 183;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    generator->m_frame->m_frame.f_lineno = 183;
    {
        PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_args_element_name_15 );
    Py_DECREF( tmp_args_element_name_17 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_15 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_cookies );

    if (unlikely( tmp_called_name_15 == NULL ))
    {
        tmp_called_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_cookies );
    }

    if ( tmp_called_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "merge_cookies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_22 = var_prepared_request;

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prepared_request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain__cookies );
    if ( tmp_args_element_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    if ( generator->m_closure[5] == NULL )
    {
        tmp_source_name_23 = NULL;
    }
    else
    {
        tmp_source_name_23 = PyCell_GET( generator->m_closure[5] );
    }

    if ( tmp_source_name_23 == NULL )
    {
        Py_DECREF( tmp_args_element_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_cookies );
    if ( tmp_args_element_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_18 );

        exception_lineno = 184;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    generator->m_frame->m_frame.f_lineno = 184;
    {
        PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_args_element_name_18 );
    Py_DECREF( tmp_args_element_name_19 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_24 = var_prepared_request;

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prepared_request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_prepare_cookies );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_25 = var_prepared_request;

    if ( tmp_source_name_25 == NULL )
    {
        Py_DECREF( tmp_called_name_16 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prepared_request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain__cookies );
    if ( tmp_args_element_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );

        exception_lineno = 185;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    generator->m_frame->m_frame.f_lineno = 185;
    {
        PyObject *call_args[] = { tmp_args_element_name_20 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_called_name_16 );
    Py_DECREF( tmp_args_element_name_20 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    if ( generator->m_closure[5] == NULL )
    {
        tmp_source_name_26 = NULL;
    }
    else
    {
        tmp_source_name_26 = PyCell_GET( generator->m_closure[5] );
    }

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_rebuild_proxies );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_21 = var_prepared_request;

    if ( tmp_args_element_name_21 == NULL )
    {
        Py_DECREF( tmp_called_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prepared_request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    if ( generator->m_closure[2] == NULL )
    {
        tmp_args_element_name_22 = NULL;
    }
    else
    {
        tmp_args_element_name_22 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_args_element_name_22 == NULL )
    {
        Py_DECREF( tmp_called_name_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "proxies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 188;
    {
        PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_called_name_17 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( generator->m_closure[2] );
        PyCell_SET( generator->m_closure[2], tmp_assign_source_15 );
        Py_XDECREF( old );
    }

    if ( generator->m_closure[5] == NULL )
    {
        tmp_source_name_27 = NULL;
    }
    else
    {
        tmp_source_name_27 = PyCell_GET( generator->m_closure[5] );
    }

    if ( tmp_source_name_27 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_rebuild_auth );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_23 = var_prepared_request;

    if ( tmp_args_element_name_23 == NULL )
    {
        Py_DECREF( tmp_called_name_18 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prepared_request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    if ( generator->m_closure[4] == NULL )
    {
        tmp_args_element_name_24 = NULL;
    }
    else
    {
        tmp_args_element_name_24 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_args_element_name_24 == NULL )
    {
        Py_DECREF( tmp_called_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 189;
    {
        PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_called_name_18 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_28 = var_prepared_request;

    if ( tmp_source_name_28 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prepared_request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain__body_position );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        type_description_1 = "ccccccccccooooooooo";
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
    tmp_compexpr_left_2 = const_str_digest_3c9527fc53ea2272c2080ca035d6631c;
    tmp_compexpr_right_2 = var_headers;

    if ( tmp_compexpr_right_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
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
    tmp_compexpr_left_3 = const_str_digest_2b15502c566d8238f4869c227793bd1a;
    tmp_compexpr_right_3 = var_headers;

    if ( tmp_compexpr_right_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_and_right_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_assign_source_16 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_assign_source_16 = tmp_and_left_value_1;
    and_end_1:;
    {
        PyObject *old = var_rewindable;
        var_rewindable = tmp_assign_source_16;
        Py_INCREF( var_rewindable );
        Py_XDECREF( old );
    }

    tmp_cond_value_4 = var_rewindable;

    CHECK_OBJECT( tmp_cond_value_4 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_called_name_19 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_rewind_body );

    if (unlikely( tmp_called_name_19 == NULL ))
    {
        tmp_called_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rewind_body );
    }

    if ( tmp_called_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rewind_body" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_25 = var_prepared_request;

    if ( tmp_args_element_name_25 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prepared_request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 201;
    {
        PyObject *call_args[] = { tmp_args_element_name_25 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_8:;
    tmp_assign_source_17 = var_prepared_request;

    if ( tmp_assign_source_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prepared_request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 204;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    {
        PyObject *old = PyCell_GET( generator->m_closure[3] );
        PyCell_SET( generator->m_closure[3], tmp_assign_source_17 );
        Py_INCREF( tmp_assign_source_17 );
        Py_XDECREF( old );
    }

    if ( generator->m_closure[9] == NULL )
    {
        tmp_cond_value_5 = NULL;
    }
    else
    {
        tmp_cond_value_5 = PyCell_GET( generator->m_closure[9] );
    }

    if ( tmp_cond_value_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "yield_requests" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 206;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    if ( generator->m_closure[3] == NULL )
    {
        tmp_expression_name_1 = NULL;
    }
    else
    {
        tmp_expression_name_1 = PyCell_GET( generator->m_closure[3] );
    }

    if ( tmp_expression_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "req" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 207;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_expression_name_1 );
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_9;
    branch_no_9:;
    if ( generator->m_closure[5] == NULL )
    {
        tmp_source_name_29 = NULL;
    }
    else
    {
        tmp_source_name_29 = PyCell_GET( generator->m_closure[5] );
    }

    if ( tmp_source_name_29 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 210;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_send );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    if ( generator->m_closure[3] == NULL )
    {
        tmp_tuple_element_5 = NULL;
    }
    else
    {
        tmp_tuple_element_5 = PyCell_GET( generator->m_closure[3] );
    }

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "req" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 211;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_5 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 6 );
    tmp_dict_key_2 = const_str_plain_stream;
    if ( generator->m_closure[6] == NULL )
    {
        tmp_dict_value_2 = NULL;
    }
    else
    {
        tmp_dict_value_2 = PyCell_GET( generator->m_closure[6] );
    }

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "stream" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 212;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_timeout;
    if ( generator->m_closure[7] == NULL )
    {
        tmp_dict_value_3 = NULL;
    }
    else
    {
        tmp_dict_value_3 = PyCell_GET( generator->m_closure[7] );
    }

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 213;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_verify;
    if ( generator->m_closure[8] == NULL )
    {
        tmp_dict_value_4 = NULL;
    }
    else
    {
        tmp_dict_value_4 = PyCell_GET( generator->m_closure[8] );
    }

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "verify" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 214;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_cert;
    if ( generator->m_closure[1] == NULL )
    {
        tmp_dict_value_5 = NULL;
    }
    else
    {
        tmp_dict_value_5 = PyCell_GET( generator->m_closure[1] );
    }

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_proxies;
    if ( generator->m_closure[2] == NULL )
    {
        tmp_dict_value_6 = NULL;
    }
    else
    {
        tmp_dict_value_6 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "proxies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 216;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_7 = const_str_plain_allow_redirects;
    tmp_dict_value_7 = Py_False;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    if ( generator->m_closure[0] == NULL )
    {
        tmp_dircall_arg4_1 = NULL;
    }
    else
    {
        tmp_dircall_arg4_1 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "adapter_kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_assign_source_18 = impl___internal__$$$function_4_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( generator->m_closure[4] );
        PyCell_SET( generator->m_closure[4], tmp_assign_source_18 );
        Py_XDECREF( old );
    }

    tmp_called_name_20 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );

    if (unlikely( tmp_called_name_20 == NULL ))
    {
        tmp_called_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );
    }

    if ( tmp_called_name_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "extract_cookies_to_jar" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 221;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    if ( generator->m_closure[5] == NULL )
    {
        tmp_source_name_30 = NULL;
    }
    else
    {
        tmp_source_name_30 = PyCell_GET( generator->m_closure[5] );
    }

    if ( tmp_source_name_30 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 221;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_cookies );
    if ( tmp_args_element_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_27 = var_prepared_request;

    if ( tmp_args_element_name_27 == NULL )
    {
        Py_DECREF( tmp_args_element_name_26 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prepared_request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 221;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    if ( generator->m_closure[4] == NULL )
    {
        tmp_source_name_31 = NULL;
    }
    else
    {
        tmp_source_name_31 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_source_name_31 == NULL )
    {
        Py_DECREF( tmp_args_element_name_26 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 221;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_raw );
    if ( tmp_args_element_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_26 );

        exception_lineno = 221;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    generator->m_frame->m_frame.f_lineno = 221;
    {
        PyObject *call_args[] = { tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_args_element_name_26 );
    Py_DECREF( tmp_args_element_name_28 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    if ( generator->m_closure[5] == NULL )
    {
        tmp_source_name_32 = NULL;
    }
    else
    {
        tmp_source_name_32 = PyCell_GET( generator->m_closure[5] );
    }

    if ( tmp_source_name_32 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_get_redirect_target );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    if ( generator->m_closure[4] == NULL )
    {
        tmp_args_element_name_29 = NULL;
    }
    else
    {
        tmp_args_element_name_29 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_args_element_name_29 == NULL )
    {
        Py_DECREF( tmp_called_name_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 224;
    {
        PyObject *call_args[] = { tmp_args_element_name_29 };
        tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
    }

    Py_DECREF( tmp_called_name_21 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_url;
        var_url = tmp_assign_source_19;
        Py_XDECREF( old );
    }

    if ( generator->m_closure[4] == NULL )
    {
        tmp_expression_name_2 = NULL;
    }
    else
    {
        tmp_expression_name_2 = PyCell_GET( generator->m_closure[4] );
    }

    if ( tmp_expression_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 225;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_expression_name_2 );
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_9:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "ccccccccccooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, generator->m_frame, exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            type_description_1,
            generator->m_closure[5],
            generator->m_closure[4],
            generator->m_closure[3],
            generator->m_closure[6],
            generator->m_closure[7],
            generator->m_closure[8],
            generator->m_closure[1],
            generator->m_closure[2],
            generator->m_closure[9],
            generator->m_closure[0],
            var_hist,
            var_url,
            var_prepared_request,
            var_parsed_rurl,
            var_parsed,
            var_purged_headers,
            var_header,
            var_headers,
            var_rewindable
        );


        // Release cached frame.
        if ( generator->m_frame == cache_frame_generator )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_frame_generator = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    goto try_end_6;
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

    Py_XDECREF( var_hist );
    var_hist = NULL;

    Py_XDECREF( var_url );
    var_url = NULL;

    Py_XDECREF( var_prepared_request );
    var_prepared_request = NULL;

    Py_XDECREF( var_parsed_rurl );
    var_parsed_rurl = NULL;

    Py_XDECREF( var_parsed );
    var_parsed = NULL;

    Py_XDECREF( var_purged_headers );
    var_purged_headers = NULL;

    Py_XDECREF( var_header );
    var_header = NULL;

    Py_XDECREF( var_headers );
    var_headers = NULL;

    Py_XDECREF( var_rewindable );
    var_rewindable = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:
    try_end_6:;
    Py_XDECREF( var_hist );
    var_hist = NULL;

    Py_XDECREF( var_url );
    var_url = NULL;

    Py_XDECREF( var_prepared_request );
    var_prepared_request = NULL;

    Py_XDECREF( var_parsed_rurl );
    var_parsed_rurl = NULL;

    Py_XDECREF( var_parsed );
    var_parsed = NULL;

    Py_XDECREF( var_purged_headers );
    var_purged_headers = NULL;

    Py_XDECREF( var_header );
    var_header = NULL;

    Py_XDECREF( var_headers );
    var_headers = NULL;

    Py_XDECREF( var_rewindable );
    var_rewindable = NULL;


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

}


static PyObject *impl_requests$sessions$$$function_5_rebuild_auth( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_prepared_request = python_pars[ 1 ];
    PyObject *par_response = python_pars[ 2 ];
    PyObject *var_headers = NULL;
    PyObject *var_url = NULL;
    PyObject *var_original_parsed = NULL;
    PyObject *var_redirect_parsed = NULL;
    PyObject *var_new_auth = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_In_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_delsubscr_subscript_1;
    PyObject *tmp_delsubscr_target_1;
    bool tmp_isnot_1;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0721f1546bec673c1b47623ae9a5d2ec = NULL;

    struct Nuitka_FrameObject *frame_0721f1546bec673c1b47623ae9a5d2ec;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0721f1546bec673c1b47623ae9a5d2ec, codeobj_0721f1546bec673c1b47623ae9a5d2ec, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0721f1546bec673c1b47623ae9a5d2ec = cache_frame_0721f1546bec673c1b47623ae9a5d2ec;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0721f1546bec673c1b47623ae9a5d2ec );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0721f1546bec673c1b47623ae9a5d2ec ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_prepared_request;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_headers );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_headers == NULL );
    var_headers = tmp_assign_source_1;

    tmp_source_name_2 = par_prepared_request;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prepared_request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 233;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_url );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_url == NULL );
    var_url = tmp_assign_source_2;

    tmp_compare_left_1 = const_str_plain_Authorization;
    tmp_compare_right_1 = var_headers;

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 235;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urlparse );

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

        exception_lineno = 238;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = par_response;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 238;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_request );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_url );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_0721f1546bec673c1b47623ae9a5d2ec->m_frame.f_lineno = 238;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_original_parsed == NULL );
    var_original_parsed = tmp_assign_source_3;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urlparse );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "urlparse" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 239;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_url;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 239;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_0721f1546bec673c1b47623ae9a5d2ec->m_frame.f_lineno = 239;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_redirect_parsed == NULL );
    var_redirect_parsed = tmp_assign_source_4;

    tmp_source_name_5 = var_original_parsed;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "original_parsed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_hostname );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = var_redirect_parsed;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "redirect_parsed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_hostname );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 241;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 241;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_delsubscr_target_1 = var_headers;

    if ( tmp_delsubscr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_delsubscr_subscript_1 = const_str_plain_Authorization;
    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    branch_no_1:;
    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 245;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_trust_env );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 245;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_get_netrc_auth );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_netrc_auth );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_netrc_auth" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 245;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_url;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 245;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_0721f1546bec673c1b47623ae9a5d2ec->m_frame.f_lineno = 245;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_5 = Py_None;
    Py_INCREF( tmp_assign_source_5 );
    condexpr_end_1:;
    assert( var_new_auth == NULL );
    var_new_auth = tmp_assign_source_5;

    tmp_compare_left_3 = var_new_auth;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_8 = par_prepared_request;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prepared_request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 247;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_prepare_auth );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_new_auth;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_auth" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 247;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_0721f1546bec673c1b47623ae9a5d2ec->m_frame.f_lineno = 247;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0721f1546bec673c1b47623ae9a5d2ec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0721f1546bec673c1b47623ae9a5d2ec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0721f1546bec673c1b47623ae9a5d2ec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0721f1546bec673c1b47623ae9a5d2ec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0721f1546bec673c1b47623ae9a5d2ec, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0721f1546bec673c1b47623ae9a5d2ec,
        type_description_1,
        par_self,
        par_prepared_request,
        par_response,
        var_headers,
        var_url,
        var_original_parsed,
        var_redirect_parsed,
        var_new_auth
    );


    // Release cached frame.
    if ( frame_0721f1546bec673c1b47623ae9a5d2ec == cache_frame_0721f1546bec673c1b47623ae9a5d2ec )
    {
        Py_DECREF( frame_0721f1546bec673c1b47623ae9a5d2ec );
    }
    cache_frame_0721f1546bec673c1b47623ae9a5d2ec = NULL;

    assertFrameObject( frame_0721f1546bec673c1b47623ae9a5d2ec );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_5_rebuild_auth );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_prepared_request );
    par_prepared_request = NULL;

    Py_XDECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_headers );
    var_headers = NULL;

    Py_XDECREF( var_url );
    var_url = NULL;

    Py_XDECREF( var_original_parsed );
    var_original_parsed = NULL;

    Py_XDECREF( var_redirect_parsed );
    var_redirect_parsed = NULL;

    Py_XDECREF( var_new_auth );
    var_new_auth = NULL;

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

    Py_XDECREF( par_prepared_request );
    par_prepared_request = NULL;

    Py_XDECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_headers );
    var_headers = NULL;

    Py_XDECREF( var_url );
    var_url = NULL;

    Py_XDECREF( var_original_parsed );
    var_original_parsed = NULL;

    Py_XDECREF( var_redirect_parsed );
    var_redirect_parsed = NULL;

    Py_XDECREF( var_new_auth );
    var_new_auth = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_5_rebuild_auth );
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


static PyObject *impl_requests$sessions$$$function_6_rebuild_proxies( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_prepared_request = python_pars[ 1 ];
    PyObject *par_proxies = python_pars[ 2 ];
    PyObject *var_headers = NULL;
    PyObject *var_url = NULL;
    PyObject *var_scheme = NULL;
    PyObject *var_new_proxies = NULL;
    PyObject *var_no_proxy = NULL;
    PyObject *var_bypass_proxy = NULL;
    PyObject *var_environ_proxies = NULL;
    PyObject *var_proxy = NULL;
    PyObject *var_username = NULL;
    PyObject *var_password = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
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
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
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
    int tmp_cmp_In_1;
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
    PyObject *tmp_delsubscr_subscript_1;
    PyObject *tmp_delsubscr_target_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    int tmp_exc_match_exception_match_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_operand_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9b0a444774ff7b7c95271951e4f94cac = NULL;

    struct Nuitka_FrameObject *frame_9b0a444774ff7b7c95271951e4f94cac;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9b0a444774ff7b7c95271951e4f94cac, codeobj_9b0a444774ff7b7c95271951e4f94cac, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9b0a444774ff7b7c95271951e4f94cac = cache_frame_9b0a444774ff7b7c95271951e4f94cac;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9b0a444774ff7b7c95271951e4f94cac );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9b0a444774ff7b7c95271951e4f94cac ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_proxies;

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
    tmp_assign_source_1 = par_proxies;

    if ( tmp_assign_source_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_assign_source_1 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_1 = PyDict_New();
    condexpr_end_1:;
    {
        PyObject *old = par_proxies;
        par_proxies = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_source_name_1 = par_prepared_request;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prepared_request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 264;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_headers );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_headers == NULL );
    var_headers = tmp_assign_source_2;

    tmp_source_name_2 = par_prepared_request;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prepared_request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 265;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_url );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 265;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_url == NULL );
    var_url = tmp_assign_source_3;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urlparse );

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

        exception_lineno = 266;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = var_url;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_9b0a444774ff7b7c95271951e4f94cac->m_frame.f_lineno = 266;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_scheme );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_scheme == NULL );
    var_scheme = tmp_assign_source_4;

    tmp_called_instance_1 = par_proxies;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 267;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_9b0a444774ff7b7c95271951e4f94cac->m_frame.f_lineno = 267;
    tmp_assign_source_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 267;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_new_proxies == NULL );
    var_new_proxies = tmp_assign_source_5;

    tmp_called_instance_2 = par_proxies;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 268;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_9b0a444774ff7b7c95271951e4f94cac->m_frame.f_lineno = 268;
    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_no_proxy_tuple, 0 ) );

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_no_proxy == NULL );
    var_no_proxy = tmp_assign_source_6;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_should_bypass_proxies );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_should_bypass_proxies );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "should_bypass_proxies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 270;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_url;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 270;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_no_proxy;
    tmp_dict_value_1 = var_no_proxy;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_9b0a444774ff7b7c95271951e4f94cac->m_frame.f_lineno = 270;
    tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 270;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_bypass_proxy == NULL );
    var_bypass_proxy = tmp_assign_source_7;

    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 271;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_trust_env );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 271;
        type_description_1 = "ooooooooooooo";
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
    tmp_operand_name_1 = var_bypass_proxy;

    if ( tmp_operand_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bypass_proxy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 271;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "ooooooooooooo";
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

        exception_lineno = 271;
        type_description_1 = "ooooooooooooo";
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
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_get_environ_proxies );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_environ_proxies );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_environ_proxies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 272;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_url;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 272;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_key_2 = const_str_plain_no_proxy;
    tmp_dict_value_2 = var_no_proxy;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "no_proxy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 272;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_9b0a444774ff7b7c95271951e4f94cac->m_frame.f_lineno = 272;
    tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_environ_proxies == NULL );
    var_environ_proxies = tmp_assign_source_8;

    tmp_source_name_5 = var_environ_proxies;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_get );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_scheme;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scheme" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 274;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_3 = var_environ_proxies;

    if ( tmp_called_instance_3 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "environ_proxies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 274;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_9b0a444774ff7b7c95271951e4f94cac->m_frame.f_lineno = 274;
    tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_all_tuple, 0 ) );

    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 274;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_9b0a444774ff7b7c95271951e4f94cac->m_frame.f_lineno = 274;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_proxy == NULL );
    var_proxy = tmp_assign_source_9;

    tmp_cond_value_2 = var_proxy;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        type_description_1 = "ooooooooooooo";
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
    tmp_source_name_6 = var_new_proxies;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_proxies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_setdefault );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_scheme;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scheme" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = var_proxy;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_9b0a444774ff7b7c95271951e4f94cac->m_frame.f_lineno = 277;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    branch_no_1:;
    tmp_compare_left_2 = const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
    tmp_compare_right_2 = var_headers;

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 279;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_delsubscr_target_1 = var_headers;

    if ( tmp_delsubscr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 280;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_delsubscr_subscript_1 = const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    // Tried code:
    // Tried code:
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_get_auth_from_url );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_auth_from_url );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_auth_from_url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 283;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }

    tmp_subscribed_name_1 = var_new_proxies;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_proxies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 283;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }

    tmp_subscript_name_1 = var_scheme;

    if ( tmp_subscript_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scheme" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 283;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }

    tmp_args_element_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    frame_9b0a444774ff7b7c95271951e4f94cac->m_frame.f_lineno = 283;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_10;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


        type_description_1 = "ooooooooooooo";
        exception_lineno = 283;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_11;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_12 == NULL )
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


        type_description_1 = "ooooooooooooo";
        exception_lineno = 283;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_12;

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

                type_description_1 = "ooooooooooooo";
                exception_lineno = 283;
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

        type_description_1 = "ooooooooooooo";
        exception_lineno = 283;
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

    tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_13 );
    assert( var_username == NULL );
    Py_INCREF( tmp_assign_source_13 );
    var_username = tmp_assign_source_13;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_14 );
    assert( var_password == NULL );
    Py_INCREF( tmp_assign_source_14 );
    var_password = tmp_assign_source_14;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_9b0a444774ff7b7c95271951e4f94cac, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_9b0a444774ff7b7c95271951e4f94cac, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_KeyError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_5;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_iter_arg_2 = const_tuple_none_none_tuple;
    tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_2 );
    assert( tmp_assign_source_15 != NULL );
    assert( tmp_tuple_unpack_2__source_iter == NULL );
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_15;

    // Tried code:
    // Tried code:
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
    if ( tmp_assign_source_16 == NULL )
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


        type_description_1 = "ooooooooooooo";
        exception_lineno = 285;
        goto try_except_handler_7;
    }
    assert( tmp_tuple_unpack_2__element_1 == NULL );
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_16;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
    if ( tmp_assign_source_17 == NULL )
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


        type_description_1 = "ooooooooooooo";
        exception_lineno = 285;
        goto try_except_handler_7;
    }
    assert( tmp_tuple_unpack_2__element_2 == NULL );
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_17;

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

                type_description_1 = "ooooooooooooo";
                exception_lineno = 285;
                goto try_except_handler_7;
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

        type_description_1 = "ooooooooooooo";
        exception_lineno = 285;
        goto try_except_handler_7;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_6;
    // End of try:
    try_end_4:;
    goto try_end_5;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_5;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_18 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_18 );
    assert( var_username == NULL );
    Py_INCREF( tmp_assign_source_18 );
    var_username = tmp_assign_source_18;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_19 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_19 );
    assert( var_password == NULL );
    Py_INCREF( tmp_assign_source_19 );
    var_password = tmp_assign_source_19;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 282;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9b0a444774ff7b7c95271951e4f94cac->m_frame) frame_9b0a444774ff7b7c95271951e4f94cac->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
    branch_end_4:;
    goto try_end_6;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_6_rebuild_proxies );
    return NULL;
    // End of try:
    try_end_3:;
    tmp_and_left_value_2 = var_username;

    if ( tmp_and_left_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 287;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        type_description_1 = "ooooooooooooo";
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
    tmp_and_right_value_2 = var_password;

    if ( tmp_and_right_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 287;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_3 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_cond_value_3 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain__basic_auth_str );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__basic_auth_str );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_basic_auth_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 288;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = var_username;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 288;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = var_password;

    if ( tmp_args_element_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 288;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_9b0a444774ff7b7c95271951e4f94cac->m_frame.f_lineno = 288;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = var_headers;

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 288;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    tmp_return_value = var_new_proxies;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_proxies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 290;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_9b0a444774ff7b7c95271951e4f94cac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_9b0a444774ff7b7c95271951e4f94cac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_9b0a444774ff7b7c95271951e4f94cac );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9b0a444774ff7b7c95271951e4f94cac, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9b0a444774ff7b7c95271951e4f94cac->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9b0a444774ff7b7c95271951e4f94cac, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9b0a444774ff7b7c95271951e4f94cac,
        type_description_1,
        par_self,
        par_prepared_request,
        par_proxies,
        var_headers,
        var_url,
        var_scheme,
        var_new_proxies,
        var_no_proxy,
        var_bypass_proxy,
        var_environ_proxies,
        var_proxy,
        var_username,
        var_password
    );


    // Release cached frame.
    if ( frame_9b0a444774ff7b7c95271951e4f94cac == cache_frame_9b0a444774ff7b7c95271951e4f94cac )
    {
        Py_DECREF( frame_9b0a444774ff7b7c95271951e4f94cac );
    }
    cache_frame_9b0a444774ff7b7c95271951e4f94cac = NULL;

    assertFrameObject( frame_9b0a444774ff7b7c95271951e4f94cac );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_6_rebuild_proxies );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_prepared_request );
    par_prepared_request = NULL;

    Py_XDECREF( par_proxies );
    par_proxies = NULL;

    Py_XDECREF( var_headers );
    var_headers = NULL;

    Py_XDECREF( var_url );
    var_url = NULL;

    Py_XDECREF( var_scheme );
    var_scheme = NULL;

    Py_XDECREF( var_new_proxies );
    var_new_proxies = NULL;

    Py_XDECREF( var_no_proxy );
    var_no_proxy = NULL;

    Py_XDECREF( var_bypass_proxy );
    var_bypass_proxy = NULL;

    Py_XDECREF( var_environ_proxies );
    var_environ_proxies = NULL;

    Py_XDECREF( var_proxy );
    var_proxy = NULL;

    Py_XDECREF( var_username );
    var_username = NULL;

    Py_XDECREF( var_password );
    var_password = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_prepared_request );
    par_prepared_request = NULL;

    Py_XDECREF( par_proxies );
    par_proxies = NULL;

    Py_XDECREF( var_headers );
    var_headers = NULL;

    Py_XDECREF( var_url );
    var_url = NULL;

    Py_XDECREF( var_scheme );
    var_scheme = NULL;

    Py_XDECREF( var_new_proxies );
    var_new_proxies = NULL;

    Py_XDECREF( var_no_proxy );
    var_no_proxy = NULL;

    Py_XDECREF( var_bypass_proxy );
    var_bypass_proxy = NULL;

    Py_XDECREF( var_environ_proxies );
    var_environ_proxies = NULL;

    Py_XDECREF( var_proxy );
    var_proxy = NULL;

    Py_XDECREF( var_username );
    var_username = NULL;

    Py_XDECREF( var_password );
    var_password = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_6_rebuild_proxies );
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


static PyObject *impl_requests$sessions$$$function_7_rebuild_method( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_prepared_request = python_pars[ 1 ];
    PyObject *par_response = python_pars[ 2 ];
    PyObject *var_method = NULL;
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
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    static struct Nuitka_FrameObject *cache_frame_1bf85da4b935e876136e3a6f95ed72b3 = NULL;

    struct Nuitka_FrameObject *frame_1bf85da4b935e876136e3a6f95ed72b3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1bf85da4b935e876136e3a6f95ed72b3, codeobj_1bf85da4b935e876136e3a6f95ed72b3, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1bf85da4b935e876136e3a6f95ed72b3 = cache_frame_1bf85da4b935e876136e3a6f95ed72b3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1bf85da4b935e876136e3a6f95ed72b3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1bf85da4b935e876136e3a6f95ed72b3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_prepared_request;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_method );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_method == NULL );
    var_method = tmp_assign_source_1;

    tmp_source_name_2 = par_response;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 299;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_status_code );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_codes );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codes );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "codes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 299;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_see_other );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 299;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 299;
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
    tmp_compexpr_left_2 = var_method;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 299;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = const_str_plain_HEAD;
    tmp_and_right_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        type_description_1 = "oooo";
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
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 299;
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
    tmp_assign_source_2 = const_str_plain_GET;
    {
        PyObject *old = var_method;
        var_method = tmp_assign_source_2;
        Py_INCREF( var_method );
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_source_name_4 = par_response;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 304;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_status_code );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_codes );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codes );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "codes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 304;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_found );
    if ( tmp_compexpr_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_3 );

        exception_lineno = 304;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    Py_DECREF( tmp_compexpr_right_3 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 304;
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
    tmp_compexpr_left_4 = var_method;

    if ( tmp_compexpr_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 304;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_4 = const_str_plain_HEAD;
    tmp_and_right_value_2 = RICH_COMPARE_NE( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
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
    tmp_assign_source_3 = const_str_plain_GET;
    {
        PyObject *old = var_method;
        var_method = tmp_assign_source_3;
        Py_INCREF( var_method );
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_source_name_6 = par_response;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 309;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_status_code );
    if ( tmp_compexpr_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_codes );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_codes );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "codes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 309;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_moved );
    if ( tmp_compexpr_right_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_5 );

        exception_lineno = 309;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_3 = RICH_COMPARE_EQ( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    Py_DECREF( tmp_compexpr_left_5 );
    Py_DECREF( tmp_compexpr_right_5 );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_3 );

        exception_lineno = 309;
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
    tmp_compexpr_left_6 = var_method;

    if ( tmp_compexpr_left_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 309;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_6 = const_str_plain_POST;
    tmp_and_right_value_3 = RICH_COMPARE_EQ( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_cond_value_3 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 309;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_4 = const_str_plain_GET;
    {
        PyObject *old = var_method;
        var_method = tmp_assign_source_4;
        Py_INCREF( var_method );
        Py_XDECREF( old );
    }

    branch_no_3:;
    tmp_assattr_name_1 = var_method;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 312;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_prepared_request;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prepared_request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 312;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_method, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1bf85da4b935e876136e3a6f95ed72b3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1bf85da4b935e876136e3a6f95ed72b3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1bf85da4b935e876136e3a6f95ed72b3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1bf85da4b935e876136e3a6f95ed72b3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1bf85da4b935e876136e3a6f95ed72b3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1bf85da4b935e876136e3a6f95ed72b3,
        type_description_1,
        par_self,
        par_prepared_request,
        par_response,
        var_method
    );


    // Release cached frame.
    if ( frame_1bf85da4b935e876136e3a6f95ed72b3 == cache_frame_1bf85da4b935e876136e3a6f95ed72b3 )
    {
        Py_DECREF( frame_1bf85da4b935e876136e3a6f95ed72b3 );
    }
    cache_frame_1bf85da4b935e876136e3a6f95ed72b3 = NULL;

    assertFrameObject( frame_1bf85da4b935e876136e3a6f95ed72b3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_7_rebuild_method );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_prepared_request );
    par_prepared_request = NULL;

    Py_XDECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_method );
    var_method = NULL;

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

    Py_XDECREF( par_prepared_request );
    par_prepared_request = NULL;

    Py_XDECREF( par_response );
    par_response = NULL;

    Py_XDECREF( var_method );
    var_method = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_7_rebuild_method );
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


static PyObject *impl_requests$sessions$$$function_8___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e14613643a73aa5be8f777675b5978f5 = NULL;

    struct Nuitka_FrameObject *frame_e14613643a73aa5be8f777675b5978f5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e14613643a73aa5be8f777675b5978f5, codeobj_e14613643a73aa5be8f777675b5978f5, module_requests$sessions, sizeof(void *) );
    frame_e14613643a73aa5be8f777675b5978f5 = cache_frame_e14613643a73aa5be8f777675b5978f5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e14613643a73aa5be8f777675b5978f5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e14613643a73aa5be8f777675b5978f5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_default_headers );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_default_headers );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "default_headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 345;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_e14613643a73aa5be8f777675b5978f5->m_frame.f_lineno = 345;
    tmp_assattr_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;
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

        exception_lineno = 345;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_headers, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 345;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_assattr_name_2 = Py_None;
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 349;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_auth, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = PyDict_New();
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

        exception_lineno = 354;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_proxies, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 354;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_default_hooks );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_default_hooks );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "default_hooks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 357;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_e14613643a73aa5be8f777675b5978f5->m_frame.f_lineno = 357;
    tmp_assattr_name_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        type_description_1 = "o";
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

        exception_lineno = 357;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_hooks, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 357;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    tmp_assattr_name_5 = PyDict_New();
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

        exception_lineno = 362;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_params, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 362;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    tmp_assattr_name_6 = Py_False;
    tmp_assattr_target_6 = par_self;

    if ( tmp_assattr_target_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 365;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_stream, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 365;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_7 = Py_True;
    tmp_assattr_target_7 = par_self;

    if ( tmp_assattr_target_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 368;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_verify, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_8 = Py_None;
    tmp_assattr_target_8 = par_self;

    if ( tmp_assattr_target_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 372;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_cert, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_9 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_DEFAULT_REDIRECT_LIMIT );

    if (unlikely( tmp_assattr_name_9 == NULL ))
    {
        tmp_assattr_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_REDIRECT_LIMIT );
    }

    if ( tmp_assattr_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEFAULT_REDIRECT_LIMIT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 378;
        type_description_1 = "o";
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

        exception_lineno = 378;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_max_redirects, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_10 = Py_True;
    tmp_assattr_target_10 = par_self;

    if ( tmp_assattr_target_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 382;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_trust_env, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_cookiejar_from_dict );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cookiejar_from_dict );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cookiejar_from_dict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 388;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = PyDict_New();
    frame_e14613643a73aa5be8f777675b5978f5->m_frame.f_lineno = 388;
    {
        PyObject *call_args[] = { tmp_call_arg_element_1 };
        tmp_assattr_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assattr_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_11 = par_self;

    if ( tmp_assattr_target_11 == NULL )
    {
        Py_DECREF( tmp_assattr_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 388;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_cookies, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_11 );

        exception_lineno = 388;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_11 );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_OrderedDict );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OrderedDict );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OrderedDict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 391;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_e14613643a73aa5be8f777675b5978f5->m_frame.f_lineno = 391;
    tmp_assattr_name_12 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    if ( tmp_assattr_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_12 = par_self;

    if ( tmp_assattr_target_12 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 391;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_adapters, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_12 );

        exception_lineno = 391;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_12 );
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 392;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mount );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 392;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_504b77692b694460b8c25198a52c83ba;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_HTTPAdapter );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPAdapter );
    }

    if ( tmp_called_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPAdapter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 392;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_e14613643a73aa5be8f777675b5978f5->m_frame.f_lineno = 392;
    tmp_args_element_name_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 392;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_e14613643a73aa5be8f777675b5978f5->m_frame.f_lineno = 392;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 392;
        type_description_1 = "o";
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

        exception_lineno = 393;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_mount );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_str_digest_7c06a402579f6f9d9db7f3e04da983fc;
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_HTTPAdapter );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPAdapter );
    }

    if ( tmp_called_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPAdapter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 393;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_e14613643a73aa5be8f777675b5978f5->m_frame.f_lineno = 393;
    tmp_args_element_name_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 393;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_e14613643a73aa5be8f777675b5978f5->m_frame.f_lineno = 393;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e14613643a73aa5be8f777675b5978f5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e14613643a73aa5be8f777675b5978f5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e14613643a73aa5be8f777675b5978f5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e14613643a73aa5be8f777675b5978f5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e14613643a73aa5be8f777675b5978f5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e14613643a73aa5be8f777675b5978f5,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_e14613643a73aa5be8f777675b5978f5 == cache_frame_e14613643a73aa5be8f777675b5978f5 )
    {
        Py_DECREF( frame_e14613643a73aa5be8f777675b5978f5 );
    }
    cache_frame_e14613643a73aa5be8f777675b5978f5 = NULL;

    assertFrameObject( frame_e14613643a73aa5be8f777675b5978f5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_8___init__ );
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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_8___init__ );
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


static PyObject *impl_requests$sessions$$$function_9___enter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_9___enter__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_9___enter__ );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_requests$sessions$$$function_10___exit__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
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
    static struct Nuitka_FrameObject *cache_frame_3dbc53feff077017138221ab86d6a11b = NULL;

    struct Nuitka_FrameObject *frame_3dbc53feff077017138221ab86d6a11b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3dbc53feff077017138221ab86d6a11b, codeobj_3dbc53feff077017138221ab86d6a11b, module_requests$sessions, sizeof(void *)+sizeof(void *) );
    frame_3dbc53feff077017138221ab86d6a11b = cache_frame_3dbc53feff077017138221ab86d6a11b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3dbc53feff077017138221ab86d6a11b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3dbc53feff077017138221ab86d6a11b ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_3dbc53feff077017138221ab86d6a11b->m_frame.f_lineno = 399;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3dbc53feff077017138221ab86d6a11b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3dbc53feff077017138221ab86d6a11b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3dbc53feff077017138221ab86d6a11b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3dbc53feff077017138221ab86d6a11b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3dbc53feff077017138221ab86d6a11b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3dbc53feff077017138221ab86d6a11b,
        type_description_1,
        par_self,
        par_args
    );


    // Release cached frame.
    if ( frame_3dbc53feff077017138221ab86d6a11b == cache_frame_3dbc53feff077017138221ab86d6a11b )
    {
        Py_DECREF( frame_3dbc53feff077017138221ab86d6a11b );
    }
    cache_frame_3dbc53feff077017138221ab86d6a11b = NULL;

    assertFrameObject( frame_3dbc53feff077017138221ab86d6a11b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_10___exit__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_10___exit__ );
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


static PyObject *impl_requests$sessions$$$function_11_prepare_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *var_cookies = NULL;
    PyObject *var_merged_cookies = NULL;
    PyObject *var_auth = NULL;
    PyObject *var_p = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_instance_1;
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
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
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
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
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_28fa292ab1a9e00710b21730e9b74453 = NULL;

    struct Nuitka_FrameObject *frame_28fa292ab1a9e00710b21730e9b74453;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_28fa292ab1a9e00710b21730e9b74453, codeobj_28fa292ab1a9e00710b21730e9b74453, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_28fa292ab1a9e00710b21730e9b74453 = cache_frame_28fa292ab1a9e00710b21730e9b74453;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_28fa292ab1a9e00710b21730e9b74453 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_28fa292ab1a9e00710b21730e9b74453 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_request;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_or_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_cookies );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 411;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 411;
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
    tmp_or_right_value_1 = PyDict_New();
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_cookies == NULL );
    var_cookies = tmp_assign_source_1;

    tmp_isinstance_inst_1 = var_cookies;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_cookielib );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cookielib );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cookielib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 414;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_CookieJar );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 414;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 414;
        type_description_1 = "oooooo";
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_cookiejar_from_dict );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cookiejar_from_dict );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cookiejar_from_dict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 415;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = var_cookies;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cookies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 415;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_28fa292ab1a9e00710b21730e9b74453->m_frame.f_lineno = 415;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 415;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_cookies;
        var_cookies = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_cookies );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_cookies );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "merge_cookies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 418;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_cookies );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_cookies );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "merge_cookies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 419;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestsCookieJar" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 419;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_28fa292ab1a9e00710b21730e9b74453->m_frame.f_lineno = 419;
    tmp_args_element_name_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 419;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 419;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_cookies );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 419;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_28fa292ab1a9e00710b21730e9b74453->m_frame.f_lineno = 419;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 419;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = var_cookies;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cookies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 419;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_28fa292ab1a9e00710b21730e9b74453->m_frame.f_lineno = 418;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_5 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 418;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_merged_cookies == NULL );
    var_merged_cookies = tmp_assign_source_3;

    tmp_source_name_4 = par_request;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 422;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_auth );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 422;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_auth == NULL );
    var_auth = tmp_assign_source_4;

    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 423;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_trust_env );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 423;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 423;
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
    tmp_operand_name_1 = var_auth;

    if ( tmp_operand_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "auth" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 423;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 423;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 423;
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
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 423;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_auth );
    if ( tmp_operand_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 423;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    Py_DECREF( tmp_operand_name_2 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 423;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_and_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
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

        exception_lineno = 423;
        type_description_1 = "oooooo";
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
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_get_netrc_auth );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_netrc_auth );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_netrc_auth" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 424;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = par_request;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 424;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_url );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 424;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_28fa292ab1a9e00710b21730e9b74453->m_frame.f_lineno = 424;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 424;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_auth;
        var_auth = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_PreparedRequest );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PreparedRequest );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PreparedRequest" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 426;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_28fa292ab1a9e00710b21730e9b74453->m_frame.f_lineno = 426;
    tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 426;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_p == NULL );
    var_p = tmp_assign_source_6;

    tmp_source_name_8 = var_p;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_prepare );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 427;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 10 );
    tmp_dict_key_1 = const_str_plain_method;
    tmp_source_name_9 = par_request;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 428;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_method );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 428;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_28fa292ab1a9e00710b21730e9b74453->m_frame.f_lineno = 428;
    tmp_dict_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_upper );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 428;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_url;
    tmp_source_name_10 = par_request;

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 429;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_url );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 429;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_files;
    tmp_source_name_11 = par_request;

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 430;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_files );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 430;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_data;
    tmp_source_name_12 = par_request;

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 431;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_data );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 431;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_json;
    tmp_source_name_13 = par_request;

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 432;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_json );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 432;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_headers;
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_setting );
    }

    if ( tmp_called_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "merge_setting" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 433;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_source_name_14 = par_request;

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 433;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_headers );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 433;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_source_name_15 = par_self;

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 433;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_headers );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 433;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_key_7 = const_str_plain_dict_class;
    tmp_dict_value_7 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_CaseInsensitiveDict );

    if (unlikely( tmp_dict_value_7 == NULL ))
    {
        tmp_dict_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CaseInsensitiveDict );
    }

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CaseInsensitiveDict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 433;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    frame_28fa292ab1a9e00710b21730e9b74453->m_frame.f_lineno = 433;
    tmp_dict_value_6 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_1, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 433;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_8 = const_str_plain_params;
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_setting );
    }

    if ( tmp_called_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "merge_setting" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 434;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_16 = par_request;

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 434;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_params );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 434;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_17 = par_self;

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_args_element_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 434;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_params );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 434;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_28fa292ab1a9e00710b21730e9b74453->m_frame.f_lineno = 434;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_dict_value_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_dict_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 434;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_8, tmp_dict_value_8 );
    Py_DECREF( tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_9 = const_str_plain_auth;
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_setting );
    }

    if ( tmp_called_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "merge_setting" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 435;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = var_auth;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "auth" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 435;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_18 = par_self;

    if ( tmp_source_name_18 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 435;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_auth );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 435;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_28fa292ab1a9e00710b21730e9b74453->m_frame.f_lineno = 435;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_dict_value_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_dict_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 435;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_9, tmp_dict_value_9 );
    Py_DECREF( tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_10 = const_str_plain_cookies;
    tmp_dict_value_10 = var_merged_cookies;

    if ( tmp_dict_value_10 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "merged_cookies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 436;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_11 = const_str_plain_hooks;
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_hooks );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_hooks );
    }

    if ( tmp_called_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "merge_hooks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 437;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_19 = par_request;

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 437;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_hooks );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 437;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_20 = par_self;

    if ( tmp_source_name_20 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_args_element_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 437;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_hooks );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 437;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_28fa292ab1a9e00710b21730e9b74453->m_frame.f_lineno = 437;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_dict_value_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_dict_value_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 437;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_11, tmp_dict_value_11 );
    Py_DECREF( tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    frame_28fa292ab1a9e00710b21730e9b74453->m_frame.f_lineno = 427;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_7, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 427;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = var_p;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 439;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_28fa292ab1a9e00710b21730e9b74453 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_28fa292ab1a9e00710b21730e9b74453 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_28fa292ab1a9e00710b21730e9b74453 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_28fa292ab1a9e00710b21730e9b74453, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_28fa292ab1a9e00710b21730e9b74453->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_28fa292ab1a9e00710b21730e9b74453, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_28fa292ab1a9e00710b21730e9b74453,
        type_description_1,
        par_self,
        par_request,
        var_cookies,
        var_merged_cookies,
        var_auth,
        var_p
    );


    // Release cached frame.
    if ( frame_28fa292ab1a9e00710b21730e9b74453 == cache_frame_28fa292ab1a9e00710b21730e9b74453 )
    {
        Py_DECREF( frame_28fa292ab1a9e00710b21730e9b74453 );
    }
    cache_frame_28fa292ab1a9e00710b21730e9b74453 = NULL;

    assertFrameObject( frame_28fa292ab1a9e00710b21730e9b74453 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_11_prepare_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( var_cookies );
    var_cookies = NULL;

    Py_XDECREF( var_merged_cookies );
    var_merged_cookies = NULL;

    Py_XDECREF( var_auth );
    var_auth = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

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

    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( var_cookies );
    var_cookies = NULL;

    Py_XDECREF( var_merged_cookies );
    var_merged_cookies = NULL;

    Py_XDECREF( var_auth );
    var_auth = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_11_prepare_request );
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


static PyObject *impl_requests$sessions$$$function_12_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_params = python_pars[ 3 ];
    PyObject *par_data = python_pars[ 4 ];
    PyObject *par_headers = python_pars[ 5 ];
    PyObject *par_cookies = python_pars[ 6 ];
    PyObject *par_files = python_pars[ 7 ];
    PyObject *par_auth = python_pars[ 8 ];
    PyObject *par_timeout = python_pars[ 9 ];
    PyObject *par_allow_redirects = python_pars[ 10 ];
    PyObject *par_proxies = python_pars[ 11 ];
    PyObject *par_hooks = python_pars[ 12 ];
    PyObject *par_stream = python_pars[ 13 ];
    PyObject *par_verify = python_pars[ 14 ];
    PyObject *par_cert = python_pars[ 15 ];
    PyObject *par_json = python_pars[ 16 ];
    PyObject *var_req = NULL;
    PyObject *var_prep = NULL;
    PyObject *var_settings = NULL;
    PyObject *var_send_kwargs = NULL;
    PyObject *var_resp = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
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
    PyObject *tmp_dict_key_12;
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
    PyObject *tmp_dict_value_12;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_kw_name_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    int tmp_or_left_truth_3;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_left_value_3;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_or_right_value_3;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e3339ef434efd1f766d7c3ce27f40568 = NULL;

    struct Nuitka_FrameObject *frame_e3339ef434efd1f766d7c3ce27f40568;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e3339ef434efd1f766d7c3ce27f40568, codeobj_e3339ef434efd1f766d7c3ce27f40568, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e3339ef434efd1f766d7c3ce27f40568 = cache_frame_e3339ef434efd1f766d7c3ce27f40568;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e3339ef434efd1f766d7c3ce27f40568 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e3339ef434efd1f766d7c3ce27f40568 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_Request );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Request );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 482;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 10 );
    tmp_dict_key_1 = const_str_plain_method;
    tmp_called_instance_1 = par_method;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_e3339ef434efd1f766d7c3ce27f40568->m_frame.f_lineno = 483;
    tmp_dict_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_upper );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 483;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_url;
    tmp_dict_value_2 = par_url;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 484;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_headers;
    tmp_dict_value_3 = par_headers;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 485;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_files;
    tmp_dict_value_4 = par_files;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "files" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 486;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_data;
    tmp_or_left_value_1 = par_data;

    if ( tmp_or_left_value_1 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 487;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 487;
        type_description_1 = "oooooooooooooooooooooo";
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
    tmp_dict_value_5 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_dict_value_5 = tmp_or_left_value_1;
    or_end_1:;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_json;
    tmp_dict_value_6 = par_json;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "json" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 488;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_7 = const_str_plain_params;
    tmp_or_left_value_2 = par_params;

    if ( tmp_or_left_value_2 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 489;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 489;
        type_description_1 = "oooooooooooooooooooooo";
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
    tmp_or_right_value_2 = PyDict_New();
    tmp_dict_value_7 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    Py_INCREF( tmp_or_left_value_2 );
    tmp_dict_value_7 = tmp_or_left_value_2;
    or_end_2:;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_8 = const_str_plain_auth;
    tmp_dict_value_8 = par_auth;

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "auth" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 490;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_9 = const_str_plain_cookies;
    tmp_dict_value_9 = par_cookies;

    if ( tmp_dict_value_9 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cookies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 491;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_10 = const_str_plain_hooks;
    tmp_dict_value_10 = par_hooks;

    if ( tmp_dict_value_10 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hooks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 492;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    frame_e3339ef434efd1f766d7c3ce27f40568->m_frame.f_lineno = 482;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 482;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_req == NULL );
    var_req = tmp_assign_source_1;

    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 494;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_prepare_request );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 494;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_req;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "req" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 494;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_e3339ef434efd1f766d7c3ce27f40568->m_frame.f_lineno = 494;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 494;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_prep == NULL );
    var_prep = tmp_assign_source_2;

    tmp_or_left_value_3 = par_proxies;

    if ( tmp_or_left_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 496;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
    if ( tmp_or_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 496;
        type_description_1 = "oooooooooooooooooooooo";
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
    tmp_or_right_value_3 = PyDict_New();
    tmp_assign_source_3 = tmp_or_right_value_3;
    goto or_end_3;
    or_left_3:;
    Py_INCREF( tmp_or_left_value_3 );
    tmp_assign_source_3 = tmp_or_left_value_3;
    or_end_3:;
    {
        PyObject *old = par_proxies;
        par_proxies = tmp_assign_source_3;
        Py_XDECREF( old );
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

        exception_lineno = 498;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_merge_environment_settings );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 498;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = var_prep;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prep" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 499;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_url );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 499;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_proxies;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 499;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_stream;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stream" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 499;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_verify;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "verify" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 499;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_cert;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 499;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_e3339ef434efd1f766d7c3ce27f40568->m_frame.f_lineno = 498;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 498;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_settings == NULL );
    var_settings = tmp_assign_source_4;

    tmp_assign_source_5 = _PyDict_NewPresized( 2 );
    tmp_dict_key_11 = const_str_plain_timeout;
    tmp_dict_value_11 = par_timeout;

    if ( tmp_dict_value_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 504;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_11, tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_12 = const_str_plain_allow_redirects;
    tmp_dict_value_12 = par_allow_redirects;

    if ( tmp_dict_value_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allow_redirects" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 505;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_12, tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    assert( var_send_kwargs == NULL );
    var_send_kwargs = tmp_assign_source_5;

    tmp_source_name_4 = var_send_kwargs;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_update );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 507;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = var_settings;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 507;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_e3339ef434efd1f766d7c3ce27f40568->m_frame.f_lineno = 507;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 507;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 508;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_send );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 508;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_prep;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prep" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 508;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = var_send_kwargs;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "send_kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 508;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_assign_source_6 = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 508;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_resp == NULL );
    var_resp = tmp_assign_source_6;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_e3339ef434efd1f766d7c3ce27f40568 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e3339ef434efd1f766d7c3ce27f40568 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e3339ef434efd1f766d7c3ce27f40568, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e3339ef434efd1f766d7c3ce27f40568->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e3339ef434efd1f766d7c3ce27f40568, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e3339ef434efd1f766d7c3ce27f40568,
        type_description_1,
        par_self,
        par_method,
        par_url,
        par_params,
        par_data,
        par_headers,
        par_cookies,
        par_files,
        par_auth,
        par_timeout,
        par_allow_redirects,
        par_proxies,
        par_hooks,
        par_stream,
        par_verify,
        par_cert,
        par_json,
        var_req,
        var_prep,
        var_settings,
        var_send_kwargs,
        var_resp
    );


    // Release cached frame.
    if ( frame_e3339ef434efd1f766d7c3ce27f40568 == cache_frame_e3339ef434efd1f766d7c3ce27f40568 )
    {
        Py_DECREF( frame_e3339ef434efd1f766d7c3ce27f40568 );
    }
    cache_frame_e3339ef434efd1f766d7c3ce27f40568 = NULL;

    assertFrameObject( frame_e3339ef434efd1f766d7c3ce27f40568 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_resp;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_12_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_params );
    par_params = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( par_cookies );
    par_cookies = NULL;

    Py_XDECREF( par_files );
    par_files = NULL;

    Py_XDECREF( par_auth );
    par_auth = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

    Py_XDECREF( par_allow_redirects );
    par_allow_redirects = NULL;

    Py_XDECREF( par_proxies );
    par_proxies = NULL;

    Py_XDECREF( par_hooks );
    par_hooks = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_verify );
    par_verify = NULL;

    Py_XDECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( par_json );
    par_json = NULL;

    Py_XDECREF( var_req );
    var_req = NULL;

    Py_XDECREF( var_prep );
    var_prep = NULL;

    Py_XDECREF( var_settings );
    var_settings = NULL;

    Py_XDECREF( var_send_kwargs );
    var_send_kwargs = NULL;

    Py_XDECREF( var_resp );
    var_resp = NULL;

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

    Py_XDECREF( par_params );
    par_params = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( par_cookies );
    par_cookies = NULL;

    Py_XDECREF( par_files );
    par_files = NULL;

    Py_XDECREF( par_auth );
    par_auth = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

    Py_XDECREF( par_allow_redirects );
    par_allow_redirects = NULL;

    Py_XDECREF( par_proxies );
    par_proxies = NULL;

    Py_XDECREF( par_hooks );
    par_hooks = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_verify );
    par_verify = NULL;

    Py_XDECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( par_json );
    par_json = NULL;

    Py_XDECREF( var_req );
    var_req = NULL;

    Py_XDECREF( var_prep );
    var_prep = NULL;

    Py_XDECREF( var_settings );
    var_settings = NULL;

    Py_XDECREF( var_send_kwargs );
    var_send_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_12_request );
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


static PyObject *impl_requests$sessions$$$function_13_get( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3c14a69fee2fcdf1a747ddcdea93f4dc = NULL;

    struct Nuitka_FrameObject *frame_3c14a69fee2fcdf1a747ddcdea93f4dc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3c14a69fee2fcdf1a747ddcdea93f4dc, codeobj_3c14a69fee2fcdf1a747ddcdea93f4dc, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3c14a69fee2fcdf1a747ddcdea93f4dc = cache_frame_3c14a69fee2fcdf1a747ddcdea93f4dc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3c14a69fee2fcdf1a747ddcdea93f4dc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3c14a69fee2fcdf1a747ddcdea93f4dc ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_3c14a69fee2fcdf1a747ddcdea93f4dc->m_frame.f_lineno = 520;
    tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_setdefault, &PyTuple_GET_ITEM( const_tuple_str_plain_allow_redirects_true_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 520;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 521;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 521;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_GET;
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

        exception_lineno = 521;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
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

        exception_lineno = 521;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 521;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3c14a69fee2fcdf1a747ddcdea93f4dc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3c14a69fee2fcdf1a747ddcdea93f4dc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3c14a69fee2fcdf1a747ddcdea93f4dc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3c14a69fee2fcdf1a747ddcdea93f4dc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3c14a69fee2fcdf1a747ddcdea93f4dc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3c14a69fee2fcdf1a747ddcdea93f4dc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3c14a69fee2fcdf1a747ddcdea93f4dc,
        type_description_1,
        par_self,
        par_url,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_3c14a69fee2fcdf1a747ddcdea93f4dc == cache_frame_3c14a69fee2fcdf1a747ddcdea93f4dc )
    {
        Py_DECREF( frame_3c14a69fee2fcdf1a747ddcdea93f4dc );
    }
    cache_frame_3c14a69fee2fcdf1a747ddcdea93f4dc = NULL;

    assertFrameObject( frame_3c14a69fee2fcdf1a747ddcdea93f4dc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_13_get );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

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

    Py_XDECREF( par_url );
    par_url = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_13_get );
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


static PyObject *impl_requests$sessions$$$function_14_options( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_40281ea47d3fd30fa36545ce1db1089f = NULL;

    struct Nuitka_FrameObject *frame_40281ea47d3fd30fa36545ce1db1089f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_40281ea47d3fd30fa36545ce1db1089f, codeobj_40281ea47d3fd30fa36545ce1db1089f, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_40281ea47d3fd30fa36545ce1db1089f = cache_frame_40281ea47d3fd30fa36545ce1db1089f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_40281ea47d3fd30fa36545ce1db1089f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_40281ea47d3fd30fa36545ce1db1089f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_40281ea47d3fd30fa36545ce1db1089f->m_frame.f_lineno = 531;
    tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_setdefault, &PyTuple_GET_ITEM( const_tuple_str_plain_allow_redirects_true_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 531;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 532;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 532;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_OPTIONS;
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

        exception_lineno = 532;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
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

        exception_lineno = 532;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 532;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_40281ea47d3fd30fa36545ce1db1089f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_40281ea47d3fd30fa36545ce1db1089f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_40281ea47d3fd30fa36545ce1db1089f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_40281ea47d3fd30fa36545ce1db1089f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_40281ea47d3fd30fa36545ce1db1089f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_40281ea47d3fd30fa36545ce1db1089f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_40281ea47d3fd30fa36545ce1db1089f,
        type_description_1,
        par_self,
        par_url,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_40281ea47d3fd30fa36545ce1db1089f == cache_frame_40281ea47d3fd30fa36545ce1db1089f )
    {
        Py_DECREF( frame_40281ea47d3fd30fa36545ce1db1089f );
    }
    cache_frame_40281ea47d3fd30fa36545ce1db1089f = NULL;

    assertFrameObject( frame_40281ea47d3fd30fa36545ce1db1089f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_14_options );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

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

    Py_XDECREF( par_url );
    par_url = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_14_options );
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


static PyObject *impl_requests$sessions$$$function_15_head( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c51066680f63a91b6971b64f2dc5d9aa = NULL;

    struct Nuitka_FrameObject *frame_c51066680f63a91b6971b64f2dc5d9aa;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c51066680f63a91b6971b64f2dc5d9aa, codeobj_c51066680f63a91b6971b64f2dc5d9aa, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c51066680f63a91b6971b64f2dc5d9aa = cache_frame_c51066680f63a91b6971b64f2dc5d9aa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c51066680f63a91b6971b64f2dc5d9aa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c51066680f63a91b6971b64f2dc5d9aa ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_c51066680f63a91b6971b64f2dc5d9aa->m_frame.f_lineno = 542;
    tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_setdefault, &PyTuple_GET_ITEM( const_tuple_str_plain_allow_redirects_false_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 542;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 543;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 543;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_HEAD;
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

        exception_lineno = 543;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
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

        exception_lineno = 543;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 543;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c51066680f63a91b6971b64f2dc5d9aa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c51066680f63a91b6971b64f2dc5d9aa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c51066680f63a91b6971b64f2dc5d9aa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c51066680f63a91b6971b64f2dc5d9aa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c51066680f63a91b6971b64f2dc5d9aa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c51066680f63a91b6971b64f2dc5d9aa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c51066680f63a91b6971b64f2dc5d9aa,
        type_description_1,
        par_self,
        par_url,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_c51066680f63a91b6971b64f2dc5d9aa == cache_frame_c51066680f63a91b6971b64f2dc5d9aa )
    {
        Py_DECREF( frame_c51066680f63a91b6971b64f2dc5d9aa );
    }
    cache_frame_c51066680f63a91b6971b64f2dc5d9aa = NULL;

    assertFrameObject( frame_c51066680f63a91b6971b64f2dc5d9aa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_15_head );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

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

    Py_XDECREF( par_url );
    par_url = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_15_head );
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


static PyObject *impl_requests$sessions$$$function_16_post( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_data = python_pars[ 2 ];
    PyObject *par_json = python_pars[ 3 ];
    PyObject *par_kwargs = python_pars[ 4 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_d3621c95c850666f6f82e857bfe621b5 = NULL;

    struct Nuitka_FrameObject *frame_d3621c95c850666f6f82e857bfe621b5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d3621c95c850666f6f82e857bfe621b5, codeobj_d3621c95c850666f6f82e857bfe621b5, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d3621c95c850666f6f82e857bfe621b5 = cache_frame_d3621c95c850666f6f82e857bfe621b5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d3621c95c850666f6f82e857bfe621b5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d3621c95c850666f6f82e857bfe621b5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 555;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_POST;
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

        exception_lineno = 555;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
    tmp_dict_key_1 = const_str_plain_data;
    tmp_dict_value_1 = par_data;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 555;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_json;
    tmp_dict_value_2 = par_json;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "json" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 555;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = par_kwargs;

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 555;
        type_description_1 = "ooooo";
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


        exception_lineno = 555;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3621c95c850666f6f82e857bfe621b5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3621c95c850666f6f82e857bfe621b5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3621c95c850666f6f82e857bfe621b5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d3621c95c850666f6f82e857bfe621b5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d3621c95c850666f6f82e857bfe621b5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d3621c95c850666f6f82e857bfe621b5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d3621c95c850666f6f82e857bfe621b5,
        type_description_1,
        par_self,
        par_url,
        par_data,
        par_json,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_d3621c95c850666f6f82e857bfe621b5 == cache_frame_d3621c95c850666f6f82e857bfe621b5 )
    {
        Py_DECREF( frame_d3621c95c850666f6f82e857bfe621b5 );
    }
    cache_frame_d3621c95c850666f6f82e857bfe621b5 = NULL;

    assertFrameObject( frame_d3621c95c850666f6f82e857bfe621b5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_16_post );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_json );
    par_json = NULL;

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

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_json );
    par_json = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_16_post );
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


static PyObject *impl_requests$sessions$$$function_17_put( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_data = python_pars[ 2 ];
    PyObject *par_kwargs = python_pars[ 3 ];
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
    PyObject *tmp_dircall_arg4_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_bb0a7504040268bd6396414d620d0d5a = NULL;

    struct Nuitka_FrameObject *frame_bb0a7504040268bd6396414d620d0d5a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bb0a7504040268bd6396414d620d0d5a, codeobj_bb0a7504040268bd6396414d620d0d5a, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bb0a7504040268bd6396414d620d0d5a = cache_frame_bb0a7504040268bd6396414d620d0d5a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bb0a7504040268bd6396414d620d0d5a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bb0a7504040268bd6396414d620d0d5a ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 566;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_PUT;
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

        exception_lineno = 566;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_data;
    tmp_dict_value_1 = par_data;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 566;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = par_kwargs;

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 566;
        type_description_1 = "oooo";
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


        exception_lineno = 566;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bb0a7504040268bd6396414d620d0d5a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bb0a7504040268bd6396414d620d0d5a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bb0a7504040268bd6396414d620d0d5a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bb0a7504040268bd6396414d620d0d5a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bb0a7504040268bd6396414d620d0d5a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bb0a7504040268bd6396414d620d0d5a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bb0a7504040268bd6396414d620d0d5a,
        type_description_1,
        par_self,
        par_url,
        par_data,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_bb0a7504040268bd6396414d620d0d5a == cache_frame_bb0a7504040268bd6396414d620d0d5a )
    {
        Py_DECREF( frame_bb0a7504040268bd6396414d620d0d5a );
    }
    cache_frame_bb0a7504040268bd6396414d620d0d5a = NULL;

    assertFrameObject( frame_bb0a7504040268bd6396414d620d0d5a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_17_put );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

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

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_17_put );
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


static PyObject *impl_requests$sessions$$$function_18_patch( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_data = python_pars[ 2 ];
    PyObject *par_kwargs = python_pars[ 3 ];
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
    PyObject *tmp_dircall_arg4_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_736c65a889c37cf86e656450ecdb9cb3 = NULL;

    struct Nuitka_FrameObject *frame_736c65a889c37cf86e656450ecdb9cb3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_736c65a889c37cf86e656450ecdb9cb3, codeobj_736c65a889c37cf86e656450ecdb9cb3, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_736c65a889c37cf86e656450ecdb9cb3 = cache_frame_736c65a889c37cf86e656450ecdb9cb3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_736c65a889c37cf86e656450ecdb9cb3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_736c65a889c37cf86e656450ecdb9cb3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 577;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_PATCH;
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

        exception_lineno = 577;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_data;
    tmp_dict_value_1 = par_data;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 577;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = par_kwargs;

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 577;
        type_description_1 = "oooo";
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


        exception_lineno = 577;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_736c65a889c37cf86e656450ecdb9cb3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_736c65a889c37cf86e656450ecdb9cb3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_736c65a889c37cf86e656450ecdb9cb3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_736c65a889c37cf86e656450ecdb9cb3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_736c65a889c37cf86e656450ecdb9cb3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_736c65a889c37cf86e656450ecdb9cb3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_736c65a889c37cf86e656450ecdb9cb3,
        type_description_1,
        par_self,
        par_url,
        par_data,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_736c65a889c37cf86e656450ecdb9cb3 == cache_frame_736c65a889c37cf86e656450ecdb9cb3 )
    {
        Py_DECREF( frame_736c65a889c37cf86e656450ecdb9cb3 );
    }
    cache_frame_736c65a889c37cf86e656450ecdb9cb3 = NULL;

    assertFrameObject( frame_736c65a889c37cf86e656450ecdb9cb3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_18_patch );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

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

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_18_patch );
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


static PyObject *impl_requests$sessions$$$function_19_delete( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_7311397e377d527f02c01978c68e3c16 = NULL;

    struct Nuitka_FrameObject *frame_7311397e377d527f02c01978c68e3c16;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7311397e377d527f02c01978c68e3c16, codeobj_7311397e377d527f02c01978c68e3c16, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7311397e377d527f02c01978c68e3c16 = cache_frame_7311397e377d527f02c01978c68e3c16;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7311397e377d527f02c01978c68e3c16 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7311397e377d527f02c01978c68e3c16 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 587;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_DELETE;
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

        exception_lineno = 587;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
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

        exception_lineno = 587;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 587;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7311397e377d527f02c01978c68e3c16 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7311397e377d527f02c01978c68e3c16 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7311397e377d527f02c01978c68e3c16 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7311397e377d527f02c01978c68e3c16, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7311397e377d527f02c01978c68e3c16->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7311397e377d527f02c01978c68e3c16, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7311397e377d527f02c01978c68e3c16,
        type_description_1,
        par_self,
        par_url,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_7311397e377d527f02c01978c68e3c16 == cache_frame_7311397e377d527f02c01978c68e3c16 )
    {
        Py_DECREF( frame_7311397e377d527f02c01978c68e3c16 );
    }
    cache_frame_7311397e377d527f02c01978c68e3c16 = NULL;

    assertFrameObject( frame_7311397e377d527f02c01978c68e3c16 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_19_delete );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

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

    Py_XDECREF( par_url );
    par_url = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_19_delete );
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


static PyObject *impl_requests$sessions$$$function_20_send( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_allow_redirects = NULL;
    PyObject *var_stream = NULL;
    PyObject *var_hooks = NULL;
    PyObject *var_adapter = NULL;
    PyObject *var_start = NULL;
    PyObject *var_r = NULL;
    PyObject *var_elapsed = NULL;
    PyObject *var_resp = NULL;
    PyObject *var_gen = NULL;
    PyObject *var_history = NULL;
    PyObject *outline_0_var_resp = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcontraction_1__$0 = NULL;
    PyObject *tmp_listcontraction_1__contraction = NULL;
    PyObject *tmp_listcontraction_1__iter_value_0 = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
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
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg1_3;
    PyObject *tmp_dircall_arg1_4;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg2_3;
    PyObject *tmp_dircall_arg2_4;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg3_2;
    PyObject *tmp_dircall_arg3_3;
    PyObject *tmp_dircall_arg3_4;
    PyObject *tmp_dircall_arg4_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_outline_return_value_1;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_df8cdb1ceaf201e469160008bfd07a2d_2 = NULL;

    struct Nuitka_FrameObject *frame_df8cdb1ceaf201e469160008bfd07a2d_2;

    static struct Nuitka_FrameObject *cache_frame_0ed0d954af937e35bc1df0ac60d22690 = NULL;

    struct Nuitka_FrameObject *frame_0ed0d954af937e35bc1df0ac60d22690;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0ed0d954af937e35bc1df0ac60d22690, codeobj_0ed0d954af937e35bc1df0ac60d22690, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0ed0d954af937e35bc1df0ac60d22690 = cache_frame_0ed0d954af937e35bc1df0ac60d22690;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0ed0d954af937e35bc1df0ac60d22690 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0ed0d954af937e35bc1df0ac60d22690 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_kwargs;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_setdefault );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 596;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_plain_stream;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 596;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_stream );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 596;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_0ed0d954af937e35bc1df0ac60d22690->m_frame.f_lineno = 596;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 596;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = par_kwargs;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 597;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_setdefault );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 597;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_str_plain_verify;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 597;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_verify );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 597;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_0ed0d954af937e35bc1df0ac60d22690->m_frame.f_lineno = 597;
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


        exception_lineno = 597;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = par_kwargs;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 598;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_setdefault );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 598;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = const_str_plain_cert;
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 598;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_cert );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 598;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_0ed0d954af937e35bc1df0ac60d22690->m_frame.f_lineno = 598;
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


        exception_lineno = 598;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_7 = par_kwargs;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 599;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_setdefault );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 599;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = const_str_plain_proxies;
    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 599;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_proxies );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 599;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_0ed0d954af937e35bc1df0ac60d22690->m_frame.f_lineno = 599;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 599;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_isinstance_inst_1 = par_request;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 603;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_Request );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Request );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 603;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 603;
        type_description_1 = "ooooooooooooo";
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
    tmp_make_exception_arg_1 = const_str_digest_8ae4830b7ee99e05bb48d2cc82ed2d03;
    frame_0ed0d954af937e35bc1df0ac60d22690->m_frame.f_lineno = 604;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 604;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_instance_1 = par_kwargs;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 607;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_0ed0d954af937e35bc1df0ac60d22690->m_frame.f_lineno = 607;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_allow_redirects_true_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 607;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_allow_redirects == NULL );
    var_allow_redirects = tmp_assign_source_1;

    tmp_called_instance_2 = par_kwargs;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 608;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_0ed0d954af937e35bc1df0ac60d22690->m_frame.f_lineno = 608;
    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_stream_tuple, 0 ) );

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 608;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_stream == NULL );
    var_stream = tmp_assign_source_2;

    tmp_source_name_9 = par_request;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 609;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_hooks );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 609;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_hooks == NULL );
    var_hooks = tmp_assign_source_3;

    tmp_source_name_10 = par_self;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 612;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_get_adapter );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 612;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_url;
    tmp_source_name_11 = par_request;

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 612;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_url );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 612;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_0ed0d954af937e35bc1df0ac60d22690->m_frame.f_lineno = 612;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 612;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_adapter == NULL );
    var_adapter = tmp_assign_source_4;

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_preferred_clock );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_preferred_clock );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "preferred_clock" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 615;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_0ed0d954af937e35bc1df0ac60d22690->m_frame.f_lineno = 615;
    tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 615;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_start == NULL );
    var_start = tmp_assign_source_5;

    tmp_source_name_12 = var_adapter;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "adapter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 618;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_send );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 618;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_request;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 618;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
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

        exception_lineno = 618;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_assign_source_6 = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 618;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_r == NULL );
    var_r = tmp_assign_source_6;

    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_preferred_clock );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_preferred_clock );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "preferred_clock" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 621;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_0ed0d954af937e35bc1df0ac60d22690->m_frame.f_lineno = 621;
    tmp_left_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_7 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 621;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = var_start;

    if ( tmp_right_name_1 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 621;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_7 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 621;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_elapsed == NULL );
    var_elapsed = tmp_assign_source_7;

    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_timedelta );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timedelta );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timedelta" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 622;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_key_2 = const_str_plain_seconds;
    tmp_dict_value_2 = var_elapsed;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_0ed0d954af937e35bc1df0ac60d22690->m_frame.f_lineno = 622;
    tmp_assattr_name_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_8, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 622;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = var_r;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 622;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_elapsed, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 622;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_dispatch_hook );

    if (unlikely( tmp_dircall_arg1_2 == NULL ))
    {
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dispatch_hook );
    }

    if ( tmp_dircall_arg1_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dispatch_hook" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 625;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_2 = PyTuple_New( 3 );
    tmp_tuple_element_2 = const_str_plain_response;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_hooks;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hooks" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 625;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_r;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 625;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 2, tmp_tuple_element_2 );
    tmp_dircall_arg3_2 = par_kwargs;

    if ( tmp_dircall_arg3_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 625;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_2 );
    Py_INCREF( tmp_dircall_arg3_2 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
        tmp_assign_source_8 = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 625;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_r;
        var_r = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_source_name_13 = var_r;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_history );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 628;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 628;
        type_description_1 = "ooooooooooooo";
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
    tmp_source_name_14 = var_r;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 631;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_history );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 631;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 631;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_9;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_10 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooo";
            exception_lineno = 631;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_assign_source_11 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_11 );
    {
        PyObject *old = var_resp;
        var_resp = tmp_assign_source_11;
        Py_INCREF( var_resp );
        Py_XDECREF( old );
    }

    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "extract_cookies_to_jar" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 632;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_15 = par_self;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 632;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_cookies );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 632;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_16 = var_resp;

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_args_element_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 632;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_request );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_9 );

        exception_lineno = 632;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_17 = var_resp;

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_args_element_name_9 );
        Py_DECREF( tmp_args_element_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 632;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_raw );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_9 );
        Py_DECREF( tmp_args_element_name_10 );

        exception_lineno = 632;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    frame_0ed0d954af937e35bc1df0ac60d22690->m_frame.f_lineno = 632;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    Py_DECREF( tmp_args_element_name_10 );
    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 632;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 631;
        type_description_1 = "ooooooooooooo";
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

    branch_no_2:;
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "extract_cookies_to_jar" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 634;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_18 = par_self;

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 634;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_cookies );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 634;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_13 = par_request;

    if ( tmp_args_element_name_13 == NULL )
    {
        Py_DECREF( tmp_args_element_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 634;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_19 = var_r;

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_args_element_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 634;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_raw );
    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_12 );

        exception_lineno = 634;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_0ed0d954af937e35bc1df0ac60d22690->m_frame.f_lineno = 634;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_12 );
    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 634;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_20 = par_self;

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 637;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_3 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_resolve_redirects );
    if ( tmp_dircall_arg1_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 637;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_3 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_r;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_3 );
        Py_DECREF( tmp_dircall_arg2_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 637;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = par_request;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_3 );
        Py_DECREF( tmp_dircall_arg2_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 637;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 1, tmp_tuple_element_3 );
    tmp_dircall_arg3_3 = par_kwargs;

    if ( tmp_dircall_arg3_3 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_3 );
        Py_DECREF( tmp_dircall_arg2_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 637;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg3_3 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3};
        tmp_assign_source_12 = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 637;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_gen == NULL );
    var_gen = tmp_assign_source_12;

    tmp_cond_value_2 = var_allow_redirects;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allow_redirects" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 640;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 640;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    // Tried code:
    tmp_iter_arg_2 = var_gen;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 640;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    assert( tmp_listcontraction_1__$0 == NULL );
    tmp_listcontraction_1__$0 = tmp_assign_source_14;

    tmp_assign_source_15 = PyList_New( 0 );
    assert( tmp_listcontraction_1__contraction == NULL );
    tmp_listcontraction_1__contraction = tmp_assign_source_15;

    MAKE_OR_REUSE_FRAME( cache_frame_df8cdb1ceaf201e469160008bfd07a2d_2, codeobj_df8cdb1ceaf201e469160008bfd07a2d, module_requests$sessions, sizeof(void *)+sizeof(void *) );
    frame_df8cdb1ceaf201e469160008bfd07a2d_2 = cache_frame_df8cdb1ceaf201e469160008bfd07a2d_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_df8cdb1ceaf201e469160008bfd07a2d_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_df8cdb1ceaf201e469160008bfd07a2d_2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_listcontraction_1__$0;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_16 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_2 = "oo";
            exception_lineno = 640;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_listcontraction_1__iter_value_0;
        tmp_listcontraction_1__iter_value_0 = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    tmp_assign_source_17 = tmp_listcontraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_17 );
    {
        PyObject *old = outline_0_var_resp;
        outline_0_var_resp = tmp_assign_source_17;
        Py_INCREF( outline_0_var_resp );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_append_value_1 = outline_0_var_resp;

    CHECK_OBJECT( tmp_append_value_1 );
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 640;
        type_description_2 = "oo";
        goto try_except_handler_4;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 640;
        type_description_2 = "oo";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_20_send );
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    Py_XDECREF( tmp_listcontraction_1__$0 );
    tmp_listcontraction_1__$0 = NULL;

    Py_XDECREF( tmp_listcontraction_1__contraction );
    tmp_listcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_1__iter_value_0 );
    tmp_listcontraction_1__iter_value_0 = NULL;

    goto frame_return_exit_2;
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

    Py_XDECREF( tmp_listcontraction_1__$0 );
    tmp_listcontraction_1__$0 = NULL;

    Py_XDECREF( tmp_listcontraction_1__contraction );
    tmp_listcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_1__iter_value_0 );
    tmp_listcontraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_df8cdb1ceaf201e469160008bfd07a2d_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_df8cdb1ceaf201e469160008bfd07a2d_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_3;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_df8cdb1ceaf201e469160008bfd07a2d_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_df8cdb1ceaf201e469160008bfd07a2d_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_df8cdb1ceaf201e469160008bfd07a2d_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_df8cdb1ceaf201e469160008bfd07a2d_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_df8cdb1ceaf201e469160008bfd07a2d_2,
        type_description_2,
        outline_0_var_resp,
        var_gen
    );


    // Release cached frame.
    if ( frame_df8cdb1ceaf201e469160008bfd07a2d_2 == cache_frame_df8cdb1ceaf201e469160008bfd07a2d_2 )
    {
        Py_DECREF( frame_df8cdb1ceaf201e469160008bfd07a2d_2 );
    }
    cache_frame_df8cdb1ceaf201e469160008bfd07a2d_2 = NULL;

    assertFrameObject( frame_df8cdb1ceaf201e469160008bfd07a2d_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_20_send );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    Py_XDECREF( outline_0_var_resp );
    outline_0_var_resp = NULL;

    goto outline_result_1;
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

    Py_XDECREF( outline_0_var_resp );
    outline_0_var_resp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_20_send );
    return NULL;
    outline_exception_1:;
    exception_lineno = 640;
    goto frame_exception_exit_1;
    outline_result_1:;
    tmp_assign_source_13 = tmp_outline_return_value_1;
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_13 = PyList_New( 0 );
    condexpr_end_1:;
    assert( var_history == NULL );
    var_history = tmp_assign_source_13;

    tmp_cond_value_3 = var_history;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 643;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_21 = var_history;

    CHECK_OBJECT( tmp_source_name_21 );
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_insert );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 645;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_15 = const_int_0;
    tmp_args_element_name_16 = var_r;

    if ( tmp_args_element_name_16 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 645;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_0ed0d954af937e35bc1df0ac60d22690->m_frame.f_lineno = 645;
    {
        PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 645;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_3 = var_history;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "history" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 647;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_0ed0d954af937e35bc1df0ac60d22690->m_frame.f_lineno = 647;
    tmp_assign_source_18 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_pop );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 647;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_r;
        var_r = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    tmp_assattr_name_2 = var_history;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "history" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 648;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = var_r;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_history, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 648;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    tmp_cond_value_4 = var_allow_redirects;

    if ( tmp_cond_value_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allow_redirects" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 651;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 651;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    // Tried code:
    tmp_source_name_22 = par_self;

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 653;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_5;
    }

    tmp_dircall_arg1_4 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_resolve_redirects );
    if ( tmp_dircall_arg1_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 653;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_5;
    }
    tmp_dircall_arg2_4 = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_r;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_4 );
        Py_DECREF( tmp_dircall_arg2_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 653;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_5;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_4, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = par_request;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_4 );
        Py_DECREF( tmp_dircall_arg2_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 653;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_5;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_4, 1, tmp_tuple_element_4 );
    tmp_dircall_arg3_4 = PyDict_Copy( const_dict_5a980a96e502e21a57174819267c7344 );
    tmp_dircall_arg4_1 = par_kwargs;

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_4 );
        Py_DECREF( tmp_dircall_arg2_4 );
        Py_DECREF( tmp_dircall_arg3_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 653;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_5;
    }

    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_4, tmp_dircall_arg2_4, tmp_dircall_arg3_4, tmp_dircall_arg4_1};
        tmp_value_name_1 = impl___internal__$$$function_4_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_value_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 653;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_5;
    }
    tmp_assattr_name_3 = ITERATOR_NEXT( tmp_value_name_1 );
    Py_DECREF( tmp_value_name_1 );
    if ( tmp_assattr_name_3 == NULL )
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


        type_description_1 = "ooooooooooooo";
        exception_lineno = 653;
        goto try_except_handler_5;
    }
    tmp_assattr_target_3 = var_r;

    if ( tmp_assattr_target_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 653;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_5;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__next, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 653;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_assattr_name_3 );
    goto try_end_2;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_4 == NULL )
    {
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_0ed0d954af937e35bc1df0ac60d22690, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != 0 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_0ed0d954af937e35bc1df0ac60d22690, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PyException_SetTraceback( exception_keeper_value_4, (PyObject *)exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 654;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_6;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_5;
    }
    else
    {
        goto branch_yes_5;
    }
    branch_yes_5:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 652;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0ed0d954af937e35bc1df0ac60d22690->m_frame) frame_0ed0d954af937e35bc1df0ac60d22690->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
    branch_no_5:;
    goto try_end_3;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_20_send );
    return NULL;
    // End of try:
    try_end_2:;
    branch_no_4:;
    tmp_cond_value_5 = var_stream;

    if ( tmp_cond_value_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stream" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 657;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 657;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_no_6;
    }
    else
    {
        goto branch_yes_6;
    }
    branch_yes_6:;
    tmp_source_name_23 = var_r;

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 658;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_unused = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_content );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 658;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    tmp_return_value = var_r;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 660;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_0ed0d954af937e35bc1df0ac60d22690 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_0ed0d954af937e35bc1df0ac60d22690 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_0ed0d954af937e35bc1df0ac60d22690 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0ed0d954af937e35bc1df0ac60d22690, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0ed0d954af937e35bc1df0ac60d22690->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0ed0d954af937e35bc1df0ac60d22690, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0ed0d954af937e35bc1df0ac60d22690,
        type_description_1,
        par_self,
        par_request,
        par_kwargs,
        var_allow_redirects,
        var_stream,
        var_hooks,
        var_adapter,
        var_start,
        var_r,
        var_elapsed,
        var_resp,
        var_gen,
        var_history
    );


    // Release cached frame.
    if ( frame_0ed0d954af937e35bc1df0ac60d22690 == cache_frame_0ed0d954af937e35bc1df0ac60d22690 )
    {
        Py_DECREF( frame_0ed0d954af937e35bc1df0ac60d22690 );
    }
    cache_frame_0ed0d954af937e35bc1df0ac60d22690 = NULL;

    assertFrameObject( frame_0ed0d954af937e35bc1df0ac60d22690 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_20_send );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_allow_redirects );
    var_allow_redirects = NULL;

    Py_XDECREF( var_stream );
    var_stream = NULL;

    Py_XDECREF( var_hooks );
    var_hooks = NULL;

    Py_XDECREF( var_adapter );
    var_adapter = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_elapsed );
    var_elapsed = NULL;

    Py_XDECREF( var_resp );
    var_resp = NULL;

    Py_XDECREF( var_gen );
    var_gen = NULL;

    Py_XDECREF( var_history );
    var_history = NULL;

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

    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_allow_redirects );
    var_allow_redirects = NULL;

    Py_XDECREF( var_stream );
    var_stream = NULL;

    Py_XDECREF( var_hooks );
    var_hooks = NULL;

    Py_XDECREF( var_adapter );
    var_adapter = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_elapsed );
    var_elapsed = NULL;

    Py_XDECREF( var_resp );
    var_resp = NULL;

    Py_XDECREF( var_gen );
    var_gen = NULL;

    Py_XDECREF( var_history );
    var_history = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_20_send );
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


static PyObject *impl_requests$sessions$$$function_21_merge_environment_settings( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_proxies = python_pars[ 2 ];
    PyObject *par_stream = python_pars[ 3 ];
    PyObject *par_verify = python_pars[ 4 ];
    PyObject *par_cert = python_pars[ 5 ];
    PyObject *var_no_proxy = NULL;
    PyObject *var_env_proxies = NULL;
    PyObject *var_k = NULL;
    PyObject *var_v = NULL;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
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
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_next_source_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
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
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c5ea51f86708eb5f6972aa45a5e9d941 = NULL;

    struct Nuitka_FrameObject *frame_c5ea51f86708eb5f6972aa45a5e9d941;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c5ea51f86708eb5f6972aa45a5e9d941, codeobj_c5ea51f86708eb5f6972aa45a5e9d941, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c5ea51f86708eb5f6972aa45a5e9d941 = cache_frame_c5ea51f86708eb5f6972aa45a5e9d941;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c5ea51f86708eb5f6972aa45a5e9d941 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c5ea51f86708eb5f6972aa45a5e9d941 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_trust_env );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 669;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 669;
        type_description_1 = "oooooooooo";
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
    tmp_compare_left_1 = par_proxies;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 671;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

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
    tmp_called_instance_1 = par_proxies;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 671;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_c5ea51f86708eb5f6972aa45a5e9d941->m_frame.f_lineno = 671;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_no_proxy_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 671;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_1 = Py_None;
    Py_INCREF( tmp_assign_source_1 );
    condexpr_end_1:;
    assert( var_no_proxy == NULL );
    var_no_proxy = tmp_assign_source_1;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_get_environ_proxies );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_environ_proxies );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_environ_proxies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 672;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_url;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 672;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_no_proxy;
    tmp_dict_value_1 = var_no_proxy;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_c5ea51f86708eb5f6972aa45a5e9d941->m_frame.f_lineno = 672;
    tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 672;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_env_proxies == NULL );
    var_env_proxies = tmp_assign_source_2;

    tmp_called_instance_2 = var_env_proxies;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_c5ea51f86708eb5f6972aa45a5e9d941->m_frame.f_lineno = 673;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_items );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 673;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 673;
        type_description_1 = "oooooooooo";
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
            type_description_1 = "oooooooooo";
            exception_lineno = 673;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 673;
        type_description_1 = "oooooooooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


        type_description_1 = "oooooooooo";
        exception_lineno = 673;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


        type_description_1 = "oooooooooo";
        exception_lineno = 673;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                type_description_1 = "oooooooooo";
                exception_lineno = 673;
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

        type_description_1 = "oooooooooo";
        exception_lineno = 673;
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

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_8 );
    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_8;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_9 );
    {
        PyObject *old = var_v;
        var_v = tmp_assign_source_9;
        Py_INCREF( var_v );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_source_name_2 = par_proxies;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 674;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_setdefault );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 674;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = var_k;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "k" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 674;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = var_v;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "v" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 674;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    frame_c5ea51f86708eb5f6972aa45a5e9d941->m_frame.f_lineno = 674;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 674;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 673;
        type_description_1 = "oooooooooo";
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

    tmp_compexpr_left_1 = par_verify;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "verify" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 678;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = Py_True;
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
    tmp_compexpr_left_2 = par_verify;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "verify" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 678;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = Py_None;
    tmp_or_right_value_1 = BOOL_FROM( tmp_compexpr_left_2 == tmp_compexpr_right_2 );
    tmp_cond_value_2 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_2 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    assert( !(tmp_cond_truth_2 == -1) );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 679;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_environ );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 679;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_c5ea51f86708eb5f6972aa45a5e9d941->m_frame.f_lineno = 679;
    tmp_or_left_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_REQUESTS_CA_BUNDLE_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 679;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 680;
        type_description_1 = "oooooooooo";
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
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 680;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_environ );
    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 680;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_c5ea51f86708eb5f6972aa45a5e9d941->m_frame.f_lineno = 680;
    tmp_or_right_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_CURL_CA_BUNDLE_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_4 );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 680;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_assign_source_10 = tmp_or_left_value_2;
    or_end_2:;
    {
        PyObject *old = par_verify;
        par_verify = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    branch_no_2:;
    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_setting );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "merge_setting" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 683;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_proxies;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 683;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 683;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_proxies );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 683;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_c5ea51f86708eb5f6972aa45a5e9d941->m_frame.f_lineno = 683;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 683;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_proxies;
        par_proxies = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_setting );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "merge_setting" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 684;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_stream;

    if ( tmp_args_element_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stream" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 684;
        type_description_1 = "oooooooooo";
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

        exception_lineno = 684;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_stream );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 684;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_c5ea51f86708eb5f6972aa45a5e9d941->m_frame.f_lineno = 684;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 684;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_stream;
        par_stream = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_setting );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "merge_setting" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 685;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = par_verify;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "verify" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 685;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 685;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_verify );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 685;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_c5ea51f86708eb5f6972aa45a5e9d941->m_frame.f_lineno = 685;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 685;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_verify;
        par_verify = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_merge_setting );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "merge_setting" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 686;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = par_cert;

    if ( tmp_args_element_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 686;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 686;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_cert );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 686;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_c5ea51f86708eb5f6972aa45a5e9d941->m_frame.f_lineno = 686;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 686;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_cert;
        par_cert = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_return_value = _PyDict_NewPresized( 4 );
    tmp_dict_key_2 = const_str_plain_verify;
    tmp_dict_value_2 = par_verify;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "verify" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 688;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_proxies;
    tmp_dict_value_3 = par_proxies;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 688;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_stream;
    tmp_dict_value_4 = par_stream;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stream" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 688;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_cert;
    tmp_dict_value_5 = par_cert;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5ea51f86708eb5f6972aa45a5e9d941 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5ea51f86708eb5f6972aa45a5e9d941 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5ea51f86708eb5f6972aa45a5e9d941 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c5ea51f86708eb5f6972aa45a5e9d941, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c5ea51f86708eb5f6972aa45a5e9d941->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c5ea51f86708eb5f6972aa45a5e9d941, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c5ea51f86708eb5f6972aa45a5e9d941,
        type_description_1,
        par_self,
        par_url,
        par_proxies,
        par_stream,
        par_verify,
        par_cert,
        var_no_proxy,
        var_env_proxies,
        var_k,
        var_v
    );


    // Release cached frame.
    if ( frame_c5ea51f86708eb5f6972aa45a5e9d941 == cache_frame_c5ea51f86708eb5f6972aa45a5e9d941 )
    {
        Py_DECREF( frame_c5ea51f86708eb5f6972aa45a5e9d941 );
    }
    cache_frame_c5ea51f86708eb5f6972aa45a5e9d941 = NULL;

    assertFrameObject( frame_c5ea51f86708eb5f6972aa45a5e9d941 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_21_merge_environment_settings );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_proxies );
    par_proxies = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_verify );
    par_verify = NULL;

    Py_XDECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( var_no_proxy );
    var_no_proxy = NULL;

    Py_XDECREF( var_env_proxies );
    var_env_proxies = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

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

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_proxies );
    par_proxies = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_verify );
    par_verify = NULL;

    Py_XDECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( var_no_proxy );
    var_no_proxy = NULL;

    Py_XDECREF( var_env_proxies );
    var_env_proxies = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_21_merge_environment_settings );
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


static PyObject *impl_requests$sessions$$$function_22_get_adapter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *var_prefix = NULL;
    PyObject *var_adapter = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static struct Nuitka_FrameObject *cache_frame_88483baf205b9ee8bff13bb50e70a461 = NULL;

    struct Nuitka_FrameObject *frame_88483baf205b9ee8bff13bb50e70a461;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_88483baf205b9ee8bff13bb50e70a461, codeobj_88483baf205b9ee8bff13bb50e70a461, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_88483baf205b9ee8bff13bb50e70a461 = cache_frame_88483baf205b9ee8bff13bb50e70a461;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_88483baf205b9ee8bff13bb50e70a461 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_88483baf205b9ee8bff13bb50e70a461 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_adapters );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 697;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_88483baf205b9ee8bff13bb50e70a461->m_frame.f_lineno = 697;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 697;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 697;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            exception_lineno = 697;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 697;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_4 == NULL )
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


        type_description_1 = "oooo";
        exception_lineno = 697;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


        type_description_1 = "oooo";
        exception_lineno = 697;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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

                type_description_1 = "oooo";
                exception_lineno = 697;
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

        type_description_1 = "oooo";
        exception_lineno = 697;
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

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = var_prefix;
        var_prefix = tmp_assign_source_6;
        Py_INCREF( var_prefix );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_7 );
    {
        PyObject *old = var_adapter;
        var_adapter = tmp_assign_source_7;
        Py_INCREF( var_adapter );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_called_instance_2 = par_url;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 699;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    frame_88483baf205b9ee8bff13bb50e70a461->m_frame.f_lineno = 699;
    tmp_source_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_lower );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 699;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_startswith );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 699;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = var_prefix;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prefix" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 699;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    frame_88483baf205b9ee8bff13bb50e70a461->m_frame.f_lineno = 699;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 699;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 699;
        type_description_1 = "oooo";
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
    tmp_return_value = var_adapter;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "adapter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 700;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 697;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
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

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_InvalidSchema );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidSchema );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InvalidSchema" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 703;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_digest_0cf52c61701094af14cce92132a5b4f5;
    tmp_right_name_1 = par_url;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 703;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 703;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_88483baf205b9ee8bff13bb50e70a461->m_frame.f_lineno = 703;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 703;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 703;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_88483baf205b9ee8bff13bb50e70a461 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_88483baf205b9ee8bff13bb50e70a461 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_88483baf205b9ee8bff13bb50e70a461 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_88483baf205b9ee8bff13bb50e70a461, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_88483baf205b9ee8bff13bb50e70a461->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_88483baf205b9ee8bff13bb50e70a461, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_88483baf205b9ee8bff13bb50e70a461,
        type_description_1,
        par_self,
        par_url,
        var_prefix,
        var_adapter
    );


    // Release cached frame.
    if ( frame_88483baf205b9ee8bff13bb50e70a461 == cache_frame_88483baf205b9ee8bff13bb50e70a461 )
    {
        Py_DECREF( frame_88483baf205b9ee8bff13bb50e70a461 );
    }
    cache_frame_88483baf205b9ee8bff13bb50e70a461 = NULL;

    assertFrameObject( frame_88483baf205b9ee8bff13bb50e70a461 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_22_get_adapter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( var_prefix );
    var_prefix = NULL;

    Py_XDECREF( var_adapter );
    var_adapter = NULL;

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

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( var_prefix );
    var_prefix = NULL;

    Py_XDECREF( var_adapter );
    var_adapter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_22_get_adapter );
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


static PyObject *impl_requests$sessions$$$function_23_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_v = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_accdb9a05331e72382794a68b5889343 = NULL;

    struct Nuitka_FrameObject *frame_accdb9a05331e72382794a68b5889343;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_accdb9a05331e72382794a68b5889343, codeobj_accdb9a05331e72382794a68b5889343, module_requests$sessions, sizeof(void *)+sizeof(void *) );
    frame_accdb9a05331e72382794a68b5889343 = cache_frame_accdb9a05331e72382794a68b5889343;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_accdb9a05331e72382794a68b5889343 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_accdb9a05331e72382794a68b5889343 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_adapters );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 707;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_accdb9a05331e72382794a68b5889343->m_frame.f_lineno = 707;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_values );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 707;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 707;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            exception_lineno = 707;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_3 );
    {
        PyObject *old = var_v;
        var_v = tmp_assign_source_3;
        Py_INCREF( var_v );
        Py_XDECREF( old );
    }

    tmp_called_instance_2 = var_v;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_accdb9a05331e72382794a68b5889343->m_frame.f_lineno = 708;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 708;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 707;
        type_description_1 = "oo";
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_accdb9a05331e72382794a68b5889343 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_accdb9a05331e72382794a68b5889343 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_accdb9a05331e72382794a68b5889343, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_accdb9a05331e72382794a68b5889343->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_accdb9a05331e72382794a68b5889343, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_accdb9a05331e72382794a68b5889343,
        type_description_1,
        par_self,
        var_v
    );


    // Release cached frame.
    if ( frame_accdb9a05331e72382794a68b5889343 == cache_frame_accdb9a05331e72382794a68b5889343 )
    {
        Py_DECREF( frame_accdb9a05331e72382794a68b5889343 );
    }
    cache_frame_accdb9a05331e72382794a68b5889343 = NULL;

    assertFrameObject( frame_accdb9a05331e72382794a68b5889343 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_23_close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_23_close );
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


static PyObject *impl_requests$sessions$$$function_24_mount( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_prefix = python_pars[ 1 ];
    PyObject *par_adapter = python_pars[ 2 ];
    PyObject *var_keys_to_move = NULL;
    PyObject *var_key = NULL;
    PyObject *outline_0_var_k = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcontraction_1__$0 = NULL;
    PyObject *tmp_listcontraction_1__contraction = NULL;
    PyObject *tmp_listcontraction_1__iter_value_0 = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
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
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_called_name_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    static struct Nuitka_FrameObject *cache_frame_d7d66ad3803168e6e827c2d21da18667_2 = NULL;

    struct Nuitka_FrameObject *frame_d7d66ad3803168e6e827c2d21da18667_2;

    static struct Nuitka_FrameObject *cache_frame_f263e12dad3577785d2ba62b5f89ab58 = NULL;

    struct Nuitka_FrameObject *frame_f263e12dad3577785d2ba62b5f89ab58;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f263e12dad3577785d2ba62b5f89ab58, codeobj_f263e12dad3577785d2ba62b5f89ab58, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f263e12dad3577785d2ba62b5f89ab58 = cache_frame_f263e12dad3577785d2ba62b5f89ab58;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f263e12dad3577785d2ba62b5f89ab58 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f263e12dad3577785d2ba62b5f89ab58 ) == 2 ); // Frame stack

    // Framed code:
    tmp_ass_subvalue_1 = par_adapter;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_adapters );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 715;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = par_prefix;

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subscribed_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prefix" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 715;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 715;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    // Tried code:
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 716;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_adapters );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 716;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 716;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    assert( tmp_listcontraction_1__$0 == NULL );
    tmp_listcontraction_1__$0 = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( tmp_listcontraction_1__contraction == NULL );
    tmp_listcontraction_1__contraction = tmp_assign_source_3;

    MAKE_OR_REUSE_FRAME( cache_frame_d7d66ad3803168e6e827c2d21da18667_2, codeobj_d7d66ad3803168e6e827c2d21da18667, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d7d66ad3803168e6e827c2d21da18667_2 = cache_frame_d7d66ad3803168e6e827c2d21da18667_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d7d66ad3803168e6e827c2d21da18667_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d7d66ad3803168e6e827c2d21da18667_2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_listcontraction_1__$0;

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
            type_description_2 = "ooo";
            exception_lineno = 716;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_listcontraction_1__iter_value_0;
        tmp_listcontraction_1__iter_value_0 = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = tmp_listcontraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = outline_0_var_k;
        outline_0_var_k = tmp_assign_source_5;
        Py_INCREF( outline_0_var_k );
        Py_XDECREF( old );
    }

    tmp_len_arg_1 = outline_0_var_k;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 716;
        type_description_2 = "ooo";
        goto try_except_handler_3;
    }
    tmp_len_arg_2 = par_prefix;

    if ( tmp_len_arg_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "prefix" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 716;
        type_description_2 = "ooo";
        goto try_except_handler_3;
    }

    tmp_compare_right_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 716;
        type_description_2 = "ooo";
        goto try_except_handler_3;
    }
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 716;
        type_description_2 = "ooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_append_list_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_append_value_1 = outline_0_var_k;

    if ( tmp_append_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "k" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 716;
        type_description_2 = "ooo";
        goto try_except_handler_3;
    }

    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 716;
        type_description_2 = "ooo";
        goto try_except_handler_3;
    }
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 716;
        type_description_2 = "ooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_24_mount );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    Py_XDECREF( tmp_listcontraction_1__$0 );
    tmp_listcontraction_1__$0 = NULL;

    Py_XDECREF( tmp_listcontraction_1__contraction );
    tmp_listcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_1__iter_value_0 );
    tmp_listcontraction_1__iter_value_0 = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF( tmp_listcontraction_1__$0 );
    tmp_listcontraction_1__$0 = NULL;

    Py_XDECREF( tmp_listcontraction_1__contraction );
    tmp_listcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_1__iter_value_0 );
    tmp_listcontraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7d66ad3803168e6e827c2d21da18667_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7d66ad3803168e6e827c2d21da18667_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7d66ad3803168e6e827c2d21da18667_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d7d66ad3803168e6e827c2d21da18667_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d7d66ad3803168e6e827c2d21da18667_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d7d66ad3803168e6e827c2d21da18667_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d7d66ad3803168e6e827c2d21da18667_2,
        type_description_2,
        outline_0_var_k,
        par_self,
        par_prefix
    );


    // Release cached frame.
    if ( frame_d7d66ad3803168e6e827c2d21da18667_2 == cache_frame_d7d66ad3803168e6e827c2d21da18667_2 )
    {
        Py_DECREF( frame_d7d66ad3803168e6e827c2d21da18667_2 );
    }
    cache_frame_d7d66ad3803168e6e827c2d21da18667_2 = NULL;

    assertFrameObject( frame_d7d66ad3803168e6e827c2d21da18667_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "ooooo";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_24_mount );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_k );
    outline_0_var_k = NULL;

    goto outline_result_1;
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

    Py_XDECREF( outline_0_var_k );
    outline_0_var_k = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_24_mount );
    return NULL;
    outline_exception_1:;
    exception_lineno = 716;
    goto frame_exception_exit_1;
    outline_result_1:;
    tmp_assign_source_1 = tmp_outline_return_value_1;
    assert( var_keys_to_move == NULL );
    var_keys_to_move = tmp_assign_source_1;

    tmp_iter_arg_2 = var_keys_to_move;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 718;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_6;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_1__for_iterator;

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
            type_description_1 = "ooooo";
            exception_lineno = 718;
            goto try_except_handler_4;
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
        PyObject *old = var_key;
        var_key = tmp_assign_source_8;
        Py_INCREF( var_key );
        Py_XDECREF( old );
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

        exception_lineno = 719;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_adapters );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 719;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_pop );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 719;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
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

        exception_lineno = 719;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }

    frame_f263e12dad3577785d2ba62b5f89ab58->m_frame.f_lineno = 719;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 719;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 719;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }

    tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_adapters );
    if ( tmp_ass_subscribed_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_2 );

        exception_lineno = 719;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    tmp_ass_subscript_2 = var_key;

    if ( tmp_ass_subscript_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subscribed_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 719;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subscribed_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 719;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 718;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
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
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f263e12dad3577785d2ba62b5f89ab58 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f263e12dad3577785d2ba62b5f89ab58 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f263e12dad3577785d2ba62b5f89ab58, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f263e12dad3577785d2ba62b5f89ab58->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f263e12dad3577785d2ba62b5f89ab58, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f263e12dad3577785d2ba62b5f89ab58,
        type_description_1,
        par_self,
        par_prefix,
        par_adapter,
        var_keys_to_move,
        var_key
    );


    // Release cached frame.
    if ( frame_f263e12dad3577785d2ba62b5f89ab58 == cache_frame_f263e12dad3577785d2ba62b5f89ab58 )
    {
        Py_DECREF( frame_f263e12dad3577785d2ba62b5f89ab58 );
    }
    cache_frame_f263e12dad3577785d2ba62b5f89ab58 = NULL;

    assertFrameObject( frame_f263e12dad3577785d2ba62b5f89ab58 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_24_mount );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_prefix );
    par_prefix = NULL;

    Py_XDECREF( par_adapter );
    par_adapter = NULL;

    Py_XDECREF( var_keys_to_move );
    var_keys_to_move = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

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

    Py_XDECREF( par_prefix );
    par_prefix = NULL;

    Py_XDECREF( par_adapter );
    par_adapter = NULL;

    Py_XDECREF( var_keys_to_move );
    var_keys_to_move = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_24_mount );
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


static PyObject *impl_requests$sessions$$$function_25___getstate__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *var_state = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_dict_seq_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_2e531a1d9b261c99f28d85d8838ccada = NULL;

    struct Nuitka_FrameObject *frame_2e531a1d9b261c99f28d85d8838ccada;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2e531a1d9b261c99f28d85d8838ccada, codeobj_2e531a1d9b261c99f28d85d8838ccada, module_requests$sessions, sizeof(void *)+sizeof(void *) );
    frame_2e531a1d9b261c99f28d85d8838ccada = cache_frame_2e531a1d9b261c99f28d85d8838ccada;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2e531a1d9b261c99f28d85d8838ccada );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2e531a1d9b261c99f28d85d8838ccada ) == 2 ); // Frame stack

    // Framed code:
    if ( par_self == NULL )
    {
        tmp_source_name_1 = NULL;
    }
    else
    {
        tmp_source_name_1 = PyCell_GET( par_self );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 722;
        type_description_1 = "co";
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___attrs__ );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 722;
        type_description_1 = "co";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 722;
        type_description_1 = "co";
        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_1__$0 == NULL );
    tmp_genexpr_1__$0 = tmp_assign_source_2;

    // Tried code:
    tmp_outline_return_value_1 = Nuitka_Generator_New(
        requests$sessions$$$function_25___getstate__$$$genexpr_1_genexpr_context,
        module_requests$sessions,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_dac01d786625c94b9a42a81aff30f4e0,
#endif
        codeobj_b7eabeb24ac1b3519b40c1d8fa461fd9,
        2
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );
    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[1] = par_self;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[1] );
    assert( Py_SIZE( tmp_outline_return_value_1 ) >= 2 ); 


    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_25___getstate__ );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
    Py_DECREF( tmp_genexpr_1__$0 );
    tmp_genexpr_1__$0 = NULL;

    goto outline_result_1;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
    Py_DECREF( tmp_genexpr_1__$0 );
    tmp_genexpr_1__$0 = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_25___getstate__ );
    return NULL;
    outline_result_1:;
    tmp_dict_seq_1 = tmp_outline_return_value_1;
    tmp_assign_source_1 = TO_DICT( tmp_dict_seq_1, NULL );
    Py_DECREF( tmp_dict_seq_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 722;
        type_description_1 = "co";
        goto frame_exception_exit_1;
    }
    assert( var_state == NULL );
    var_state = tmp_assign_source_1;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e531a1d9b261c99f28d85d8838ccada );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e531a1d9b261c99f28d85d8838ccada );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2e531a1d9b261c99f28d85d8838ccada, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2e531a1d9b261c99f28d85d8838ccada->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2e531a1d9b261c99f28d85d8838ccada, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2e531a1d9b261c99f28d85d8838ccada,
        type_description_1,
        par_self,
        var_state
    );


    // Release cached frame.
    if ( frame_2e531a1d9b261c99f28d85d8838ccada == cache_frame_2e531a1d9b261c99f28d85d8838ccada )
    {
        Py_DECREF( frame_2e531a1d9b261c99f28d85d8838ccada );
    }
    cache_frame_2e531a1d9b261c99f28d85d8838ccada = NULL;

    assertFrameObject( frame_2e531a1d9b261c99f28d85d8838ccada );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_state;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_25___getstate__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_state );
    var_state = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_25___getstate__ );
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



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct requests$sessions$$$function_25___getstate__$$$genexpr_1_genexpr_locals {
    PyObject *var_attr
    PyObject *tmp_iter_value_0
    PyObject *exception_type
    PyObject *exception_value
    PyTracebackObject *exception_tb
    int exception_lineno
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_tuple_element_1;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *requests$sessions$$$function_25___getstate__$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void requests$sessions$$$function_25___getstate__$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_attr = NULL;
    PyObject *tmp_iter_value_0 = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_b7eabeb24ac1b3519b40c1d8fa461fd9, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_frame_generator;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

    generator->m_frame->m_frame.f_exc_type = thread_state->exc_type;
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = thread_state->exc_value;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = thread_state->exc_traceback;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    if ( generator->m_closure[0] == NULL )
    {
        tmp_next_source_1 = NULL;
    }
    else
    {
        tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );
    }

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "Noc";
            exception_lineno = 722;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_assign_source_2 = tmp_iter_value_0;

    CHECK_OBJECT( tmp_assign_source_2 );
    {
        PyObject *old = var_attr;
        var_attr = tmp_assign_source_2;
        Py_INCREF( var_attr );
        Py_XDECREF( old );
    }

    tmp_expression_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_attr;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_expression_name_1, 0, tmp_tuple_element_1 );
    if ( generator->m_closure[1] == NULL )
    {
        tmp_getattr_target_1 = NULL;
    }
    else
    {
        tmp_getattr_target_1 = PyCell_GET( generator->m_closure[1] );
    }

    if ( tmp_getattr_target_1 == NULL )
    {
        Py_DECREF( tmp_expression_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 722;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }

    tmp_getattr_attr_1 = var_attr;

    CHECK_OBJECT( tmp_getattr_attr_1 );
    tmp_getattr_default_1 = Py_None;
    tmp_tuple_element_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_expression_name_1 );

        exception_lineno = 722;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_expression_name_1, 1, tmp_tuple_element_1 );
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 722;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 722;
        type_description_1 = "Noc";
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

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, generator->m_frame, exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            type_description_1,
            NULL,
            var_attr,
            generator->m_closure[1]
        );


        // Release cached frame.
        if ( generator->m_frame == cache_frame_generator )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_frame_generator = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    goto try_end_2;
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

    Py_XDECREF( var_attr );
    var_attr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    Py_XDECREF( var_attr );
    var_attr = NULL;


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

}


static PyObject *impl_requests$sessions$$$function_26___setstate__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_state = python_pars[ 1 ];
    PyObject *var_attr = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_setattr_attr_1;
    PyObject *tmp_setattr_target_1;
    PyObject *tmp_setattr_value_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_cf34dfd880914595a36ee253ef5f9ca3 = NULL;

    struct Nuitka_FrameObject *frame_cf34dfd880914595a36ee253ef5f9ca3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cf34dfd880914595a36ee253ef5f9ca3, codeobj_cf34dfd880914595a36ee253ef5f9ca3, module_requests$sessions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cf34dfd880914595a36ee253ef5f9ca3 = cache_frame_cf34dfd880914595a36ee253ef5f9ca3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cf34dfd880914595a36ee253ef5f9ca3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cf34dfd880914595a36ee253ef5f9ca3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_state;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_cf34dfd880914595a36ee253ef5f9ca3->m_frame.f_lineno = 726;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 726;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 726;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            exception_lineno = 726;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 726;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_4 == NULL )
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


        type_description_1 = "oooo";
        exception_lineno = 726;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


        type_description_1 = "oooo";
        exception_lineno = 726;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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

                type_description_1 = "oooo";
                exception_lineno = 726;
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

        type_description_1 = "oooo";
        exception_lineno = 726;
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

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = var_attr;
        var_attr = tmp_assign_source_6;
        Py_INCREF( var_attr );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_7 );
    {
        PyObject *old = var_value;
        var_value = tmp_assign_source_7;
        Py_INCREF( var_value );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_setattr_target_1 = par_self;

    if ( tmp_setattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 727;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_setattr_attr_1 = var_attr;

    if ( tmp_setattr_attr_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "attr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 727;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_setattr_value_1 = var_value;

    if ( tmp_setattr_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 727;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_unused = BUILTIN_SETATTR( tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 727;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 726;
        type_description_1 = "oooo";
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf34dfd880914595a36ee253ef5f9ca3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf34dfd880914595a36ee253ef5f9ca3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cf34dfd880914595a36ee253ef5f9ca3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cf34dfd880914595a36ee253ef5f9ca3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cf34dfd880914595a36ee253ef5f9ca3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cf34dfd880914595a36ee253ef5f9ca3,
        type_description_1,
        par_self,
        par_state,
        var_attr,
        var_value
    );


    // Release cached frame.
    if ( frame_cf34dfd880914595a36ee253ef5f9ca3 == cache_frame_cf34dfd880914595a36ee253ef5f9ca3 )
    {
        Py_DECREF( frame_cf34dfd880914595a36ee253ef5f9ca3 );
    }
    cache_frame_cf34dfd880914595a36ee253ef5f9ca3 = NULL;

    assertFrameObject( frame_cf34dfd880914595a36ee253ef5f9ca3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_26___setstate__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_state );
    par_state = NULL;

    Py_XDECREF( var_attr );
    var_attr = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

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

    Py_XDECREF( par_state );
    par_state = NULL;

    Py_XDECREF( var_attr );
    var_attr = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_26___setstate__ );
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


static PyObject *impl_requests$sessions$$$function_27_session( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_e1a3b16a293c083dd6619a85be9eea96 = NULL;

    struct Nuitka_FrameObject *frame_e1a3b16a293c083dd6619a85be9eea96;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_e1a3b16a293c083dd6619a85be9eea96, codeobj_e1a3b16a293c083dd6619a85be9eea96, module_requests$sessions, 0 );
    frame_e1a3b16a293c083dd6619a85be9eea96 = cache_frame_e1a3b16a293c083dd6619a85be9eea96;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e1a3b16a293c083dd6619a85be9eea96 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e1a3b16a293c083dd6619a85be9eea96 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_Session );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Session );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Session" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 737;

        goto frame_exception_exit_1;
    }

    frame_e1a3b16a293c083dd6619a85be9eea96->m_frame.f_lineno = 737;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 737;

        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1a3b16a293c083dd6619a85be9eea96 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1a3b16a293c083dd6619a85be9eea96 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1a3b16a293c083dd6619a85be9eea96 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e1a3b16a293c083dd6619a85be9eea96, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e1a3b16a293c083dd6619a85be9eea96->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e1a3b16a293c083dd6619a85be9eea96, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e1a3b16a293c083dd6619a85be9eea96,
        type_description_1
    );


    // Release cached frame.
    if ( frame_e1a3b16a293c083dd6619a85be9eea96 == cache_frame_e1a3b16a293c083dd6619a85be9eea96 )
    {
        Py_DECREF( frame_e1a3b16a293c083dd6619a85be9eea96 );
    }
    cache_frame_e1a3b16a293c083dd6619a85be9eea96 = NULL;

    assertFrameObject( frame_e1a3b16a293c083dd6619a85be9eea96 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions$$$function_27_session );
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



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_10___exit__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_10___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 330
        const_str_digest_7905fa3cf6a1b7f0e3f1aa2a48144462,
#endif
        codeobj_3dbc53feff077017138221ab86d6a11b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_11_prepare_request(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_11_prepare_request,
        const_str_plain_prepare_request,
#if PYTHON_VERSION >= 330
        const_str_digest_e53d4a974ffbd6783b2c04e911c575f6,
#endif
        codeobj_28fa292ab1a9e00710b21730e9b74453,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_bb0c986a4d44a65e09f2da3af698fc66,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_12_request( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_12_request,
        const_str_plain_request,
#if PYTHON_VERSION >= 330
        const_str_digest_cb48bb05adb0e091eb1c115fffeb4c8a,
#endif
        codeobj_e3339ef434efd1f766d7c3ce27f40568,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_7958def53e7364fc2fff7ba47f70e8b6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_13_get(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_13_get,
        const_str_plain_get,
#if PYTHON_VERSION >= 330
        const_str_digest_33222436398dec9a5c85de068ea71100,
#endif
        codeobj_3c14a69fee2fcdf1a747ddcdea93f4dc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_28eb6d6e3c84195b87f5eda206592417,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_14_options(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_14_options,
        const_str_plain_options,
#if PYTHON_VERSION >= 330
        const_str_digest_69a73433942a43d30c3208872597fbc4,
#endif
        codeobj_40281ea47d3fd30fa36545ce1db1089f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_3773766f3922dc10926506cd67493626,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_15_head(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_15_head,
        const_str_plain_head,
#if PYTHON_VERSION >= 330
        const_str_digest_92db2e8ed71c2e367d5357b04d0462c4,
#endif
        codeobj_c51066680f63a91b6971b64f2dc5d9aa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_83a4d90de9f8b0862d918bd04dff2cc4,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_16_post( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_16_post,
        const_str_plain_post,
#if PYTHON_VERSION >= 330
        const_str_digest_df652bc3c79065c8732d0893d1f77479,
#endif
        codeobj_d3621c95c850666f6f82e857bfe621b5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_247cc702d848ae8b6a2bfe101921c67f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_17_put( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_17_put,
        const_str_plain_put,
#if PYTHON_VERSION >= 330
        const_str_digest_f7f26a899d15b0307bb1388a5bda3892,
#endif
        codeobj_bb0a7504040268bd6396414d620d0d5a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_04d355f4e958fc387ef0f67f1046b28c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_18_patch( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_18_patch,
        const_str_plain_patch,
#if PYTHON_VERSION >= 330
        const_str_digest_382a6a157ce1707d0f242d5ea1fea71c,
#endif
        codeobj_736c65a889c37cf86e656450ecdb9cb3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_75001dc77fbb691e7475fd8848494419,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_19_delete(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_19_delete,
        const_str_plain_delete,
#if PYTHON_VERSION >= 330
        const_str_digest_2326510b09c332a083755ce27f812d9d,
#endif
        codeobj_7311397e377d527f02c01978c68e3c16,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_489820f4fee1c95447c20d7aee4bc394,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_1_merge_setting( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_1_merge_setting,
        const_str_plain_merge_setting,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_137c8537bf98127cf929caff6016363a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_67055a59082a8581b7a2c86a2d1c1f83,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_20_send(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_20_send,
        const_str_plain_send,
#if PYTHON_VERSION >= 330
        const_str_digest_962cc75eef259550816f5f0e877500ef,
#endif
        codeobj_0ed0d954af937e35bc1df0ac60d22690,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_48d563b3d6be908aabde89b2dd46bb34,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_21_merge_environment_settings(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_21_merge_environment_settings,
        const_str_plain_merge_environment_settings,
#if PYTHON_VERSION >= 330
        const_str_digest_e46ea1d9ca0677a0f1ae14af39cbbfc2,
#endif
        codeobj_c5ea51f86708eb5f6972aa45a5e9d941,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_3dc3a32088712bcdf672f48f5c0bf5c5,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_22_get_adapter(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_22_get_adapter,
        const_str_plain_get_adapter,
#if PYTHON_VERSION >= 330
        const_str_digest_a1b7979c671004beb348b3acf3fa3833,
#endif
        codeobj_88483baf205b9ee8bff13bb50e70a461,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_19cf6e4b470974146c094a9eb3c6c9c0,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_23_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_23_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 330
        const_str_digest_ab50d4439ade3e74bd04aeb12b9713ae,
#endif
        codeobj_accdb9a05331e72382794a68b5889343,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_7e68f1bdd87458491c575c9c8a14f24c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_24_mount(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_24_mount,
        const_str_plain_mount,
#if PYTHON_VERSION >= 330
        const_str_digest_70e065559513e1162375c7bbb9f9de21,
#endif
        codeobj_f263e12dad3577785d2ba62b5f89ab58,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_d41fb1dddc6f7cfe3e1d581e7ccdd852,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_25___getstate__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_25___getstate__,
        const_str_plain___getstate__,
#if PYTHON_VERSION >= 330
        const_str_digest_1e854b3c946780bd62f1ad991507dc9c,
#endif
        codeobj_2e531a1d9b261c99f28d85d8838ccada,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_26___setstate__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_26___setstate__,
        const_str_plain___setstate__,
#if PYTHON_VERSION >= 330
        const_str_digest_b49e9dfe95a484cf32f4e0dcf61e3c53,
#endif
        codeobj_cf34dfd880914595a36ee253ef5f9ca3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_27_session(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_27_session,
        const_str_plain_session,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e1a3b16a293c083dd6619a85be9eea96,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_a2bd5503741425b00dbffd7aa6b079f3,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_2_merge_hooks( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_2_merge_hooks,
        const_str_plain_merge_hooks,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fd4b7653e0288ef2edb5235c7193d2c8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_0334ac5a65e948ab1a00ac2f5cfe75c1,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_3_get_redirect_target(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_3_get_redirect_target,
        const_str_plain_get_redirect_target,
#if PYTHON_VERSION >= 330
        const_str_digest_0850b94f6eea1bda1db9b25ee4381193,
#endif
        codeobj_2505b37575ccd10606b65d1a23743d5c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_0da4ca7e1d267b7753ceb4b2770531dd,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_4_resolve_redirects( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_4_resolve_redirects,
        const_str_plain_resolve_redirects,
#if PYTHON_VERSION >= 330
        const_str_digest_f2636f029da6046e540b6721c0c69c64,
#endif
        codeobj_c8a5727fbc9485f31e8cd821c02a78d7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_83853292c48098773b03eae760dcfe38,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_5_rebuild_auth(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_5_rebuild_auth,
        const_str_plain_rebuild_auth,
#if PYTHON_VERSION >= 330
        const_str_digest_0bca56866bcf0b75f74d31c9da00963c,
#endif
        codeobj_0721f1546bec673c1b47623ae9a5d2ec,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_1c229bac7f81999111a1bfbc0984644e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_6_rebuild_proxies(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_6_rebuild_proxies,
        const_str_plain_rebuild_proxies,
#if PYTHON_VERSION >= 330
        const_str_digest_dfcd0fe2f27ce725c44199fb8c6f7973,
#endif
        codeobj_9b0a444774ff7b7c95271951e4f94cac,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_131435ff30698deac2d874478938fdd4,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_7_rebuild_method(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_7_rebuild_method,
        const_str_plain_rebuild_method,
#if PYTHON_VERSION >= 330
        const_str_digest_8f1f8a6d2be18d195ed7df0d436d212e,
#endif
        codeobj_1bf85da4b935e876136e3a6f95ed72b3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        const_str_digest_8b3e93dde92996b29edc87dca601bdd4,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_8___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_fa3b2211e965dde050b87ae23cfb152f,
#endif
        codeobj_e14613643a73aa5be8f777675b5978f5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$sessions$$$function_9___enter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$sessions$$$function_9___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 330
        const_str_digest_e811a9baa0ffd56d1b59860a4fbec4dc,
#endif
        codeobj_82b7c004272d14ec9bf6cc24bb482aff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_requests$sessions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$sessions =
{
    PyModuleDef_HEAD_INIT,
    "requests.sessions",   /* m_name */
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

MOD_INIT_DECL( requests$sessions )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$sessions );
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
    puts("requests.sessions: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.sessions: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrequests$sessions" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$sessions = Py_InitModule4(
        "requests.sessions",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_requests$sessions = PyModule_Create( &mdef_requests$sessions );
#endif

    moduledict_requests$sessions = MODULE_DICT( module_requests$sessions );

    CHECK_OBJECT( module_requests$sessions );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_147a008155143b0e10b18dcd3be84fb5, module_requests$sessions );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var_get_redirect_target = NULL;
    PyObject *outline_0_var_resolve_redirects = NULL;
    PyObject *outline_0_var_rebuild_auth = NULL;
    PyObject *outline_0_var_rebuild_proxies = NULL;
    PyObject *outline_0_var_rebuild_method = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_1_var___qualname__ = NULL;
    PyObject *outline_1_var___module__ = NULL;
    PyObject *outline_1_var___doc__ = NULL;
    PyObject *outline_1_var___attrs__ = NULL;
    PyObject *outline_1_var___init__ = NULL;
    PyObject *outline_1_var___enter__ = NULL;
    PyObject *outline_1_var___exit__ = NULL;
    PyObject *outline_1_var_prepare_request = NULL;
    PyObject *outline_1_var_request = NULL;
    PyObject *outline_1_var_get = NULL;
    PyObject *outline_1_var_options = NULL;
    PyObject *outline_1_var_head = NULL;
    PyObject *outline_1_var_post = NULL;
    PyObject *outline_1_var_put = NULL;
    PyObject *outline_1_var_patch = NULL;
    PyObject *outline_1_var_delete = NULL;
    PyObject *outline_1_var_send = NULL;
    PyObject *outline_1_var_merge_environment_settings = NULL;
    PyObject *outline_1_var_get_adapter = NULL;
    PyObject *outline_1_var_close = NULL;
    PyObject *outline_1_var_mount = NULL;
    PyObject *outline_1_var___getstate__ = NULL;
    PyObject *outline_1_var___setstate__ = NULL;
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
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    PyObject *tmp_import_from_7__module = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_Eq_1;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
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
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    int tmp_exc_match_exception_match_1;
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
    PyObject *tmp_fromlist_name_17;
    PyObject *tmp_fromlist_name_18;
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
    PyObject *tmp_globals_name_17;
    PyObject *tmp_globals_name_18;
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
    PyObject *tmp_import_name_from_13;
    PyObject *tmp_import_name_from_14;
    PyObject *tmp_import_name_from_15;
    PyObject *tmp_import_name_from_16;
    PyObject *tmp_import_name_from_17;
    PyObject *tmp_import_name_from_18;
    PyObject *tmp_import_name_from_19;
    PyObject *tmp_import_name_from_20;
    PyObject *tmp_import_name_from_21;
    PyObject *tmp_import_name_from_22;
    PyObject *tmp_import_name_from_23;
    PyObject *tmp_import_name_from_24;
    PyObject *tmp_import_name_from_25;
    PyObject *tmp_import_name_from_26;
    PyObject *tmp_import_name_from_27;
    PyObject *tmp_import_name_from_28;
    PyObject *tmp_import_name_from_29;
    PyObject *tmp_import_name_from_30;
    PyObject *tmp_import_name_from_31;
    PyObject *tmp_import_name_from_32;
    PyObject *tmp_import_name_from_33;
    PyObject *tmp_import_name_from_34;
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
    PyObject *tmp_level_name_12;
    PyObject *tmp_level_name_13;
    PyObject *tmp_level_name_14;
    PyObject *tmp_level_name_15;
    PyObject *tmp_level_name_16;
    PyObject *tmp_level_name_17;
    PyObject *tmp_level_name_18;
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
    PyObject *tmp_locals_name_17;
    PyObject *tmp_locals_name_18;
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
    PyObject *tmp_name_name_12;
    PyObject *tmp_name_name_13;
    PyObject *tmp_name_name_14;
    PyObject *tmp_name_name_15;
    PyObject *tmp_name_name_16;
    PyObject *tmp_name_name_17;
    PyObject *tmp_name_name_18;
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
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    struct Nuitka_FrameObject *frame_aff07de792d0461855b7d18dd9473963;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    // Locals dictionary setup.
PyObject *locals_dict_1 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_2 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = const_str_digest_21406c84cc6f02469836def5bcdcadba;
    UPDATE_STRING_DICT0( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_391836e2dd6fe23dba9e1473e5ddf5c0;
    UPDATE_STRING_DICT0( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_aff07de792d0461855b7d18dd9473963 = MAKE_MODULE_FRAME( codeobj_aff07de792d0461855b7d18dd9473963, module_requests$sessions );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_aff07de792d0461855b7d18dd9473963 );
    assert( Py_REFCNT( frame_aff07de792d0461855b7d18dd9473963 ) == 2 );

    // Framed code:
    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_147a008155143b0e10b18dcd3be84fb5;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_requests;
    UPDATE_STRING_DICT0( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_plain_os;
    tmp_globals_name_1 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 10;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_7 );
    tmp_name_name_2 = const_str_plain_platform;
    tmp_globals_name_2 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 11;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_platform, tmp_assign_source_8 );
    tmp_name_name_3 = const_str_plain_time;
    tmp_globals_name_3 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 12;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    assert( tmp_assign_source_9 != NULL );
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_9 );
    tmp_name_name_4 = const_str_plain_collections;
    tmp_globals_name_4 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_Mapping_tuple;
    tmp_level_name_4 = const_int_0;
    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 13;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Mapping );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_Mapping, tmp_assign_source_10 );
    tmp_name_name_5 = const_str_plain_datetime;
    tmp_globals_name_5 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_timedelta_tuple;
    tmp_level_name_5 = const_int_0;
    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 14;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_timedelta );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_timedelta, tmp_assign_source_11 );
    tmp_name_name_6 = const_str_plain_auth;
    tmp_globals_name_6 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain__basic_auth_str_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 16;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain__basic_auth_str );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain__basic_auth_str, tmp_assign_source_12 );
    tmp_name_name_7 = const_str_plain_compat;
    tmp_globals_name_7 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_52694123e02956767caa4fbf60cd1485_tuple;
    tmp_level_name_7 = const_int_pos_1;
    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 17;
    tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_13;

    // Tried code:
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_cookielib );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_cookielib, tmp_assign_source_14 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_is_py3 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_is_py3, tmp_assign_source_15 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_OrderedDict );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_OrderedDict, tmp_assign_source_16 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_urljoin );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urljoin, tmp_assign_source_17 );
    tmp_import_name_from_8 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_urlparse );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_urlparse, tmp_assign_source_18 );
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

    tmp_name_name_8 = const_str_plain_cookies;
    tmp_globals_name_8 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_88099abfc2d744feb222ef53bae67000_tuple;
    tmp_level_name_8 = const_int_pos_1;
    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 18;
    tmp_assign_source_19 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_19;

    // Tried code:
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_cookiejar_from_dict );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_cookiejar_from_dict, tmp_assign_source_20 );
    tmp_import_name_from_10 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_extract_cookies_to_jar );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar, tmp_assign_source_21 );
    tmp_import_name_from_11 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_RequestsCookieJar );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar, tmp_assign_source_22 );
    tmp_import_name_from_12 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_merge_cookies );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_cookies, tmp_assign_source_23 );
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

    tmp_name_name_9 = const_str_plain_models;
    tmp_globals_name_9 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_e6a6f1c11ceb58ad93c55185ed71c231_tuple;
    tmp_level_name_9 = const_int_pos_1;
    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 20;
    tmp_assign_source_24 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_24;

    // Tried code:
    tmp_import_name_from_13 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_Request );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_Request, tmp_assign_source_25 );
    tmp_import_name_from_14 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_PreparedRequest );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_PreparedRequest, tmp_assign_source_26 );
    tmp_import_name_from_15 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_15 );
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_DEFAULT_REDIRECT_LIMIT );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_DEFAULT_REDIRECT_LIMIT, tmp_assign_source_27 );
    goto try_end_3;
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

    Py_XDECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    tmp_name_name_10 = const_str_plain_hooks;
    tmp_globals_name_10 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = const_tuple_str_plain_default_hooks_str_plain_dispatch_hook_tuple;
    tmp_level_name_10 = const_int_pos_1;
    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 21;
    tmp_assign_source_28 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_4__module == NULL );
    tmp_import_from_4__module = tmp_assign_source_28;

    // Tried code:
    tmp_import_name_from_16 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_16 );
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_default_hooks );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_default_hooks, tmp_assign_source_29 );
    tmp_import_name_from_17 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_17 );
    tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_dispatch_hook );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_dispatch_hook, tmp_assign_source_30 );
    goto try_end_4;
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

    Py_XDECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    tmp_name_name_11 = const_str_plain__internal_utils;
    tmp_globals_name_11 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_11 = Py_None;
    tmp_fromlist_name_11 = const_tuple_str_plain_to_native_string_tuple;
    tmp_level_name_11 = const_int_pos_1;
    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 22;
    tmp_import_name_from_18 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_import_name_from_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_to_native_string );
    Py_DECREF( tmp_import_name_from_18 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_to_native_string, tmp_assign_source_31 );
    tmp_name_name_12 = const_str_plain_utils;
    tmp_globals_name_12 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_12 = Py_None;
    tmp_fromlist_name_12 = const_tuple_str_plain_to_key_val_list_str_plain_default_headers_tuple;
    tmp_level_name_12 = const_int_pos_1;
    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 23;
    tmp_assign_source_32 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_5__module == NULL );
    tmp_import_from_5__module = tmp_assign_source_32;

    // Tried code:
    tmp_import_name_from_19 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_19 );
    tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_to_key_val_list );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_to_key_val_list, tmp_assign_source_33 );
    tmp_import_name_from_20 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_20 );
    tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_default_headers );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_default_headers, tmp_assign_source_34 );
    goto try_end_5;
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

    Py_XDECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    tmp_name_name_13 = const_str_plain_exceptions;
    tmp_globals_name_13 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_13 = Py_None;
    tmp_fromlist_name_13 = const_tuple_8b3ec114aaebfeb6fdc902e5b511052a_tuple;
    tmp_level_name_13 = const_int_pos_1;
    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 24;
    tmp_assign_source_35 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_6__module == NULL );
    tmp_import_from_6__module = tmp_assign_source_35;

    // Tried code:
    tmp_import_name_from_21 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_21 );
    tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_TooManyRedirects );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_TooManyRedirects, tmp_assign_source_36 );
    tmp_import_name_from_22 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_22 );
    tmp_assign_source_37 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_InvalidSchema );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_InvalidSchema, tmp_assign_source_37 );
    tmp_import_name_from_23 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_23 );
    tmp_assign_source_38 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_ChunkedEncodingError );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_ChunkedEncodingError, tmp_assign_source_38 );
    tmp_import_name_from_24 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_24 );
    tmp_assign_source_39 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_ContentDecodingError );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_ContentDecodingError, tmp_assign_source_39 );
    goto try_end_6;
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

    Py_XDECREF( tmp_import_from_6__module );
    tmp_import_from_6__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_import_from_6__module );
    tmp_import_from_6__module = NULL;

    tmp_name_name_14 = const_str_plain_structures;
    tmp_globals_name_14 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_14 = Py_None;
    tmp_fromlist_name_14 = const_tuple_str_plain_CaseInsensitiveDict_tuple;
    tmp_level_name_14 = const_int_pos_1;
    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 27;
    tmp_import_name_from_25 = IMPORT_MODULE5( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14 );
    if ( tmp_import_name_from_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_40 = IMPORT_NAME( tmp_import_name_from_25, const_str_plain_CaseInsensitiveDict );
    Py_DECREF( tmp_import_name_from_25 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_CaseInsensitiveDict, tmp_assign_source_40 );
    tmp_name_name_15 = const_str_plain_adapters;
    tmp_globals_name_15 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_15 = Py_None;
    tmp_fromlist_name_15 = const_tuple_str_plain_HTTPAdapter_tuple;
    tmp_level_name_15 = const_int_pos_1;
    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 28;
    tmp_import_name_from_26 = IMPORT_MODULE5( tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15, tmp_level_name_15 );
    if ( tmp_import_name_from_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_41 = IMPORT_NAME( tmp_import_name_from_26, const_str_plain_HTTPAdapter );
    Py_DECREF( tmp_import_name_from_26 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_HTTPAdapter, tmp_assign_source_41 );
    tmp_name_name_16 = const_str_plain_utils;
    tmp_globals_name_16 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_16 = Py_None;
    tmp_fromlist_name_16 = const_tuple_2fbdb1813d47b70c787efcb723a214f4_tuple;
    tmp_level_name_16 = const_int_pos_1;
    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 30;
    tmp_assign_source_42 = IMPORT_MODULE5( tmp_name_name_16, tmp_globals_name_16, tmp_locals_name_16, tmp_fromlist_name_16, tmp_level_name_16 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_7__module == NULL );
    tmp_import_from_7__module = tmp_assign_source_42;

    // Tried code:
    tmp_import_name_from_27 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_27 );
    tmp_assign_source_43 = IMPORT_NAME( tmp_import_name_from_27, const_str_plain_requote_uri );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_requote_uri, tmp_assign_source_43 );
    tmp_import_name_from_28 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_28 );
    tmp_assign_source_44 = IMPORT_NAME( tmp_import_name_from_28, const_str_plain_get_environ_proxies );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_get_environ_proxies, tmp_assign_source_44 );
    tmp_import_name_from_29 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_29 );
    tmp_assign_source_45 = IMPORT_NAME( tmp_import_name_from_29, const_str_plain_get_netrc_auth );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_get_netrc_auth, tmp_assign_source_45 );
    tmp_import_name_from_30 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_30 );
    tmp_assign_source_46 = IMPORT_NAME( tmp_import_name_from_30, const_str_plain_should_bypass_proxies );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_should_bypass_proxies, tmp_assign_source_46 );
    tmp_import_name_from_31 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_31 );
    tmp_assign_source_47 = IMPORT_NAME( tmp_import_name_from_31, const_str_plain_get_auth_from_url );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_get_auth_from_url, tmp_assign_source_47 );
    tmp_import_name_from_32 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_32 );
    tmp_assign_source_48 = IMPORT_NAME( tmp_import_name_from_32, const_str_plain_rewind_body );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_rewind_body, tmp_assign_source_48 );
    goto try_end_7;
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

    Py_XDECREF( tmp_import_from_7__module );
    tmp_import_from_7__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_import_from_7__module );
    tmp_import_from_7__module = NULL;

    tmp_name_name_17 = const_str_plain_status_codes;
    tmp_globals_name_17 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_17 = Py_None;
    tmp_fromlist_name_17 = const_tuple_str_plain_codes_tuple;
    tmp_level_name_17 = const_int_pos_1;
    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 35;
    tmp_import_name_from_33 = IMPORT_MODULE5( tmp_name_name_17, tmp_globals_name_17, tmp_locals_name_17, tmp_fromlist_name_17, tmp_level_name_17 );
    if ( tmp_import_name_from_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_49 = IMPORT_NAME( tmp_import_name_from_33, const_str_plain_codes );
    Py_DECREF( tmp_import_name_from_33 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_codes, tmp_assign_source_49 );
    tmp_name_name_18 = const_str_plain_models;
    tmp_globals_name_18 = (PyObject *)moduledict_requests$sessions;
    tmp_locals_name_18 = Py_None;
    tmp_fromlist_name_18 = const_tuple_str_plain_REDIRECT_STATI_tuple;
    tmp_level_name_18 = const_int_pos_1;
    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 38;
    tmp_import_name_from_34 = IMPORT_MODULE5( tmp_name_name_18, tmp_globals_name_18, tmp_locals_name_18, tmp_fromlist_name_18, tmp_level_name_18 );
    if ( tmp_import_name_from_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_50 = IMPORT_NAME( tmp_import_name_from_34, const_str_plain_REDIRECT_STATI );
    Py_DECREF( tmp_import_name_from_34 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_REDIRECT_STATI, tmp_assign_source_50 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_platform );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_platform );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "platform" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;

        goto frame_exception_exit_1;
    }

    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 41;
    tmp_compare_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_system );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_Windows;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 41;

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
    // Tried code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_time );

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

        exception_lineno = 43;

        goto try_except_handler_8;
    }

    tmp_assign_source_51 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_perf_counter );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_8;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_preferred_clock, tmp_assign_source_51 );
    goto try_end_8;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_8 == NULL )
    {
        exception_keeper_tb_8 = MAKE_TRACEBACK( frame_aff07de792d0461855b7d18dd9473963, exception_keeper_lineno_8 );
    }
    else if ( exception_keeper_lineno_8 != 0 )
    {
        exception_keeper_tb_8 = ADD_TRACEBACK( exception_keeper_tb_8, frame_aff07de792d0461855b7d18dd9473963, exception_keeper_lineno_8 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8 );
    PyException_SetTraceback( exception_keeper_value_8, (PyObject *)exception_keeper_tb_8 );
    PUBLISH_EXCEPTION( &exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8 );
    // Tried code:
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_9;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_time );

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

        exception_lineno = 45;

        goto try_except_handler_9;
    }

    tmp_assign_source_52 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_clock );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_9;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_preferred_clock, tmp_assign_source_52 );
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 42;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_aff07de792d0461855b7d18dd9473963->m_frame) frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_9;
    branch_end_2:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_8;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_8:;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_53 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_time );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_preferred_clock, tmp_assign_source_53 );
    branch_end_1:;
    tmp_defaults_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_OrderedDict );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OrderedDict );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OrderedDict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_assign_source_54 = MAKE_FUNCTION_requests$sessions$$$function_1_merge_setting( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_setting, tmp_assign_source_54 );
    tmp_defaults_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_OrderedDict );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OrderedDict );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_defaults_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OrderedDict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_2 );
    tmp_assign_source_55 = MAKE_FUNCTION_requests$sessions$$$function_2_merge_hooks( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_merge_hooks, tmp_assign_source_55 );
    tmp_assign_source_56 = const_tuple_type_object_tuple;
    assert( tmp_class_creation_1__bases == NULL );
    Py_INCREF( tmp_assign_source_56 );
    tmp_class_creation_1__bases = tmp_assign_source_56;

    tmp_assign_source_57 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_57;

    // Tried code:
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


        exception_lineno = 96;

        goto try_except_handler_10;
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


        exception_lineno = 96;

        goto try_except_handler_10;
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


        exception_lineno = 96;

        goto try_except_handler_10;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_10;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_58 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 96;

        goto try_except_handler_10;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_58;

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


        exception_lineno = 96;

        goto try_except_handler_10;
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


        exception_lineno = 96;

        goto try_except_handler_10;
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
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_10;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_3 = const_str_plain_SessionRedirectMixin;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_3 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 96;
    tmp_assign_source_59 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_10;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_59 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_59;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_1);
    locals_dict_1 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_61 = const_str_digest_147a008155143b0e10b18dcd3be84fb5;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_61 );
    outline_0_var___module__ = tmp_assign_source_61;

    tmp_assign_source_62 = const_str_plain_SessionRedirectMixin;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_62 );
    outline_0_var___qualname__ = tmp_assign_source_62;

    tmp_assign_source_63 = MAKE_FUNCTION_requests$sessions$$$function_3_get_redirect_target(  );
    assert( outline_0_var_get_redirect_target == NULL );
    outline_0_var_get_redirect_target = tmp_assign_source_63;

    tmp_defaults_3 = const_tuple_false_none_true_none_none_false_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_64 = MAKE_FUNCTION_requests$sessions$$$function_4_resolve_redirects( tmp_defaults_3 );
    assert( outline_0_var_resolve_redirects == NULL );
    outline_0_var_resolve_redirects = tmp_assign_source_64;

    tmp_assign_source_65 = MAKE_FUNCTION_requests$sessions$$$function_5_rebuild_auth(  );
    assert( outline_0_var_rebuild_auth == NULL );
    outline_0_var_rebuild_auth = tmp_assign_source_65;

    tmp_assign_source_66 = MAKE_FUNCTION_requests$sessions$$$function_6_rebuild_proxies(  );
    assert( outline_0_var_rebuild_proxies == NULL );
    outline_0_var_rebuild_proxies = tmp_assign_source_66;

    tmp_assign_source_67 = MAKE_FUNCTION_requests$sessions$$$function_7_rebuild_method(  );
    assert( outline_0_var_rebuild_method == NULL );
    outline_0_var_rebuild_method = tmp_assign_source_67;

    // Tried code:
    tmp_called_name_3 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_4 = const_str_plain_SessionRedirectMixin;
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

        exception_lineno = 96;

        goto try_except_handler_11;
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

        exception_lineno = 96;

        goto try_except_handler_11;
    }
    if ( outline_0_var_get_redirect_target != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_4,
            const_str_plain_get_redirect_target,
            outline_0_var_get_redirect_target
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_4,
            const_str_plain_get_redirect_target
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_4,
                const_str_plain_get_redirect_target
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

        exception_lineno = 96;

        goto try_except_handler_11;
    }
    if ( outline_0_var_resolve_redirects != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_4,
            const_str_plain_resolve_redirects,
            outline_0_var_resolve_redirects
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_4,
            const_str_plain_resolve_redirects
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_4,
                const_str_plain_resolve_redirects
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

        exception_lineno = 96;

        goto try_except_handler_11;
    }
    if ( outline_0_var_rebuild_auth != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_4,
            const_str_plain_rebuild_auth,
            outline_0_var_rebuild_auth
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_4,
            const_str_plain_rebuild_auth
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_4,
                const_str_plain_rebuild_auth
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

        exception_lineno = 96;

        goto try_except_handler_11;
    }
    if ( outline_0_var_rebuild_proxies != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_4,
            const_str_plain_rebuild_proxies,
            outline_0_var_rebuild_proxies
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_4,
            const_str_plain_rebuild_proxies
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_4,
                const_str_plain_rebuild_proxies
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

        exception_lineno = 96;

        goto try_except_handler_11;
    }
    if ( outline_0_var_rebuild_method != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_4,
            const_str_plain_rebuild_method,
            outline_0_var_rebuild_method
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_4,
            const_str_plain_rebuild_method
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_4,
                const_str_plain_rebuild_method
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

        exception_lineno = 96;

        goto try_except_handler_11;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 96;
    tmp_assign_source_68 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_11;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_68;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_11;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_11:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var_get_redirect_target );
    outline_0_var_get_redirect_target = NULL;

    Py_XDECREF( outline_0_var_resolve_redirects );
    outline_0_var_resolve_redirects = NULL;

    Py_XDECREF( outline_0_var_rebuild_auth );
    outline_0_var_rebuild_auth = NULL;

    Py_XDECREF( outline_0_var_rebuild_proxies );
    outline_0_var_rebuild_proxies = NULL;

    Py_XDECREF( outline_0_var_rebuild_method );
    outline_0_var_rebuild_method = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var_get_redirect_target );
    outline_0_var_get_redirect_target = NULL;

    Py_XDECREF( outline_0_var_resolve_redirects );
    outline_0_var_resolve_redirects = NULL;

    Py_XDECREF( outline_0_var_rebuild_auth );
    outline_0_var_rebuild_auth = NULL;

    Py_XDECREF( outline_0_var_rebuild_proxies );
    outline_0_var_rebuild_proxies = NULL;

    Py_XDECREF( outline_0_var_rebuild_method );
    outline_0_var_rebuild_method = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 96;
    goto try_except_handler_10;
    outline_result_1:;
    tmp_assign_source_60 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_SessionRedirectMixin, tmp_assign_source_60 );
    goto try_end_10;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
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
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Tried code:
    tmp_assign_source_69 = PyTuple_New( 1 );
    tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_SessionRedirectMixin );

    if (unlikely( tmp_tuple_element_5 == NULL ))
    {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SessionRedirectMixin );
    }

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_69 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SessionRedirectMixin" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 315;

        goto try_except_handler_12;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_69, 0, tmp_tuple_element_5 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_69;

    tmp_assign_source_70 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_70;

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


        exception_lineno = 315;

        goto try_except_handler_12;
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


        exception_lineno = 315;

        goto try_except_handler_12;
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


        exception_lineno = 315;

        goto try_except_handler_12;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;

        goto try_except_handler_12;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_bases_name_2 );
    tmp_assign_source_71 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_2 );

        exception_lineno = 315;

        goto try_except_handler_12;
    }
    Py_DECREF( tmp_metaclass_name_2 );
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_71;

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


        exception_lineno = 315;

        goto try_except_handler_12;
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


        exception_lineno = 315;

        goto try_except_handler_12;
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
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___prepare__ );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;

        goto try_except_handler_12;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_6 = const_str_plain_Session;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_6 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_6 );
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 315;
    tmp_assign_source_72 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_72 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;

        goto try_except_handler_12;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_72 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_72;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_2);
    locals_dict_2 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_74 = const_str_digest_147a008155143b0e10b18dcd3be84fb5;
    assert( outline_1_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_74 );
    outline_1_var___module__ = tmp_assign_source_74;

    tmp_assign_source_75 = const_str_digest_34636d59879a5f018bde828d81ac59b6;
    assert( outline_1_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_75 );
    outline_1_var___doc__ = tmp_assign_source_75;

    tmp_assign_source_76 = const_str_plain_Session;
    assert( outline_1_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_76 );
    outline_1_var___qualname__ = tmp_assign_source_76;

    tmp_assign_source_77 = LIST_COPY( const_list_dc982aca766e4d1362a255cd6d36b4fb_list );
    assert( outline_1_var___attrs__ == NULL );
    outline_1_var___attrs__ = tmp_assign_source_77;

    tmp_assign_source_78 = MAKE_FUNCTION_requests$sessions$$$function_8___init__(  );
    assert( outline_1_var___init__ == NULL );
    outline_1_var___init__ = tmp_assign_source_78;

    tmp_assign_source_79 = MAKE_FUNCTION_requests$sessions$$$function_9___enter__(  );
    assert( outline_1_var___enter__ == NULL );
    outline_1_var___enter__ = tmp_assign_source_79;

    tmp_assign_source_80 = MAKE_FUNCTION_requests$sessions$$$function_10___exit__(  );
    assert( outline_1_var___exit__ == NULL );
    outline_1_var___exit__ = tmp_assign_source_80;

    tmp_assign_source_81 = MAKE_FUNCTION_requests$sessions$$$function_11_prepare_request(  );
    assert( outline_1_var_prepare_request == NULL );
    outline_1_var_prepare_request = tmp_assign_source_81;

    tmp_defaults_4 = const_tuple_eaa565d86edd7cb97850f98a9d317d39_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_assign_source_82 = MAKE_FUNCTION_requests$sessions$$$function_12_request( tmp_defaults_4 );
    assert( outline_1_var_request == NULL );
    outline_1_var_request = tmp_assign_source_82;

    tmp_assign_source_83 = MAKE_FUNCTION_requests$sessions$$$function_13_get(  );
    assert( outline_1_var_get == NULL );
    outline_1_var_get = tmp_assign_source_83;

    tmp_assign_source_84 = MAKE_FUNCTION_requests$sessions$$$function_14_options(  );
    assert( outline_1_var_options == NULL );
    outline_1_var_options = tmp_assign_source_84;

    tmp_assign_source_85 = MAKE_FUNCTION_requests$sessions$$$function_15_head(  );
    assert( outline_1_var_head == NULL );
    outline_1_var_head = tmp_assign_source_85;

    tmp_defaults_5 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_5 );
    tmp_assign_source_86 = MAKE_FUNCTION_requests$sessions$$$function_16_post( tmp_defaults_5 );
    assert( outline_1_var_post == NULL );
    outline_1_var_post = tmp_assign_source_86;

    tmp_defaults_6 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_6 );
    tmp_assign_source_87 = MAKE_FUNCTION_requests$sessions$$$function_17_put( tmp_defaults_6 );
    assert( outline_1_var_put == NULL );
    outline_1_var_put = tmp_assign_source_87;

    tmp_defaults_7 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_7 );
    tmp_assign_source_88 = MAKE_FUNCTION_requests$sessions$$$function_18_patch( tmp_defaults_7 );
    assert( outline_1_var_patch == NULL );
    outline_1_var_patch = tmp_assign_source_88;

    tmp_assign_source_89 = MAKE_FUNCTION_requests$sessions$$$function_19_delete(  );
    assert( outline_1_var_delete == NULL );
    outline_1_var_delete = tmp_assign_source_89;

    tmp_assign_source_90 = MAKE_FUNCTION_requests$sessions$$$function_20_send(  );
    assert( outline_1_var_send == NULL );
    outline_1_var_send = tmp_assign_source_90;

    tmp_assign_source_91 = MAKE_FUNCTION_requests$sessions$$$function_21_merge_environment_settings(  );
    assert( outline_1_var_merge_environment_settings == NULL );
    outline_1_var_merge_environment_settings = tmp_assign_source_91;

    tmp_assign_source_92 = MAKE_FUNCTION_requests$sessions$$$function_22_get_adapter(  );
    assert( outline_1_var_get_adapter == NULL );
    outline_1_var_get_adapter = tmp_assign_source_92;

    tmp_assign_source_93 = MAKE_FUNCTION_requests$sessions$$$function_23_close(  );
    assert( outline_1_var_close == NULL );
    outline_1_var_close = tmp_assign_source_93;

    tmp_assign_source_94 = MAKE_FUNCTION_requests$sessions$$$function_24_mount(  );
    assert( outline_1_var_mount == NULL );
    outline_1_var_mount = tmp_assign_source_94;

    tmp_assign_source_95 = MAKE_FUNCTION_requests$sessions$$$function_25___getstate__(  );
    assert( outline_1_var___getstate__ == NULL );
    outline_1_var___getstate__ = tmp_assign_source_95;

    tmp_assign_source_96 = MAKE_FUNCTION_requests$sessions$$$function_26___setstate__(  );
    assert( outline_1_var___setstate__ == NULL );
    outline_1_var___setstate__ = tmp_assign_source_96;

    // Tried code:
    tmp_called_name_5 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_5 );
    tmp_args_name_4 = PyTuple_New( 3 );
    tmp_tuple_element_7 = const_str_plain_Session;
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

        exception_lineno = 315;

        goto try_except_handler_13;
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

        exception_lineno = 315;

        goto try_except_handler_13;
    }
    if ( outline_1_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain___doc__,
            outline_1_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
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
        Py_DECREF( tmp_tuple_element_7 );

        exception_lineno = 315;

        goto try_except_handler_13;
    }
    if ( outline_1_var___attrs__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain___attrs__,
            outline_1_var___attrs__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain___attrs__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain___attrs__
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

        exception_lineno = 315;

        goto try_except_handler_13;
    }
    if ( outline_1_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain___init__,
            outline_1_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
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
        Py_DECREF( tmp_tuple_element_7 );

        exception_lineno = 315;

        goto try_except_handler_13;
    }
    if ( outline_1_var___enter__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain___enter__,
            outline_1_var___enter__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain___enter__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
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
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_7 );

        exception_lineno = 315;

        goto try_except_handler_13;
    }
    if ( outline_1_var___exit__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain___exit__,
            outline_1_var___exit__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain___exit__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
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
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_7 );

        exception_lineno = 315;

        goto try_except_handler_13;
    }
    if ( outline_1_var_prepare_request != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain_prepare_request,
            outline_1_var_prepare_request
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain_prepare_request
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain_prepare_request
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

        exception_lineno = 315;

        goto try_except_handler_13;
    }
    if ( outline_1_var_request != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain_request,
            outline_1_var_request
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain_request
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain_request
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

        exception_lineno = 315;

        goto try_except_handler_13;
    }
    if ( outline_1_var_get != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain_get,
            outline_1_var_get
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain_get
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain_get
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

        exception_lineno = 315;

        goto try_except_handler_13;
    }
    if ( outline_1_var_options != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain_options,
            outline_1_var_options
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain_options
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain_options
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

        exception_lineno = 315;

        goto try_except_handler_13;
    }
    if ( outline_1_var_head != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain_head,
            outline_1_var_head
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain_head
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain_head
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

        exception_lineno = 315;

        goto try_except_handler_13;
    }
    if ( outline_1_var_post != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain_post,
            outline_1_var_post
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain_post
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain_post
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

        exception_lineno = 315;

        goto try_except_handler_13;
    }
    if ( outline_1_var_put != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain_put,
            outline_1_var_put
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain_put
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain_put
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

        exception_lineno = 315;

        goto try_except_handler_13;
    }
    if ( outline_1_var_patch != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain_patch,
            outline_1_var_patch
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain_patch
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain_patch
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

        exception_lineno = 315;

        goto try_except_handler_13;
    }
    if ( outline_1_var_delete != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain_delete,
            outline_1_var_delete
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain_delete
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain_delete
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

        exception_lineno = 315;

        goto try_except_handler_13;
    }
    if ( outline_1_var_send != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain_send,
            outline_1_var_send
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain_send
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain_send
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

        exception_lineno = 315;

        goto try_except_handler_13;
    }
    if ( outline_1_var_merge_environment_settings != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain_merge_environment_settings,
            outline_1_var_merge_environment_settings
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain_merge_environment_settings
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain_merge_environment_settings
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

        exception_lineno = 315;

        goto try_except_handler_13;
    }
    if ( outline_1_var_get_adapter != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain_get_adapter,
            outline_1_var_get_adapter
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain_get_adapter
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain_get_adapter
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

        exception_lineno = 315;

        goto try_except_handler_13;
    }
    if ( outline_1_var_close != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain_close,
            outline_1_var_close
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain_close
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain_close
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

        exception_lineno = 315;

        goto try_except_handler_13;
    }
    if ( outline_1_var_mount != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain_mount,
            outline_1_var_mount
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain_mount
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain_mount
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

        exception_lineno = 315;

        goto try_except_handler_13;
    }
    if ( outline_1_var___getstate__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain___getstate__,
            outline_1_var___getstate__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain___getstate__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain___getstate__
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

        exception_lineno = 315;

        goto try_except_handler_13;
    }
    if ( outline_1_var___setstate__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_7,
            const_str_plain___setstate__,
            outline_1_var___setstate__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_7,
            const_str_plain___setstate__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_7,
                const_str_plain___setstate__
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

        exception_lineno = 315;

        goto try_except_handler_13;
    }
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_7 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_aff07de792d0461855b7d18dd9473963->m_frame.f_lineno = 315;
    tmp_assign_source_97 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_97 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;

        goto try_except_handler_13;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_97;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_13;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$sessions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_13:;
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    Py_XDECREF( outline_1_var___qualname__ );
    outline_1_var___qualname__ = NULL;

    Py_XDECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    Py_XDECREF( outline_1_var___doc__ );
    outline_1_var___doc__ = NULL;

    Py_XDECREF( outline_1_var___attrs__ );
    outline_1_var___attrs__ = NULL;

    Py_XDECREF( outline_1_var___init__ );
    outline_1_var___init__ = NULL;

    Py_XDECREF( outline_1_var___enter__ );
    outline_1_var___enter__ = NULL;

    Py_XDECREF( outline_1_var___exit__ );
    outline_1_var___exit__ = NULL;

    Py_XDECREF( outline_1_var_prepare_request );
    outline_1_var_prepare_request = NULL;

    Py_XDECREF( outline_1_var_request );
    outline_1_var_request = NULL;

    Py_XDECREF( outline_1_var_get );
    outline_1_var_get = NULL;

    Py_XDECREF( outline_1_var_options );
    outline_1_var_options = NULL;

    Py_XDECREF( outline_1_var_head );
    outline_1_var_head = NULL;

    Py_XDECREF( outline_1_var_post );
    outline_1_var_post = NULL;

    Py_XDECREF( outline_1_var_put );
    outline_1_var_put = NULL;

    Py_XDECREF( outline_1_var_patch );
    outline_1_var_patch = NULL;

    Py_XDECREF( outline_1_var_delete );
    outline_1_var_delete = NULL;

    Py_XDECREF( outline_1_var_send );
    outline_1_var_send = NULL;

    Py_XDECREF( outline_1_var_merge_environment_settings );
    outline_1_var_merge_environment_settings = NULL;

    Py_XDECREF( outline_1_var_get_adapter );
    outline_1_var_get_adapter = NULL;

    Py_XDECREF( outline_1_var_close );
    outline_1_var_close = NULL;

    Py_XDECREF( outline_1_var_mount );
    outline_1_var_mount = NULL;

    Py_XDECREF( outline_1_var___getstate__ );
    outline_1_var___getstate__ = NULL;

    Py_XDECREF( outline_1_var___setstate__ );
    outline_1_var___setstate__ = NULL;

    goto outline_result_2;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
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

    Py_XDECREF( outline_1_var___attrs__ );
    outline_1_var___attrs__ = NULL;

    Py_XDECREF( outline_1_var___init__ );
    outline_1_var___init__ = NULL;

    Py_XDECREF( outline_1_var___enter__ );
    outline_1_var___enter__ = NULL;

    Py_XDECREF( outline_1_var___exit__ );
    outline_1_var___exit__ = NULL;

    Py_XDECREF( outline_1_var_prepare_request );
    outline_1_var_prepare_request = NULL;

    Py_XDECREF( outline_1_var_request );
    outline_1_var_request = NULL;

    Py_XDECREF( outline_1_var_get );
    outline_1_var_get = NULL;

    Py_XDECREF( outline_1_var_options );
    outline_1_var_options = NULL;

    Py_XDECREF( outline_1_var_head );
    outline_1_var_head = NULL;

    Py_XDECREF( outline_1_var_post );
    outline_1_var_post = NULL;

    Py_XDECREF( outline_1_var_put );
    outline_1_var_put = NULL;

    Py_XDECREF( outline_1_var_patch );
    outline_1_var_patch = NULL;

    Py_XDECREF( outline_1_var_delete );
    outline_1_var_delete = NULL;

    Py_XDECREF( outline_1_var_send );
    outline_1_var_send = NULL;

    Py_XDECREF( outline_1_var_merge_environment_settings );
    outline_1_var_merge_environment_settings = NULL;

    Py_XDECREF( outline_1_var_get_adapter );
    outline_1_var_get_adapter = NULL;

    Py_XDECREF( outline_1_var_close );
    outline_1_var_close = NULL;

    Py_XDECREF( outline_1_var_mount );
    outline_1_var_mount = NULL;

    Py_XDECREF( outline_1_var___getstate__ );
    outline_1_var___getstate__ = NULL;

    Py_XDECREF( outline_1_var___setstate__ );
    outline_1_var___setstate__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$sessions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 315;
    goto try_except_handler_12;
    outline_result_2:;
    tmp_assign_source_73 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_Session, tmp_assign_source_73 );
    goto try_end_11;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
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
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_aff07de792d0461855b7d18dd9473963 );
#endif
    popFrameStack();

    assertFrameObject( frame_aff07de792d0461855b7d18dd9473963 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_aff07de792d0461855b7d18dd9473963 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aff07de792d0461855b7d18dd9473963, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aff07de792d0461855b7d18dd9473963->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aff07de792d0461855b7d18dd9473963, exception_lineno );
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

    tmp_assign_source_98 = MAKE_FUNCTION_requests$sessions$$$function_27_session(  );
    UPDATE_STRING_DICT1( moduledict_requests$sessions, (Nuitka_StringObject *)const_str_plain_session, tmp_assign_source_98 );

    return MOD_RETURN_VALUE( module_requests$sessions );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
