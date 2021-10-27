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
namespace android::net::wifi::rtt
{
	class ResponderLocation;
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
		static QAndroidJniObject CREATOR();
		static jint STATUS_FAIL();
		static jint STATUS_RESPONDER_DOES_NOT_SUPPORT_IEEE80211MC();
		static jint STATUS_SUCCESS();
		
		RangingResult(QAndroidJniObject obj);
		// Constructors
		RangingResult() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getDistanceMm();
		jint getDistanceStdDevMm();
		QAndroidJniObject getMacAddress();
		jint getNumAttemptedMeasurements();
		jint getNumSuccessfulMeasurements();
		QAndroidJniObject getPeerHandle();
		jlong getRangingTimestampMillis();
		jint getRssi();
		jint getStatus();
		QAndroidJniObject getUnverifiedResponderLocation();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::rtt

