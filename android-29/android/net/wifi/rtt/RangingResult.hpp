#pragma once

#include "../../../../JByteArray.hpp"
#include "../../MacAddress.def.hpp"
#include "../aware/PeerHandle.def.hpp"
#include "./ResponderLocation.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./RangingResult.def.hpp"

namespace android::net::wifi::rtt
{
	// Fields
	inline JObject RangingResult::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.rtt.RangingResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint RangingResult::STATUS_FAIL()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.RangingResult",
			"STATUS_FAIL"
		);
	}
	inline jint RangingResult::STATUS_RESPONDER_DOES_NOT_SUPPORT_IEEE80211MC()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.RangingResult",
			"STATUS_RESPONDER_DOES_NOT_SUPPORT_IEEE80211MC"
		);
	}
	inline jint RangingResult::STATUS_SUCCESS()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.RangingResult",
			"STATUS_SUCCESS"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RangingResult::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean RangingResult::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint RangingResult::getDistanceMm() const
	{
		return callMethod<jint>(
			"getDistanceMm",
			"()I"
		);
	}
	inline jint RangingResult::getDistanceStdDevMm() const
	{
		return callMethod<jint>(
			"getDistanceStdDevMm",
			"()I"
		);
	}
	inline android::net::MacAddress RangingResult::getMacAddress() const
	{
		return callObjectMethod(
			"getMacAddress",
			"()Landroid/net/MacAddress;"
		);
	}
	inline jint RangingResult::getNumAttemptedMeasurements() const
	{
		return callMethod<jint>(
			"getNumAttemptedMeasurements",
			"()I"
		);
	}
	inline jint RangingResult::getNumSuccessfulMeasurements() const
	{
		return callMethod<jint>(
			"getNumSuccessfulMeasurements",
			"()I"
		);
	}
	inline android::net::wifi::aware::PeerHandle RangingResult::getPeerHandle() const
	{
		return callObjectMethod(
			"getPeerHandle",
			"()Landroid/net/wifi/aware/PeerHandle;"
		);
	}
	inline jlong RangingResult::getRangingTimestampMillis() const
	{
		return callMethod<jlong>(
			"getRangingTimestampMillis",
			"()J"
		);
	}
	inline jint RangingResult::getRssi() const
	{
		return callMethod<jint>(
			"getRssi",
			"()I"
		);
	}
	inline jint RangingResult::getStatus() const
	{
		return callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	inline android::net::wifi::rtt::ResponderLocation RangingResult::getUnverifiedResponderLocation() const
	{
		return callObjectMethod(
			"getUnverifiedResponderLocation",
			"()Landroid/net/wifi/rtt/ResponderLocation;"
		);
	}
	inline jint RangingResult::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString RangingResult::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void RangingResult::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::rtt

// Base class headers

