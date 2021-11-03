#include "./WifiP2pDnsSdServiceInfo.hpp"

namespace android::net::wifi::p2p::nsd
{
	// Fields
	
	// QJniObject forward
	WifiP2pDnsSdServiceInfo::WifiP2pDnsSdServiceInfo(QJniObject obj) : android::net::wifi::p2p::nsd::WifiP2pServiceInfo(obj) {}
	
	// Constructors
	
	// Methods
	android::net::wifi::p2p::nsd::WifiP2pDnsSdServiceInfo WifiP2pDnsSdServiceInfo::newInstance(jstring arg0, jstring arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pDnsSdServiceInfo",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)Landroid/net/wifi/p2p/nsd/WifiP2pDnsSdServiceInfo;",
			arg0,
			arg1,
			arg2.object()
		);
	}
} // namespace android::net::wifi::p2p::nsd

