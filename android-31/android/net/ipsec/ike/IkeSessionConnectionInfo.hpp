#pragma once

#include "../../Network.def.hpp"
#include "../../../../java/net/InetAddress.def.hpp"
#include "./IkeSessionConnectionInfo.def.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// Constructors
	inline IkeSessionConnectionInfo::IkeSessionConnectionInfo(java::net::InetAddress arg0, java::net::InetAddress arg1, android::net::Network arg2)
		: JObject(
			"android.net.ipsec.ike.IkeSessionConnectionInfo",
			"(Ljava/net/InetAddress;Ljava/net/InetAddress;Landroid/net/Network;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline java::net::InetAddress IkeSessionConnectionInfo::getLocalAddress() const
	{
		return callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	inline android::net::Network IkeSessionConnectionInfo::getNetwork() const
	{
		return callObjectMethod(
			"getNetwork",
			"()Landroid/net/Network;"
		);
	}
	inline java::net::InetAddress IkeSessionConnectionInfo::getRemoteAddress() const
	{
		return callObjectMethod(
			"getRemoteAddress",
			"()Ljava/net/InetAddress;"
		);
	}
} // namespace android::net::ipsec::ike

// Base class headers

