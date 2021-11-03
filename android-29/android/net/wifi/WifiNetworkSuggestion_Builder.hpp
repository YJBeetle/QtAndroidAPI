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
class JString;

namespace android::net::wifi
{
	class WifiNetworkSuggestion_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiNetworkSuggestion_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiNetworkSuggestion_Builder(QJniObject obj);
		
		// Constructors
		WifiNetworkSuggestion_Builder();
		
		// Methods
		android::net::wifi::WifiNetworkSuggestion build();
		android::net::wifi::WifiNetworkSuggestion_Builder setBssid(android::net::MacAddress arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setIsAppInteractionRequired(jboolean arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setIsEnhancedOpen(jboolean arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setIsHiddenSsid(jboolean arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setIsMetered(jboolean arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setIsUserInteractionRequired(jboolean arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setPriority(jint arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setSsid(JString arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setWpa2EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setWpa2Passphrase(JString arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setWpa3EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setWpa3Passphrase(JString arg0);
	};
} // namespace android::net::wifi

