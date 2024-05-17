// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_msgs:msg/LaneArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__LANE_ARRAY__STRUCT_H_
#define AUTOWARE_MSGS__MSG__DETAIL__LANE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lanes'
#include "autoware_msgs/msg/detail/lane__struct.h"

/// Struct defined in msg/LaneArray in the package autoware_msgs.
typedef struct autoware_msgs__msg__LaneArray
{
  int32_t id;
  autoware_msgs__msg__Lane__Sequence lanes;
} autoware_msgs__msg__LaneArray;

// Struct for a sequence of autoware_msgs__msg__LaneArray.
typedef struct autoware_msgs__msg__LaneArray__Sequence
{
  autoware_msgs__msg__LaneArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_msgs__msg__LaneArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_MSGS__MSG__DETAIL__LANE_ARRAY__STRUCT_H_
