// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from full_name:msg/FullNameMessage.idl
// generated code does not contain a copyright notice

#ifndef FULL_NAME__MSG__DETAIL__FULL_NAME_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define FULL_NAME__MSG__DETAIL__FULL_NAME_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "full_name/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "full_name/msg/detail/full_name_message__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace full_name
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_full_name
cdr_serialize(
  const full_name::msg::FullNameMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_full_name
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  full_name::msg::FullNameMessage & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_full_name
get_serialized_size(
  const full_name::msg::FullNameMessage & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_full_name
max_serialized_size_FullNameMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace full_name

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_full_name
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, full_name, msg, FullNameMessage)();

#ifdef __cplusplus
}
#endif

#endif  // FULL_NAME__MSG__DETAIL__FULL_NAME_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
