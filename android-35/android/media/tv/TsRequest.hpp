#pragma once

#include "../../os/Parcel.def.hpp"
#include "./TsRequest.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JObject TsRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.TsRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline TsRequest::TsRequest(jint arg0, jint arg1, jint arg2)
		: android::media::tv::BroadcastInfoRequest(
			"android.media.tv.TsRequest",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline jint TsRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint TsRequest::getTsPid() const
	{
		return callMethod<jint>(
			"getTsPid",
			"()I"
		);
	}
	inline void TsRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
