#pragma once

#include "./SubscribeConfig.def.hpp"
#include "./SubscribeDiscoverySession.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void SubscribeDiscoverySession::updateSubscribe(android::net::wifi::aware::SubscribeConfig arg0) const
	{
		callMethod<void>(
			"updateSubscribe",
			"(Landroid/net/wifi/aware/SubscribeConfig;)V",
			arg0.object()
		);
	}
} // namespace android::net::wifi::aware

// Base class headers
#include "./DiscoverySession.hpp"

