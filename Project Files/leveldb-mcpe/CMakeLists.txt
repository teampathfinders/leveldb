set(PROJECT_NAME LevelDB-MCPE)

################################################################################
# Source groups
################################################################################
set(Header_Files
    "../../Projects/include/unistd.h"
    "../../Projects/leveldb-mcpe/db/builder.h"
    "../../Projects/leveldb-mcpe/db/db_impl.h"
    "../../Projects/leveldb-mcpe/db/db_iter.h"
    "../../Projects/leveldb-mcpe/db/dbformat.h"
    "../../Projects/leveldb-mcpe/db/filename.h"
    "../../Projects/leveldb-mcpe/db/log_format.h"
    "../../Projects/leveldb-mcpe/db/log_reader.h"
    "../../Projects/leveldb-mcpe/db/log_writer.h"
    "../../Projects/leveldb-mcpe/db/memtable.h"
    "../../Projects/leveldb-mcpe/db/skiplist.h"
    "../../Projects/leveldb-mcpe/db/snapshot.h"
    "../../Projects/leveldb-mcpe/db/table_cache.h"
    "../../Projects/leveldb-mcpe/db/version_edit.h"
    "../../Projects/leveldb-mcpe/db/version_set.h"
    "../../Projects/leveldb-mcpe/db/write_batch_internal.h"
    "../../Projects/leveldb-mcpe/helpers/memenv/memenv.h"
    "../../Projects/leveldb-mcpe/include/leveldb/c.h"
    "../../Projects/leveldb-mcpe/include/leveldb/cache.h"
    "../../Projects/leveldb-mcpe/include/leveldb/comparator.h"
    "../../Projects/leveldb-mcpe/include/leveldb/compressor.h"
    "../../Projects/leveldb-mcpe/include/leveldb/db.h"
    "../../Projects/leveldb-mcpe/include/leveldb/decompress_allocator.h"
    "../../Projects/leveldb-mcpe/include/leveldb/dumpfile.h"
    "../../Projects/leveldb-mcpe/include/leveldb/env.h"
    "../../Projects/leveldb-mcpe/include/leveldb/filter_policy.h"
    "../../Projects/leveldb-mcpe/include/leveldb/iterator.h"
    "../../Projects/leveldb-mcpe/include/leveldb/options.h"
    "../../Projects/leveldb-mcpe/include/leveldb/slice.h"
    "../../Projects/leveldb-mcpe/include/leveldb/snappy_compressor.h"
    "../../Projects/leveldb-mcpe/include/leveldb/status.h"
    "../../Projects/leveldb-mcpe/include/leveldb/table.h"
    "../../Projects/leveldb-mcpe/include/leveldb/table_builder.h"
    "../../Projects/leveldb-mcpe/include/leveldb/write_batch.h"
    "../../Projects/leveldb-mcpe/include/leveldb/zlib_compressor.h"
    "../../Projects/leveldb-mcpe/port/atomic_pointer.h"
    "../../Projects/leveldb-mcpe/port/port.h"
    "../../Projects/leveldb-mcpe/port/port_win.h"
    "../../Projects/leveldb-mcpe/port/thread_annotations.h"
    "../../Projects/leveldb-mcpe/port/win/stdint.h"
    "../../Projects/leveldb-mcpe/table/block.h"
    "../../Projects/leveldb-mcpe/table/block_builder.h"
    "../../Projects/leveldb-mcpe/table/filter_block.h"
    "../../Projects/leveldb-mcpe/table/format.h"
    "../../Projects/leveldb-mcpe/table/iterator_wrapper.h"
    "../../Projects/leveldb-mcpe/table/merger.h"
    "../../Projects/leveldb-mcpe/table/two_level_iterator.h"
    "../../Projects/leveldb-mcpe/util/arena.h"
    "../../Projects/leveldb-mcpe/util/coding.h"
    "../../Projects/leveldb-mcpe/util/crc32c.h"
    "../../Projects/leveldb-mcpe/util/Filepath.h"
    "../../Projects/leveldb-mcpe/util/hash.h"
    "../../Projects/leveldb-mcpe/util/histogram.h"
    "../../Projects/leveldb-mcpe/util/logging.h"
    "../../Projects/leveldb-mcpe/util/mutexlock.h"
    "../../Projects/leveldb-mcpe/util/random.h"
    "../../Projects/leveldb-mcpe/util/win_logger.h"
    "../../Projects/zlib/crc32.h"
    "../../Projects/zlib/deflate.h"
    "../../Projects/zlib/gzguts.h"
    "../../Projects/zlib/inffast.h"
    "../../Projects/zlib/inffixed.h"
    "../../Projects/zlib/inflate.h"
    "../../Projects/zlib/inftrees.h"
    "../../Projects/zlib/trees.h"
    "../../Projects/zlib/zconf.h"
    "../../Projects/zlib/zlib.h"
    "../../Projects/zlib/zutil.h"
)
source_group("Header Files" FILES ${Header_Files})

