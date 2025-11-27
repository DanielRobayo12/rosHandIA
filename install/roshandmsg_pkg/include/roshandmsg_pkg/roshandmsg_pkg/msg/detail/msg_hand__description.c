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
      0x41, 0xe9, 0xce, 0x79, 0x30, 0x09, 0x91, 0x21,
      0x44, 0x1a, 0xf5, 0x14, 0x9e, 0x87, 0xb6, 0x02,
      0x64, 0x25, 0xba, 0xec, 0xc3, 0xbd, 0x35, 0xd7,
      0x9e, 0xff, 0x76, 0x95, 0x2e, 0xe5, 0x83, 0x1f,
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
static char roshandmsg_pkg__msg__MsgHand__FIELD_NAME__s[] = "s";

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
  {
    {roshandmsg_pkg__msg__MsgHand__FIELD_NAME__s, 1, 1},
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
      {roshandmsg_pkg__msg__MsgHand__FIELDS, 6, 6},
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
  "float32 d5\n"
  "float32 s";

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
    {toplevel_type_raw_source, 65, 65},
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
