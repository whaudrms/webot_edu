// Generated by gencpp from file morai_msgs/MoraiWaitForTickSrvResponse.msg
// DO NOT EDIT!


#ifndef MORAI_MSGS_MESSAGE_MORAIWAITFORTICKSRVRESPONSE_H
#define MORAI_MSGS_MESSAGE_MORAIWAITFORTICKSRVRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <morai_msgs/WaitForTickResponse.h>

namespace morai_msgs
{
template <class ContainerAllocator>
struct MoraiWaitForTickSrvResponse_
{
  typedef MoraiWaitForTickSrvResponse_<ContainerAllocator> Type;

  MoraiWaitForTickSrvResponse_()
    : response()  {
    }
  MoraiWaitForTickSrvResponse_(const ContainerAllocator& _alloc)
    : response(_alloc)  {
  (void)_alloc;
    }



   typedef  ::morai_msgs::WaitForTickResponse_<ContainerAllocator>  _response_type;
  _response_type response;





  typedef boost::shared_ptr< ::morai_msgs::MoraiWaitForTickSrvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::morai_msgs::MoraiWaitForTickSrvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct MoraiWaitForTickSrvResponse_

typedef ::morai_msgs::MoraiWaitForTickSrvResponse_<std::allocator<void> > MoraiWaitForTickSrvResponse;

typedef boost::shared_ptr< ::morai_msgs::MoraiWaitForTickSrvResponse > MoraiWaitForTickSrvResponsePtr;
typedef boost::shared_ptr< ::morai_msgs::MoraiWaitForTickSrvResponse const> MoraiWaitForTickSrvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::morai_msgs::MoraiWaitForTickSrvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::morai_msgs::MoraiWaitForTickSrvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::morai_msgs::MoraiWaitForTickSrvResponse_<ContainerAllocator1> & lhs, const ::morai_msgs::MoraiWaitForTickSrvResponse_<ContainerAllocator2> & rhs)
{
  return lhs.response == rhs.response;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::morai_msgs::MoraiWaitForTickSrvResponse_<ContainerAllocator1> & lhs, const ::morai_msgs::MoraiWaitForTickSrvResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace morai_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::MoraiWaitForTickSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::MoraiWaitForTickSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::MoraiWaitForTickSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::MoraiWaitForTickSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::MoraiWaitForTickSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::MoraiWaitForTickSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::morai_msgs::MoraiWaitForTickSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0a98f2c6b7aa0c45833b2e28ead14874";
  }

  static const char* value(const ::morai_msgs::MoraiWaitForTickSrvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0a98f2c6b7aa0c45ULL;
  static const uint64_t static_value2 = 0x833b2e28ead14874ULL;
};

template<class ContainerAllocator>
struct DataType< ::morai_msgs::MoraiWaitForTickSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "morai_msgs/MoraiWaitForTickSrvResponse";
  }

  static const char* value(const ::morai_msgs::MoraiWaitForTickSrvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::morai_msgs::MoraiWaitForTickSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "WaitForTickResponse response\n"
"\n"
"\n"
"================================================================================\n"
"MSG: morai_msgs/WaitForTickResponse\n"
"bool tick_status\n"
"bool pause_status\n"
"uint64 frame\n"
"\n"
"EgoVehicleStatus vehicle_status\n"
"string time\n"
"\n"
"================================================================================\n"
"MSG: morai_msgs/EgoVehicleStatus\n"
"Header header\n"
"int32 unique_id\n"
"geometry_msgs/Vector3 acceleration\n"
"geometry_msgs/Vector3 position\n"
"geometry_msgs/Vector3 velocity\n"
"\n"
"float64 heading\n"
"float32 accel\n"
"float32 brake\n"
"float32 wheel_angle\n"
"float32 lateral_offset\n"
"\n"
"float32 tire_lateral_force_fl\n"
"float32 tire_lateral_force_fr\n"
"float32 tire_lateral_force_rl\n"
"float32 tire_lateral_force_rr\n"
"\n"
"float32 side_slip_angle_fl\n"
"float32 side_slip_angle_fr\n"
"float32 side_slip_angle_rl\n"
"float32 side_slip_angle_rr\n"
"\n"
"float32 tire_cornering_stiffness_fl\n"
"float32 tire_cornering_stiffness_fr\n"
"float32 tire_cornering_stiffness_rl\n"
"float32 tire_cornering_stiffness_rr\n"
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

  static const char* value(const ::morai_msgs::MoraiWaitForTickSrvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::morai_msgs::MoraiWaitForTickSrvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.response);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoraiWaitForTickSrvResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::morai_msgs::MoraiWaitForTickSrvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::morai_msgs::MoraiWaitForTickSrvResponse_<ContainerAllocator>& v)
  {
    if (false || !indent.empty())
      s << std::endl;
    s << indent << "response: ";
    Printer< ::morai_msgs::WaitForTickResponse_<ContainerAllocator> >::stream(s, indent + "  ", v.response);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MORAI_MSGS_MESSAGE_MORAIWAITFORTICKSRVRESPONSE_H
