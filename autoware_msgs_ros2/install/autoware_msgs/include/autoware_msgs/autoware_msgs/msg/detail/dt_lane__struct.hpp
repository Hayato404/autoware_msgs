// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_msgs:msg/DTLane.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__DT_LANE__STRUCT_HPP_
#define AUTOWARE_MSGS__MSG__DETAIL__DT_LANE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autoware_msgs__msg__DTLane __attribute__((deprecated))
#else
# define DEPRECATED__autoware_msgs__msg__DTLane __declspec(deprecated)
#endif

namespace autoware_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DTLane_
{
  using Type = DTLane_<ContainerAllocator>;

  explicit DTLane_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dist = 0.0;
      this->dir = 0.0;
      this->apara = 0.0;
      this->r = 0.0;
      this->slope = 0.0;
      this->cant = 0.0;
      this->lw = 0.0;
      this->rw = 0.0;
    }
  }

  explicit DTLane_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dist = 0.0;
      this->dir = 0.0;
      this->apara = 0.0;
      this->r = 0.0;
      this->slope = 0.0;
      this->cant = 0.0;
      this->lw = 0.0;
      this->rw = 0.0;
    }
  }

  // field types and members
  using _dist_type =
    double;
  _dist_type dist;
  using _dir_type =
    double;
  _dir_type dir;
  using _apara_type =
    double;
  _apara_type apara;
  using _r_type =
    double;
  _r_type r;
  using _slope_type =
    double;
  _slope_type slope;
  using _cant_type =
    double;
  _cant_type cant;
  using _lw_type =
    double;
  _lw_type lw;
  using _rw_type =
    double;
  _rw_type rw;

  // setters for named parameter idiom
  Type & set__dist(
    const double & _arg)
  {
    this->dist = _arg;
    return *this;
  }
  Type & set__dir(
    const double & _arg)
  {
    this->dir = _arg;
    return *this;
  }
  Type & set__apara(
    const double & _arg)
  {
    this->apara = _arg;
    return *this;
  }
  Type & set__r(
    const double & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__slope(
    const double & _arg)
  {
    this->slope = _arg;
    return *this;
  }
  Type & set__cant(
    const double & _arg)
  {
    this->cant = _arg;
    return *this;
  }
  Type & set__lw(
    const double & _arg)
  {
    this->lw = _arg;
    return *this;
  }
  Type & set__rw(
    const double & _arg)
  {
    this->rw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_msgs::msg::DTLane_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_msgs::msg::DTLane_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_msgs::msg::DTLane_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_msgs::msg::DTLane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_msgs::msg::DTLane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_msgs::msg::DTLane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_msgs::msg::DTLane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_msgs::msg::DTLane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_msgs::msg::DTLane_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_msgs::msg::DTLane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_msgs__msg__DTLane
    std::shared_ptr<autoware_msgs::msg::DTLane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_msgs__msg__DTLane
    std::shared_ptr<autoware_msgs::msg::DTLane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DTLane_ & other) const
  {
    if (this->dist != other.dist) {
      return false;
    }
    if (this->dir != other.dir) {
      return false;
    }
    if (this->apara != other.apara) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    if (this->slope != other.slope) {
      return false;
    }
    if (this->cant != other.cant) {
      return false;
    }
    if (this->lw != other.lw) {
      return false;
    }
    if (this->rw != other.rw) {
      return false;
    }
    return true;
  }
  bool operator!=(const DTLane_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DTLane_

// alias to use template instance with default allocator
using DTLane =
  autoware_msgs::msg::DTLane_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_msgs

#endif  // AUTOWARE_MSGS__MSG__DETAIL__DT_LANE__STRUCT_HPP_
