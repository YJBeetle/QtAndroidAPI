#include "./WifiP2pDnsSdServiceRequest.hpp"

namespace android::net::wifi::p2p::nsd
{
	// Fields
	
	// QAndroidJniObject forward
	WifiP2pDnsSdServiceRequest::WifiP2pDnsSdServiceRequest(QAndroidJniObject obj) : android::net::wifi::p2p::nsd::WifiP2pServiceRequest(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject WifiP2pDnsSdServiceRequest::newInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pDnsSdServiceRequest",
			"newInstance",
			"()Landroid/net/wifi/p2p/nsd/WifiP2pDnsSdServiceRequest;"
		);
	}
	QAndroidJniObject WifiP2pDnsSdServiceRequest::newInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pDnsSdServiceRequest",
			"newInstance",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/nsd/WifiP2pDnsSdServiceRequest;",
			arg0
		);
	}
	QAndroidJniObject WifiP2pDnsSdServiceRequest::newInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pDnsSdServiceRequest",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/wifi/p2p/nsd/WifiP2pDnsSdServiceRequest;",
			arg0,
			arg1
		);
	}
} // namespace android::net::wifi::p2p::nsd

