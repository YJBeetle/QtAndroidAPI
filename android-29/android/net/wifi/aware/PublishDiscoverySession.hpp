#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "./DiscoverySession.hpp"

namespace android::net::wifi::aware
{
	class PublishConfig;
}
namespace android::net::wifi::aware
{
	class WifiAwareManager;
}

namespace android::net::wifi::aware
{
	class PublishDiscoverySession : public android::net::wifi::aware::DiscoverySession
	{
	public:
		// Fields
		
		PublishDiscoverySession(QAndroidJniObject obj);
		// Constructors
		PublishDiscoverySession() = default;
		
		// Methods
		void updatePublish(android::net::wifi::aware::PublishConfig arg0);
	};
} // namespace android::net::wifi::aware

