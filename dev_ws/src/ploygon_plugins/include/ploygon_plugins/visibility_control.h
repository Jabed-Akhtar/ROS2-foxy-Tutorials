#ifndef PLOYGON_PLUGINS__VISIBILITY_CONTROL_H_
#define PLOYGON_PLUGINS__VISIBILITY_CONTROL_H_

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define PLOYGON_PLUGINS_EXPORT __attribute__ ((dllexport))
    #define PLOYGON_PLUGINS_IMPORT __attribute__ ((dllimport))
  #else
    #define PLOYGON_PLUGINS_EXPORT __declspec(dllexport)
    #define PLOYGON_PLUGINS_IMPORT __declspec(dllimport)
  #endif
  #ifdef PLOYGON_PLUGINS_BUILDING_LIBRARY
    #define PLOYGON_PLUGINS_PUBLIC PLOYGON_PLUGINS_EXPORT
  #else
    #define PLOYGON_PLUGINS_PUBLIC PLOYGON_PLUGINS_IMPORT
  #endif
  #define PLOYGON_PLUGINS_PUBLIC_TYPE PLOYGON_PLUGINS_PUBLIC
  #define PLOYGON_PLUGINS_LOCAL
#else
  #define PLOYGON_PLUGINS_EXPORT __attribute__ ((visibility("default")))
  #define PLOYGON_PLUGINS_IMPORT
  #if __GNUC__ >= 4
    #define PLOYGON_PLUGINS_PUBLIC __attribute__ ((visibility("default")))
    #define PLOYGON_PLUGINS_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define PLOYGON_PLUGINS_PUBLIC
    #define PLOYGON_PLUGINS_LOCAL
  #endif
  #define PLOYGON_PLUGINS_PUBLIC_TYPE
#endif

#endif  // PLOYGON_PLUGINS__VISIBILITY_CONTROL_H_
