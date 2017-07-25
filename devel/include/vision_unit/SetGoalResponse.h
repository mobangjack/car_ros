// Generated by gencpp from file vision_unit/SetGoalResponse.msg
// DO NOT EDIT!


#ifndef VISION_UNIT_MESSAGE_SETGOALRESPONSE_H
#define VISION_UNIT_MESSAGE_SETGOALRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseStamped.h>

namespace vision_unit
{
template <class ContainerAllocator>
struct SetGoalResponse_
{
  typedef SetGoalResponse_<ContainerAllocator> Type;

  SetGoalResponse_()
    : current_pose()  {
    }
  SetGoalResponse_(const ContainerAllocator& _alloc)
    : current_pose(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _current_pose_type;
  _current_pose_type current_pose;




  typedef boost::shared_ptr< ::vision_unit::SetGoalResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vision_unit::SetGoalResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetGoalResponse_

typedef ::vision_unit::SetGoalResponse_<std::allocator<void> > SetGoalResponse;

typedef boost::shared_ptr< ::vision_unit::SetGoalResponse > SetGoalResponsePtr;
typedef boost::shared_ptr< ::vision_unit::SetGoalResponse const> SetGoalResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vision_unit::SetGoalResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vision_unit::SetGoalResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vision_unit

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'move_base_msgs': ['/opt/ros/kinetic/share/move_base_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'vision_unit': ['/home/bj/workspace/ros/car_ros/src/vision_unit/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vision_unit::SetGoalResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vision_unit::SetGoalResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vision_unit::SetGoalResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vision_unit::SetGoalResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vision_unit::SetGoalResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vision_unit::SetGoalResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vision_unit::SetGoalResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dd7058fae6e1bf2400513fe092a44c92";
  }

  static const char* value(const ::vision_unit::SetGoalResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdd7058fae6e1bf24ULL;
  static const uint64_t static_value2 = 0x00513fe092a44c92ULL;
};

template<class ContainerAllocator>
struct DataType< ::vision_unit::SetGoalResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vision_unit/SetGoalResponse";
  }

  static const char* value(const ::vision_unit::SetGoalResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vision_unit::SetGoalResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/PoseStamped current_pose\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
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
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
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
";
  }

  static const char* value(const ::vision_unit::SetGoalResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vision_unit::SetGoalResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.current_pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetGoalResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vision_unit::SetGoalResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vision_unit::SetGoalResponse_<ContainerAllocator>& v)
  {
    s << indent << "current_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.current_pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VISION_UNIT_MESSAGE_SETGOALRESPONSE_H
