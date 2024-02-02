#pragma once

#include "./CameraCaptureSession.def.hpp"
#include "./CaptureFailure.def.hpp"
#include "./CaptureRequest.def.hpp"
#include "./CaptureResult.def.hpp"
#include "./TotalCaptureResult.def.hpp"
#include "../../view/Surface.def.hpp"
#include "./CameraCaptureSession_CaptureCallback.def.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// Constructors
	inline CameraCaptureSession_CaptureCallback::CameraCaptureSession_CaptureCallback()
		: JObject(
			"android.hardware.camera2.CameraCaptureSession$CaptureCallback",
			"()V"
		) {}
	
	// Methods
	inline void CameraCaptureSession_CaptureCallback::onCaptureBufferLost(android::hardware::camera2::CameraCaptureSession arg0, android::hardware::camera2::CaptureRequest arg1, android::view::Surface arg2, jlong arg3) const
	{
		callMethod<void>(
			"onCaptureBufferLost",
			"(Landroid/hardware/camera2/CameraCaptureSession;Landroid/hardware/camera2/CaptureRequest;Landroid/view/Surface;J)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	inline void CameraCaptureSession_CaptureCallback::onCaptureCompleted(android::hardware::camera2::CameraCaptureSession arg0, android::hardware::camera2::CaptureRequest arg1, android::hardware::camera2::TotalCaptureResult arg2) const
	{
		callMethod<void>(
			"onCaptureCompleted",
			"(Landroid/hardware/camera2/CameraCaptureSession;Landroid/hardware/camera2/CaptureRequest;Landroid/hardware/camera2/TotalCaptureResult;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void CameraCaptureSession_CaptureCallback::onCaptureFailed(android::hardware::camera2::CameraCaptureSession arg0, android::hardware::camera2::CaptureRequest arg1, android::hardware::camera2::CaptureFailure arg2) const
	{
		callMethod<void>(
			"onCaptureFailed",
			"(Landroid/hardware/camera2/CameraCaptureSession;Landroid/hardware/camera2/CaptureRequest;Landroid/hardware/camera2/CaptureFailure;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void CameraCaptureSession_CaptureCallback::onCaptureProgressed(android::hardware::camera2::CameraCaptureSession arg0, android::hardware::camera2::CaptureRequest arg1, android::hardware::camera2::CaptureResult arg2) const
	{
		callMethod<void>(
			"onCaptureProgressed",
			"(Landroid/hardware/camera2/CameraCaptureSession;Landroid/hardware/camera2/CaptureRequest;Landroid/hardware/camera2/CaptureResult;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void CameraCaptureSession_CaptureCallback::onCaptureSequenceAborted(android::hardware::camera2::CameraCaptureSession arg0, jint arg1) const
	{
		callMethod<void>(
			"onCaptureSequenceAborted",
			"(Landroid/hardware/camera2/CameraCaptureSession;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void CameraCaptureSession_CaptureCallback::onCaptureSequenceCompleted(android::hardware::camera2::CameraCaptureSession arg0, jint arg1, jlong arg2) const
	{
		callMethod<void>(
			"onCaptureSequenceCompleted",
			"(Landroid/hardware/camera2/CameraCaptureSession;IJ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void CameraCaptureSession_CaptureCallback::onCaptureStarted(android::hardware::camera2::CameraCaptureSession arg0, android::hardware::camera2::CaptureRequest arg1, jlong arg2, jlong arg3) const
	{
		callMethod<void>(
			"onCaptureStarted",
			"(Landroid/hardware/camera2/CameraCaptureSession;Landroid/hardware/camera2/CaptureRequest;JJ)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	inline void CameraCaptureSession_CaptureCallback::onReadoutStarted(android::hardware::camera2::CameraCaptureSession arg0, android::hardware::camera2::CaptureRequest arg1, jlong arg2, jlong arg3) const
	{
		callMethod<void>(
			"onReadoutStarted",
			"(Landroid/hardware/camera2/CameraCaptureSession;Landroid/hardware/camera2/CaptureRequest;JJ)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
} // namespace android::hardware::camera2

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2;
#endif
