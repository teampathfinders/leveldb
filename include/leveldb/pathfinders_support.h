#ifndef PATHFINDERS_LEVELDB_SUPPORT_H
#define PATHFINDERS_LEVELDB_SUPPORT_H

// Used for https://github.com/pathfinders-group/blockpoint
// By RadiatedMonkey

#include <cstdint>

#ifdef INTPTR_MAX == INT64_MAX
    using ssize_t = int64_t;
#elif INTPTR_MAX == INT32_MAX
    using ssize_t = int32_t;
#endif

// Static libraries don't need anything
#define DLLX

// Used for shared library
//#ifdef LEVELDB_EXPORT
//    #ifdef WIN32
//        #define DLLX __declspec(dllexport)
//    #else
//        #define DLLX
//    #endif
//#else
//    #ifdef WIN32
//        #define DLLX __declspec(dllimport)
//    #else
//        #define DLLX
//    #endif
//#endif

#endif // PATHFINDERS_LEVELDB_SUPPORT_H