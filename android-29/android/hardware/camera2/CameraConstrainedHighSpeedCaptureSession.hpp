#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_CAMERACONSTRAINEDHIGHSPEEDCAPTURESESSION
#define ANDROID_HARDWARE_CAMERA2_CAMERACONSTRAINEDHIGHSPEEDCAPTURESESSION

#include "../../../__JniBaseClass.hpp"
#include "CameraCaptureSession.hpp"

namespace __jni_impl::android::hardware::camera2
{
	class CaptureRequest;
}

namespace __jni_impl::android::hardware::camera2
{
	class CameraConstrainedHighSpeedCaptureSession : public __jni_impl::android::hardware::camera2::CameraCaptureSession
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject createHighSpeedRequestList(__jni_impl::android::hardware::camera2::CaptureRequest arg0);
	};
} // namespace __jni_impl::android::hardware::camera2

#include "CaptureRequest.hpp"

namespace __jni_impl::android::hardware::camera2
{
	// Fields
	
	// Constructors
	void CameraConstrainedHighSpeedCaptureSession::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraConstrainedHighSpeedCaptureSession",
			"()V");
	}
	
	// Methods
	QAndroidJniObject CameraConstrainedHighSpeedCaptureSession::createHighSpeedRequestList(__jni_impl::android::hardware::camera2::CaptureRequest arg0)
	{
		return __thiz.callObjectMethod(
			"createHighSpeedRequestList",
			"(Landroid/hardware/camera2/CaptureRequest;)Ljava/util/List;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::hardware::camera2

namespace android::hardware::camera2
{
	class CameraConstrainedHighSpeedCaptureSession : public __jni_impl::android::hardware::camera2::CameraConstrainedHighSpeedCaptureSession
	{
	public:
		CameraConstrainedHighSpeedCaptureSession(QAndroidJniObject obj) { __thiz = obj; }
		CameraConstrainedHighSpeedCaptureSession()
		{
			__constructor();
		}
	};
} // namespace android::hardware::camera2

#endif // ANDROID_HARDWARE_CAMERA2_CAMERACONSTRAINEDHIGHSPEEDCAPTURESESSION

