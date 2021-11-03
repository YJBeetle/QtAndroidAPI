#include "../../../../../JString.hpp"
#include "./WifiP2pUpnpServiceRequest.hpp"

namespace android::net::wifi::p2p::nsd
{
	// Fields
	
	// QJniObject forward
	WifiP2pUpnpServiceRequest::WifiP2pUpnpServiceRequest(QJniObject obj) : android::net::wifi::p2p::nsd::WifiP2pServiceRequest(obj) {}
	
	// Constructors
	
	// Methods
	android::net::wifi::p2p::nsd::WifiP2pUpnpServiceRequest WifiP2pUpnpServiceRequest::newInstance()
	{
		return callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pUpnpServiceRequest",
			"newInstance",
			"()Landroid/net/wifi/p2p/nsd/WifiP2pUpnpServiceRequest;"
		);
	}
	android::net::wifi::p2p::nsd::WifiP2pUpnpServiceRequest WifiP2pUpnpServiceRequest::newInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pUpnpServiceRequest",
			"newInstance",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/nsd/WifiP2pUpnpServiceRequest;",
			arg0.object<jstring>()
		);
	}
} // namespace android::net::wifi::p2p::nsd

