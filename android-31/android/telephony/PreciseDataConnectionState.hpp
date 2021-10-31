#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class LinkProperties;
}
namespace android::os
{
	class Parcel;
}
namespace android::telephony::data
{
	class ApnSetting;
}

namespace android::telephony
{
	class PreciseDataConnectionState : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PreciseDataConnectionState(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PreciseDataConnectionState(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		android::telephony::data::ApnSetting getApnSetting();
		jint getId();
		jint getLastCauseCode();
		android::net::LinkProperties getLinkProperties();
		jint getNetworkType();
		jint getState();
		jint getTransportType();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

