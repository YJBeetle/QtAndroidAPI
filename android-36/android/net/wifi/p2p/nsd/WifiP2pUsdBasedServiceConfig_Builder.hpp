#pragma once

#include "../../../../../JByteArray.hpp"
#include "./WifiP2pUsdBasedServiceConfig.def.hpp"
#include "../../../../../JString.hpp"
#include "./WifiP2pUsdBasedServiceConfig_Builder.def.hpp"

namespace android::net::wifi::p2p::nsd
{
	// Fields
	
	// Constructors
	inline WifiP2pUsdBasedServiceConfig_Builder::WifiP2pUsdBasedServiceConfig_Builder(JString arg0)
		: JObject(
			"android.net.wifi.p2p.nsd.WifiP2pUsdBasedServiceConfig$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::net::wifi::p2p::nsd::WifiP2pUsdBasedServiceConfig WifiP2pUsdBasedServiceConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/p2p/nsd/WifiP2pUsdBasedServiceConfig;"
		);
	}
	inline android::net::wifi::p2p::nsd::WifiP2pUsdBasedServiceConfig_Builder WifiP2pUsdBasedServiceConfig_Builder::setServiceProtocolType(jint arg0) const
	{
		return callObjectMethod(
			"setServiceProtocolType",
			"(I)Landroid/net/wifi/p2p/nsd/WifiP2pUsdBasedServiceConfig$Builder;",
			arg0
		);
	}
	inline android::net::wifi::p2p::nsd::WifiP2pUsdBasedServiceConfig_Builder WifiP2pUsdBasedServiceConfig_Builder::setServiceSpecificInfo(JByteArray arg0) const
	{
		return callObjectMethod(
			"setServiceSpecificInfo",
			"([B)Landroid/net/wifi/p2p/nsd/WifiP2pUsdBasedServiceConfig$Builder;",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::net::wifi::p2p::nsd

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::p2p::nsd;
#endif
