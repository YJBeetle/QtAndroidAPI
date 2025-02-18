#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./PesResponse.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JObject PesResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.PesResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline PesResponse::PesResponse(jint arg0, jint arg1, jint arg2, JString arg3)
		: android::media::tv::BroadcastInfoResponse(
			"android.media.tv.PesResponse",
			"(IIILjava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jstring>()
		) {}
	
	// Methods
	inline jint PesResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString PesResponse::getSharedFilterToken() const
	{
		return callObjectMethod(
			"getSharedFilterToken",
			"()Ljava/lang/String;"
		);
	}
	inline void PesResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
