
project(minimum_core LANGUAGES CXX)

add_library(${PROJECT_NAME} SHARED
	main.cpp
	main.h
)

source_python_common(${PROJECT_NAME})

target_compile_definitions(${PROJECT_NAME} PRIVATE
    CSS_SERVER_DIR="${CSS_SERVER_DIR_ESCAPED}"
)

if(DEFINED ENV{CSS_SERVER_DIR})
    add_custom_command(
        TARGET minimum_core POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
            $<TARGET_FILE:minimum_core>
            "$ENV{CSS_SERVER_DIR}/cstrike/addons/source-python/bin/core.dll"
    )
endif()
