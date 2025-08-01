// Generated by gencpp from file morai_msgs/WoowaDillyEventCmdSrvResponse.msg
// DO NOT EDIT!


#ifndef MORAI_MSGS_MESSAGE_WOOWADILLYEVENTCMDSRVRESPONSE_H
#define MORAI_MSGS_MESSAGE_WOOWADILLYEVENTCMDSRVRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <morai_msgs/DillyCmdResponse.h>

namespace morai_msgs
{
template <class ContainerAllocator>
struct WoowaDillyEventCmdSrvResponse_
{
  typedef WoowaDillyEventCmdSrvResponse_<ContainerAllocator> Type;

  WoowaDillyEventCmdSrvResponse_()
    : response()  {
    }
  WoowaDillyEventCmdSrvResponse_(const ContainerAllocator& _alloc)
    : response(_alloc)  {
  (void)_alloc;
    }



   typedef  ::morai_msgs::DillyCmdResponse_<ContainerAllocator>  _response_type;
  _response_type response;





  typedef boost::shared_ptr< ::morai_msgs::WoowaDillyEventCmdSrvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::morai_msgs::WoowaDillyEventCmdSrvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct WoowaDillyEventCmdSrvResponse_

typedef ::morai_msgs::WoowaDillyEventCmdSrvResponse_<std::allocator<void> > WoowaDillyEventCmdSrvResponse;

typedef boost::shared_ptr< ::morai_msgs::WoowaDillyEventCmdSrvResponse > WoowaDillyEventCmdSrvResponsePtr;
typedef boost::shared_ptr< ::morai_msgs::WoowaDillyEventCmdSrvResponse const> WoowaDillyEventCmdSrvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::morai_msgs::WoowaDillyEventCmdSrvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::morai_msgs::WoowaDillyEventCmdSrvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::morai_msgs::WoowaDillyEventCmdSrvResponse_<ContainerAllocator1> & lhs, const ::morai_msgs::WoowaDillyEventCmdSrvResponse_<ContainerAllocator2> & rhs)
{
  return lhs.response == rhs.response;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::morai_msgs::WoowaDillyEventCmdSrvResponse_<ContainerAllocator1> & lhs, const ::morai_msgs::WoowaDillyEventCmdSrvResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace morai_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::WoowaDillyEventCmdSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::WoowaDillyEventCmdSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::WoowaDillyEventCmdSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::WoowaDillyEventCmdSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::WoowaDillyEventCmdSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::WoowaDillyEventCmdSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::morai_msgs::WoowaDillyEventCmdSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4039c80fa74cc3be5f583706bf97e6b0";
  }

  static const char* value(const ::morai_msgs::WoowaDillyEventCmdSrvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4039c80fa74cc3beULL;
  static const uint64_t static_value2 = 0x5f583706bf97e6b0ULL;
};

template<class ContainerAllocator>
struct DataType< ::morai_msgs::WoowaDillyEventCmdSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "morai_msgs/WoowaDillyEventCmdSrvResponse";
  }

  static const char* value(const ::morai_msgs::WoowaDillyEventCmdSrvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::morai_msgs::WoowaDillyEventCmdSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "DillyCmdResponse response\n"
"\n"
"================================================================================\n"
"MSG: morai_msgs/DillyCmdResponse\n"
"bool result\n"
;
  }

  static const char* value(const ::morai_msgs::WoowaDillyEventCmdSrvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::morai_msgs::WoowaDillyEventCmdSrvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.response);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WoowaDillyEventCmdSrvResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::morai_msgs::WoowaDillyEventCmdSrvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::morai_msgs::WoowaDillyEventCmdSrvResponse_<ContainerAllocator>& v)
  {
    if (false || !indent.empty())
      s << std::endl;
    s << indent << "response: ";
    Printer< ::morai_msgs::DillyCmdResponse_<ContainerAllocator> >::stream(s, indent + "  ", v.response);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MORAI_MSGS_MESSAGE_WOOWADILLYEVENTCMDSRVRESPONSE_H
