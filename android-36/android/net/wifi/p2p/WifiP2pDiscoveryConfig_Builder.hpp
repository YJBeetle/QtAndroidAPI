#pragma once

#include "./WifiP2pDiscoveryConfig.def.hpp"
#include "./WifiP2pDiscoveryConfig_Builder.def.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	
	// Constructors
	inline WifiP2pDiscoveryConfig_Builder::WifiP2pDiscoveryConfig_Builder(jint arg0)
		: JObject(
			"android.net.wifi.p2p.WifiP2pDiscoveryConfig$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::net::wifi::p2p::WifiP2pDiscoveryConfig WifiP2pDiscoveryConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/p2p/WifiP2pDiscoveryConfig;"
		);
	}
	inline android::net::wifi::p2p::WifiP2pDiscoveryConfig_Builder WifiP2pDiscoveryConfig_Builder::setFrequencyMhz(jint arg0) const
	{
		return callObjectMethod(
			"setFrequencyMhz",
			"(I)Landroid/net/wifi/p2p/WifiP2pDiscoveryConfig$Builder;",
			arg0
		);
	}
} // namespace android::net::wifi::p2p

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::p2p;
#endif
