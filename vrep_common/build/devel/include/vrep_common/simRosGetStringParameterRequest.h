// Generated by gencpp from file vrep_common/simRosGetStringParameterRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETSTRINGPARAMETERREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSGETSTRINGPARAMETERREQUEST_H


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
struct simRosGetStringParameterRequest_
{
  typedef simRosGetStringParameterRequest_<ContainerAllocator> Type;

  simRosGetStringParameterRequest_()
    : parameter(0)  {
    }
  simRosGetStringParameterRequest_(const ContainerAllocator& _alloc)
    : parameter(0)  {
    }



   typedef int32_t _parameter_type;
  _parameter_type parameter;




  typedef boost::shared_ptr< ::vrep_common::simRosGetStringParameterRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetStringParameterRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosGetStringParameterRequest_

typedef ::vrep_common::simRosGetStringParameterRequest_<std::allocator<void> > simRosGetStringParameterRequest;

typedef boost::shared_ptr< ::vrep_common::simRosGetStringParameterRequest > simRosGetStringParameterRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetStringParameterRequest const> simRosGetStringParameterRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosGetStringParameterRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosGetStringParameterRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::vrep_common::simRosGetStringParameterRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetStringParameterRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetStringParameterRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetStringParameterRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetStringParameterRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetStringParameterRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetStringParameterRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3b5e34835331aac7a9065c5abd204e3b";
  }

  static const char* value(const ::vrep_common::simRosGetStringParameterRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3b5e34835331aac7ULL;
  static const uint64_t static_value2 = 0xa9065c5abd204e3bULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetStringParameterRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosGetStringParameterRequest";
  }

  static const char* value(const ::vrep_common::simRosGetStringParameterRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetStringParameterRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
int32 parameter\n\
";
  }

  static const char* value(const ::vrep_common::simRosGetStringParameterRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetStringParameterRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.parameter);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct simRosGetStringParameterRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosGetStringParameterRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosGetStringParameterRequest_<ContainerAllocator>& v)
  {
    s << indent << "parameter: ";
    Printer<int32_t>::stream(s, indent + "  ", v.parameter);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETSTRINGPARAMETERREQUEST_H
