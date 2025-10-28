// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from roshandmsg_pkg:msg/MsgHand.idl
// generated code does not contain a copyright notice

#ifndef ROSHANDMSG_PKG__MSG__DETAIL__MSG_HAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROSHANDMSG_PKG__MSG__DETAIL__MSG_HAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "roshandmsg_pkg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "roshandmsg_pkg/msg/detail/msg_hand__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace roshandmsg_pkg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roshandmsg_pkg
cdr_serialize(
  const roshandmsg_pkg::msg::MsgHand & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roshandmsg_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  roshandmsg_pkg::msg::MsgHand & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roshandmsg_pkg
get_serialized_size(
  const roshandmsg_pkg::msg::MsgHand & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roshandmsg_pkg
max_serialized_size_MsgHand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roshandmsg_pkg
cdr_serialize_key(
  const roshandmsg_pkg::msg::MsgHand & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roshandmsg_pkg
get_serialized_size_key(
  const roshandmsg_pkg::msg::MsgHand & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roshandmsg_pkg
max_serialized_size_key_MsgHand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace roshandmsg_pkg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roshandmsg_pkg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roshandmsg_pkg, msg, MsgHand)();

#ifdef __cplusplus
}
#endif

#endif  // ROSHANDMSG_PKG__MSG__DETAIL__MSG_HAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
