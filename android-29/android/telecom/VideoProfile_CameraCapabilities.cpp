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
	
	// QAndroidJniObject forward
	VideoProfile_CameraCapabilities::VideoProfile_CameraCapabilities(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	VideoProfile_CameraCapabilities::VideoProfile_CameraCapabilities(jint arg0, jint arg1)
		: JObject(
			"android.telecom.VideoProfile$CameraCapabilities",
			"(II)V",
			arg0,
			arg1
		) {}
	VideoProfile_CameraCapabilities::VideoProfile_CameraCapabilities(jint arg0, jint arg1, jboolean arg2, jfloat arg3)
		: JObject(
			"android.telecom.VideoProfile$CameraCapabilities",
			"(IIZF)V",
			arg0,
			arg1,
			arg2,
			arg3
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
	jfloat VideoProfile_CameraCapabilities::getMaxZoom() const
	{
		return callMethod<jfloat>(
			"getMaxZoom",
			"()F"
		);
	}
	jint VideoProfile_CameraCapabilities::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean VideoProfile_CameraCapabilities::isZoomSupported() const
	{
		return callMethod<jboolean>(
			"isZoomSupported",
			"()Z"
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

