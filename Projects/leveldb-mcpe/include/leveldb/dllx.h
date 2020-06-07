#ifdef LEVELDB_EXPORTS
        #define DLLX __declspec(dllexport)
#else
        #define DLLX __declspec(dllimport)
#endif
