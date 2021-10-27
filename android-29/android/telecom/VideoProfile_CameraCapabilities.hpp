#pragma once

#ifndef ANDROID_TELECOM_VIDEOPROFILE_CAMERACAPABILITIES
#define ANDROID_TELECOM_VIDEOPROFILE_CAMERACAPABILITIES

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telecom
{
	class VideoProfile_CameraCapabilities : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jint arg0, jint arg1);
		void __constructor(jint arg0, jint arg1, jboolean arg2, jfloat arg3);
		
		// Methods
		jint describeContents();
		jint getHeight();
		jfloat getMaxZoom();
		jint getWidth();
		jboolean isZoomSupported();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::telecom

#include "../os/Parcel.hpp"

namespace __jni_impl::android::telecom
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
	
	// Constructors
	void VideoProfile_CameraCapabilities::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.VideoProfile$CameraCapabilities",
			"(II)V",
			arg0,
			arg1
		);
	}
	void VideoProfile_CameraCapabilities::__constructor(jint arg0, jint arg1, jboolean arg2, jfloat arg3)
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
	void VideoProfile_CameraCapabilities::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class VideoProfile_CameraCapabilities : public __jni_impl::android::telecom::VideoProfile_CameraCapabilities
	{
	public:
		VideoProfile_CameraCapabilities(QAndroidJniObject obj) { __thiz = obj; }
		VideoProfile_CameraCapabilities(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		VideoProfile_CameraCapabilities(jint arg0, jint arg1, jboolean arg2, jfloat arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_VIDEOPROFILE_CAMERACAPABILITIES

