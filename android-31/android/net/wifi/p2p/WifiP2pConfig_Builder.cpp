#include "../../MacAddress.hpp"
#include "./WifiP2pConfig.hpp"
#include "./WifiP2pConfig_Builder.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	
	// QAndroidJniObject forward
	WifiP2pConfig_Builder::WifiP2pConfig_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	WifiP2pConfig_Builder::WifiP2pConfig_Builder()
		: JObject(
			"android.net.wifi.p2p.WifiP2pConfig$Builder",
			"()V"
		) {}
	
	// Methods
	android::net::wifi::p2p::WifiP2pConfig WifiP2pConfig_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/p2p/WifiP2pConfig;"
		);
	}
	android::net::wifi::p2p::WifiP2pConfig_Builder WifiP2pConfig_Builder::enablePersistentMode(jboolean arg0)
	{
		return callObjectMethod(
			"enablePersistentMode",
			"(Z)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			arg0
		);
	}
	android::net::wifi::p2p::WifiP2pConfig_Builder WifiP2pConfig_Builder::setDeviceAddress(android::net::MacAddress arg0)
	{
		return callObjectMethod(
			"setDeviceAddress",
			"(Landroid/net/MacAddress;)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			arg0.object()
		);
	}
	android::net::wifi::p2p::WifiP2pConfig_Builder WifiP2pConfig_Builder::setGroupOperatingBand(jint arg0)
	{
		return callObjectMethod(
			"setGroupOperatingBand",
			"(I)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			arg0
		);
	}
	android::net::wifi::p2p::WifiP2pConfig_Builder WifiP2pConfig_Builder::setGroupOperatingFrequency(jint arg0)
	{
		return callObjectMethod(
			"setGroupOperatingFrequency",
			"(I)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			arg0
		);
	}
	android::net::wifi::p2p::WifiP2pConfig_Builder WifiP2pConfig_Builder::setNetworkName(jstring arg0)
	{
		return callObjectMethod(
			"setNetworkName",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			arg0
		);
	}
	android::net::wifi::p2p::WifiP2pConfig_Builder WifiP2pConfig_Builder::setPassphrase(jstring arg0)
	{
		return callObjectMethod(
			"setPassphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			arg0
		);
	}
} // namespace android::net::wifi::p2p

