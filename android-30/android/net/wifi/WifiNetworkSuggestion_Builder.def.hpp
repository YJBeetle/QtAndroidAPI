#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class MacAddress;
}
namespace android::net::wifi
{
	class WifiEnterpriseConfig;
}
namespace android::net::wifi
{
	class WifiNetworkSuggestion;
}
namespace android::net::wifi::hotspot2
{
	class PasspointConfiguration;
}
class JString;

namespace android::net::wifi
{
	class WifiNetworkSuggestion_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiNetworkSuggestion_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiNetworkSuggestion_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WifiNetworkSuggestion_Builder();
		
		// Methods
		android::net::wifi::WifiNetworkSuggestion build() const;
		android::net::wifi::WifiNetworkSuggestion_Builder setBssid(android::net::MacAddress arg0) const;
		android::net::wifi::WifiNetworkSuggestion_Builder setCredentialSharedWithUser(jboolean arg0) const;
		android::net::wifi::WifiNetworkSuggestion_Builder setIsAppInteractionRequired(jboolean arg0) const;
		android::net::wifi::WifiNetworkSuggestion_Builder setIsEnhancedOpen(jboolean arg0) const;
		android::net::wifi::WifiNetworkSuggestion_Builder setIsHiddenSsid(jboolean arg0) const;
		android::net::wifi::WifiNetworkSuggestion_Builder setIsInitialAutojoinEnabled(jboolean arg0) const;
		android::net::wifi::WifiNetworkSuggestion_Builder setIsMetered(jboolean arg0) const;
		android::net::wifi::WifiNetworkSuggestion_Builder setIsUserInteractionRequired(jboolean arg0) const;
		android::net::wifi::WifiNetworkSuggestion_Builder setPasspointConfig(android::net::wifi::hotspot2::PasspointConfiguration arg0) const;
		android::net::wifi::WifiNetworkSuggestion_Builder setPriority(jint arg0) const;
		android::net::wifi::WifiNetworkSuggestion_Builder setSsid(JString arg0) const;
		android::net::wifi::WifiNetworkSuggestion_Builder setUntrusted(jboolean arg0) const;
		android::net::wifi::WifiNetworkSuggestion_Builder setWapiEnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0) const;
		android::net::wifi::WifiNetworkSuggestion_Builder setWapiPassphrase(JString arg0) const;
		android::net::wifi::WifiNetworkSuggestion_Builder setWpa2EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0) const;
		android::net::wifi::WifiNetworkSuggestion_Builder setWpa2Passphrase(JString arg0) const;
		android::net::wifi::WifiNetworkSuggestion_Builder setWpa3EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0) const;
		android::net::wifi::WifiNetworkSuggestion_Builder setWpa3Passphrase(JString arg0) const;
	};
} // namespace android::net::wifi

