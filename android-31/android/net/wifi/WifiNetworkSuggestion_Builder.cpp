#include "../MacAddress.hpp"
#include "./WifiEnterpriseConfig.hpp"
#include "./WifiNetworkSuggestion.hpp"
#include "./hotspot2/PasspointConfiguration.hpp"
#include "../../../JString.hpp"
#include "./WifiNetworkSuggestion_Builder.hpp"

namespace android::net::wifi
{
	// Fields
	
	// QAndroidJniObject forward
	WifiNetworkSuggestion_Builder::WifiNetworkSuggestion_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	WifiNetworkSuggestion_Builder::WifiNetworkSuggestion_Builder()
		: JObject(
			"android.net.wifi.WifiNetworkSuggestion$Builder",
			"()V"
		) {}
	
	// Methods
	android::net::wifi::WifiNetworkSuggestion WifiNetworkSuggestion_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/WifiNetworkSuggestion;"
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setBssid(android::net::MacAddress arg0)
	{
		return callObjectMethod(
			"setBssid",
			"(Landroid/net/MacAddress;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object()
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setCarrierMerged(jboolean arg0)
	{
		return callObjectMethod(
			"setCarrierMerged",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setCredentialSharedWithUser(jboolean arg0)
	{
		return callObjectMethod(
			"setCredentialSharedWithUser",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setIsAppInteractionRequired(jboolean arg0)
	{
		return callObjectMethod(
			"setIsAppInteractionRequired",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setIsEnhancedOpen(jboolean arg0)
	{
		return callObjectMethod(
			"setIsEnhancedOpen",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setIsHiddenSsid(jboolean arg0)
	{
		return callObjectMethod(
			"setIsHiddenSsid",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setIsInitialAutojoinEnabled(jboolean arg0)
	{
		return callObjectMethod(
			"setIsInitialAutojoinEnabled",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setIsMetered(jboolean arg0)
	{
		return callObjectMethod(
			"setIsMetered",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setIsUserInteractionRequired(jboolean arg0)
	{
		return callObjectMethod(
			"setIsUserInteractionRequired",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setIsWpa3SaeH2eOnlyModeEnabled(jboolean arg0)
	{
		return callObjectMethod(
			"setIsWpa3SaeH2eOnlyModeEnabled",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setMacRandomizationSetting(jint arg0)
	{
		return callObjectMethod(
			"setMacRandomizationSetting",
			"(I)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setPasspointConfig(android::net::wifi::hotspot2::PasspointConfiguration arg0)
	{
		return callObjectMethod(
			"setPasspointConfig",
			"(Landroid/net/wifi/hotspot2/PasspointConfiguration;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object()
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setPriority(jint arg0)
	{
		return callObjectMethod(
			"setPriority",
			"(I)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setPriorityGroup(jint arg0)
	{
		return callObjectMethod(
			"setPriorityGroup",
			"(I)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setSsid(JString arg0)
	{
		return callObjectMethod(
			"setSsid",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object<jstring>()
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setSubscriptionId(jint arg0)
	{
		return callObjectMethod(
			"setSubscriptionId",
			"(I)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setUntrusted(jboolean arg0)
	{
		return callObjectMethod(
			"setUntrusted",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setWapiEnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0)
	{
		return callObjectMethod(
			"setWapiEnterpriseConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object()
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setWapiPassphrase(JString arg0)
	{
		return callObjectMethod(
			"setWapiPassphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object<jstring>()
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setWpa2EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0)
	{
		return callObjectMethod(
			"setWpa2EnterpriseConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object()
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setWpa2Passphrase(JString arg0)
	{
		return callObjectMethod(
			"setWpa2Passphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object<jstring>()
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setWpa3Enterprise192BitModeConfig(android::net::wifi::WifiEnterpriseConfig arg0)
	{
		return callObjectMethod(
			"setWpa3Enterprise192BitModeConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object()
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setWpa3EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0)
	{
		return callObjectMethod(
			"setWpa3EnterpriseConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object()
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setWpa3EnterpriseStandardModeConfig(android::net::wifi::WifiEnterpriseConfig arg0)
	{
		return callObjectMethod(
			"setWpa3EnterpriseStandardModeConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object()
		);
	}
	android::net::wifi::WifiNetworkSuggestion_Builder WifiNetworkSuggestion_Builder::setWpa3Passphrase(JString arg0)
	{
		return callObjectMethod(
			"setWpa3Passphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::net::wifi

