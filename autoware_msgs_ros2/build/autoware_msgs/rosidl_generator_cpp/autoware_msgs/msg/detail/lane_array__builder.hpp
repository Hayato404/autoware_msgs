// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_msgs:msg/LaneArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__LANE_ARRAY__BUILDER_HPP_
#define AUTOWARE_MSGS__MSG__DETAIL__LANE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_msgs/msg/detail/lane_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneArray_lanes
{
public:
  explicit Init_LaneArray_lanes(::autoware_msgs::msg::LaneArray & msg)
  : msg_(msg)
  {}
  ::autoware_msgs::msg::LaneArray lanes(::autoware_msgs::msg::LaneArray::_lanes_type arg)
  {
    msg_.lanes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_msgs::msg::LaneArray msg_;
};

class Init_LaneArray_id
{
public:
  Init_LaneArray_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneArray_lanes id(::autoware_msgs::msg::LaneArray::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_LaneArray_lanes(msg_);
  }

private:
  ::autoware_msgs::msg::LaneArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_msgs::msg::LaneArray>()
{
  return autoware_msgs::msg::builder::Init_LaneArray_id();
}

}  // namespace autoware_msgs

#endif  // AUTOWARE_MSGS__MSG__DETAIL__LANE_ARRAY__BUILDER_HPP_
