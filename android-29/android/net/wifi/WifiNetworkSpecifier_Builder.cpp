#include "../MacAddress.hpp"
#include "./WifiEnterpriseConfig.hpp"
#include "./WifiNetworkSpecifier.hpp"
#include "../../os/PatternMatcher.hpp"
#include "./WifiNetworkSpecifier_Builder.hpp"

namespace android::net::wifi
{
	// Fields
	
	// QAndroidJniObject forward
	WifiNetworkSpecifier_Builder::WifiNetworkSpecifier_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	WifiNetworkSpecifier_Builder::WifiNetworkSpecifier_Builder()
		: JObject(
			"android.net.wifi.WifiNetworkSpecifier$Builder",
			"()V"
		) {}
	
	// Methods
	android::net::wifi::WifiNetworkSpecifier WifiNetworkSpecifier_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/WifiNetworkSpecifier;"
		);
	}
	android::net::wifi::WifiNetworkSpecifier_Builder WifiNetworkSpecifier_Builder::setBssid(android::net::MacAddress arg0)
	{
		return callObjectMethod(
			"setBssid",
			"(Landroid/net/MacAddress;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.object()
		);
	}
	android::net::wifi::WifiNetworkSpecifier_Builder WifiNetworkSpecifier_Builder::setBssidPattern(android::net::MacAddress arg0, android::net::MacAddress arg1)
	{
		return callObjectMethod(
			"setBssidPattern",
			"(Landroid/net/MacAddress;Landroid/net/MacAddress;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	android::net::wifi::WifiNetworkSpecifier_Builder WifiNetworkSpecifier_Builder::setIsEnhancedOpen(jboolean arg0)
	{
		return callObjectMethod(
			"setIsEnhancedOpen",
			"(Z)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiNetworkSpecifier_Builder WifiNetworkSpecifier_Builder::setIsHiddenSsid(jboolean arg0)
	{
		return callObjectMethod(
			"setIsHiddenSsid",
			"(Z)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiNetworkSpecifier_Builder WifiNetworkSpecifier_Builder::setSsid(jstring arg0)
	{
		return callObjectMethod(
			"setSsid",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiNetworkSpecifier_Builder WifiNetworkSpecifier_Builder::setSsidPattern(android::os::PatternMatcher arg0)
	{
		return callObjectMethod(
			"setSsidPattern",
			"(Landroid/os/PatternMatcher;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.object()
		);
	}
	android::net::wifi::WifiNetworkSpecifier_Builder WifiNetworkSpecifier_Builder::setWpa2EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0)
	{
		return callObjectMethod(
			"setWpa2EnterpriseConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.object()
		);
	}
	android::net::wifi::WifiNetworkSpecifier_Builder WifiNetworkSpecifier_Builder::setWpa2Passphrase(jstring arg0)
	{
		return callObjectMethod(
			"setWpa2Passphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiNetworkSpecifier_Builder WifiNetworkSpecifier_Builder::setWpa3EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0)
	{
		return callObjectMethod(
			"setWpa3EnterpriseConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.object()
		);
	}
	android::net::wifi::WifiNetworkSpecifier_Builder WifiNetworkSpecifier_Builder::setWpa3Passphrase(jstring arg0)
	{
		return callObjectMethod(
			"setWpa3Passphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0
		);
	}
} // namespace android::net::wifi

