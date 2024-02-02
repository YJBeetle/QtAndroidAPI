#pragma once

#include "../../os/Parcel.def.hpp"
#include "./AdResponse.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JObject AdResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.AdResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint AdResponse::RESPONSE_TYPE_BUFFERING()
	{
		return getStaticField<jint>(
			"android.media.tv.AdResponse",
			"RESPONSE_TYPE_BUFFERING"
		);
	}
	inline jint AdResponse::RESPONSE_TYPE_ERROR()
	{
		return getStaticField<jint>(
			"android.media.tv.AdResponse",
			"RESPONSE_TYPE_ERROR"
		);
	}
	inline jint AdResponse::RESPONSE_TYPE_FINISHED()
	{
		return getStaticField<jint>(
			"android.media.tv.AdResponse",
			"RESPONSE_TYPE_FINISHED"
		);
	}
	inline jint AdResponse::RESPONSE_TYPE_PLAYING()
	{
		return getStaticField<jint>(
			"android.media.tv.AdResponse",
			"RESPONSE_TYPE_PLAYING"
		);
	}
	inline jint AdResponse::RESPONSE_TYPE_STOPPED()
	{
		return getStaticField<jint>(
			"android.media.tv.AdResponse",
			"RESPONSE_TYPE_STOPPED"
		);
	}
	
	// Constructors
	inline AdResponse::AdResponse(jint arg0, jint arg1, jlong arg2)
		: JObject(
			"android.media.tv.AdResponse",
			"(IIJ)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline jint AdResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jlong AdResponse::getElapsedTimeMillis() const
	{
		return callMethod<jlong>(
			"getElapsedTimeMillis",
			"()J"
		);
	}
	inline jint AdResponse::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline jint AdResponse::getResponseType() const
	{
		return callMethod<jint>(
			"getResponseType",
			"()I"
		);
	}
	inline void AdResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
