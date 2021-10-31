#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::net
{
	class Network;
}
namespace java::net
{
	class InetAddress;
}

namespace android::net::ipsec::ike
{
	class IkeSessionConnectionInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IkeSessionConnectionInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IkeSessionConnectionInfo(QAndroidJniObject obj);
		
		// Constructors
		IkeSessionConnectionInfo(java::net::InetAddress arg0, java::net::InetAddress arg1, android::net::Network arg2);
		
		// Methods
		java::net::InetAddress getLocalAddress();
		android::net::Network getNetwork();
		java::net::InetAddress getRemoteAddress();
	};
} // namespace android::net::ipsec::ike

