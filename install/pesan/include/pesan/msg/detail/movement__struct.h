// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pesan:msg/Movement.idl
// generated code does not contain a copyright notice

#ifndef PESAN__MSG__DETAIL__MOVEMENT__STRUCT_H_
#define PESAN__MSG__DETAIL__MOVEMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'arah'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Movement in the package pesan.
typedef struct pesan__msg__Movement
{
  rosidl_runtime_c__String arah;
  int64_t pwm_x;
  int64_t pwm_y;
} pesan__msg__Movement;

// Struct for a sequence of pesan__msg__Movement.
typedef struct pesan__msg__Movement__Sequence
{
  pesan__msg__Movement * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pesan__msg__Movement__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PESAN__MSG__DETAIL__MOVEMENT__STRUCT_H_
