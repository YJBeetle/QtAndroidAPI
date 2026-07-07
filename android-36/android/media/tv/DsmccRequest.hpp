#pragma once

#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./DsmccRequest.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JObject DsmccRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.DsmccRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline DsmccRequest::DsmccRequest(jint arg0, jint arg1, android::net::Uri arg2)
		: android::media::tv::BroadcastInfoRequest(
			"android.media.tv.DsmccRequest",
			"(IILandroid/net/Uri;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	
	// Methods
	inline jint DsmccRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::net::Uri DsmccRequest::getUri() const
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	inline void DsmccRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
