// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from franka_msgs:srv/SetCartesianStiffness.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "franka_msgs/srv/detail/set_cartesian_stiffness__rosidl_typesupport_introspection_c.h"
#include "franka_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "franka_msgs/srv/detail/set_cartesian_stiffness__functions.h"
#include "franka_msgs/srv/detail/set_cartesian_stiffness__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void franka_msgs__srv__SetCartesianStiffness_Request__rosidl_typesupport_introspection_c__SetCartesianStiffness_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  franka_msgs__srv__SetCartesianStiffness_Request__init(message_memory);
}

void franka_msgs__srv__SetCartesianStiffness_Request__rosidl_typesupport_introspection_c__SetCartesianStiffness_Request_fini_function(void * message_memory)
{
  franka_msgs__srv__SetCartesianStiffness_Request__fini(message_memory);
}

size_t franka_msgs__srv__SetCartesianStiffness_Request__rosidl_typesupport_introspection_c__size_function__SetCartesianStiffness_Request__cartesian_stiffness(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * franka_msgs__srv__SetCartesianStiffness_Request__rosidl_typesupport_introspection_c__get_const_function__SetCartesianStiffness_Request__cartesian_stiffness(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__srv__SetCartesianStiffness_Request__rosidl_typesupport_introspection_c__get_function__SetCartesianStiffness_Request__cartesian_stiffness(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__srv__SetCartesianStiffness_Request__rosidl_typesupport_introspection_c__fetch_function__SetCartesianStiffness_Request__cartesian_stiffness(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__srv__SetCartesianStiffness_Request__rosidl_typesupport_introspection_c__get_const_function__SetCartesianStiffness_Request__cartesian_stiffness(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__srv__SetCartesianStiffness_Request__rosidl_typesupport_introspection_c__assign_function__SetCartesianStiffness_Request__cartesian_stiffness(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__srv__SetCartesianStiffness_Request__rosidl_typesupport_introspection_c__get_function__SetCartesianStiffness_Request__cartesian_stiffness(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember franka_msgs__srv__SetCartesianStiffness_Request__rosidl_typesupport_introspection_c__SetCartesianStiffness_Request_message_member_array[1] = {
  {
    "cartesian_stiffness",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__srv__SetCartesianStiffness_Request, cartesian_stiffness),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__srv__SetCartesianStiffness_Request__rosidl_typesupport_introspection_c__size_function__SetCartesianStiffness_Request__cartesian_stiffness,  // size() function pointer
    franka_msgs__srv__SetCartesianStiffness_Request__rosidl_typesupport_introspection_c__get_const_function__SetCartesianStiffness_Request__cartesian_stiffness,  // get_const(index) function pointer
    franka_msgs__srv__SetCartesianStiffness_Request__rosidl_typesupport_introspection_c__get_function__SetCartesianStiffness_Request__cartesian_stiffness,  // get(index) function pointer
    franka_msgs__srv__SetCartesianStiffness_Request__rosidl_typesupport_introspection_c__fetch_function__SetCartesianStiffness_Request__cartesian_stiffness,  // fetch(index, &value) function pointer
    franka_msgs__srv__SetCartesianStiffness_Request__rosidl_typesupport_introspection_c__assign_function__SetCartesianStiffness_Request__cartesian_stiffness,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers franka_msgs__srv__SetCartesianStiffness_Request__rosidl_typesupport_introspection_c__SetCartesianStiffness_Request_message_members = {
  "franka_msgs__srv",  // message namespace
  "SetCartesianStiffness_Request",  // message name
  1,  // number of fields
  sizeof(franka_msgs__srv__SetCartesianStiffness_Request),
  franka_msgs__srv__SetCartesianStiffness_Request__rosidl_typesupport_introspection_c__SetCartesianStiffness_Request_message_member_array,  // message members
  franka_msgs__srv__SetCartesianStiffness_Request__rosidl_typesupport_introspection_c__SetCartesianStiffness_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  franka_msgs__srv__SetCartesianStiffness_Request__rosidl_typesupport_introspection_c__SetCartesianStiffness_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t franka_msgs__srv__SetCartesianStiffness_Request__rosidl_typesupport_introspection_c__SetCartesianStiffness_Request_message_type_support_handle = {
  0,
  &franka_msgs__srv__SetCartesianStiffness_Request__rosidl_typesupport_introspection_c__SetCartesianStiffness_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_franka_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, srv, SetCartesianStiffness_Request)() {
  if (!franka_msgs__srv__SetCartesianStiffness_Request__rosidl_typesupport_introspection_c__SetCartesianStiffness_Request_message_type_support_handle.typesupport_identifier) {
    franka_msgs__srv__SetCartesianStiffness_Request__rosidl_typesupport_introspection_c__SetCartesianStiffness_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &franka_msgs__srv__SetCartesianStiffness_Request__rosidl_typesupport_introspection_c__SetCartesianStiffness_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "franka_msgs/srv/detail/set_cartesian_stiffness__rosidl_typesupport_introspection_c.h"
// already included above
// #include "franka_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "franka_msgs/srv/detail/set_cartesian_stiffness__functions.h"
// already included above
// #include "franka_msgs/srv/detail/set_cartesian_stiffness__struct.h"


// Include directives for member types
// Member `error`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void franka_msgs__srv__SetCartesianStiffness_Response__rosidl_typesupport_introspection_c__SetCartesianStiffness_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  franka_msgs__srv__SetCartesianStiffness_Response__init(message_memory);
}

void franka_msgs__srv__SetCartesianStiffness_Response__rosidl_typesupport_introspection_c__SetCartesianStiffness_Response_fini_function(void * message_memory)
{
  franka_msgs__srv__SetCartesianStiffness_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember franka_msgs__srv__SetCartesianStiffness_Response__rosidl_typesupport_introspection_c__SetCartesianStiffness_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__srv__SetCartesianStiffness_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__srv__SetCartesianStiffness_Response, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers franka_msgs__srv__SetCartesianStiffness_Response__rosidl_typesupport_introspection_c__SetCartesianStiffness_Response_message_members = {
  "franka_msgs__srv",  // message namespace
  "SetCartesianStiffness_Response",  // message name
  2,  // number of fields
  sizeof(franka_msgs__srv__SetCartesianStiffness_Response),
  franka_msgs__srv__SetCartesianStiffness_Response__rosidl_typesupport_introspection_c__SetCartesianStiffness_Response_message_member_array,  // message members
  franka_msgs__srv__SetCartesianStiffness_Response__rosidl_typesupport_introspection_c__SetCartesianStiffness_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  franka_msgs__srv__SetCartesianStiffness_Response__rosidl_typesupport_introspection_c__SetCartesianStiffness_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t franka_msgs__srv__SetCartesianStiffness_Response__rosidl_typesupport_introspection_c__SetCartesianStiffness_Response_message_type_support_handle = {
  0,
  &franka_msgs__srv__SetCartesianStiffness_Response__rosidl_typesupport_introspection_c__SetCartesianStiffness_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_franka_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, srv, SetCartesianStiffness_Response)() {
  if (!franka_msgs__srv__SetCartesianStiffness_Response__rosidl_typesupport_introspection_c__SetCartesianStiffness_Response_message_type_support_handle.typesupport_identifier) {
    franka_msgs__srv__SetCartesianStiffness_Response__rosidl_typesupport_introspection_c__SetCartesianStiffness_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &franka_msgs__srv__SetCartesianStiffness_Response__rosidl_typesupport_introspection_c__SetCartesianStiffness_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "franka_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "franka_msgs/srv/detail/set_cartesian_stiffness__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers franka_msgs__srv__detail__set_cartesian_stiffness__rosidl_typesupport_introspection_c__SetCartesianStiffness_service_members = {
  "franka_msgs__srv",  // service namespace
  "SetCartesianStiffness",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // franka_msgs__srv__detail__set_cartesian_stiffness__rosidl_typesupport_introspection_c__SetCartesianStiffness_Request_message_type_support_handle,
  NULL  // response message
  // franka_msgs__srv__detail__set_cartesian_stiffness__rosidl_typesupport_introspection_c__SetCartesianStiffness_Response_message_type_support_handle
};

static rosidl_service_type_support_t franka_msgs__srv__detail__set_cartesian_stiffness__rosidl_typesupport_introspection_c__SetCartesianStiffness_service_type_support_handle = {
  0,
  &franka_msgs__srv__detail__set_cartesian_stiffness__rosidl_typesupport_introspection_c__SetCartesianStiffness_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, srv, SetCartesianStiffness_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, srv, SetCartesianStiffness_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_franka_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, srv, SetCartesianStiffness)() {
  if (!franka_msgs__srv__detail__set_cartesian_stiffness__rosidl_typesupport_introspection_c__SetCartesianStiffness_service_type_support_handle.typesupport_identifier) {
    franka_msgs__srv__detail__set_cartesian_stiffness__rosidl_typesupport_introspection_c__SetCartesianStiffness_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)franka_msgs__srv__detail__set_cartesian_stiffness__rosidl_typesupport_introspection_c__SetCartesianStiffness_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, srv, SetCartesianStiffness_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, srv, SetCartesianStiffness_Response)()->data;
  }

  return &franka_msgs__srv__detail__set_cartesian_stiffness__rosidl_typesupport_introspection_c__SetCartesianStiffness_service_type_support_handle;
}
