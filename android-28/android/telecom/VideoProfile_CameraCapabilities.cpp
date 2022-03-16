#include "../os/Parcel.hpp"
#include "./VideoProfile_CameraCapabilities.hpp"

namespace android::telecom
{
	// Fields
	JObject VideoProfile_CameraCapabilities::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.VideoProfile$CameraCapabilities",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	VideoProfile_CameraCapabilities::VideoProfile_CameraCapabilities(jint arg0, jint arg1)
		: JObject(
			"android.telecom.VideoProfile$CameraCapabilities",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint VideoProfile_CameraCapabilities::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint VideoProfile_CameraCapabilities::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint VideoProfile_CameraCapabilities::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	void VideoProfile_CameraCapabilities::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

