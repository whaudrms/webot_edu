// Generated by gencpp from file morai_msgs/MultiPlayEventSrvRequest.msg
// DO NOT EDIT!


#ifndef MORAI_MSGS_MESSAGE_MULTIPLAYEVENTSRVREQUEST_H
#define MORAI_MSGS_MESSAGE_MULTIPLAYEVENTSRVREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <morai_msgs/MultiPlayEventRequest.h>

namespace morai_msgs
{
template <class ContainerAllocator>
struct MultiPlayEventSrvRequest_
{
  typedef MultiPlayEventSrvRequest_<ContainerAllocator> Type;

  MultiPlayEventSrvRequest_()
    : request()  {
    }
  MultiPlayEventSrvRequest_(const ContainerAllocator& _alloc)
    : request(_alloc)  {
  (void)_alloc;
    }



   typedef  ::morai_msgs::MultiPlayEventRequest_<ContainerAllocator>  _request_type;
  _request_type request;





  typedef boost::shared_ptr< ::morai_msgs::MultiPlayEventSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::morai_msgs::MultiPlayEventSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MultiPlayEventSrvRequest_

typedef ::morai_msgs::MultiPlayEventSrvRequest_<std::allocator<void> > MultiPlayEventSrvRequest;

typedef boost::shared_ptr< ::morai_msgs::MultiPlayEventSrvRequest > MultiPlayEventSrvRequestPtr;
typedef boost::shared_ptr< ::morai_msgs::MultiPlayEventSrvRequest const> MultiPlayEventSrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::morai_msgs::MultiPlayEventSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::morai_msgs::MultiPlayEventSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::morai_msgs::MultiPlayEventSrvRequest_<ContainerAllocator1> & lhs, const ::morai_msgs::MultiPlayEventSrvRequest_<ContainerAllocator2> & rhs)
{
  return lhs.request == rhs.request;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::morai_msgs::MultiPlayEventSrvRequest_<ContainerAllocator1> & lhs, const ::morai_msgs::MultiPlayEventSrvRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace morai_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::MultiPlayEventSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::MultiPlayEventSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::MultiPlayEventSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::MultiPlayEventSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::MultiPlayEventSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::MultiPlayEventSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::morai_msgs::MultiPlayEventSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8d5ae069e4cb4123583348dd208092eb";
  }

  static const char* value(const ::morai_msgs::MultiPlayEventSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8d5ae069e4cb4123ULL;
  static const uint64_t static_value2 = 0x583348dd208092ebULL;
};

template<class ContainerAllocator>
struct DataType< ::morai_msgs::MultiPlayEventSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "morai_msgs/MultiPlayEventSrvRequest";
  }

  static const char* value(const ::morai_msgs::MultiPlayEventSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::morai_msgs::MultiPlayEventSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "MultiPlayEventRequest request\n"
"\n"
"================================================================================\n"
"MSG: morai_msgs/MultiPlayEventRequest\n"
"bool requestRespawn\n"
;
  }

  static const char* value(const ::morai_msgs::MultiPlayEventSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::morai_msgs::MultiPlayEventSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.request);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MultiPlayEventSrvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::morai_msgs::MultiPlayEventSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::morai_msgs::MultiPlayEventSrvRequest_<ContainerAllocator>& v)
  {
    if (false || !indent.empty())
      s << std::endl;
    s << indent << "request: ";
    Printer< ::morai_msgs::MultiPlayEventRequest_<ContainerAllocator> >::stream(s, indent + "  ", v.request);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MORAI_MSGS_MESSAGE_MULTIPLAYEVENTSRVREQUEST_H
