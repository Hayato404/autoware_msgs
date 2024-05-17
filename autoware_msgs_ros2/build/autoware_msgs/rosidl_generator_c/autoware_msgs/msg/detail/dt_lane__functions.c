// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_msgs:msg/DTLane.idl
// generated code does not contain a copyright notice
#include "autoware_msgs/msg/detail/dt_lane__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
autoware_msgs__msg__DTLane__init(autoware_msgs__msg__DTLane * msg)
{
  if (!msg) {
    return false;
  }
  // dist
  // dir
  // apara
  // r
  // slope
  // cant
  // lw
  // rw
  return true;
}

void
autoware_msgs__msg__DTLane__fini(autoware_msgs__msg__DTLane * msg)
{
  if (!msg) {
    return;
  }
  // dist
  // dir
  // apara
  // r
  // slope
  // cant
  // lw
  // rw
}

bool
autoware_msgs__msg__DTLane__are_equal(const autoware_msgs__msg__DTLane * lhs, const autoware_msgs__msg__DTLane * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dist
  if (lhs->dist != rhs->dist) {
    return false;
  }
  // dir
  if (lhs->dir != rhs->dir) {
    return false;
  }
  // apara
  if (lhs->apara != rhs->apara) {
    return false;
  }
  // r
  if (lhs->r != rhs->r) {
    return false;
  }
  // slope
  if (lhs->slope != rhs->slope) {
    return false;
  }
  // cant
  if (lhs->cant != rhs->cant) {
    return false;
  }
  // lw
  if (lhs->lw != rhs->lw) {
    return false;
  }
  // rw
  if (lhs->rw != rhs->rw) {
    return false;
  }
  return true;
}

bool
autoware_msgs__msg__DTLane__copy(
  const autoware_msgs__msg__DTLane * input,
  autoware_msgs__msg__DTLane * output)
{
  if (!input || !output) {
    return false;
  }
  // dist
  output->dist = input->dist;
  // dir
  output->dir = input->dir;
  // apara
  output->apara = input->apara;
  // r
  output->r = input->r;
  // slope
  output->slope = input->slope;
  // cant
  output->cant = input->cant;
  // lw
  output->lw = input->lw;
  // rw
  output->rw = input->rw;
  return true;
}

autoware_msgs__msg__DTLane *
autoware_msgs__msg__DTLane__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_msgs__msg__DTLane * msg = (autoware_msgs__msg__DTLane *)allocator.allocate(sizeof(autoware_msgs__msg__DTLane), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_msgs__msg__DTLane));
  bool success = autoware_msgs__msg__DTLane__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_msgs__msg__DTLane__destroy(autoware_msgs__msg__DTLane * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_msgs__msg__DTLane__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_msgs__msg__DTLane__Sequence__init(autoware_msgs__msg__DTLane__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_msgs__msg__DTLane * data = NULL;

  if (size) {
    data = (autoware_msgs__msg__DTLane *)allocator.zero_allocate(size, sizeof(autoware_msgs__msg__DTLane), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_msgs__msg__DTLane__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_msgs__msg__DTLane__fini(&data[i - 1]);
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
autoware_msgs__msg__DTLane__Sequence__fini(autoware_msgs__msg__DTLane__Sequence * array)
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
      autoware_msgs__msg__DTLane__fini(&array->data[i]);
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

autoware_msgs__msg__DTLane__Sequence *
autoware_msgs__msg__DTLane__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_msgs__msg__DTLane__Sequence * array = (autoware_msgs__msg__DTLane__Sequence *)allocator.allocate(sizeof(autoware_msgs__msg__DTLane__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_msgs__msg__DTLane__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_msgs__msg__DTLane__Sequence__destroy(autoware_msgs__msg__DTLane__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_msgs__msg__DTLane__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_msgs__msg__DTLane__Sequence__are_equal(const autoware_msgs__msg__DTLane__Sequence * lhs, const autoware_msgs__msg__DTLane__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_msgs__msg__DTLane__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_msgs__msg__DTLane__Sequence__copy(
  const autoware_msgs__msg__DTLane__Sequence * input,
  autoware_msgs__msg__DTLane__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_msgs__msg__DTLane);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_msgs__msg__DTLane * data =
      (autoware_msgs__msg__DTLane *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_msgs__msg__DTLane__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_msgs__msg__DTLane__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_msgs__msg__DTLane__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
