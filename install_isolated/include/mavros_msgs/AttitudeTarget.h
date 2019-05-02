// Generated by gencpp from file mavros_msgs/AttitudeTarget.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_ATTITUDETARGET_H
#define MAVROS_MSGS_MESSAGE_ATTITUDETARGET_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/Vector3.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct AttitudeTarget_
{
  typedef AttitudeTarget_<ContainerAllocator> Type;

  AttitudeTarget_()
    : header()
    , type_mask(0)
    , orientation()
    , body_rate()
    , thrust(0.0)  {
    }
  AttitudeTarget_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , type_mask(0)
    , orientation(_alloc)
    , body_rate(_alloc)
    , thrust(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _type_mask_type;
  _type_mask_type type_mask;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _orientation_type;
  _orientation_type orientation;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _body_rate_type;
  _body_rate_type body_rate;

   typedef float _thrust_type;
  _thrust_type thrust;



  enum {
    IGNORE_ROLL_RATE = 1u,
    IGNORE_PITCH_RATE = 2u,
    IGNORE_YAW_RATE = 4u,
    IGNORE_THRUST = 64u,
    IGNORE_ATTITUDE = 128u,
  };


  typedef boost::shared_ptr< ::mavros_msgs::AttitudeTarget_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::AttitudeTarget_<ContainerAllocator> const> ConstPtr;

}; // struct AttitudeTarget_

typedef ::mavros_msgs::AttitudeTarget_<std::allocator<void> > AttitudeTarget;

typedef boost::shared_ptr< ::mavros_msgs::AttitudeTarget > AttitudeTargetPtr;
typedef boost::shared_ptr< ::mavros_msgs::AttitudeTarget const> AttitudeTargetConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::AttitudeTarget_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::AttitudeTarget_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geographic_msgs': ['/opt/ros/kinetic/share/geographic_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'mavros_msgs': ['/home/physics/catkin_ws/src/mavros/mavros_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/kinetic/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::AttitudeTarget_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::AttitudeTarget_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::AttitudeTarget_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::AttitudeTarget_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::AttitudeTarget_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::AttitudeTarget_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::AttitudeTarget_<ContainerAllocator> >
{
  static const char* value()
  {
    return "456f3af666b22ccd0222ea053a86b548";
  }

  static const char* value(const ::mavros_msgs::AttitudeTarget_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x456f3af666b22ccdULL;
  static const uint64_t static_value2 = 0x0222ea053a86b548ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::AttitudeTarget_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/AttitudeTarget";
  }

  static const char* value(const ::mavros_msgs::AttitudeTarget_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::AttitudeTarget_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message for SET_ATTITUDE_TARGET\n\
#\n\
# Some complex system requires all feautures that mavlink\n\
# message provide. See issue #402, #418.\n\
\n\
std_msgs/Header header\n\
\n\
uint8 type_mask\n\
uint8 IGNORE_ROLL_RATE = 1	# body_rate.x\n\
uint8 IGNORE_PITCH_RATE = 2	# body_rate.y\n\
uint8 IGNORE_YAW_RATE = 4	# body_rate.z\n\
uint8 IGNORE_THRUST = 64\n\
uint8 IGNORE_ATTITUDE = 128	# orientation field\n\
\n\
geometry_msgs/Quaternion orientation\n\
geometry_msgs/Vector3 body_rate\n\
float32 thrust\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::mavros_msgs::AttitudeTarget_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::AttitudeTarget_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.type_mask);
      stream.next(m.orientation);
      stream.next(m.body_rate);
      stream.next(m.thrust);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AttitudeTarget_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::AttitudeTarget_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::AttitudeTarget_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "type_mask: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type_mask);
    s << indent << "orientation: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.orientation);
    s << indent << "body_rate: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.body_rate);
    s << indent << "thrust: ";
    Printer<float>::stream(s, indent + "  ", v.thrust);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_ATTITUDETARGET_H
