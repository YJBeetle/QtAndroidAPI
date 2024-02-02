#pragma once

#include "../MacAddress.def.hpp"
#include "./WifiEnterpriseConfig.def.hpp"
#include "./WifiNetworkSuggestion.def.hpp"
#include "./WifiSsid.def.hpp"
#include "./hotspot2/PasspointConfiguration.def.hpp"
#include "../../os/ParcelUuid.def.hpp"
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
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setCarrierMerged(jboolean arg0) const
	{
		return callObjectMethod(
			"setCarrierMerged",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setCredentialSharedWithUser(jboolean arg0) const
	{
		return callObjectMethod(
			"setCredentialSharedWithUser",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
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
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setIsInitialAutojoinEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setIsInitialAutojoinEnabled",
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
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setIsWpa3SaeH2eOnlyModeEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setIsWpa3SaeH2eOnlyModeEnabled",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setMacRandomizationSetting(jint arg0) const
	{
		return callObjectMethod(
			"setMacRandomizationSetting",
			"(I)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setPasspointConfig(android::net::wifi::hotspot2::PasspointConfiguration arg0) const
	{
		return callObjectMethod(
			"setPasspointConfig",
			"(Landroid/net/wifi/hotspot2/PasspointConfiguration;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object()
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
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setPriorityGroup(jint arg0) const
	{
		return callObjectMethod(
			"setPriorityGroup",
			"(I)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setRestricted(jboolean arg0) const
	{
		return callObjectMethod(
			"setRestricted",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
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
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setSubscriptionGroup(android::os::ParcelUuid arg0) const
	{
		return callObjectMethod(
			"setSubscriptionGroup",
			"(Landroid/os/ParcelUuid;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setSubscriptionId(jint arg0) const
	{
		return callObjectMethod(
			"setSubscriptionId",
			"(I)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setUntrusted(jboolean arg0) const
	{
		return callObjectMethod(
			"setUntrusted",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setWapiEnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0) const
	{
		return callObjectMethod(
			"setWapiEnterpriseConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setWapiPassphrase(JString arg0) const
	{
		return callObjectMethod(
			"setWapiPassphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setWifiSsid(android::net::wifi::WifiSsid arg0) const
	{
		return callObjectMethod(
			"setWifiSsid",
			"(Landroid/net/wifi/WifiSsid;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object()
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
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setWpa3Enterprise192BitModeConfig(android::net::wifi::WifiEnterpriseConfig arg0) const
	{
		return callObjectMethod(
			"setWpa3Enterprise192BitModeConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object()
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
	inline android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setWpa3EnterpriseStandardModeConfig(android::net::wifi::WifiEnterpriseConfig arg0) const
	{
		return callObjectMethod(
			"setWpa3EnterpriseStandardModeConfig",
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi;
#endif
