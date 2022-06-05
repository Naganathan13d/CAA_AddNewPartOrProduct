#ifdef  _WINDOWS_SOURCE
#ifdef  __TRAStCommandMod
#define ExportedByTRAStCommandMod     __declspec(dllexport)
#else
#define ExportedByTRAStCommandMod     __declspec(dllimport)
#endif
#else
#define ExportedByTRAStCommandMod
#endif
