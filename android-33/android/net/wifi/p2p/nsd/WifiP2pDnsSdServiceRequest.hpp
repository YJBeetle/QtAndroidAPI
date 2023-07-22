#pragma once

#include "../../../../../JString.hpp"
#include "./WifiP2pDnsSdServiceRequest.def.hpp"

namespace android::net::wifi::p2p::nsd
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::net::wifi::p2p::nsd::WifiP2pDnsSdServiceRequest WifiP2pDnsSdServiceRequest::newInstance()
	{
		return callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pDnsSdServiceRequest",
			"newInstance",
			"()Landroid/net/wifi/p2p/nsd/WifiP2pDnsSdServiceRequest;"
		);
	}
	inline android::net::wifi::p2p::nsd::WifiP2pDnsSdServiceRequest WifiP2pDnsSdServiceRequest::newInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pDnsSdServiceRequest",
			"newInstance",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/nsd/WifiP2pDnsSdServiceRequest;",
			arg0.object<jstring>()
		);
	}
	inline android::net::wifi::p2p::nsd::WifiP2pDnsSdServiceRequest WifiP2pDnsSdServiceRequest::newInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pDnsSdServiceRequest",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/wifi/p2p/nsd/WifiP2pDnsSdServiceRequest;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
} // namespace android::net::wifi::p2p::nsd

// Base class headers
#include "./WifiP2pServiceRequest.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::p2p::nsd;
#endif
