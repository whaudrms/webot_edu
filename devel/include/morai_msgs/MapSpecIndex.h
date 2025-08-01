// Generated by gencpp from file morai_msgs/MapSpecIndex.msg
// DO NOT EDIT!


#ifndef MORAI_MSGS_MESSAGE_MAPSPECINDEX_H
#define MORAI_MSGS_MESSAGE_MAPSPECINDEX_H


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
struct MapSpecIndex_
{
  typedef MapSpecIndex_<ContainerAllocator> Type;

  MapSpecIndex_()
    : load_map_data(false)  {
    }
  MapSpecIndex_(const ContainerAllocator& _alloc)
    : load_map_data(false)  {
  (void)_alloc;
    }



   typedef uint8_t _load_map_data_type;
  _load_map_data_type load_map_data;





  typedef boost::shared_ptr< ::morai_msgs::MapSpecIndex_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::morai_msgs::MapSpecIndex_<ContainerAllocator> const> ConstPtr;

}; // struct MapSpecIndex_

typedef ::morai_msgs::MapSpecIndex_<std::allocator<void> > MapSpecIndex;

typedef boost::shared_ptr< ::morai_msgs::MapSpecIndex > MapSpecIndexPtr;
typedef boost::shared_ptr< ::morai_msgs::MapSpecIndex const> MapSpecIndexConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::morai_msgs::MapSpecIndex_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::morai_msgs::MapSpecIndex_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::morai_msgs::MapSpecIndex_<ContainerAllocator1> & lhs, const ::morai_msgs::MapSpecIndex_<ContainerAllocator2> & rhs)
{
  return lhs.load_map_data == rhs.load_map_data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::morai_msgs::MapSpecIndex_<ContainerAllocator1> & lhs, const ::morai_msgs::MapSpecIndex_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace morai_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::MapSpecIndex_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::MapSpecIndex_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::MapSpecIndex_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::MapSpecIndex_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::MapSpecIndex_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::MapSpecIndex_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::morai_msgs::MapSpecIndex_<ContainerAllocator> >
{
  static const char* value()
  {
    return "019993d4829f9fc48833727291488dc1";
  }

  static const char* value(const ::morai_msgs::MapSpecIndex_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x019993d4829f9fc4ULL;
  static const uint64_t static_value2 = 0x8833727291488dc1ULL;
};

template<class ContainerAllocator>
struct DataType< ::morai_msgs::MapSpecIndex_<ContainerAllocator> >
{
  static const char* value()
  {
    return "morai_msgs/MapSpecIndex";
  }

  static const char* value(const ::morai_msgs::MapSpecIndex_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::morai_msgs::MapSpecIndex_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool load_map_data\n"
;
  }

  static const char* value(const ::morai_msgs::MapSpecIndex_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::morai_msgs::MapSpecIndex_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.load_map_data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MapSpecIndex_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::morai_msgs::MapSpecIndex_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::morai_msgs::MapSpecIndex_<ContainerAllocator>& v)
  {
    if (false || !indent.empty())
      s << std::endl;
    s << indent << "load_map_data: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.load_map_data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MORAI_MSGS_MESSAGE_MAPSPECINDEX_H
