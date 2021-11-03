#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::telephony
{
	class CellIdentity;
}
class JObject;
class JString;

namespace android::telephony
{
	class NetworkRegistrationInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint DOMAIN_CS();
		static jint DOMAIN_CS_PS();
		static jint DOMAIN_PS();
		static jint DOMAIN_UNKNOWN();
		static jint NR_STATE_CONNECTED();
		static jint NR_STATE_NONE();
		static jint NR_STATE_NOT_RESTRICTED();
		static jint NR_STATE_RESTRICTED();
		static jint SERVICE_TYPE_DATA();
		static jint SERVICE_TYPE_EMERGENCY();
		static jint SERVICE_TYPE_SMS();
		static jint SERVICE_TYPE_UNKNOWN();
		static jint SERVICE_TYPE_VIDEO();
		static jint SERVICE_TYPE_VOICE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkRegistrationInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkRegistrationInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getAccessNetworkTechnology() const;
		JObject getAvailableServices() const;
		android::telephony::CellIdentity getCellIdentity() const;
		jint getDomain() const;
		JString getRegisteredPlmn() const;
		jint getTransportType() const;
		jint hashCode() const;
		jboolean isRegistered() const;
		jboolean isRoaming() const;
		jboolean isSearching() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

