# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_msgs:msg/Waypoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Waypoint(type):
    """Metaclass of message 'Waypoint'."""

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
                'autoware_msgs.msg.Waypoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__waypoint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__waypoint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__waypoint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__waypoint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__waypoint

            from autoware_msgs.msg import DTLane
            if DTLane.__class__._TYPE_SUPPORT is None:
                DTLane.__class__.__import_type_support__()

            from autoware_msgs.msg import WaypointState
            if WaypointState.__class__._TYPE_SUPPORT is None:
                WaypointState.__class__.__import_type_support__()

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

            from geometry_msgs.msg import TwistStamped
            if TwistStamped.__class__._TYPE_SUPPORT is None:
                TwistStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Waypoint(metaclass=Metaclass_Waypoint):
    """Message class 'Waypoint'."""

    __slots__ = [
        '_gid',
        '_lid',
        '_pose',
        '_twist',
        '_dtlane',
        '_change_flag',
        '_wpstate',
        '_lane_id',
        '_left_lane_id',
        '_right_lane_id',
        '_stop_line_id',
        '_cost',
        '_time_cost',
        '_direction',
    ]

    _fields_and_field_types = {
        'gid': 'int32',
        'lid': 'int32',
        'pose': 'geometry_msgs/PoseStamped',
        'twist': 'geometry_msgs/TwistStamped',
        'dtlane': 'autoware_msgs/DTLane',
        'change_flag': 'int32',
        'wpstate': 'autoware_msgs/WaypointState',
        'lane_id': 'uint32',
        'left_lane_id': 'uint32',
        'right_lane_id': 'uint32',
        'stop_line_id': 'uint32',
        'cost': 'float',
        'time_cost': 'float',
        'direction': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TwistStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autoware_msgs', 'msg'], 'DTLane'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autoware_msgs', 'msg'], 'WaypointState'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.gid = kwargs.get('gid', int())
        self.lid = kwargs.get('lid', int())
        from geometry_msgs.msg import PoseStamped
        self.pose = kwargs.get('pose', PoseStamped())
        from geometry_msgs.msg import TwistStamped
        self.twist = kwargs.get('twist', TwistStamped())
        from autoware_msgs.msg import DTLane
        self.dtlane = kwargs.get('dtlane', DTLane())
        self.change_flag = kwargs.get('change_flag', int())
        from autoware_msgs.msg import WaypointState
        self.wpstate = kwargs.get('wpstate', WaypointState())
        self.lane_id = kwargs.get('lane_id', int())
        self.left_lane_id = kwargs.get('left_lane_id', int())
        self.right_lane_id = kwargs.get('right_lane_id', int())
        self.stop_line_id = kwargs.get('stop_line_id', int())
        self.cost = kwargs.get('cost', float())
        self.time_cost = kwargs.get('time_cost', float())
        self.direction = kwargs.get('direction', int())

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
        if self.gid != other.gid:
            return False
        if self.lid != other.lid:
            return False
        if self.pose != other.pose:
            return False
        if self.twist != other.twist:
            return False
        if self.dtlane != other.dtlane:
            return False
        if self.change_flag != other.change_flag:
            return False
        if self.wpstate != other.wpstate:
            return False
        if self.lane_id != other.lane_id:
            return False
        if self.left_lane_id != other.left_lane_id:
            return False
        if self.right_lane_id != other.right_lane_id:
            return False
        if self.stop_line_id != other.stop_line_id:
            return False
        if self.cost != other.cost:
            return False
        if self.time_cost != other.time_cost:
            return False
        if self.direction != other.direction:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def gid(self):
        """Message field 'gid'."""
        return self._gid

    @gid.setter
    def gid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gid' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'gid' field must be an integer in [-2147483648, 2147483647]"
        self._gid = value

    @builtins.property
    def lid(self):
        """Message field 'lid'."""
        return self._lid

    @lid.setter
    def lid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lid' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lid' field must be an integer in [-2147483648, 2147483647]"
        self._lid = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'pose' field must be a sub message of type 'PoseStamped'"
        self._pose = value

    @builtins.property
    def twist(self):
        """Message field 'twist'."""
        return self._twist

    @twist.setter
    def twist(self, value):
        if __debug__:
            from geometry_msgs.msg import TwistStamped
            assert \
                isinstance(value, TwistStamped), \
                "The 'twist' field must be a sub message of type 'TwistStamped'"
        self._twist = value

    @builtins.property
    def dtlane(self):
        """Message field 'dtlane'."""
        return self._dtlane

    @dtlane.setter
    def dtlane(self, value):
        if __debug__:
            from autoware_msgs.msg import DTLane
            assert \
                isinstance(value, DTLane), \
                "The 'dtlane' field must be a sub message of type 'DTLane'"
        self._dtlane = value

    @builtins.property
    def change_flag(self):
        """Message field 'change_flag'."""
        return self._change_flag

    @change_flag.setter
    def change_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'change_flag' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'change_flag' field must be an integer in [-2147483648, 2147483647]"
        self._change_flag = value

    @builtins.property
    def wpstate(self):
        """Message field 'wpstate'."""
        return self._wpstate

    @wpstate.setter
    def wpstate(self, value):
        if __debug__:
            from autoware_msgs.msg import WaypointState
            assert \
                isinstance(value, WaypointState), \
                "The 'wpstate' field must be a sub message of type 'WaypointState'"
        self._wpstate = value

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
            assert value >= 0 and value < 4294967296, \
                "The 'lane_id' field must be an unsigned integer in [0, 4294967295]"
        self._lane_id = value

    @builtins.property
    def left_lane_id(self):
        """Message field 'left_lane_id'."""
        return self._left_lane_id

    @left_lane_id.setter
    def left_lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_lane_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'left_lane_id' field must be an unsigned integer in [0, 4294967295]"
        self._left_lane_id = value

    @builtins.property
    def right_lane_id(self):
        """Message field 'right_lane_id'."""
        return self._right_lane_id

    @right_lane_id.setter
    def right_lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_lane_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'right_lane_id' field must be an unsigned integer in [0, 4294967295]"
        self._right_lane_id = value

    @builtins.property
    def stop_line_id(self):
        """Message field 'stop_line_id'."""
        return self._stop_line_id

    @stop_line_id.setter
    def stop_line_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stop_line_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'stop_line_id' field must be an unsigned integer in [0, 4294967295]"
        self._stop_line_id = value

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
    def time_cost(self):
        """Message field 'time_cost'."""
        return self._time_cost

    @time_cost.setter
    def time_cost(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_cost' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time_cost' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time_cost = value

    @builtins.property
    def direction(self):
        """Message field 'direction'."""
        return self._direction

    @direction.setter
    def direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'direction' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'direction' field must be an unsigned integer in [0, 4294967295]"
        self._direction = value
