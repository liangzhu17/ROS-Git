// Generated by gencpp from file communication/moveResult.msg
// DO NOT EDIT!


#ifndef COMMUNICATION_MESSAGE_MOVERESULT_H
#define COMMUNICATION_MESSAGE_MOVERESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace communication
{
template <class ContainerAllocator>
struct moveResult_
{
  typedef moveResult_<ContainerAllocator> Type;

  moveResult_()
    : total_time_used(0)  {
    }
  moveResult_(const ContainerAllocator& _alloc)
    : total_time_used(0)  {
  (void)_alloc;
    }



   typedef uint32_t _total_time_used_type;
  _total_time_used_type total_time_used;





  typedef boost::shared_ptr< ::communication::moveResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::communication::moveResult_<ContainerAllocator> const> ConstPtr;

}; // struct moveResult_

typedef ::communication::moveResult_<std::allocator<void> > moveResult;

typedef boost::shared_ptr< ::communication::moveResult > moveResultPtr;
typedef boost::shared_ptr< ::communication::moveResult const> moveResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::communication::moveResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::communication::moveResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::communication::moveResult_<ContainerAllocator1> & lhs, const ::communication::moveResult_<ContainerAllocator2> & rhs)
{
  return lhs.total_time_used == rhs.total_time_used;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::communication::moveResult_<ContainerAllocator1> & lhs, const ::communication::moveResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace communication

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::communication::moveResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::communication::moveResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::communication::moveResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::communication::moveResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::communication::moveResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::communication::moveResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::communication::moveResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7d783291dfe0333a693a075000a0e15a";
  }

  static const char* value(const ::communication::moveResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7d783291dfe0333aULL;
  static const uint64_t static_value2 = 0x693a075000a0e15aULL;
};

template<class ContainerAllocator>
struct DataType< ::communication::moveResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "communication/moveResult";
  }

  static const char* value(const ::communication::moveResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::communication::moveResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Define the result\n"
"uint32 total_time_used\n"
;
  }

  static const char* value(const ::communication::moveResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::communication::moveResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.total_time_used);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct moveResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::communication::moveResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::communication::moveResult_<ContainerAllocator>& v)
  {
    s << indent << "total_time_used: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.total_time_used);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COMMUNICATION_MESSAGE_MOVERESULT_H
