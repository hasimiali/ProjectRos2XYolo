// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_message:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGE__MSG__DETAIL__NUM__TRAITS_HPP_
#define CUSTOM_MESSAGE__MSG__DETAIL__NUM__TRAITS_HPP_

#include "custom_message/msg/detail/num__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_message::msg::Num>()
{
  return "custom_message::msg::Num";
}

template<>
inline const char * name<custom_message::msg::Num>()
{
  return "custom_message/msg/Num";
}

template<>
struct has_fixed_size<custom_message::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_message::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_message::msg::Num>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MESSAGE__MSG__DETAIL__NUM__TRAITS_HPP_
