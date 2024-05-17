// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_msgs:msg/LaneArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__LANE_ARRAY__STRUCT_HPP_
#define AUTOWARE_MSGS__MSG__DETAIL__LANE_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'lanes'
#include "autoware_msgs/msg/detail/lane__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_msgs__msg__LaneArray __attribute__((deprecated))
#else
# define DEPRECATED__autoware_msgs__msg__LaneArray __declspec(deprecated)
#endif

namespace autoware_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneArray_
{
  using Type = LaneArray_<ContainerAllocator>;

  explicit LaneArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
    }
  }

  explicit LaneArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _lanes_type =
    std::vector<autoware_msgs::msg::Lane_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_msgs::msg::Lane_<ContainerAllocator>>>;
  _lanes_type lanes;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__lanes(
    const std::vector<autoware_msgs::msg::Lane_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_msgs::msg::Lane_<ContainerAllocator>>> & _arg)
  {
    this->lanes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_msgs::msg::LaneArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_msgs::msg::LaneArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_msgs::msg::LaneArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_msgs::msg::LaneArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_msgs::msg::LaneArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_msgs::msg::LaneArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_msgs::msg::LaneArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_msgs::msg::LaneArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_msgs::msg::LaneArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_msgs::msg::LaneArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_msgs__msg__LaneArray
    std::shared_ptr<autoware_msgs::msg::LaneArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_msgs__msg__LaneArray
    std::shared_ptr<autoware_msgs::msg::LaneArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneArray_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->lanes != other.lanes) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneArray_

// alias to use template instance with default allocator
using LaneArray =
  autoware_msgs::msg::LaneArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_msgs

#endif  // AUTOWARE_MSGS__MSG__DETAIL__LANE_ARRAY__STRUCT_HPP_
