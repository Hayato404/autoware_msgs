# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_msgs:msg/Lane.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Lane(type):
    """Metaclass of message 'Lane'."""

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
                'autoware_msgs.msg.Lane')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane

            from autoware_msgs.msg import Waypoint
            if Waypoint.__class__._TYPE_SUPPORT is None:
                Waypoint.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Lane(metaclass=Metaclass_Lane):
    """Message class 'Lane'."""

    __slots__ = [
        '_header',
        '_increment',
        '_lane_id',
        '_waypoints',
        '_lane_index',
        '_cost',
        '_closest_object_distance',
        '_closest_object_velocity',
        '_is_blocked',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'increment': 'int32',
        'lane_id': 'int32',
        'waypoints': 'sequence<autoware_msgs/Waypoint>',
        'lane_index': 'uint32',
        'cost': 'float',
        'closest_object_distance': 'float',
        'closest_object_velocity': 'float',
        'is_blocked': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['autoware_msgs', 'msg'], 'Waypoint')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.increment = kwargs.get('increment', int())
        self.lane_id = kwargs.get('lane_id', int())
        self.waypoints = kwargs.get('waypoints', [])
        self.lane_index = kwargs.get('lane_index', int())
        self.cost = kwargs.get('cost', float())
        self.closest_object_distance = kwargs.get('closest_object_distance', float())
        self.closest_object_velocity = kwargs.get('closest_object_velocity', float())
        self.is_blocked = kwargs.get('is_blocked', bool())

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
        if self.header != other.header:
            return False
        if self.increment != other.increment:
            return False
        if self.lane_id != other.lane_id:
            return False
        if self.waypoints != other.waypoints:
            return False
        if self.lane_index != other.lane_index:
            return False
        if self.cost != other.cost:
            return False
        if self.closest_object_distance != other.closest_object_distance:
            return False
        if self.closest_object_velocity != other.closest_object_velocity:
            return False
        if self.is_blocked != other.is_blocked:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def increment(self):
        """Message field 'increment'."""
        return self._increment

    @increment.setter
    def increment(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'increment' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'increment' field must be an integer in [-2147483648, 2147483647]"
        self._increment = value

    @builtins.property
    def lane_id(self):
        """Message field 'lane_id'."""
        return self._lane_id

    @lane_id.setter
    def lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lane_id' field must be an integer in [-2147483648, 2147483647]"
        self._lane_id = value

    @builtins.property
    def waypoints(self):
        """Message field 'waypoints'."""
        return self._waypoints

    @waypoints.setter
    def waypoints(self, value):
        if __debug__:
            from autoware_msgs.msg import Waypoint
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Waypoint) for v in value) and
                 True), \
                "The 'waypoints' field must be a set or sequence and each value of type 'Waypoint'"
        self._waypoints = value

    @builtins.property
    def lane_index(self):
        """Message field 'lane_index'."""
        return self._lane_index

    @lane_index.setter
    def lane_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_index' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'lane_index' field must be an unsigned integer in [0, 4294967295]"
        self._lane_index = value

    @builtins.property
    def cost(self):
        """Message field 'cost'."""
        return self._cost

    @cost.setter
    def cost(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cost' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cost' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cost = value

    @builtins.property
    def closest_object_distance(self):
        """Message field 'closest_object_distance'."""
        return self._closest_object_distance

    @closest_object_distance.setter
    def closest_object_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'closest_object_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'closest_object_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._closest_object_distance = value

    @builtins.property
    def closest_object_velocity(self):
        """Message field 'closest_object_velocity'."""
        return self._closest_object_velocity

    @closest_object_velocity.setter
    def closest_object_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'closest_object_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'closest_object_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._closest_object_velocity = value

    @builtins.property
    def is_blocked(self):
        """Message field 'is_blocked'."""
        return self._is_blocked

    @is_blocked.setter
    def is_blocked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_blocked' field must be of type 'bool'"
        self._is_blocked = value
