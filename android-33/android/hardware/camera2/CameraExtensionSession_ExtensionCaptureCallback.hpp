#pragma once

#include "./CameraExtensionSession.def.hpp"
#include "./CaptureRequest.def.hpp"
#include "./TotalCaptureResult.def.hpp"
#include "./CameraExtensionSession_ExtensionCaptureCallback.def.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// Constructors
	inline CameraExtensionSession_ExtensionCaptureCallback::CameraExtensionSession_ExtensionCaptureCallback()
		: JObject(
			"android.hardware.camera2.CameraExtensionSession$ExtensionCaptureCallback",
			"()V"
		) {}
	
	// Methods
	inline void CameraExtensionSession_ExtensionCaptureCallback::onCaptureFailed(android::hardware::camera2::CameraExtensionSession arg0, android::hardware::camera2::CaptureRequest arg1) const
	{
		callMethod<void>(
			"onCaptureFailed",
			"(Landroid/hardware/camera2/CameraExtensionSession;Landroid/hardware/camera2/CaptureRequest;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void CameraExtensionSession_ExtensionCaptureCallback::onCaptureProcessStarted(android::hardware::camera2::CameraExtensionSession arg0, android::hardware::camera2::CaptureRequest arg1) const
	{
		callMethod<void>(
			"onCaptureProcessStarted",
			"(Landroid/hardware/camera2/CameraExtensionSession;Landroid/hardware/camera2/CaptureRequest;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void CameraExtensionSession_ExtensionCaptureCallback::onCaptureResultAvailable(android::hardware::camera2::CameraExtensionSession arg0, android::hardware::camera2::CaptureRequest arg1, android::hardware::camera2::TotalCaptureResult arg2) const
	{
		callMethod<void>(
			"onCaptureResultAvailable",
			"(Landroid/hardware/camera2/CameraExtensionSession;Landroid/hardware/camera2/CaptureRequest;Landroid/hardware/camera2/TotalCaptureResult;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void CameraExtensionSession_ExtensionCaptureCallback::onCaptureSequenceAborted(android::hardware::camera2::CameraExtensionSession arg0, jint arg1) const
	{
		callMethod<void>(
			"onCaptureSequenceAborted",
			"(Landroid/hardware/camera2/CameraExtensionSession;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void CameraExtensionSession_ExtensionCaptureCallback::onCaptureSequenceCompleted(android::hardware::camera2::CameraExtensionSession arg0, jint arg1) const
	{
		callMethod<void>(
			"onCaptureSequenceCompleted",
			"(Landroid/hardware/camera2/CameraExtensionSession;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void CameraExtensionSession_ExtensionCaptureCallback::onCaptureStarted(android::hardware::camera2::CameraExtensionSession arg0, android::hardware::camera2::CaptureRequest arg1, jlong arg2) const
	{
		callMethod<void>(
			"onCaptureStarted",
			"(Landroid/hardware/camera2/CameraExtensionSession;Landroid/hardware/camera2/CaptureRequest;J)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
} // namespace android::hardware::camera2

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2;
#endif
