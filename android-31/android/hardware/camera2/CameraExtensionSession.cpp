#include "./CameraDevice.hpp"
#include "./CameraExtensionSession_ExtensionCaptureCallback.hpp"
#include "./CaptureRequest.hpp"
#include "./CameraExtensionSession.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// Constructors
	
	// Methods
	jint CameraExtensionSession::capture(android::hardware::camera2::CaptureRequest arg0, JObject arg1, android::hardware::camera2::CameraExtensionSession_ExtensionCaptureCallback arg2) const
	{
		return callMethod<jint>(
			"capture",
			"(Landroid/hardware/camera2/CaptureRequest;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraExtensionSession$ExtensionCaptureCallback;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void CameraExtensionSession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::hardware::camera2::CameraDevice CameraExtensionSession::getDevice() const
	{
		return callObjectMethod(
			"getDevice",
			"()Landroid/hardware/camera2/CameraDevice;"
		);
	}
	jint CameraExtensionSession::setRepeatingRequest(android::hardware::camera2::CaptureRequest arg0, JObject arg1, android::hardware::camera2::CameraExtensionSession_ExtensionCaptureCallback arg2) const
	{
		return callMethod<jint>(
			"setRepeatingRequest",
			"(Landroid/hardware/camera2/CaptureRequest;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraExtensionSession$ExtensionCaptureCallback;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void CameraExtensionSession::stopRepeating() const
	{
		callMethod<void>(
			"stopRepeating",
			"()V"
		);
	}
} // namespace android::hardware::camera2

