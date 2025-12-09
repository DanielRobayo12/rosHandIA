// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from roshandmsg_pkg:msg/MsgHand.idl
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
#include "roshandmsg_pkg/msg/detail/msg_hand__struct.h"
#include "roshandmsg_pkg/msg/detail/msg_hand__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool roshandmsg_pkg__msg__msg_hand__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("roshandmsg_pkg.msg._msg_hand.MsgHand", full_classname_dest, 36) == 0);
  }
  roshandmsg_pkg__msg__MsgHand * ros_message = _ros_message;
  {  // d1
    PyObject * field = PyObject_GetAttrString(_pymsg, "d1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->d1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // d2
    PyObject * field = PyObject_GetAttrString(_pymsg, "d2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->d2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // d3
    PyObject * field = PyObject_GetAttrString(_pymsg, "d3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->d3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // d4
    PyObject * field = PyObject_GetAttrString(_pymsg, "d4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->d4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // d5
    PyObject * field = PyObject_GetAttrString(_pymsg, "d5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->d5 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * roshandmsg_pkg__msg__msg_hand__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MsgHand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("roshandmsg_pkg.msg._msg_hand");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MsgHand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  roshandmsg_pkg__msg__MsgHand * ros_message = (roshandmsg_pkg__msg__MsgHand *)raw_ros_message;
  {  // d1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->d1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "d1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // d2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->d2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "d2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // d3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->d3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "d3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // d4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->d4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "d4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // d5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->d5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "d5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
