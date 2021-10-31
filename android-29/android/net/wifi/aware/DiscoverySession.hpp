#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::net
{
	class NetworkSpecifier;
}
namespace android::net::wifi::aware
{
	class PeerHandle;
}
namespace android::net::wifi::aware
{
	class WifiAwareManager;
}

namespace android::net::wifi::aware
{
	class DiscoverySession : public __JniBaseClass
	{
	public:
		// Fields
		
		DiscoverySession(QAndroidJniObject obj);
		// Constructors
		DiscoverySession() = default;
		
		// Methods
		void close();
		QAndroidJniObject createNetworkSpecifierOpen(android::net::wifi::aware::PeerHandle arg0);
		QAndroidJniObject createNetworkSpecifierPassphrase(android::net::wifi::aware::PeerHandle arg0, jstring arg1);
		void sendMessage(android::net::wifi::aware::PeerHandle arg0, jint arg1, jbyteArray arg2);
	};
} // namespace android::net::wifi::aware

