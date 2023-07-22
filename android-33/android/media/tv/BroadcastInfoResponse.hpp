#pragma once

#include "../../os/Parcel.def.hpp"
#include "./BroadcastInfoResponse.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JObject BroadcastInfoResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.BroadcastInfoResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint BroadcastInfoResponse::RESPONSE_RESULT_CANCEL()
	{
		return getStaticField<jint>(
			"android.media.tv.BroadcastInfoResponse",
			"RESPONSE_RESULT_CANCEL"
		);
	}
	inline jint BroadcastInfoResponse::RESPONSE_RESULT_ERROR()
	{
		return getStaticField<jint>(
			"android.media.tv.BroadcastInfoResponse",
			"RESPONSE_RESULT_ERROR"
		);
	}
	inline jint BroadcastInfoResponse::RESPONSE_RESULT_OK()
	{
		return getStaticField<jint>(
			"android.media.tv.BroadcastInfoResponse",
			"RESPONSE_RESULT_OK"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint BroadcastInfoResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint BroadcastInfoResponse::getRequestId() const
	{
		return callMethod<jint>(
			"getRequestId",
			"()I"
		);
	}
	inline jint BroadcastInfoResponse::getResponseResult() const
	{
		return callMethod<jint>(
			"getResponseResult",
			"()I"
		);
	}
	inline jint BroadcastInfoResponse::getSequence() const
	{
		return callMethod<jint>(
			"getSequence",
			"()I"
		);
	}
	inline jint BroadcastInfoResponse::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline void BroadcastInfoResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif
