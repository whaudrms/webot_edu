// Generated by gencpp from file morai_msgs/SyncModeCmdResponse.msg
// DO NOT EDIT!


#ifndef MORAI_MSGS_MESSAGE_SYNCMODECMDRESPONSE_H
#define MORAI_MSGS_MESSAGE_SYNCMODECMDRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace morai_msgs
{
template <class ContainerAllocator>
struct SyncModeCmdResponse_
{
  typedef SyncModeCmdResponse_<ContainerAllocator> Type;

  SyncModeCmdResponse_()
    : user_id()
    , frame(0)
    , result(false)
    , time_step(0)  {
    }
  SyncModeCmdResponse_(const ContainerAllocator& _alloc)
    : user_id(_alloc)
    , frame(0)
    , result(false)
    , time_step(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _user_id_type;
  _user_id_type user_id;

   typedef uint64_t _frame_type;
  _frame_type frame;

   typedef uint8_t _result_type;
  _result_type result;

   typedef uint32_t _time_step_type;
  _time_step_type time_step;





  typedef boost::shared_ptr< ::morai_msgs::SyncModeCmdResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::morai_msgs::SyncModeCmdResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SyncModeCmdResponse_

typedef ::morai_msgs::SyncModeCmdResponse_<std::allocator<void> > SyncModeCmdResponse;

typedef boost::shared_ptr< ::morai_msgs::SyncModeCmdResponse > SyncModeCmdResponsePtr;
typedef boost::shared_ptr< ::morai_msgs::SyncModeCmdResponse const> SyncModeCmdResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::morai_msgs::SyncModeCmdResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::morai_msgs::SyncModeCmdResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::morai_msgs::SyncModeCmdResponse_<ContainerAllocator1> & lhs, const ::morai_msgs::SyncModeCmdResponse_<ContainerAllocator2> & rhs)
{
  return lhs.user_id == rhs.user_id &&
    lhs.frame == rhs.frame &&
    lhs.result == rhs.result &&
    lhs.time_step == rhs.time_step;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::morai_msgs::SyncModeCmdResponse_<ContainerAllocator1> & lhs, const ::morai_msgs::SyncModeCmdResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace morai_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::SyncModeCmdResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::SyncModeCmdResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::SyncModeCmdResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::SyncModeCmdResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::SyncModeCmdResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::SyncModeCmdResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::morai_msgs::SyncModeCmdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ea7255c2910d9b74a04977095711f9e5";
  }

  static const char* value(const ::morai_msgs::SyncModeCmdResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xea7255c2910d9b74ULL;
  static const uint64_t static_value2 = 0xa04977095711f9e5ULL;
};

template<class ContainerAllocator>
struct DataType< ::morai_msgs::SyncModeCmdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "morai_msgs/SyncModeCmdResponse";
  }

  static const char* value(const ::morai_msgs::SyncModeCmdResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::morai_msgs::SyncModeCmdResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string user_id\n"
"uint64 frame\n"
"bool result\n"
"uint32 time_step\n"
;
  }

  static const char* value(const ::morai_msgs::SyncModeCmdResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::morai_msgs::SyncModeCmdResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.user_id);
      stream.next(m.frame);
      stream.next(m.result);
      stream.next(m.time_step);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SyncModeCmdResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::morai_msgs::SyncModeCmdResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::morai_msgs::SyncModeCmdResponse_<ContainerAllocator>& v)
  {
    if (false || !indent.empty())
      s << std::endl;
    s << indent << "user_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.user_id);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "frame: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.frame);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "time_step: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.time_step);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MORAI_MSGS_MESSAGE_SYNCMODECMDRESPONSE_H
