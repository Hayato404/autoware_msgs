// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_msgs:msg/LaneArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__LANE_ARRAY__TRAITS_HPP_
#define AUTOWARE_MSGS__MSG__DETAIL__LANE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_msgs/msg/detail/lane_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'lanes'
#include "autoware_msgs/msg/detail/lane__traits.hpp"

namespace autoware_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: lanes
  {
    if (msg.lanes.size() == 0) {
      out << "lanes: []";
    } else {
      out << "lanes: [";
      size_t pending_items = msg.lanes.size();
      for (auto item : msg.lanes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: lanes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lanes.size() == 0) {
      out << "lanes: []\n";
    } else {
      out << "lanes:\n";
      for (auto item : msg.lanes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneArray & msg, bool use_flow_style = false)
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
  const autoware_msgs::msg::LaneArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_msgs::msg::LaneArray & msg)
{
  return autoware_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_msgs::msg::LaneArray>()
{
  return "autoware_msgs::msg::LaneArray";
}

template<>
inline const char * name<autoware_msgs::msg::LaneArray>()
{
  return "autoware_msgs/msg/LaneArray";
}

template<>
struct has_fixed_size<autoware_msgs::msg::LaneArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_msgs::msg::LaneArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_msgs::msg::LaneArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_MSGS__MSG__DETAIL__LANE_ARRAY__TRAITS_HPP_
