#pragma once

#include "../../../../JByteArray.hpp"
#include "../../MacAddress.def.hpp"
#include "../aware/PeerHandle.def.hpp"
#include "./RangingResult.def.hpp"
#include "./ResponderLocation.def.hpp"
#include "./RangingResult_Builder.def.hpp"

namespace android::net::wifi::rtt
{
	// Fields
	
	// Constructors
	inline RangingResult_Builder::RangingResult_Builder()
		: JObject(
			"android.net.wifi.rtt.RangingResult$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::wifi::rtt::RangingResult RangingResult_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/rtt/RangingResult;"
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::set80211azInitiatorTxLtfRepetitionsCount(jint arg0) const
	{
		return callObjectMethod(
			"set80211azInitiatorTxLtfRepetitionsCount",
			"(I)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::set80211azNtbMeasurement(jboolean arg0) const
	{
		return callObjectMethod(
			"set80211azNtbMeasurement",
			"(Z)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::set80211azNumberOfRxSpatialStreams(jint arg0) const
	{
		return callObjectMethod(
			"set80211azNumberOfRxSpatialStreams",
			"(I)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::set80211azNumberOfTxSpatialStreams(jint arg0) const
	{
		return callObjectMethod(
			"set80211azNumberOfTxSpatialStreams",
			"(I)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::set80211azResponderTxLtfRepetitionsCount(jint arg0) const
	{
		return callObjectMethod(
			"set80211azResponderTxLtfRepetitionsCount",
			"(I)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::set80211mcMeasurement(jboolean arg0) const
	{
		return callObjectMethod(
			"set80211mcMeasurement",
			"(Z)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::setDistanceMm(jint arg0) const
	{
		return callObjectMethod(
			"setDistanceMm",
			"(I)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::setDistanceStdDevMm(jint arg0) const
	{
		return callObjectMethod(
			"setDistanceStdDevMm",
			"(I)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::setLci(JByteArray arg0) const
	{
		return callObjectMethod(
			"setLci",
			"([B)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::setLcr(JByteArray arg0) const
	{
		return callObjectMethod(
			"setLcr",
			"([B)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::setMacAddress(android::net::MacAddress arg0) const
	{
		return callObjectMethod(
			"setMacAddress",
			"(Landroid/net/MacAddress;)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::setMaxTimeBetweenNtbMeasurementsMicros(jlong arg0) const
	{
		return callObjectMethod(
			"setMaxTimeBetweenNtbMeasurementsMicros",
			"(J)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::setMeasurementBandwidth(jint arg0) const
	{
		return callObjectMethod(
			"setMeasurementBandwidth",
			"(I)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::setMeasurementChannelFrequencyMHz(jint arg0) const
	{
		return callObjectMethod(
			"setMeasurementChannelFrequencyMHz",
			"(I)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::setMinTimeBetweenNtbMeasurementsMicros(jlong arg0) const
	{
		return callObjectMethod(
			"setMinTimeBetweenNtbMeasurementsMicros",
			"(J)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::setNumAttemptedMeasurements(jint arg0) const
	{
		return callObjectMethod(
			"setNumAttemptedMeasurements",
			"(I)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::setNumSuccessfulMeasurements(jint arg0) const
	{
		return callObjectMethod(
			"setNumSuccessfulMeasurements",
			"(I)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::setPasnComebackAfterMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setPasnComebackAfterMillis",
			"(J)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::setPasnComebackCookie(JByteArray arg0) const
	{
		return callObjectMethod(
			"setPasnComebackCookie",
			"([B)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::setPeerHandle(android::net::wifi::aware::PeerHandle arg0) const
	{
		return callObjectMethod(
			"setPeerHandle",
			"(Landroid/net/wifi/aware/PeerHandle;)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0.object()
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::setRangingAuthenticated(jboolean arg0) const
	{
		return callObjectMethod(
			"setRangingAuthenticated",
			"(Z)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::setRangingFrameProtected(jboolean arg0) const
	{
		return callObjectMethod(
			"setRangingFrameProtected",
			"(Z)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::setRangingTimestampMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setRangingTimestampMillis",
			"(J)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::setRssi(jint arg0) const
	{
		return callObjectMethod(
			"setRssi",
			"(I)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::setSecureHeLtfEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setSecureHeLtfEnabled",
			"(Z)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::setSecureHeLtfProtocolVersion(jint arg0) const
	{
		return callObjectMethod(
			"setSecureHeLtfProtocolVersion",
			"(I)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::setStatus(jint arg0) const
	{
		return callObjectMethod(
			"setStatus",
			"(I)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0
		);
	}
	inline android::net::wifi::rtt::RangingResult_Builder RangingResult_Builder::setUnverifiedResponderLocation(android::net::wifi::rtt::ResponderLocation arg0) const
	{
		return callObjectMethod(
			"setUnverifiedResponderLocation",
			"(Landroid/net/wifi/rtt/ResponderLocation;)Landroid/net/wifi/rtt/RangingResult$Builder;",
			arg0.object()
		);
	}
} // namespace android::net::wifi::rtt

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::rtt;
#endif
