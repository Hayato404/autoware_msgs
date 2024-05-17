// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
#define AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_msgs/msg/detail/waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_msgs
{

namespace msg
{

namespace builder
{

class Init_Waypoint_direction
{
public:
  explicit Init_Waypoint_direction(::autoware_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  ::autoware_msgs::msg::Waypoint direction(::autoware_msgs::msg::Waypoint::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_time_cost
{
public:
  explicit Init_Waypoint_time_cost(::autoware_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_direction time_cost(::autoware_msgs::msg::Waypoint::_time_cost_type arg)
  {
    msg_.time_cost = std::move(arg);
    return Init_Waypoint_direction(msg_);
  }

private:
  ::autoware_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_cost
{
public:
  explicit Init_Waypoint_cost(::autoware_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_time_cost cost(::autoware_msgs::msg::Waypoint::_cost_type arg)
  {
    msg_.cost = std::move(arg);
    return Init_Waypoint_time_cost(msg_);
  }

private:
  ::autoware_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_stop_line_id
{
public:
  explicit Init_Waypoint_stop_line_id(::autoware_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_cost stop_line_id(::autoware_msgs::msg::Waypoint::_stop_line_id_type arg)
  {
    msg_.stop_line_id = std::move(arg);
    return Init_Waypoint_cost(msg_);
  }

private:
  ::autoware_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_right_lane_id
{
public:
  explicit Init_Waypoint_right_lane_id(::autoware_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_stop_line_id right_lane_id(::autoware_msgs::msg::Waypoint::_right_lane_id_type arg)
  {
    msg_.right_lane_id = std::move(arg);
    return Init_Waypoint_stop_line_id(msg_);
  }

private:
  ::autoware_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_left_lane_id
{
public:
  explicit Init_Waypoint_left_lane_id(::autoware_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_right_lane_id left_lane_id(::autoware_msgs::msg::Waypoint::_left_lane_id_type arg)
  {
    msg_.left_lane_id = std::move(arg);
    return Init_Waypoint_right_lane_id(msg_);
  }

private:
  ::autoware_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_lane_id
{
public:
  explicit Init_Waypoint_lane_id(::autoware_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_left_lane_id lane_id(::autoware_msgs::msg::Waypoint::_lane_id_type arg)
  {
    msg_.lane_id = std::move(arg);
    return Init_Waypoint_left_lane_id(msg_);
  }

private:
  ::autoware_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_wpstate
{
public:
  explicit Init_Waypoint_wpstate(::autoware_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_lane_id wpstate(::autoware_msgs::msg::Waypoint::_wpstate_type arg)
  {
    msg_.wpstate = std::move(arg);
    return Init_Waypoint_lane_id(msg_);
  }

private:
  ::autoware_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_change_flag
{
public:
  explicit Init_Waypoint_change_flag(::autoware_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_wpstate change_flag(::autoware_msgs::msg::Waypoint::_change_flag_type arg)
  {
    msg_.change_flag = std::move(arg);
    return Init_Waypoint_wpstate(msg_);
  }

private:
  ::autoware_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_dtlane
{
public:
  explicit Init_Waypoint_dtlane(::autoware_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_change_flag dtlane(::autoware_msgs::msg::Waypoint::_dtlane_type arg)
  {
    msg_.dtlane = std::move(arg);
    return Init_Waypoint_change_flag(msg_);
  }

private:
  ::autoware_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_twist
{
public:
  explicit Init_Waypoint_twist(::autoware_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_dtlane twist(::autoware_msgs::msg::Waypoint::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_Waypoint_dtlane(msg_);
  }

private:
  ::autoware_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_pose
{
public:
  explicit Init_Waypoint_pose(::autoware_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_twist pose(::autoware_msgs::msg::Waypoint::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Waypoint_twist(msg_);
  }

private:
  ::autoware_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_lid
{
public:
  explicit Init_Waypoint_lid(::autoware_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_pose lid(::autoware_msgs::msg::Waypoint::_lid_type arg)
  {
    msg_.lid = std::move(arg);
    return Init_Waypoint_pose(msg_);
  }

private:
  ::autoware_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_gid
{
public:
  Init_Waypoint_gid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoint_lid gid(::autoware_msgs::msg::Waypoint::_gid_type arg)
  {
    msg_.gid = std::move(arg);
    return Init_Waypoint_lid(msg_);
  }

private:
  ::autoware_msgs::msg::Waypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_msgs::msg::Waypoint>()
{
  return autoware_msgs::msg::builder::Init_Waypoint_gid();
}

}  // namespace autoware_msgs

#endif  // AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
