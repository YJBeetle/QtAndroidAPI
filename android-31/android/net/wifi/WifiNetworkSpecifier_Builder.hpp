#pragma once

#include "../../../__JniBaseClass.hpp"

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

namespace android::net::wifi
{
	class WifiNetworkSpecifier_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiNetworkSpecifier_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiNetworkSpecifier_Builder(QJniObject obj);
		
		// Constructors
		WifiNetworkSpecifier_Builder();
		
		// Methods
		android::net::wifi::WifiNetworkSpecifier build();
		android::net::wifi::WifiNetworkSpecifier_Builder setBand(jint arg0);
		android::net::wifi::WifiNetworkSpecifier_Builder setBssid(android::net::MacAddress arg0);
		android::net::wifi::WifiNetworkSpecifier_Builder setBssidPattern(android::net::MacAddress arg0, android::net::MacAddress arg1);
		android::net::wifi::WifiNetworkSpecifier_Builder setIsEnhancedOpen(jboolean arg0);
		android::net::wifi::WifiNetworkSpecifier_Builder setIsHiddenSsid(jboolean arg0);
		android::net::wifi::WifiNetworkSpecifier_Builder setSsid(jstring arg0);
		android::net::wifi::WifiNetworkSpecifier_Builder setSsidPattern(android::os::PatternMatcher arg0);
		android::net::wifi::WifiNetworkSpecifier_Builder setWpa2EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0);
		android::net::wifi::WifiNetworkSpecifier_Builder setWpa2Passphrase(jstring arg0);
		android::net::wifi::WifiNetworkSpecifier_Builder setWpa3Enterprise192BitModeConfig(android::net::wifi::WifiEnterpriseConfig arg0);
		android::net::wifi::WifiNetworkSpecifier_Builder setWpa3EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0);
		android::net::wifi::WifiNetworkSpecifier_Builder setWpa3EnterpriseStandardModeConfig(android::net::wifi::WifiEnterpriseConfig arg0);
		android::net::wifi::WifiNetworkSpecifier_Builder setWpa3Passphrase(jstring arg0);
	};
} // namespace android::net::wifi

