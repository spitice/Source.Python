# ------------------------------------------------------------------
# Set minimum required version of CMake
# ------------------------------------------------------------------
CMake_Minimum_Required(VERSION 3.23)

# ------------------------------------------------------------------
# Makefile includes.
# ------------------------------------------------------------------
# [css2025_win32] Explicitly sets the branch.
set(BRANCH css)
include("makefiles/branch/${BRANCH}.cmake")
include("makefiles/shared.cmake")

# ------------------------------------------------------------------
# Loader
# ------------------------------------------------------------------
Set(SOURCEPYTHON_LOADER_HEADERS
    loader/loader_main.h
    loader/updater.h
    loader/definitions.h
)

Set(SOURCEPYTHON_LOADER_SOURCES
    loader/loader_main.cpp
    loader/updater.cpp
)

Set(SOURCEPYTHON_LOADER_FILES
    ${SOURCEPYTHON_LOADER_HEADERS}
    ${SOURCEPYTHON_LOADER_SOURCES}
)

# ------------------------------------------------------------------
# Patches
# ------------------------------------------------------------------
Set(SOURCEPYTHON_PATCHES_HEADERS
    core/patches/${SOURCE_ENGINE}/undefined_symbols.h
)

Set(SOURCEPYTHON_PATCHES_SOURCES
    core/patches/${SOURCE_ENGINE}/patches.cpp
    core/patches/undefined_symbols.cpp
)

Set(SOURCEPYTHON_PATCHES_FILES
    ${SOURCEPYTHON_PATCHES_HEADERS}
    ${SOURCEPYTHON_PATCHES_SOURCES}
)


# ------------------------------------------------------------------
# Utilities
# ------------------------------------------------------------------
Set(SOURCEPYTHON_UTILITIES_HEADERS
    core/utilities/sp_util.h
    core/utilities/shared_utils.h
    core/utilities/call_python.h
    core/utilities/wrap_macros.h
    core/utilities/conversions.h
    core/utilities/ipythongenerator.h
)

Set(SOURCEPYTHON_UTILITIES_SOURCES
    core/utilities/conversions/baseentity_from.cpp
    core/utilities/conversions/basehandle_from.cpp
    core/utilities/conversions/edict_from.cpp
    core/utilities/conversions/index_from.cpp
    core/utilities/conversions/inthandle_from.cpp
    core/utilities/conversions/playerinfo_from.cpp
    core/utilities/conversions/pointer_from.cpp
    core/utilities/conversions/userid_from.cpp
    core/utilities/conversions/address_from.cpp
    core/utilities/conversions/uniqueid_from.cpp
)

Set(SOURCEPYTHON_UTILITIES_FILES
    ${SOURCEPYTHON_UTILITIES_HEADERS}
    ${SOURCEPYTHON_UTILITIES_SOURCES}
)

# ------------------------------------------------------------------
# Core
# ------------------------------------------------------------------
Set(SOURCEPYTHON_CORE_HEADERS
    core/sp_python.h
    core/sp_main.h
    core/export_main.h
    core/sp_hooks.h
)

Set(SOURCEPYTHON_CORE_SOURCES
    core/sp_python.cpp
    core/sp_main.cpp
    core/export_main.cpp
    core/sp_hooks.cpp
)

Set(SOURCEPYTHON_CORE_FILES
    ${SOURCEPYTHON_CORE_HEADERS}
    ${SOURCEPYTHON_CORE_SOURCES}
)

# ------------------------------------------------------------------
# BitBuffers module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_BITBUFFERS_MODULE_HEADERS
    core/modules/bitbuffers/bitbuffers.h
)

Set(SOURCEPYTHON_BITBUFFERS_MODULE_SOURCES
    core/modules/bitbuffers/bitbuffers_wrap.cpp
)

# ------------------------------------------------------------------
# Colors module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_COLORS_MODULE_HEADERS
    core/modules/colors/colors.h
)

Set(SOURCEPYTHON_COLORS_MODULE_SOURCES
    core/modules/colors/colors_wrap.cpp
)

# ------------------------------------------------------------------
# Commands module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_COMMANDS_MODULE_HEADERS
    core/modules/commands/commands_client.h
    core/modules/commands/commands.h
    core/modules/commands/commands_say.h
    core/modules/commands/commands_server.h
)

Set(SOURCEPYTHON_COMMANDS_MODULE_SOURCES
    core/modules/commands/commands_client.cpp
    core/modules/commands/commands_client_wrap.cpp
    core/modules/commands/commands_wrap.cpp
    core/modules/commands/commands_say.cpp
    core/modules/commands/commands_say_wrap.cpp
    core/modules/commands/commands_server.cpp
    core/modules/commands/commands_server_wrap.cpp
)


