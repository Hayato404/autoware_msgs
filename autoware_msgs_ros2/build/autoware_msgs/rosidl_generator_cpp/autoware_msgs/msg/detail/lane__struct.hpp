// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__LANE__STRUCT_HPP_
#define AUTOWARE_MSGS__MSG__DETAIL__LANE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'waypoints'
#include "autoware_msgs/msg/detail/waypoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_msgs__msg__Lane __attribute__((deprecated))
#else
# define DEPRECATED__autoware_msgs__msg__Lane __declspec(deprecated)
#endif

namespace autoware_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Lane_
{
  using Type = Lane_<ContainerAllocator>;

  explicit Lane_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->increment = 0l;
      this->lane_id = 0l;
      this->lane_index = 0ul;
      this->cost = 0.0f;
      this->closest_object_distance = 0.0f;
      this->closest_object_velocity = 0.0f;
      this->is_blocked = false;
    }
  }

  explicit Lane_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->increment = 0l;
      this->lane_id = 0l;
      this->lane_index = 0ul;
      this->cost = 0.0f;
      this->closest_object_distance = 0.0f;
      this->closest_object_velocity = 0.0f;
      this->is_blocked = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _increment_type =
    int32_t;
  _increment_type increment;
  using _lane_id_type =
    int32_t;
  _lane_id_type lane_id;
  using _waypoints_type =
    std::vector<autoware_msgs::msg::Waypoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_msgs::msg::Waypoint_<ContainerAllocator>>>;
  _waypoints_type waypoints;
  using _lane_index_type =
    uint32_t;
  _lane_index_type lane_index;
  using _cost_type =
    float;
  _cost_type cost;
  using _closest_object_distance_type =
    float;
  _closest_object_distance_type closest_object_distance;
  using _closest_object_velocity_type =
    float;
  _closest_object_velocity_type closest_object_velocity;
  using _is_blocked_type =
    bool;
  _is_blocked_type is_blocked;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__increment(
    const int32_t & _arg)
  {
    this->increment = _arg;
    return *this;
  }
  Type & set__lane_id(
    const int32_t & _arg)
  {
    this->lane_id = _arg;
    return *this;
  }
  Type & set__waypoints(
    const std::vector<autoware_msgs::msg::Waypoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_msgs::msg::Waypoint_<ContainerAllocator>>> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }
  Type & set__lane_index(
    const uint32_t & _arg)
  {
    this->lane_index = _arg;
    return *this;
  }
  Type & set__cost(
    const float & _arg)
  {
    this->cost = _arg;
    return *this;
  }
  Type & set__closest_object_distance(
    const float & _arg)
  {
    this->closest_object_distance = _arg;
    return *this;
  }
  Type & set__closest_object_velocity(
    const float & _arg)
  {
    this->closest_object_velocity = _arg;
    return *this;
  }
  Type & set__is_blocked(
    const bool & _arg)
  {
    this->is_blocked = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_msgs::msg::Lane_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_msgs::msg::Lane_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_msgs::msg::Lane_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_msgs::msg::Lane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_msgs::msg::Lane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_msgs::msg::Lane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_msgs::msg::Lane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_msgs::msg::Lane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_msgs::msg::Lane_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_msgs::msg::Lane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_msgs__msg__Lane
    std::shared_ptr<autoware_msgs::msg::Lane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_msgs__msg__Lane
    std::shared_ptr<autoware_msgs::msg::Lane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Lane_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->increment != other.increment) {
      return false;
    }
    if (this->lane_id != other.lane_id) {
      return false;
    }
    if (this->waypoints != other.waypoints) {
      return false;
    }
    if (this->lane_index != other.lane_index) {
      return false;
    }
    if (this->cost != other.cost) {
      return false;
    }
    if (this->closest_object_distance != other.closest_object_distance) {
      return false;
    }
    if (this->closest_object_velocity != other.closest_object_velocity) {
      return false;
    }
    if (this->is_blocked != other.is_blocked) {
      return false;
    }
    return true;
  }
  bool operator!=(const Lane_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Lane_

// alias to use template instance with default allocator
using Lane =
  autoware_msgs::msg::Lane_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_msgs

#endif  // AUTOWARE_MSGS__MSG__DETAIL__LANE__STRUCT_HPP_
