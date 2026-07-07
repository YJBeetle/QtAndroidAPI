#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./SectionResponse.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JObject SectionResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.SectionResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline SectionResponse::SectionResponse(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::os::Bundle arg5)
		: android::media::tv::BroadcastInfoResponse(
			"android.media.tv.SectionResponse",
			"(IIIIILandroid/os/Bundle;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		) {}
	
	// Methods
	inline jint SectionResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::os::Bundle SectionResponse::getSessionData() const
	{
		return callObjectMethod(
			"getSessionData",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint SectionResponse::getSessionId() const
	{
		return callMethod<jint>(
			"getSessionId",
			"()I"
		);
	}
	inline jint SectionResponse::getVersion() const
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	inline void SectionResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
