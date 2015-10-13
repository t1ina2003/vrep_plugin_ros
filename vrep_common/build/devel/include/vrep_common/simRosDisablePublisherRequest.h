// Generated by gencpp from file vrep_common/simRosDisablePublisherRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSDISABLEPUBLISHERREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSDISABLEPUBLISHERREQUEST_H


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
struct simRosDisablePublisherRequest_
{
  typedef simRosDisablePublisherRequest_<ContainerAllocator> Type;

  simRosDisablePublisherRequest_()
    : topicName()  {
    }
  simRosDisablePublisherRequest_(const ContainerAllocator& _alloc)
    : topicName(_alloc)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _topicName_type;
  _topicName_type topicName;




  typedef boost::shared_ptr< ::vrep_common::simRosDisablePublisherRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosDisablePublisherRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosDisablePublisherRequest_

typedef ::vrep_common::simRosDisablePublisherRequest_<std::allocator<void> > simRosDisablePublisherRequest;

typedef boost::shared_ptr< ::vrep_common::simRosDisablePublisherRequest > simRosDisablePublisherRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosDisablePublisherRequest const> simRosDisablePublisherRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosDisablePublisherRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosDisablePublisherRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/jade/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/jade/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/jade/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/iris/folder/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosDisablePublisherRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosDisablePublisherRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosDisablePublisherRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosDisablePublisherRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosDisablePublisherRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosDisablePublisherRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosDisablePublisherRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "74b3306276d42621c8d9905fba018178";
  }

  static const char* value(const ::vrep_common::simRosDisablePublisherRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x74b3306276d42621ULL;
  static const uint64_t static_value2 = 0xc8d9905fba018178ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosDisablePublisherRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosDisablePublisherRequest";
  }

  static const char* value(const ::vrep_common::simRosDisablePublisherRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosDisablePublisherRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
string topicName\n\
";
  }

  static const char* value(const ::vrep_common::simRosDisablePublisherRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosDisablePublisherRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.topicName);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct simRosDisablePublisherRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosDisablePublisherRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosDisablePublisherRequest_<ContainerAllocator>& v)
  {
    s << indent << "topicName: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.topicName);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSDISABLEPUBLISHERREQUEST_H
