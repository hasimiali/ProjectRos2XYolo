// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from pesan:msg/Movement.idl
// generated code does not contain a copyright notice

#ifndef PESAN__MSG__DETAIL__MOVEMENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PESAN__MSG__DETAIL__MOVEMENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "pesan/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "pesan/msg/detail/movement__struct.hpp"

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

#include "fastcdr/Cdr.h"

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
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pesan
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pesan::msg::Movement & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pesan
get_serialized_size(
  const pesan::msg::Movement & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pesan
max_serialized_size_Movement(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace pesan

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pesan
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pesan, msg, Movement)();

#ifdef __cplusplus
}
#endif

#endif  // PESAN__MSG__DETAIL__MOVEMENT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
