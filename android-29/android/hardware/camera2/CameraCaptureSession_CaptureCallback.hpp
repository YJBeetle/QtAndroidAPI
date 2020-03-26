#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_CAMERACAPTURESESSION_CAPTURECALLBACK
#define ANDROID_HARDWARE_CAMERA2_CAMERACAPTURESESSION_CAPTURECALLBACK

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware::camera2
{
	class CameraCaptureSession;
}
namespace __jni_impl::android::hardware::camera2
{
	class CaptureRequest;
}
namespace __jni_impl::android::hardware::camera2
{
	class CaptureResult;
}
namespace __jni_impl::android::hardware::camera2
{
	class TotalCaptureResult;
}
namespace __jni_impl::android::hardware::camera2
{
	class CaptureFailure;
}
namespace __jni_impl::android::view
{
	class Surface;
}

namespace __jni_impl::android::hardware::camera2
{
	class CameraCaptureSession_CaptureCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onCaptureStarted(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0, __jni_impl::android::hardware::camera2::CaptureRequest arg1, jlong arg2, jlong arg3);
		void onCaptureProgressed(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0, __jni_impl::android::hardware::camera2::CaptureRequest arg1, __jni_impl::android::hardware::camera2::CaptureResult arg2);
		void onCaptureCompleted(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0, __jni_impl::android::hardware::camera2::CaptureRequest arg1, __jni_impl::android::hardware::camera2::TotalCaptureResult arg2);
		void onCaptureFailed(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0, __jni_impl::android::hardware::camera2::CaptureRequest arg1, __jni_impl::android::hardware::camera2::CaptureFailure arg2);
		void onCaptureSequenceCompleted(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0, jint arg1, jlong arg2);
		void onCaptureSequenceAborted(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0, jint arg1);
		void onCaptureBufferLost(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0, __jni_impl::android::hardware::camera2::CaptureRequest arg1, __jni_impl::android::view::Surface arg2, jlong arg3);
	};
} // namespace __jni_impl::android::hardware::camera2

#include "CameraCaptureSession.hpp"
#include "CaptureRequest.hpp"
#include "CaptureResult.hpp"
#include "TotalCaptureResult.hpp"
#include "CaptureFailure.hpp"
#include "../../view/Surface.hpp"

namespace __jni_impl::android::hardware::camera2
{
	// Fields
	
	// Constructors
	void CameraCaptureSession_CaptureCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraCaptureSession$CaptureCallback",
			"()V");
	}
	
	// Methods
	void CameraCaptureSession_CaptureCallback::onCaptureStarted(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0, __jni_impl::android::hardware::camera2::CaptureRequest arg1, jlong arg2, jlong arg3)
	{
		__thiz.callMethod<void>(
			"onCaptureStarted",
			"(Landroid/hardware/camera2/CameraCaptureSession;Landroid/hardware/camera2/CaptureRequest;JJ)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void CameraCaptureSession_CaptureCallback::onCaptureProgressed(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0, __jni_impl::android::hardware::camera2::CaptureRequest arg1, __jni_impl::android::hardware::camera2::CaptureResult arg2)
	{
		__thiz.callMethod<void>(
			"onCaptureProgressed",
			"(Landroid/hardware/camera2/CameraCaptureSession;Landroid/hardware/camera2/CaptureRequest;Landroid/hardware/camera2/CaptureResult;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void CameraCaptureSession_CaptureCallback::onCaptureCompleted(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0, __jni_impl::android::hardware::camera2::CaptureRequest arg1, __jni_impl::android::hardware::camera2::TotalCaptureResult arg2)
	{
		__thiz.callMethod<void>(
			"onCaptureCompleted",
			"(Landroid/hardware/camera2/CameraCaptureSession;Landroid/hardware/camera2/CaptureRequest;Landroid/hardware/camera2/TotalCaptureResult;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void CameraCaptureSession_CaptureCallback::onCaptureFailed(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0, __jni_impl::android::hardware::camera2::CaptureRequest arg1, __jni_impl::android::hardware::camera2::CaptureFailure arg2)
	{
		__thiz.callMethod<void>(
			"onCaptureFailed",
			"(Landroid/hardware/camera2/CameraCaptureSession;Landroid/hardware/camera2/CaptureRequest;Landroid/hardware/camera2/CaptureFailure;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void CameraCaptureSession_CaptureCallback::onCaptureSequenceCompleted(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0, jint arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"onCaptureSequenceCompleted",
			"(Landroid/hardware/camera2/CameraCaptureSession;IJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void CameraCaptureSession_CaptureCallback::onCaptureSequenceAborted(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onCaptureSequenceAborted",
			"(Landroid/hardware/camera2/CameraCaptureSession;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void CameraCaptureSession_CaptureCallback::onCaptureBufferLost(__jni_impl::android::hardware::camera2::CameraCaptureSession arg0, __jni_impl::android::hardware::camera2::CaptureRequest arg1, __jni_impl::android::view::Surface arg2, jlong arg3)
	{
		__thiz.callMethod<void>(
			"onCaptureBufferLost",
			"(Landroid/hardware/camera2/CameraCaptureSession;Landroid/hardware/camera2/CaptureRequest;Landroid/view/Surface;J)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
} // namespace __jni_impl::android::hardware::camera2

namespace android::hardware::camera2
{
	class CameraCaptureSession_CaptureCallback : public __jni_impl::android::hardware::camera2::CameraCaptureSession_CaptureCallback
	{
	public:
		CameraCaptureSession_CaptureCallback(QAndroidJniObject obj) { __thiz = obj; }
		CameraCaptureSession_CaptureCallback()
		{
			__constructor();
		}
	};
} // namespace android::hardware::camera2

#endif // ANDROID_HARDWARE_CAMERA2_CAMERACAPTURESESSION_CAPTURECALLBACK

