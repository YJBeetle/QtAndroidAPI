#pragma once

#include "../../../../JObject.hpp"

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
	class DiscoverySession : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DiscoverySession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DiscoverySession(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		android::net::NetworkSpecifier createNetworkSpecifierOpen(android::net::wifi::aware::PeerHandle arg0);
		android::net::NetworkSpecifier createNetworkSpecifierPassphrase(android::net::wifi::aware::PeerHandle arg0, jstring arg1);
		void sendMessage(android::net::wifi::aware::PeerHandle arg0, jint arg1, jbyteArray arg2);
	};
} // namespace android::net::wifi::aware