# ------------------------------------------------------------------
# Core module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_CORE_MODULE_HEADERS
    core/modules/core/core.h
)

Set(SOURCEPYTHON_CORE_MODULE_SOURCES
    core/modules/core/core.cpp
    core/modules/core/core_wrap.cpp
)

Set(SOURCEPYTHON_CORE_CACHE_MODULE_HEADERS
    core/modules/core/core_cache.h
)

Set(SOURCEPYTHON_CORE_CACHE_MODULE_SOURCES
    core/modules/core/core_cache.cpp
    core/modules/core/core_cache_wrap.cpp
)

# ------------------------------------------------------------------
# Cvars module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_CVARS_MODULE_HEADERS
    core/modules/cvars/cvars.h
    core/modules/cvars/${SOURCE_ENGINE}/cvars.h
)

Set(SOURCEPYTHON_CVARS_MODULE_SOURCES
    core/modules/cvars/cvars_wrap.cpp
)

# ------------------------------------------------------------------
# Effects module
# ------------------------------------------------------------------
Set(SOURCEPYTHON_EFFECTS_MODULE_HEADERS
    core/modules/effects/effects_base.h
    core/modules/effects/${SOURCE_ENGINE}/effects_base_wrap.h
)

Set(SOURCEPYTHON_EFFECTS_MODULE_SOURCES
    core/modules/effects/effects_wrap.cpp
    core/modules/effects/effects_base_wrap.cpp
)

# ------------------------------------------------------------------
# Engines module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_ENGINES_MODULE_HEADERS
    core/modules/engines/engines.h
    core/modules/engines/engines_server.h
    core/modules/engines/${SOURCE_ENGINE}/engines.h
    core/modules/engines/${SOURCE_ENGINE}/engines_wrap.h
    core/modules/engines/engines_gamerules.h
)

Set(SOURCEPYTHON_ENGINES_MODULE_SOURCES
    core/modules/engines/engines_wrap.cpp
    core/modules/engines/engines_server.cpp
    core/modules/engines/engines_server_wrap.cpp
    core/modules/engines/engines_sound_wrap.cpp
    core/modules/engines/engines_trace_wrap.cpp
    core/modules/engines/engines_gamerules.cpp
    core/modules/engines/engines_gamerules_wrap.cpp
)

# ------------------------------------------------------------------
# Entities module
# ------------------------------------------------------------------
Set(SOURCEPYTHON_ENTITIES_MODULE_HEADERS
    core/modules/entities/entities.h
    core/modules/entities/${SOURCE_ENGINE}/entities.h
    core/modules/entities/entities_generator.h
    core/modules/entities/entities_factories.h
    core/modules/entities/${SOURCE_ENGINE}/entities_factories_wrap.h
    core/modules/entities/${SOURCE_ENGINE}/entities_wrap.h
    core/modules/entities/entities_datamaps.h
    core/modules/entities/${SOURCE_ENGINE}/entities_datamaps_wrap.h
    core/modules/entities/entities_props.h
    core/modules/entities/${SOURCE_ENGINE}/entities_props.h
    core/modules/entities/${SOURCE_ENGINE}/entities_props_wrap.h
    core/modules/entities/${SOURCE_ENGINE}/entities_constants_wrap.h
    core/modules/entities/entities_entity.h
    core/modules/entities/entities_collisions.h
    core/modules/entities/entities_transmit.h
)

Set(SOURCEPYTHON_ENTITIES_MODULE_SOURCES
    core/modules/entities/entities.cpp
    core/modules/entities/entities_constants_wrap.cpp
    core/modules/entities/entities_helpers_wrap.cpp
    core/modules/entities/entities_wrap.cpp
    core/modules/entities/entities_factories.cpp
    core/modules/entities/entities_factories_wrap.cpp
    core/modules/entities/entities_generator.cpp
    core/modules/entities/entities_datamaps.cpp
    core/modules/entities/entities_datamaps_wrap.cpp
    core/modules/entities/entities_props.cpp
    core/modules/entities/entities_props_wrap.cpp
    core/modules/entities/entities_entity.cpp
    core/modules/entities/entities_entity_wrap.cpp
    core/modules/entities/entities_collisions.cpp
    core/modules/entities/entities_collisions_wrap.cpp
    core/modules/entities/entities_transmit.cpp
    core/modules/entities/entities_transmit_wrap.cpp
)

# ------------------------------------------------------------------
# Events module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_EVENTS_MODULE_HEADERS
    core/modules/events/events.h
    core/modules/events/events_generator.h
)

