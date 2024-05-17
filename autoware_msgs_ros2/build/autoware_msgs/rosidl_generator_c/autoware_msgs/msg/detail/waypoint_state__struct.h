// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_msgs:msg/WaypointState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT_STATE__STRUCT_H_
#define AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NULLSTATE'.
enum
{
  autoware_msgs__msg__WaypointState__NULLSTATE = 0
};

/// Constant 'STR_LEFT'.
enum
{
  autoware_msgs__msg__WaypointState__STR_LEFT = 1
};

/// Constant 'STR_RIGHT'.
enum
{
  autoware_msgs__msg__WaypointState__STR_RIGHT = 2
};

/// Constant 'STR_STRAIGHT'.
enum
{
  autoware_msgs__msg__WaypointState__STR_STRAIGHT = 3
};

/// Constant 'STR_BACK'.
enum
{
  autoware_msgs__msg__WaypointState__STR_BACK = 4
};

/// Constant 'TYPE_STOPLINE'.
/**
  * 1 is stopline, 2 is stop which can only be released manually.
 */
enum
{
  autoware_msgs__msg__WaypointState__TYPE_STOPLINE = 1
};

/// Constant 'TYPE_STOP'.
enum
{
  autoware_msgs__msg__WaypointState__TYPE_STOP = 2
};

/// Constant 'TYPE_EVENT_NULL'.
enum
{
  autoware_msgs__msg__WaypointState__TYPE_EVENT_NULL = 0
};

/// Constant 'TYPE_EVENT_GOAL'.
enum
{
  autoware_msgs__msg__WaypointState__TYPE_EVENT_GOAL = 1
};

/// Constant 'TYPE_EVENT_MIDDLE_GOAL'.
enum
{
  autoware_msgs__msg__WaypointState__TYPE_EVENT_MIDDLE_GOAL = 2
};

/// Constant 'TYPE_EVENT_POSITION_STOP'.
enum
{
  autoware_msgs__msg__WaypointState__TYPE_EVENT_POSITION_STOP = 3
};

/// Constant 'TYPE_EVENT_BUS_STOP'.
enum
{
  autoware_msgs__msg__WaypointState__TYPE_EVENT_BUS_STOP = 4
};

/// Constant 'TYPE_EVENT_PARKING'.
enum
{
  autoware_msgs__msg__WaypointState__TYPE_EVENT_PARKING = 5
};

/// Struct defined in msg/WaypointState in the package autoware_msgs.
typedef struct autoware_msgs__msg__WaypointState
{
  int32_t aid;
  /// lanechange
  uint8_t lanechange_state;
  /// bilinker
  uint8_t steering_state;
  uint8_t accel_state;
  uint8_t stop_state;
  uint8_t event_state;
} autoware_msgs__msg__WaypointState;

// Struct for a sequence of autoware_msgs__msg__WaypointState.
typedef struct autoware_msgs__msg__WaypointState__Sequence
{
  autoware_msgs__msg__WaypointState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_msgs__msg__WaypointState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT_STATE__STRUCT_H_
