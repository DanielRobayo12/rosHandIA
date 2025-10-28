// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roshandmsg_pkg:msg/MsgHand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "roshandmsg_pkg/msg/msg_hand.hpp"


#ifndef ROSHANDMSG_PKG__MSG__DETAIL__MSG_HAND__STRUCT_HPP_
#define ROSHANDMSG_PKG__MSG__DETAIL__MSG_HAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__roshandmsg_pkg__msg__MsgHand __attribute__((deprecated))
#else
# define DEPRECATED__roshandmsg_pkg__msg__MsgHand __declspec(deprecated)
#endif

namespace roshandmsg_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MsgHand_
{
  using Type = MsgHand_<ContainerAllocator>;

  explicit MsgHand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->d1 = 0.0f;
      this->d2 = 0.0f;
      this->d3 = 0.0f;
      this->d4 = 0.0f;
      this->d5 = 0.0f;
    }
  }

  explicit MsgHand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->d1 = 0.0f;
      this->d2 = 0.0f;
      this->d3 = 0.0f;
      this->d4 = 0.0f;
      this->d5 = 0.0f;
    }
  }

  // field types and members
  using _d1_type =
    float;
  _d1_type d1;
  using _d2_type =
    float;
  _d2_type d2;
  using _d3_type =
    float;
  _d3_type d3;
  using _d4_type =
    float;
  _d4_type d4;
  using _d5_type =
    float;
  _d5_type d5;

  // setters for named parameter idiom
  Type & set__d1(
    const float & _arg)
  {
    this->d1 = _arg;
    return *this;
  }
  Type & set__d2(
    const float & _arg)
  {
    this->d2 = _arg;
    return *this;
  }
  Type & set__d3(
    const float & _arg)
  {
    this->d3 = _arg;
    return *this;
  }
  Type & set__d4(
    const float & _arg)
  {
    this->d4 = _arg;
    return *this;
  }
  Type & set__d5(
    const float & _arg)
  {
    this->d5 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roshandmsg_pkg::msg::MsgHand_<ContainerAllocator> *;
  using ConstRawPtr =
    const roshandmsg_pkg::msg::MsgHand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roshandmsg_pkg::msg::MsgHand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roshandmsg_pkg::msg::MsgHand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roshandmsg_pkg::msg::MsgHand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roshandmsg_pkg::msg::MsgHand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roshandmsg_pkg::msg::MsgHand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roshandmsg_pkg::msg::MsgHand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roshandmsg_pkg::msg::MsgHand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roshandmsg_pkg::msg::MsgHand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roshandmsg_pkg__msg__MsgHand
    std::shared_ptr<roshandmsg_pkg::msg::MsgHand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roshandmsg_pkg__msg__MsgHand
    std::shared_ptr<roshandmsg_pkg::msg::MsgHand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MsgHand_ & other) const
  {
    if (this->d1 != other.d1) {
      return false;
    }
    if (this->d2 != other.d2) {
      return false;
    }
    if (this->d3 != other.d3) {
      return false;
    }
    if (this->d4 != other.d4) {
      return false;
    }
    if (this->d5 != other.d5) {
      return false;
    }
    return true;
  }
  bool operator!=(const MsgHand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MsgHand_

// alias to use template instance with default allocator
using MsgHand =
  roshandmsg_pkg::msg::MsgHand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace roshandmsg_pkg

#endif  // ROSHANDMSG_PKG__MSG__DETAIL__MSG_HAND__STRUCT_HPP_
