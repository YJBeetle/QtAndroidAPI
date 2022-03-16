#pragma once

#include "../../../JObject.hpp"

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
	class CameraCaptureSession_CaptureCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CameraCaptureSession_CaptureCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CameraCaptureSession_CaptureCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CameraCaptureSession_CaptureCallback();
		
		// Methods
		void onCaptureBufferLost(android::hardware::camera2::CameraCaptureSession arg0, android::hardware::camera2::CaptureRequest arg1, android::view::Surface arg2, jlong arg3) const;
		void onCaptureCompleted(android::hardware::camera2::CameraCaptureSession arg0, android::hardware::camera2::CaptureRequest arg1, android::hardware::camera2::TotalCaptureResult arg2) const;
		void onCaptureFailed(android::hardware::camera2::CameraCaptureSession arg0, android::hardware::camera2::CaptureRequest arg1, android::hardware::camera2::CaptureFailure arg2) const;
		void onCaptureProgressed(android::hardware::camera2::CameraCaptureSession arg0, android::hardware::camera2::CaptureRequest arg1, android::hardware::camera2::CaptureResult arg2) const;
		void onCaptureSequenceAborted(android::hardware::camera2::CameraCaptureSession arg0, jint arg1) const;
		void onCaptureSequenceCompleted(android::hardware::camera2::CameraCaptureSession arg0, jint arg1, jlong arg2) const;
		void onCaptureStarted(android::hardware::camera2::CameraCaptureSession arg0, android::hardware::camera2::CaptureRequest arg1, jlong arg2, jlong arg3) const;
	};
} // namespace android::hardware::camera2

