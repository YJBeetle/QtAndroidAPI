#include "./PublishConfig.hpp"
#include "./PublishDiscoverySession.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// Constructors
	
	// Methods
	void PublishDiscoverySession::updatePublish(android::net::wifi::aware::PublishConfig arg0) const
	{
		callMethod<void>(
			"updatePublish",
			"(Landroid/net/wifi/aware/PublishConfig;)V",
			arg0.object()
		);
	}
} // namespace android::net::wifi::aware

