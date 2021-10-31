#include "./WifiP2pUpnpServiceInfo.hpp"

namespace android::net::wifi::p2p::nsd
{
	// Fields
	
	// QAndroidJniObject forward
	WifiP2pUpnpServiceInfo::WifiP2pUpnpServiceInfo(QAndroidJniObject obj) : android::net::wifi::p2p::nsd::WifiP2pServiceInfo(obj) {}
	
	// Constructors
	
	// Methods
	android::net::wifi::p2p::nsd::WifiP2pUpnpServiceInfo WifiP2pUpnpServiceInfo::newInstance(jstring arg0, jstring arg1, __JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pUpnpServiceInfo",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)Landroid/net/wifi/p2p/nsd/WifiP2pUpnpServiceInfo;",
			arg0,
			arg1,
			arg2.object()
		);
	}
} // namespace android::net::wifi::p2p::nsd

