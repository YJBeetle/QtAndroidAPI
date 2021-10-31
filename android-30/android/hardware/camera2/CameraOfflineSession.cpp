#include "./CameraOfflineSession.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QAndroidJniObject forward
	CameraOfflineSession::CameraOfflineSession(QAndroidJniObject obj) : android::hardware::camera2::CameraCaptureSession(obj) {}
	
	// Constructors
	CameraOfflineSession::CameraOfflineSession()
		: android::hardware::camera2::CameraCaptureSession(
			"android.hardware.camera2.CameraOfflineSession",
			"()V"
		) {}
	
	// Methods
	void CameraOfflineSession::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
} // namespace android::hardware::camera2

