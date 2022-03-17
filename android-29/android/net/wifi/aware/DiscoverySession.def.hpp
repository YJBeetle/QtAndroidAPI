#pragma once

#include "../../../../JObject.hpp"

class JByteArray;
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
class JString;

namespace android::net::wifi::aware
{
	class DiscoverySession : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DiscoverySession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DiscoverySession(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void close() const;
		android::net::NetworkSpecifier createNetworkSpecifierOpen(android::net::wifi::aware::PeerHandle arg0) const;
		android::net::NetworkSpecifier createNetworkSpecifierPassphrase(android::net::wifi::aware::PeerHandle arg0, JString arg1) const;
		void sendMessage(android::net::wifi::aware::PeerHandle arg0, jint arg1, JByteArray arg2) const;
	};
} // namespace android::net::wifi::aware

