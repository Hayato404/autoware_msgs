// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__LANE__BUILDER_HPP_
#define AUTOWARE_MSGS__MSG__DETAIL__LANE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_msgs/msg/detail/lane__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_msgs
{

namespace msg
{

namespace builder
{

class Init_Lane_is_blocked
{
public:
  explicit Init_Lane_is_blocked(::autoware_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  ::autoware_msgs::msg::Lane is_blocked(::autoware_msgs::msg::Lane::_is_blocked_type arg)
  {
    msg_.is_blocked = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_msgs::msg::Lane msg_;
};

class Init_Lane_closest_object_velocity
{
public:
  explicit Init_Lane_closest_object_velocity(::autoware_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_is_blocked closest_object_velocity(::autoware_msgs::msg::Lane::_closest_object_velocity_type arg)
  {
    msg_.closest_object_velocity = std::move(arg);
    return Init_Lane_is_blocked(msg_);
  }

private:
  ::autoware_msgs::msg::Lane msg_;
};

class Init_Lane_closest_object_distance
{
public:
  explicit Init_Lane_closest_object_distance(::autoware_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_closest_object_velocity closest_object_distance(::autoware_msgs::msg::Lane::_closest_object_distance_type arg)
  {
    msg_.closest_object_distance = std::move(arg);
    return Init_Lane_closest_object_velocity(msg_);
  }

private:
  ::autoware_msgs::msg::Lane msg_;
};

class Init_Lane_cost
{
public:
  explicit Init_Lane_cost(::autoware_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_closest_object_distance cost(::autoware_msgs::msg::Lane::_cost_type arg)
  {
    msg_.cost = std::move(arg);
    return Init_Lane_closest_object_distance(msg_);
  }

private:
  ::autoware_msgs::msg::Lane msg_;
};

class Init_Lane_lane_index
{
public:
  explicit Init_Lane_lane_index(::autoware_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_cost lane_index(::autoware_msgs::msg::Lane::_lane_index_type arg)
  {
    msg_.lane_index = std::move(arg);
    return Init_Lane_cost(msg_);
  }

private:
  ::autoware_msgs::msg::Lane msg_;
};

class Init_Lane_waypoints
{
public:
  explicit Init_Lane_waypoints(::autoware_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_lane_index waypoints(::autoware_msgs::msg::Lane::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return Init_Lane_lane_index(msg_);
  }

private:
  ::autoware_msgs::msg::Lane msg_;
};

class Init_Lane_lane_id
{
public:
  explicit Init_Lane_lane_id(::autoware_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_waypoints lane_id(::autoware_msgs::msg::Lane::_lane_id_type arg)
  {
    msg_.lane_id = std::move(arg);
    return Init_Lane_waypoints(msg_);
  }

private:
  ::autoware_msgs::msg::Lane msg_;
};

class Init_Lane_increment
{
public:
  explicit Init_Lane_increment(::autoware_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_lane_id increment(::autoware_msgs::msg::Lane::_increment_type arg)
  {
    msg_.increment = std::move(arg);
    return Init_Lane_lane_id(msg_);
  }

private:
  ::autoware_msgs::msg::Lane msg_;
};

class Init_Lane_header
{
public:
  Init_Lane_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Lane_increment header(::autoware_msgs::msg::Lane::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Lane_increment(msg_);
  }

private:
  ::autoware_msgs::msg::Lane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_msgs::msg::Lane>()
{
  return autoware_msgs::msg::builder::Init_Lane_header();
}

}  // namespace autoware_msgs

#endif  // AUTOWARE_MSGS__MSG__DETAIL__LANE__BUILDER_HPP_
