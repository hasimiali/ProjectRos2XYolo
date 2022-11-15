// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pesan:msg/Mission.idl
// generated code does not contain a copyright notice

#ifndef PESAN__MSG__DETAIL__MISSION__STRUCT_HPP_
#define PESAN__MSG__DETAIL__MISSION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__pesan__msg__Mission __attribute__((deprecated))
#else
# define DEPRECATED__pesan__msg__Mission __declspec(deprecated)
#endif

namespace pesan
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Mission_
{
  using Type = Mission_<ContainerAllocator>;

  explicit Mission_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission = 0ll;
    }
  }

  explicit Mission_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission = 0ll;
    }
  }

  // field types and members
  using _mission_type =
    int64_t;
  _mission_type mission;

  // setters for named parameter idiom
  Type & set__mission(
    const int64_t & _arg)
  {
    this->mission = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pesan::msg::Mission_<ContainerAllocator> *;
  using ConstRawPtr =
    const pesan::msg::Mission_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pesan::msg::Mission_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pesan::msg::Mission_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pesan::msg::Mission_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pesan::msg::Mission_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pesan::msg::Mission_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pesan::msg::Mission_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pesan::msg::Mission_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pesan::msg::Mission_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pesan__msg__Mission
    std::shared_ptr<pesan::msg::Mission_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pesan__msg__Mission
    std::shared_ptr<pesan::msg::Mission_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mission_ & other) const
  {
    if (this->mission != other.mission) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mission_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mission_

// alias to use template instance with default allocator
using Mission =
  pesan::msg::Mission_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pesan

#endif  // PESAN__MSG__DETAIL__MISSION__STRUCT_HPP_
