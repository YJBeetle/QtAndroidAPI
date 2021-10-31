#include "./CameraCaptureSession.hpp"
#include "../../view/Surface.hpp"
#include "./CameraCaptureSession_StateCallback.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QJniObject forward
	CameraCaptureSession_StateCallback::CameraCaptureSession_StateCallback(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CameraCaptureSession_StateCallback::CameraCaptureSession_StateCallback()
		: __JniBaseClass(
			"android.hardware.camera2.CameraCaptureSession$StateCallback",
			"()V"
		) {}
	
	// Methods
	void CameraCaptureSession_StateCallback::onActive(android::hardware::camera2::CameraCaptureSession arg0)
	{
		callMethod<void>(
			"onActive",
			"(Landroid/hardware/camera2/CameraCaptureSession;)V",
			arg0.object()
		);
	}
	void CameraCaptureSession_StateCallback::onCaptureQueueEmpty(android::hardware::camera2::CameraCaptureSession arg0)
	{
		callMethod<void>(
			"onCaptureQueueEmpty",
			"(Landroid/hardware/camera2/CameraCaptureSession;)V",
			arg0.object()
		);
	}
	void CameraCaptureSession_StateCallback::onClosed(android::hardware::camera2::CameraCaptureSession arg0)
	{
		callMethod<void>(
			"onClosed",
			"(Landroid/hardware/camera2/CameraCaptureSession;)V",
			arg0.object()
		);
	}
	void CameraCaptureSession_StateCallback::onConfigureFailed(android::hardware::camera2::CameraCaptureSession arg0)
	{
		callMethod<void>(
			"onConfigureFailed",
			"(Landroid/hardware/camera2/CameraCaptureSession;)V",
			arg0.object()
		);
	}
	void CameraCaptureSession_StateCallback::onConfigured(android::hardware::camera2::CameraCaptureSession arg0)
	{
		callMethod<void>(
			"onConfigured",
			"(Landroid/hardware/camera2/CameraCaptureSession;)V",
			arg0.object()
		);
	}
	void CameraCaptureSession_StateCallback::onReady(android::hardware::camera2::CameraCaptureSession arg0)
	{
		callMethod<void>(
			"onReady",
			"(Landroid/hardware/camera2/CameraCaptureSession;)V",
			arg0.object()
		);
	}
	void CameraCaptureSession_StateCallback::onSurfacePrepared(android::hardware::camera2::CameraCaptureSession arg0, android::view::Surface arg1)
	{
		callMethod<void>(
			"onSurfacePrepared",
			"(Landroid/hardware/camera2/CameraCaptureSession;Landroid/view/Surface;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::hardware::camera2

