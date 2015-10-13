// Generated by gencpp from file vrep_common/simRosGetObjectChild.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETOBJECTCHILD_H
#define VREP_COMMON_MESSAGE_SIMROSGETOBJECTCHILD_H

#include <ros/service_traits.h>


#include <vrep_common/simRosGetObjectChildRequest.h>
#include <vrep_common/simRosGetObjectChildResponse.h>


namespace vrep_common
{

struct simRosGetObjectChild
{

typedef simRosGetObjectChildRequest Request;
typedef simRosGetObjectChildResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct simRosGetObjectChild
} // namespace vrep_common


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vrep_common::simRosGetObjectChild > {
  static const char* value()
  {
    return "2fc24ec13ef12d145e6853d1469b925c";
  }

  static const char* value(const ::vrep_common::simRosGetObjectChild&) { return value(); }
};

template<>
struct DataType< ::vrep_common::simRosGetObjectChild > {
  static const char* value()
  {
    return "vrep_common/simRosGetObjectChild";
  }

  static const char* value(const ::vrep_common::simRosGetObjectChild&) { return value(); }
};


// service_traits::MD5Sum< ::vrep_common::simRosGetObjectChildRequest> should match 
// service_traits::MD5Sum< ::vrep_common::simRosGetObjectChild > 
template<>
struct MD5Sum< ::vrep_common::simRosGetObjectChildRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosGetObjectChild >::value();
  }
  static const char* value(const ::vrep_common::simRosGetObjectChildRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosGetObjectChildRequest> should match 
// service_traits::DataType< ::vrep_common::simRosGetObjectChild > 
template<>
struct DataType< ::vrep_common::simRosGetObjectChildRequest>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosGetObjectChild >::value();
  }
  static const char* value(const ::vrep_common::simRosGetObjectChildRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vrep_common::simRosGetObjectChildResponse> should match 
// service_traits::MD5Sum< ::vrep_common::simRosGetObjectChild > 
template<>
struct MD5Sum< ::vrep_common::simRosGetObjectChildResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosGetObjectChild >::value();
  }
  static const char* value(const ::vrep_common::simRosGetObjectChildResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosGetObjectChildResponse> should match 
// service_traits::DataType< ::vrep_common::simRosGetObjectChild > 
template<>
struct DataType< ::vrep_common::simRosGetObjectChildResponse>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosGetObjectChild >::value();
  }
  static const char* value(const ::vrep_common::simRosGetObjectChildResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETOBJECTCHILD_H
