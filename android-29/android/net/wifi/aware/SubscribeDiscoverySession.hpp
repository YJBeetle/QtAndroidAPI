#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "./DiscoverySession.hpp"

namespace android::net::wifi::aware
{
	class SubscribeConfig;
}
namespace android::net::wifi::aware
{
	class WifiAwareManager;
}

namespace android::net::wifi::aware
{
	class SubscribeDiscoverySession : public android::net::wifi::aware::DiscoverySession
	{
	public:
		// Fields
		
		SubscribeDiscoverySession(QAndroidJniObject obj);
		// Constructors
		SubscribeDiscoverySession() = default;
		
		// Methods
		void updateSubscribe(android::net::wifi::aware::SubscribeConfig arg0);
	};
} // namespace android::net::wifi::aware

