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
namespace android::net::wifi::hotspot2
{
	class PasspointConfiguration;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net::wifi
{
	class WifiNetworkSuggestion : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint RANDOMIZATION_NON_PERSISTENT();
		static jint RANDOMIZATION_PERSISTENT();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiNetworkSuggestion(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiNetworkSuggestion(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		android::net::MacAddress getBssid();
		android::net::wifi::WifiEnterpriseConfig getEnterpriseConfig();
		JString getPassphrase();
		android::net::wifi::hotspot2::PasspointConfiguration getPasspointConfig();
		jint getPriority();
		jint getPriorityGroup();
		JString getSsid();
		jint getSubscriptionId();
		jint hashCode();
		jboolean isAppInteractionRequired();
		jboolean isCarrierMerged();
		jboolean isCredentialSharedWithUser();
		jboolean isEnhancedOpen();
		jboolean isHiddenSsid();
		jboolean isInitialAutojoinEnabled();
		jboolean isMetered();
		jboolean isUntrusted();
		jboolean isUserInteractionRequired();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

