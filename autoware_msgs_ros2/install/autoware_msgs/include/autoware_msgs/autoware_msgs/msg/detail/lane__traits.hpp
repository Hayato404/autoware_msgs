// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__LANE__TRAITS_HPP_
#define AUTOWARE_MSGS__MSG__DETAIL__LANE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_msgs/msg/detail/lane__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'waypoints'
#include "autoware_msgs/msg/detail/waypoint__traits.hpp"

namespace autoware_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Lane & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: increment
  {
    out << "increment: ";
    rosidl_generator_traits::value_to_yaml(msg.increment, out);
    out << ", ";
  }

  // member: lane_id
  {
    out << "lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_id, out);
    out << ", ";
  }

  // member: waypoints
  {
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []";
    } else {
      out << "waypoints: [";
      size_t pending_items = msg.waypoints.size();
      for (auto item : msg.waypoints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lane_index
  {
    out << "lane_index: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_index, out);
    out << ", ";
  }

  // member: cost
  {
    out << "cost: ";
    rosidl_generator_traits::value_to_yaml(msg.cost, out);
    out << ", ";
  }

  // member: closest_object_distance
  {
    out << "closest_object_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.closest_object_distance, out);
    out << ", ";
  }

  // member: closest_object_velocity
  {
    out << "closest_object_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.closest_object_velocity, out);
    out << ", ";
  }

  // member: is_blocked
  {
    out << "is_blocked: ";
    rosidl_generator_traits::value_to_yaml(msg.is_blocked, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Lane & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: increment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "increment: ";
    rosidl_generator_traits::value_to_yaml(msg.increment, out);
    out << "\n";
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

  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []\n";
    } else {
      out << "waypoints:\n";
      for (auto item : msg.waypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: lane_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_index: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_index, out);
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

  // member: closest_object_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "closest_object_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.closest_object_distance, out);
    out << "\n";
  }

  // member: closest_object_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "closest_object_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.closest_object_velocity, out);
    out << "\n";
  }

  // member: is_blocked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_blocked: ";
    rosidl_generator_traits::value_to_yaml(msg.is_blocked, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Lane & msg, bool use_flow_style = false)
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
  const autoware_msgs::msg::Lane & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_msgs::msg::Lane & msg)
{
  return autoware_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_msgs::msg::Lane>()
{
  return "autoware_msgs::msg::Lane";
}

template<>
inline const char * name<autoware_msgs::msg::Lane>()
{
  return "autoware_msgs/msg/Lane";
}

template<>
struct has_fixed_size<autoware_msgs::msg::Lane>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_msgs::msg::Lane>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_msgs::msg::Lane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_MSGS__MSG__DETAIL__LANE__TRAITS_HPP_
