#include "./SubscribeConfig.hpp"
#include "./WifiAwareManager.hpp"
#include "./SubscribeDiscoverySession.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// Constructors
	
	// Methods
	void SubscribeDiscoverySession::updateSubscribe(android::net::wifi::aware::SubscribeConfig arg0) const
	{
		callMethod<void>(
			"updateSubscribe",
			"(Landroid/net/wifi/aware/SubscribeConfig;)V",
			arg0.object()
		);
	}
} // namespace android::net::wifi::aware

