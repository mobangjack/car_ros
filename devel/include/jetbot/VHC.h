// Generated by gencpp from file jetbot/VHC.msg
// DO NOT EDIT!


#ifndef JETBOT_MESSAGE_VHC_H
#define JETBOT_MESSAGE_VHC_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace jetbot
{
template <class ContainerAllocator>
struct VHC_
{
  typedef VHC_<ContainerAllocator> Type;

  VHC_()
    : frame_id(0)
    , data()  {
    }
  VHC_(const ContainerAllocator& _alloc)
    : frame_id(0)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef uint32_t _frame_id_type;
  _frame_id_type frame_id;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _data_type;
  _data_type data;




  typedef boost::shared_ptr< ::jetbot::VHC_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jetbot::VHC_<ContainerAllocator> const> ConstPtr;

}; // struct VHC_

typedef ::jetbot::VHC_<std::allocator<void> > VHC;

typedef boost::shared_ptr< ::jetbot::VHC > VHCPtr;
typedef boost::shared_ptr< ::jetbot::VHC const> VHCConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jetbot::VHC_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jetbot::VHC_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace jetbot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'jetbot': ['/home/bj/workspace/ros/car_ros/src/jetbot/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::jetbot::VHC_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jetbot::VHC_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jetbot::VHC_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jetbot::VHC_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jetbot::VHC_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jetbot::VHC_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jetbot::VHC_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6f14d77e44ec6f5eac4bc41cb3f06732";
  }

  static const char* value(const ::jetbot::VHC_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6f14d77e44ec6f5eULL;
  static const uint64_t static_value2 = 0xac4bc41cb3f06732ULL;
};

template<class ContainerAllocator>
struct DataType< ::jetbot::VHC_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jetbot/VHC";
  }

  static const char* value(const ::jetbot::VHC_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jetbot::VHC_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 frame_id\n\
uint8[] data\n\
";
  }

  static const char* value(const ::jetbot::VHC_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jetbot::VHC_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.frame_id);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VHC_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jetbot::VHC_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jetbot::VHC_<ContainerAllocator>& v)
  {
    s << indent << "frame_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.frame_id);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // JETBOT_MESSAGE_VHC_H
