#include "./CameraExtensionSession.hpp"
#include "./CameraExtensionSession_StateCallback.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// Constructors
	CameraExtensionSession_StateCallback::CameraExtensionSession_StateCallback()
		: JObject(
			"android.hardware.camera2.CameraExtensionSession$StateCallback",
			"()V"
		) {}
	
	// Methods
	void CameraExtensionSession_StateCallback::onClosed(android::hardware::camera2::CameraExtensionSession arg0) const
	{
		callMethod<void>(
			"onClosed",
			"(Landroid/hardware/camera2/CameraExtensionSession;)V",
			arg0.object()
		);
	}
	void CameraExtensionSession_StateCallback::onConfigureFailed(android::hardware::camera2::CameraExtensionSession arg0) const
	{
		callMethod<void>(
			"onConfigureFailed",
			"(Landroid/hardware/camera2/CameraExtensionSession;)V",
			arg0.object()
		);
	}
	void CameraExtensionSession_StateCallback::onConfigured(android::hardware::camera2::CameraExtensionSession arg0) const
	{
		callMethod<void>(
			"onConfigured",
			"(Landroid/hardware/camera2/CameraExtensionSession;)V",
			arg0.object()
		);
	}
} // namespace android::hardware::camera2

