// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT__TRAITS_HPP_
#define AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_msgs/msg/detail/waypoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_stamped__traits.hpp"
// Member 'dtlane'
#include "autoware_msgs/msg/detail/dt_lane__traits.hpp"
// Member 'wpstate'
#include "autoware_msgs/msg/detail/waypoint_state__traits.hpp"

namespace autoware_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Waypoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: gid
  {
    out << "gid: ";
    rosidl_generator_traits::value_to_yaml(msg.gid, out);
    out << ", ";
  }

  // member: lid
  {
    out << "lid: ";
    rosidl_generator_traits::value_to_yaml(msg.lid, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: twist
  {
    out << "twist: ";
    to_flow_style_yaml(msg.twist, out);
    out << ", ";
  }

  // member: dtlane
  {
    out << "dtlane: ";
    to_flow_style_yaml(msg.dtlane, out);
    out << ", ";
  }

  // member: change_flag
  {
    out << "change_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.change_flag, out);
    out << ", ";
  }

  // member: wpstate
  {
    out << "wpstate: ";
    to_flow_style_yaml(msg.wpstate, out);
    out << ", ";
  }

  // member: lane_id
  {
    out << "lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_id, out);
    out << ", ";
  }

  // member: left_lane_id
  {
    out << "left_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.left_lane_id, out);
    out << ", ";
  }

  // member: right_lane_id
  {
    out << "right_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.right_lane_id, out);
    out << ", ";
  }

  // member: stop_line_id
  {
    out << "stop_line_id: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_line_id, out);
    out << ", ";
  }

  // member: cost
  {
    out << "cost: ";
    rosidl_generator_traits::value_to_yaml(msg.cost, out);
    out << ", ";
  }

  // member: time_cost
  {
    out << "time_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.time_cost, out);
    out << ", ";
  }

  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Waypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gid: ";
    rosidl_generator_traits::value_to_yaml(msg.gid, out);
    out << "\n";
  }

  // member: lid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lid: ";
    rosidl_generator_traits::value_to_yaml(msg.lid, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_block_style_yaml(msg.twist, out, indentation + 2);
  }

  // member: dtlane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dtlane:\n";
    to_block_style_yaml(msg.dtlane, out, indentation + 2);
  }

  // member: change_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "change_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.change_flag, out);
    out << "\n";
  }

  // member: wpstate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wpstate:\n";
    to_block_style_yaml(msg.wpstate, out, indentation + 2);
  }

  // member: lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_id, out);
    out << "\n";
  }

  // member: left_lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.left_lane_id, out);
    out << "\n";
  }

  // member: right_lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.right_lane_id, out);
    out << "\n";
  }

  // member: stop_line_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_line_id: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_line_id, out);
    out << "\n";
  }

  // member: cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cost: ";
    rosidl_generator_traits::value_to_yaml(msg.cost, out);
    out << "\n";
  }

  // member: time_cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.time_cost, out);
    out << "\n";
  }

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Waypoint & msg, bool use_flow_style = false)
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
  const autoware_msgs::msg::Waypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_msgs::msg::Waypoint & msg)
{
  return autoware_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_msgs::msg::Waypoint>()
{
  return "autoware_msgs::msg::Waypoint";
}

template<>
inline const char * name<autoware_msgs::msg::Waypoint>()
{
  return "autoware_msgs/msg/Waypoint";
}

template<>
struct has_fixed_size<autoware_msgs::msg::Waypoint>
  : std::integral_constant<bool, has_fixed_size<autoware_msgs::msg::DTLane>::value && has_fixed_size<autoware_msgs::msg::WaypointState>::value && has_fixed_size<geometry_msgs::msg::PoseStamped>::value && has_fixed_size<geometry_msgs::msg::TwistStamped>::value> {};

template<>
struct has_bounded_size<autoware_msgs::msg::Waypoint>
  : std::integral_constant<bool, has_bounded_size<autoware_msgs::msg::DTLane>::value && has_bounded_size<autoware_msgs::msg::WaypointState>::value && has_bounded_size<geometry_msgs::msg::PoseStamped>::value && has_bounded_size<geometry_msgs::msg::TwistStamped>::value> {};

template<>
struct is_message<autoware_msgs::msg::Waypoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT__TRAITS_HPP_