Set(SOURCEPYTHON_EVENTS_MODULE_SOURCES
    core/modules/events/events_generator.cpp
    core/modules/events/events_wrap.cpp
)

# ------------------------------------------------------------------
# Filesystem module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_FILESYSTEM_MODULE_HEADERS
    core/modules/filesystem/filesystem.h
)

Set(SOURCEPYTHON_FILESYSTEM_MODULE_SOURCES
    core/modules/filesystem/filesystem.cpp
    core/modules/filesystem/filesystem_wrap.cpp
)

# ------------------------------------------------------------------
# Filters module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_FILTERS_MODULE_HEADERS
    core/modules/filters/filters_recipients.h
)

Set(SOURCEPYTHON_FILTERS_MODULE_SOURCES
    core/modules/filters/filters_recipients.cpp
    core/modules/filters/filters_recipients_wrap.cpp
)

# ------------------------------------------------------------------
# Globals module
# ------------------------------------------------------------------
Set(SOURCEPYTHON_GLOBALS_MODULE_HEADERS
    core/modules/globals/${SOURCE_ENGINE}/globals_wrap.h
)

Set(SOURCEPYTHON_GLOBALS_MODULE_SOURCES
    core/modules/globals/globals_wrap.cpp
)

# ------------------------------------------------------------------
# Keyvalues module
# ------------------------------------------------------------------
Set(SOURCEPYTHON_KEYVALUES_MODULE_HEADERS
    core/modules/keyvalues/keyvalues.h
)

Set(SOURCEPYTHON_KEYVALUES_MODULE_SOURCES
    core/modules/keyvalues/keyvalues_wrap.cpp
    ${SOURCESDK}/tier1/KeyValues.cpp
)

# ------------------------------------------------------------------
# Listeners module
# ------------------------------------------------------------------
Set(SOURCEPYTHON_LISTENERS_MODULE_HEADERS
    core/modules/listeners/listeners_manager.h
)

Set(SOURCEPYTHON_LISTENERS_MODULE_SOURCES
    core/modules/listeners/listeners_manager.cpp
    core/modules/listeners/listeners_wrap.cpp
)

# ------------------------------------------------------------------
# Mathlib module
# ------------------------------------------------------------------
Set(SOURCEPYTHON_MATHLIB_MODULE_HEADERS
    core/modules/mathlib/mathlib.h
)

Set(SOURCEPYTHON_MATHLIB_MODULE_SOURCES
    core/modules/mathlib/mathlib_wrap.cpp
)

# ------------------------------------------------------------------
# Memory module
# ------------------------------------------------------------------
Set(SOURCEPYTHON_MEMORY_MODULE_HEADERS
    core/modules/memory/memory_alloc.h
    core/modules/memory/memory_calling_convention.h
    core/modules/memory/memory_function.h
    core/modules/memory/memory_function_info.h
    core/modules/memory/memory_hooks.h
    core/modules/memory/memory_pointer.h
    core/modules/memory/memory_scanner.h
    core/modules/memory/memory_signature.h
    core/modules/memory/memory_tools.h
    core/modules/memory/memory_utilities.h
    core/modules/memory/memory_wrap.h
    core/modules/memory/memory_rtti.h
    core/modules/memory/memory_exception.h
)

Set(SOURCEPYTHON_MEMORY_MODULE_SOURCES
    core/modules/memory/memory_function.cpp
    core/modules/memory/memory_hooks.cpp
    core/modules/memory/memory_pointer.cpp
    core/modules/memory/memory_scanner.cpp
    core/modules/memory/memory_wrap.cpp
    core/modules/memory/memory_rtti.cpp
    core/modules/memory/memory_exception.cpp
)

# ------------------------------------------------------------------
# Messages module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_MESSAGES_MODULE_HEADERS
    core/modules/messages/messages.h
)

Set(SOURCEPYTHON_MESSAGES_MODULE_SOURCES
    core/modules/messages/messages.cpp
    core/modules/messages/messages_wrap.cpp
)

# ------------------------------------------------------------------
# NetChannel module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_NET_CHANNEL_MODULE_HEADERS
)

Set(SOURCEPYTHON_NET_CHANNEL_MODULE_SOURCES
    core/modules/net_channel/net_channel_wrap.cpp
)

# ------------------------------------------------------------------
# Physics module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_PHYSICS_MODULE_HEADERS
    core/modules/physics/physics.h
)

Set(SOURCEPYTHON_PHYSICS_MODULE_SOURCES
    core/modules/physics/physics.cpp
    core/modules/physics/physics_wrap.cpp
)

