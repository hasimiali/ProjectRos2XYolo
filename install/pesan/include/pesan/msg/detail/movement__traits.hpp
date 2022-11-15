// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pesan:msg/Movement.idl
// generated code does not contain a copyright notice

#ifndef PESAN__MSG__DETAIL__MOVEMENT__TRAITS_HPP_
#define PESAN__MSG__DETAIL__MOVEMENT__TRAITS_HPP_

#include "pesan/msg/detail/movement__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pesan::msg::Movement>()
{
  return "pesan::msg::Movement";
}

template<>
inline const char * name<pesan::msg::Movement>()
{
  return "pesan/msg/Movement";
}

template<>
struct has_fixed_size<pesan::msg::Movement>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pesan::msg::Movement>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pesan::msg::Movement>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PESAN__MSG__DETAIL__MOVEMENT__TRAITS_HPP_
