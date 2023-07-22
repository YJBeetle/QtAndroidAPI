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
	class WifiSsid;
}
namespace android::net::wifi::hotspot2
{
	class PasspointConfiguration;
}
namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class ParcelUuid;
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
		WifiNetworkSuggestion(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::net::MacAddress getBssid() const;
		android::net::wifi::WifiEnterpriseConfig getEnterpriseConfig() const;
		jint getMacRandomizationSetting() const;
		JString getPassphrase() const;
		android::net::wifi::hotspot2::PasspointConfiguration getPasspointConfig() const;
		jint getPriority() const;
		jint getPriorityGroup() const;
		JString getSsid() const;
		android::os::ParcelUuid getSubscriptionGroup() const;
		jint getSubscriptionId() const;
		android::net::wifi::WifiSsid getWifiSsid() const;
		jint hashCode() const;
		jboolean isAppInteractionRequired() const;
		jboolean isCarrierMerged() const;
		jboolean isCredentialSharedWithUser() const;
		jboolean isEnhancedOpen() const;
		jboolean isHiddenSsid() const;
		jboolean isInitialAutojoinEnabled() const;
		jboolean isMetered() const;
		jboolean isRestricted() const;
		jboolean isUntrusted() const;
		jboolean isUserInteractionRequired() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi

