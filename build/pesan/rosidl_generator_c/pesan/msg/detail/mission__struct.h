// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pesan:msg/Mission.idl
// generated code does not contain a copyright notice

#ifndef PESAN__MSG__DETAIL__MISSION__STRUCT_H_
#define PESAN__MSG__DETAIL__MISSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Mission in the package pesan.
typedef struct pesan__msg__Mission
{
  int64_t mission;
} pesan__msg__Mission;

// Struct for a sequence of pesan__msg__Mission.
typedef struct pesan__msg__Mission__Sequence
{
  pesan__msg__Mission * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pesan__msg__Mission__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PESAN__MSG__DETAIL__MISSION__STRUCT_H_
