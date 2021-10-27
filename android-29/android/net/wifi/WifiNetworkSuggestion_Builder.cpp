#include "../MacAddress.hpp"
#include "./WifiEnterpriseConfig.hpp"
#include "./WifiNetworkSuggestion.hpp"
#include "./WifiNetworkSuggestion_Builder.hpp"

namespace android::net::wifi
{
	// Fields
	
	WifiNetworkSuggestion_Builder::WifiNetworkSuggestion_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WifiNetworkSuggestion_Builder::WifiNetworkSuggestion_Builder()
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
	QAndroidJniObject WifiNetworkSuggestion_Builder::setBssid(android::net::MacAddress arg0)
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
	QAndroidJniObject WifiNetworkSuggestion_Builder::setWpa2EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0)
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
	QAndroidJniObject WifiNetworkSuggestion_Builder::setWpa3EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0)
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
} // namespace android::net::wifi

