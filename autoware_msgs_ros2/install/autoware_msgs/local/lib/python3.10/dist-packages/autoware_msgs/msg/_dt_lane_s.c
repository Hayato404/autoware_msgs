// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_msgs:msg/DTLane.idl
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
#include "autoware_msgs/msg/detail/dt_lane__struct.h"
#include "autoware_msgs/msg/detail/dt_lane__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool autoware_msgs__msg__dt_lane__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[34];
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
    assert(strncmp("autoware_msgs.msg._dt_lane.DTLane", full_classname_dest, 33) == 0);
  }
  autoware_msgs__msg__DTLane * ros_message = _ros_message;
  {  // dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "dist");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dist = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dir
    PyObject * field = PyObject_GetAttrString(_pymsg, "dir");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dir = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // apara
    PyObject * field = PyObject_GetAttrString(_pymsg, "apara");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->apara = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // r
    PyObject * field = PyObject_GetAttrString(_pymsg, "r");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->r = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // slope
    PyObject * field = PyObject_GetAttrString(_pymsg, "slope");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->slope = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cant
    PyObject * field = PyObject_GetAttrString(_pymsg, "cant");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cant = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lw
    PyObject * field = PyObject_GetAttrString(_pymsg, "lw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rw
    PyObject * field = PyObject_GetAttrString(_pymsg, "rw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_msgs__msg__dt_lane__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DTLane */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_msgs.msg._dt_lane");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DTLane");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_msgs__msg__DTLane * ros_message = (autoware_msgs__msg__DTLane *)raw_ros_message;
  {  // dist
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dir
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dir);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dir", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // apara
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->apara);
    {
      int rc = PyObject_SetAttrString(_pymessage, "apara", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->r);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // slope
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->slope);
    {
      int rc = PyObject_SetAttrString(_pymessage, "slope", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cant
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cant);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cant", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
