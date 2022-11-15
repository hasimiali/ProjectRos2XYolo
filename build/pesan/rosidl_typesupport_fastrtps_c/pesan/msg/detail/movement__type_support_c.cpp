// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from pesan:msg/Movement.idl
// generated code does not contain a copyright notice
#include "pesan/msg/detail/movement__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "pesan/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pesan/msg/detail/movement__struct.h"
#include "pesan/msg/detail/movement__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // arah
#include "rosidl_runtime_c/string_functions.h"  // arah

// forward declare type support functions


using _Movement__ros_msg_type = pesan__msg__Movement;

static bool _Movement__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Movement__ros_msg_type * ros_message = static_cast<const _Movement__ros_msg_type *>(untyped_ros_message);
  // Field name: arah
  {
    const rosidl_runtime_c__String * str = &ros_message->arah;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: pwm_x
  {
    cdr << ros_message->pwm_x;
  }

  // Field name: pwm_y
  {
    cdr << ros_message->pwm_y;
  }

  return true;
}

static bool _Movement__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Movement__ros_msg_type * ros_message = static_cast<_Movement__ros_msg_type *>(untyped_ros_message);
  // Field name: arah
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->arah.data) {
      rosidl_runtime_c__String__init(&ros_message->arah);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->arah,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'arah'\n");
      return false;
    }
  }

  // Field name: pwm_x
  {
    cdr >> ros_message->pwm_x;
  }

  // Field name: pwm_y
  {
    cdr >> ros_message->pwm_y;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pesan
size_t get_serialized_size_pesan__msg__Movement(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Movement__ros_msg_type * ros_message = static_cast<const _Movement__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name arah
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->arah.size + 1);
  // field.name pwm_x
  {
    size_t item_size = sizeof(ros_message->pwm_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pwm_y
  {
    size_t item_size = sizeof(ros_message->pwm_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Movement__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_pesan__msg__Movement(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pesan
size_t max_serialized_size_pesan__msg__Movement(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: arah
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: pwm_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pwm_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Movement__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_pesan__msg__Movement(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Movement = {
  "pesan::msg",
  "Movement",
  _Movement__cdr_serialize,
  _Movement__cdr_deserialize,
  _Movement__get_serialized_size,
  _Movement__max_serialized_size
};

static rosidl_message_type_support_t _Movement__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Movement,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pesan, msg, Movement)() {
  return &_Movement__type_support;
}

#if defined(__cplusplus)
}
#endif
