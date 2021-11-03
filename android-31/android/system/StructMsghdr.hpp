#pragma once

#include "../../JObject.hpp"

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
		jarray msg_control();
		jint msg_flags();
		jarray msg_iov();
		java::net::SocketAddress msg_name();
		
		// QJniObject forward
		template<typename ...Ts> explicit StructMsghdr(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StructMsghdr(QJniObject obj);
		
		// Constructors
		StructMsghdr(java::net::SocketAddress arg0, jarray arg1, jarray arg2, jint arg3);
		
		// Methods
	};
} // namespace android::system

