# generated from rosidl_generator_py/resource/_idl.py.em
# with input from roshandmsg_pkg:msg/MsgHand.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MsgHand(type):
    """Metaclass of message 'MsgHand'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('roshandmsg_pkg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'roshandmsg_pkg.msg.MsgHand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__msg_hand
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__msg_hand
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__msg_hand
            cls._TYPE_SUPPORT = module.type_support_msg__msg__msg_hand
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__msg_hand

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MsgHand(metaclass=Metaclass_MsgHand):
    """Message class 'MsgHand'."""

    __slots__ = [
        '_d1',
        '_d2',
        '_d3',
        '_d4',
        '_d5',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'd1': 'float',
        'd2': 'float',
        'd3': 'float',
        'd4': 'float',
        'd5': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.d1 = kwargs.get('d1', float())
        self.d2 = kwargs.get('d2', float())
        self.d3 = kwargs.get('d3', float())
        self.d4 = kwargs.get('d4', float())
        self.d5 = kwargs.get('d5', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.d1 != other.d1:
            return False
        if self.d2 != other.d2:
            return False
        if self.d3 != other.d3:
            return False
        if self.d4 != other.d4:
            return False
        if self.d5 != other.d5:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def d1(self):
        """Message field 'd1'."""
        return self._d1

    @d1.setter
    def d1(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'd1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'd1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._d1 = value

    @builtins.property
    def d2(self):
        """Message field 'd2'."""
        return self._d2

    @d2.setter
    def d2(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'd2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'd2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._d2 = value

    @builtins.property
    def d3(self):
        """Message field 'd3'."""
        return self._d3

    @d3.setter
    def d3(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'd3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'd3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._d3 = value

    @builtins.property
    def d4(self):
        """Message field 'd4'."""
        return self._d4

    @d4.setter
    def d4(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'd4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'd4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._d4 = value

    @builtins.property
    def d5(self):
        """Message field 'd5'."""
        return self._d5

    @d5.setter
    def d5(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'd5' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'd5' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._d5 = value
