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
	class WifiNetworkSuggestion;
}

namespace android::net::wifi
{
	class WifiNetworkSuggestion_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiNetworkSuggestion_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiNetworkSuggestion_Builder(QAndroidJniObject obj);
		
		// Constructors
		WifiNetworkSuggestion_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setBssid(android::net::MacAddress arg0);
		QAndroidJniObject setIsAppInteractionRequired(jboolean arg0);
		QAndroidJniObject setIsEnhancedOpen(jboolean arg0);
		QAndroidJniObject setIsHiddenSsid(jboolean arg0);
		QAndroidJniObject setIsMetered(jboolean arg0);
		QAndroidJniObject setIsUserInteractionRequired(jboolean arg0);
		QAndroidJniObject setPriority(jint arg0);
		QAndroidJniObject setSsid(jstring arg0);
		QAndroidJniObject setWpa2EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0);
		QAndroidJniObject setWpa2Passphrase(jstring arg0);
		QAndroidJniObject setWpa3EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0);
		QAndroidJniObject setWpa3Passphrase(jstring arg0);
	};
} // namespace android::net::wifi

