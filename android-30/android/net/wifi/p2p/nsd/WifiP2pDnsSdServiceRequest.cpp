#include "./WifiP2pDnsSdServiceRequest.hpp"

namespace android::net::wifi::p2p::nsd
{
	// Fields
	
	// QAndroidJniObject forward
	WifiP2pDnsSdServiceRequest::WifiP2pDnsSdServiceRequest(QAndroidJniObject obj) : android::net::wifi::p2p::nsd::WifiP2pServiceRequest(obj) {}
	
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
	android::net::wifi::p2p::nsd::WifiP2pDnsSdServiceRequest WifiP2pDnsSdServiceRequest::newInstance(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pDnsSdServiceRequest",
			"newInstance",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/nsd/WifiP2pDnsSdServiceRequest;",
			arg0
		);
	}
	android::net::wifi::p2p::nsd::WifiP2pDnsSdServiceRequest WifiP2pDnsSdServiceRequest::newInstance(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pDnsSdServiceRequest",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/wifi/p2p/nsd/WifiP2pDnsSdServiceRequest;",
			arg0,
			arg1
		);
	}
} // namespace android::net::wifi::p2p::nsd

