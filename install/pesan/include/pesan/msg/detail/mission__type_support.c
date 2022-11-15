// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pesan:msg/Mission.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pesan/msg/detail/mission__rosidl_typesupport_introspection_c.h"
#include "pesan/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pesan/msg/detail/mission__functions.h"
#include "pesan/msg/detail/mission__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Mission__rosidl_typesupport_introspection_c__Mission_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pesan__msg__Mission__init(message_memory);
}

void Mission__rosidl_typesupport_introspection_c__Mission_fini_function(void * message_memory)
{
  pesan__msg__Mission__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Mission__rosidl_typesupport_introspection_c__Mission_message_member_array[1] = {
  {
    "mission",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pesan__msg__Mission, mission),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Mission__rosidl_typesupport_introspection_c__Mission_message_members = {
  "pesan__msg",  // message namespace
  "Mission",  // message name
  1,  // number of fields
  sizeof(pesan__msg__Mission),
  Mission__rosidl_typesupport_introspection_c__Mission_message_member_array,  // message members
  Mission__rosidl_typesupport_introspection_c__Mission_init_function,  // function to initialize message memory (memory has to be allocated)
  Mission__rosidl_typesupport_introspection_c__Mission_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Mission__rosidl_typesupport_introspection_c__Mission_message_type_support_handle = {
  0,
  &Mission__rosidl_typesupport_introspection_c__Mission_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pesan
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pesan, msg, Mission)() {
  if (!Mission__rosidl_typesupport_introspection_c__Mission_message_type_support_handle.typesupport_identifier) {
    Mission__rosidl_typesupport_introspection_c__Mission_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Mission__rosidl_typesupport_introspection_c__Mission_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