# ------------------------------------------------------------------
# Players module
# ------------------------------------------------------------------
Set(SOURCEPYTHON_PLAYERS_MODULE_HEADERS
    core/modules/players/players_wrap.h
    core/modules/players/players_entity.h
    core/modules/players/players_generator.h
    core/modules/players/${SOURCE_ENGINE}/players_constants_wrap.h
    core/modules/players/${SOURCE_ENGINE}/players_wrap.h
)

Set(SOURCEPYTHON_PLAYERS_MODULE_SOURCES
    core/modules/players/players_bots_wrap.cpp
    core/modules/players/players_constants_wrap.cpp
    core/modules/players/players_entity.cpp
    core/modules/players/players_helpers_wrap.cpp
    core/modules/players/players_wrap.cpp
    core/modules/players/players_generator.cpp
    core/modules/players/players_voice.cpp
)

# ------------------------------------------------------------------
# Plugins module
# ------------------------------------------------------------------
Set(SOURCEPYTHON_PLUGINS_MODULE_HEADERS
    core/modules/plugins/plugins.h
)

Set(SOURCEPYTHON_PLUGINS_MODULE_SOURCES
    core/modules/plugins/plugins.cpp
    core/modules/plugins/plugins_wrap.cpp
)

# ------------------------------------------------------------------
# Steam module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_STEAM_MODULE_HEADERS
    core/modules/steam/steam_wrap.h
    core/modules/steam/${SOURCE_ENGINE}/steam_wrap.h
)

Set(SOURCEPYTHON_STEAM_MODULE_SOURCES
    core/modules/steam/steam_wrap.cpp
)

# ------------------------------------------------------------------
# StringTables module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_STRINGTABLES_MODULE_HEADERS
    core/modules/stringtables/stringtables.h
)

Set(SOURCEPYTHON_STRINGTABLES_MODULE_SOURCES
    core/modules/stringtables/stringtables.cpp
    core/modules/stringtables/stringtables_wrap.cpp
)

# ------------------------------------------------------------------
# Studio module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_STUDIO_MODULE_HEADERS
    core/modules/studio/studio.h
)

Set(SOURCEPYTHON_STUDIO_MODULE_SOURCES
    # hl2sdk/${BRANCH}/public/studio.cpp
    core/modules/studio/studio_wrap.cpp
    core/modules/studio/studio_constants_wrap.cpp
    core/modules/studio/studio_cache_wrap.cpp
)

# ------------------------------------------------------------------
# Weapons module.
# ------------------------------------------------------------------
Set(SOURCEPYTHON_WEAPONS_MODULE_HEADERS
    core/modules/weapons/${SOURCE_ENGINE}/weapons_constants_wrap.h
    core/modules/weapons/${SOURCE_ENGINE}/weapons_scripts_wrap.h
    core/modules/weapons/weapons_entity.h
)

Set(SOURCEPYTHON_WEAPONS_MODULE_SOURCES
    core/modules/weapons/weapons_constants_wrap.cpp
    core/modules/weapons/weapons_scripts_wrap.cpp
    core/modules/weapons/weapons_entity.cpp
    core/modules/weapons/weapons_entity_wrap.cpp
)

