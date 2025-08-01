// Generated by gencpp from file morai_msgs/SetTrafficLight.msg
// DO NOT EDIT!


#ifndef MORAI_MSGS_MESSAGE_SETTRAFFICLIGHT_H
#define MORAI_MSGS_MESSAGE_SETTRAFFICLIGHT_H


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
struct SetTrafficLight_
{
  typedef SetTrafficLight_<ContainerAllocator> Type;

  SetTrafficLight_()
    : trafficLightIndex()
    , trafficLightStatus(0)  {
    }
  SetTrafficLight_(const ContainerAllocator& _alloc)
    : trafficLightIndex(_alloc)
    , trafficLightStatus(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _trafficLightIndex_type;
  _trafficLightIndex_type trafficLightIndex;

   typedef int16_t _trafficLightStatus_type;
  _trafficLightStatus_type trafficLightStatus;





  typedef boost::shared_ptr< ::morai_msgs::SetTrafficLight_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::morai_msgs::SetTrafficLight_<ContainerAllocator> const> ConstPtr;

}; // struct SetTrafficLight_

typedef ::morai_msgs::SetTrafficLight_<std::allocator<void> > SetTrafficLight;

typedef boost::shared_ptr< ::morai_msgs::SetTrafficLight > SetTrafficLightPtr;
typedef boost::shared_ptr< ::morai_msgs::SetTrafficLight const> SetTrafficLightConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::morai_msgs::SetTrafficLight_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::morai_msgs::SetTrafficLight_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::morai_msgs::SetTrafficLight_<ContainerAllocator1> & lhs, const ::morai_msgs::SetTrafficLight_<ContainerAllocator2> & rhs)
{
  return lhs.trafficLightIndex == rhs.trafficLightIndex &&
    lhs.trafficLightStatus == rhs.trafficLightStatus;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::morai_msgs::SetTrafficLight_<ContainerAllocator1> & lhs, const ::morai_msgs::SetTrafficLight_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace morai_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::SetTrafficLight_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::SetTrafficLight_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::SetTrafficLight_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::SetTrafficLight_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::SetTrafficLight_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::SetTrafficLight_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::morai_msgs::SetTrafficLight_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bd27357f4982612d0e2067eb726f8617";
  }

  static const char* value(const ::morai_msgs::SetTrafficLight_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbd27357f4982612dULL;
  static const uint64_t static_value2 = 0x0e2067eb726f8617ULL;
};

template<class ContainerAllocator>
struct DataType< ::morai_msgs::SetTrafficLight_<ContainerAllocator> >
{
  static const char* value()
  {
    return "morai_msgs/SetTrafficLight";
  }

  static const char* value(const ::morai_msgs::SetTrafficLight_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::morai_msgs::SetTrafficLight_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string trafficLightIndex\n"
"int16 trafficLightStatus\n"
;
  }

  static const char* value(const ::morai_msgs::SetTrafficLight_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::morai_msgs::SetTrafficLight_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.trafficLightIndex);
      stream.next(m.trafficLightStatus);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetTrafficLight_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::morai_msgs::SetTrafficLight_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::morai_msgs::SetTrafficLight_<ContainerAllocator>& v)
  {
    if (false || !indent.empty())
      s << std::endl;
    s << indent << "trafficLightIndex: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.trafficLightIndex);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "trafficLightStatus: ";
    Printer<int16_t>::stream(s, indent + "  ", v.trafficLightStatus);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MORAI_MSGS_MESSAGE_SETTRAFFICLIGHT_H
