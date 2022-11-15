// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pesan:msg/Mission.idl
// generated code does not contain a copyright notice

#ifndef PESAN__MSG__DETAIL__MISSION__BUILDER_HPP_
#define PESAN__MSG__DETAIL__MISSION__BUILDER_HPP_

#include "pesan/msg/detail/mission__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace pesan
{

namespace msg
{

namespace builder
{

class Init_Mission_mission
{
public:
  Init_Mission_mission()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pesan::msg::Mission mission(::pesan::msg::Mission::_mission_type arg)
  {
    msg_.mission = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pesan::msg::Mission msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pesan::msg::Mission>()
{
  return pesan::msg::builder::Init_Mission_mission();
}

}  // namespace pesan

#endif  // PESAN__MSG__DETAIL__MISSION__BUILDER_HPP_
