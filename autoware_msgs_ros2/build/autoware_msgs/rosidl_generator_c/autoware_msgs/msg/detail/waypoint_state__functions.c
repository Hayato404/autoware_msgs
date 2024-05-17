// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_msgs:msg/WaypointState.idl
// generated code does not contain a copyright notice
#include "autoware_msgs/msg/detail/waypoint_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
autoware_msgs__msg__WaypointState__init(autoware_msgs__msg__WaypointState * msg)
{
  if (!msg) {
    return false;
  }
  // aid
  // lanechange_state
  // steering_state
  // accel_state
  // stop_state
  // event_state
  return true;
}

void
autoware_msgs__msg__WaypointState__fini(autoware_msgs__msg__WaypointState * msg)
{
  if (!msg) {
    return;
  }
  // aid
  // lanechange_state
  // steering_state
  // accel_state
  // stop_state
  // event_state
}

bool
autoware_msgs__msg__WaypointState__are_equal(const autoware_msgs__msg__WaypointState * lhs, const autoware_msgs__msg__WaypointState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // aid
  if (lhs->aid != rhs->aid) {
    return false;
  }
  // lanechange_state
  if (lhs->lanechange_state != rhs->lanechange_state) {
    return false;
  }
  // steering_state
  if (lhs->steering_state != rhs->steering_state) {
    return false;
  }
  // accel_state
  if (lhs->accel_state != rhs->accel_state) {
    return false;
  }
  // stop_state
  if (lhs->stop_state != rhs->stop_state) {
    return false;
  }
  // event_state
  if (lhs->event_state != rhs->event_state) {
    return false;
  }
  return true;
}

bool
autoware_msgs__msg__WaypointState__copy(
  const autoware_msgs__msg__WaypointState * input,
  autoware_msgs__msg__WaypointState * output)
{
  if (!input || !output) {
    return false;
  }
  // aid
  output->aid = input->aid;
  // lanechange_state
  output->lanechange_state = input->lanechange_state;
  // steering_state
  output->steering_state = input->steering_state;
  // accel_state
  output->accel_state = input->accel_state;
  // stop_state
  output->stop_state = input->stop_state;
  // event_state
  output->event_state = input->event_state;
  return true;
}

autoware_msgs__msg__WaypointState *
autoware_msgs__msg__WaypointState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_msgs__msg__WaypointState * msg = (autoware_msgs__msg__WaypointState *)allocator.allocate(sizeof(autoware_msgs__msg__WaypointState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_msgs__msg__WaypointState));
  bool success = autoware_msgs__msg__WaypointState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_msgs__msg__WaypointState__destroy(autoware_msgs__msg__WaypointState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_msgs__msg__WaypointState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_msgs__msg__WaypointState__Sequence__init(autoware_msgs__msg__WaypointState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_msgs__msg__WaypointState * data = NULL;

  if (size) {
    data = (autoware_msgs__msg__WaypointState *)allocator.zero_allocate(size, sizeof(autoware_msgs__msg__WaypointState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_msgs__msg__WaypointState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_msgs__msg__WaypointState__fini(&data[i - 1]);
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
autoware_msgs__msg__WaypointState__Sequence__fini(autoware_msgs__msg__WaypointState__Sequence * array)
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
      autoware_msgs__msg__WaypointState__fini(&array->data[i]);
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

autoware_msgs__msg__WaypointState__Sequence *
autoware_msgs__msg__WaypointState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_msgs__msg__WaypointState__Sequence * array = (autoware_msgs__msg__WaypointState__Sequence *)allocator.allocate(sizeof(autoware_msgs__msg__WaypointState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_msgs__msg__WaypointState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_msgs__msg__WaypointState__Sequence__destroy(autoware_msgs__msg__WaypointState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_msgs__msg__WaypointState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_msgs__msg__WaypointState__Sequence__are_equal(const autoware_msgs__msg__WaypointState__Sequence * lhs, const autoware_msgs__msg__WaypointState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_msgs__msg__WaypointState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_msgs__msg__WaypointState__Sequence__copy(
  const autoware_msgs__msg__WaypointState__Sequence * input,
  autoware_msgs__msg__WaypointState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_msgs__msg__WaypointState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_msgs__msg__WaypointState * data =
      (autoware_msgs__msg__WaypointState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_msgs__msg__WaypointState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_msgs__msg__WaypointState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_msgs__msg__WaypointState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
