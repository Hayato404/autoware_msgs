// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_msgs:msg/DTLane.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__DT_LANE__STRUCT_H_
#define AUTOWARE_MSGS__MSG__DETAIL__DT_LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DTLane in the package autoware_msgs.
typedef struct autoware_msgs__msg__DTLane
{
  double dist;
  double dir;
  double apara;
  double r;
  double slope;
  double cant;
  double lw;
  double rw;
} autoware_msgs__msg__DTLane;

// Struct for a sequence of autoware_msgs__msg__DTLane.
typedef struct autoware_msgs__msg__DTLane__Sequence
{
  autoware_msgs__msg__DTLane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_msgs__msg__DTLane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_MSGS__MSG__DETAIL__DT_LANE__STRUCT_H_
