#include "../../../../../JString.hpp"
#include "./WifiP2pDnsSdServiceInfo.hpp"

namespace android::net::wifi::p2p::nsd
{
	// Fields
	
	// Constructors
	
	// Methods
	android::net::wifi::p2p::nsd::WifiP2pDnsSdServiceInfo WifiP2pDnsSdServiceInfo::newInstance(JString arg0, JString arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pDnsSdServiceInfo",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)Landroid/net/wifi/p2p/nsd/WifiP2pDnsSdServiceInfo;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
} // namespace android::net::wifi::p2p::nsd