# ------------------------------------------------------------------
# All module source files
# ------------------------------------------------------------------
Set(SOURCEPYTHON_MODULE_FILES
    ${SOURCEPYTHON_CORE_CACHE_MODULE_HEADERS}
    ${SOURCEPYTHON_CORE_CACHE_MODULE_SOURCES}

    # CFunctionInfo must be exposed at first
    ${SOURCEPYTHON_MEMORY_MODULE_HEADERS}
    ${SOURCEPYTHON_MEMORY_MODULE_SOURCES}

    ${SOURCEPYTHON_BITBUFFERS_MODULE_HEADERS}
    ${SOURCEPYTHON_BITBUFFERS_MODULE_SOURCES}

    ${SOURCEPYTHON_COLORS_MODULE_HEADERS}
    ${SOURCEPYTHON_COLORS_MODULE_SOURCES}

    ${SOURCEPYTHON_COMMANDS_MODULE_HEADERS}
    ${SOURCEPYTHON_COMMANDS_MODULE_SOURCES}

    ${SOURCEPYTHON_CVARS_MODULE_HEADERS}
    ${SOURCEPYTHON_CVARS_MODULE_SOURCES}

    ${SOURCEPYTHON_EFFECTS_MODULE_HEADERS}
    ${SOURCEPYTHON_EFFECTS_MODULE_SOURCES}

    ${SOURCEPYTHON_ENGINES_MODULE_HEADERS}
    ${SOURCEPYTHON_ENGINES_MODULE_SOURCES}

    ${SOURCEPYTHON_ENTITIES_MODULE_HEADERS}
    ${SOURCEPYTHON_ENTITIES_MODULE_SOURCES}

    # Moved here cause CSourcePython relies on IEntityListener being
    # exposed at run-time.
    ${SOURCEPYTHON_CORE_MODULE_HEADERS}
    ${SOURCEPYTHON_CORE_MODULE_SOURCES}

    ${SOURCEPYTHON_EVENTS_MODULE_HEADERS}
    ${SOURCEPYTHON_EVENTS_MODULE_SOURCES}

    ${SOURCEPYTHON_GLOBALS_MODULE_HEADERS}
    ${SOURCEPYTHON_GLOBALS_MODULE_SOURCES}

    ${SOURCEPYTHON_KEYVALUES_MODULE_HEADERS}
    ${SOURCEPYTHON_KEYVALUES_MODULE_SOURCES}

    ${SOURCEPYTHON_LISTENERS_MODULE_HEADERS}
    ${SOURCEPYTHON_LISTENERS_MODULE_SOURCES}

    ${SOURCEPYTHON_MATHLIB_MODULE_HEADERS}
    ${SOURCEPYTHON_MATHLIB_MODULE_SOURCES}

    ${SOURCEPYTHON_MESSAGES_MODULE_HEADERS}
    ${SOURCEPYTHON_MESSAGES_MODULE_SOURCES}
    ${SOURCEPYTHON_MESSAGES_MODULE_GAME_SOURCES}

    ${SOURCEPYTHON_NET_CHANNEL_MODULE_HEADERS}
    ${SOURCEPYTHON_NET_CHANNEL_MODULE_SOURCES}

    ${SOURCEPYTHON_PHYSICS_MODULE_HEADERS}
    ${SOURCEPYTHON_PHYSICS_MODULE_SOURCES}

    ${SOURCEPYTHON_PLAYERS_MODULE_HEADERS}
    ${SOURCEPYTHON_PLAYERS_MODULE_SOURCES}

    ${SOURCEPYTHON_PLUGINS_MODULE_HEADERS}
    ${SOURCEPYTHON_PLUGINS_MODULE_SOURCES}

    ${SOURCEPYTHON_FILTERS_MODULE_HEADERS}
    ${SOURCEPYTHON_FILTERS_MODULE_SOURCES}

    ${SOURCEPYTHON_FILESYSTEM_MODULE_HEADERS}
    ${SOURCEPYTHON_FILESYSTEM_MODULE_SOURCES}

    ${SOURCEPYTHON_STEAM_MODULE_HEADERS}
    ${SOURCEPYTHON_STEAM_MODULE_SOURCES}

    ${SOURCEPYTHON_STRINGTABLES_MODULE_HEADERS}
    ${SOURCEPYTHON_STRINGTABLES_MODULE_SOURCES}

    ${SOURCEPYTHON_STUDIO_MODULE_HEADERS}
    ${SOURCEPYTHON_STUDIO_MODULE_SOURCES}

    ${SOURCEPYTHON_WEAPONS_MODULE_HEADERS}
    ${SOURCEPYTHON_WEAPONS_MODULE_SOURCES}
)

# ------------------------------------------------------------------
# Create source groups for everything to make our projects nice and
# clean.
# ------------------------------------------------------------------
Source_Group("Header Files\\Core"                           FILES ${SOURCEPYTHON_CORE_HEADERS})
Source_Group("Header Files\\Patches"                        FILES ${SOURCEPYTHON_PATCHES_HEADERS})
Source_Group("Header Files\\Utilities"                      FILES ${SOURCEPYTHON_UTILITIES_HEADERS})

