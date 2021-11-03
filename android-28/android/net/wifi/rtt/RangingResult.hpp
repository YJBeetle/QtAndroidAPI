#pragma once

#include "../../../../JObject.hpp"

class JByteArray;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit RangingResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RangingResult(QJniObject obj);
		
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
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::rtt

