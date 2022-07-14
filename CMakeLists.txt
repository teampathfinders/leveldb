cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

set(CMAKE_TRY_COMPILE_TARGET_TYPE "STATIC_LIBRARY")
set(CMAKE_SYSTEM_VERSION 10 CACHE STRING "" FORCE)
set(CMAKE_CXX_STANDARD 11)

project(leveldb-mcpe C CXX)

add_definitions(-DLEVELDB_EXPORTS -lstdc++)
add_subdirectory("lib/zlib")

################################################################################
# Set target arch type if empty. Visual studio solution generator provides it.
################################################################################
if(NOT CMAKE_VS_PLATFORM_NAME)
    set(CMAKE_VS_PLATFORM_NAME "x64")
endif()
message("${CMAKE_VS_PLATFORM_NAME} architecture in use")

if(NOT ("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64"
     OR "${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86"))
    message(FATAL_ERROR "${CMAKE_VS_PLATFORM_NAME} arch is not supported!")
endif()

################################################################################
# Common utils
################################################################################
include(CMake/Utils.cmake)

################################################################################
# Additional Global Settings(add specific info there)
################################################################################
include(CMake/GlobalSettingsInclude.cmake OPTIONAL)

################################################################################
# Sub-projects
################################################################################
add_subdirectory("leveldb-mcpe")

link_directories("leveldb-mcpe/LevelDB-MCPE.dir")
