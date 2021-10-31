#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::net
{
	class MacAddress;
}
namespace android::net::wifi::aware
{
	class PeerHandle;
}
namespace android::os
{
	class Parcel;
}

namespace android::net::wifi::rtt
{
	class RangingResult : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint STATUS_FAIL();
		static jint STATUS_RESPONDER_DOES_NOT_SUPPORT_IEEE80211MC();
		static jint STATUS_SUCCESS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RangingResult(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RangingResult(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getDistanceMm();
		jint getDistanceStdDevMm();
		android::net::MacAddress getMacAddress();
		jint getNumAttemptedMeasurements();
		jint getNumSuccessfulMeasurements();
		android::net::wifi::aware::PeerHandle getPeerHandle();
		jlong getRangingTimestampMillis();
		jint getRssi();
		jint getStatus();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::rtt

