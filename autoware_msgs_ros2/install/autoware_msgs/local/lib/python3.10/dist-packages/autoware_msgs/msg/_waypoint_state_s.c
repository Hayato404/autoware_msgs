// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_msgs:msg/WaypointState.idl
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
#include "autoware_msgs/msg/detail/waypoint_state__struct.h"
#include "autoware_msgs/msg/detail/waypoint_state__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool autoware_msgs__msg__waypoint_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("autoware_msgs.msg._waypoint_state.WaypointState", full_classname_dest, 47) == 0);
  }
  autoware_msgs__msg__WaypointState * ros_message = _ros_message;
  {  // aid
    PyObject * field = PyObject_GetAttrString(_pymsg, "aid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aid = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lanechange_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanechange_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lanechange_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // steering_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steering_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // accel_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->accel_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stop_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "stop_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stop_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // event_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "event_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->event_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_msgs__msg__waypoint_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WaypointState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_msgs.msg._waypoint_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WaypointState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_msgs__msg__WaypointState * ros_message = (autoware_msgs__msg__WaypointState *)raw_ros_message;
  {  // aid
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->aid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanechange_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lanechange_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanechange_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->steering_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->accel_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stop_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stop_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stop_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // event_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->event_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "event_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
