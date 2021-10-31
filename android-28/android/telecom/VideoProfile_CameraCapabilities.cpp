#include "../os/Parcel.hpp"
#include "./VideoProfile_CameraCapabilities.hpp"

namespace android::telecom
{
	// Fields
	__JniBaseClass VideoProfile_CameraCapabilities::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.VideoProfile$CameraCapabilities",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	VideoProfile_CameraCapabilities::VideoProfile_CameraCapabilities(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	VideoProfile_CameraCapabilities::VideoProfile_CameraCapabilities(jint arg0, jint arg1)
		: __JniBaseClass(
			"android.telecom.VideoProfile$CameraCapabilities",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint VideoProfile_CameraCapabilities::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint VideoProfile_CameraCapabilities::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint VideoProfile_CameraCapabilities::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	void VideoProfile_CameraCapabilities::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

