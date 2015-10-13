// Generated by gencpp from file vrep_common/simRosGetLastErrorsResponse.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETLASTERRORSRESPONSE_H
#define VREP_COMMON_MESSAGE_SIMROSGETLASTERRORSRESPONSE_H


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
struct simRosGetLastErrorsResponse_
{
  typedef simRosGetLastErrorsResponse_<ContainerAllocator> Type;

  simRosGetLastErrorsResponse_()
    : errorCnt(0)
    , errorStrings()  {
    }
  simRosGetLastErrorsResponse_(const ContainerAllocator& _alloc)
    : errorCnt(0)
    , errorStrings(_alloc)  {
    }



   typedef int32_t _errorCnt_type;
  _errorCnt_type errorCnt;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _errorStrings_type;
  _errorStrings_type errorStrings;




  typedef boost::shared_ptr< ::vrep_common::simRosGetLastErrorsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetLastErrorsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct simRosGetLastErrorsResponse_

typedef ::vrep_common::simRosGetLastErrorsResponse_<std::allocator<void> > simRosGetLastErrorsResponse;

typedef boost::shared_ptr< ::vrep_common::simRosGetLastErrorsResponse > simRosGetLastErrorsResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetLastErrorsResponse const> simRosGetLastErrorsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosGetLastErrorsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosGetLastErrorsResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::vrep_common::simRosGetLastErrorsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetLastErrorsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetLastErrorsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetLastErrorsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetLastErrorsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetLastErrorsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetLastErrorsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "165502f1a9cdf7b50941ef103382dea5";
  }

  static const char* value(const ::vrep_common::simRosGetLastErrorsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x165502f1a9cdf7b5ULL;
  static const uint64_t static_value2 = 0x0941ef103382dea5ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetLastErrorsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosGetLastErrorsResponse";
  }

  static const char* value(const ::vrep_common::simRosGetLastErrorsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetLastErrorsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 errorCnt\n\
string errorStrings\n\
\n\
";
  }

  static const char* value(const ::vrep_common::simRosGetLastErrorsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetLastErrorsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.errorCnt);
      stream.next(m.errorStrings);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct simRosGetLastErrorsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosGetLastErrorsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosGetLastErrorsResponse_<ContainerAllocator>& v)
  {
    s << indent << "errorCnt: ";
    Printer<int32_t>::stream(s, indent + "  ", v.errorCnt);
    s << indent << "errorStrings: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.errorStrings);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETLASTERRORSRESPONSE_H
