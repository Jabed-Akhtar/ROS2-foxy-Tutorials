#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ploygon_plugins::polygon_plugins" for configuration ""
set_property(TARGET ploygon_plugins::polygon_plugins APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(ploygon_plugins::polygon_plugins PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libpolygon_plugins.so"
  IMPORTED_SONAME_NOCONFIG "libpolygon_plugins.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ploygon_plugins::polygon_plugins )
list(APPEND _IMPORT_CHECK_FILES_FOR_ploygon_plugins::polygon_plugins "${_IMPORT_PREFIX}/lib/libpolygon_plugins.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
