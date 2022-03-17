#pragma once

#include "../../MacAddress.def.hpp"
#include "./WifiP2pConfig.def.hpp"
#include "../../../../JString.hpp"
#include "./WifiP2pConfig_Builder.def.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	
	// Constructors
	inline WifiP2pConfig_Builder::WifiP2pConfig_Builder()
		: JObject(
			"android.net.wifi.p2p.WifiP2pConfig$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::wifi::p2p::WifiP2pConfig WifiP2pConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/p2p/WifiP2pConfig;"
		);
	}
	inline android::net::wifi::p2p::WifiP2pConfig_Builder WifiP2pConfig_Builder::enablePersistentMode(jboolean arg0) const
	{
		return callObjectMethod(
			"enablePersistentMode",
			"(Z)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			arg0
		);
	}
	inline android::net::wifi::p2p::WifiP2pConfig_Builder WifiP2pConfig_Builder::setDeviceAddress(android::net::MacAddress arg0) const
	{
		return callObjectMethod(
			"setDeviceAddress",
			"(Landroid/net/MacAddress;)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::p2p::WifiP2pConfig_Builder WifiP2pConfig_Builder::setGroupOperatingBand(jint arg0) const
	{
		return callObjectMethod(
			"setGroupOperatingBand",
			"(I)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			arg0
		);
	}
	inline android::net::wifi::p2p::WifiP2pConfig_Builder WifiP2pConfig_Builder::setGroupOperatingFrequency(jint arg0) const
	{
		return callObjectMethod(
			"setGroupOperatingFrequency",
			"(I)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			arg0
		);
	}
	inline android::net::wifi::p2p::WifiP2pConfig_Builder WifiP2pConfig_Builder::setNetworkName(JString arg0) const
	{
		return callObjectMethod(
			"setNetworkName",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::wifi::p2p::WifiP2pConfig_Builder WifiP2pConfig_Builder::setPassphrase(JString arg0) const
	{
		return callObjectMethod(
			"setPassphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::net::wifi::p2p

// Base class headers

