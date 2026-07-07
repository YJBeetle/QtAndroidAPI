#pragma once

#include "../../JByteArray.hpp"
#include "../os/Parcel.def.hpp"
#include "./IpSecTransformState.def.hpp"

namespace android::net
{
	// Fields
	inline JObject IpSecTransformState::CREATOR()
	{
		return getStaticObjectField(
			"android.net.IpSecTransformState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint IpSecTransformState::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jlong IpSecTransformState::getByteCount() const
	{
		return callMethod<jlong>(
			"getByteCount",
			"()J"
		);
	}
	inline jlong IpSecTransformState::getPacketCount() const
	{
		return callMethod<jlong>(
			"getPacketCount",
			"()J"
		);
	}
	inline JByteArray IpSecTransformState::getReplayBitmap() const
	{
		return callObjectMethod(
			"getReplayBitmap",
			"()[B"
		);
	}
	inline jlong IpSecTransformState::getRxHighestSequenceNumber() const
	{
		return callMethod<jlong>(
			"getRxHighestSequenceNumber",
			"()J"
		);
	}
	inline jlong IpSecTransformState::getTimestampMillis() const
	{
		return callMethod<jlong>(
			"getTimestampMillis",
			"()J"
		);
	}
	inline jlong IpSecTransformState::getTxHighestSequenceNumber() const
	{
		return callMethod<jlong>(
			"getTxHighestSequenceNumber",
			"()J"
		);
	}
	inline void IpSecTransformState::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
