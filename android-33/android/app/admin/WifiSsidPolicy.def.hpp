#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;

namespace android::app::admin
{
	class WifiSsidPolicy : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint WIFI_SSID_POLICY_TYPE_ALLOWLIST();
		static jint WIFI_SSID_POLICY_TYPE_DENYLIST();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiSsidPolicy(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiSsidPolicy(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WifiSsidPolicy(jint arg0, JObject arg1);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getPolicyType() const;
		JObject getSsids() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::admin

