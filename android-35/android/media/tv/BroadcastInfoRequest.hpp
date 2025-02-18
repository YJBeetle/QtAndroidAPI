#pragma once

#include "../../os/Parcel.def.hpp"
#include "./BroadcastInfoRequest.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JObject BroadcastInfoRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.BroadcastInfoRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint BroadcastInfoRequest::REQUEST_OPTION_AUTO_UPDATE()
	{
		return getStaticField<jint>(
			"android.media.tv.BroadcastInfoRequest",
			"REQUEST_OPTION_AUTO_UPDATE"
		);
	}
	inline jint BroadcastInfoRequest::REQUEST_OPTION_REPEAT()
	{
		return getStaticField<jint>(
			"android.media.tv.BroadcastInfoRequest",
			"REQUEST_OPTION_REPEAT"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint BroadcastInfoRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint BroadcastInfoRequest::getOption() const
	{
		return callMethod<jint>(
			"getOption",
			"()I"
		);
	}
	inline jint BroadcastInfoRequest::getRequestId() const
	{
		return callMethod<jint>(
			"getRequestId",
			"()I"
		);
	}
	inline jint BroadcastInfoRequest::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline void BroadcastInfoRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
