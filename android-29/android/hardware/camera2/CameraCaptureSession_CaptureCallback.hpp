#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::hardware::camera2
{
	class CameraCaptureSession;
}
namespace android::hardware::camera2
{
	class CaptureFailure;
}
namespace android::hardware::camera2
{
	class CaptureRequest;
}
namespace android::hardware::camera2
{
	class CaptureResult;
}
namespace android::hardware::camera2
{
	class TotalCaptureResult;
}
namespace android::view
{
	class Surface;
}

namespace android::hardware::camera2
{
	class CameraCaptureSession_CaptureCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		CameraCaptureSession_CaptureCallback(QAndroidJniObject obj);
		// Constructors
		CameraCaptureSession_CaptureCallback();
		
		// Methods
		void onCaptureBufferLost(android::hardware::camera2::CameraCaptureSession arg0, android::hardware::camera2::CaptureRequest arg1, android::view::Surface arg2, jlong arg3);
		void onCaptureCompleted(android::hardware::camera2::CameraCaptureSession arg0, android::hardware::camera2::CaptureRequest arg1, android::hardware::camera2::TotalCaptureResult arg2);
		void onCaptureFailed(android::hardware::camera2::CameraCaptureSession arg0, android::hardware::camera2::CaptureRequest arg1, android::hardware::camera2::CaptureFailure arg2);
		void onCaptureProgressed(android::hardware::camera2::CameraCaptureSession arg0, android::hardware::camera2::CaptureRequest arg1, android::hardware::camera2::CaptureResult arg2);
		void onCaptureSequenceAborted(android::hardware::camera2::CameraCaptureSession arg0, jint arg1);
		void onCaptureSequenceCompleted(android::hardware::camera2::CameraCaptureSession arg0, jint arg1, jlong arg2);
		void onCaptureStarted(android::hardware::camera2::CameraCaptureSession arg0, android::hardware::camera2::CaptureRequest arg1, jlong arg2, jlong arg3);
	};
} // namespace android::hardware::camera2

