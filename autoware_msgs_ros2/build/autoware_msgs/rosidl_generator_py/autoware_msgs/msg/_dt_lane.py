# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_msgs:msg/DTLane.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DTLane(type):
    """Metaclass of message 'DTLane'."""

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
            module = import_type_support('autoware_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_msgs.msg.DTLane')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dt_lane
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dt_lane
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dt_lane
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dt_lane
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dt_lane

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DTLane(metaclass=Metaclass_DTLane):
    """Message class 'DTLane'."""

    __slots__ = [
        '_dist',
        '_dir',
        '_apara',
        '_r',
        '_slope',
        '_cant',
        '_lw',
        '_rw',
    ]

    _fields_and_field_types = {
        'dist': 'double',
        'dir': 'double',
        'apara': 'double',
        'r': 'double',
        'slope': 'double',
        'cant': 'double',
        'lw': 'double',
        'rw': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.dist = kwargs.get('dist', float())
        self.dir = kwargs.get('dir', float())
        self.apara = kwargs.get('apara', float())
        self.r = kwargs.get('r', float())
        self.slope = kwargs.get('slope', float())
        self.cant = kwargs.get('cant', float())
        self.lw = kwargs.get('lw', float())
        self.rw = kwargs.get('rw', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.dist != other.dist:
            return False
        if self.dir != other.dir:
            return False
        if self.apara != other.apara:
            return False
        if self.r != other.r:
            return False
        if self.slope != other.slope:
            return False
        if self.cant != other.cant:
            return False
        if self.lw != other.lw:
            return False
        if self.rw != other.rw:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def dist(self):
        """Message field 'dist'."""
        return self._dist

    @dist.setter
    def dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dist' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dist' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dist = value

    @builtins.property  # noqa: A003
    def dir(self):  # noqa: A003
        """Message field 'dir'."""
        return self._dir

    @dir.setter  # noqa: A003
    def dir(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dir' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dir' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dir = value

    @builtins.property
    def apara(self):
        """Message field 'apara'."""
        return self._apara

    @apara.setter
    def apara(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'apara' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'apara' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._apara = value

    @builtins.property
    def r(self):
        """Message field 'r'."""
        return self._r

    @r.setter
    def r(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'r' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'r' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._r = value

    @builtins.property
    def slope(self):
        """Message field 'slope'."""
        return self._slope

    @slope.setter
    def slope(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'slope' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'slope' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._slope = value

    @builtins.property
    def cant(self):
        """Message field 'cant'."""
        return self._cant

    @cant.setter
    def cant(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cant' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cant' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cant = value

    @builtins.property
    def lw(self):
        """Message field 'lw'."""
        return self._lw

    @lw.setter
    def lw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lw = value

    @builtins.property
    def rw(self):
        """Message field 'rw'."""
        return self._rw

    @rw.setter
    def rw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rw = value
