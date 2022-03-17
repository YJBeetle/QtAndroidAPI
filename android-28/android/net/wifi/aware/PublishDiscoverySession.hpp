#pragma once

#include "./PublishConfig.def.hpp"
#include "./WifiAwareManager.def.hpp"
#include "./PublishDiscoverySession.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void PublishDiscoverySession::updatePublish(android::net::wifi::aware::PublishConfig arg0) const
	{
		callMethod<void>(
			"updatePublish",
			"(Landroid/net/wifi/aware/PublishConfig;)V",
			arg0.object()
		);
	}
} // namespace android::net::wifi::aware

// Base class headers
#include "./DiscoverySession.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::aware;
#endif
