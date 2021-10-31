#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::net
{
	class Inet4Address;
}
namespace java::net
{
	class InetAddress;
}

namespace java::net
{
	class InterfaceAddress : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InterfaceAddress(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		InterfaceAddress(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		java::net::InetAddress getAddress();
		java::net::InetAddress getBroadcast();
		jshort getNetworkPrefixLength();
		jint hashCode();
		jstring toString();
	};
} // namespace java::net

