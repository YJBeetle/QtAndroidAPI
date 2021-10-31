#include "./CameraExtensionSession.hpp"
#include "./CameraExtensionSession_StateCallback.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QAndroidJniObject forward
	CameraExtensionSession_StateCallback::CameraExtensionSession_StateCallback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CameraExtensionSession_StateCallback::CameraExtensionSession_StateCallback()
		: __JniBaseClass(
			"android.hardware.camera2.CameraExtensionSession$StateCallback",
			"()V"
		) {}
	
	// Methods
	void CameraExtensionSession_StateCallback::onClosed(android::hardware::camera2::CameraExtensionSession arg0)
	{
		callMethod<void>(
			"onClosed",
			"(Landroid/hardware/camera2/CameraExtensionSession;)V",
			arg0.object()
		);
	}
	void CameraExtensionSession_StateCallback::onConfigureFailed(android::hardware::camera2::CameraExtensionSession arg0)
	{
		callMethod<void>(
			"onConfigureFailed",
			"(Landroid/hardware/camera2/CameraExtensionSession;)V",
			arg0.object()
		);
	}
	void CameraExtensionSession_StateCallback::onConfigured(android::hardware::camera2::CameraExtensionSession arg0)
	{
		callMethod<void>(
			"onConfigured",
			"(Landroid/hardware/camera2/CameraExtensionSession;)V",
			arg0.object()
		);
	}
} // namespace android::hardware::camera2

