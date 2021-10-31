#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::telephony
{
	class CellIdentity;
}

namespace android::telephony
{
	class NetworkRegistrationInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
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
		template<typename ...Ts> explicit NetworkRegistrationInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NetworkRegistrationInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getAccessNetworkTechnology();
		__JniBaseClass getAvailableServices();
		android::telephony::CellIdentity getCellIdentity();
		jint getDomain();
		jstring getRegisteredPlmn();
		jint getTransportType();
		jint hashCode();
		jboolean isRegistered();
		jboolean isRoaming();
		jboolean isSearching();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

