// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pesan:msg/Movement.idl
// generated code does not contain a copyright notice

#ifndef PESAN__MSG__DETAIL__MOVEMENT__BUILDER_HPP_
#define PESAN__MSG__DETAIL__MOVEMENT__BUILDER_HPP_

#include "pesan/msg/detail/movement__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace pesan
{

namespace msg
{

namespace builder
{

class Init_Movement_pwm_y
{
public:
  explicit Init_Movement_pwm_y(::pesan::msg::Movement & msg)
  : msg_(msg)
  {}
  ::pesan::msg::Movement pwm_y(::pesan::msg::Movement::_pwm_y_type arg)
  {
    msg_.pwm_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pesan::msg::Movement msg_;
};

class Init_Movement_pwm_x
{
public:
  explicit Init_Movement_pwm_x(::pesan::msg::Movement & msg)
  : msg_(msg)
  {}
  Init_Movement_pwm_y pwm_x(::pesan::msg::Movement::_pwm_x_type arg)
  {
    msg_.pwm_x = std::move(arg);
    return Init_Movement_pwm_y(msg_);
  }

private:
  ::pesan::msg::Movement msg_;
};

class Init_Movement_arah
{
public:
  Init_Movement_arah()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Movement_pwm_x arah(::pesan::msg::Movement::_arah_type arg)
  {
    msg_.arah = std::move(arg);
    return Init_Movement_pwm_x(msg_);
  }

private:
  ::pesan::msg::Movement msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pesan::msg::Movement>()
{
  return pesan::msg::builder::Init_Movement_arah();
}

}  // namespace pesan

#endif  // PESAN__MSG__DETAIL__MOVEMENT__BUILDER_HPP_
