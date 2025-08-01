// Generated by gencpp from file morai_msgs/Transforms.msg
// DO NOT EDIT!


#ifndef MORAI_MSGS_MESSAGE_TRANSFORMS_H
#define MORAI_MSGS_MESSAGE_TRANSFORMS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/TransformStamped.h>

namespace morai_msgs
{
template <class ContainerAllocator>
struct Transforms_
{
  typedef Transforms_<ContainerAllocator> Type;

  Transforms_()
    : transforms()  {
    }
  Transforms_(const ContainerAllocator& _alloc)
    : transforms(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::geometry_msgs::TransformStamped_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::TransformStamped_<ContainerAllocator> >> _transforms_type;
  _transforms_type transforms;





  typedef boost::shared_ptr< ::morai_msgs::Transforms_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::morai_msgs::Transforms_<ContainerAllocator> const> ConstPtr;

}; // struct Transforms_

typedef ::morai_msgs::Transforms_<std::allocator<void> > Transforms;

typedef boost::shared_ptr< ::morai_msgs::Transforms > TransformsPtr;
typedef boost::shared_ptr< ::morai_msgs::Transforms const> TransformsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::morai_msgs::Transforms_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::morai_msgs::Transforms_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::morai_msgs::Transforms_<ContainerAllocator1> & lhs, const ::morai_msgs::Transforms_<ContainerAllocator2> & rhs)
{
  return lhs.transforms == rhs.transforms;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::morai_msgs::Transforms_<ContainerAllocator1> & lhs, const ::morai_msgs::Transforms_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace morai_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::Transforms_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::Transforms_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::Transforms_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::Transforms_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::Transforms_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::Transforms_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::morai_msgs::Transforms_<ContainerAllocator> >
{
  static const char* value()
  {
    return "94810edda583a504dfda3829e70d7eec";
  }

  static const char* value(const ::morai_msgs::Transforms_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x94810edda583a504ULL;
  static const uint64_t static_value2 = 0xdfda3829e70d7eecULL;
};

template<class ContainerAllocator>
struct DataType< ::morai_msgs::Transforms_<ContainerAllocator> >
{
  static const char* value()
  {
    return "morai_msgs/Transforms";
  }

  static const char* value(const ::morai_msgs::Transforms_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::morai_msgs::Transforms_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/TransformStamped[] transforms\n"
"================================================================================\n"
"MSG: geometry_msgs/TransformStamped\n"
"# This expresses a transform from coordinate frame header.frame_id\n"
"# to the coordinate frame child_frame_id\n"
"#\n"
"# This message is mostly used by the \n"
"# <a href=\"http://wiki.ros.org/tf\">tf</a> package. \n"
"# See its documentation for more information.\n"
"\n"
"Header header\n"
"string child_frame_id # the frame id of the child frame\n"
"Transform transform\n"
"\n"
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
"MSG: geometry_msgs/Transform\n"
"# This represents the transform between two coordinate frames in free space.\n"
"\n"
"Vector3 translation\n"
"Quaternion rotation\n"
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
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::morai_msgs::Transforms_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::morai_msgs::Transforms_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.transforms);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Transforms_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::morai_msgs::Transforms_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::morai_msgs::Transforms_<ContainerAllocator>& v)
  {
    if (false || !indent.empty())
      s << std::endl;
    s << indent << "transforms: ";
    if (v.transforms.empty() || false)
      s << "[";
    for (size_t i = 0; i < v.transforms.size(); ++i)
    {
      if (false && i > 0)
        s << ", ";
      else if (!false)
        s << std::endl << indent << "  -";
      Printer< ::geometry_msgs::TransformStamped_<ContainerAllocator> >::stream(s, false ? std::string() : indent + "    ", v.transforms[i]);
    }
    if (v.transforms.empty() || false)
      s << "]";
  }
};

} // namespace message_operations
} // namespace ros

#endif // MORAI_MSGS_MESSAGE_TRANSFORMS_H
