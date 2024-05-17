// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_msgs:msg/WaypointState.idl
// generated code does not contain a copyright notice
#include "autoware_msgs/msg/detail/waypoint_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_msgs/msg/detail/waypoint_state__struct.h"
#include "autoware_msgs/msg/detail/waypoint_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _WaypointState__ros_msg_type = autoware_msgs__msg__WaypointState;

static bool _WaypointState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WaypointState__ros_msg_type * ros_message = static_cast<const _WaypointState__ros_msg_type *>(untyped_ros_message);
  // Field name: aid
  {
    cdr << ros_message->aid;
  }

  // Field name: lanechange_state
  {
    cdr << ros_message->lanechange_state;
  }

  // Field name: steering_state
  {
    cdr << ros_message->steering_state;
  }

  // Field name: accel_state
  {
    cdr << ros_message->accel_state;
  }

  // Field name: stop_state
  {
    cdr << ros_message->stop_state;
  }

  // Field name: event_state
  {
    cdr << ros_message->event_state;
  }

  return true;
}

static bool _WaypointState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WaypointState__ros_msg_type * ros_message = static_cast<_WaypointState__ros_msg_type *>(untyped_ros_message);
  // Field name: aid
  {
    cdr >> ros_message->aid;
  }

  // Field name: lanechange_state
  {
    cdr >> ros_message->lanechange_state;
  }

  // Field name: steering_state
  {
    cdr >> ros_message->steering_state;
  }

  // Field name: accel_state
  {
    cdr >> ros_message->accel_state;
  }

  // Field name: stop_state
  {
    cdr >> ros_message->stop_state;
  }

  // Field name: event_state
  {
    cdr >> ros_message->event_state;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_msgs
size_t get_serialized_size_autoware_msgs__msg__WaypointState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WaypointState__ros_msg_type * ros_message = static_cast<const _WaypointState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name aid
  {
    size_t item_size = sizeof(ros_message->aid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lanechange_state
  {
    size_t item_size = sizeof(ros_message->lanechange_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_state
  {
    size_t item_size = sizeof(ros_message->steering_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_state
  {
    size_t item_size = sizeof(ros_message->accel_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stop_state
  {
    size_t item_size = sizeof(ros_message->stop_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name event_state
  {
    size_t item_size = sizeof(ros_message->event_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _WaypointState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_msgs__msg__WaypointState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_msgs
size_t max_serialized_size_autoware_msgs__msg__WaypointState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: aid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lanechange_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steering_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: accel_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stop_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: event_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _WaypointState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autoware_msgs__msg__WaypointState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WaypointState = {
  "autoware_msgs::msg",
  "WaypointState",
  _WaypointState__cdr_serialize,
  _WaypointState__cdr_deserialize,
  _WaypointState__get_serialized_size,
  _WaypointState__max_serialized_size
};

static rosidl_message_type_support_t _WaypointState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WaypointState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_msgs, msg, WaypointState)() {
  return &_WaypointState__type_support;
}

#if defined(__cplusplus)
}
#endif