set(Source_Files
    "../../Projects/leveldb-mcpe/db/builder.cc"
    "../../Projects/leveldb-mcpe/db/c.cc"
    "../../Projects/leveldb-mcpe/db/db_impl.cc"
    "../../Projects/leveldb-mcpe/db/db_iter.cc"
    "../../Projects/leveldb-mcpe/db/dbformat.cc"
    "../../Projects/leveldb-mcpe/db/dumpfile.cc"
    "../../Projects/leveldb-mcpe/db/filename.cc"
    "../../Projects/leveldb-mcpe/db/leveldbutil.cc"
    "../../Projects/leveldb-mcpe/db/log_reader.cc"
    "../../Projects/leveldb-mcpe/db/log_writer.cc"
    "../../Projects/leveldb-mcpe/db/memtable.cc"
    "../../Projects/leveldb-mcpe/db/repair.cc"
    "../../Projects/leveldb-mcpe/db/snappy_compressor.cc"
    "../../Projects/leveldb-mcpe/db/table_cache.cc"
    "../../Projects/leveldb-mcpe/db/version_edit.cc"
    "../../Projects/leveldb-mcpe/db/version_set.cc"
    "../../Projects/leveldb-mcpe/db/write_batch.cc"
    "../../Projects/leveldb-mcpe/db/zlib_compressor.cc"
    "../../Projects/leveldb-mcpe/helpers/memenv/memenv.cc"
    "../../Projects/leveldb-mcpe/port/port_posix_sse.cc"
    "../../Projects/leveldb-mcpe/port/port_win.cc"
    "../../Projects/leveldb-mcpe/table/block.cc"
    "../../Projects/leveldb-mcpe/table/block_builder.cc"
    "../../Projects/leveldb-mcpe/table/filter_block.cc"
    "../../Projects/leveldb-mcpe/table/format.cc"
    "../../Projects/leveldb-mcpe/table/iterator.cc"
    "../../Projects/leveldb-mcpe/table/merger.cc"
    "../../Projects/leveldb-mcpe/table/table.cc"
    "../../Projects/leveldb-mcpe/table/table_builder.cc"
    "../../Projects/leveldb-mcpe/table/two_level_iterator.cc"
    "../../Projects/leveldb-mcpe/util/arena.cc"
    "../../Projects/leveldb-mcpe/util/bloom.cc"
    "../../Projects/leveldb-mcpe/util/cache.cc"
    "../../Projects/leveldb-mcpe/util/coding.cc"
    "../../Projects/leveldb-mcpe/util/comparator.cc"
    "../../Projects/leveldb-mcpe/util/crc32c.cc"
    "../../Projects/leveldb-mcpe/util/env.cc"
    "../../Projects/leveldb-mcpe/util/env_win.cc"
    "../../Projects/leveldb-mcpe/util/filter_policy.cc"
    "../../Projects/leveldb-mcpe/util/hash.cc"
    "../../Projects/leveldb-mcpe/util/histogram.cc"
    "../../Projects/leveldb-mcpe/util/logging.cc"
    "../../Projects/leveldb-mcpe/util/options.cc"
    "../../Projects/leveldb-mcpe/util/status.cc"
    "../../Projects/leveldb-mcpe/util/win_logger.cc"
    "../../Projects/zlib/adler32.c"
    "../../Projects/zlib/compress.c"
    "../../Projects/zlib/crc32.c"
    "../../Projects/zlib/deflate.c"
    "../../Projects/zlib/gzclose.c"
    "../../Projects/zlib/gzlib.c"
    "../../Projects/zlib/gzread.c"
    "../../Projects/zlib/gzwrite.c"
    "../../Projects/zlib/infback.c"
    "../../Projects/zlib/inffast.c"
    "../../Projects/zlib/inflate.c"
    "../../Projects/zlib/inftrees.c"
    "../../Projects/zlib/trees.c"
    "../../Projects/zlib/uncompr.c"
    "../../Projects/zlib/zutil.c"
)
source_group("Source Files" FILES ${Source_Files})

