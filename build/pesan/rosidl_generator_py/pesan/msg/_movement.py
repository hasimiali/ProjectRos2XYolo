# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pesan:msg/Movement.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Movement(type):
    """Metaclass of message 'Movement'."""

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
            module = import_type_support('pesan')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pesan.msg.Movement')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__movement
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__movement
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__movement
            cls._TYPE_SUPPORT = module.type_support_msg__msg__movement
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__movement

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Movement(metaclass=Metaclass_Movement):
    """Message class 'Movement'."""

    __slots__ = [
        '_arah',
        '_pwm_x',
        '_pwm_y',
    ]

    _fields_and_field_types = {
        'arah': 'string',
        'pwm_x': 'int64',
        'pwm_y': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.arah = kwargs.get('arah', str())
        self.pwm_x = kwargs.get('pwm_x', int())
        self.pwm_y = kwargs.get('pwm_y', int())

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
        if self.arah != other.arah:
            return False
        if self.pwm_x != other.pwm_x:
            return False
        if self.pwm_y != other.pwm_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def arah(self):
        """Message field 'arah'."""
        return self._arah

    @arah.setter
    def arah(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'arah' field must be of type 'str'"
        self._arah = value

    @property
    def pwm_x(self):
        """Message field 'pwm_x'."""
        return self._pwm_x

    @pwm_x.setter
    def pwm_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pwm_x' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'pwm_x' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._pwm_x = value

    @property
    def pwm_y(self):
        """Message field 'pwm_y'."""
        return self._pwm_y

    @pwm_y.setter
    def pwm_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pwm_y' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'pwm_y' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._pwm_y = value
