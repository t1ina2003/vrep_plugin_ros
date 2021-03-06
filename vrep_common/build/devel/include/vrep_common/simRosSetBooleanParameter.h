// Generated by gencpp from file vrep_common/simRosSetBooleanParameter.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSSETBOOLEANPARAMETER_H
#define VREP_COMMON_MESSAGE_SIMROSSETBOOLEANPARAMETER_H

#include <ros/service_traits.h>


#include <vrep_common/simRosSetBooleanParameterRequest.h>
#include <vrep_common/simRosSetBooleanParameterResponse.h>


namespace vrep_common
{

struct simRosSetBooleanParameter
{

typedef simRosSetBooleanParameterRequest Request;
typedef simRosSetBooleanParameterResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct simRosSetBooleanParameter
} // namespace vrep_common


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vrep_common::simRosSetBooleanParameter > {
  static const char* value()
  {
    return "48226e7166296d8d45f6626e588efb5a";
  }

  static const char* value(const ::vrep_common::simRosSetBooleanParameter&) { return value(); }
};

template<>
struct DataType< ::vrep_common::simRosSetBooleanParameter > {
  static const char* value()
  {
    return "vrep_common/simRosSetBooleanParameter";
  }

  static const char* value(const ::vrep_common::simRosSetBooleanParameter&) { return value(); }
};


// service_traits::MD5Sum< ::vrep_common::simRosSetBooleanParameterRequest> should match 
// service_traits::MD5Sum< ::vrep_common::simRosSetBooleanParameter > 
template<>
struct MD5Sum< ::vrep_common::simRosSetBooleanParameterRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosSetBooleanParameter >::value();
  }
  static const char* value(const ::vrep_common::simRosSetBooleanParameterRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosSetBooleanParameterRequest> should match 
// service_traits::DataType< ::vrep_common::simRosSetBooleanParameter > 
template<>
struct DataType< ::vrep_common::simRosSetBooleanParameterRequest>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosSetBooleanParameter >::value();
  }
  static const char* value(const ::vrep_common::simRosSetBooleanParameterRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vrep_common::simRosSetBooleanParameterResponse> should match 
// service_traits::MD5Sum< ::vrep_common::simRosSetBooleanParameter > 
template<>
struct MD5Sum< ::vrep_common::simRosSetBooleanParameterResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosSetBooleanParameter >::value();
  }
  static const char* value(const ::vrep_common::simRosSetBooleanParameterResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosSetBooleanParameterResponse> should match 
// service_traits::DataType< ::vrep_common::simRosSetBooleanParameter > 
template<>
struct DataType< ::vrep_common::simRosSetBooleanParameterResponse>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosSetBooleanParameter >::value();
  }
  static const char* value(const ::vrep_common::simRosSetBooleanParameterResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSSETBOOLEANPARAMETER_H
