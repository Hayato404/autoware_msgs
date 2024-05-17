// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autoware_msgs:msg/DTLane.idl
// generated code does not contain a copyright notice
#include "autoware_msgs/msg/detail/dt_lane__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autoware_msgs/msg/detail/dt_lane__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace autoware_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_msgs
cdr_serialize(
  const autoware_msgs::msg::DTLane & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: dist
  cdr << ros_message.dist;
  // Member: dir
  cdr << ros_message.dir;
  // Member: apara
  cdr << ros_message.apara;
  // Member: r
  cdr << ros_message.r;
  // Member: slope
  cdr << ros_message.slope;
  // Member: cant
  cdr << ros_message.cant;
  // Member: lw
  cdr << ros_message.lw;
  // Member: rw
  cdr << ros_message.rw;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_msgs::msg::DTLane & ros_message)
{
  // Member: dist
  cdr >> ros_message.dist;

  // Member: dir
  cdr >> ros_message.dir;

  // Member: apara
  cdr >> ros_message.apara;

  // Member: r
  cdr >> ros_message.r;

  // Member: slope
  cdr >> ros_message.slope;

  // Member: cant
  cdr >> ros_message.cant;

  // Member: lw
  cdr >> ros_message.lw;

  // Member: rw
  cdr >> ros_message.rw;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_msgs
get_serialized_size(
  const autoware_msgs::msg::DTLane & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: dist
  {
    size_t item_size = sizeof(ros_message.dist);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dir
  {
    size_t item_size = sizeof(ros_message.dir);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: apara
  {
    size_t item_size = sizeof(ros_message.apara);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: r
  {
    size_t item_size = sizeof(ros_message.r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: slope
  {
    size_t item_size = sizeof(ros_message.slope);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cant
  {
    size_t item_size = sizeof(ros_message.cant);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lw
  {
    size_t item_size = sizeof(ros_message.lw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rw
  {
    size_t item_size = sizeof(ros_message.rw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_msgs
max_serialized_size_DTLane(
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


  // Member: dist
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dir
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: apara
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: r
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: slope
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cant
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _DTLane__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autoware_msgs::msg::DTLane *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DTLane__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autoware_msgs::msg::DTLane *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DTLane__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autoware_msgs::msg::DTLane *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DTLane__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DTLane(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DTLane__callbacks = {
  "autoware_msgs::msg",
  "DTLane",
  _DTLane__cdr_serialize,
  _DTLane__cdr_deserialize,
  _DTLane__get_serialized_size,
  _DTLane__max_serialized_size
};

static rosidl_message_type_support_t _DTLane__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DTLane__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace autoware_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autoware_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_msgs::msg::DTLane>()
{
  return &autoware_msgs::msg::typesupport_fastrtps_cpp::_DTLane__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_msgs, msg, DTLane)() {
  return &autoware_msgs::msg::typesupport_fastrtps_cpp::_DTLane__handle;
}

#ifdef __cplusplus
}
#endif
