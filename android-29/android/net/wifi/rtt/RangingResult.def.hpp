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
		
		// QJniObject forward
		template<typename ...Ts> explicit RangingResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RangingResult(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getDistanceMm() const;
		jint getDistanceStdDevMm() const;
		android::net::MacAddress getMacAddress() const;
		jint getNumAttemptedMeasurements() const;
		jint getNumSuccessfulMeasurements() const;
		android::net::wifi::aware::PeerHandle getPeerHandle() const;
		jlong getRangingTimestampMillis() const;
		jint getRssi() const;
		jint getStatus() const;
		android::net::wifi::rtt::ResponderLocation getUnverifiedResponderLocation() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::rtt

