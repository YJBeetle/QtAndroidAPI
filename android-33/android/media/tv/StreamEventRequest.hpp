#pragma once

#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./StreamEventRequest.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JObject StreamEventRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.StreamEventRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline StreamEventRequest::StreamEventRequest(jint arg0, jint arg1, android::net::Uri arg2, JString arg3)
		: android::media::tv::BroadcastInfoRequest(
			"android.media.tv.StreamEventRequest",
			"(IILandroid/net/Uri;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object<jstring>()
		) {}
	
	// Methods
	inline jint StreamEventRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString StreamEventRequest::getEventName() const
	{
		return callObjectMethod(
			"getEventName",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::Uri StreamEventRequest::getTargetUri() const
	{
		return callObjectMethod(
			"getTargetUri",
			"()Landroid/net/Uri;"
		);
	}
	inline void StreamEventRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
