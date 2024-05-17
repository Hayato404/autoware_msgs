// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_msgs:msg/LaneWaypointsArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__LANE_WAYPOINTS_ARRAY__BUILDER_HPP_
#define AUTOWARE_MSGS__MSG__DETAIL__LANE_WAYPOINTS_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_msgs/msg/detail/lane_waypoints_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneWaypointsArray_direction
{
public:
  explicit Init_LaneWaypointsArray_direction(::autoware_msgs::msg::LaneWaypointsArray & msg)
  : msg_(msg)
  {}
  ::autoware_msgs::msg::LaneWaypointsArray direction(::autoware_msgs::msg::LaneWaypointsArray::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_msgs::msg::LaneWaypointsArray msg_;
};

class Init_LaneWaypointsArray_time_cost
{
public:
  explicit Init_LaneWaypointsArray_time_cost(::autoware_msgs::msg::LaneWaypointsArray & msg)
  : msg_(msg)
  {}
  Init_LaneWaypointsArray_direction time_cost(::autoware_msgs::msg::LaneWaypointsArray::_time_cost_type arg)
  {
    msg_.time_cost = std::move(arg);
    return Init_LaneWaypointsArray_direction(msg_);
  }

private:
  ::autoware_msgs::msg::LaneWaypointsArray msg_;
};

class Init_LaneWaypointsArray_cost
{
public:
  explicit Init_LaneWaypointsArray_cost(::autoware_msgs::msg::LaneWaypointsArray & msg)
  : msg_(msg)
  {}
  Init_LaneWaypointsArray_time_cost cost(::autoware_msgs::msg::LaneWaypointsArray::_cost_type arg)
  {
    msg_.cost = std::move(arg);
    return Init_LaneWaypointsArray_time_cost(msg_);
  }

private:
  ::autoware_msgs::msg::LaneWaypointsArray msg_;
};

class Init_LaneWaypointsArray_stop_line_id
{
public:
  explicit Init_LaneWaypointsArray_stop_line_id(::autoware_msgs::msg::LaneWaypointsArray & msg)
  : msg_(msg)
  {}
  Init_LaneWaypointsArray_cost stop_line_id(::autoware_msgs::msg::LaneWaypointsArray::_stop_line_id_type arg)
  {
    msg_.stop_line_id = std::move(arg);
    return Init_LaneWaypointsArray_cost(msg_);
  }

private:
  ::autoware_msgs::msg::LaneWaypointsArray msg_;
};

class Init_LaneWaypointsArray_right_lane_id
{
public:
  explicit Init_LaneWaypointsArray_right_lane_id(::autoware_msgs::msg::LaneWaypointsArray & msg)
  : msg_(msg)
  {}
  Init_LaneWaypointsArray_stop_line_id right_lane_id(::autoware_msgs::msg::LaneWaypointsArray::_right_lane_id_type arg)
  {
    msg_.right_lane_id = std::move(arg);
    return Init_LaneWaypointsArray_stop_line_id(msg_);
  }

private:
  ::autoware_msgs::msg::LaneWaypointsArray msg_;
};

class Init_LaneWaypointsArray_left_lane_id
{
public:
  explicit Init_LaneWaypointsArray_left_lane_id(::autoware_msgs::msg::LaneWaypointsArray & msg)
  : msg_(msg)
  {}
  Init_LaneWaypointsArray_right_lane_id left_lane_id(::autoware_msgs::msg::LaneWaypointsArray::_left_lane_id_type arg)
  {
    msg_.left_lane_id = std::move(arg);
    return Init_LaneWaypointsArray_right_lane_id(msg_);
  }

private:
  ::autoware_msgs::msg::LaneWaypointsArray msg_;
};

class Init_LaneWaypointsArray_lane_id
{
public:
  explicit Init_LaneWaypointsArray_lane_id(::autoware_msgs::msg::LaneWaypointsArray & msg)
  : msg_(msg)
  {}
  Init_LaneWaypointsArray_left_lane_id lane_id(::autoware_msgs::msg::LaneWaypointsArray::_lane_id_type arg)
  {
    msg_.lane_id = std::move(arg);
    return Init_LaneWaypointsArray_left_lane_id(msg_);
  }

private:
  ::autoware_msgs::msg::LaneWaypointsArray msg_;
};

class Init_LaneWaypointsArray_wpstate
{
public:
  explicit Init_LaneWaypointsArray_wpstate(::autoware_msgs::msg::LaneWaypointsArray & msg)
  : msg_(msg)
  {}
  Init_LaneWaypointsArray_lane_id wpstate(::autoware_msgs::msg::LaneWaypointsArray::_wpstate_type arg)
  {
    msg_.wpstate = std::move(arg);
    return Init_LaneWaypointsArray_lane_id(msg_);
  }

private:
  ::autoware_msgs::msg::LaneWaypointsArray msg_;
};

class Init_LaneWaypointsArray_change_flag
{
public:
  explicit Init_LaneWaypointsArray_change_flag(::autoware_msgs::msg::LaneWaypointsArray & msg)
  : msg_(msg)
  {}
  Init_LaneWaypointsArray_wpstate change_flag(::autoware_msgs::msg::LaneWaypointsArray::_change_flag_type arg)
  {
    msg_.change_flag = std::move(arg);
    return Init_LaneWaypointsArray_wpstate(msg_);
  }

private:
  ::autoware_msgs::msg::LaneWaypointsArray msg_;
};

class Init_LaneWaypointsArray_dtlane
{
public:
  explicit Init_LaneWaypointsArray_dtlane(::autoware_msgs::msg::LaneWaypointsArray & msg)
  : msg_(msg)
  {}
  Init_LaneWaypointsArray_change_flag dtlane(::autoware_msgs::msg::LaneWaypointsArray::_dtlane_type arg)
  {
    msg_.dtlane = std::move(arg);
    return Init_LaneWaypointsArray_change_flag(msg_);
  }

private:
  ::autoware_msgs::msg::LaneWaypointsArray msg_;
};

class Init_LaneWaypointsArray_twist
{
public:
  explicit Init_LaneWaypointsArray_twist(::autoware_msgs::msg::LaneWaypointsArray & msg)
  : msg_(msg)
  {}
  Init_LaneWaypointsArray_dtlane twist(::autoware_msgs::msg::LaneWaypointsArray::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_LaneWaypointsArray_dtlane(msg_);
  }

private:
  ::autoware_msgs::msg::LaneWaypointsArray msg_;
};

class Init_LaneWaypointsArray_pose
{
public:
  explicit Init_LaneWaypointsArray_pose(::autoware_msgs::msg::LaneWaypointsArray & msg)
  : msg_(msg)
  {}
  Init_LaneWaypointsArray_twist pose(::autoware_msgs::msg::LaneWaypointsArray::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_LaneWaypointsArray_twist(msg_);
  }

private:
  ::autoware_msgs::msg::LaneWaypointsArray msg_;
};

class Init_LaneWaypointsArray_lid
{
public:
  explicit Init_LaneWaypointsArray_lid(::autoware_msgs::msg::LaneWaypointsArray & msg)
  : msg_(msg)
  {}
  Init_LaneWaypointsArray_pose lid(::autoware_msgs::msg::LaneWaypointsArray::_lid_type arg)
  {
    msg_.lid = std::move(arg);
    return Init_LaneWaypointsArray_pose(msg_);
  }

private:
  ::autoware_msgs::msg::LaneWaypointsArray msg_;
};

class Init_LaneWaypointsArray_gid
{
public:
  Init_LaneWaypointsArray_gid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneWaypointsArray_lid gid(::autoware_msgs::msg::LaneWaypointsArray::_gid_type arg)
  {
    msg_.gid = std::move(arg);
    return Init_LaneWaypointsArray_lid(msg_);
  }

private:
  ::autoware_msgs::msg::LaneWaypointsArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_msgs::msg::LaneWaypointsArray>()
{
  return autoware_msgs::msg::builder::Init_LaneWaypointsArray_gid();
}

}  // namespace autoware_msgs

#endif  // AUTOWARE_MSGS__MSG__DETAIL__LANE_WAYPOINTS_ARRAY__BUILDER_HPP_
