#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::camera2
{
	class CameraCaptureSession;
}
namespace android::view
{
	class Surface;
}

namespace android::hardware::camera2
{
	class CameraCaptureSession_StateCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CameraCaptureSession_StateCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CameraCaptureSession_StateCallback(QJniObject obj);
		
		// Constructors
		CameraCaptureSession_StateCallback();
		
		// Methods
		void onActive(android::hardware::camera2::CameraCaptureSession arg0) const;
		void onCaptureQueueEmpty(android::hardware::camera2::CameraCaptureSession arg0) const;
		void onClosed(android::hardware::camera2::CameraCaptureSession arg0) const;
		void onConfigureFailed(android::hardware::camera2::CameraCaptureSession arg0) const;
		void onConfigured(android::hardware::camera2::CameraCaptureSession arg0) const;
		void onReady(android::hardware::camera2::CameraCaptureSession arg0) const;
		void onSurfacePrepared(android::hardware::camera2::CameraCaptureSession arg0, android::view::Surface arg1) const;
	};
} // namespace android::hardware::camera2

