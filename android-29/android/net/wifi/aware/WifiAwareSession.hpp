#pragma once

#include "../../../../__JniBaseClass.hpp"

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
	class WifiAwareSession : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiAwareSession(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiAwareSession(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		QAndroidJniObject createNetworkSpecifierOpen(jint arg0, jbyteArray arg1);
		QAndroidJniObject createNetworkSpecifierPassphrase(jint arg0, jbyteArray arg1, jstring arg2);
		void publish(android::net::wifi::aware::PublishConfig arg0, android::net::wifi::aware::DiscoverySessionCallback arg1, android::os::Handler arg2);
		void subscribe(android::net::wifi::aware::SubscribeConfig arg0, android::net::wifi::aware::DiscoverySessionCallback arg1, android::os::Handler arg2);
	};
} // namespace android::net::wifi::aware

