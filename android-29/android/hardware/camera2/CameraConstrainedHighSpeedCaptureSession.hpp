#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./CameraCaptureSession.hpp"

namespace android::hardware::camera2
{
	class CaptureRequest;
}

namespace android::hardware::camera2
{
	class CameraConstrainedHighSpeedCaptureSession : public android::hardware::camera2::CameraCaptureSession
	{
	public:
		// Fields
		
		CameraConstrainedHighSpeedCaptureSession(QAndroidJniObject obj);
		// Constructors
		CameraConstrainedHighSpeedCaptureSession();
		
		// Methods
		QAndroidJniObject createHighSpeedRequestList(android::hardware::camera2::CaptureRequest arg0);
	};
} // namespace android::hardware::camera2

