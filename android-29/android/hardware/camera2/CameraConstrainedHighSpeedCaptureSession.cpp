#include "./CaptureRequest.hpp"
#include "./CameraConstrainedHighSpeedCaptureSession.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QAndroidJniObject forward
	CameraConstrainedHighSpeedCaptureSession::CameraConstrainedHighSpeedCaptureSession(QAndroidJniObject obj) : android::hardware::camera2::CameraCaptureSession(obj) {}
	
	// Constructors
	CameraConstrainedHighSpeedCaptureSession::CameraConstrainedHighSpeedCaptureSession()
		: android::hardware::camera2::CameraCaptureSession(
			"android.hardware.camera2.CameraConstrainedHighSpeedCaptureSession",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject CameraConstrainedHighSpeedCaptureSession::createHighSpeedRequestList(android::hardware::camera2::CaptureRequest arg0)
	{
		return callObjectMethod(
			"createHighSpeedRequestList",
			"(Landroid/hardware/camera2/CaptureRequest;)Ljava/util/List;",
			arg0.object()
		);
	}
} // namespace android::hardware::camera2
