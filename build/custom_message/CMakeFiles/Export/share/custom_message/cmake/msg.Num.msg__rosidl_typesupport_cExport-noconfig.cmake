#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "custom_message::msg.Num.msg__rosidl_typesupport_c" for configuration ""
set_property(TARGET custom_message::msg.Num.msg__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(custom_message::msg.Num.msg__rosidl_typesupport_c PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmsg.Num.msg__rosidl_typesupport_c.so"
  IMPORTED_SONAME_NOCONFIG "libmsg.Num.msg__rosidl_typesupport_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS custom_message::msg.Num.msg__rosidl_typesupport_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_custom_message::msg.Num.msg__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/libmsg.Num.msg__rosidl_typesupport_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
