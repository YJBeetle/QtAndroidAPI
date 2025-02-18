#pragma once

#include "../../../JObject.hpp"

class JIntArray;
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
	class WifiNetworkSpecifier;
}
namespace android::os
{
	class PatternMatcher;
}
class JString;

namespace android::net::wifi
{
	class WifiNetworkSpecifier_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiNetworkSpecifier_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiNetworkSpecifier_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WifiNetworkSpecifier_Builder();
		
		// Methods
		android::net::wifi::WifiNetworkSpecifier build() const;
		android::net::wifi::WifiNetworkSpecifier_Builder setBand(jint arg0) const;
		android::net::wifi::WifiNetworkSpecifier_Builder setBssid(android::net::MacAddress arg0) const;
		android::net::wifi::WifiNetworkSpecifier_Builder setBssidPattern(android::net::MacAddress arg0, android::net::MacAddress arg1) const;
		android::net::wifi::WifiNetworkSpecifier_Builder setIsEnhancedOpen(jboolean arg0) const;
		android::net::wifi::WifiNetworkSpecifier_Builder setIsHiddenSsid(jboolean arg0) const;
		android::net::wifi::WifiNetworkSpecifier_Builder setPreferredChannelsFrequenciesMhz(JIntArray arg0) const;
		android::net::wifi::WifiNetworkSpecifier_Builder setSsid(JString arg0) const;
		android::net::wifi::WifiNetworkSpecifier_Builder setSsidPattern(android::os::PatternMatcher arg0) const;
		android::net::wifi::WifiNetworkSpecifier_Builder setWpa2EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0) const;
		android::net::wifi::WifiNetworkSpecifier_Builder setWpa2Passphrase(JString arg0) const;
		android::net::wifi::WifiNetworkSpecifier_Builder setWpa3Enterprise192BitModeConfig(android::net::wifi::WifiEnterpriseConfig arg0) const;
		android::net::wifi::WifiNetworkSpecifier_Builder setWpa3EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0) const;
		android::net::wifi::WifiNetworkSpecifier_Builder setWpa3EnterpriseStandardModeConfig(android::net::wifi::WifiEnterpriseConfig arg0) const;
		android::net::wifi::WifiNetworkSpecifier_Builder setWpa3Passphrase(JString arg0) const;
	};
} // namespace android::net::wifi

