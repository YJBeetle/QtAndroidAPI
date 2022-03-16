#pragma once

#include "./CameraCaptureSession.hpp"

namespace android::hardware::camera2
{
	class CameraOfflineSession : public android::hardware::camera2::CameraCaptureSession
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CameraOfflineSession(const char *className, const char *sig, Ts...agv) : android::hardware::camera2::CameraCaptureSession(className, sig, std::forward<Ts>(agv)...) {}
		CameraOfflineSession(QAndroidJniObject obj) : android::hardware::camera2::CameraCaptureSession(obj) {}
		
		// Constructors
		CameraOfflineSession();
		
		// Methods
		void close() const;
	};
} // namespace android::hardware::camera2

