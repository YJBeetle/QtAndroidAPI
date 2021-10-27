#include "../MacAddress.hpp"
#include "./WifiEnterpriseConfig.hpp"
#include "./WifiNetworkSpecifier.hpp"
#include "../../os/PatternMatcher.hpp"
#include "./WifiNetworkSpecifier_Builder.hpp"

namespace android::net::wifi
{
	// Fields
	
	WifiNetworkSpecifier_Builder::WifiNetworkSpecifier_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WifiNetworkSpecifier_Builder::WifiNetworkSpecifier_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiNetworkSpecifier$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject WifiNetworkSpecifier_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/net/wifi/WifiNetworkSpecifier;"
		);
	}
	QAndroidJniObject WifiNetworkSpecifier_Builder::setBssid(android::net::MacAddress arg0)
	{
		return __thiz.callObjectMethod(
			"setBssid",
			"(Landroid/net/MacAddress;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WifiNetworkSpecifier_Builder::setBssidPattern(android::net::MacAddress arg0, android::net::MacAddress arg1)
	{
		return __thiz.callObjectMethod(
			"setBssidPattern",
			"(Landroid/net/MacAddress;Landroid/net/MacAddress;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
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
	QAndroidJniObject WifiNetworkSpecifier_Builder::setIsHiddenSsid(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIsHiddenSsid",
			"(Z)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0
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
	QAndroidJniObject WifiNetworkSpecifier_Builder::setSsid(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setSsid",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject WifiNetworkSpecifier_Builder::setSsidPattern(android::os::PatternMatcher arg0)
	{
		return __thiz.callObjectMethod(
			"setSsidPattern",
			"(Landroid/os/PatternMatcher;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WifiNetworkSpecifier_Builder::setWpa2EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0)
	{
		return __thiz.callObjectMethod(
			"setWpa2EnterpriseConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.__jniObject().object()
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
	QAndroidJniObject WifiNetworkSpecifier_Builder::setWpa2Passphrase(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setWpa2Passphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject WifiNetworkSpecifier_Builder::setWpa3EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0)
	{
		return __thiz.callObjectMethod(
			"setWpa3EnterpriseConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.__jniObject().object()
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
	QAndroidJniObject WifiNetworkSpecifier_Builder::setWpa3Passphrase(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setWpa3Passphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace android::net::wifi

