#include "../os/Parcel.hpp"
#include "./VideoProfile_CameraCapabilities.hpp"

namespace android::telecom
{
	// Fields
	QAndroidJniObject VideoProfile_CameraCapabilities::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.VideoProfile$CameraCapabilities",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	VideoProfile_CameraCapabilities::VideoProfile_CameraCapabilities(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	VideoProfile_CameraCapabilities::VideoProfile_CameraCapabilities(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.VideoProfile$CameraCapabilities",
			"(II)V",
			arg0,
			arg1
		);
	}
	VideoProfile_CameraCapabilities::VideoProfile_CameraCapabilities(jint arg0, jint arg1, jboolean arg2, jfloat arg3)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.VideoProfile$CameraCapabilities",
			"(IIZF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	jint VideoProfile_CameraCapabilities::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint VideoProfile_CameraCapabilities::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jfloat VideoProfile_CameraCapabilities::getMaxZoom()
	{
		return __thiz.callMethod<jfloat>(
			"getMaxZoom",
			"()F"
		);
	}
	jint VideoProfile_CameraCapabilities::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean VideoProfile_CameraCapabilities::isZoomSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isZoomSupported",
			"()Z"
		);
	}
	void VideoProfile_CameraCapabilities::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telecom

