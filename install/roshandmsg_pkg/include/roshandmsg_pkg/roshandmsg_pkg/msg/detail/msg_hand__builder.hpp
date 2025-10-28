// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roshandmsg_pkg:msg/MsgHand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roshandmsg_pkg/msg/msg_hand.hpp"


#ifndef ROSHANDMSG_PKG__MSG__DETAIL__MSG_HAND__BUILDER_HPP_
#define ROSHANDMSG_PKG__MSG__DETAIL__MSG_HAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roshandmsg_pkg/msg/detail/msg_hand__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roshandmsg_pkg
{

namespace msg
{

namespace builder
{

class Init_MsgHand_d5
{
public:
  explicit Init_MsgHand_d5(::roshandmsg_pkg::msg::MsgHand & msg)
  : msg_(msg)
  {}
  ::roshandmsg_pkg::msg::MsgHand d5(::roshandmsg_pkg::msg::MsgHand::_d5_type arg)
  {
    msg_.d5 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roshandmsg_pkg::msg::MsgHand msg_;
};

class Init_MsgHand_d4
{
public:
  explicit Init_MsgHand_d4(::roshandmsg_pkg::msg::MsgHand & msg)
  : msg_(msg)
  {}
  Init_MsgHand_d5 d4(::roshandmsg_pkg::msg::MsgHand::_d4_type arg)
  {
    msg_.d4 = std::move(arg);
    return Init_MsgHand_d5(msg_);
  }

private:
  ::roshandmsg_pkg::msg::MsgHand msg_;
};

class Init_MsgHand_d3
{
public:
  explicit Init_MsgHand_d3(::roshandmsg_pkg::msg::MsgHand & msg)
  : msg_(msg)
  {}
  Init_MsgHand_d4 d3(::roshandmsg_pkg::msg::MsgHand::_d3_type arg)
  {
    msg_.d3 = std::move(arg);
    return Init_MsgHand_d4(msg_);
  }

private:
  ::roshandmsg_pkg::msg::MsgHand msg_;
};

class Init_MsgHand_d2
{
public:
  explicit Init_MsgHand_d2(::roshandmsg_pkg::msg::MsgHand & msg)
  : msg_(msg)
  {}
  Init_MsgHand_d3 d2(::roshandmsg_pkg::msg::MsgHand::_d2_type arg)
  {
    msg_.d2 = std::move(arg);
    return Init_MsgHand_d3(msg_);
  }

private:
  ::roshandmsg_pkg::msg::MsgHand msg_;
};

class Init_MsgHand_d1
{
public:
  Init_MsgHand_d1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MsgHand_d2 d1(::roshandmsg_pkg::msg::MsgHand::_d1_type arg)
  {
    msg_.d1 = std::move(arg);
    return Init_MsgHand_d2(msg_);
  }

private:
  ::roshandmsg_pkg::msg::MsgHand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roshandmsg_pkg::msg::MsgHand>()
{
  return roshandmsg_pkg::msg::builder::Init_MsgHand_d1();
}

}  // namespace roshandmsg_pkg

#endif  // ROSHANDMSG_PKG__MSG__DETAIL__MSG_HAND__BUILDER_HPP_
