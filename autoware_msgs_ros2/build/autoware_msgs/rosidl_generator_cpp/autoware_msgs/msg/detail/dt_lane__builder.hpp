// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_msgs:msg/DTLane.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__DT_LANE__BUILDER_HPP_
#define AUTOWARE_MSGS__MSG__DETAIL__DT_LANE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_msgs/msg/detail/dt_lane__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_msgs
{

namespace msg
{

namespace builder
{

class Init_DTLane_rw
{
public:
  explicit Init_DTLane_rw(::autoware_msgs::msg::DTLane & msg)
  : msg_(msg)
  {}
  ::autoware_msgs::msg::DTLane rw(::autoware_msgs::msg::DTLane::_rw_type arg)
  {
    msg_.rw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_msgs::msg::DTLane msg_;
};

class Init_DTLane_lw
{
public:
  explicit Init_DTLane_lw(::autoware_msgs::msg::DTLane & msg)
  : msg_(msg)
  {}
  Init_DTLane_rw lw(::autoware_msgs::msg::DTLane::_lw_type arg)
  {
    msg_.lw = std::move(arg);
    return Init_DTLane_rw(msg_);
  }

private:
  ::autoware_msgs::msg::DTLane msg_;
};

class Init_DTLane_cant
{
public:
  explicit Init_DTLane_cant(::autoware_msgs::msg::DTLane & msg)
  : msg_(msg)
  {}
  Init_DTLane_lw cant(::autoware_msgs::msg::DTLane::_cant_type arg)
  {
    msg_.cant = std::move(arg);
    return Init_DTLane_lw(msg_);
  }

private:
  ::autoware_msgs::msg::DTLane msg_;
};

class Init_DTLane_slope
{
public:
  explicit Init_DTLane_slope(::autoware_msgs::msg::DTLane & msg)
  : msg_(msg)
  {}
  Init_DTLane_cant slope(::autoware_msgs::msg::DTLane::_slope_type arg)
  {
    msg_.slope = std::move(arg);
    return Init_DTLane_cant(msg_);
  }

private:
  ::autoware_msgs::msg::DTLane msg_;
};

class Init_DTLane_r
{
public:
  explicit Init_DTLane_r(::autoware_msgs::msg::DTLane & msg)
  : msg_(msg)
  {}
  Init_DTLane_slope r(::autoware_msgs::msg::DTLane::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_DTLane_slope(msg_);
  }

private:
  ::autoware_msgs::msg::DTLane msg_;
};

class Init_DTLane_apara
{
public:
  explicit Init_DTLane_apara(::autoware_msgs::msg::DTLane & msg)
  : msg_(msg)
  {}
  Init_DTLane_r apara(::autoware_msgs::msg::DTLane::_apara_type arg)
  {
    msg_.apara = std::move(arg);
    return Init_DTLane_r(msg_);
  }

private:
  ::autoware_msgs::msg::DTLane msg_;
};

class Init_DTLane_dir
{
public:
  explicit Init_DTLane_dir(::autoware_msgs::msg::DTLane & msg)
  : msg_(msg)
  {}
  Init_DTLane_apara dir(::autoware_msgs::msg::DTLane::_dir_type arg)
  {
    msg_.dir = std::move(arg);
    return Init_DTLane_apara(msg_);
  }

private:
  ::autoware_msgs::msg::DTLane msg_;
};

class Init_DTLane_dist
{
public:
  Init_DTLane_dist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DTLane_dir dist(::autoware_msgs::msg::DTLane::_dist_type arg)
  {
    msg_.dist = std::move(arg);
    return Init_DTLane_dir(msg_);
  }

private:
  ::autoware_msgs::msg::DTLane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_msgs::msg::DTLane>()
{
  return autoware_msgs::msg::builder::Init_DTLane_dist();
}

}  // namespace autoware_msgs

#endif  // AUTOWARE_MSGS__MSG__DETAIL__DT_LANE__BUILDER_HPP_
