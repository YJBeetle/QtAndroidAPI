#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../os/ParcelFileDescriptor.def.hpp"
#include "../../../JString.hpp"
#include "./AdRequest.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JObject AdRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.AdRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint AdRequest::REQUEST_TYPE_START()
	{
		return getStaticField<jint>(
			"android.media.tv.AdRequest",
			"REQUEST_TYPE_START"
		);
	}
	inline jint AdRequest::REQUEST_TYPE_STOP()
	{
		return getStaticField<jint>(
			"android.media.tv.AdRequest",
			"REQUEST_TYPE_STOP"
		);
	}
	
	// Constructors
	inline AdRequest::AdRequest(jint arg0, jint arg1, android::os::ParcelFileDescriptor arg2, jlong arg3, jlong arg4, jlong arg5, JString arg6, android::os::Bundle arg7)
		: JObject(
			"android.media.tv.AdRequest",
			"(IILandroid/os/ParcelFileDescriptor;JJJLjava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3,
			arg4,
			arg5,
			arg6.object<jstring>(),
			arg7.object()
		) {}
	
	// Methods
	inline jint AdRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jlong AdRequest::getEchoIntervalMillis() const
	{
		return callMethod<jlong>(
			"getEchoIntervalMillis",
			"()J"
		);
	}
	inline android::os::ParcelFileDescriptor AdRequest::getFileDescriptor() const
	{
		return callObjectMethod(
			"getFileDescriptor",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	inline jint AdRequest::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline JString AdRequest::getMediaFileType() const
	{
		return callObjectMethod(
			"getMediaFileType",
			"()Ljava/lang/String;"
		);
	}
	inline android::os::Bundle AdRequest::getMetadata() const
	{
		return callObjectMethod(
			"getMetadata",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint AdRequest::getRequestType() const
	{
		return callMethod<jint>(
			"getRequestType",
			"()I"
		);
	}
	inline jlong AdRequest::getStartTimeMillis() const
	{
		return callMethod<jlong>(
			"getStartTimeMillis",
			"()J"
		);
	}
	inline jlong AdRequest::getStopTimeMillis() const
	{
		return callMethod<jlong>(
			"getStopTimeMillis",
			"()J"
		);
	}
	inline void AdRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
