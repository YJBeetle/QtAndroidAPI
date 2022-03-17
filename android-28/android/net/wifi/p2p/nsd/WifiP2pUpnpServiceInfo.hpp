#pragma once

#include "../../../../../JString.hpp"
#include "./WifiP2pUpnpServiceInfo.def.hpp"

namespace android::net::wifi::p2p::nsd
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::net::wifi::p2p::nsd::WifiP2pUpnpServiceInfo WifiP2pUpnpServiceInfo::newInstance(JString arg0, JString arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pUpnpServiceInfo",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)Landroid/net/wifi/p2p/nsd/WifiP2pUpnpServiceInfo;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
} // namespace android::net::wifi::p2p::nsd

// Base class headers
#include "./WifiP2pServiceInfo.hpp"

