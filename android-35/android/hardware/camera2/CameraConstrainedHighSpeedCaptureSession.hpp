#pragma once

#include "./CaptureRequest.def.hpp"
#include "./CameraConstrainedHighSpeedCaptureSession.def.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// Constructors
	inline CameraConstrainedHighSpeedCaptureSession::CameraConstrainedHighSpeedCaptureSession()
		: android::hardware::camera2::CameraCaptureSession(
			"android.hardware.camera2.CameraConstrainedHighSpeedCaptureSession",
			"()V"
		) {}
	
	// Methods
	inline JObject CameraConstrainedHighSpeedCaptureSession::createHighSpeedRequestList(android::hardware::camera2::CaptureRequest arg0) const
	{
		return callObjectMethod(
			"createHighSpeedRequestList",
			"(Landroid/hardware/camera2/CaptureRequest;)Ljava/util/List;",
			arg0.object()
		);
	}
} // namespace android::hardware::camera2

// Base class headers
#include "./CameraCaptureSession.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2;
#endif
