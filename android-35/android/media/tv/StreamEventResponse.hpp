#pragma once

#include "../../../JByteArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "./StreamEventResponse.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JObject StreamEventResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.StreamEventResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline StreamEventResponse::StreamEventResponse(jint arg0, jint arg1, jint arg2, jint arg3, jlong arg4, JByteArray arg5)
		: android::media::tv::BroadcastInfoResponse(
			"android.media.tv.StreamEventResponse",
			"(IIIIJ[B)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object<jbyteArray>()
		) {}
	
	// Methods
	inline jint StreamEventResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JByteArray StreamEventResponse::getData() const
	{
		return callObjectMethod(
			"getData",
			"()[B"
		);
	}
	inline jint StreamEventResponse::getEventId() const
	{
		return callMethod<jint>(
			"getEventId",
			"()I"
		);
	}
	inline jlong StreamEventResponse::getNptMillis() const
	{
		return callMethod<jlong>(
			"getNptMillis",
			"()J"
		);
	}
	inline void StreamEventResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
