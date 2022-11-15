// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pesan:msg/Mission.idl
// generated code does not contain a copyright notice
#include "pesan/msg/detail/mission__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
pesan__msg__Mission__init(pesan__msg__Mission * msg)
{
  if (!msg) {
    return false;
  }
  // mission
  return true;
}

void
pesan__msg__Mission__fini(pesan__msg__Mission * msg)
{
  if (!msg) {
    return;
  }
  // mission
}

bool
pesan__msg__Mission__are_equal(const pesan__msg__Mission * lhs, const pesan__msg__Mission * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mission
  if (lhs->mission != rhs->mission) {
    return false;
  }
  return true;
}

bool
pesan__msg__Mission__copy(
  const pesan__msg__Mission * input,
  pesan__msg__Mission * output)
{
  if (!input || !output) {
    return false;
  }
  // mission
  output->mission = input->mission;
  return true;
}

pesan__msg__Mission *
pesan__msg__Mission__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pesan__msg__Mission * msg = (pesan__msg__Mission *)allocator.allocate(sizeof(pesan__msg__Mission), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pesan__msg__Mission));
  bool success = pesan__msg__Mission__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pesan__msg__Mission__destroy(pesan__msg__Mission * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pesan__msg__Mission__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pesan__msg__Mission__Sequence__init(pesan__msg__Mission__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pesan__msg__Mission * data = NULL;

  if (size) {
    data = (pesan__msg__Mission *)allocator.zero_allocate(size, sizeof(pesan__msg__Mission), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pesan__msg__Mission__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pesan__msg__Mission__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pesan__msg__Mission__Sequence__fini(pesan__msg__Mission__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pesan__msg__Mission__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pesan__msg__Mission__Sequence *
pesan__msg__Mission__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pesan__msg__Mission__Sequence * array = (pesan__msg__Mission__Sequence *)allocator.allocate(sizeof(pesan__msg__Mission__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pesan__msg__Mission__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pesan__msg__Mission__Sequence__destroy(pesan__msg__Mission__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pesan__msg__Mission__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pesan__msg__Mission__Sequence__are_equal(const pesan__msg__Mission__Sequence * lhs, const pesan__msg__Mission__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pesan__msg__Mission__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pesan__msg__Mission__Sequence__copy(
  const pesan__msg__Mission__Sequence * input,
  pesan__msg__Mission__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pesan__msg__Mission);
    pesan__msg__Mission * data =
      (pesan__msg__Mission *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pesan__msg__Mission__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          pesan__msg__Mission__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pesan__msg__Mission__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
