#pragma once

#include "./WifiP2pUsdBasedLocalServiceAdvertisementConfig.def.hpp"
#include "./WifiP2pUsdBasedLocalServiceAdvertisementConfig_Builder.def.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	
	// Constructors
	inline WifiP2pUsdBasedLocalServiceAdvertisementConfig_Builder::WifiP2pUsdBasedLocalServiceAdvertisementConfig_Builder()
		: JObject(
			"android.net.wifi.p2p.WifiP2pUsdBasedLocalServiceAdvertisementConfig$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::wifi::p2p::WifiP2pUsdBasedLocalServiceAdvertisementConfig WifiP2pUsdBasedLocalServiceAdvertisementConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/p2p/WifiP2pUsdBasedLocalServiceAdvertisementConfig;"
		);
	}
	inline android::net::wifi::p2p::WifiP2pUsdBasedLocalServiceAdvertisementConfig_Builder WifiP2pUsdBasedLocalServiceAdvertisementConfig_Builder::setFrequencyMhz(jint arg0) const
	{
		return callObjectMethod(
			"setFrequencyMhz",
			"(I)Landroid/net/wifi/p2p/WifiP2pUsdBasedLocalServiceAdvertisementConfig$Builder;",
			arg0
		);
	}
} // namespace android::net::wifi::p2p

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::p2p;
#endif
