#pragma once

#ifndef ANDROID_NET_WIFI_P2P_WIFIP2PCONFIG_BUILDER
#define ANDROID_NET_WIFI_P2P_WIFIP2PCONFIG_BUILDER

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class MacAddress;
}
namespace __jni_impl::android::net::wifi::p2p
{
	class WifiP2pConfig;
}

namespace __jni_impl::android::net::wifi::p2p
{
	class WifiP2pConfig_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject enablePersistentMode(jboolean arg0);
		QAndroidJniObject setDeviceAddress(__jni_impl::android::net::MacAddress arg0);
		QAndroidJniObject setGroupOperatingBand(jint arg0);
		QAndroidJniObject setGroupOperatingFrequency(jint arg0);
		QAndroidJniObject setNetworkName(jstring arg0);
		QAndroidJniObject setNetworkName(const QString &arg0);
		QAndroidJniObject setPassphrase(jstring arg0);
		QAndroidJniObject setPassphrase(const QString &arg0);
	};
} // namespace __jni_impl::android::net::wifi::p2p

#include "../../MacAddress.hpp"
#include "WifiP2pConfig.hpp"

namespace __jni_impl::android::net::wifi::p2p
{
	// Fields
	
	// Constructors
	void WifiP2pConfig_Builder::__constructor()
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
	QAndroidJniObject WifiP2pConfig_Builder::setDeviceAddress(__jni_impl::android::net::MacAddress arg0)
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
	QAndroidJniObject WifiP2pConfig_Builder::setNetworkName(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setNetworkName",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject WifiP2pConfig_Builder::setPassphrase(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setPassphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/WifiP2pConfig$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::net::wifi::p2p

namespace android::net::wifi::p2p
{
	class WifiP2pConfig_Builder : public __jni_impl::android::net::wifi::p2p::WifiP2pConfig_Builder
	{
	public:
		WifiP2pConfig_Builder(QAndroidJniObject obj) { __thiz = obj; }
		WifiP2pConfig_Builder()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::p2p

#endif // ANDROID_NET_WIFI_P2P_WIFIP2PCONFIG_BUILDER

