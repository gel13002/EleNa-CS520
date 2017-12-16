/* Generated code for Python source for module 'chardet.langbulgarianmodel'
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

/* The _module_chardet$langbulgarianmodel is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$langbulgarianmodel;
PyDictObject *moduledict_chardet$langbulgarianmodel;

/* The module constants used, if any. */
static PyObject *const_str_digest_f5cd36c2986a8768f7cbb6faddf4affc;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
static PyObject *const_tuple_d12d0d38133deb374cda3f2e99175f9b_tuple;
static PyObject *const_str_plain_Latin5_BulgarianCharToOrderMap;
extern PyObject *const_str_plain___file__;
static PyObject *const_dict_9e46562a566546a02fedc57749056339;
static PyObject *const_str_digest_d5ffc5d3d4577ce00b154e8a3a81f139;
static PyObject *const_str_plain_win1251BulgarianCharToOrderMap;
static PyObject *const_str_plain_BulgarianLangModel;
static PyObject *const_str_digest_f162f0e48afd9bd30970a540cb56b630;
extern PyObject *const_str_plain_Latin5BulgarianModel;
static PyObject *const_dict_39380d41e5dae7593c71ba6b3f7f2961;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_36b7ecdab49c9829602e64b169986871_tuple;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_chardet;
extern PyObject *const_str_plain_Win1251BulgarianModel;
static PyObject *const_tuple_33562c24091b0ac3cbee9a55801943b1_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_f5cd36c2986a8768f7cbb6faddf4affc = UNSTREAM_STRING( &constant_bin[ 157520 ], 107, 0 );
    const_tuple_d12d0d38133deb374cda3f2e99175f9b_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 157627 ], 1285 );
    const_str_plain_Latin5_BulgarianCharToOrderMap = UNSTREAM_STRING( &constant_bin[ 158912 ], 30, 1 );
    const_dict_9e46562a566546a02fedc57749056339 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 158942 ], 21914 );
    const_str_digest_d5ffc5d3d4577ce00b154e8a3a81f139 = UNSTREAM_STRING( &constant_bin[ 180856 ], 26, 0 );
    const_str_plain_win1251BulgarianCharToOrderMap = UNSTREAM_STRING( &constant_bin[ 180882 ], 30, 1 );
    const_str_plain_BulgarianLangModel = UNSTREAM_STRING( &constant_bin[ 180912 ], 18, 1 );
    const_str_digest_f162f0e48afd9bd30970a540cb56b630 = UNSTREAM_STRING( &constant_bin[ 180930 ], 35, 0 );
    const_dict_39380d41e5dae7593c71ba6b3f7f2961 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 180965 ], 21912 );
    const_tuple_36b7ecdab49c9829602e64b169986871_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 202877 ], 20485 );
    const_tuple_33562c24091b0ac3cbee9a55801943b1_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 223362 ], 1285 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$langbulgarianmodel( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4d979cbecaf069c7af4f4f57b18ef3c8;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_f5cd36c2986a8768f7cbb6faddf4affc;
    codeobj_4d979cbecaf069c7af4f4f57b18ef3c8 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_f162f0e48afd9bd30970a540cb56b630, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$langbulgarianmodel =
{
    PyModuleDef_HEAD_INIT,
    "chardet.langbulgarianmodel",   /* m_name */
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

MOD_INIT_DECL( chardet$langbulgarianmodel )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_chardet$langbulgarianmodel );
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
    puts("chardet.langbulgarianmodel: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.langbulgarianmodel: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initchardet$langbulgarianmodel" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$langbulgarianmodel = Py_InitModule4(
        "chardet.langbulgarianmodel",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_chardet$langbulgarianmodel = PyModule_Create( &mdef_chardet$langbulgarianmodel );
#endif

    moduledict_chardet$langbulgarianmodel = MODULE_DICT( module_chardet$langbulgarianmodel );

    CHECK_OBJECT( module_chardet$langbulgarianmodel );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d5ffc5d3d4577ce00b154e8a3a81f139, module_chardet$langbulgarianmodel );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    struct Nuitka_FrameObject *frame_4d979cbecaf069c7af4f4f57b18ef3c8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_f5cd36c2986a8768f7cbb6faddf4affc;
    UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_4d979cbecaf069c7af4f4f57b18ef3c8 = MAKE_MODULE_FRAME( codeobj_4d979cbecaf069c7af4f4f57b18ef3c8, module_chardet$langbulgarianmodel );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_4d979cbecaf069c7af4f4f57b18ef3c8 );
    assert( Py_REFCNT( frame_4d979cbecaf069c7af4f4f57b18ef3c8 ) == 2 );

    // Framed code:
    frame_4d979cbecaf069c7af4f4f57b18ef3c8->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_d5ffc5d3d4577ce00b154e8a3a81f139;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_4d979cbecaf069c7af4f4f57b18ef3c8->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d979cbecaf069c7af4f4f57b18ef3c8 );
#endif
    popFrameStack();

    assertFrameObject( frame_4d979cbecaf069c7af4f4f57b18ef3c8 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d979cbecaf069c7af4f4f57b18ef3c8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4d979cbecaf069c7af4f4f57b18ef3c8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4d979cbecaf069c7af4f4f57b18ef3c8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4d979cbecaf069c7af4f4f57b18ef3c8, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_chardet;
    UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_tuple_33562c24091b0ac3cbee9a55801943b1_tuple;
    UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_Latin5_BulgarianCharToOrderMap, tmp_assign_source_7 );
    tmp_assign_source_8 = const_tuple_d12d0d38133deb374cda3f2e99175f9b_tuple;
    UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_win1251BulgarianCharToOrderMap, tmp_assign_source_8 );
    tmp_assign_source_9 = const_tuple_36b7ecdab49c9829602e64b169986871_tuple;
    UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_BulgarianLangModel, tmp_assign_source_9 );
    tmp_assign_source_10 = PyDict_Copy( const_dict_39380d41e5dae7593c71ba6b3f7f2961 );
    UPDATE_STRING_DICT1( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_Latin5BulgarianModel, tmp_assign_source_10 );
    tmp_assign_source_11 = PyDict_Copy( const_dict_9e46562a566546a02fedc57749056339 );
    UPDATE_STRING_DICT1( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_Win1251BulgarianModel, tmp_assign_source_11 );

    return MOD_RETURN_VALUE( module_chardet$langbulgarianmodel );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
