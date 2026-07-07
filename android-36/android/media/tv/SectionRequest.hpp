#pragma once

#include "../../os/Parcel.def.hpp"
#include "./SectionRequest.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JObject SectionRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.SectionRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline SectionRequest::SectionRequest(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		: android::media::tv::BroadcastInfoRequest(
			"android.media.tv.SectionRequest",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	inline jint SectionRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint SectionRequest::getTableId() const
	{
		return callMethod<jint>(
			"getTableId",
			"()I"
		);
	}
	inline jint SectionRequest::getTsPid() const
	{
		return callMethod<jint>(
			"getTsPid",
			"()I"
		);
	}
	inline jint SectionRequest::getVersion() const
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	inline void SectionRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
