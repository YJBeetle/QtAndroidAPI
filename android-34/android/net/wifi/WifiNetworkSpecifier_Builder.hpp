#pragma once

#include "../../../JIntArray.hpp"
#include "../MacAddress.def.hpp"
#include "./WifiEnterpriseConfig.def.hpp"
#include "./WifiNetworkSpecifier.def.hpp"
#include "../../os/PatternMatcher.def.hpp"
#include "../../../JString.hpp"
#include "./WifiNetworkSpecifier_Builder.def.hpp"

namespace android::net::wifi
{
	// Fields
	
	// Constructors
	inline WifiNetworkSpecifier_Builder::WifiNetworkSpecifier_Builder()
		: JObject(
			"android.net.wifi.WifiNetworkSpecifier$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::wifi::WifiNetworkSpecifier WifiNetworkSpecifier_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/WifiNetworkSpecifier;"
		);
	}
	inline android::net::wifi::WifiNetworkSpecifier_Builder WifiNetworkSpecifier_Builder::setBand(jint arg0) const
	{
		return callObjectMethod(
			"setBand",
			"(I)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0
		);
	}
	inline android::net::wifi::WifiNetworkSpecifier_Builder WifiNetworkSpecifier_Builder::setBssid(android::net::MacAddress arg0) const
	{
		return callObjectMethod(
			"setBssid",
			"(Landroid/net/MacAddress;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::WifiNetworkSpecifier_Builder WifiNetworkSpecifier_Builder::setBssidPattern(android::net::MacAddress arg0, android::net::MacAddress arg1) const
	{
		return callObjectMethod(
			"setBssidPattern",
			"(Landroid/net/MacAddress;Landroid/net/MacAddress;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::net::wifi::WifiNetworkSpecifier_Builder WifiNetworkSpecifier_Builder::setIsEnhancedOpen(jboolean arg0) const
	{
		return callObjectMethod(
			"setIsEnhancedOpen",
			"(Z)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0
		);
	}
	inline android::net::wifi::WifiNetworkSpecifier_Builder WifiNetworkSpecifier_Builder::setIsHiddenSsid(jboolean arg0) const
	{
		return callObjectMethod(
			"setIsHiddenSsid",
			"(Z)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0
		);
	}
	inline android::net::wifi::WifiNetworkSpecifier_Builder WifiNetworkSpecifier_Builder::setPreferredChannelsFrequenciesMhz(JIntArray arg0) const
	{
		return callObjectMethod(
			"setPreferredChannelsFrequenciesMhz",
			"([I)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.object<jintArray>()
		);
	}
	inline android::net::wifi::WifiNetworkSpecifier_Builder WifiNetworkSpecifier_Builder::setSsid(JString arg0) const
	{
		return callObjectMethod(
			"setSsid",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::wifi::WifiNetworkSpecifier_Builder WifiNetworkSpecifier_Builder::setSsidPattern(android::os::PatternMatcher arg0) const
	{
		return callObjectMethod(
			"setSsidPattern",
			"(Landroid/os/PatternMatcher;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::WifiNetworkSpecifier_Builder WifiNetworkSpecifier_Builder::setWpa2EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0) const
	{
		return callObjectMethod(
			"setWpa2EnterpriseConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::WifiNetworkSpecifier_Builder WifiNetworkSpecifier_Builder::setWpa2Passphrase(JString arg0) const
	{
		return callObjectMethod(
			"setWpa2Passphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::wifi::WifiNetworkSpecifier_Builder WifiNetworkSpecifier_Builder::setWpa3Enterprise192BitModeConfig(android::net::wifi::WifiEnterpriseConfig arg0) const
	{
		return callObjectMethod(
			"setWpa3Enterprise192BitModeConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::WifiNetworkSpecifier_Builder WifiNetworkSpecifier_Builder::setWpa3EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0) const
	{
		return callObjectMethod(
			"setWpa3EnterpriseConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::WifiNetworkSpecifier_Builder WifiNetworkSpecifier_Builder::setWpa3EnterpriseStandardModeConfig(android::net::wifi::WifiEnterpriseConfig arg0) const
	{
		return callObjectMethod(
			"setWpa3EnterpriseStandardModeConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::WifiNetworkSpecifier_Builder WifiNetworkSpecifier_Builder::setWpa3Passphrase(JString arg0) const
	{
		return callObjectMethod(
			"setWpa3Passphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSpecifier$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::net::wifi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi;
#endif
