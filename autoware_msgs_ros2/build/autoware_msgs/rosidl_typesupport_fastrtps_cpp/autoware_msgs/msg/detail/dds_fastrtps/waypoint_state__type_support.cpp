// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autoware_msgs:msg/WaypointState.idl
// generated code does not contain a copyright notice
#include "autoware_msgs/msg/detail/waypoint_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autoware_msgs/msg/detail/waypoint_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace autoware_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_msgs
cdr_serialize(
  const autoware_msgs::msg::WaypointState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: aid
  cdr << ros_message.aid;
  // Member: lanechange_state
  cdr << ros_message.lanechange_state;
  // Member: steering_state
  cdr << ros_message.steering_state;
  // Member: accel_state
  cdr << ros_message.accel_state;
  // Member: stop_state
  cdr << ros_message.stop_state;
  // Member: event_state
  cdr << ros_message.event_state;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_msgs::msg::WaypointState & ros_message)
{
  // Member: aid
  cdr >> ros_message.aid;

  // Member: lanechange_state
  cdr >> ros_message.lanechange_state;

  // Member: steering_state
  cdr >> ros_message.steering_state;

  // Member: accel_state
  cdr >> ros_message.accel_state;

  // Member: stop_state
  cdr >> ros_message.stop_state;

  // Member: event_state
  cdr >> ros_message.event_state;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_msgs
get_serialized_size(
  const autoware_msgs::msg::WaypointState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: aid
  {
    size_t item_size = sizeof(ros_message.aid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lanechange_state
  {
    size_t item_size = sizeof(ros_message.lanechange_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_state
  {
    size_t item_size = sizeof(ros_message.steering_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_state
  {
    size_t item_size = sizeof(ros_message.accel_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stop_state
  {
    size_t item_size = sizeof(ros_message.stop_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: event_state
  {
    size_t item_size = sizeof(ros_message.event_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_msgs
max_serialized_size_WaypointState(
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


  // Member: aid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lanechange_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steering_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: accel_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stop_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: event_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _WaypointState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autoware_msgs::msg::WaypointState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _WaypointState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autoware_msgs::msg::WaypointState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _WaypointState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autoware_msgs::msg::WaypointState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _WaypointState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_WaypointState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _WaypointState__callbacks = {
  "autoware_msgs::msg",
  "WaypointState",
  _WaypointState__cdr_serialize,
  _WaypointState__cdr_deserialize,
  _WaypointState__get_serialized_size,
  _WaypointState__max_serialized_size
};

static rosidl_message_type_support_t _WaypointState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_WaypointState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace autoware_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autoware_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_msgs::msg::WaypointState>()
{
  return &autoware_msgs::msg::typesupport_fastrtps_cpp::_WaypointState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_msgs, msg, WaypointState)() {
  return &autoware_msgs::msg::typesupport_fastrtps_cpp::_WaypointState__handle;
}

#ifdef __cplusplus
}
#endif
