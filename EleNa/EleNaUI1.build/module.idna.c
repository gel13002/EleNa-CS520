/* Generated code for Python source for module 'idna'
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

/* The _module_idna is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_idna;
PyDictObject *moduledict_idna;

/* The module constants used, if any. */
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_idna;
static PyObject *const_list_str_digest_7f24ec7da3fb22ddb23b599504cc7287_list;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___version__;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_plain_package_data;
static PyObject *const_str_digest_7f24ec7da3fb22ddb23b599504cc7287;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_core;
static PyObject *const_str_digest_1203a1560366425a2d640c517ff57441;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_str_plain___version___tuple;
extern PyObject *const_str_plain___loader__;
static PyObject *const_str_digest_b524b2931bfefb9a3de889a85999899a;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_list_str_digest_7f24ec7da3fb22ddb23b599504cc7287_list = PyList_New( 1 );
    const_str_digest_7f24ec7da3fb22ddb23b599504cc7287 = UNSTREAM_STRING( &constant_bin[ 640365 ], 82, 0 );
    PyList_SET_ITEM( const_list_str_digest_7f24ec7da3fb22ddb23b599504cc7287_list, 0, const_str_digest_7f24ec7da3fb22ddb23b599504cc7287 ); Py_INCREF( const_str_digest_7f24ec7da3fb22ddb23b599504cc7287 );
    const_str_plain_package_data = UNSTREAM_STRING( &constant_bin[ 640447 ], 12, 1 );
    const_str_digest_1203a1560366425a2d640c517ff57441 = UNSTREAM_STRING( &constant_bin[ 640459 ], 94, 0 );
    const_str_digest_b524b2931bfefb9a3de889a85999899a = UNSTREAM_STRING( &constant_bin[ 640553 ], 13, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_idna( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_381ff903b2fb034a9b8f629b5d59cd8a;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_1203a1560366425a2d640c517ff57441;
    codeobj_381ff903b2fb034a9b8f629b5d59cd8a = MAKE_CODEOBJ( module_filename_obj, const_str_digest_b524b2931bfefb9a3de889a85999899a, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_idna =
{
    PyModuleDef_HEAD_INIT,
    "idna",   /* m_name */
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

MOD_INIT_DECL( idna )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_idna );
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
    puts("idna: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("idna: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initidna" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_idna = Py_InitModule4(
        "idna",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_idna = PyModule_Create( &mdef_idna );
#endif

    moduledict_idna = MODULE_DICT( module_idna );

    CHECK_OBJECT( module_idna );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_idna, module_idna );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_idna, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_idna, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_idna, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    bool tmp_result;
    PyObject *tmp_star_imported_1;
    struct Nuitka_FrameObject *frame_381ff903b2fb034a9b8f629b5d59cd8a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_idna, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_1203a1560366425a2d640c517ff57441;
    UPDATE_STRING_DICT0( moduledict_idna, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_7f24ec7da3fb22ddb23b599504cc7287_list );
    UPDATE_STRING_DICT1( moduledict_idna, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_idna, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_381ff903b2fb034a9b8f629b5d59cd8a = MAKE_MODULE_FRAME( codeobj_381ff903b2fb034a9b8f629b5d59cd8a, module_idna );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_381ff903b2fb034a9b8f629b5d59cd8a );
    assert( Py_REFCNT( frame_381ff903b2fb034a9b8f629b5d59cd8a ) == 2 );

    // Framed code:
    frame_381ff903b2fb034a9b8f629b5d59cd8a->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_plain_idna;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_381ff903b2fb034a9b8f629b5d59cd8a->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_idna, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_5 );
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_idna, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_plain_idna;
    UPDATE_STRING_DICT0( moduledict_idna, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_7 );
    tmp_name_name_1 = const_str_plain_package_data;
    tmp_globals_name_1 = (PyObject *)moduledict_idna;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain___version___tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_381ff903b2fb034a9b8f629b5d59cd8a->m_frame.f_lineno = 1;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain___version__ );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_idna, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_plain_core;
    tmp_globals_name_2 = (PyObject *)moduledict_idna;
    tmp_locals_name_2 = (PyObject *)moduledict_idna;
    tmp_fromlist_name_2 = const_tuple_str_chr_42_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_381ff903b2fb034a9b8f629b5d59cd8a->m_frame.f_lineno = 2;
    tmp_star_imported_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_idna, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_381ff903b2fb034a9b8f629b5d59cd8a );
#endif
    popFrameStack();

    assertFrameObject( frame_381ff903b2fb034a9b8f629b5d59cd8a );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_381ff903b2fb034a9b8f629b5d59cd8a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_381ff903b2fb034a9b8f629b5d59cd8a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_381ff903b2fb034a9b8f629b5d59cd8a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_381ff903b2fb034a9b8f629b5d59cd8a, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_idna );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
