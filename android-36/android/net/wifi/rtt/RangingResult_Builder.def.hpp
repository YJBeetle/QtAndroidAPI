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
	class RangingResult;
}
namespace android::net::wifi::rtt
{
	class ResponderLocation;
}

namespace android::net::wifi::rtt
{
	class RangingResult_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RangingResult_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RangingResult_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RangingResult_Builder();
		
		// Methods
		android::net::wifi::rtt::RangingResult build() const;
		android::net::wifi::rtt::RangingResult_Builder set80211azInitiatorTxLtfRepetitionsCount(jint arg0) const;
		android::net::wifi::rtt::RangingResult_Builder set80211azNtbMeasurement(jboolean arg0) const;
		android::net::wifi::rtt::RangingResult_Builder set80211azNumberOfRxSpatialStreams(jint arg0) const;
		android::net::wifi::rtt::RangingResult_Builder set80211azNumberOfTxSpatialStreams(jint arg0) const;
		android::net::wifi::rtt::RangingResult_Builder set80211azResponderTxLtfRepetitionsCount(jint arg0) const;
		android::net::wifi::rtt::RangingResult_Builder set80211mcMeasurement(jboolean arg0) const;
		android::net::wifi::rtt::RangingResult_Builder setDistanceMm(jint arg0) const;
		android::net::wifi::rtt::RangingResult_Builder setDistanceStdDevMm(jint arg0) const;
		android::net::wifi::rtt::RangingResult_Builder setLci(JByteArray arg0) const;
		android::net::wifi::rtt::RangingResult_Builder setLcr(JByteArray arg0) const;
		android::net::wifi::rtt::RangingResult_Builder setMacAddress(android::net::MacAddress arg0) const;
		android::net::wifi::rtt::RangingResult_Builder setMaxTimeBetweenNtbMeasurementsMicros(jlong arg0) const;
		android::net::wifi::rtt::RangingResult_Builder setMeasurementBandwidth(jint arg0) const;
		android::net::wifi::rtt::RangingResult_Builder setMeasurementChannelFrequencyMHz(jint arg0) const;
		android::net::wifi::rtt::RangingResult_Builder setMinTimeBetweenNtbMeasurementsMicros(jlong arg0) const;
		android::net::wifi::rtt::RangingResult_Builder setNumAttemptedMeasurements(jint arg0) const;
		android::net::wifi::rtt::RangingResult_Builder setNumSuccessfulMeasurements(jint arg0) const;
		android::net::wifi::rtt::RangingResult_Builder setPasnComebackAfterMillis(jlong arg0) const;
		android::net::wifi::rtt::RangingResult_Builder setPasnComebackCookie(JByteArray arg0) const;
		android::net::wifi::rtt::RangingResult_Builder setPeerHandle(android::net::wifi::aware::PeerHandle arg0) const;
		android::net::wifi::rtt::RangingResult_Builder setRangingAuthenticated(jboolean arg0) const;
		android::net::wifi::rtt::RangingResult_Builder setRangingFrameProtected(jboolean arg0) const;
		android::net::wifi::rtt::RangingResult_Builder setRangingTimestampMillis(jlong arg0) const;
		android::net::wifi::rtt::RangingResult_Builder setRssi(jint arg0) const;
		android::net::wifi::rtt::RangingResult_Builder setSecureHeLtfEnabled(jboolean arg0) const;
		android::net::wifi::rtt::RangingResult_Builder setSecureHeLtfProtocolVersion(jint arg0) const;
		android::net::wifi::rtt::RangingResult_Builder setStatus(jint arg0) const;
		android::net::wifi::rtt::RangingResult_Builder setUnverifiedResponderLocation(android::net::wifi::rtt::ResponderLocation arg0) const;
	};
} // namespace android::net::wifi::rtt

