#pragma once

#include "../../../../JIntArray.hpp"
#include "./WifiP2pUsdBasedServiceDiscoveryConfig.def.hpp"
#include "./WifiP2pUsdBasedServiceDiscoveryConfig_Builder.def.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	
	// Constructors
	inline WifiP2pUsdBasedServiceDiscoveryConfig_Builder::WifiP2pUsdBasedServiceDiscoveryConfig_Builder()
		: JObject(
			"android.net.wifi.p2p.WifiP2pUsdBasedServiceDiscoveryConfig$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::wifi::p2p::WifiP2pUsdBasedServiceDiscoveryConfig WifiP2pUsdBasedServiceDiscoveryConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/p2p/WifiP2pUsdBasedServiceDiscoveryConfig;"
		);
	}
	inline android::net::wifi::p2p::WifiP2pUsdBasedServiceDiscoveryConfig_Builder WifiP2pUsdBasedServiceDiscoveryConfig_Builder::setBand(jint arg0) const
	{
		return callObjectMethod(
			"setBand",
			"(I)Landroid/net/wifi/p2p/WifiP2pUsdBasedServiceDiscoveryConfig$Builder;",
			arg0
		);
	}
	inline android::net::wifi::p2p::WifiP2pUsdBasedServiceDiscoveryConfig_Builder WifiP2pUsdBasedServiceDiscoveryConfig_Builder::setFrequenciesMhz(JIntArray arg0) const
	{
		return callObjectMethod(
			"setFrequenciesMhz",
			"([I)Landroid/net/wifi/p2p/WifiP2pUsdBasedServiceDiscoveryConfig$Builder;",
			arg0.object<jintArray>()
		);
	}
} // namespace android::net::wifi::p2p

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::p2p;
#endif
