/* Generated code for Python source for module 'googlemaps'
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

/* The _module_googlemaps is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_googlemaps;
PyDictObject *moduledict_googlemaps;

/* The module constants used, if any. */
static PyObject *const_str_digest_dd827003709cebfdc645a020fd203375;
static PyObject *const_str_digest_4ae055c30cb1dbb370f62358cda94159;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_digest_7644acc573750cab335989fdd0fc6a02;
extern PyObject *const_str_digest_f2c902723c8dd43eb19265e68f1fcc91;
extern PyObject *const_str_plain___all__;
static PyObject *const_list_str_plain_Client_list;
static PyObject *const_list_str_digest_7644acc573750cab335989fdd0fc6a02_list;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_165f2d5388d0499fffa9a0c8b62aae64;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_googlemaps;
extern PyObject *const_int_0;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_8aa59f979a3b872a5c32090560ffcd28;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_Client;
extern PyObject *const_tuple_str_plain_Client_tuple;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_dd827003709cebfdc645a020fd203375 = UNSTREAM_STRING( &constant_bin[ 603518 ], 100, 0 );
    const_str_digest_4ae055c30cb1dbb370f62358cda94159 = UNSTREAM_STRING( &constant_bin[ 603618 ], 5, 0 );
    const_str_digest_7644acc573750cab335989fdd0fc6a02 = UNSTREAM_STRING( &constant_bin[ 603518 ], 88, 0 );
    const_list_str_plain_Client_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_Client_list, 0, const_str_plain_Client ); Py_INCREF( const_str_plain_Client );
    const_list_str_digest_7644acc573750cab335989fdd0fc6a02_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_7644acc573750cab335989fdd0fc6a02_list, 0, const_str_digest_7644acc573750cab335989fdd0fc6a02 ); Py_INCREF( const_str_digest_7644acc573750cab335989fdd0fc6a02 );
    const_str_digest_8aa59f979a3b872a5c32090560ffcd28 = UNSTREAM_STRING( &constant_bin[ 603623 ], 19, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_googlemaps( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_9f185447ac1d0a5d5b003803d1dd0775;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_dd827003709cebfdc645a020fd203375;
    codeobj_9f185447ac1d0a5d5b003803d1dd0775 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_8aa59f979a3b872a5c32090560ffcd28, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_googlemaps =
{
    PyModuleDef_HEAD_INIT,
    "googlemaps",   /* m_name */
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

MOD_INIT_DECL( googlemaps )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_googlemaps );
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
    puts("googlemaps: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("googlemaps: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initgooglemaps" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_googlemaps = Py_InitModule4(
        "googlemaps",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_googlemaps = PyModule_Create( &mdef_googlemaps );
#endif

    moduledict_googlemaps = MODULE_DICT( module_googlemaps );

    CHECK_OBJECT( module_googlemaps );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_googlemaps, module_googlemaps );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_googlemaps, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_googlemaps, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_googlemaps, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_assign_source_11;
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
    struct Nuitka_FrameObject *frame_9f185447ac1d0a5d5b003803d1dd0775;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_googlemaps, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_dd827003709cebfdc645a020fd203375;
    UPDATE_STRING_DICT0( moduledict_googlemaps, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_7644acc573750cab335989fdd0fc6a02_list );
    UPDATE_STRING_DICT1( moduledict_googlemaps, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_googlemaps, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_9f185447ac1d0a5d5b003803d1dd0775 = MAKE_MODULE_FRAME( codeobj_9f185447ac1d0a5d5b003803d1dd0775, module_googlemaps );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_9f185447ac1d0a5d5b003803d1dd0775 );
    assert( Py_REFCNT( frame_9f185447ac1d0a5d5b003803d1dd0775 ) == 2 );

    // Framed code:
    frame_9f185447ac1d0a5d5b003803d1dd0775->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_plain_googlemaps;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_9f185447ac1d0a5d5b003803d1dd0775->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_googlemaps, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_5 );
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_googlemaps, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_plain_googlemaps;
    UPDATE_STRING_DICT0( moduledict_googlemaps, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_7 );
    tmp_assign_source_8 = const_str_digest_4ae055c30cb1dbb370f62358cda94159;
    UPDATE_STRING_DICT0( moduledict_googlemaps, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_8 );
    tmp_name_name_1 = const_str_digest_f2c902723c8dd43eb19265e68f1fcc91;
    tmp_globals_name_1 = (PyObject *)moduledict_googlemaps;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_Client_tuple;
    tmp_level_name_1 = const_int_0;
    frame_9f185447ac1d0a5d5b003803d1dd0775->m_frame.f_lineno = 20;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Client );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_googlemaps, (Nuitka_StringObject *)const_str_plain_Client, tmp_assign_source_9 );
    tmp_name_name_2 = const_str_digest_165f2d5388d0499fffa9a0c8b62aae64;
    tmp_globals_name_2 = (PyObject *)moduledict_googlemaps;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_9f185447ac1d0a5d5b003803d1dd0775->m_frame.f_lineno = 21;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_googlemaps, (Nuitka_StringObject *)const_str_plain_googlemaps, tmp_assign_source_10 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f185447ac1d0a5d5b003803d1dd0775 );
#endif
    popFrameStack();

    assertFrameObject( frame_9f185447ac1d0a5d5b003803d1dd0775 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f185447ac1d0a5d5b003803d1dd0775 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9f185447ac1d0a5d5b003803d1dd0775, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9f185447ac1d0a5d5b003803d1dd0775->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9f185447ac1d0a5d5b003803d1dd0775, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_11 = LIST_COPY( const_list_str_plain_Client_list );
    UPDATE_STRING_DICT1( moduledict_googlemaps, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_11 );

    return MOD_RETURN_VALUE( module_googlemaps );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
