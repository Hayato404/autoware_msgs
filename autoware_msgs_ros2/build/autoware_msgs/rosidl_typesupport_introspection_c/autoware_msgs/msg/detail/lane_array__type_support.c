// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_msgs:msg/LaneArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_msgs/msg/detail/lane_array__rosidl_typesupport_introspection_c.h"
#include "autoware_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_msgs/msg/detail/lane_array__functions.h"
#include "autoware_msgs/msg/detail/lane_array__struct.h"


// Include directives for member types
// Member `lanes`
#include "autoware_msgs/msg/lane.h"
// Member `lanes`
#include "autoware_msgs/msg/detail/lane__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__LaneArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_msgs__msg__LaneArray__init(message_memory);
}

void autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__LaneArray_fini_function(void * message_memory)
{
  autoware_msgs__msg__LaneArray__fini(message_memory);
}

size_t autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__size_function__LaneArray__lanes(
  const void * untyped_member)
{
  const autoware_msgs__msg__Lane__Sequence * member =
    (const autoware_msgs__msg__Lane__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__get_const_function__LaneArray__lanes(
  const void * untyped_member, size_t index)
{
  const autoware_msgs__msg__Lane__Sequence * member =
    (const autoware_msgs__msg__Lane__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__get_function__LaneArray__lanes(
  void * untyped_member, size_t index)
{
  autoware_msgs__msg__Lane__Sequence * member =
    (autoware_msgs__msg__Lane__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__fetch_function__LaneArray__lanes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autoware_msgs__msg__Lane * item =
    ((const autoware_msgs__msg__Lane *)
    autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__get_const_function__LaneArray__lanes(untyped_member, index));
  autoware_msgs__msg__Lane * value =
    (autoware_msgs__msg__Lane *)(untyped_value);
  *value = *item;
}

void autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__assign_function__LaneArray__lanes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autoware_msgs__msg__Lane * item =
    ((autoware_msgs__msg__Lane *)
    autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__get_function__LaneArray__lanes(untyped_member, index));
  const autoware_msgs__msg__Lane * value =
    (const autoware_msgs__msg__Lane *)(untyped_value);
  *item = *value;
}

bool autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__resize_function__LaneArray__lanes(
  void * untyped_member, size_t size)
{
  autoware_msgs__msg__Lane__Sequence * member =
    (autoware_msgs__msg__Lane__Sequence *)(untyped_member);
  autoware_msgs__msg__Lane__Sequence__fini(member);
  return autoware_msgs__msg__Lane__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__LaneArray_message_member_array[2] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_msgs__msg__LaneArray, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lanes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_msgs__msg__LaneArray, lanes),  // bytes offset in struct
    NULL,  // default value
    autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__size_function__LaneArray__lanes,  // size() function pointer
    autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__get_const_function__LaneArray__lanes,  // get_const(index) function pointer
    autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__get_function__LaneArray__lanes,  // get(index) function pointer
    autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__fetch_function__LaneArray__lanes,  // fetch(index, &value) function pointer
    autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__assign_function__LaneArray__lanes,  // assign(index, value) function pointer
    autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__resize_function__LaneArray__lanes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__LaneArray_message_members = {
  "autoware_msgs__msg",  // message namespace
  "LaneArray",  // message name
  2,  // number of fields
  sizeof(autoware_msgs__msg__LaneArray),
  autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__LaneArray_message_member_array,  // message members
  autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__LaneArray_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__LaneArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__LaneArray_message_type_support_handle = {
  0,
  &autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__LaneArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_msgs, msg, LaneArray)() {
  autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__LaneArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_msgs, msg, Lane)();
  if (!autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__LaneArray_message_type_support_handle.typesupport_identifier) {
    autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__LaneArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_msgs__msg__LaneArray__rosidl_typesupport_introspection_c__LaneArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
