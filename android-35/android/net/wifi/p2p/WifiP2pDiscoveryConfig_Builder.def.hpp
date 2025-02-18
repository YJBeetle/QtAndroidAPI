#pragma once

#include "../../../../JObject.hpp"

namespace android::net::wifi::p2p
{
	class WifiP2pDiscoveryConfig;
}

namespace android::net::wifi::p2p
{
	class WifiP2pDiscoveryConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiP2pDiscoveryConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pDiscoveryConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WifiP2pDiscoveryConfig_Builder(jint arg0);
		
		// Methods
		android::net::wifi::p2p::WifiP2pDiscoveryConfig build() const;
		android::net::wifi::p2p::WifiP2pDiscoveryConfig_Builder setFrequencyMhz(jint arg0) const;
	};
} // namespace android::net::wifi::p2p

