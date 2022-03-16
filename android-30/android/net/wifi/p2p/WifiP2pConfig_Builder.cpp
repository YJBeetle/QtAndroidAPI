#include "../../MacAddress.hpp"
#include "./WifiP2pConfig.hpp"
#include "../../../../JString.hpp"
#include "./WifiP2pConfig_Builder.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	
	// Constructors
	WifiP2pConfig_Builder::WifiP2pConfig_Builder()
		: JObject(
			"android.net.wifi.p2p.WifiP2pConfig$Builder",
			"()V"
		) {}
	
	// Methods
	android::net::wifi::p2p::WifiP2pConfig WifiP2pConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/p2p/WifiP2pConfig;"
		);
	}
	android::net::wifi::p2p::WifiP2pConfig_Builder WifiP2pConfig_Builder::enablePersistentMode(jboolean arg0) const
	{
		return callObjectMethod(
			"enablePersistentMode",
			"(Z)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			arg0
		);
	}
	android::net::wifi::p2p::WifiP2pConfig_Builder WifiP2pConfig_Builder::setDeviceAddress(android::net::MacAddress arg0) const
	{
		return callObjectMethod(
			"setDeviceAddress",
			"(Landroid/net/MacAddress;)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			arg0.object()
		);
	}
	android::net::wifi::p2p::WifiP2pConfig_Builder WifiP2pConfig_Builder::setGroupOperatingBand(jint arg0) const
	{
		return callObjectMethod(
			"setGroupOperatingBand",
			"(I)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			arg0
		);
	}
	android::net::wifi::p2p::WifiP2pConfig_Builder WifiP2pConfig_Builder::setGroupOperatingFrequency(jint arg0) const
	{
		return callObjectMethod(
			"setGroupOperatingFrequency",
			"(I)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			arg0
		);
	}
	android::net::wifi::p2p::WifiP2pConfig_Builder WifiP2pConfig_Builder::setNetworkName(JString arg0) const
	{
		return callObjectMethod(
			"setNetworkName",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			arg0.object<jstring>()
		);
	}
	android::net::wifi::p2p::WifiP2pConfig_Builder WifiP2pConfig_Builder::setPassphrase(JString arg0) const
	{
		return callObjectMethod(
			"setPassphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::net::wifi::p2p

