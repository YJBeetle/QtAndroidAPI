#pragma once

#include "../../../../JByteArray.hpp"
#include "../../NetworkSpecifier.def.hpp"
#include "./DiscoverySessionCallback.def.hpp"
#include "./PublishConfig.def.hpp"
#include "./SubscribeConfig.def.hpp"
#include "./WifiAwareManager.def.hpp"
#include "../../../os/Binder.def.hpp"
#include "../../../os/Handler.def.hpp"
#include "../../../../JString.hpp"
#include "./WifiAwareSession.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void WifiAwareSession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline android::net::NetworkSpecifier WifiAwareSession::createNetworkSpecifierOpen(jint arg0, JByteArray arg1) const
	{
		return callObjectMethod(
			"createNetworkSpecifierOpen",
			"(I[B)Landroid/net/NetworkSpecifier;",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	inline android::net::NetworkSpecifier WifiAwareSession::createNetworkSpecifierPassphrase(jint arg0, JByteArray arg1, JString arg2) const
	{
		return callObjectMethod(
			"createNetworkSpecifierPassphrase",
			"(I[BLjava/lang/String;)Landroid/net/NetworkSpecifier;",
			arg0,
			arg1.object<jbyteArray>(),
			arg2.object<jstring>()
		);
	}
	inline void WifiAwareSession::publish(android::net::wifi::aware::PublishConfig arg0, android::net::wifi::aware::DiscoverySessionCallback arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"publish",
			"(Landroid/net/wifi/aware/PublishConfig;Landroid/net/wifi/aware/DiscoverySessionCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void WifiAwareSession::subscribe(android::net::wifi::aware::SubscribeConfig arg0, android::net::wifi::aware::DiscoverySessionCallback arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"subscribe",
			"(Landroid/net/wifi/aware/SubscribeConfig;Landroid/net/wifi/aware/DiscoverySessionCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::net::wifi::aware

// Base class headers

