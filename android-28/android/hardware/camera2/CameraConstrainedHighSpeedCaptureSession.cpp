#include "./CaptureRequest.hpp"
#include "./CameraConstrainedHighSpeedCaptureSession.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QJniObject forward
	CameraConstrainedHighSpeedCaptureSession::CameraConstrainedHighSpeedCaptureSession(QJniObject obj) : android::hardware::camera2::CameraCaptureSession(obj) {}
	
	// Constructors
	CameraConstrainedHighSpeedCaptureSession::CameraConstrainedHighSpeedCaptureSession()
		: android::hardware::camera2::CameraCaptureSession(
			"android.hardware.camera2.CameraConstrainedHighSpeedCaptureSession",
			"()V"
		) {}
	
	// Methods
	JObject CameraConstrainedHighSpeedCaptureSession::createHighSpeedRequestList(android::hardware::camera2::CaptureRequest arg0) const
	{
		return callObjectMethod(
			"createHighSpeedRequestList",
			"(Landroid/hardware/camera2/CaptureRequest;)Ljava/util/List;",
			arg0.object()
		);
	}
} // namespace android::hardware::camera2

