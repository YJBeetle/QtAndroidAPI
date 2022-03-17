#pragma once

#include "../MacAddress.def.hpp"
#include "./WifiEnterpriseConfig.def.hpp"
#include "./WifiNetworkSuggestion.def.hpp"
#include "../../../JString.hpp"
#include "./WifiNetworkSuggestion_Builder.def.hpp"

namespace android::net::wifi
{
	// Fields
	
	// Constructors
	inline WifiNetworkSuggestion_Builder::WifiNetworkSuggestion_Builder()
		: JObject(
			"android.net.wifi.WifiNetworkSuggestion$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::wifi::WifiNetworkSuggestion WifiNetworkSuggestion_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/WifiNetworkSuggestion;"
		);
	}
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setBssid(android::net::MacAddress arg0) const
	{
		return callObjectMethod(
			"setBssid",
			"(Landroid/net/MacAddress;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setIsAppInteractionRequired(jboolean arg0) const
	{
		return callObjectMethod(
			"setIsAppInteractionRequired",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setIsEnhancedOpen(jboolean arg0) const
	{
		return callObjectMethod(
			"setIsEnhancedOpen",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setIsHiddenSsid(jboolean arg0) const
	{
		return callObjectMethod(
			"setIsHiddenSsid",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setIsMetered(jboolean arg0) const
	{
		return callObjectMethod(
			"setIsMetered",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setIsUserInteractionRequired(jboolean arg0) const
	{
		return callObjectMethod(
			"setIsUserInteractionRequired",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setPriority(jint arg0) const
	{
		return callObjectMethod(
			"setPriority",
			"(I)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setSsid(JString arg0) const
	{
		return callObjectMethod(
			"setSsid",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setWpa2EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0) const
	{
		return callObjectMethod(
			"setWpa2EnterpriseConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setWpa2Passphrase(JString arg0) const
	{
		return callObjectMethod(
			"setWpa2Passphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setWpa3EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0) const
	{
		return callObjectMethod(
			"setWpa3EnterpriseConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setWpa3Passphrase(JString arg0) const
	{
		return callObjectMethod(
			"setWpa3Passphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::net::wifi

// Base class headers

