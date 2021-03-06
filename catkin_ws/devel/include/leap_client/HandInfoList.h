// Generated by gencpp from file leap_client/HandInfoList.msg
// DO NOT EDIT!


#ifndef LEAP_CLIENT_MESSAGE_HANDINFOLIST_H
#define LEAP_CLIENT_MESSAGE_HANDINFOLIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <leap_client/HandInfo.h>

namespace leap_client
{
template <class ContainerAllocator>
struct HandInfoList_
{
  typedef HandInfoList_<ContainerAllocator> Type;

  HandInfoList_()
    : header()
    , hands()  {
    }
  HandInfoList_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , hands(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::leap_client::HandInfo_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::leap_client::HandInfo_<ContainerAllocator> >::other >  _hands_type;
  _hands_type hands;




  typedef boost::shared_ptr< ::leap_client::HandInfoList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::leap_client::HandInfoList_<ContainerAllocator> const> ConstPtr;

}; // struct HandInfoList_

typedef ::leap_client::HandInfoList_<std::allocator<void> > HandInfoList;

typedef boost::shared_ptr< ::leap_client::HandInfoList > HandInfoListPtr;
typedef boost::shared_ptr< ::leap_client::HandInfoList const> HandInfoListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::leap_client::HandInfoList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::leap_client::HandInfoList_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace leap_client

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'leap_client': ['/home/dzhi/catkin_ws/src/leap_client/msg', '/home/dzhi/catkin_ws/src/leap_client/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::leap_client::HandInfoList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::leap_client::HandInfoList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::leap_client::HandInfoList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::leap_client::HandInfoList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::leap_client::HandInfoList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::leap_client::HandInfoList_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::leap_client::HandInfoList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b4ef32c1e3c41baa6a08353a13192a72";
  }

  static const char* value(const ::leap_client::HandInfoList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb4ef32c1e3c41baaULL;
  static const uint64_t static_value2 = 0x6a08353a13192a72ULL;
};

template<class ContainerAllocator>
struct DataType< ::leap_client::HandInfoList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "leap_client/HandInfoList";
  }

  static const char* value(const ::leap_client::HandInfoList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::leap_client::HandInfoList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
HandInfo[] hands\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: leap_client/HandInfo\n\
std_msgs/Header header\n\
int32 id\n\
float32 time_visible\n\
geometry_msgs/Pose pose\n\
geometry_msgs/Vector3 velocity\n\
float32 sphere_radius\n\
geometry_msgs/Point sphere_center\n\
geometry_msgs/Pose stabilized_pose\n\
FingerInfo[] fingers\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: leap_client/FingerInfo\n\
std_msgs/Header header\n\
int32 hand_id\n\
int32 id\n\
float32 time_visible\n\
geometry_msgs/Point tip_position\n\
geometry_msgs/Vector3 tip_velocity\n\
geometry_msgs/Vector3 pointing_direction\n\
geometry_msgs/Point stabilized_tip_position\n\
";
  }

  static const char* value(const ::leap_client::HandInfoList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::leap_client::HandInfoList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.hands);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HandInfoList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::leap_client::HandInfoList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::leap_client::HandInfoList_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "hands[]" << std::endl;
    for (size_t i = 0; i < v.hands.size(); ++i)
    {
      s << indent << "  hands[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::leap_client::HandInfo_<ContainerAllocator> >::stream(s, indent + "    ", v.hands[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // LEAP_CLIENT_MESSAGE_HANDINFOLIST_H
