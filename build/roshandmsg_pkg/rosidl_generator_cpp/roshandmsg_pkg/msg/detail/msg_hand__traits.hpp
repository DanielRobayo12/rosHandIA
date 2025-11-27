// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roshandmsg_pkg:msg/MsgHand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roshandmsg_pkg/msg/msg_hand.hpp"


#ifndef ROSHANDMSG_PKG__MSG__DETAIL__MSG_HAND__TRAITS_HPP_
#define ROSHANDMSG_PKG__MSG__DETAIL__MSG_HAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "roshandmsg_pkg/msg/detail/msg_hand__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace roshandmsg_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const MsgHand & msg,
  std::ostream & out)
{
  out << "{";
  // member: d1
  {
    out << "d1: ";
    rosidl_generator_traits::value_to_yaml(msg.d1, out);
    out << ", ";
  }

  // member: d2
  {
    out << "d2: ";
    rosidl_generator_traits::value_to_yaml(msg.d2, out);
    out << ", ";
  }

  // member: d3
  {
    out << "d3: ";
    rosidl_generator_traits::value_to_yaml(msg.d3, out);
    out << ", ";
  }

  // member: d4
  {
    out << "d4: ";
    rosidl_generator_traits::value_to_yaml(msg.d4, out);
    out << ", ";
  }

  // member: d5
  {
    out << "d5: ";
    rosidl_generator_traits::value_to_yaml(msg.d5, out);
    out << ", ";
  }

  // member: s
  {
    out << "s: ";
    rosidl_generator_traits::value_to_yaml(msg.s, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MsgHand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: d1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d1: ";
    rosidl_generator_traits::value_to_yaml(msg.d1, out);
    out << "\n";
  }

  // member: d2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d2: ";
    rosidl_generator_traits::value_to_yaml(msg.d2, out);
    out << "\n";
  }

  // member: d3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d3: ";
    rosidl_generator_traits::value_to_yaml(msg.d3, out);
    out << "\n";
  }

  // member: d4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d4: ";
    rosidl_generator_traits::value_to_yaml(msg.d4, out);
    out << "\n";
  }

  // member: d5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d5: ";
    rosidl_generator_traits::value_to_yaml(msg.d5, out);
    out << "\n";
  }

  // member: s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s: ";
    rosidl_generator_traits::value_to_yaml(msg.s, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MsgHand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace roshandmsg_pkg

namespace rosidl_generator_traits
{

[[deprecated("use roshandmsg_pkg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const roshandmsg_pkg::msg::MsgHand & msg,
  std::ostream & out, size_t indentation = 0)
{
  roshandmsg_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use roshandmsg_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const roshandmsg_pkg::msg::MsgHand & msg)
{
  return roshandmsg_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<roshandmsg_pkg::msg::MsgHand>()
{
  return "roshandmsg_pkg::msg::MsgHand";
}

template<>
inline const char * name<roshandmsg_pkg::msg::MsgHand>()
{
  return "roshandmsg_pkg/msg/MsgHand";
}

template<>
struct has_fixed_size<roshandmsg_pkg::msg::MsgHand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<roshandmsg_pkg::msg::MsgHand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<roshandmsg_pkg::msg::MsgHand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSHANDMSG_PKG__MSG__DETAIL__MSG_HAND__TRAITS_HPP_