Source_Group("Header Files\\Modules\\BitBuffers"             FILES ${SOURCEPYTHON_BITBUFFERS_MODULE_HEADERS})
Source_Group("Header Files\\Modules\\Colors"                 FILES ${SOURCEPYTHON_COLORS_MODULE_HEADERS})
Source_Group("Header Files\\Modules\\Commands"               FILES ${SOURCEPYTHON_COMMANDS_MODULE_HEADERS})
Source_Group("Header Files\\Modules\\Core"                   FILES ${SOURCEPYTHON_CORE_MODULE_HEADERS})
Source_Group("Header Files\\Modules\\Cvars"                  FILES ${SOURCEPYTHON_CVARS_MODULE_HEADERS})
Source_Group("Header Files\\Modules\\Effects"                FILES ${SOURCEPYTHON_EFFECTS_MODULE_HEADERS})
Source_Group("Header Files\\Modules\\Engines"                FILES ${SOURCEPYTHON_ENGINES_MODULE_HEADERS})
Source_Group("Header Files\\Modules\\Entities"               FILES ${SOURCEPYTHON_ENTITIES_MODULE_HEADERS})
Source_Group("Header Files\\Modules\\Events"                 FILES ${SOURCEPYTHON_EVENTS_MODULE_HEADERS})
Source_Group("Header Files\\Modules\\Globals"                FILES ${SOURCEPYTHON_GLOBALS_MODULE_HEADERS})
Source_Group("Header Files\\Modules\\KeyValues"              FILES ${SOURCEPYTHON_KEYVALUES_MODULE_HEADERS})
Source_Group("Header Files\\Modules\\Listeners"              FILES ${SOURCEPYTHON_LISTENERS_MODULE_HEADERS})
Source_Group("Header Files\\Modules\\Mathlib"                FILES ${SOURCEPYTHON_MATHLIB_MODULE_HEADERS})
Source_Group("Header Files\\Modules\\Memory"                 FILES ${SOURCEPYTHON_MEMORY_MODULE_HEADERS})
Source_Group("Header Files\\Modules\\Messages"               FILES ${SOURCEPYTHON_MESSAGES_MODULE_HEADERS})
Source_Group("Header Files\\Modules\\NetChannel"             FILES ${SOURCEPYTHON_NET_CHANNEL_MODULE_HEADERS})
Source_Group("Header Files\\Modules\\Physics"                FILES ${SOURCEPYTHON_PHYSICS_MODULE_HEADERS})
Source_Group("Header Files\\Modules\\Players"                FILES ${SOURCEPYTHON_PLAYERS_MODULE_HEADERS})
Source_Group("Header Files\\Modules\\Plugins"                FILES ${SOURCEPYTHON_PLUGINS_MODULE_HEADERS})
Source_Group("Header Files\\Modules\\Filesystem"             FILES ${SOURCEPYTHON_FILESYSTEM_MODULE_HEADERS})
Source_Group("Header Files\\Modules\\Filters"                FILES ${SOURCEPYTHON_FILTERS_MODULE_HEADERS})
Source_Group("Header Files\\Modules\\StringTables"           FILES ${SOURCEPYTHON_STRINGTABLES_MODULE_HEADERS})
Source_Group("Header Files\\Modules\\Steam"                  FILES ${SOURCEPYTHON_STEAM_MODULE_HEADERS})
Source_Group("Header Files\\Modules\\Studio"                 FILES ${SOURCEPYTHON_STUDIO_MODULE_HEADERS})
Source_Group("Header Files\\Modules\\Weapons"                FILES ${SOURCEPYTHON_WEAPONS_MODULE_HEADERS})

Source_Group("Source Files\\Core"                           FILES ${SOURCEPYTHON_CORE_SOURCES})
Source_Group("Source Files\\Patches"                        FILES ${SOURCEPYTHON_PATCHES_SOURCES})
Source_Group("Source Files\\Utilities"                      FILES ${SOURCEPYTHON_UTILITIES_SOURCES})

Source_Group("Source Files\\Modules\\BitBuffers"             FILES ${SOURCEPYTHON_BITBUFFERS_MODULE_SOURCES})
Source_Group("Source Files\\Modules\\Colors"                 FILES ${SOURCEPYTHON_COLORS_MODULE_SOURCES})
Source_Group("Source Files\\Modules\\Commands"               FILES ${SOURCEPYTHON_COMMANDS_MODULE_SOURCES})
Source_Group("Source Files\\Modules\\Core"                   FILES ${SOURCEPYTHON_CORE_MODULE_SOURCES})
Source_Group("Source Files\\Modules\\Cvars"                  FILES ${SOURCEPYTHON_CVARS_MODULE_SOURCES})
Source_Group("Source Files\\Modules\\Effects"                FILES ${SOURCEPYTHON_EFFECTS_MODULE_SOURCES})
Source_Group("Source Files\\Modules\\Engines"                FILES ${SOURCEPYTHON_ENGINES_MODULE_SOURCES})
Source_Group("Source Files\\Modules\\Entities"               FILES ${SOURCEPYTHON_ENTITIES_MODULE_SOURCES})
Source_Group("Source Files\\Modules\\Events"                 FILES ${SOURCEPYTHON_EVENTS_MODULE_SOURCES})
Source_Group("Source Files\\Modules\\Globals"                FILES ${SOURCEPYTHON_GLOBALS_MODULE_SOURCES})
Source_Group("Source Files\\Modules\\KeyValues"              FILES ${SOURCEPYTHON_KEYVALUES_MODULE_SOURCES})
Source_Group("Source Files\\Modules\\Listeners"              FILES ${SOURCEPYTHON_LISTENERS_MODULE_SOURCES})
Source_Group("Source Files\\Modules\\Mathlib"                FILES ${SOURCEPYTHON_MATHLIB_MODULE_SOURCES})
Source_Group("Source Files\\Modules\\Memory"                 FILES ${SOURCEPYTHON_MEMORY_MODULE_SOURCES})
Source_Group("Source Files\\Modules\\Messages"               FILES ${SOURCEPYTHON_MESSAGES_MODULE_SOURCES})
Source_Group("Source Files\\Modules\\NetChannel"             FILES ${SOURCEPYTHON_NET_CHANNEL_MODULE_SOURCES})
Source_Group("Source Files\\Modules\\Physics"                FILES ${SOURCEPYTHON_PHYSICS_MODULE_SOURCES})
Source_Group("Source Files\\Modules\\Players"                FILES ${SOURCEPYTHON_PLAYERS_MODULE_SOURCES})
Source_Group("Source Files\\Modules\\Plugins"                FILES ${SOURCEPYTHON_PLUGINS_MODULE_SOURCES})
Source_Group("Source Files\\Modules\\Filesystem"             FILES ${SOURCEPYTHON_FILESYSTEM_MODULE_SOURCES})
Source_Group("Source Files\\Modules\\Filters"                FILES ${SOURCEPYTHON_FILTERS_MODULE_SOURCES})
Source_Group("Source Files\\Modules\\Steam"                  FILES ${SOURCEPYTHON_STEAM_MODULE_SOURCES})
Source_Group("Source Files\\Modules\\StringTables"           FILES ${SOURCEPYTHON_STRINGTABLES_MODULE_SOURCES})
Source_Group("Source Files\\Modules\\Studio"                 FILES ${SOURCEPYTHON_STUDIO_MODULE_SOURCES})
Source_Group("Source Files\\Modules\\Weapons"                FILES ${SOURCEPYTHON_WEAPONS_MODULE_SOURCES})

