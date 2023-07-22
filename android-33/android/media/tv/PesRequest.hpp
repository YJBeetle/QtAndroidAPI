#pragma once

#include "../../os/Parcel.def.hpp"
#include "./PesRequest.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JObject PesRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.PesRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline PesRequest::PesRequest(jint arg0, jint arg1, jint arg2, jint arg3)
		: android::media::tv::BroadcastInfoRequest(
			"android.media.tv.PesRequest",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline jint PesRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint PesRequest::getStreamId() const
	{
		return callMethod<jint>(
			"getStreamId",
			"()I"
		);
	}
	inline jint PesRequest::getTsPid() const
	{
		return callMethod<jint>(
			"getTsPid",
			"()I"
		);
	}
	inline void PesRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
