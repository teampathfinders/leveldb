set(PROJECT_NAME LevelDB-MCPE)

################################################################################
# Source groups
################################################################################
set(Header_Files
    "../lib/include/unistd.h"
    "../lib/leveldb-mcpe/db/builder.h"
    "../lib/leveldb-mcpe/db/db_impl.h"
    "../lib/leveldb-mcpe/db/db_iter.h"
    "../lib/leveldb-mcpe/db/dbformat.h"
    "../lib/leveldb-mcpe/db/filename.h"
    "../lib/leveldb-mcpe/db/log_format.h"
    "../lib/leveldb-mcpe/db/log_reader.h"
    "../lib/leveldb-mcpe/db/log_writer.h"
    "../lib/leveldb-mcpe/db/memtable.h"
    "../lib/leveldb-mcpe/db/skiplist.h"
    "../lib/leveldb-mcpe/db/snapshot.h"
    "../lib/leveldb-mcpe/db/table_cache.h"
    "../lib/leveldb-mcpe/db/version_edit.h"
    "../lib/leveldb-mcpe/db/version_set.h"
    "../lib/leveldb-mcpe/db/write_batch_internal.h"
    "../lib/leveldb-mcpe/helpers/memenv/memenv.h"
    "../lib/leveldb-mcpe/include/leveldb/c.h"
    "../lib/leveldb-mcpe/include/leveldb/cache.h"
    "../lib/leveldb-mcpe/include/leveldb/comparator.h"
    "../lib/leveldb-mcpe/include/leveldb/compressor.h"
    "../lib/leveldb-mcpe/include/leveldb/db.h"
    "../lib/leveldb-mcpe/include/leveldb/decompress_allocator.h"
    "../lib/leveldb-mcpe/include/leveldb/dumpfile.h"
    "../lib/leveldb-mcpe/include/leveldb/env.h"
    "../lib/leveldb-mcpe/include/leveldb/filter_policy.h"
    "../lib/leveldb-mcpe/include/leveldb/iterator.h"
    "../lib/leveldb-mcpe/include/leveldb/options.h"
    "../lib/leveldb-mcpe/include/leveldb/slice.h"
    "../lib/leveldb-mcpe/include/leveldb/snappy_compressor.h"
    "../lib/leveldb-mcpe/include/leveldb/status.h"
    "../lib/leveldb-mcpe/include/leveldb/table.h"
    "../lib/leveldb-mcpe/include/leveldb/table_builder.h"
    "../lib/leveldb-mcpe/include/leveldb/write_batch.h"
    "../lib/leveldb-mcpe/include/leveldb/zlib_compressor.h"
    "../lib/leveldb-mcpe/port/atomic_pointer.h"
    "../lib/leveldb-mcpe/port/port.h"
    "../lib/leveldb-mcpe/port/port_win.h"
    "../lib/leveldb-mcpe/port/thread_annotations.h"
    "../lib/leveldb-mcpe/port/win/stdint.h"
    "../lib/leveldb-mcpe/table/block.h"
    "../lib/leveldb-mcpe/table/block_builder.h"
    "../lib/leveldb-mcpe/table/filter_block.h"
    "../lib/leveldb-mcpe/table/format.h"
    "../lib/leveldb-mcpe/table/iterator_wrapper.h"
    "../lib/leveldb-mcpe/table/merger.h"
    "../lib/leveldb-mcpe/table/two_level_iterator.h"
    "../lib/leveldb-mcpe/util/arena.h"
    "../lib/leveldb-mcpe/util/coding.h"
    "../lib/leveldb-mcpe/util/crc32c.h"
    "../lib/leveldb-mcpe/util/Filepath.h"
    "../lib/leveldb-mcpe/util/hash.h"
    "../lib/leveldb-mcpe/util/histogram.h"
    "../lib/leveldb-mcpe/util/logging.h"
    "../lib/leveldb-mcpe/util/mutexlock.h"
    "../lib/leveldb-mcpe/util/random.h"
    "../lib/leveldb-mcpe/util/win_logger.h"
    "../lib/zlib/crc32.h"
    "../lib/zlib/deflate.h"
    "../lib/zlib/gzguts.h"
    "../lib/zlib/inffast.h"
    "../lib/zlib/inffixed.h"
    "../lib/zlib/inflate.h"
    "../lib/zlib/inftrees.h"
    "../lib/zlib/trees.h"
    "../lib/zlib/zconf.h"
    "../lib/zlib/zlib.h"
    "../lib/zlib/zutil.h"
)
source_group("Header Files" FILES ${Header_Files})

set(Source_Files
    "../lib/leveldb-mcpe/db/builder.cc"
    "../lib/leveldb-mcpe/db/c.cc"
    "../lib/leveldb-mcpe/db/db_impl.cc"
    "../lib/leveldb-mcpe/db/db_iter.cc"
    "../lib/leveldb-mcpe/db/dbformat.cc"
    "../lib/leveldb-mcpe/db/dumpfile.cc"
    "../lib/leveldb-mcpe/db/filename.cc"
    "../lib/leveldb-mcpe/db/leveldbutil.cc"
    "../lib/leveldb-mcpe/db/log_reader.cc"
    "../lib/leveldb-mcpe/db/log_writer.cc"
    "../lib/leveldb-mcpe/db/memtable.cc"
    "../lib/leveldb-mcpe/db/repair.cc"
    "../lib/leveldb-mcpe/db/snappy_compressor.cc"
    "../lib/leveldb-mcpe/db/table_cache.cc"
    "../lib/leveldb-mcpe/db/version_edit.cc"
    "../lib/leveldb-mcpe/db/version_set.cc"
    "../lib/leveldb-mcpe/db/write_batch.cc"
    "../lib/leveldb-mcpe/db/zlib_compressor.cc"
    "../lib/leveldb-mcpe/helpers/memenv/memenv.cc"
    "../lib/leveldb-mcpe/port/port_posix_sse.cc"
    "../lib/leveldb-mcpe/port/port_win.cc"
    "../lib/leveldb-mcpe/table/block.cc"
    "../lib/leveldb-mcpe/table/block_builder.cc"
    "../lib/leveldb-mcpe/table/filter_block.cc"
    "../lib/leveldb-mcpe/table/format.cc"
    "../lib/leveldb-mcpe/table/iterator.cc"
    "../lib/leveldb-mcpe/table/merger.cc"
    "../lib/leveldb-mcpe/table/table.cc"
    "../lib/leveldb-mcpe/table/table_builder.cc"
    "../lib/leveldb-mcpe/table/two_level_iterator.cc"
    "../lib/leveldb-mcpe/util/arena.cc"
    "../lib/leveldb-mcpe/util/bloom.cc"
    "../lib/leveldb-mcpe/util/cache.cc"
    "../lib/leveldb-mcpe/util/coding.cc"
    "../lib/leveldb-mcpe/util/comparator.cc"
    "../lib/leveldb-mcpe/util/crc32c.cc"
    "../lib/leveldb-mcpe/util/env.cc"
    "../lib/leveldb-mcpe/util/env_win.cc"
    "../lib/leveldb-mcpe/util/filter_policy.cc"
    "../lib/leveldb-mcpe/util/hash.cc"
    "../lib/leveldb-mcpe/util/histogram.cc"
    "../lib/leveldb-mcpe/util/logging.cc"
    "../lib/leveldb-mcpe/util/options.cc"
    "../lib/leveldb-mcpe/util/status.cc"
    "../lib/leveldb-mcpe/util/win_logger.cc"
    "../lib/zlib/adler32.c"
    "../lib/zlib/compress.c"
    "../lib/zlib/crc32.c"
    "../lib/zlib/deflate.c"
    "../lib/zlib/gzclose.c"
    "../lib/zlib/gzlib.c"
    "../lib/zlib/gzread.c"
    "../lib/zlib/gzwrite.c"
    "../lib/zlib/infback.c"
    "../lib/zlib/inffast.c"
    "../lib/zlib/inflate.c"
    "../lib/zlib/inftrees.c"
    "../lib/zlib/trees.c"
    "../lib/zlib/uncompr.c"
    "../lib/zlib/zutil.c"
)
source_group("Source Files" FILES ${Source_Files})

set(ALL_FILES
    ${Header_Files}
    ${Source_Files}
)

################################################################################
# Target
################################################################################
add_library(${PROJECT_NAME} STATIC ${ALL_FILES})

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

target_include_directories(${PROJECT_NAME} PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/../lib/zlib;"
    "${CMAKE_CURRENT_SOURCE_DIR}/../lib;"
    "${CMAKE_CURRENT_SOURCE_DIR}/../lib/leveldb-mcpe/port;"
    "${CMAKE_CURRENT_SOURCE_DIR}/../lib/leveldb-mcpe/include;"
    "${CMAKE_CURRENT_SOURCE_DIR}/../lib/include;"
    "${CMAKE_CURRENT_SOURCE_DIR}/../lib/leveldb-mcpe"
)

target_compile_definitions(${PROJECT_NAME} PRIVATE "-DDLLX=__declspec(dllexport)")

#if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    #target_compile_definitions(${PROJECT_NAME} PRIVATE
    #    "WIN32;"
    #    "OS_WIN;"
    #    "_WINDLL;"
    #    "DLLX=__declspec(dllexport);"
    #    "ssize_t=__int64"
    #)
#elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    #target_compile_definitions(${PROJECT_NAME} PRIVATE
    #    "$<$<CONFIG:Debug>:"
    #        "__DEBUG"
    #    ">"
    #    "$<$<CONFIG:Release>:"
    #        "NDEBUG"
    #    ">"
    #    "WIN32;"
    #    "OS_WIN;"
    #    "DLLX=__declspec( dllexport );"
    #    "ssize_t=long;"
    #    "_WINDOWS"
    #)
#endif()

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

