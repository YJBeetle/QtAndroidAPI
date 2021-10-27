#include "./CameraCaptureSession.hpp"
#include "../../view/Surface.hpp"
#include "./CameraCaptureSession_StateCallback.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	CameraCaptureSession_StateCallback::CameraCaptureSession_StateCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CameraCaptureSession_StateCallback::CameraCaptureSession_StateCallback()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraCaptureSession$StateCallback",
			"()V"
		);
	}
	
	// Methods
	void CameraCaptureSession_StateCallback::onActive(android::hardware::camera2::CameraCaptureSession arg0)
	{
		__thiz.callMethod<void>(
			"onActive",
			"(Landroid/hardware/camera2/CameraCaptureSession;)V",
			arg0.__jniObject().object()
		);
	}
	void CameraCaptureSession_StateCallback::onCaptureQueueEmpty(android::hardware::camera2::CameraCaptureSession arg0)
	{
		__thiz.callMethod<void>(
			"onCaptureQueueEmpty",
			"(Landroid/hardware/camera2/CameraCaptureSession;)V",
			arg0.__jniObject().object()
		);
	}
	void CameraCaptureSession_StateCallback::onClosed(android::hardware::camera2::CameraCaptureSession arg0)
	{
		__thiz.callMethod<void>(
			"onClosed",
			"(Landroid/hardware/camera2/CameraCaptureSession;)V",
			arg0.__jniObject().object()
		);
	}
	void CameraCaptureSession_StateCallback::onConfigureFailed(android::hardware::camera2::CameraCaptureSession arg0)
	{
		__thiz.callMethod<void>(
			"onConfigureFailed",
			"(Landroid/hardware/camera2/CameraCaptureSession;)V",
			arg0.__jniObject().object()
		);
	}
	void CameraCaptureSession_StateCallback::onConfigured(android::hardware::camera2::CameraCaptureSession arg0)
	{
		__thiz.callMethod<void>(
			"onConfigured",
			"(Landroid/hardware/camera2/CameraCaptureSession;)V",
			arg0.__jniObject().object()
		);
	}
	void CameraCaptureSession_StateCallback::onReady(android::hardware::camera2::CameraCaptureSession arg0)
	{
		__thiz.callMethod<void>(
			"onReady",
			"(Landroid/hardware/camera2/CameraCaptureSession;)V",
			arg0.__jniObject().object()
		);
	}
	void CameraCaptureSession_StateCallback::onSurfacePrepared(android::hardware::camera2::CameraCaptureSession arg0, android::view::Surface arg1)
	{
		__thiz.callMethod<void>(
			"onSurfacePrepared",
			"(Landroid/hardware/camera2/CameraCaptureSession;Landroid/view/Surface;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::hardware::camera2

