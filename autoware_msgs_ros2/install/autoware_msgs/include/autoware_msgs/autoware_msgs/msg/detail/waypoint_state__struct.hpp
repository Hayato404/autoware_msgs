// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_msgs:msg/WaypointState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT_STATE__STRUCT_HPP_
#define AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autoware_msgs__msg__WaypointState __attribute__((deprecated))
#else
# define DEPRECATED__autoware_msgs__msg__WaypointState __declspec(deprecated)
#endif

namespace autoware_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WaypointState_
{
  using Type = WaypointState_<ContainerAllocator>;

  explicit WaypointState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->aid = 0l;
      this->lanechange_state = 0;
      this->steering_state = 0;
      this->accel_state = 0;
      this->stop_state = 0;
      this->event_state = 0;
    }
  }

  explicit WaypointState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->aid = 0l;
      this->lanechange_state = 0;
      this->steering_state = 0;
      this->accel_state = 0;
      this->stop_state = 0;
      this->event_state = 0;
    }
  }

  // field types and members
  using _aid_type =
    int32_t;
  _aid_type aid;
  using _lanechange_state_type =
    uint8_t;
  _lanechange_state_type lanechange_state;
  using _steering_state_type =
    uint8_t;
  _steering_state_type steering_state;
  using _accel_state_type =
    uint8_t;
  _accel_state_type accel_state;
  using _stop_state_type =
    uint8_t;
  _stop_state_type stop_state;
  using _event_state_type =
    uint8_t;
  _event_state_type event_state;

  // setters for named parameter idiom
  Type & set__aid(
    const int32_t & _arg)
  {
    this->aid = _arg;
    return *this;
  }
  Type & set__lanechange_state(
    const uint8_t & _arg)
  {
    this->lanechange_state = _arg;
    return *this;
  }
  Type & set__steering_state(
    const uint8_t & _arg)
  {
    this->steering_state = _arg;
    return *this;
  }
  Type & set__accel_state(
    const uint8_t & _arg)
  {
    this->accel_state = _arg;
    return *this;
  }
  Type & set__stop_state(
    const uint8_t & _arg)
  {
    this->stop_state = _arg;
    return *this;
  }
  Type & set__event_state(
    const uint8_t & _arg)
  {
    this->event_state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NULLSTATE =
    0u;
  static constexpr uint8_t STR_LEFT =
    1u;
  static constexpr uint8_t STR_RIGHT =
    2u;
  static constexpr uint8_t STR_STRAIGHT =
    3u;
  static constexpr uint8_t STR_BACK =
    4u;
  static constexpr uint8_t TYPE_STOPLINE =
    1u;
  static constexpr uint8_t TYPE_STOP =
    2u;
  static constexpr uint8_t TYPE_EVENT_NULL =
    0u;
  static constexpr uint8_t TYPE_EVENT_GOAL =
    1u;
  static constexpr uint8_t TYPE_EVENT_MIDDLE_GOAL =
    2u;
  static constexpr uint8_t TYPE_EVENT_POSITION_STOP =
    3u;
  static constexpr uint8_t TYPE_EVENT_BUS_STOP =
    4u;
  static constexpr uint8_t TYPE_EVENT_PARKING =
    5u;

  // pointer types
  using RawPtr =
    autoware_msgs::msg::WaypointState_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_msgs::msg::WaypointState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_msgs::msg::WaypointState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_msgs::msg::WaypointState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_msgs::msg::WaypointState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_msgs::msg::WaypointState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_msgs::msg::WaypointState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_msgs::msg::WaypointState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_msgs::msg::WaypointState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_msgs::msg::WaypointState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_msgs__msg__WaypointState
    std::shared_ptr<autoware_msgs::msg::WaypointState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_msgs__msg__WaypointState
    std::shared_ptr<autoware_msgs::msg::WaypointState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointState_ & other) const
  {
    if (this->aid != other.aid) {
      return false;
    }
    if (this->lanechange_state != other.lanechange_state) {
      return false;
    }
    if (this->steering_state != other.steering_state) {
      return false;
    }
    if (this->accel_state != other.accel_state) {
      return false;
    }
    if (this->stop_state != other.stop_state) {
      return false;
    }
    if (this->event_state != other.event_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointState_

// alias to use template instance with default allocator
using WaypointState =
  autoware_msgs::msg::WaypointState_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t WaypointState_<ContainerAllocator>::NULLSTATE;
template<typename ContainerAllocator>
constexpr uint8_t WaypointState_<ContainerAllocator>::STR_LEFT;
template<typename ContainerAllocator>
constexpr uint8_t WaypointState_<ContainerAllocator>::STR_RIGHT;
template<typename ContainerAllocator>
constexpr uint8_t WaypointState_<ContainerAllocator>::STR_STRAIGHT;
template<typename ContainerAllocator>
constexpr uint8_t WaypointState_<ContainerAllocator>::STR_BACK;
template<typename ContainerAllocator>
constexpr uint8_t WaypointState_<ContainerAllocator>::TYPE_STOPLINE;
template<typename ContainerAllocator>
constexpr uint8_t WaypointState_<ContainerAllocator>::TYPE_STOP;
template<typename ContainerAllocator>
constexpr uint8_t WaypointState_<ContainerAllocator>::TYPE_EVENT_NULL;
template<typename ContainerAllocator>
constexpr uint8_t WaypointState_<ContainerAllocator>::TYPE_EVENT_GOAL;
template<typename ContainerAllocator>
constexpr uint8_t WaypointState_<ContainerAllocator>::TYPE_EVENT_MIDDLE_GOAL;
template<typename ContainerAllocator>
constexpr uint8_t WaypointState_<ContainerAllocator>::TYPE_EVENT_POSITION_STOP;
template<typename ContainerAllocator>
constexpr uint8_t WaypointState_<ContainerAllocator>::TYPE_EVENT_BUS_STOP;
template<typename ContainerAllocator>
constexpr uint8_t WaypointState_<ContainerAllocator>::TYPE_EVENT_PARKING;

}  // namespace msg

}  // namespace autoware_msgs

#endif  // AUTOWARE_MSGS__MSG__DETAIL__WAYPOINT_STATE__STRUCT_HPP_
