/* Generated code for Python source for module 'requests.__version__'
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

/* The _module_requests$__version__ is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$__version__;
PyDictObject *moduledict_requests$__version__;

/* The module constants used, if any. */
extern PyObject *const_str_plain___copyright__;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_digest_c732b0001bd9466f3f59e4e065102217;
static PyObject *const_str_digest_b0b40594a48ef757787421cf2d82910a;
extern PyObject *const_str_plain_requests;
static PyObject *const_str_digest_f924d4e9bded95196120a23f5588dcb3;
static PyObject *const_str_digest_3e2093e591751aa28d709af1b89d3ffc;
extern PyObject *const_str_plain___build__;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___cake__;
extern PyObject *const_str_plain___version__;
static PyObject *const_str_digest_dac880088c76a67146081efa1b2911e5;
extern PyObject *const_str_plain___author__;
extern PyObject *const_str_plain___author_email__;
static PyObject *const_int_pos_137220;
extern PyObject *const_str_plain___license__;
static PyObject *const_str_digest_758f7d031ff885be82b1ada2371115dd;
static PyObject *const_str_digest_4ff9240dea52a791e105fc1b241d7a7a;
extern PyObject *const_str_plain___url__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___title__;
static PyObject *const_str_digest_6cdfef70e7012bff1e9ace07e7174bd8;
static PyObject *const_str_digest_4b66185fba40f207a567bf87be4d87f7;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain___description__;
static PyObject *const_str_digest_f45d7c3ad4be7ff6c8635dcc1dd81887;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_a61636d6964abb1200649df1b9079942;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_c732b0001bd9466f3f59e4e065102217 = UNSTREAM_STRING( &constant_bin[ 789350 ], 10, 0 );
    const_str_digest_b0b40594a48ef757787421cf2d82910a = UNSTREAM_STRING( &constant_bin[ 789392 ], 19, 0 );
    const_str_digest_f924d4e9bded95196120a23f5588dcb3 = UNSTREAM_STRING( &constant_bin[ 789411 ], 23, 0 );
    const_str_digest_3e2093e591751aa28d709af1b89d3ffc = UNSTREAM_STRING( &constant_bin[ 789271 ], 26, 0 );
    const_str_digest_dac880088c76a67146081efa1b2911e5 = UNSTREAM_STRING( &constant_bin[ 789434 ], 20, 0 );
    const_int_pos_137220 = PyLong_FromUnsignedLong( 137220ul );
    const_str_digest_758f7d031ff885be82b1ada2371115dd = UNSTREAM_STRING( &constant_bin[ 789454 ], 28, 0 );
    const_str_digest_4ff9240dea52a791e105fc1b241d7a7a = UNSTREAM_STRING( &constant_bin[ 789482 ], 6, 0 );
    const_str_digest_6cdfef70e7012bff1e9ace07e7174bd8 = UNSTREAM_STRING( &constant_bin[ 789488 ], 29, 0 );
    const_str_digest_4b66185fba40f207a567bf87be4d87f7 = UNSTREAM_STRING( &constant_bin[ 789517 ], 12, 0 );
    const_str_digest_f45d7c3ad4be7ff6c8635dcc1dd81887 = UNSTREAM_STRING( &constant_bin[ 789325 ], 13, 0 );
    const_str_digest_a61636d6964abb1200649df1b9079942 = UNSTREAM_STRING( &constant_bin[ 789529 ], 101, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$__version__( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_cb25c306e93a06a0e58d7a63892941bb;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_a61636d6964abb1200649df1b9079942;
    codeobj_cb25c306e93a06a0e58d7a63892941bb = MAKE_CODEOBJ( module_filename_obj, const_str_digest_6cdfef70e7012bff1e9ace07e7174bd8, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$__version__ =
{
    PyModuleDef_HEAD_INIT,
    "requests.__version__",   /* m_name */
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

MOD_INIT_DECL( requests$__version__ )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$__version__ );
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
    puts("requests.__version__: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.__version__: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrequests$__version__" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$__version__ = Py_InitModule4(
        "requests.__version__",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_requests$__version__ = PyModule_Create( &mdef_requests$__version__ );
#endif

    moduledict_requests$__version__ = MODULE_DICT( module_requests$__version__ );

    CHECK_OBJECT( module_requests$__version__ );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_dac880088c76a67146081efa1b2911e5, module_requests$__version__ );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_called_name_1;
    struct Nuitka_FrameObject *frame_cb25c306e93a06a0e58d7a63892941bb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_a61636d6964abb1200649df1b9079942;
    UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_cb25c306e93a06a0e58d7a63892941bb = MAKE_MODULE_FRAME( codeobj_cb25c306e93a06a0e58d7a63892941bb, module_requests$__version__ );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_cb25c306e93a06a0e58d7a63892941bb );
    assert( Py_REFCNT( frame_cb25c306e93a06a0e58d7a63892941bb ) == 2 );

    // Framed code:
    frame_cb25c306e93a06a0e58d7a63892941bb->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_dac880088c76a67146081efa1b2911e5;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_cb25c306e93a06a0e58d7a63892941bb->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb25c306e93a06a0e58d7a63892941bb );
#endif
    popFrameStack();

    assertFrameObject( frame_cb25c306e93a06a0e58d7a63892941bb );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb25c306e93a06a0e58d7a63892941bb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cb25c306e93a06a0e58d7a63892941bb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cb25c306e93a06a0e58d7a63892941bb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cb25c306e93a06a0e58d7a63892941bb, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_requests;
    UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_plain_requests;
    UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___title__, tmp_assign_source_7 );
    tmp_assign_source_8 = const_str_digest_f924d4e9bded95196120a23f5588dcb3;
    UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___description__, tmp_assign_source_8 );
    tmp_assign_source_9 = const_str_digest_3e2093e591751aa28d709af1b89d3ffc;
    UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___url__, tmp_assign_source_9 );
    tmp_assign_source_10 = const_str_digest_4ff9240dea52a791e105fc1b241d7a7a;
    UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_10 );
    tmp_assign_source_11 = const_int_pos_137220;
    UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___build__, tmp_assign_source_11 );
    tmp_assign_source_12 = const_str_digest_f45d7c3ad4be7ff6c8635dcc1dd81887;
    UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_12 );
    tmp_assign_source_13 = const_str_digest_b0b40594a48ef757787421cf2d82910a;
    UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___author_email__, tmp_assign_source_13 );
    tmp_assign_source_14 = const_str_digest_c732b0001bd9466f3f59e4e065102217;
    UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___license__, tmp_assign_source_14 );
    tmp_assign_source_15 = const_str_digest_758f7d031ff885be82b1ada2371115dd;
    UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___copyright__, tmp_assign_source_15 );
    tmp_assign_source_16 = const_str_digest_4b66185fba40f207a567bf87be4d87f7;
    UPDATE_STRING_DICT0( moduledict_requests$__version__, (Nuitka_StringObject *)const_str_plain___cake__, tmp_assign_source_16 );

    return MOD_RETURN_VALUE( module_requests$__version__ );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
