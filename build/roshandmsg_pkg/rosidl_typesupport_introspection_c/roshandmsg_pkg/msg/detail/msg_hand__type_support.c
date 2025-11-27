// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from roshandmsg_pkg:msg/MsgHand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "roshandmsg_pkg/msg/detail/msg_hand__rosidl_typesupport_introspection_c.h"
#include "roshandmsg_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "roshandmsg_pkg/msg/detail/msg_hand__functions.h"
#include "roshandmsg_pkg/msg/detail/msg_hand__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void roshandmsg_pkg__msg__MsgHand__rosidl_typesupport_introspection_c__MsgHand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  roshandmsg_pkg__msg__MsgHand__init(message_memory);
}

void roshandmsg_pkg__msg__MsgHand__rosidl_typesupport_introspection_c__MsgHand_fini_function(void * message_memory)
{
  roshandmsg_pkg__msg__MsgHand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember roshandmsg_pkg__msg__MsgHand__rosidl_typesupport_introspection_c__MsgHand_message_member_array[6] = {
  {
    "d1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roshandmsg_pkg__msg__MsgHand, d1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roshandmsg_pkg__msg__MsgHand, d2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roshandmsg_pkg__msg__MsgHand, d3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roshandmsg_pkg__msg__MsgHand, d4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d5",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roshandmsg_pkg__msg__MsgHand, d5),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roshandmsg_pkg__msg__MsgHand, s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers roshandmsg_pkg__msg__MsgHand__rosidl_typesupport_introspection_c__MsgHand_message_members = {
  "roshandmsg_pkg__msg",  // message namespace
  "MsgHand",  // message name
  6,  // number of fields
  sizeof(roshandmsg_pkg__msg__MsgHand),
  false,  // has_any_key_member_
  roshandmsg_pkg__msg__MsgHand__rosidl_typesupport_introspection_c__MsgHand_message_member_array,  // message members
  roshandmsg_pkg__msg__MsgHand__rosidl_typesupport_introspection_c__MsgHand_init_function,  // function to initialize message memory (memory has to be allocated)
  roshandmsg_pkg__msg__MsgHand__rosidl_typesupport_introspection_c__MsgHand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t roshandmsg_pkg__msg__MsgHand__rosidl_typesupport_introspection_c__MsgHand_message_type_support_handle = {
  0,
  &roshandmsg_pkg__msg__MsgHand__rosidl_typesupport_introspection_c__MsgHand_message_members,
  get_message_typesupport_handle_function,
  &roshandmsg_pkg__msg__MsgHand__get_type_hash,
  &roshandmsg_pkg__msg__MsgHand__get_type_description,
  &roshandmsg_pkg__msg__MsgHand__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_roshandmsg_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roshandmsg_pkg, msg, MsgHand)() {
  if (!roshandmsg_pkg__msg__MsgHand__rosidl_typesupport_introspection_c__MsgHand_message_type_support_handle.typesupport_identifier) {
    roshandmsg_pkg__msg__MsgHand__rosidl_typesupport_introspection_c__MsgHand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &roshandmsg_pkg__msg__MsgHand__rosidl_typesupport_introspection_c__MsgHand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
