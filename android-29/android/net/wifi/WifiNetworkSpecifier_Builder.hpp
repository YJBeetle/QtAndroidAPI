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
		
		WifiNetworkSpecifier_Builder(QAndroidJniObject obj);
		// Constructors
		WifiNetworkSpecifier_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setBssid(android::net::MacAddress arg0);
		QAndroidJniObject setBssidPattern(android::net::MacAddress arg0, android::net::MacAddress arg1);
		QAndroidJniObject setIsEnhancedOpen(jboolean arg0);
		QAndroidJniObject setIsHiddenSsid(jboolean arg0);
		QAndroidJniObject setSsid(jstring arg0);
		QAndroidJniObject setSsidPattern(android::os::PatternMatcher arg0);
		QAndroidJniObject setWpa2EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0);
		QAndroidJniObject setWpa2Passphrase(jstring arg0);
		QAndroidJniObject setWpa3EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0);
		QAndroidJniObject setWpa3Passphrase(jstring arg0);
	};
} // namespace android::net::wifi

