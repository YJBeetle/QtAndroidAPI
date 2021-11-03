#pragma once

#include "../../../../JObject.hpp"

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
class JObject;
class JString;

namespace android::net::wifi::rtt
{
	class RangingResult : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint STATUS_FAIL();
		static jint STATUS_RESPONDER_DOES_NOT_SUPPORT_IEEE80211MC();
		static jint STATUS_SUCCESS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RangingResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RangingResult(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getDistanceMm();
		jint getDistanceStdDevMm();
		android::net::MacAddress getMacAddress();
		jint getNumAttemptedMeasurements();
		jint getNumSuccessfulMeasurements();
		android::net::wifi::aware::PeerHandle getPeerHandle();
		jlong getRangingTimestampMillis();
		jint getRssi();
		jint getStatus();
		android::net::wifi::rtt::ResponderLocation getUnverifiedResponderLocation();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::rtt

