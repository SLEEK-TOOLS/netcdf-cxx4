#ifndef NETCDF_CXX4_LIB_CONFIGURATION_INCLUDED
#define NETCDF_CXX4_LIB_CONFIGURATION_INCLUDED

//
// Ensure that NETCDF_CXX4_DLL is default unless NETCDF_CXX4_STATIC is defined
//
#if defined(_WIN32) // && defined(_DLL)
#if !defined(NETCDF_CXX4_DLL) && !defined(NETCDF_CXX4_STATIC)
#define NETCDF_CXX4_DLL
#endif
#endif

#if defined(_MSC_VER)
#if defined(NETCDF_CXX4_DLL)
#if defined(_DEBUG)
#define NETCDF_CXX4_LIB_SUFFIX "d.lib"
#else
#define NETCDF_CXX4_LIB_SUFFIX ".lib"
#endif
#elif defined(_DLL)
#if defined(_DEBUG)
#define NETCDF_CXX4_LIB_SUFFIX "mdd.lib"
#else
#define NETCDF_CXX4_LIB_SUFFIX "md.lib"
#endif
#else
#if defined(_DEBUG)
#define NETCDF_CXX4_LIB_SUFFIX "mtd.lib"
#else
#define NETCDF_CXX4_LIB_SUFFIX "mt.lib"
#endif
#endif
#endif

#endif // NETCDF_CXX4_LIB_CONFIGURATION_INCLUDED


#ifndef NETCDF_CXX4_EXPORTS_INCLUDED
#define NETCDF_CXX4_EXPORTS_INCLUDED
//
// The following block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the NETCDF_CXX4_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// NETCDF_CXX4_API functions as being imported from a DLL, wheras this DLL sees symbols
// defined with this macro as being exported.
//

#if defined(_WIN32) && defined(NETCDF_CXX4_DLL)
#if defined(NETCDF_CXX4_EXPORTS)
#define NETCDF_CXX4_API __declspec(dllexport)
#else
#define NETCDF_CXX4_API __declspec(dllimport)
#endif
#endif

#if !defined(NETCDF_CXX4_API)
#if !defined(NETCDF_CXX4_NO_GCC_API_ATTRIBUTE) && defined (__GNUC__) && (__GNUC__ >= 4)
#define NETCDF_CXX4_API __attribute__ ((visibility ("default")))
#else
#define NETCDF_CXX4_API
#endif
#endif

////
//// Automatically link moja.providers.mulliongroup.base library.
////
//#if defined(_MSC_VER)
//#if !defined(NETCDF_CXX4_NO_AUTOMATIC_LIBS) && !defined(NETCDF_CXX4_EXPORTS)
//#pragma comment(lib, "moja.providers.mulliongroup.base" NETCDF_CXX4_LIB_SUFFIX)
//#endif
//#endif

#endif // NETCDF_CXX4_EXPORTS_INCLUDED
