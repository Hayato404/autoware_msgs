// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_msgs:msg/WaypointState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT_STATE__BUILDER_HPP_
#define AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_msgs/msg/detail/waypoint_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_msgs
{

namespace msg
{

namespace builder
{

class Init_WaypointState_event_state
{
public:
  explicit Init_WaypointState_event_state(::autoware_msgs::msg::WaypointState & msg)
  : msg_(msg)
  {}
  ::autoware_msgs::msg::WaypointState event_state(::autoware_msgs::msg::WaypointState::_event_state_type arg)
  {
    msg_.event_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_msgs::msg::WaypointState msg_;
};

class Init_WaypointState_stop_state
{
public:
  explicit Init_WaypointState_stop_state(::autoware_msgs::msg::WaypointState & msg)
  : msg_(msg)
  {}
  Init_WaypointState_event_state stop_state(::autoware_msgs::msg::WaypointState::_stop_state_type arg)
  {
    msg_.stop_state = std::move(arg);
    return Init_WaypointState_event_state(msg_);
  }

private:
  ::autoware_msgs::msg::WaypointState msg_;
};

class Init_WaypointState_accel_state
{
public:
  explicit Init_WaypointState_accel_state(::autoware_msgs::msg::WaypointState & msg)
  : msg_(msg)
  {}
  Init_WaypointState_stop_state accel_state(::autoware_msgs::msg::WaypointState::_accel_state_type arg)
  {
    msg_.accel_state = std::move(arg);
    return Init_WaypointState_stop_state(msg_);
  }

private:
  ::autoware_msgs::msg::WaypointState msg_;
};

class Init_WaypointState_steering_state
{
public:
  explicit Init_WaypointState_steering_state(::autoware_msgs::msg::WaypointState & msg)
  : msg_(msg)
  {}
  Init_WaypointState_accel_state steering_state(::autoware_msgs::msg::WaypointState::_steering_state_type arg)
  {
    msg_.steering_state = std::move(arg);
    return Init_WaypointState_accel_state(msg_);
  }

private:
  ::autoware_msgs::msg::WaypointState msg_;
};

class Init_WaypointState_lanechange_state
{
public:
  explicit Init_WaypointState_lanechange_state(::autoware_msgs::msg::WaypointState & msg)
  : msg_(msg)
  {}
  Init_WaypointState_steering_state lanechange_state(::autoware_msgs::msg::WaypointState::_lanechange_state_type arg)
  {
    msg_.lanechange_state = std::move(arg);
    return Init_WaypointState_steering_state(msg_);
  }

private:
  ::autoware_msgs::msg::WaypointState msg_;
};

class Init_WaypointState_aid
{
public:
  Init_WaypointState_aid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointState_lanechange_state aid(::autoware_msgs::msg::WaypointState::_aid_type arg)
  {
    msg_.aid = std::move(arg);
    return Init_WaypointState_lanechange_state(msg_);
  }

private:
  ::autoware_msgs::msg::WaypointState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_msgs::msg::WaypointState>()
{
  return autoware_msgs::msg::builder::Init_WaypointState_aid();
}

}  // namespace autoware_msgs

#endif  // AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT_STATE__BUILDER_HPP_
