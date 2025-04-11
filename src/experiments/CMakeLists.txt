
# [css2025_win32] Requires "CSS_SERVER_DIR" to be defined.

if(DEFINED ENV{CSS_SERVER_DIR})

    set(CSS_SERVER_DIR_RAW $ENV{CSS_SERVER_DIR})
    string(REPLACE "\\" "\\\\" CSS_SERVER_DIR_ESCAPED "${CSS_SERVER_DIR_RAW}")

    # Common settings used in:
    #  - python_check-builtins
    #  - python_static-dict-initialization
    function (set_experiment_exe TARGET_NAME)
        set_target_properties(${TARGET_NAME} PROPERTIES
            CXX_STANDARD 17
            CXX_STANDARD_REQUIRED true
        )

        target_compile_options(${TARGET_NAME} PRIVATE "/MT")

        target_compile_definitions(${TARGET_NAME} PRIVATE
            COMPILER_MSVC
            COMPILER_MSVC32
            WIN32
            _WIN32
            WINDOWS
            _WINDOWS
            PLATFORM_32BITS

            BOOST_PYTHON_MAX_ARITY=32
            BOOST_PYTHON_STATIC_LIB
            BOOST_PYTHON_SOURCE
            BOOST_PYTHON_NO_LIB

            HAVE_SNPRINTF=1

            CSS_SERVER_DIR="${CSS_SERVER_DIR_ESCAPED}"
        )

        target_link_libraries(${TARGET_NAME}
            Boost::python
            Python3::Python
        )
    endfunction()

    add_subdirectory(minimum_core)
    add_subdirectory(python_check-builtins)
    add_subdirectory(python_static-dict-initialization)

endif()
