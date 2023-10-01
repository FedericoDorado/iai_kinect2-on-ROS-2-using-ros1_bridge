// Generated by gencpp from file gb_visual_detection_3d_msgs/BoundingBoxes3d.msg
// DO NOT EDIT!


#ifndef GB_VISUAL_DETECTION_3D_MSGS_MESSAGE_BOUNDINGBOXES3D_H
#define GB_VISUAL_DETECTION_3D_MSGS_MESSAGE_BOUNDINGBOXES3D_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <gb_visual_detection_3d_msgs/BoundingBox3d.h>

namespace gb_visual_detection_3d_msgs
{
template <class ContainerAllocator>
struct BoundingBoxes3d_
{
  typedef BoundingBoxes3d_<ContainerAllocator> Type;

  BoundingBoxes3d_()
    : header()
    , bounding_boxes()  {
    }
  BoundingBoxes3d_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , bounding_boxes(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::gb_visual_detection_3d_msgs::BoundingBox3d_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::gb_visual_detection_3d_msgs::BoundingBox3d_<ContainerAllocator> >> _bounding_boxes_type;
  _bounding_boxes_type bounding_boxes;





  typedef boost::shared_ptr< ::gb_visual_detection_3d_msgs::BoundingBoxes3d_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gb_visual_detection_3d_msgs::BoundingBoxes3d_<ContainerAllocator> const> ConstPtr;

}; // struct BoundingBoxes3d_

typedef ::gb_visual_detection_3d_msgs::BoundingBoxes3d_<std::allocator<void> > BoundingBoxes3d;

typedef boost::shared_ptr< ::gb_visual_detection_3d_msgs::BoundingBoxes3d > BoundingBoxes3dPtr;
typedef boost::shared_ptr< ::gb_visual_detection_3d_msgs::BoundingBoxes3d const> BoundingBoxes3dConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gb_visual_detection_3d_msgs::BoundingBoxes3d_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gb_visual_detection_3d_msgs::BoundingBoxes3d_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::gb_visual_detection_3d_msgs::BoundingBoxes3d_<ContainerAllocator1> & lhs, const ::gb_visual_detection_3d_msgs::BoundingBoxes3d_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.bounding_boxes == rhs.bounding_boxes;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::gb_visual_detection_3d_msgs::BoundingBoxes3d_<ContainerAllocator1> & lhs, const ::gb_visual_detection_3d_msgs::BoundingBoxes3d_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace gb_visual_detection_3d_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::gb_visual_detection_3d_msgs::BoundingBoxes3d_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gb_visual_detection_3d_msgs::BoundingBoxes3d_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gb_visual_detection_3d_msgs::BoundingBoxes3d_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gb_visual_detection_3d_msgs::BoundingBoxes3d_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gb_visual_detection_3d_msgs::BoundingBoxes3d_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gb_visual_detection_3d_msgs::BoundingBoxes3d_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gb_visual_detection_3d_msgs::BoundingBoxes3d_<ContainerAllocator> >
{
  static const char* value()
  {
    return "105285518cb176da52bda2a8cc5bd348";
  }

  static const char* value(const ::gb_visual_detection_3d_msgs::BoundingBoxes3d_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x105285518cb176daULL;
  static const uint64_t static_value2 = 0x52bda2a8cc5bd348ULL;
};

template<class ContainerAllocator>
struct DataType< ::gb_visual_detection_3d_msgs::BoundingBoxes3d_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gb_visual_detection_3d_msgs/BoundingBoxes3d";
  }

  static const char* value(const ::gb_visual_detection_3d_msgs::BoundingBoxes3d_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gb_visual_detection_3d_msgs::BoundingBoxes3d_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"BoundingBox3d[] bounding_boxes\n"
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
"MSG: gb_visual_detection_3d_msgs/BoundingBox3d\n"
"string Class\n"
"float64 probability\n"
"float64 xmin\n"
"float64 ymin\n"
"float64 xmax\n"
"float64 ymax\n"
"float64 zmin\n"
"float64 zmax\n"
;
  }

  static const char* value(const ::gb_visual_detection_3d_msgs::BoundingBoxes3d_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gb_visual_detection_3d_msgs::BoundingBoxes3d_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.bounding_boxes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BoundingBoxes3d_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gb_visual_detection_3d_msgs::BoundingBoxes3d_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gb_visual_detection_3d_msgs::BoundingBoxes3d_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "bounding_boxes[]" << std::endl;
    for (size_t i = 0; i < v.bounding_boxes.size(); ++i)
    {
      s << indent << "  bounding_boxes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::gb_visual_detection_3d_msgs::BoundingBox3d_<ContainerAllocator> >::stream(s, indent + "    ", v.bounding_boxes[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // GB_VISUAL_DETECTION_3D_MSGS_MESSAGE_BOUNDINGBOXES3D_H
