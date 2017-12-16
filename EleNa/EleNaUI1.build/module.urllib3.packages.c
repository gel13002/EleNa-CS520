/* Generated code for Python source for module 'urllib3.packages'
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

/* The _module_urllib3$packages is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$packages;
PyDictObject *moduledict_urllib3$packages;

/* The module constants used, if any. */
static PyObject *const_str_digest_54b05a686b1498fc0239c67af8cbed72;
extern PyObject *const_str_plain___file__;
static PyObject *const_list_str_digest_86034d19adeff483605a97981460e0bc_list;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_digest_65485c760cca56a20b50455ef338794c;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_86034d19adeff483605a97981460e0bc;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_str_plain_ssl_match_hostname_tuple;
static PyObject *const_str_plain_ssl_match_hostname;
static PyObject *const_str_digest_2466748527a23d3a5c340815d3ba8b7c;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_54b05a686b1498fc0239c67af8cbed72 = UNSTREAM_STRING( &constant_bin[ 881733 ], 106, 0 );
    const_list_str_digest_86034d19adeff483605a97981460e0bc_list = PyList_New( 1 );
    const_str_digest_86034d19adeff483605a97981460e0bc = UNSTREAM_STRING( &constant_bin[ 881733 ], 94, 0 );
    PyList_SET_ITEM( const_list_str_digest_86034d19adeff483605a97981460e0bc_list, 0, const_str_digest_86034d19adeff483605a97981460e0bc ); Py_INCREF( const_str_digest_86034d19adeff483605a97981460e0bc );
    const_tuple_str_plain_ssl_match_hostname_tuple = PyTuple_New( 1 );
    const_str_plain_ssl_match_hostname = UNSTREAM_STRING( &constant_bin[ 881839 ], 18, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ssl_match_hostname_tuple, 0, const_str_plain_ssl_match_hostname ); Py_INCREF( const_str_plain_ssl_match_hostname );
    const_str_digest_2466748527a23d3a5c340815d3ba8b7c = UNSTREAM_STRING( &constant_bin[ 881857 ], 25, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$packages( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_d9ad5a6f511f32e5fdba3c17a6dbc70c;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_54b05a686b1498fc0239c67af8cbed72;
    codeobj_d9ad5a6f511f32e5fdba3c17a6dbc70c = MAKE_CODEOBJ( module_filename_obj, const_str_digest_2466748527a23d3a5c340815d3ba8b7c, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$packages =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.packages",   /* m_name */
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

MOD_INIT_DECL( urllib3$packages )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$packages );
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
    puts("urllib3.packages: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.packages: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$packages" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$packages = Py_InitModule4(
        "urllib3.packages",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_urllib3$packages = PyModule_Create( &mdef_urllib3$packages );
#endif

    moduledict_urllib3$packages = MODULE_DICT( module_urllib3$packages );

    CHECK_OBJECT( module_urllib3$packages );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_65485c760cca56a20b50455ef338794c, module_urllib3$packages );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$packages, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$packages, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_urllib3$packages, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    struct Nuitka_FrameObject *frame_d9ad5a6f511f32e5fdba3c17a6dbc70c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$packages, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_54b05a686b1498fc0239c67af8cbed72;
    UPDATE_STRING_DICT0( moduledict_urllib3$packages, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_86034d19adeff483605a97981460e0bc_list );
    UPDATE_STRING_DICT1( moduledict_urllib3$packages, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_urllib3$packages, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_d9ad5a6f511f32e5fdba3c17a6dbc70c = MAKE_MODULE_FRAME( codeobj_d9ad5a6f511f32e5fdba3c17a6dbc70c, module_urllib3$packages );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_d9ad5a6f511f32e5fdba3c17a6dbc70c );
    assert( Py_REFCNT( frame_d9ad5a6f511f32e5fdba3c17a6dbc70c ) == 2 );

    // Framed code:
    frame_d9ad5a6f511f32e5fdba3c17a6dbc70c->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_65485c760cca56a20b50455ef338794c;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_d9ad5a6f511f32e5fdba3c17a6dbc70c->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$packages, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_5 );
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$packages, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_65485c760cca56a20b50455ef338794c;
    UPDATE_STRING_DICT0( moduledict_urllib3$packages, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_7 );
    frame_d9ad5a6f511f32e5fdba3c17a6dbc70c->m_frame.f_lineno = 1;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( tmp_import_name_from_1 != NULL );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$packages, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_8 );
    tmp_name_name_1 = const_str_empty;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3$packages;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_ssl_match_hostname_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_d9ad5a6f511f32e5fdba3c17a6dbc70c->m_frame.f_lineno = 3;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_ssl_match_hostname );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$packages, (Nuitka_StringObject *)const_str_plain_ssl_match_hostname, tmp_assign_source_9 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9ad5a6f511f32e5fdba3c17a6dbc70c );
#endif
    popFrameStack();

    assertFrameObject( frame_d9ad5a6f511f32e5fdba3c17a6dbc70c );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9ad5a6f511f32e5fdba3c17a6dbc70c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d9ad5a6f511f32e5fdba3c17a6dbc70c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d9ad5a6f511f32e5fdba3c17a6dbc70c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d9ad5a6f511f32e5fdba3c17a6dbc70c, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_10 = const_tuple_str_plain_ssl_match_hostname_tuple;
    UPDATE_STRING_DICT0( moduledict_urllib3$packages, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_10 );

    return MOD_RETURN_VALUE( module_urllib3$packages );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
