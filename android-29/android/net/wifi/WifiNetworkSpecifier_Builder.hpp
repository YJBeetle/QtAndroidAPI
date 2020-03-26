#pragma once

#ifndef ANDROID_NET_WIFI_WIFINETWORKSPECIFIER_BUILDER
#define ANDROID_NET_WIFI_WIFINETWORKSPECIFIER_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::wifi
{
	class WifiNetworkSpecifier;
}
namespace __jni_impl::android::net
{
	class MacAddress;
}
namespace __jni_impl::android::net::wifi
{
	class WifiEnterpriseConfig;
}
namespace __jni_impl::android::os
{
	class PatternMatcher;
}

namespace __jni_impl::android::net::wifi
{
	class WifiNetworkSpecifier_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setSsid(jstring arg0);
		QAndroidJniObject setBssid(__jni_impl::android::net::MacAddress arg0);
		QAndroidJniObject setIsEnhancedOpen(jboolean arg0);
		QAndroidJniObject setWpa2Passphrase(jstring arg0);
		QAndroidJniObject setWpa3Passphrase(jstring arg0);
		QAndroidJniObject setWpa2EnterpriseConfig(__jni_impl::android::net::wifi::WifiEnterpriseConfig arg0);
		QAndroidJniObject setWpa3EnterpriseConfig(__jni_impl::android::net::wifi::WifiEnterpriseConfig arg0);
		QAndroidJniObject setIsHiddenSsid(jboolean arg0);
		QAndroidJniObject setBssidPattern(__jni_impl::android::net::MacAddress arg0, __jni_impl::android::net::MacAddress arg1);
		QAndroidJniObject setSsidPattern(__jni_impl::android::os::PatternMatcher arg0);
	};
} // namespace __jni_impl::android::net::wifi

#include "WifiNetworkSpecifier.hpp"
#include "../MacAddress.hpp"
#include "WifiEnterpriseConfig.hpp"
#include "../../os/PatternMatcher.hpp"

namespace __jni_impl::android::net::wifi
{
	// Fields
	
	// Constructors
	void WifiNetworkSpecifier_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiNetworkSpecifier$Builder",
			"()V");
	}
	
	// Methods
	QAndroidJniObject WifiNetworkSpecifier_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/net/wifi/WifiNetworkSpecifier;"
		);
	}
	QAndroidJniObject WifiNetworkSpecifier_Builder::setSsid(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setSsid",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiNetworkSpecifier_Builder::setBssid(__jni_impl::android::net::MacAddress arg0)
	{
		return __thiz.callObjectMethod(
			"setBssid",
			"(Landroid/net/MacAddress;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WifiNetworkSpecifier_Builder::setIsEnhancedOpen(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIsEnhancedOpen",
			"(Z)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiNetworkSpecifier_Builder::setWpa2Passphrase(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setWpa2Passphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiNetworkSpecifier_Builder::setWpa3Passphrase(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setWpa3Passphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiNetworkSpecifier_Builder::setWpa2EnterpriseConfig(__jni_impl::android::net::wifi::WifiEnterpriseConfig arg0)
	{
		return __thiz.callObjectMethod(
			"setWpa2EnterpriseConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WifiNetworkSpecifier_Builder::setWpa3EnterpriseConfig(__jni_impl::android::net::wifi::WifiEnterpriseConfig arg0)
	{
		return __thiz.callObjectMethod(
			"setWpa3EnterpriseConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WifiNetworkSpecifier_Builder::setIsHiddenSsid(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIsHiddenSsid",
			"(Z)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiNetworkSpecifier_Builder::setBssidPattern(__jni_impl::android::net::MacAddress arg0, __jni_impl::android::net::MacAddress arg1)
	{
		return __thiz.callObjectMethod(
			"setBssidPattern",
			"(Landroid/net/MacAddress;Landroid/net/MacAddress;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject WifiNetworkSpecifier_Builder::setSsidPattern(__jni_impl::android::os::PatternMatcher arg0)
	{
		return __thiz.callObjectMethod(
			"setSsidPattern",
			"(Landroid/os/PatternMatcher;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::net::wifi

namespace android::net::wifi
{
	class WifiNetworkSpecifier_Builder : public __jni_impl::android::net::wifi::WifiNetworkSpecifier_Builder
	{
	public:
		WifiNetworkSpecifier_Builder(QAndroidJniObject obj) { __thiz = obj; }
		WifiNetworkSpecifier_Builder()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi

#endif // ANDROID_NET_WIFI_WIFINETWORKSPECIFIER_BUILDER

