// Generated by gencpp from file vrep_common/simRosSetUIButtonPropertyRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSSETUIBUTTONPROPERTYREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSSETUIBUTTONPROPERTYREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vrep_common
{
template <class ContainerAllocator>
struct simRosSetUIButtonPropertyRequest_
{
  typedef simRosSetUIButtonPropertyRequest_<ContainerAllocator> Type;

  simRosSetUIButtonPropertyRequest_()
    : uiHandle(0)
    , buttonID(0)
    , propertyValue(0)  {
    }
  simRosSetUIButtonPropertyRequest_(const ContainerAllocator& _alloc)
    : uiHandle(0)
    , buttonID(0)
    , propertyValue(0)  {
    }



   typedef int32_t _uiHandle_type;
  _uiHandle_type uiHandle;

   typedef int32_t _buttonID_type;
  _buttonID_type buttonID;

   typedef int32_t _propertyValue_type;
  _propertyValue_type propertyValue;




  typedef boost::shared_ptr< ::vrep_common::simRosSetUIButtonPropertyRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosSetUIButtonPropertyRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosSetUIButtonPropertyRequest_

typedef ::vrep_common::simRosSetUIButtonPropertyRequest_<std::allocator<void> > simRosSetUIButtonPropertyRequest;

typedef boost::shared_ptr< ::vrep_common::simRosSetUIButtonPropertyRequest > simRosSetUIButtonPropertyRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosSetUIButtonPropertyRequest const> simRosSetUIButtonPropertyRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosSetUIButtonPropertyRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosSetUIButtonPropertyRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/jade/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/jade/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/jade/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/iris/folder/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosSetUIButtonPropertyRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosSetUIButtonPropertyRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosSetUIButtonPropertyRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosSetUIButtonPropertyRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosSetUIButtonPropertyRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosSetUIButtonPropertyRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosSetUIButtonPropertyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bd54461d9cf9c63ea0374c072626f329";
  }

  static const char* value(const ::vrep_common::simRosSetUIButtonPropertyRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbd54461d9cf9c63eULL;
  static const uint64_t static_value2 = 0xa0374c072626f329ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosSetUIButtonPropertyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosSetUIButtonPropertyRequest";
  }

  static const char* value(const ::vrep_common::simRosSetUIButtonPropertyRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosSetUIButtonPropertyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
int32 uiHandle\n\
int32 buttonID\n\
int32 propertyValue\n\
";
  }

  static const char* value(const ::vrep_common::simRosSetUIButtonPropertyRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosSetUIButtonPropertyRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.uiHandle);
      stream.next(m.buttonID);
      stream.next(m.propertyValue);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct simRosSetUIButtonPropertyRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosSetUIButtonPropertyRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosSetUIButtonPropertyRequest_<ContainerAllocator>& v)
  {
    s << indent << "uiHandle: ";
    Printer<int32_t>::stream(s, indent + "  ", v.uiHandle);
    s << indent << "buttonID: ";
    Printer<int32_t>::stream(s, indent + "  ", v.buttonID);
    s << indent << "propertyValue: ";
    Printer<int32_t>::stream(s, indent + "  ", v.propertyValue);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSSETUIBUTTONPROPERTYREQUEST_H
