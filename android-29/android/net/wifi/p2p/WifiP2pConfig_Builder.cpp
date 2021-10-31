#include "../../MacAddress.hpp"
#include "./WifiP2pConfig.hpp"
#include "./WifiP2pConfig_Builder.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	
	WifiP2pConfig_Builder::WifiP2pConfig_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WifiP2pConfig_Builder::WifiP2pConfig_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.WifiP2pConfig$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject WifiP2pConfig_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/net/wifi/p2p/WifiP2pConfig;"
		);
	}
	QAndroidJniObject WifiP2pConfig_Builder::enablePersistentMode(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"enablePersistentMode",
			"(Z)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiP2pConfig_Builder::setDeviceAddress(android::net::MacAddress arg0)
	{
		return __thiz.callObjectMethod(
			"setDeviceAddress",
			"(Landroid/net/MacAddress;)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WifiP2pConfig_Builder::setGroupOperatingBand(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setGroupOperatingBand",
			"(I)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiP2pConfig_Builder::setGroupOperatingFrequency(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setGroupOperatingFrequency",
			"(I)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiP2pConfig_Builder::setNetworkName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setNetworkName",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiP2pConfig_Builder::setPassphrase(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setPassphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			arg0
		);
	}
} // namespace android::net::wifi::p2p

