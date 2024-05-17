// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "autoware_msgs/msg/detail/waypoint__struct.h"
#include "autoware_msgs/msg/detail/waypoint__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose_stamped__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__twist_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__twist_stamped__convert_to_py(void * raw_ros_message);
bool autoware_msgs__msg__dt_lane__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_msgs__msg__dt_lane__convert_to_py(void * raw_ros_message);
bool autoware_msgs__msg__waypoint_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_msgs__msg__waypoint_state__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_msgs__msg__waypoint__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("autoware_msgs.msg._waypoint.Waypoint", full_classname_dest, 36) == 0);
  }
  autoware_msgs__msg__Waypoint * ros_message = _ros_message;
  {  // gid
    PyObject * field = PyObject_GetAttrString(_pymsg, "gid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gid = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lid
    PyObject * field = PyObject_GetAttrString(_pymsg, "lid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lid = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose_stamped__convert_from_py(field, &ros_message->pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // twist
    PyObject * field = PyObject_GetAttrString(_pymsg, "twist");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__twist_stamped__convert_from_py(field, &ros_message->twist)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // dtlane
    PyObject * field = PyObject_GetAttrString(_pymsg, "dtlane");
    if (!field) {
      return false;
    }
    if (!autoware_msgs__msg__dt_lane__convert_from_py(field, &ros_message->dtlane)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // change_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "change_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->change_flag = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wpstate
    PyObject * field = PyObject_GetAttrString(_pymsg, "wpstate");
    if (!field) {
      return false;
    }
    if (!autoware_msgs__msg__waypoint_state__convert_from_py(field, &ros_message->wpstate)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lane_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left_lane_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_lane_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_lane_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // right_lane_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_lane_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_lane_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stop_line_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "stop_line_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stop_line_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cost
    PyObject * field = PyObject_GetAttrString(_pymsg, "cost");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cost = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time_cost
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_cost");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time_cost = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "direction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->direction = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_msgs__msg__waypoint__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Waypoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_msgs.msg._waypoint");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Waypoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_msgs__msg__Waypoint * ros_message = (autoware_msgs__msg__Waypoint *)raw_ros_message;
  {  // gid
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lid
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose_stamped__convert_to_py(&ros_message->pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // twist
    PyObject * field = NULL;
    field = geometry_msgs__msg__twist_stamped__convert_to_py(&ros_message->twist);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "twist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dtlane
    PyObject * field = NULL;
    field = autoware_msgs__msg__dt_lane__convert_to_py(&ros_message->dtlane);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "dtlane", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // change_flag
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->change_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "change_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wpstate
    PyObject * field = NULL;
    field = autoware_msgs__msg__waypoint_state__convert_to_py(&ros_message->wpstate);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "wpstate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_lane_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->left_lane_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_lane_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_lane_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->right_lane_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_lane_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stop_line_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stop_line_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stop_line_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cost
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_cost
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time_cost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_cost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // direction
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
