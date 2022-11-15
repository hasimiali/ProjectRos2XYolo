// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pesan:msg/Mission.idl
// generated code does not contain a copyright notice

#ifndef PESAN__MSG__DETAIL__MISSION__TRAITS_HPP_
#define PESAN__MSG__DETAIL__MISSION__TRAITS_HPP_

#include "pesan/msg/detail/mission__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pesan::msg::Mission>()
{
  return "pesan::msg::Mission";
}

template<>
inline const char * name<pesan::msg::Mission>()
{
  return "pesan/msg/Mission";
}

template<>
struct has_fixed_size<pesan::msg::Mission>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pesan::msg::Mission>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pesan::msg::Mission>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PESAN__MSG__DETAIL__MISSION__TRAITS_HPP_
