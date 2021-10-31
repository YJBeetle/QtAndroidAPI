#include "./WifiP2pUpnpServiceRequest.hpp"

namespace android::net::wifi::p2p::nsd
{
	// Fields
	
	WifiP2pUpnpServiceRequest::WifiP2pUpnpServiceRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject WifiP2pUpnpServiceRequest::newInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pUpnpServiceRequest",
			"newInstance",
			"()Landroid/net/wifi/p2p/nsd/WifiP2pUpnpServiceRequest;"
		);
	}
	QAndroidJniObject WifiP2pUpnpServiceRequest::newInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pUpnpServiceRequest",
			"newInstance",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/nsd/WifiP2pUpnpServiceRequest;",
			arg0
		);
	}
} // namespace android::net::wifi::p2p::nsd

