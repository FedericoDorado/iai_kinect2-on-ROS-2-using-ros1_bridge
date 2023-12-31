// Generated by gencpp from file darknet_ros_msgs/PCAValues.msg
// DO NOT EDIT!


#ifndef DARKNET_ROS_MSGS_MESSAGE_PCAVALUES_H
#define DARKNET_ROS_MSGS_MESSAGE_PCAVALUES_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Vector3.h>

namespace darknet_ros_msgs
{
template <class ContainerAllocator>
struct PCAValues_
{
  typedef PCAValues_<ContainerAllocator> Type;

  PCAValues_()
    : header()
    , eigen_vectors()
    , eigen_values()  {
    }
  PCAValues_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , eigen_vectors(_alloc)
    , eigen_values(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::geometry_msgs::Vector3_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::geometry_msgs::Vector3_<ContainerAllocator> >> _eigen_vectors_type;
  _eigen_vectors_type eigen_vectors;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _eigen_values_type;
  _eigen_values_type eigen_values;





  typedef boost::shared_ptr< ::darknet_ros_msgs::PCAValues_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::darknet_ros_msgs::PCAValues_<ContainerAllocator> const> ConstPtr;

}; // struct PCAValues_

typedef ::darknet_ros_msgs::PCAValues_<std::allocator<void> > PCAValues;

typedef boost::shared_ptr< ::darknet_ros_msgs::PCAValues > PCAValuesPtr;
typedef boost::shared_ptr< ::darknet_ros_msgs::PCAValues const> PCAValuesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::darknet_ros_msgs::PCAValues_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::darknet_ros_msgs::PCAValues_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::darknet_ros_msgs::PCAValues_<ContainerAllocator1> & lhs, const ::darknet_ros_msgs::PCAValues_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.eigen_vectors == rhs.eigen_vectors &&
    lhs.eigen_values == rhs.eigen_values;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::darknet_ros_msgs::PCAValues_<ContainerAllocator1> & lhs, const ::darknet_ros_msgs::PCAValues_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace darknet_ros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::darknet_ros_msgs::PCAValues_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::darknet_ros_msgs::PCAValues_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::darknet_ros_msgs::PCAValues_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::darknet_ros_msgs::PCAValues_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::darknet_ros_msgs::PCAValues_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::darknet_ros_msgs::PCAValues_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::darknet_ros_msgs::PCAValues_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d1d4f27c6cd880ce3af6b3f9b987ae98";
  }

  static const char* value(const ::darknet_ros_msgs::PCAValues_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd1d4f27c6cd880ceULL;
  static const uint64_t static_value2 = 0x3af6b3f9b987ae98ULL;
};

template<class ContainerAllocator>
struct DataType< ::darknet_ros_msgs::PCAValues_<ContainerAllocator> >
{
  static const char* value()
  {
    return "darknet_ros_msgs/PCAValues";
  }

  static const char* value(const ::darknet_ros_msgs::PCAValues_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::darknet_ros_msgs::PCAValues_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"\n"
"geometry_msgs/Vector3[] eigen_vectors\n"
"float32[] eigen_values\n"
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

  static const char* value(const ::darknet_ros_msgs::PCAValues_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::darknet_ros_msgs::PCAValues_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.eigen_vectors);
      stream.next(m.eigen_values);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PCAValues_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::darknet_ros_msgs::PCAValues_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::darknet_ros_msgs::PCAValues_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "eigen_vectors[]" << std::endl;
    for (size_t i = 0; i < v.eigen_vectors.size(); ++i)
    {
      s << indent << "  eigen_vectors[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "    ", v.eigen_vectors[i]);
    }
    s << indent << "eigen_values[]" << std::endl;
    for (size_t i = 0; i < v.eigen_values.size(); ++i)
    {
      s << indent << "  eigen_values[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.eigen_values[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DARKNET_ROS_MSGS_MESSAGE_PCAVALUES_H
