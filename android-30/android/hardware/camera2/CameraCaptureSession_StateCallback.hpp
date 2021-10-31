#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class CameraCaptureSession_StateCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CameraCaptureSession_StateCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CameraCaptureSession_StateCallback(QJniObject obj);
		
		// Constructors
		CameraCaptureSession_StateCallback();
		
		// Methods
		void onActive(android::hardware::camera2::CameraCaptureSession arg0);
		void onCaptureQueueEmpty(android::hardware::camera2::CameraCaptureSession arg0);
		void onClosed(android::hardware::camera2::CameraCaptureSession arg0);
		void onConfigureFailed(android::hardware::camera2::CameraCaptureSession arg0);
		void onConfigured(android::hardware::camera2::CameraCaptureSession arg0);
		void onReady(android::hardware::camera2::CameraCaptureSession arg0);
		void onSurfacePrepared(android::hardware::camera2::CameraCaptureSession arg0, android::view::Surface arg1);
	};
} // namespace android::hardware::camera2