# ------------------------------------------------------------------
# All SourcePython source files. Ideally we break out each group of
# files into their own defines (as above with SOURCEPYTHON_CORE_FILES.
# ------------------------------------------------------------------

# ------------------------------------------------------------------
# This basically creates the SourcePython project. Certain project
# attributes like Target_Link_Libraries need to be declared after
# this line.
# ------------------------------------------------------------------
Add_Library(core SHARED
    ${SOURCEPYTHON_PATCHES_FILES}
    ${SOURCEPYTHON_CORE_FILES}
    ${SOURCEPYTHON_MODULE_FILES}
    ${SOURCEPYTHON_UTILITIES_FILES}
)

Add_Library(source-python SHARED
    ${SOURCEPYTHON_LOADER_FILES}
)

# ------------------------------------------------------------------
# Remove prefixes for core and source-python
# ------------------------------------------------------------------
Set_Target_Properties(core PROPERTIES PREFIX "")
Set_Target_Properties(source-python PROPERTIES PREFIX "")

# ------------------------------------------------------------------
# Include the base makefile.
# ------------------------------------------------------------------
If(WIN32)
    include("makefiles/win32/win32.base.cmake")
Else()
    include("makefiles/linux/linux.base.cmake")
EndIf()

# ------------------------------------------------------------------
# Definitions
# ------------------------------------------------------------------

# ------------------------------------------------------------------
# [css2025_win32] Thirdparties
# ------------------------------------------------------------------

# dyncall
add_subdirectory(thirdparty/dyncall)
set(Dyncall_ROOT ${CMAKE_SOURCE_DIR}/thirdparty/dyncall)

target_include_directories(dyncall_s PUBLIC ${Dyncall_ROOT}/dyncall)
target_include_directories(dyncallback_s PUBLIC ${Dyncall_ROOT}/dyncallback)
target_include_directories(dynload_s PUBLIC ${Dyncall_ROOT}/dynload)

target_compile_options(dyncall_s PRIVATE "/MT" "/safeseh")
target_compile_options(dyncallback_s PRIVATE "/MT" "/safeseh")
target_compile_options(dynload_s PRIVATE "/MT" "/safeseh")


# DynamicHooks
add_subdirectory(thirdparty/DynamicHooks/src)
set(DynamicHooks_ROOT ${CMAKE_SOURCE_DIR}/thirdparty/DynamicHooks)

target_compile_definitions(DynamicHooks PUBLIC ASMJIT_STATIC=1)
target_include_directories(DynamicHooks PUBLIC ${DynamicHooks_ROOT}/src)
# Fix library path
set_property(TARGET DynamicHooks PROPERTY LINK_LIBRARIES )
target_link_libraries(DynamicHooks AsmJit)

target_compile_options(DynamicHooks PRIVATE "/MT")

