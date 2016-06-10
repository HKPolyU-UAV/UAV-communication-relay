// Generated by gencpp from file uav_control/datalink_send.msg
// DO NOT EDIT!


#ifndef UAV_CONTROL_MESSAGE_DATALINK_SEND_H
#define UAV_CONTROL_MESSAGE_DATALINK_SEND_H

#include <ros/service_traits.h>


#include <uav_control/datalink_sendRequest.h>
#include <uav_control/datalink_sendResponse.h>


namespace uav_control
{

struct datalink_send
{

typedef datalink_sendRequest Request;
typedef datalink_sendResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct datalink_send
} // namespace uav_control


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::uav_control::datalink_send > {
  static const char* value()
  {
    return "c59b12dd2dff876a39a7e4b90f940b75";
  }

  static const char* value(const ::uav_control::datalink_send&) { return value(); }
};

template<>
struct DataType< ::uav_control::datalink_send > {
  static const char* value()
  {
    return "uav_control/datalink_send";
  }

  static const char* value(const ::uav_control::datalink_send&) { return value(); }
};


// service_traits::MD5Sum< ::uav_control::datalink_sendRequest> should match 
// service_traits::MD5Sum< ::uav_control::datalink_send > 
template<>
struct MD5Sum< ::uav_control::datalink_sendRequest>
{
  static const char* value()
  {
    return MD5Sum< ::uav_control::datalink_send >::value();
  }
  static const char* value(const ::uav_control::datalink_sendRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::uav_control::datalink_sendRequest> should match 
// service_traits::DataType< ::uav_control::datalink_send > 
template<>
struct DataType< ::uav_control::datalink_sendRequest>
{
  static const char* value()
  {
    return DataType< ::uav_control::datalink_send >::value();
  }
  static const char* value(const ::uav_control::datalink_sendRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::uav_control::datalink_sendResponse> should match 
// service_traits::MD5Sum< ::uav_control::datalink_send > 
template<>
struct MD5Sum< ::uav_control::datalink_sendResponse>
{
  static const char* value()
  {
    return MD5Sum< ::uav_control::datalink_send >::value();
  }
  static const char* value(const ::uav_control::datalink_sendResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::uav_control::datalink_sendResponse> should match 
// service_traits::DataType< ::uav_control::datalink_send > 
template<>
struct DataType< ::uav_control::datalink_sendResponse>
{
  static const char* value()
  {
    return DataType< ::uav_control::datalink_send >::value();
  }
  static const char* value(const ::uav_control::datalink_sendResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // UAV_CONTROL_MESSAGE_DATALINK_SEND_H
