// Generated by gencpp from file morai_msgs/SkateboardStatus.msg
// DO NOT EDIT!


#ifndef MORAI_MSGS_MESSAGE_SKATEBOARDSTATUS_H
#define MORAI_MSGS_MESSAGE_SKATEBOARDSTATUS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace morai_msgs
{
template <class ContainerAllocator>
struct SkateboardStatus_
{
  typedef SkateboardStatus_<ContainerAllocator> Type;

  SkateboardStatus_()
    : header()
    , unique_id(0)
    , acceleration()
    , position()
    , velocity()
    , heading(0.0)
    , accel(0.0)
    , brake(0.0)
    , wheel_angle(0.0)
    , wheel_angle_rear(0.0)
    , wheel_speed_fl(0.0)
    , wheel_speed_fr(0.0)
    , wheel_speed_rl(0.0)
    , wheel_speed_rr(0.0)  {
    }
  SkateboardStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , unique_id(0)
    , acceleration(_alloc)
    , position(_alloc)
    , velocity(_alloc)
    , heading(0.0)
    , accel(0.0)
    , brake(0.0)
    , wheel_angle(0.0)
    , wheel_angle_rear(0.0)
    , wheel_speed_fl(0.0)
    , wheel_speed_fr(0.0)
    , wheel_speed_rl(0.0)
    , wheel_speed_rr(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _unique_id_type;
  _unique_id_type unique_id;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _acceleration_type;
  _acceleration_type acceleration;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _velocity_type;
  _velocity_type velocity;

   typedef double _heading_type;
  _heading_type heading;

   typedef float _accel_type;
  _accel_type accel;

   typedef float _brake_type;
  _brake_type brake;

   typedef float _wheel_angle_type;
  _wheel_angle_type wheel_angle;

   typedef float _wheel_angle_rear_type;
  _wheel_angle_rear_type wheel_angle_rear;

   typedef float _wheel_speed_fl_type;
  _wheel_speed_fl_type wheel_speed_fl;

   typedef float _wheel_speed_fr_type;
  _wheel_speed_fr_type wheel_speed_fr;

   typedef float _wheel_speed_rl_type;
  _wheel_speed_rl_type wheel_speed_rl;

   typedef float _wheel_speed_rr_type;
  _wheel_speed_rr_type wheel_speed_rr;





  typedef boost::shared_ptr< ::morai_msgs::SkateboardStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::morai_msgs::SkateboardStatus_<ContainerAllocator> const> ConstPtr;

}; // struct SkateboardStatus_

typedef ::morai_msgs::SkateboardStatus_<std::allocator<void> > SkateboardStatus;

typedef boost::shared_ptr< ::morai_msgs::SkateboardStatus > SkateboardStatusPtr;
typedef boost::shared_ptr< ::morai_msgs::SkateboardStatus const> SkateboardStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::morai_msgs::SkateboardStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::morai_msgs::SkateboardStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::morai_msgs::SkateboardStatus_<ContainerAllocator1> & lhs, const ::morai_msgs::SkateboardStatus_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.unique_id == rhs.unique_id &&
    lhs.acceleration == rhs.acceleration &&
    lhs.position == rhs.position &&
    lhs.velocity == rhs.velocity &&
    lhs.heading == rhs.heading &&
    lhs.accel == rhs.accel &&
    lhs.brake == rhs.brake &&
    lhs.wheel_angle == rhs.wheel_angle &&
    lhs.wheel_angle_rear == rhs.wheel_angle_rear &&
    lhs.wheel_speed_fl == rhs.wheel_speed_fl &&
    lhs.wheel_speed_fr == rhs.wheel_speed_fr &&
    lhs.wheel_speed_rl == rhs.wheel_speed_rl &&
    lhs.wheel_speed_rr == rhs.wheel_speed_rr;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::morai_msgs::SkateboardStatus_<ContainerAllocator1> & lhs, const ::morai_msgs::SkateboardStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace morai_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::SkateboardStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::SkateboardStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::SkateboardStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::SkateboardStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::SkateboardStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::SkateboardStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::morai_msgs::SkateboardStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "700aa972ab562f4624ac28d5ec252ef8";
  }

  static const char* value(const ::morai_msgs::SkateboardStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x700aa972ab562f46ULL;
  static const uint64_t static_value2 = 0x24ac28d5ec252ef8ULL;
};

template<class ContainerAllocator>
struct DataType< ::morai_msgs::SkateboardStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "morai_msgs/SkateboardStatus";
  }

  static const char* value(const ::morai_msgs::SkateboardStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::morai_msgs::SkateboardStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"int32 unique_id\n"
"geometry_msgs/Vector3 acceleration\n"
"geometry_msgs/Vector3 position\n"
"geometry_msgs/Vector3 velocity\n"
"\n"
"float64 heading\n"
"float32 accel\n"
"float32 brake\n"
"float32 wheel_angle\n"
"float32 wheel_angle_rear\n"
"float32 wheel_speed_fl\n"
"float32 wheel_speed_fr\n"
"float32 wheel_speed_rl\n"
"float32 wheel_speed_rr\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::morai_msgs::SkateboardStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::morai_msgs::SkateboardStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.unique_id);
      stream.next(m.acceleration);
      stream.next(m.position);
      stream.next(m.velocity);
      stream.next(m.heading);
      stream.next(m.accel);
      stream.next(m.brake);
      stream.next(m.wheel_angle);
      stream.next(m.wheel_angle_rear);
      stream.next(m.wheel_speed_fl);
      stream.next(m.wheel_speed_fr);
      stream.next(m.wheel_speed_rl);
      stream.next(m.wheel_speed_rr);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SkateboardStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::morai_msgs::SkateboardStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::morai_msgs::SkateboardStatus_<ContainerAllocator>& v)
  {
    if (false || !indent.empty())
      s << std::endl;
    s << indent << "header: ";
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "unique_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.unique_id);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "acceleration: ";
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.acceleration);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "position: ";
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "velocity: ";
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.velocity);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "heading: ";
    Printer<double>::stream(s, indent + "  ", v.heading);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "accel: ";
    Printer<float>::stream(s, indent + "  ", v.accel);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "brake: ";
    Printer<float>::stream(s, indent + "  ", v.brake);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "wheel_angle: ";
    Printer<float>::stream(s, indent + "  ", v.wheel_angle);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "wheel_angle_rear: ";
    Printer<float>::stream(s, indent + "  ", v.wheel_angle_rear);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "wheel_speed_fl: ";
    Printer<float>::stream(s, indent + "  ", v.wheel_speed_fl);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "wheel_speed_fr: ";
    Printer<float>::stream(s, indent + "  ", v.wheel_speed_fr);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "wheel_speed_rl: ";
    Printer<float>::stream(s, indent + "  ", v.wheel_speed_rl);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "wheel_speed_rr: ";
    Printer<float>::stream(s, indent + "  ", v.wheel_speed_rr);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MORAI_MSGS_MESSAGE_SKATEBOARDSTATUS_H