# AsmJit
add_library(AsmJit INTERFACE)
set(AsmJit_ROOT ${DynamicHooks_ROOT}/src/thirdparty/AsmJit)

target_compile_definitions(AsmJit INTERFACE ASMJIT_STATIC=1)
target_include_directories(AsmJit INTERFACE ${AsmJit_ROOT}/include)
target_link_libraries(AsmJit INTERFACE ${AsmJit_ROOT}/lib/AsmJit)

# ------------------------------------------------------------------
# Setup link libraries for this project.
# ------------------------------------------------------------------
# [css2025_win32] Remove the old linkage list
#Target_Link_Libraries(core ${SOURCEPYTHON_LINK_LIBRARIES})
#Target_Link_Libraries(core ${SOURCEPYTHON_LINK_LIBRARIES_RELEASE})

#Target_Link_Libraries(source-python ${SOURCEPYTHON_LINK_LIBRARIES})

# [css2025_win32] Find packages installed via vcpkg
find_package(boost_filesystem REQUIRED CONFIG)
find_package(boost_python REQUIRED CONFIG)
find_package(boost_system REQUIRED CONFIG)
find_package(Python3 COMPONENTS Development REQUIRED)

# [css2025_win32] Set the runtime library
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

# [css2025_win32] Common settings for shared libraries
function(source_python_common TARGET_NAME)
    set_target_properties(${TARGET_NAME} PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED true
    )

    target_compile_options(${TARGET_NAME} PRIVATE
        "/MT"
        # C4819: The file contains a character that cannot be represented in the current code page
        "/wd4819"
    )

    target_compile_definitions(${TARGET_NAME} PRIVATE
        COMPILER_MSVC
        COMPILER_MSVC32
        WIN32
        _WIN32
        WINDOWS
        _WINDOWS
        PLATFORM_32BITS

        GAME_DLL=1
        SOURCE_ENGINE=${SOURCE_ENGINE}
        SOURCE_ENGINE_BRANCH=${BRANCH}
        BOOST_PYTHON_MAX_ARITY=32
        #BOOST_PYTHON_STATIC_LIB
        #BOOST_PYTHON_SOURCE
        #BOOST_PYTHON_NO_LIB

        HAVE_SNPRINTF=1
    )

    target_link_libraries(${TARGET_NAME}
        Boost::filesystem
        Boost::python
        Boost::system
        Python3::Python
        AsmJit
        DynamicHooks
        dyncall_s
        dyncallback_s
        dynload_s

        ${SOURCESDK_LIB}/public/x86/tier0.lib
        ${SOURCESDK_LIB}/public/x86/tier1.lib
        ${SOURCESDK_LIB}/public/x86/vstdlib.lib
        ${SOURCESDK_LIB}/public/x86/mathlib.lib
    )

    target_include_directories(${TARGET_NAME} PRIVATE
        ${SOURCESDK}
        ${SOURCESDK}/common
        ${SOURCESDK}/common/protobuf-2.5.0/src
        ${SOURCESDK}/game/shared
        ${SOURCESDK}/game/server
        ${SOURCESDK}/public
        ${SOURCESDK}/public/tier0
        ${SOURCESDK}/public/tier1
        ${SOURCESDK}/public/engine/protobuf
        #${DYNCALLSDK_INCLUDE}
        #${BOOSTSDK_INCLUDE}
        #${ASMJITSDK_INCLUDE}
        #${DYNAMICHOOKSSDK_INCLUDE}
        ${CMAKE_CURRENT_SOURCE_DIR}/core # Hack but required.
    )

    # [css2025_win32] You can start debugging from VS if you set CSS_SERVER_DIR env var.
    if(DEFINED ENV{CSS_SERVER_DIR})
        set_target_properties(${TARGET_NAME} PROPERTIES
            VS_DEBUGGER_COMMAND "$ENV{CSS_SERVER_DIR}\\srcds.exe"
            VS_DEBUGGER_COMMAND_ARGUMENTS "-console -game cstrike -port 27015 +map de_dust -autoupdate +sv_lan 1"
        )
    endif()
endfunction()

if(DEFINED ENV{CSS_SERVER_DIR})
    add_custom_command(
        TARGET source-python POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
            $<TARGET_FILE:source-python>
            "$ENV{CSS_SERVER_DIR}/cstrike/addons/source-python.dll"
    )
    add_custom_command(
        TARGET core POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
            $<TARGET_FILE:core>
            "$ENV{CSS_SERVER_DIR}/cstrike/addons/source-python/bin/core.dll"
    )
endif()

SOURCE_PYTHON_COMMON(core)
SOURCE_PYTHON_COMMON(source-python)

# Loads experimental projects
add_subdirectory(experiments)
