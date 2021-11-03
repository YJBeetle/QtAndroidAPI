#pragma once

#include "../../../../JObject.hpp"

namespace android::net
{
	class NetworkSpecifier;
}
namespace android::net::wifi::aware
{
	class DiscoverySessionCallback;
}
namespace android::net::wifi::aware
{
	class PublishConfig;
}
namespace android::net::wifi::aware
{
	class SubscribeConfig;
}
namespace android::net::wifi::aware
{
	class WifiAwareManager;
}
namespace android::os
{
	class Binder;
}
namespace android::os
{
	class Handler;
}

namespace android::net::wifi::aware
{
	class WifiAwareSession : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiAwareSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiAwareSession(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		android::net::NetworkSpecifier createNetworkSpecifierOpen(jint arg0, jbyteArray arg1);
		android::net::NetworkSpecifier createNetworkSpecifierPassphrase(jint arg0, jbyteArray arg1, jstring arg2);
		void publish(android::net::wifi::aware::PublishConfig arg0, android::net::wifi::aware::DiscoverySessionCallback arg1, android::os::Handler arg2);
		void subscribe(android::net::wifi::aware::SubscribeConfig arg0, android::net::wifi::aware::DiscoverySessionCallback arg1, android::os::Handler arg2);
	};
} // namespace android::net::wifi::aware

