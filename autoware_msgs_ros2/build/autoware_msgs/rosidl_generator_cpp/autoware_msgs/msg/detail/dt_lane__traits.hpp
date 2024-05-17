// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_msgs:msg/DTLane.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__DT_LANE__TRAITS_HPP_
#define AUTOWARE_MSGS__MSG__DETAIL__DT_LANE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_msgs/msg/detail/dt_lane__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autoware_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DTLane & msg,
  std::ostream & out)
{
  out << "{";
  // member: dist
  {
    out << "dist: ";
    rosidl_generator_traits::value_to_yaml(msg.dist, out);
    out << ", ";
  }

  // member: dir
  {
    out << "dir: ";
    rosidl_generator_traits::value_to_yaml(msg.dir, out);
    out << ", ";
  }

  // member: apara
  {
    out << "apara: ";
    rosidl_generator_traits::value_to_yaml(msg.apara, out);
    out << ", ";
  }

  // member: r
  {
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << ", ";
  }

  // member: slope
  {
    out << "slope: ";
    rosidl_generator_traits::value_to_yaml(msg.slope, out);
    out << ", ";
  }

  // member: cant
  {
    out << "cant: ";
    rosidl_generator_traits::value_to_yaml(msg.cant, out);
    out << ", ";
  }

  // member: lw
  {
    out << "lw: ";
    rosidl_generator_traits::value_to_yaml(msg.lw, out);
    out << ", ";
  }

  // member: rw
  {
    out << "rw: ";
    rosidl_generator_traits::value_to_yaml(msg.rw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DTLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist: ";
    rosidl_generator_traits::value_to_yaml(msg.dist, out);
    out << "\n";
  }

  // member: dir
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dir: ";
    rosidl_generator_traits::value_to_yaml(msg.dir, out);
    out << "\n";
  }

  // member: apara
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "apara: ";
    rosidl_generator_traits::value_to_yaml(msg.apara, out);
    out << "\n";
  }

  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << "\n";
  }

  // member: slope
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slope: ";
    rosidl_generator_traits::value_to_yaml(msg.slope, out);
    out << "\n";
  }

  // member: cant
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cant: ";
    rosidl_generator_traits::value_to_yaml(msg.cant, out);
    out << "\n";
  }

  // member: lw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lw: ";
    rosidl_generator_traits::value_to_yaml(msg.lw, out);
    out << "\n";
  }

  // member: rw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rw: ";
    rosidl_generator_traits::value_to_yaml(msg.rw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DTLane & msg, bool use_flow_style = false)
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
  const autoware_msgs::msg::DTLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_msgs::msg::DTLane & msg)
{
  return autoware_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_msgs::msg::DTLane>()
{
  return "autoware_msgs::msg::DTLane";
}

template<>
inline const char * name<autoware_msgs::msg::DTLane>()
{
  return "autoware_msgs/msg/DTLane";
}

template<>
struct has_fixed_size<autoware_msgs::msg::DTLane>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_msgs::msg::DTLane>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_msgs::msg::DTLane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_MSGS__MSG__DETAIL__DT_LANE__TRAITS_HPP_
