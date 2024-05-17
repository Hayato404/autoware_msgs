// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_msgs:msg/LaneWaypointsArray.idl
// generated code does not contain a copyright notice
#include "autoware_msgs/msg/detail/lane_waypoints_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_msgs/msg/detail/lane_waypoints_array__struct.h"
#include "autoware_msgs/msg/detail/lane_waypoints_array__functions.h"
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

#include "autoware_msgs/msg/detail/dt_lane__functions.h"  // dtlane
#include "autoware_msgs/msg/detail/waypoint_state__functions.h"  // wpstate
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"  // pose
#include "geometry_msgs/msg/detail/twist_stamped__functions.h"  // twist

// forward declare type support functions
size_t get_serialized_size_autoware_msgs__msg__DTLane(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_msgs__msg__DTLane(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_msgs, msg, DTLane)();
size_t get_serialized_size_autoware_msgs__msg__WaypointState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_msgs__msg__WaypointState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_msgs, msg, WaypointState)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_msgs
size_t get_serialized_size_geometry_msgs__msg__PoseStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_msgs
size_t max_serialized_size_geometry_msgs__msg__PoseStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseStamped)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_msgs
size_t get_serialized_size_geometry_msgs__msg__TwistStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_msgs
size_t max_serialized_size_geometry_msgs__msg__TwistStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, TwistStamped)();


using _LaneWaypointsArray__ros_msg_type = autoware_msgs__msg__LaneWaypointsArray;

static bool _LaneWaypointsArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LaneWaypointsArray__ros_msg_type * ros_message = static_cast<const _LaneWaypointsArray__ros_msg_type *>(untyped_ros_message);
  // Field name: gid
  {
    cdr << ros_message->gid;
  }

  // Field name: lid
  {
    cdr << ros_message->lid;
  }

  // Field name: pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseStamped
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pose, cdr))
    {
      return false;
    }
  }

  // Field name: twist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, TwistStamped
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->twist, cdr))
    {
      return false;
    }
  }

  // Field name: dtlane
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_msgs, msg, DTLane
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->dtlane, cdr))
    {
      return false;
    }
  }

  // Field name: change_flag
  {
    cdr << ros_message->change_flag;
  }

  // Field name: wpstate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_msgs, msg, WaypointState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->wpstate, cdr))
    {
      return false;
    }
  }

  // Field name: lane_id
  {
    cdr << ros_message->lane_id;
  }

  // Field name: left_lane_id
  {
    cdr << ros_message->left_lane_id;
  }

  // Field name: right_lane_id
  {
    cdr << ros_message->right_lane_id;
  }

  // Field name: stop_line_id
  {
    cdr << ros_message->stop_line_id;
  }

  // Field name: cost
  {
    cdr << ros_message->cost;
  }

  // Field name: time_cost
  {
    cdr << ros_message->time_cost;
  }

  // Field name: direction
  {
    cdr << ros_message->direction;
  }

  return true;
}

static bool _LaneWaypointsArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LaneWaypointsArray__ros_msg_type * ros_message = static_cast<_LaneWaypointsArray__ros_msg_type *>(untyped_ros_message);
  // Field name: gid
  {
    cdr >> ros_message->gid;
  }

  // Field name: lid
  {
    cdr >> ros_message->lid;
  }

  // Field name: pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseStamped
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pose))
    {
      return false;
    }
  }

  // Field name: twist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, TwistStamped
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->twist))
    {
      return false;
    }
  }

  // Field name: dtlane
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_msgs, msg, DTLane
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->dtlane))
    {
      return false;
    }
  }

  // Field name: change_flag
  {
    cdr >> ros_message->change_flag;
  }

  // Field name: wpstate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_msgs, msg, WaypointState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->wpstate))
    {
      return false;
    }
  }

  // Field name: lane_id
  {
    cdr >> ros_message->lane_id;
  }

  // Field name: left_lane_id
  {
    cdr >> ros_message->left_lane_id;
  }

  // Field name: right_lane_id
  {
    cdr >> ros_message->right_lane_id;
  }

  // Field name: stop_line_id
  {
    cdr >> ros_message->stop_line_id;
  }

  // Field name: cost
  {
    cdr >> ros_message->cost;
  }

  // Field name: time_cost
  {
    cdr >> ros_message->time_cost;
  }

  // Field name: direction
  {
    cdr >> ros_message->direction;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_msgs
size_t get_serialized_size_autoware_msgs__msg__LaneWaypointsArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LaneWaypointsArray__ros_msg_type * ros_message = static_cast<const _LaneWaypointsArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name gid
  {
    size_t item_size = sizeof(ros_message->gid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lid
  {
    size_t item_size = sizeof(ros_message->lid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pose

  current_alignment += get_serialized_size_geometry_msgs__msg__PoseStamped(
    &(ros_message->pose), current_alignment);
  // field.name twist

  current_alignment += get_serialized_size_geometry_msgs__msg__TwistStamped(
    &(ros_message->twist), current_alignment);
  // field.name dtlane

  current_alignment += get_serialized_size_autoware_msgs__msg__DTLane(
    &(ros_message->dtlane), current_alignment);
  // field.name change_flag
  {
    size_t item_size = sizeof(ros_message->change_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wpstate

  current_alignment += get_serialized_size_autoware_msgs__msg__WaypointState(
    &(ros_message->wpstate), current_alignment);
  // field.name lane_id
  {
    size_t item_size = sizeof(ros_message->lane_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_lane_id
  {
    size_t item_size = sizeof(ros_message->left_lane_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_lane_id
  {
    size_t item_size = sizeof(ros_message->right_lane_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stop_line_id
  {
    size_t item_size = sizeof(ros_message->stop_line_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cost
  {
    size_t item_size = sizeof(ros_message->cost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_cost
  {
    size_t item_size = sizeof(ros_message->time_cost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name direction
  {
    size_t item_size = sizeof(ros_message->direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LaneWaypointsArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_msgs__msg__LaneWaypointsArray(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_msgs
size_t max_serialized_size_autoware_msgs__msg__LaneWaypointsArray(
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

  // member: gid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__PoseStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: twist
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__TwistStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: dtlane
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_autoware_msgs__msg__DTLane(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: change_flag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wpstate
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_autoware_msgs__msg__WaypointState(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: lane_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_lane_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_lane_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: stop_line_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: time_cost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: direction
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _LaneWaypointsArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autoware_msgs__msg__LaneWaypointsArray(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LaneWaypointsArray = {
  "autoware_msgs::msg",
  "LaneWaypointsArray",
  _LaneWaypointsArray__cdr_serialize,
  _LaneWaypointsArray__cdr_deserialize,
  _LaneWaypointsArray__get_serialized_size,
  _LaneWaypointsArray__max_serialized_size
};

static rosidl_message_type_support_t _LaneWaypointsArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LaneWaypointsArray,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_msgs, msg, LaneWaypointsArray)() {
  return &_LaneWaypointsArray__type_support;
}

#if defined(__cplusplus)
}
#endif
