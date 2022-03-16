#include "../../../../../JString.hpp"
#include "./WifiP2pDnsSdServiceRequest.hpp"

namespace android::net::wifi::p2p::nsd
{
	// Fields
	
	// Constructors
	
	// Methods
	android::net::wifi::p2p::nsd::WifiP2pDnsSdServiceRequest WifiP2pDnsSdServiceRequest::newInstance()
	{
		return callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pDnsSdServiceRequest",
			"newInstance",
			"()Landroid/net/wifi/p2p/nsd/WifiP2pDnsSdServiceRequest;"
		);
	}
	android::net::wifi::p2p::nsd::WifiP2pDnsSdServiceRequest WifiP2pDnsSdServiceRequest::newInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pDnsSdServiceRequest",
			"newInstance",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/nsd/WifiP2pDnsSdServiceRequest;",
			arg0.object<jstring>()
		);
	}
	android::net::wifi::p2p::nsd::WifiP2pDnsSdServiceRequest WifiP2pDnsSdServiceRequest::newInstance(JString arg0, JString arg1)
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

