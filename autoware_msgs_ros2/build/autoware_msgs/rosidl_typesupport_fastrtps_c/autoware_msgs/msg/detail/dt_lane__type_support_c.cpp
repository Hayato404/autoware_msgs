// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_msgs:msg/DTLane.idl
// generated code does not contain a copyright notice
#include "autoware_msgs/msg/detail/dt_lane__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_msgs/msg/detail/dt_lane__struct.h"
#include "autoware_msgs/msg/detail/dt_lane__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _DTLane__ros_msg_type = autoware_msgs__msg__DTLane;

static bool _DTLane__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DTLane__ros_msg_type * ros_message = static_cast<const _DTLane__ros_msg_type *>(untyped_ros_message);
  // Field name: dist
  {
    cdr << ros_message->dist;
  }

  // Field name: dir
  {
    cdr << ros_message->dir;
  }

  // Field name: apara
  {
    cdr << ros_message->apara;
  }

  // Field name: r
  {
    cdr << ros_message->r;
  }

  // Field name: slope
  {
    cdr << ros_message->slope;
  }

  // Field name: cant
  {
    cdr << ros_message->cant;
  }

  // Field name: lw
  {
    cdr << ros_message->lw;
  }

  // Field name: rw
  {
    cdr << ros_message->rw;
  }

  return true;
}

static bool _DTLane__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DTLane__ros_msg_type * ros_message = static_cast<_DTLane__ros_msg_type *>(untyped_ros_message);
  // Field name: dist
  {
    cdr >> ros_message->dist;
  }

  // Field name: dir
  {
    cdr >> ros_message->dir;
  }

  // Field name: apara
  {
    cdr >> ros_message->apara;
  }

  // Field name: r
  {
    cdr >> ros_message->r;
  }

  // Field name: slope
  {
    cdr >> ros_message->slope;
  }

  // Field name: cant
  {
    cdr >> ros_message->cant;
  }

  // Field name: lw
  {
    cdr >> ros_message->lw;
  }

  // Field name: rw
  {
    cdr >> ros_message->rw;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_msgs
size_t get_serialized_size_autoware_msgs__msg__DTLane(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DTLane__ros_msg_type * ros_message = static_cast<const _DTLane__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name dist
  {
    size_t item_size = sizeof(ros_message->dist);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dir
  {
    size_t item_size = sizeof(ros_message->dir);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name apara
  {
    size_t item_size = sizeof(ros_message->apara);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name r
  {
    size_t item_size = sizeof(ros_message->r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name slope
  {
    size_t item_size = sizeof(ros_message->slope);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cant
  {
    size_t item_size = sizeof(ros_message->cant);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lw
  {
    size_t item_size = sizeof(ros_message->lw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rw
  {
    size_t item_size = sizeof(ros_message->rw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DTLane__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_msgs__msg__DTLane(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_msgs
size_t max_serialized_size_autoware_msgs__msg__DTLane(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: dist
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dir
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: apara
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: r
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: slope
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cant
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _DTLane__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autoware_msgs__msg__DTLane(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DTLane = {
  "autoware_msgs::msg",
  "DTLane",
  _DTLane__cdr_serialize,
  _DTLane__cdr_deserialize,
  _DTLane__get_serialized_size,
  _DTLane__max_serialized_size
};

static rosidl_message_type_support_t _DTLane__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DTLane,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_msgs, msg, DTLane)() {
  return &_DTLane__type_support;
}

#if defined(__cplusplus)
}
#endif
