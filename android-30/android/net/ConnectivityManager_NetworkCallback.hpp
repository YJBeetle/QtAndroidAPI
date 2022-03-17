#pragma once

#include "./LinkProperties.def.hpp"
#include "./Network.def.hpp"
#include "./NetworkCapabilities.def.hpp"
#include "./ConnectivityManager_NetworkCallback.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	inline ConnectivityManager_NetworkCallback::ConnectivityManager_NetworkCallback()
		: JObject(
			"android.net.ConnectivityManager$NetworkCallback",
			"()V"
		) {}
	
	// Methods
	inline void ConnectivityManager_NetworkCallback::onAvailable(android::net::Network arg0) const
	{
		callMethod<void>(
			"onAvailable",
			"(Landroid/net/Network;)V",
			arg0.object()
		);
	}
	inline void ConnectivityManager_NetworkCallback::onBlockedStatusChanged(android::net::Network arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onBlockedStatusChanged",
			"(Landroid/net/Network;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void ConnectivityManager_NetworkCallback::onCapabilitiesChanged(android::net::Network arg0, android::net::NetworkCapabilities arg1) const
	{
		callMethod<void>(
			"onCapabilitiesChanged",
			"(Landroid/net/Network;Landroid/net/NetworkCapabilities;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ConnectivityManager_NetworkCallback::onLinkPropertiesChanged(android::net::Network arg0, android::net::LinkProperties arg1) const
	{
		callMethod<void>(
			"onLinkPropertiesChanged",
			"(Landroid/net/Network;Landroid/net/LinkProperties;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ConnectivityManager_NetworkCallback::onLosing(android::net::Network arg0, jint arg1) const
	{
		callMethod<void>(
			"onLosing",
			"(Landroid/net/Network;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void ConnectivityManager_NetworkCallback::onLost(android::net::Network arg0) const
	{
		callMethod<void>(
			"onLost",
			"(Landroid/net/Network;)V",
			arg0.object()
		);
	}
	inline void ConnectivityManager_NetworkCallback::onUnavailable() const
	{
		callMethod<void>(
			"onUnavailable",
			"()V"
		);
	}
} // namespace android::net

// Base class headers

