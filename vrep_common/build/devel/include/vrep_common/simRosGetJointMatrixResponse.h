// Generated by gencpp from file vrep_common/simRosGetJointMatrixResponse.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETJOINTMATRIXRESPONSE_H
#define VREP_COMMON_MESSAGE_SIMROSGETJOINTMATRIXRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/TransformStamped.h>

namespace vrep_common
{
template <class ContainerAllocator>
struct simRosGetJointMatrixResponse_
{
  typedef simRosGetJointMatrixResponse_<ContainerAllocator> Type;

  simRosGetJointMatrixResponse_()
    : result(0)
    , transform()  {
    }
  simRosGetJointMatrixResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , transform(_alloc)  {
    }



   typedef int32_t _result_type;
  _result_type result;

   typedef  ::geometry_msgs::TransformStamped_<ContainerAllocator>  _transform_type;
  _transform_type transform;




  typedef boost::shared_ptr< ::vrep_common::simRosGetJointMatrixResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetJointMatrixResponse_<ContainerAllocator> const> ConstPtr;

}; // struct simRosGetJointMatrixResponse_

typedef ::vrep_common::simRosGetJointMatrixResponse_<std::allocator<void> > simRosGetJointMatrixResponse;

typedef boost::shared_ptr< ::vrep_common::simRosGetJointMatrixResponse > simRosGetJointMatrixResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetJointMatrixResponse const> simRosGetJointMatrixResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosGetJointMatrixResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosGetJointMatrixResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::vrep_common::simRosGetJointMatrixResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetJointMatrixResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetJointMatrixResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetJointMatrixResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetJointMatrixResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetJointMatrixResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetJointMatrixResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ea4c0896312fb5454e09fdc654d37fab";
  }

  static const char* value(const ::vrep_common::simRosGetJointMatrixResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xea4c0896312fb545ULL;
  static const uint64_t static_value2 = 0x4e09fdc654d37fabULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetJointMatrixResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosGetJointMatrixResponse";
  }

  static const char* value(const ::vrep_common::simRosGetJointMatrixResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetJointMatrixResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n\
geometry_msgs/TransformStamped transform\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/TransformStamped\n\
# This expresses a transform from coordinate frame header.frame_id\n\
# to the coordinate frame child_frame_id\n\
#\n\
# This message is mostly used by the \n\
# <a href=\"http://wiki.ros.org/tf\">tf</a> package. \n\
# See its documentation for more information.\n\
\n\
Header header\n\
string child_frame_id # the frame id of the child frame\n\
Transform transform\n\
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
MSG: geometry_msgs/Transform\n\
# This represents the transform between two coordinate frames in free space.\n\
\n\
Vector3 translation\n\
Quaternion rotation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
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

  static const char* value(const ::vrep_common::simRosGetJointMatrixResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetJointMatrixResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.transform);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct simRosGetJointMatrixResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosGetJointMatrixResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosGetJointMatrixResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "transform: ";
    s << std::endl;
    Printer< ::geometry_msgs::TransformStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.transform);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETJOINTMATRIXRESPONSE_H
