#pragma once

#include "./CameraOfflineSession.def.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// Constructors
	inline CameraOfflineSession::CameraOfflineSession()
		: android::hardware::camera2::CameraCaptureSession(
			"android.hardware.camera2.CameraOfflineSession",
			"()V"
		) {}
	
	// Methods
	inline void CameraOfflineSession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
} // namespace android::hardware::camera2

// Base class headers
#include "./CameraCaptureSession.hpp"

