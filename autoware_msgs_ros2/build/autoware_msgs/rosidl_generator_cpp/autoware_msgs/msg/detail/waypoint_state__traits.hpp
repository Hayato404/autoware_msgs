// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_msgs:msg/WaypointState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT_STATE__TRAITS_HPP_
#define AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_msgs/msg/detail/waypoint_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autoware_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WaypointState & msg,
  std::ostream & out)
{
  out << "{";
  // member: aid
  {
    out << "aid: ";
    rosidl_generator_traits::value_to_yaml(msg.aid, out);
    out << ", ";
  }

  // member: lanechange_state
  {
    out << "lanechange_state: ";
    rosidl_generator_traits::value_to_yaml(msg.lanechange_state, out);
    out << ", ";
  }

  // member: steering_state
  {
    out << "steering_state: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_state, out);
    out << ", ";
  }

  // member: accel_state
  {
    out << "accel_state: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_state, out);
    out << ", ";
  }

  // member: stop_state
  {
    out << "stop_state: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_state, out);
    out << ", ";
  }

  // member: event_state
  {
    out << "event_state: ";
    rosidl_generator_traits::value_to_yaml(msg.event_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WaypointState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: aid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aid: ";
    rosidl_generator_traits::value_to_yaml(msg.aid, out);
    out << "\n";
  }

  // member: lanechange_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanechange_state: ";
    rosidl_generator_traits::value_to_yaml(msg.lanechange_state, out);
    out << "\n";
  }

  // member: steering_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_state: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_state, out);
    out << "\n";
  }

  // member: accel_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_state: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_state, out);
    out << "\n";
  }

  // member: stop_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_state: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_state, out);
    out << "\n";
  }

  // member: event_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event_state: ";
    rosidl_generator_traits::value_to_yaml(msg.event_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WaypointState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace autoware_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_msgs::msg::WaypointState & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_msgs::msg::WaypointState & msg)
{
  return autoware_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_msgs::msg::WaypointState>()
{
  return "autoware_msgs::msg::WaypointState";
}

template<>
inline const char * name<autoware_msgs::msg::WaypointState>()
{
  return "autoware_msgs/msg/WaypointState";
}

template<>
struct has_fixed_size<autoware_msgs::msg::WaypointState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_msgs::msg::WaypointState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_msgs::msg::WaypointState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT_STATE__TRAITS_HPP_
