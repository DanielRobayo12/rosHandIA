// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roshandmsg_pkg:msg/MsgHand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roshandmsg_pkg/msg/msg_hand.h"


#ifndef ROSHANDMSG_PKG__MSG__DETAIL__MSG_HAND__STRUCT_H_
#define ROSHANDMSG_PKG__MSG__DETAIL__MSG_HAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MsgHand in the package roshandmsg_pkg.
typedef struct roshandmsg_pkg__msg__MsgHand
{
  float d1;
  float d2;
  float d3;
  float d4;
  float d5;
} roshandmsg_pkg__msg__MsgHand;

// Struct for a sequence of roshandmsg_pkg__msg__MsgHand.
typedef struct roshandmsg_pkg__msg__MsgHand__Sequence
{
  roshandmsg_pkg__msg__MsgHand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roshandmsg_pkg__msg__MsgHand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSHANDMSG_PKG__MSG__DETAIL__MSG_HAND__STRUCT_H_
