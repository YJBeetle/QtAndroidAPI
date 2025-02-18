#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./TimelineRequest.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JObject TimelineRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.TimelineRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline TimelineRequest::TimelineRequest(jint arg0, jint arg1, jint arg2)
		: android::media::tv::BroadcastInfoRequest(
			"android.media.tv.TimelineRequest",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	inline TimelineRequest::TimelineRequest(jint arg0, jint arg1, jint arg2, JString arg3)
		: android::media::tv::BroadcastInfoRequest(
			"android.media.tv.TimelineRequest",
			"(IIILjava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jstring>()
		) {}
	
	// Methods
	inline jint TimelineRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint TimelineRequest::getIntervalMillis() const
	{
		return callMethod<jint>(
			"getIntervalMillis",
			"()I"
		);
	}
	inline JString TimelineRequest::getSelector() const
	{
		return callObjectMethod(
			"getSelector",
			"()Ljava/lang/String;"
		);
	}
	inline void TimelineRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
#include "./BroadcastInfoRequest.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif
