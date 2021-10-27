#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class MacAddress;
}
namespace __jni_impl::android::net::wifi
{
	class WifiEnterpriseConfig;
}
namespace __jni_impl::android::net::wifi
{
	class WifiNetworkSuggestion;
}

namespace __jni_impl::android::net::wifi
{
	class WifiNetworkSuggestion_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setBssid(__jni_impl::android::net::MacAddress arg0);
		QAndroidJniObject setIsAppInteractionRequired(jboolean arg0);
		QAndroidJniObject setIsEnhancedOpen(jboolean arg0);
		QAndroidJniObject setIsHiddenSsid(jboolean arg0);
		QAndroidJniObject setIsMetered(jboolean arg0);
		QAndroidJniObject setIsUserInteractionRequired(jboolean arg0);
		QAndroidJniObject setPriority(jint arg0);
		QAndroidJniObject setSsid(jstring arg0);
		QAndroidJniObject setSsid(const QString &arg0);
		QAndroidJniObject setWpa2EnterpriseConfig(__jni_impl::android::net::wifi::WifiEnterpriseConfig arg0);
		QAndroidJniObject setWpa2Passphrase(jstring arg0);
		QAndroidJniObject setWpa2Passphrase(const QString &arg0);
		QAndroidJniObject setWpa3EnterpriseConfig(__jni_impl::android::net::wifi::WifiEnterpriseConfig arg0);
		QAndroidJniObject setWpa3Passphrase(jstring arg0);
		QAndroidJniObject setWpa3Passphrase(const QString &arg0);
	};
} // namespace __jni_impl::android::net::wifi

#include "../MacAddress.hpp"
#include "./WifiEnterpriseConfig.hpp"
#include "./WifiNetworkSuggestion.hpp"

namespace __jni_impl::android::net::wifi
{
	// Fields
	
	// Constructors
	void WifiNetworkSuggestion_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiNetworkSuggestion$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject WifiNetworkSuggestion_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/net/wifi/WifiNetworkSuggestion;"
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setBssid(__jni_impl::android::net::MacAddress arg0)
	{
		return __thiz.callObjectMethod(
			"setBssid",
			"(Landroid/net/MacAddress;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setIsAppInteractionRequired(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIsAppInteractionRequired",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setIsEnhancedOpen(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIsEnhancedOpen",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setIsHiddenSsid(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIsHiddenSsid",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setIsMetered(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIsMetered",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setIsUserInteractionRequired(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIsUserInteractionRequired",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setPriority(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setPriority",
			"(I)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setSsid(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setSsid",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setSsid(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setSsid",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setWpa2EnterpriseConfig(__jni_impl::android::net::wifi::WifiEnterpriseConfig arg0)
	{
		return __thiz.callObjectMethod(
			"setWpa2EnterpriseConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setWpa2Passphrase(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setWpa2Passphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setWpa2Passphrase(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setWpa2Passphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setWpa3EnterpriseConfig(__jni_impl::android::net::wifi::WifiEnterpriseConfig arg0)
	{
		return __thiz.callObjectMethod(
			"setWpa3EnterpriseConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setWpa3Passphrase(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setWpa3Passphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setWpa3Passphrase(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setWpa3Passphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::net::wifi

namespace android::net::wifi
{
	class WifiNetworkSuggestion_Builder : public __jni_impl::android::net::wifi::WifiNetworkSuggestion_Builder
	{
	public:
		WifiNetworkSuggestion_Builder(QAndroidJniObject obj) { __thiz = obj; }
		WifiNetworkSuggestion_Builder()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi

