// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autoware_msgs:msg/LaneArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autoware_msgs/msg/detail/lane_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autoware_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LaneArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autoware_msgs::msg::LaneArray(_init);
}

void LaneArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autoware_msgs::msg::LaneArray *>(message_memory);
  typed_message->~LaneArray();
}

size_t size_function__LaneArray__lanes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autoware_msgs::msg::Lane> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneArray__lanes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autoware_msgs::msg::Lane> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneArray__lanes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autoware_msgs::msg::Lane> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneArray__lanes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const autoware_msgs::msg::Lane *>(
    get_const_function__LaneArray__lanes(untyped_member, index));
  auto & value = *reinterpret_cast<autoware_msgs::msg::Lane *>(untyped_value);
  value = item;
}

void assign_function__LaneArray__lanes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<autoware_msgs::msg::Lane *>(
    get_function__LaneArray__lanes(untyped_member, index));
  const auto & value = *reinterpret_cast<const autoware_msgs::msg::Lane *>(untyped_value);
  item = value;
}

void resize_function__LaneArray__lanes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autoware_msgs::msg::Lane> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LaneArray_message_member_array[2] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_msgs::msg::LaneArray, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lanes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autoware_msgs::msg::Lane>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_msgs::msg::LaneArray, lanes),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneArray__lanes,  // size() function pointer
    get_const_function__LaneArray__lanes,  // get_const(index) function pointer
    get_function__LaneArray__lanes,  // get(index) function pointer
    fetch_function__LaneArray__lanes,  // fetch(index, &value) function pointer
    assign_function__LaneArray__lanes,  // assign(index, value) function pointer
    resize_function__LaneArray__lanes  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LaneArray_message_members = {
  "autoware_msgs::msg",  // message namespace
  "LaneArray",  // message name
  2,  // number of fields
  sizeof(autoware_msgs::msg::LaneArray),
  LaneArray_message_member_array,  // message members
  LaneArray_init_function,  // function to initialize message memory (memory has to be allocated)
  LaneArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LaneArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LaneArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace autoware_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_msgs::msg::LaneArray>()
{
  return &::autoware_msgs::msg::rosidl_typesupport_introspection_cpp::LaneArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autoware_msgs, msg, LaneArray)() {
  return &::autoware_msgs::msg::rosidl_typesupport_introspection_cpp::LaneArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
