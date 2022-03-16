#include "../../Network.hpp"
#include "../../../../java/net/InetAddress.hpp"
#include "./IkeSessionConnectionInfo.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// Constructors
	IkeSessionConnectionInfo::IkeSessionConnectionInfo(java::net::InetAddress arg0, java::net::InetAddress arg1, android::net::Network arg2)
		: JObject(
			"android.net.ipsec.ike.IkeSessionConnectionInfo",
			"(Ljava/net/InetAddress;Ljava/net/InetAddress;Landroid/net/Network;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	java::net::InetAddress IkeSessionConnectionInfo::getLocalAddress() const
	{
		return callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	android::net::Network IkeSessionConnectionInfo::getNetwork() const
	{
		return callObjectMethod(
			"getNetwork",
			"()Landroid/net/Network;"
		);
	}
	java::net::InetAddress IkeSessionConnectionInfo::getRemoteAddress() const
	{
		return callObjectMethod(
			"getRemoteAddress",
			"()Ljava/net/InetAddress;"
		);
	}
} // namespace android::net::ipsec::ike

