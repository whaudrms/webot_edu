// Generated by gencpp from file morai_msgs/FaultInjectionSensorSrvResponse.msg
// DO NOT EDIT!


#ifndef MORAI_MSGS_MESSAGE_FAULTINJECTIONSENSORSRVRESPONSE_H
#define MORAI_MSGS_MESSAGE_FAULTINJECTIONSENSORSRVRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <morai_msgs/FaultInjection_Response.h>

namespace morai_msgs
{
template <class ContainerAllocator>
struct FaultInjectionSensorSrvResponse_
{
  typedef FaultInjectionSensorSrvResponse_<ContainerAllocator> Type;

  FaultInjectionSensorSrvResponse_()
    : response()  {
    }
  FaultInjectionSensorSrvResponse_(const ContainerAllocator& _alloc)
    : response(_alloc)  {
  (void)_alloc;
    }



   typedef  ::morai_msgs::FaultInjection_Response_<ContainerAllocator>  _response_type;
  _response_type response;





  typedef boost::shared_ptr< ::morai_msgs::FaultInjectionSensorSrvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::morai_msgs::FaultInjectionSensorSrvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct FaultInjectionSensorSrvResponse_

typedef ::morai_msgs::FaultInjectionSensorSrvResponse_<std::allocator<void> > FaultInjectionSensorSrvResponse;

typedef boost::shared_ptr< ::morai_msgs::FaultInjectionSensorSrvResponse > FaultInjectionSensorSrvResponsePtr;
typedef boost::shared_ptr< ::morai_msgs::FaultInjectionSensorSrvResponse const> FaultInjectionSensorSrvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::morai_msgs::FaultInjectionSensorSrvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::morai_msgs::FaultInjectionSensorSrvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::morai_msgs::FaultInjectionSensorSrvResponse_<ContainerAllocator1> & lhs, const ::morai_msgs::FaultInjectionSensorSrvResponse_<ContainerAllocator2> & rhs)
{
  return lhs.response == rhs.response;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::morai_msgs::FaultInjectionSensorSrvResponse_<ContainerAllocator1> & lhs, const ::morai_msgs::FaultInjectionSensorSrvResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace morai_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::FaultInjectionSensorSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::FaultInjectionSensorSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::FaultInjectionSensorSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::FaultInjectionSensorSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::FaultInjectionSensorSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::FaultInjectionSensorSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::morai_msgs::FaultInjectionSensorSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b095c5b66e667567179177eaff1ea884";
  }

  static const char* value(const ::morai_msgs::FaultInjectionSensorSrvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb095c5b66e667567ULL;
  static const uint64_t static_value2 = 0x179177eaff1ea884ULL;
};

template<class ContainerAllocator>
struct DataType< ::morai_msgs::FaultInjectionSensorSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "morai_msgs/FaultInjectionSensorSrvResponse";
  }

  static const char* value(const ::morai_msgs::FaultInjectionSensorSrvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::morai_msgs::FaultInjectionSensorSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "FaultInjection_Response response\n"
"\n"
"\n"
"================================================================================\n"
"MSG: morai_msgs/FaultInjection_Response\n"
"bool result\n"
"\n"
"int32 unique_id\n"
"FaultStatusInfo_Vehicle vehicle\n"
"FaultStatusInfo_Sensor[] sensors\n"
"\n"
"================================================================================\n"
"MSG: morai_msgs/FaultStatusInfo_Vehicle\n"
"FaultStatusInfo_Overall accel\n"
"FaultStatusInfo_Overall brake\n"
"FaultStatusInfo_Overall steer\n"
"FaultStatusInfo_Overall[] tires\n"
"\n"
"\n"
"================================================================================\n"
"MSG: morai_msgs/FaultStatusInfo_Overall\n"
"bool status\n"
"int32[] fault_subclass\n"
"\n"
"================================================================================\n"
"MSG: morai_msgs/FaultStatusInfo_Sensor\n"
"int32 sensor_id\n"
"FaultStatusInfo_Overall sensor\n"
"\n"
;
  }

  static const char* value(const ::morai_msgs::FaultInjectionSensorSrvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::morai_msgs::FaultInjectionSensorSrvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.response);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FaultInjectionSensorSrvResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::morai_msgs::FaultInjectionSensorSrvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::morai_msgs::FaultInjectionSensorSrvResponse_<ContainerAllocator>& v)
  {
    if (false || !indent.empty())
      s << std::endl;
    s << indent << "response: ";
    Printer< ::morai_msgs::FaultInjection_Response_<ContainerAllocator> >::stream(s, indent + "  ", v.response);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MORAI_MSGS_MESSAGE_FAULTINJECTIONSENSORSRVRESPONSE_H
