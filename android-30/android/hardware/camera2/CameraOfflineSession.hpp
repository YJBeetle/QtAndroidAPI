#pragma once

#include "../../../JObject.hpp"
#include "./CameraCaptureSession.hpp"


namespace android::hardware::camera2
{
	class CameraOfflineSession : public android::hardware::camera2::CameraCaptureSession
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CameraOfflineSession(const char *className, const char *sig, Ts...agv) : android::hardware::camera2::CameraCaptureSession(className, sig, std::forward<Ts>(agv)...) {}
		CameraOfflineSession(QJniObject obj);
		
		// Constructors
		CameraOfflineSession();
		
		// Methods
		void close();
	};
} // namespace android::hardware::camera2

