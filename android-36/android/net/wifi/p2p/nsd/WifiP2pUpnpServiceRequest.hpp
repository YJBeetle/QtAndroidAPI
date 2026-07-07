#pragma once

#include "../../../../../JString.hpp"
#include "./WifiP2pUpnpServiceRequest.def.hpp"

namespace android::net::wifi::p2p::nsd
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::net::wifi::p2p::nsd::WifiP2pUpnpServiceRequest WifiP2pUpnpServiceRequest::newInstance()
	{
		return callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pUpnpServiceRequest",
			"newInstance",
			"()Landroid/net/wifi/p2p/nsd/WifiP2pUpnpServiceRequest;"
		);
	}
	inline android::net::wifi::p2p::nsd::WifiP2pUpnpServiceRequest WifiP2pUpnpServiceRequest::newInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pUpnpServiceRequest",
			"newInstance",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/nsd/WifiP2pUpnpServiceRequest;",
			arg0.object<jstring>()
		);
	}
} // namespace android::net::wifi::p2p::nsd

// Base class headers
#include "./WifiP2pServiceRequest.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::p2p::nsd;
#endif
