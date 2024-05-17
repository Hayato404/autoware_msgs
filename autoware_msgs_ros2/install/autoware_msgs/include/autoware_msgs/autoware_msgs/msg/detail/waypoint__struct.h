// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_H_
#define AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_stamped__struct.h"
// Member 'dtlane'
#include "autoware_msgs/msg/detail/dt_lane__struct.h"
// Member 'wpstate'
#include "autoware_msgs/msg/detail/waypoint_state__struct.h"

/// Struct defined in msg/Waypoint in the package autoware_msgs.
typedef struct autoware_msgs__msg__Waypoint
{
  /// Global ID
  int32_t gid;
  /// Local ID
  int32_t lid;
  geometry_msgs__msg__PoseStamped pose;
  geometry_msgs__msg__TwistStamped twist;
  /// Waypoint in the middle of the lane
  autoware_msgs__msg__DTLane dtlane;
  /// Flag for lane change
  int32_t change_flag;
  /// What makes waypoints read event flags (for vectormap)
  autoware_msgs__msg__WaypointState wpstate;
  /// Motal vehicle lane number
  uint32_t lane_id;
  /// Left lane number
  uint32_t left_lane_id;
  /// Right lane number
  uint32_t right_lane_id;
  /// Stop the identifier for a while
  uint32_t stop_line_id;
  float cost;
  float time_cost;
  /// Lane Direction
  /// FORWARD        = 0
  /// FORWARD_LEFT       = 1
  /// FORWARD_RIGHT      = 2
  /// BACKWARD        = 3
  /// BACKWARD_LEFT      = 4
  /// BACKWARD_RIGHT    = 5
  /// STANDSTILL       = 6
  uint32_t direction;
} autoware_msgs__msg__Waypoint;

// Struct for a sequence of autoware_msgs__msg__Waypoint.
typedef struct autoware_msgs__msg__Waypoint__Sequence
{
  autoware_msgs__msg__Waypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_msgs__msg__Waypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_H_
