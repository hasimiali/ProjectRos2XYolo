// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pesan:msg/Movement.idl
// generated code does not contain a copyright notice
#include "pesan/msg/detail/movement__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `arah`
#include "rosidl_runtime_c/string_functions.h"

bool
pesan__msg__Movement__init(pesan__msg__Movement * msg)
{
  if (!msg) {
    return false;
  }
  // arah
  if (!rosidl_runtime_c__String__init(&msg->arah)) {
    pesan__msg__Movement__fini(msg);
    return false;
  }
  // pwm_x
  // pwm_y
  return true;
}

void
pesan__msg__Movement__fini(pesan__msg__Movement * msg)
{
  if (!msg) {
    return;
  }
  // arah
  rosidl_runtime_c__String__fini(&msg->arah);
  // pwm_x
  // pwm_y
}

bool
pesan__msg__Movement__are_equal(const pesan__msg__Movement * lhs, const pesan__msg__Movement * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // arah
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->arah), &(rhs->arah)))
  {
    return false;
  }
  // pwm_x
  if (lhs->pwm_x != rhs->pwm_x) {
    return false;
  }
  // pwm_y
  if (lhs->pwm_y != rhs->pwm_y) {
    return false;
  }
  return true;
}

bool
pesan__msg__Movement__copy(
  const pesan__msg__Movement * input,
  pesan__msg__Movement * output)
{
  if (!input || !output) {
    return false;
  }
  // arah
  if (!rosidl_runtime_c__String__copy(
      &(input->arah), &(output->arah)))
  {
    return false;
  }
  // pwm_x
  output->pwm_x = input->pwm_x;
  // pwm_y
  output->pwm_y = input->pwm_y;
  return true;
}

pesan__msg__Movement *
pesan__msg__Movement__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pesan__msg__Movement * msg = (pesan__msg__Movement *)allocator.allocate(sizeof(pesan__msg__Movement), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pesan__msg__Movement));
  bool success = pesan__msg__Movement__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pesan__msg__Movement__destroy(pesan__msg__Movement * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pesan__msg__Movement__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pesan__msg__Movement__Sequence__init(pesan__msg__Movement__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pesan__msg__Movement * data = NULL;

  if (size) {
    data = (pesan__msg__Movement *)allocator.zero_allocate(size, sizeof(pesan__msg__Movement), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pesan__msg__Movement__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pesan__msg__Movement__fini(&data[i - 1]);
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
pesan__msg__Movement__Sequence__fini(pesan__msg__Movement__Sequence * array)
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
      pesan__msg__Movement__fini(&array->data[i]);
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

pesan__msg__Movement__Sequence *
pesan__msg__Movement__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pesan__msg__Movement__Sequence * array = (pesan__msg__Movement__Sequence *)allocator.allocate(sizeof(pesan__msg__Movement__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pesan__msg__Movement__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pesan__msg__Movement__Sequence__destroy(pesan__msg__Movement__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pesan__msg__Movement__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pesan__msg__Movement__Sequence__are_equal(const pesan__msg__Movement__Sequence * lhs, const pesan__msg__Movement__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pesan__msg__Movement__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pesan__msg__Movement__Sequence__copy(
  const pesan__msg__Movement__Sequence * input,
  pesan__msg__Movement__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pesan__msg__Movement);
    pesan__msg__Movement * data =
      (pesan__msg__Movement *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pesan__msg__Movement__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          pesan__msg__Movement__fini(&data[i]);
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
    if (!pesan__msg__Movement__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
