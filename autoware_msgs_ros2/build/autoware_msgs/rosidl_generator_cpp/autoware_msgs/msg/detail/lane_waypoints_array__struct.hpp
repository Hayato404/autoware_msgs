// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_msgs:msg/LaneWaypointsArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__LANE_WAYPOINTS_ARRAY__STRUCT_HPP_
#define AUTOWARE_MSGS__MSG__DETAIL__LANE_WAYPOINTS_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_stamped__struct.hpp"
// Member 'dtlane'
#include "autoware_msgs/msg/detail/dt_lane__struct.hpp"
// Member 'wpstate'
#include "autoware_msgs/msg/detail/waypoint_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_msgs__msg__LaneWaypointsArray __attribute__((deprecated))
#else
# define DEPRECATED__autoware_msgs__msg__LaneWaypointsArray __declspec(deprecated)
#endif

namespace autoware_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneWaypointsArray_
{
  using Type = LaneWaypointsArray_<ContainerAllocator>;

  explicit LaneWaypointsArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    twist(_init),
    dtlane(_init),
    wpstate(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gid = 0l;
      this->lid = 0l;
      this->change_flag = 0l;
      this->lane_id = 0ul;
      this->left_lane_id = 0ul;
      this->right_lane_id = 0ul;
      this->stop_line_id = 0ul;
      this->cost = 0.0f;
      this->time_cost = 0.0f;
      this->direction = 0ul;
    }
  }

  explicit LaneWaypointsArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    twist(_alloc, _init),
    dtlane(_alloc, _init),
    wpstate(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gid = 0l;
      this->lid = 0l;
      this->change_flag = 0l;
      this->lane_id = 0ul;
      this->left_lane_id = 0ul;
      this->right_lane_id = 0ul;
      this->stop_line_id = 0ul;
      this->cost = 0.0f;
      this->time_cost = 0.0f;
      this->direction = 0ul;
    }
  }

  // field types and members
  using _gid_type =
    int32_t;
  _gid_type gid;
  using _lid_type =
    int32_t;
  _lid_type lid;
  using _pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _pose_type pose;
  using _twist_type =
    geometry_msgs::msg::TwistStamped_<ContainerAllocator>;
  _twist_type twist;
  using _dtlane_type =
    autoware_msgs::msg::DTLane_<ContainerAllocator>;
  _dtlane_type dtlane;
  using _change_flag_type =
    int32_t;
  _change_flag_type change_flag;
  using _wpstate_type =
    autoware_msgs::msg::WaypointState_<ContainerAllocator>;
  _wpstate_type wpstate;
  using _lane_id_type =
    uint32_t;
  _lane_id_type lane_id;
  using _left_lane_id_type =
    uint32_t;
  _left_lane_id_type left_lane_id;
  using _right_lane_id_type =
    uint32_t;
  _right_lane_id_type right_lane_id;
  using _stop_line_id_type =
    uint32_t;
  _stop_line_id_type stop_line_id;
  using _cost_type =
    float;
  _cost_type cost;
  using _time_cost_type =
    float;
  _time_cost_type time_cost;
  using _direction_type =
    uint32_t;
  _direction_type direction;

  // setters for named parameter idiom
  Type & set__gid(
    const int32_t & _arg)
  {
    this->gid = _arg;
    return *this;
  }
  Type & set__lid(
    const int32_t & _arg)
  {
    this->lid = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__twist(
    const geometry_msgs::msg::TwistStamped_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }
  Type & set__dtlane(
    const autoware_msgs::msg::DTLane_<ContainerAllocator> & _arg)
  {
    this->dtlane = _arg;
    return *this;
  }
  Type & set__change_flag(
    const int32_t & _arg)
  {
    this->change_flag = _arg;
    return *this;
  }
  Type & set__wpstate(
    const autoware_msgs::msg::WaypointState_<ContainerAllocator> & _arg)
  {
    this->wpstate = _arg;
    return *this;
  }
  Type & set__lane_id(
    const uint32_t & _arg)
  {
    this->lane_id = _arg;
    return *this;
  }
  Type & set__left_lane_id(
    const uint32_t & _arg)
  {
    this->left_lane_id = _arg;
    return *this;
  }
  Type & set__right_lane_id(
    const uint32_t & _arg)
  {
    this->right_lane_id = _arg;
    return *this;
  }
  Type & set__stop_line_id(
    const uint32_t & _arg)
  {
    this->stop_line_id = _arg;
    return *this;
  }
  Type & set__cost(
    const float & _arg)
  {
    this->cost = _arg;
    return *this;
  }
  Type & set__time_cost(
    const float & _arg)
  {
    this->time_cost = _arg;
    return *this;
  }
  Type & set__direction(
    const uint32_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_msgs::msg::LaneWaypointsArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_msgs::msg::LaneWaypointsArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_msgs::msg::LaneWaypointsArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_msgs::msg::LaneWaypointsArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_msgs::msg::LaneWaypointsArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_msgs::msg::LaneWaypointsArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_msgs::msg::LaneWaypointsArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_msgs::msg::LaneWaypointsArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_msgs::msg::LaneWaypointsArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_msgs::msg::LaneWaypointsArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_msgs__msg__LaneWaypointsArray
    std::shared_ptr<autoware_msgs::msg::LaneWaypointsArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_msgs__msg__LaneWaypointsArray
    std::shared_ptr<autoware_msgs::msg::LaneWaypointsArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneWaypointsArray_ & other) const
  {
    if (this->gid != other.gid) {
      return false;
    }
    if (this->lid != other.lid) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    if (this->dtlane != other.dtlane) {
      return false;
    }
    if (this->change_flag != other.change_flag) {
      return false;
    }
    if (this->wpstate != other.wpstate) {
      return false;
    }
    if (this->lane_id != other.lane_id) {
      return false;
    }
    if (this->left_lane_id != other.left_lane_id) {
      return false;
    }
    if (this->right_lane_id != other.right_lane_id) {
      return false;
    }
    if (this->stop_line_id != other.stop_line_id) {
      return false;
    }
    if (this->cost != other.cost) {
      return false;
    }
    if (this->time_cost != other.time_cost) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneWaypointsArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneWaypointsArray_

// alias to use template instance with default allocator
using LaneWaypointsArray =
  autoware_msgs::msg::LaneWaypointsArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_msgs

#endif  // AUTOWARE_MSGS__MSG__DETAIL__LANE_WAYPOINTS_ARRAY__STRUCT_HPP_
