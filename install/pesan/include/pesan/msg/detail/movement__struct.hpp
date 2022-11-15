// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pesan:msg/Movement.idl
// generated code does not contain a copyright notice

#ifndef PESAN__MSG__DETAIL__MOVEMENT__STRUCT_HPP_
#define PESAN__MSG__DETAIL__MOVEMENT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__pesan__msg__Movement __attribute__((deprecated))
#else
# define DEPRECATED__pesan__msg__Movement __declspec(deprecated)
#endif

namespace pesan
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Movement_
{
  using Type = Movement_<ContainerAllocator>;

  explicit Movement_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arah = "";
      this->pwm_x = 0ll;
      this->pwm_y = 0ll;
    }
  }

  explicit Movement_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : arah(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arah = "";
      this->pwm_x = 0ll;
      this->pwm_y = 0ll;
    }
  }

  // field types and members
  using _arah_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _arah_type arah;
  using _pwm_x_type =
    int64_t;
  _pwm_x_type pwm_x;
  using _pwm_y_type =
    int64_t;
  _pwm_y_type pwm_y;

  // setters for named parameter idiom
  Type & set__arah(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->arah = _arg;
    return *this;
  }
  Type & set__pwm_x(
    const int64_t & _arg)
  {
    this->pwm_x = _arg;
    return *this;
  }
  Type & set__pwm_y(
    const int64_t & _arg)
  {
    this->pwm_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pesan::msg::Movement_<ContainerAllocator> *;
  using ConstRawPtr =
    const pesan::msg::Movement_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pesan::msg::Movement_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pesan::msg::Movement_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pesan::msg::Movement_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pesan::msg::Movement_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pesan::msg::Movement_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pesan::msg::Movement_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pesan::msg::Movement_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pesan::msg::Movement_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pesan__msg__Movement
    std::shared_ptr<pesan::msg::Movement_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pesan__msg__Movement
    std::shared_ptr<pesan::msg::Movement_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Movement_ & other) const
  {
    if (this->arah != other.arah) {
      return false;
    }
    if (this->pwm_x != other.pwm_x) {
      return false;
    }
    if (this->pwm_y != other.pwm_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Movement_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Movement_

// alias to use template instance with default allocator
using Movement =
  pesan::msg::Movement_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pesan

#endif  // PESAN__MSG__DETAIL__MOVEMENT__STRUCT_HPP_
