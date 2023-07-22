#pragma once

#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./TimelineResponse.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JObject TimelineResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.TimelineResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline TimelineResponse::TimelineResponse(jint arg0, jint arg1, jint arg2, JString arg3, jint arg4, jint arg5, jlong arg6, jlong arg7)
		: android::media::tv::BroadcastInfoResponse(
			"android.media.tv.TimelineResponse",
			"(IIILjava/lang/String;IIJJ)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jstring>(),
			arg4,
			arg5,
			arg6,
			arg7
		) {}
	
	// Methods
	inline jint TimelineResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::net::Uri TimelineResponse::getSelector() const
	{
		return callObjectMethod(
			"getSelector",
			"()Landroid/net/Uri;"
		);
	}
	inline jlong TimelineResponse::getTicks() const
	{
		return callMethod<jlong>(
			"getTicks",
			"()J"
		);
	}
	inline jint TimelineResponse::getUnitsPerSecond() const
	{
		return callMethod<jint>(
			"getUnitsPerSecond",
			"()I"
		);
	}
	inline jint TimelineResponse::getUnitsPerTick() const
	{
		return callMethod<jint>(
			"getUnitsPerTick",
			"()I"
		);
	}
	inline jlong TimelineResponse::getWallClock() const
	{
		return callMethod<jlong>(
			"getWallClock",
			"()J"
		);
	}
	inline void TimelineResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::tv

// Base class headers
#include "./BroadcastInfoResponse.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif
