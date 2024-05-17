# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_msgs:msg/WaypointState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WaypointState(type):
    """Metaclass of message 'WaypointState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NULLSTATE': 0,
        'STR_LEFT': 1,
        'STR_RIGHT': 2,
        'STR_STRAIGHT': 3,
        'STR_BACK': 4,
        'TYPE_STOPLINE': 1,
        'TYPE_STOP': 2,
        'TYPE_EVENT_NULL': 0,
        'TYPE_EVENT_GOAL': 1,
        'TYPE_EVENT_MIDDLE_GOAL': 2,
        'TYPE_EVENT_POSITION_STOP': 3,
        'TYPE_EVENT_BUS_STOP': 4,
        'TYPE_EVENT_PARKING': 5,
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
                'autoware_msgs.msg.WaypointState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__waypoint_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__waypoint_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__waypoint_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__waypoint_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__waypoint_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NULLSTATE': cls.__constants['NULLSTATE'],
            'STR_LEFT': cls.__constants['STR_LEFT'],
            'STR_RIGHT': cls.__constants['STR_RIGHT'],
            'STR_STRAIGHT': cls.__constants['STR_STRAIGHT'],
            'STR_BACK': cls.__constants['STR_BACK'],
            'TYPE_STOPLINE': cls.__constants['TYPE_STOPLINE'],
            'TYPE_STOP': cls.__constants['TYPE_STOP'],
            'TYPE_EVENT_NULL': cls.__constants['TYPE_EVENT_NULL'],
            'TYPE_EVENT_GOAL': cls.__constants['TYPE_EVENT_GOAL'],
            'TYPE_EVENT_MIDDLE_GOAL': cls.__constants['TYPE_EVENT_MIDDLE_GOAL'],
            'TYPE_EVENT_POSITION_STOP': cls.__constants['TYPE_EVENT_POSITION_STOP'],
            'TYPE_EVENT_BUS_STOP': cls.__constants['TYPE_EVENT_BUS_STOP'],
            'TYPE_EVENT_PARKING': cls.__constants['TYPE_EVENT_PARKING'],
        }

    @property
    def NULLSTATE(self):
        """Message constant 'NULLSTATE'."""
        return Metaclass_WaypointState.__constants['NULLSTATE']

    @property
    def STR_LEFT(self):
        """Message constant 'STR_LEFT'."""
        return Metaclass_WaypointState.__constants['STR_LEFT']

    @property
    def STR_RIGHT(self):
        """Message constant 'STR_RIGHT'."""
        return Metaclass_WaypointState.__constants['STR_RIGHT']

    @property
    def STR_STRAIGHT(self):
        """Message constant 'STR_STRAIGHT'."""
        return Metaclass_WaypointState.__constants['STR_STRAIGHT']

    @property
    def STR_BACK(self):
        """Message constant 'STR_BACK'."""
        return Metaclass_WaypointState.__constants['STR_BACK']

    @property
    def TYPE_STOPLINE(self):
        """Message constant 'TYPE_STOPLINE'."""
        return Metaclass_WaypointState.__constants['TYPE_STOPLINE']

    @property
    def TYPE_STOP(self):
        """Message constant 'TYPE_STOP'."""
        return Metaclass_WaypointState.__constants['TYPE_STOP']

    @property
    def TYPE_EVENT_NULL(self):
        """Message constant 'TYPE_EVENT_NULL'."""
        return Metaclass_WaypointState.__constants['TYPE_EVENT_NULL']

    @property
    def TYPE_EVENT_GOAL(self):
        """Message constant 'TYPE_EVENT_GOAL'."""
        return Metaclass_WaypointState.__constants['TYPE_EVENT_GOAL']

    @property
    def TYPE_EVENT_MIDDLE_GOAL(self):
        """Message constant 'TYPE_EVENT_MIDDLE_GOAL'."""
        return Metaclass_WaypointState.__constants['TYPE_EVENT_MIDDLE_GOAL']

    @property
    def TYPE_EVENT_POSITION_STOP(self):
        """Message constant 'TYPE_EVENT_POSITION_STOP'."""
        return Metaclass_WaypointState.__constants['TYPE_EVENT_POSITION_STOP']

    @property
    def TYPE_EVENT_BUS_STOP(self):
        """Message constant 'TYPE_EVENT_BUS_STOP'."""
        return Metaclass_WaypointState.__constants['TYPE_EVENT_BUS_STOP']

    @property
    def TYPE_EVENT_PARKING(self):
        """Message constant 'TYPE_EVENT_PARKING'."""
        return Metaclass_WaypointState.__constants['TYPE_EVENT_PARKING']


class WaypointState(metaclass=Metaclass_WaypointState):
    """
    Message class 'WaypointState'.

    Constants:
      NULLSTATE
      STR_LEFT
      STR_RIGHT
      STR_STRAIGHT
      STR_BACK
      TYPE_STOPLINE
      TYPE_STOP
      TYPE_EVENT_NULL
      TYPE_EVENT_GOAL
      TYPE_EVENT_MIDDLE_GOAL
      TYPE_EVENT_POSITION_STOP
      TYPE_EVENT_BUS_STOP
      TYPE_EVENT_PARKING
    """

    __slots__ = [
        '_aid',
        '_lanechange_state',
        '_steering_state',
        '_accel_state',
        '_stop_state',
        '_event_state',
    ]

    _fields_and_field_types = {
        'aid': 'int32',
        'lanechange_state': 'uint8',
        'steering_state': 'uint8',
        'accel_state': 'uint8',
        'stop_state': 'uint8',
        'event_state': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.aid = kwargs.get('aid', int())
        self.lanechange_state = kwargs.get('lanechange_state', int())
        self.steering_state = kwargs.get('steering_state', int())
        self.accel_state = kwargs.get('accel_state', int())
        self.stop_state = kwargs.get('stop_state', int())
        self.event_state = kwargs.get('event_state', int())

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
        if self.aid != other.aid:
            return False
        if self.lanechange_state != other.lanechange_state:
            return False
        if self.steering_state != other.steering_state:
            return False
        if self.accel_state != other.accel_state:
            return False
        if self.stop_state != other.stop_state:
            return False
        if self.event_state != other.event_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def aid(self):
        """Message field 'aid'."""
        return self._aid

    @aid.setter
    def aid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aid' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'aid' field must be an integer in [-2147483648, 2147483647]"
        self._aid = value

    @builtins.property
    def lanechange_state(self):
        """Message field 'lanechange_state'."""
        return self._lanechange_state

    @lanechange_state.setter
    def lanechange_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanechange_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lanechange_state' field must be an unsigned integer in [0, 255]"
        self._lanechange_state = value

    @builtins.property
    def steering_state(self):
        """Message field 'steering_state'."""
        return self._steering_state

    @steering_state.setter
    def steering_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steering_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'steering_state' field must be an unsigned integer in [0, 255]"
        self._steering_state = value

    @builtins.property
    def accel_state(self):
        """Message field 'accel_state'."""
        return self._accel_state

    @accel_state.setter
    def accel_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'accel_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'accel_state' field must be an unsigned integer in [0, 255]"
        self._accel_state = value

    @builtins.property
    def stop_state(self):
        """Message field 'stop_state'."""
        return self._stop_state

    @stop_state.setter
    def stop_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stop_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stop_state' field must be an unsigned integer in [0, 255]"
        self._stop_state = value

    @builtins.property
    def event_state(self):
        """Message field 'event_state'."""
        return self._event_state

    @event_state.setter
    def event_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'event_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'event_state' field must be an unsigned integer in [0, 255]"
        self._event_state = value
