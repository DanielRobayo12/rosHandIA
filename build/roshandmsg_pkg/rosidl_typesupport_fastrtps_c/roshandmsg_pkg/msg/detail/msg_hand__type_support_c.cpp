// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from roshandmsg_pkg:msg/MsgHand.idl
// generated code does not contain a copyright notice
#include "roshandmsg_pkg/msg/detail/msg_hand__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "roshandmsg_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "roshandmsg_pkg/msg/detail/msg_hand__struct.h"
#include "roshandmsg_pkg/msg/detail/msg_hand__functions.h"
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


using _MsgHand__ros_msg_type = roshandmsg_pkg__msg__MsgHand;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roshandmsg_pkg
bool cdr_serialize_roshandmsg_pkg__msg__MsgHand(
  const roshandmsg_pkg__msg__MsgHand * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: d1
  {
    cdr << ros_message->d1;
  }

  // Field name: d2
  {
    cdr << ros_message->d2;
  }

  // Field name: d3
  {
    cdr << ros_message->d3;
  }

  // Field name: d4
  {
    cdr << ros_message->d4;
  }

  // Field name: d5
  {
    cdr << ros_message->d5;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roshandmsg_pkg
bool cdr_deserialize_roshandmsg_pkg__msg__MsgHand(
  eprosima::fastcdr::Cdr & cdr,
  roshandmsg_pkg__msg__MsgHand * ros_message)
{
  // Field name: d1
  {
    cdr >> ros_message->d1;
  }

  // Field name: d2
  {
    cdr >> ros_message->d2;
  }

  // Field name: d3
  {
    cdr >> ros_message->d3;
  }

  // Field name: d4
  {
    cdr >> ros_message->d4;
  }

  // Field name: d5
  {
    cdr >> ros_message->d5;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roshandmsg_pkg
size_t get_serialized_size_roshandmsg_pkg__msg__MsgHand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MsgHand__ros_msg_type * ros_message = static_cast<const _MsgHand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: d1
  {
    size_t item_size = sizeof(ros_message->d1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: d2
  {
    size_t item_size = sizeof(ros_message->d2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: d3
  {
    size_t item_size = sizeof(ros_message->d3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: d4
  {
    size_t item_size = sizeof(ros_message->d4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: d5
  {
    size_t item_size = sizeof(ros_message->d5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roshandmsg_pkg
size_t max_serialized_size_roshandmsg_pkg__msg__MsgHand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: d1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: d2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: d3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: d4
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: d5
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = roshandmsg_pkg__msg__MsgHand;
    is_plain =
      (
      offsetof(DataType, d5) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roshandmsg_pkg
bool cdr_serialize_key_roshandmsg_pkg__msg__MsgHand(
  const roshandmsg_pkg__msg__MsgHand * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: d1
  {
    cdr << ros_message->d1;
  }

  // Field name: d2
  {
    cdr << ros_message->d2;
  }

  // Field name: d3
  {
    cdr << ros_message->d3;
  }

  // Field name: d4
  {
    cdr << ros_message->d4;
  }

  // Field name: d5
  {
    cdr << ros_message->d5;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roshandmsg_pkg
size_t get_serialized_size_key_roshandmsg_pkg__msg__MsgHand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MsgHand__ros_msg_type * ros_message = static_cast<const _MsgHand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: d1
  {
    size_t item_size = sizeof(ros_message->d1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: d2
  {
    size_t item_size = sizeof(ros_message->d2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: d3
  {
    size_t item_size = sizeof(ros_message->d3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: d4
  {
    size_t item_size = sizeof(ros_message->d4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: d5
  {
    size_t item_size = sizeof(ros_message->d5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roshandmsg_pkg
size_t max_serialized_size_key_roshandmsg_pkg__msg__MsgHand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: d1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: d2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: d3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: d4
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: d5
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = roshandmsg_pkg__msg__MsgHand;
    is_plain =
      (
      offsetof(DataType, d5) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _MsgHand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const roshandmsg_pkg__msg__MsgHand * ros_message = static_cast<const roshandmsg_pkg__msg__MsgHand *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_roshandmsg_pkg__msg__MsgHand(ros_message, cdr);
}

static bool _MsgHand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  roshandmsg_pkg__msg__MsgHand * ros_message = static_cast<roshandmsg_pkg__msg__MsgHand *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_roshandmsg_pkg__msg__MsgHand(cdr, ros_message);
}

static uint32_t _MsgHand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_roshandmsg_pkg__msg__MsgHand(
      untyped_ros_message, 0));
}

static size_t _MsgHand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_roshandmsg_pkg__msg__MsgHand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MsgHand = {
  "roshandmsg_pkg::msg",
  "MsgHand",
  _MsgHand__cdr_serialize,
  _MsgHand__cdr_deserialize,
  _MsgHand__get_serialized_size,
  _MsgHand__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MsgHand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MsgHand,
  get_message_typesupport_handle_function,
  &roshandmsg_pkg__msg__MsgHand__get_type_hash,
  &roshandmsg_pkg__msg__MsgHand__get_type_description,
  &roshandmsg_pkg__msg__MsgHand__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roshandmsg_pkg, msg, MsgHand)() {
  return &_MsgHand__type_support;
}

#if defined(__cplusplus)
}
#endif
