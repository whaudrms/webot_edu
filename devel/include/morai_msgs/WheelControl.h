// Generated by gencpp from file morai_msgs/WheelControl.msg
// DO NOT EDIT!


#ifndef MORAI_MSGS_MESSAGE_WHEELCONTROL_H
#define MORAI_MSGS_MESSAGE_WHEELCONTROL_H


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
struct WheelControl_
{
  typedef WheelControl_<ContainerAllocator> Type;

  WheelControl_()
    : wheel_steering_angle()
    , wheel_rpm()  {
      wheel_steering_angle.assign(0.0);

      wheel_rpm.assign(0.0);
  }
  WheelControl_(const ContainerAllocator& _alloc)
    : wheel_steering_angle()
    , wheel_rpm()  {
  (void)_alloc;
      wheel_steering_angle.assign(0.0);

      wheel_rpm.assign(0.0);
  }



   typedef boost::array<float, 4>  _wheel_steering_angle_type;
  _wheel_steering_angle_type wheel_steering_angle;

   typedef boost::array<float, 4>  _wheel_rpm_type;
  _wheel_rpm_type wheel_rpm;





  typedef boost::shared_ptr< ::morai_msgs::WheelControl_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::morai_msgs::WheelControl_<ContainerAllocator> const> ConstPtr;

}; // struct WheelControl_

typedef ::morai_msgs::WheelControl_<std::allocator<void> > WheelControl;

typedef boost::shared_ptr< ::morai_msgs::WheelControl > WheelControlPtr;
typedef boost::shared_ptr< ::morai_msgs::WheelControl const> WheelControlConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::morai_msgs::WheelControl_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::morai_msgs::WheelControl_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::morai_msgs::WheelControl_<ContainerAllocator1> & lhs, const ::morai_msgs::WheelControl_<ContainerAllocator2> & rhs)
{
  return lhs.wheel_steering_angle == rhs.wheel_steering_angle &&
    lhs.wheel_rpm == rhs.wheel_rpm;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::morai_msgs::WheelControl_<ContainerAllocator1> & lhs, const ::morai_msgs::WheelControl_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace morai_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::WheelControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::WheelControl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::WheelControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::WheelControl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::WheelControl_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::WheelControl_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::morai_msgs::WheelControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d7de35c959ef804c8f372b8c6582c692";
  }

  static const char* value(const ::morai_msgs::WheelControl_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd7de35c959ef804cULL;
  static const uint64_t static_value2 = 0x8f372b8c6582c692ULL;
};

template<class ContainerAllocator>
struct DataType< ::morai_msgs::WheelControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "morai_msgs/WheelControl";
  }

  static const char* value(const ::morai_msgs::WheelControl_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::morai_msgs::WheelControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[4] wheel_steering_angle\n"
"float32[4] wheel_rpm\n"
;
  }

  static const char* value(const ::morai_msgs::WheelControl_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::morai_msgs::WheelControl_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.wheel_steering_angle);
      stream.next(m.wheel_rpm);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WheelControl_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::morai_msgs::WheelControl_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::morai_msgs::WheelControl_<ContainerAllocator>& v)
  {
    if (false || !indent.empty())
      s << std::endl;
    s << indent << "wheel_steering_angle: ";
    if (v.wheel_steering_angle.empty() || true)
      s << "[";
    for (size_t i = 0; i < v.wheel_steering_angle.size(); ++i)
    {
      if (true && i > 0)
        s << ", ";
      else if (!true)
        s << std::endl << indent << "  -";
      Printer<float>::stream(s, true ? std::string() : indent + "    ", v.wheel_steering_angle[i]);
    }
    if (v.wheel_steering_angle.empty() || true)
      s << "]";
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "wheel_rpm: ";
    if (v.wheel_rpm.empty() || true)
      s << "[";
    for (size_t i = 0; i < v.wheel_rpm.size(); ++i)
    {
      if (true && i > 0)
        s << ", ";
      else if (!true)
        s << std::endl << indent << "  -";
      Printer<float>::stream(s, true ? std::string() : indent + "    ", v.wheel_rpm[i]);
    }
    if (v.wheel_rpm.empty() || true)
      s << "]";
  }
};

} // namespace message_operations
} // namespace ros

#endif // MORAI_MSGS_MESSAGE_WHEELCONTROL_H
