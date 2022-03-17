#pragma once

#include "../os/Parcel.def.hpp"
#include "./VideoProfile_CameraCapabilities.def.hpp"

namespace android::telecom
{
	// Fields
	inline JObject VideoProfile_CameraCapabilities::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.VideoProfile$CameraCapabilities",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline VideoProfile_CameraCapabilities::VideoProfile_CameraCapabilities(jint arg0, jint arg1)
		: JObject(
			"android.telecom.VideoProfile$CameraCapabilities",
			"(II)V",
			arg0,
			arg1
		) {}
	inline VideoProfile_CameraCapabilities::VideoProfile_CameraCapabilities(jint arg0, jint arg1, jboolean arg2, jfloat arg3)
		: JObject(
			"android.telecom.VideoProfile$CameraCapabilities",
			"(IIZF)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline jint VideoProfile_CameraCapabilities::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint VideoProfile_CameraCapabilities::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline jfloat VideoProfile_CameraCapabilities::getMaxZoom() const
	{
		return callMethod<jfloat>(
			"getMaxZoom",
			"()F"
		);
	}
	inline jint VideoProfile_CameraCapabilities::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline jboolean VideoProfile_CameraCapabilities::isZoomSupported() const
	{
		return callMethod<jboolean>(
			"isZoomSupported",
			"()Z"
		);
	}
	inline void VideoProfile_CameraCapabilities::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

// Base class headers

