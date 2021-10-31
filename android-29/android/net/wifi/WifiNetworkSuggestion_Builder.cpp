#include "../MacAddress.hpp"
#include "./WifiEnterpriseConfig.hpp"
#include "./WifiNetworkSuggestion.hpp"
#include "./WifiNetworkSuggestion_Builder.hpp"

namespace android::net::wifi
{
	// Fields
	
	// QAndroidJniObject forward
	WifiNetworkSuggestion_Builder::WifiNetworkSuggestion_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WifiNetworkSuggestion_Builder::WifiNetworkSuggestion_Builder()
		: __JniBaseClass(
			"android.net.wifi.WifiNetworkSuggestion$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject WifiNetworkSuggestion_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/WifiNetworkSuggestion;"
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setBssid(android::net::MacAddress arg0)
	{
		return callObjectMethod(
			"setBssid",
			"(Landroid/net/MacAddress;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setIsAppInteractionRequired(jboolean arg0)
	{
		return callObjectMethod(
			"setIsAppInteractionRequired",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setIsEnhancedOpen(jboolean arg0)
	{
		return callObjectMethod(
			"setIsEnhancedOpen",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setIsHiddenSsid(jboolean arg0)
	{
		return callObjectMethod(
			"setIsHiddenSsid",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setIsMetered(jboolean arg0)
	{
		return callObjectMethod(
			"setIsMetered",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setIsUserInteractionRequired(jboolean arg0)
	{
		return callObjectMethod(
			"setIsUserInteractionRequired",
			"(Z)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setPriority(jint arg0)
	{
		return callObjectMethod(
			"setPriority",
			"(I)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setSsid(jstring arg0)
	{
		return callObjectMethod(
			"setSsid",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setWpa2EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0)
	{
		return callObjectMethod(
			"setWpa2EnterpriseConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setWpa2Passphrase(jstring arg0)
	{
		return callObjectMethod(
			"setWpa2Passphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setWpa3EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0)
	{
		return callObjectMethod(
			"setWpa3EnterpriseConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject WifiNetworkSuggestion_Builder::setWpa3Passphrase(jstring arg0)
	{
		return callObjectMethod(
			"setWpa3Passphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiNetworkSuggestion$Builder;",
			arg0
		);
	}
} // namespace android::net::wifi
