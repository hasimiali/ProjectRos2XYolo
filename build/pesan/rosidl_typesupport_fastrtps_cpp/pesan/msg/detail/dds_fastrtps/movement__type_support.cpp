// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from pesan:msg/Movement.idl
// generated code does not contain a copyright notice
#include "pesan/msg/detail/movement__rosidl_typesupport_fastrtps_cpp.hpp"
#include "pesan/msg/detail/movement__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace pesan
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pesan
cdr_serialize(
  const pesan::msg::Movement & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: arah
  cdr << ros_message.arah;
  // Member: pwm_x
  cdr << ros_message.pwm_x;
  // Member: pwm_y
  cdr << ros_message.pwm_y;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pesan
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pesan::msg::Movement & ros_message)
{
  // Member: arah
  cdr >> ros_message.arah;

  // Member: pwm_x
  cdr >> ros_message.pwm_x;

  // Member: pwm_y
  cdr >> ros_message.pwm_y;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pesan
get_serialized_size(
  const pesan::msg::Movement & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: arah
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.arah.size() + 1);
  // Member: pwm_x
  {
    size_t item_size = sizeof(ros_message.pwm_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pwm_y
  {
    size_t item_size = sizeof(ros_message.pwm_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pesan
max_serialized_size_Movement(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: arah
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: pwm_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pwm_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Movement__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const pesan::msg::Movement *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Movement__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<pesan::msg::Movement *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Movement__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const pesan::msg::Movement *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Movement__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Movement(full_bounded, 0);
}

static message_type_support_callbacks_t _Movement__callbacks = {
  "pesan::msg",
  "Movement",
  _Movement__cdr_serialize,
  _Movement__cdr_deserialize,
  _Movement__get_serialized_size,
  _Movement__max_serialized_size
};

static rosidl_message_type_support_t _Movement__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Movement__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace pesan

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_pesan
const rosidl_message_type_support_t *
get_message_type_support_handle<pesan::msg::Movement>()
{
  return &pesan::msg::typesupport_fastrtps_cpp::_Movement__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pesan, msg, Movement)() {
  return &pesan::msg::typesupport_fastrtps_cpp::_Movement__handle;
}

#ifdef __cplusplus
}
#endif
