#include "./CameraOfflineSession.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// Constructors
	CameraOfflineSession::CameraOfflineSession()
		: android::hardware::camera2::CameraCaptureSession(
			"android.hardware.camera2.CameraOfflineSession",
			"()V"
		) {}
	
	// Methods
	void CameraOfflineSession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
} // namespace android::hardware::camera2

