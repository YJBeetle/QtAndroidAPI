#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
namespace java::net
{
	class SocketAddress;
}

namespace android::system
{
	class StructMsghdr : public JObject
	{
	public:
		// Fields
		JArray msg_control();
		jint msg_flags();
		JArray msg_iov();
		java::net::SocketAddress msg_name();
		
		// QJniObject forward
		template<typename ...Ts> explicit StructMsghdr(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StructMsghdr(QJniObject obj);
		
		// Constructors
		StructMsghdr(java::net::SocketAddress arg0, JArray arg1, JArray arg2, jint arg3);
		
		// Methods
	};
} // namespace android::system

