message(STATUS "Run CMake")
cmake_minimum_required (VERSION 2.6)

set (SRC_CORE 1)
set (SRC_IO 1)
set (SRC_UI 1)

message(STATUS "Radix project")

if (WIN32)
    message (STATUS "WIN32 All is well")
    set (WINDOWS 1)
endif (WIN32)
if (UNIX)
    message (WARNING "Unix! Radix only work on windows")
    set (WINDOWS 0)
endif (UNIX)

set (PROJECT Radix)

set_property( GLOBAL PROPERTY USE_FOLDERS ON )
set( CMAKE_SUPPRESS_REGENERATION true)
set( CMAKE_BUILD_TYPE RELEASE )
set( CMAKE_CONFIGURATION_TYPES "Release;Debug" )
message(STATUS "Bild type:  " ${CMAKE_BUILD_TYPE})
message(STATUS "Configuration type:  " ${CMAKE_BUILD_TYPE})
message(STATUS "---------[CHECK]-----------" )
message(STATUS "[CMAKE_SUPPRESS_REGENERATION " ${USE_FOLDERS} "]" "[CMAKE_BUILD_TYPE " ${CMAKE_BUILD_TYPE} "]" "[CMAKE_CONFIGURATION_TYPES " ${CMAKE_CONFIGURATION_TYPES} "]" )
message(STATUS "--------[PROJECT]----------" )
project (${PROJECT})
if (WINDOWS)
	if (SRC_CORE)
		message(STATUS "---------[CORE]------------")
		set (CORE_HEADERS
			src/core/ADB_mod.h
			src/core/ADB_slave.h
			src/core/CheckingFiles.h
			src/core/Color.h
			src/core/Constants.h
			src/core/ConstantsMenu.h
			src/core/Initialization.h
			src/core/Logo.h
			src/core/Radix.h)
		set (CORE_SOURCES
			src/core/ADB_mod.cpp
			src/core/ADB_slave.cpp
			src/core/CheckingFiles.cpp
			src/core/Main.cpp
			src/core/Color.cpp
			src/core/Initialization.cpp
			src/core/Radix.cpp)
		message(STATUS ${CORE_HEADERS})
		message(STATUS ${CORE_SOURCES})
	endif()
	if (SRC_IO)
		message(STATUS "-----------[IO]------------")
		set (IO_HEADERS
			src/io/Logger.h
			src/io/Settings.h
			src/io/Templates.h
			src/io/RulesList.h)
		set (IO_SOURCES
			src/io/Logger.cpp
			src/io/Settings.cpp
			src/io/Templates.cpp
			src/io/RulesList.cpp)
		message(STATUS ${IO_HEADERS})
		message(STATUS ${IO_SOURCES})
	endif()
	if (SRC_UI)
		message(STATUS "-----------[UI]------------")
		set (UI_HEADERS
			src/ui/CheckAgreement.h
			src/ui/Exit.h
			src/ui/LoadScale.h
			src/ui/MainMenu.h
			src/ui/Manual.h
			src/ui/QueryMenu.h)
		set (UI_SOURCES
			src/ui/CheckAgreement.cpp
			src/ui/Exit.cpp
			src/ui/LoadScale.cpp
			src/ui/MainMenu.cpp
			src/ui/Manual.cpp
			src/ui/QueryMenu.cpp)
		message(STATUS ${UI_HEADERS})
		message(STATUS ${UI_SOURCES})
	endif()
	message(STATUS "---------------------------")
	add_executable (${PROJECT} ${CORE_HEADERS} ${CORE_SOURCES} ${IO_HEADERS} ${IO_SOURCES} ${UI_HEADERS} ${UI_SOURCES})
endif()

if (UNIX)
	message(STATUS "Unix is not supported")
	message(STATUS "---------[EXAMPLES]----------")
	set (UNIX_SOURCES examples/Unix.cpp)
	add_executable (${PROJECT} ${UNIX_SOURCES})
	message(STATUS "---------------------------")
endif()
message(STATUS "Stop CMake")
