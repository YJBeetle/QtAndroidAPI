#pragma once

#include "../../../../JObject.hpp"

class JIntArray;
namespace android::net::wifi::p2p
{
	class WifiP2pUsdBasedServiceDiscoveryConfig;
}

namespace android::net::wifi::p2p
{
	class WifiP2pUsdBasedServiceDiscoveryConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiP2pUsdBasedServiceDiscoveryConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pUsdBasedServiceDiscoveryConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WifiP2pUsdBasedServiceDiscoveryConfig_Builder();
		
		// Methods
		android::net::wifi::p2p::WifiP2pUsdBasedServiceDiscoveryConfig build() const;
		android::net::wifi::p2p::WifiP2pUsdBasedServiceDiscoveryConfig_Builder setBand(jint arg0) const;
		android::net::wifi::p2p::WifiP2pUsdBasedServiceDiscoveryConfig_Builder setFrequenciesMhz(JIntArray arg0) const;
	};
} // namespace android::net::wifi::p2p

