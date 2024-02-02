#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::camera2
{
	class CameraExtensionSession;
}
namespace android::hardware::camera2
{
	class CaptureRequest;
}
namespace android::hardware::camera2
{
	class TotalCaptureResult;
}

namespace android::hardware::camera2
{
	class CameraExtensionSession_ExtensionCaptureCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CameraExtensionSession_ExtensionCaptureCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CameraExtensionSession_ExtensionCaptureCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CameraExtensionSession_ExtensionCaptureCallback();
		
		// Methods
		void onCaptureFailed(android::hardware::camera2::CameraExtensionSession arg0, android::hardware::camera2::CaptureRequest arg1) const;
		void onCaptureProcessProgressed(android::hardware::camera2::CameraExtensionSession arg0, android::hardware::camera2::CaptureRequest arg1, jint arg2) const;
		void onCaptureProcessStarted(android::hardware::camera2::CameraExtensionSession arg0, android::hardware::camera2::CaptureRequest arg1) const;
		void onCaptureResultAvailable(android::hardware::camera2::CameraExtensionSession arg0, android::hardware::camera2::CaptureRequest arg1, android::hardware::camera2::TotalCaptureResult arg2) const;
		void onCaptureSequenceAborted(android::hardware::camera2::CameraExtensionSession arg0, jint arg1) const;
		void onCaptureSequenceCompleted(android::hardware::camera2::CameraExtensionSession arg0, jint arg1) const;
		void onCaptureStarted(android::hardware::camera2::CameraExtensionSession arg0, android::hardware::camera2::CaptureRequest arg1, jlong arg2) const;
	};
} // namespace android::hardware::camera2

