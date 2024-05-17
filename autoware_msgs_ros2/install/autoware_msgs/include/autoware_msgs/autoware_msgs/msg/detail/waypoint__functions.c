// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice
#include "autoware_msgs/msg/detail/waypoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist_stamped__functions.h"
// Member `dtlane`
#include "autoware_msgs/msg/detail/dt_lane__functions.h"
// Member `wpstate`
#include "autoware_msgs/msg/detail/waypoint_state__functions.h"

bool
autoware_msgs__msg__Waypoint__init(autoware_msgs__msg__Waypoint * msg)
{
  if (!msg) {
    return false;
  }
  // gid
  // lid
  // pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->pose)) {
    autoware_msgs__msg__Waypoint__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__TwistStamped__init(&msg->twist)) {
    autoware_msgs__msg__Waypoint__fini(msg);
    return false;
  }
  // dtlane
  if (!autoware_msgs__msg__DTLane__init(&msg->dtlane)) {
    autoware_msgs__msg__Waypoint__fini(msg);
    return false;
  }
  // change_flag
  // wpstate
  if (!autoware_msgs__msg__WaypointState__init(&msg->wpstate)) {
    autoware_msgs__msg__Waypoint__fini(msg);
    return false;
  }
  // lane_id
  // left_lane_id
  // right_lane_id
  // stop_line_id
  // cost
  // time_cost
  // direction
  return true;
}

void
autoware_msgs__msg__Waypoint__fini(autoware_msgs__msg__Waypoint * msg)
{
  if (!msg) {
    return;
  }
  // gid
  // lid
  // pose
  geometry_msgs__msg__PoseStamped__fini(&msg->pose);
  // twist
  geometry_msgs__msg__TwistStamped__fini(&msg->twist);
  // dtlane
  autoware_msgs__msg__DTLane__fini(&msg->dtlane);
  // change_flag
  // wpstate
  autoware_msgs__msg__WaypointState__fini(&msg->wpstate);
  // lane_id
  // left_lane_id
  // right_lane_id
  // stop_line_id
  // cost
  // time_cost
  // direction
}

bool
autoware_msgs__msg__Waypoint__are_equal(const autoware_msgs__msg__Waypoint * lhs, const autoware_msgs__msg__Waypoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gid
  if (lhs->gid != rhs->gid) {
    return false;
  }
  // lid
  if (lhs->lid != rhs->lid) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__TwistStamped__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  // dtlane
  if (!autoware_msgs__msg__DTLane__are_equal(
      &(lhs->dtlane), &(rhs->dtlane)))
  {
    return false;
  }
  // change_flag
  if (lhs->change_flag != rhs->change_flag) {
    return false;
  }
  // wpstate
  if (!autoware_msgs__msg__WaypointState__are_equal(
      &(lhs->wpstate), &(rhs->wpstate)))
  {
    return false;
  }
  // lane_id
  if (lhs->lane_id != rhs->lane_id) {
    return false;
  }
  // left_lane_id
  if (lhs->left_lane_id != rhs->left_lane_id) {
    return false;
  }
  // right_lane_id
  if (lhs->right_lane_id != rhs->right_lane_id) {
    return false;
  }
  // stop_line_id
  if (lhs->stop_line_id != rhs->stop_line_id) {
    return false;
  }
  // cost
  if (lhs->cost != rhs->cost) {
    return false;
  }
  // time_cost
  if (lhs->time_cost != rhs->time_cost) {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  return true;
}

bool
autoware_msgs__msg__Waypoint__copy(
  const autoware_msgs__msg__Waypoint * input,
  autoware_msgs__msg__Waypoint * output)
{
  if (!input || !output) {
    return false;
  }
  // gid
  output->gid = input->gid;
  // lid
  output->lid = input->lid;
  // pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__TwistStamped__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  // dtlane
  if (!autoware_msgs__msg__DTLane__copy(
      &(input->dtlane), &(output->dtlane)))
  {
    return false;
  }
  // change_flag
  output->change_flag = input->change_flag;
  // wpstate
  if (!autoware_msgs__msg__WaypointState__copy(
      &(input->wpstate), &(output->wpstate)))
  {
    return false;
  }
  // lane_id
  output->lane_id = input->lane_id;
  // left_lane_id
  output->left_lane_id = input->left_lane_id;
  // right_lane_id
  output->right_lane_id = input->right_lane_id;
  // stop_line_id
  output->stop_line_id = input->stop_line_id;
  // cost
  output->cost = input->cost;
  // time_cost
  output->time_cost = input->time_cost;
  // direction
  output->direction = input->direction;
  return true;
}

autoware_msgs__msg__Waypoint *
autoware_msgs__msg__Waypoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_msgs__msg__Waypoint * msg = (autoware_msgs__msg__Waypoint *)allocator.allocate(sizeof(autoware_msgs__msg__Waypoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_msgs__msg__Waypoint));
  bool success = autoware_msgs__msg__Waypoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_msgs__msg__Waypoint__destroy(autoware_msgs__msg__Waypoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_msgs__msg__Waypoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_msgs__msg__Waypoint__Sequence__init(autoware_msgs__msg__Waypoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_msgs__msg__Waypoint * data = NULL;

  if (size) {
    data = (autoware_msgs__msg__Waypoint *)allocator.zero_allocate(size, sizeof(autoware_msgs__msg__Waypoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_msgs__msg__Waypoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_msgs__msg__Waypoint__fini(&data[i - 1]);
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
autoware_msgs__msg__Waypoint__Sequence__fini(autoware_msgs__msg__Waypoint__Sequence * array)
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
      autoware_msgs__msg__Waypoint__fini(&array->data[i]);
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

autoware_msgs__msg__Waypoint__Sequence *
autoware_msgs__msg__Waypoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_msgs__msg__Waypoint__Sequence * array = (autoware_msgs__msg__Waypoint__Sequence *)allocator.allocate(sizeof(autoware_msgs__msg__Waypoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_msgs__msg__Waypoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_msgs__msg__Waypoint__Sequence__destroy(autoware_msgs__msg__Waypoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_msgs__msg__Waypoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_msgs__msg__Waypoint__Sequence__are_equal(const autoware_msgs__msg__Waypoint__Sequence * lhs, const autoware_msgs__msg__Waypoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_msgs__msg__Waypoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_msgs__msg__Waypoint__Sequence__copy(
  const autoware_msgs__msg__Waypoint__Sequence * input,
  autoware_msgs__msg__Waypoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_msgs__msg__Waypoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_msgs__msg__Waypoint * data =
      (autoware_msgs__msg__Waypoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_msgs__msg__Waypoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_msgs__msg__Waypoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_msgs__msg__Waypoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
