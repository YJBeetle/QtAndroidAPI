#pragma once

#include "../../../../JObject.hpp"

class JByteArray;
namespace android::net::wifi::aware
{
	class DiscoverySession;
}
namespace android::net::wifi::aware
{
	class PeerHandle;
}
namespace android::net::wifi::aware
{
	class WifiAwareNetworkSpecifier;
}
class JString;

namespace android::net::wifi::aware
{
	class WifiAwareNetworkSpecifier_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiAwareNetworkSpecifier_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiAwareNetworkSpecifier_Builder(QJniObject obj);
		
		// Constructors
		WifiAwareNetworkSpecifier_Builder(android::net::wifi::aware::DiscoverySession arg0, android::net::wifi::aware::PeerHandle arg1);
		
		// Methods
		android::net::wifi::aware::WifiAwareNetworkSpecifier build();
		android::net::wifi::aware::WifiAwareNetworkSpecifier_Builder setPmk(JByteArray arg0);
		android::net::wifi::aware::WifiAwareNetworkSpecifier_Builder setPort(jint arg0);
		android::net::wifi::aware::WifiAwareNetworkSpecifier_Builder setPskPassphrase(JString arg0);
		android::net::wifi::aware::WifiAwareNetworkSpecifier_Builder setTransportProtocol(jint arg0);
	};
} // namespace android::net::wifi::aware

