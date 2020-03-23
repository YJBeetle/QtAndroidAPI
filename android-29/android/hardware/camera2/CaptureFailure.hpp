#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_CAPTUREFAILURE
#define ANDROID_HARDWARE_CAMERA2_CAPTUREFAILURE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware::camera2
{
	class CaptureRequest;
}

namespace __jni_impl::android::hardware::camera2
{
	class CaptureFailure : public __JniBaseClass
	{
	public:
		// Fields
		static jint REASON_ERROR();
		static jint REASON_FLUSHED();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getReason();
		QAndroidJniObject getRequest();
		jlong getFrameNumber();
		jint getSequenceId();
		jboolean wasImageCaptured();
		QAndroidJniObject getPhysicalCameraId();
	};
} // namespace __jni_impl::android::hardware::camera2

#include "CaptureRequest.hpp"

namespace __jni_impl::android::hardware::camera2
{
	// Fields
	jint CaptureFailure::REASON_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CaptureFailure",
			"REASON_ERROR");
	}
	jint CaptureFailure::REASON_FLUSHED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CaptureFailure",
			"REASON_FLUSHED");
	}
	
	// Constructors
	void CaptureFailure::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CaptureFailure",
			"(V)V");
	}
	
	// Methods
	jint CaptureFailure::getReason()
	{
		return __thiz.callMethod<jint>(
			"getReason",
			"()I");
	}
	QAndroidJniObject CaptureFailure::getRequest()
	{
		return __thiz.callObjectMethod(
			"getRequest",
			"()Landroid/hardware/camera2/CaptureRequest;");
	}
	jlong CaptureFailure::getFrameNumber()
	{
		return __thiz.callMethod<jlong>(
			"getFrameNumber",
			"()J");
	}
	jint CaptureFailure::getSequenceId()
	{
		return __thiz.callMethod<jint>(
			"getSequenceId",
			"()I");
	}
	jboolean CaptureFailure::wasImageCaptured()
	{
		return __thiz.callMethod<jboolean>(
			"wasImageCaptured",
			"()Z");
	}
	QAndroidJniObject CaptureFailure::getPhysicalCameraId()
	{
		return __thiz.callObjectMethod(
			"getPhysicalCameraId",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::hardware::camera2

namespace android::hardware::camera2
{
	class CaptureFailure : public __jni_impl::android::hardware::camera2::CaptureFailure
	{
	public:
		CaptureFailure(QAndroidJniObject obj) { __thiz = obj; }
		CaptureFailure()
		{
			__constructor();
		}
	};
} // namespace android::hardware::camera2

#endif // ANDROID_HARDWARE_CAMERA2_CAPTUREFAILURE