set(ALL_FILES
    ${Header_Files}
    ${Source_Files}
)

################################################################################
# Target
################################################################################
add_library(${PROJECT_NAME} SHARED ${ALL_FILES})

use_props(${PROJECT_NAME} "${CMAKE_CONFIGURATION_TYPES}" "${DEFAULT_CXX_PROPS}")
set_target_properties(${PROJECT_NAME} PROPERTIES
    VS_GLOBAL_KEYWORD "Win32Proj"
)
################################################################################
# Target name
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_DEBUG   "leveldb"
        TARGET_NAME_RELEASE "leveldb"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_DEBUG   "leveldb"
        TARGET_NAME_RELEASE "leveldb"
    )
endif()
################################################################################
# Output directory
################################################################################
# if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
#     set_target_properties(${PROJECT_NAME} PROPERTIES
#         OUTPUT_DIRECTORY_DEBUG   "${CMAKE_SOURCE_DIR}/BuildOutput/${PROJECT_NAME}/${CMAKE_VS_PLATFORM_NAME}/$<CONFIG>/"
#         OUTPUT_DIRECTORY_RELEASE "${CMAKE_SOURCE_DIR}/BuildOutput/${PROJECT_NAME}/${CMAKE_VS_PLATFORM_NAME}/$<CONFIG>/"
#     )
# elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
#     set_target_properties(${PROJECT_NAME} PROPERTIES
#         OUTPUT_DIRECTORY_DEBUG   "${CMAKE_SOURCE_DIR}/BuildOutput/${PROJECT_NAME}/${CMAKE_VS_PLATFORM_NAME}/$<CONFIG>/"
#         OUTPUT_DIRECTORY_RELEASE "${CMAKE_SOURCE_DIR}/BuildOutput/${PROJECT_NAME}/${CMAKE_VS_PLATFORM_NAME}/$<CONFIG>/"
#     )
# endif()
################################################################################
# MSVC runtime library
################################################################################
get_property(MSVC_RUNTIME_LIBRARY_DEFAULT TARGET ${PROJECT_NAME} PROPERTY MSVC_RUNTIME_LIBRARY)
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    string(CONCAT "MSVC_RUNTIME_LIBRARY_STR"
        $<$<CONFIG:Debug>:
            MultiThreadedDebugDLL
        >
        $<$<CONFIG:Release>:
            MultiThreadedDLL
        >
        $<$<NOT:$<OR:$<CONFIG:Debug>,$<CONFIG:Release>>>:${MSVC_RUNTIME_LIBRARY_DEFAULT}>
    )
endif()
# set_target_properties(${PROJECT_NAME} PROPERTIES MSVC_RUNTIME_LIBRARY ${MSVC_RUNTIME_LIBRARY_STR})

################################################################################
# Include directories
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/../../Projects/zlib;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../../Projects;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../../Projects/leveldb-mcpe/port;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../../Projects/leveldb-mcpe/include;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../../Projects/include;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../../Projects/leveldb-mcpe"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/../../Projects/zlib;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../../Projects;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../../Projects/leveldb-mcpe/port;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../../Projects/leveldb-mcpe/include;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../../Projects/include;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../../Projects/leveldb-mcpe"
    )
endif()

################################################################################
# Compile definitions
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "WIN32;"
        "OS_WIN;"
        "_WINDLL;"
        "DLLX=__declspec(dllexport);"
        "ssize_t=__int64"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "$<$<CONFIG:Debug>:"
            "__DEBUG"
        ">"
        "$<$<CONFIG:Release>:"
            "NDEBUG"
        ">"
        "WIN32;"
        "OS_WIN;"
        "DLLX=__declspec( dllexport );"
        "ssize_t=long;"
        "_WINDOWS"
    )
endif()

################################################################################
# Compile and link options
################################################################################
if(MSVC)
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        target_compile_options(${PROJECT_NAME} PRIVATE
            ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
            ${DEFAULT_CXX_EXCEPTION_HANDLING}
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        target_compile_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Debug>:
                /Od
            >
            /W3;
            /Zi;
            ${DEFAULT_CXX_EXCEPTION_HANDLING}
        )
    endif()
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        target_link_options(${PROJECT_NAME} PRIVATE
            /DEBUG:FULL
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        target_link_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Release>:
                /OPT:REF;
                /OPT:ICF
            >
            /DEBUG;
            /MACHINE:X86;
            /SUBSYSTEM:WINDOWS;
            /INCREMENTAL
        )
    endif()
endif()

