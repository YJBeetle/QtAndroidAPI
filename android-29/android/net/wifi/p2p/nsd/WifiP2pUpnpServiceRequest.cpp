#include "./WifiP2pUpnpServiceRequest.hpp"

namespace android::net::wifi::p2p::nsd
{
	// Fields
	
	// QAndroidJniObject forward
	WifiP2pUpnpServiceRequest::WifiP2pUpnpServiceRequest(QAndroidJniObject obj) : android::net::wifi::p2p::nsd::WifiP2pServiceRequest(obj) {}
	
	// Constructors
	
	// Methods
	android::net::wifi::p2p::nsd::WifiP2pUpnpServiceRequest WifiP2pUpnpServiceRequest::newInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pUpnpServiceRequest",
			"newInstance",
			"()Landroid/net/wifi/p2p/nsd/WifiP2pUpnpServiceRequest;"
		);
	}
	android::net::wifi::p2p::nsd::WifiP2pUpnpServiceRequest WifiP2pUpnpServiceRequest::newInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pUpnpServiceRequest",
			"newInstance",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/nsd/WifiP2pUpnpServiceRequest;",
			arg0
		);
	}
} // namespace android::net::wifi::p2p::nsd

