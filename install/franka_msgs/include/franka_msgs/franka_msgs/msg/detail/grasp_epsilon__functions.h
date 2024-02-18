// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from franka_msgs:msg/GraspEpsilon.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__GRASP_EPSILON__FUNCTIONS_H_
#define FRANKA_MSGS__MSG__DETAIL__GRASP_EPSILON__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "franka_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "franka_msgs/msg/detail/grasp_epsilon__struct.h"

/// Initialize msg/GraspEpsilon message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * franka_msgs__msg__GraspEpsilon
 * )) before or use
 * franka_msgs__msg__GraspEpsilon__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__msg__GraspEpsilon__init(franka_msgs__msg__GraspEpsilon * msg);

/// Finalize msg/GraspEpsilon message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__msg__GraspEpsilon__fini(franka_msgs__msg__GraspEpsilon * msg);

/// Create msg/GraspEpsilon message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * franka_msgs__msg__GraspEpsilon__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
franka_msgs__msg__GraspEpsilon *
franka_msgs__msg__GraspEpsilon__create();

/// Destroy msg/GraspEpsilon message.
/**
 * It calls
 * franka_msgs__msg__GraspEpsilon__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__msg__GraspEpsilon__destroy(franka_msgs__msg__GraspEpsilon * msg);

/// Check for msg/GraspEpsilon message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__msg__GraspEpsilon__are_equal(const franka_msgs__msg__GraspEpsilon * lhs, const franka_msgs__msg__GraspEpsilon * rhs);

/// Copy a msg/GraspEpsilon message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__msg__GraspEpsilon__copy(
  const franka_msgs__msg__GraspEpsilon * input,
  franka_msgs__msg__GraspEpsilon * output);

/// Initialize array of msg/GraspEpsilon messages.
/**
 * It allocates the memory for the number of elements and calls
 * franka_msgs__msg__GraspEpsilon__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__msg__GraspEpsilon__Sequence__init(franka_msgs__msg__GraspEpsilon__Sequence * array, size_t size);

/// Finalize array of msg/GraspEpsilon messages.
/**
 * It calls
 * franka_msgs__msg__GraspEpsilon__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__msg__GraspEpsilon__Sequence__fini(franka_msgs__msg__GraspEpsilon__Sequence * array);

/// Create array of msg/GraspEpsilon messages.
/**
 * It allocates the memory for the array and calls
 * franka_msgs__msg__GraspEpsilon__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
franka_msgs__msg__GraspEpsilon__Sequence *
franka_msgs__msg__GraspEpsilon__Sequence__create(size_t size);

/// Destroy array of msg/GraspEpsilon messages.
/**
 * It calls
 * franka_msgs__msg__GraspEpsilon__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
void
franka_msgs__msg__GraspEpsilon__Sequence__destroy(franka_msgs__msg__GraspEpsilon__Sequence * array);

/// Check for msg/GraspEpsilon message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__msg__GraspEpsilon__Sequence__are_equal(const franka_msgs__msg__GraspEpsilon__Sequence * lhs, const franka_msgs__msg__GraspEpsilon__Sequence * rhs);

/// Copy an array of msg/GraspEpsilon messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_franka_msgs
bool
franka_msgs__msg__GraspEpsilon__Sequence__copy(
  const franka_msgs__msg__GraspEpsilon__Sequence * input,
  franka_msgs__msg__GraspEpsilon__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FRANKA_MSGS__MSG__DETAIL__GRASP_EPSILON__FUNCTIONS_H_
