// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from roshandmsg_pkg:msg/MsgHand.idl
// generated code does not contain a copyright notice
#ifndef ROSHANDMSG_PKG__MSG__DETAIL__MSG_HAND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROSHANDMSG_PKG__MSG__DETAIL__MSG_HAND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "roshandmsg_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "roshandmsg_pkg/msg/detail/msg_hand__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roshandmsg_pkg
bool cdr_serialize_roshandmsg_pkg__msg__MsgHand(
  const roshandmsg_pkg__msg__MsgHand * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roshandmsg_pkg
bool cdr_deserialize_roshandmsg_pkg__msg__MsgHand(
  eprosima::fastcdr::Cdr &,
  roshandmsg_pkg__msg__MsgHand * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roshandmsg_pkg
size_t get_serialized_size_roshandmsg_pkg__msg__MsgHand(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roshandmsg_pkg
size_t max_serialized_size_roshandmsg_pkg__msg__MsgHand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roshandmsg_pkg
bool cdr_serialize_key_roshandmsg_pkg__msg__MsgHand(
  const roshandmsg_pkg__msg__MsgHand * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roshandmsg_pkg
size_t get_serialized_size_key_roshandmsg_pkg__msg__MsgHand(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roshandmsg_pkg
size_t max_serialized_size_key_roshandmsg_pkg__msg__MsgHand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_roshandmsg_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, roshandmsg_pkg, msg, MsgHand)();

#ifdef __cplusplus
}
#endif

#endif  // ROSHANDMSG_PKG__MSG__DETAIL__MSG_HAND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
