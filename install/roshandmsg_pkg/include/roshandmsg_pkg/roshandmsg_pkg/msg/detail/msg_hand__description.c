// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from roshandmsg_pkg:msg/MsgHand.idl
// generated code does not contain a copyright notice

#include "roshandmsg_pkg/msg/detail/msg_hand__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_roshandmsg_pkg
const rosidl_type_hash_t *
roshandmsg_pkg__msg__MsgHand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbd, 0xd4, 0x85, 0x08, 0x9e, 0xd0, 0x88, 0x18,
      0xbf, 0x3d, 0x96, 0xe1, 0x59, 0x5f, 0x54, 0x30,
      0x7d, 0xbe, 0x79, 0x00, 0xaa, 0x07, 0x39, 0x4b,
      0x31, 0xb6, 0xa6, 0xa9, 0xc0, 0x76, 0xc8, 0x2c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char roshandmsg_pkg__msg__MsgHand__TYPE_NAME[] = "roshandmsg_pkg/msg/MsgHand";

// Define type names, field names, and default values
static char roshandmsg_pkg__msg__MsgHand__FIELD_NAME__d1[] = "d1";
static char roshandmsg_pkg__msg__MsgHand__FIELD_NAME__d2[] = "d2";
static char roshandmsg_pkg__msg__MsgHand__FIELD_NAME__d3[] = "d3";
static char roshandmsg_pkg__msg__MsgHand__FIELD_NAME__d4[] = "d4";
static char roshandmsg_pkg__msg__MsgHand__FIELD_NAME__d5[] = "d5";

static rosidl_runtime_c__type_description__Field roshandmsg_pkg__msg__MsgHand__FIELDS[] = {
  {
    {roshandmsg_pkg__msg__MsgHand__FIELD_NAME__d1, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roshandmsg_pkg__msg__MsgHand__FIELD_NAME__d2, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roshandmsg_pkg__msg__MsgHand__FIELD_NAME__d3, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roshandmsg_pkg__msg__MsgHand__FIELD_NAME__d4, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {roshandmsg_pkg__msg__MsgHand__FIELD_NAME__d5, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
roshandmsg_pkg__msg__MsgHand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {roshandmsg_pkg__msg__MsgHand__TYPE_NAME, 26, 26},
      {roshandmsg_pkg__msg__MsgHand__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 d1\n"
  "float32 d2\n"
  "float32 d3 \n"
  "float32 d4\n"
  "float32 d5";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
roshandmsg_pkg__msg__MsgHand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {roshandmsg_pkg__msg__MsgHand__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 55, 55},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
roshandmsg_pkg__msg__MsgHand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *roshandmsg_pkg__msg__MsgHand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
