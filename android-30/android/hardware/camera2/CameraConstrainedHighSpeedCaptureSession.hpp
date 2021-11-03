#pragma once

#include "../../../JObject.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CameraConstrainedHighSpeedCaptureSession(const char *className, const char *sig, Ts...agv) : android::hardware::camera2::CameraCaptureSession(className, sig, std::forward<Ts>(agv)...) {}
		CameraConstrainedHighSpeedCaptureSession(QAndroidJniObject obj);
		
		// Constructors
		CameraConstrainedHighSpeedCaptureSession();
		
		// Methods
		JObject createHighSpeedRequestList(android::hardware::camera2::CaptureRequest arg0);
	};
} // namespace android::hardware::camera2

