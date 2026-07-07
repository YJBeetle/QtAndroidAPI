#pragma once

#include "./CameraDevice.def.hpp"
#include "./CameraExtensionSession_ExtensionCaptureCallback.def.hpp"
#include "./CameraExtensionSession_StillCaptureLatency.def.hpp"
#include "./CaptureRequest.def.hpp"
#include "./CameraExtensionSession.def.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint CameraExtensionSession::capture(android::hardware::camera2::CaptureRequest arg0, JObject arg1, android::hardware::camera2::CameraExtensionSession_ExtensionCaptureCallback arg2) const
	{
		return callMethod<jint>(
			"capture",
			"(Landroid/hardware/camera2/CaptureRequest;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraExtensionSession$ExtensionCaptureCallback;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void CameraExtensionSession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline android::hardware::camera2::CameraDevice CameraExtensionSession::getDevice() const
	{
		return callObjectMethod(
			"getDevice",
			"()Landroid/hardware/camera2/CameraDevice;"
		);
	}
	inline android::hardware::camera2::CameraExtensionSession_StillCaptureLatency CameraExtensionSession::getRealtimeStillCaptureLatency() const
	{
		return callObjectMethod(
			"getRealtimeStillCaptureLatency",
			"()Landroid/hardware/camera2/CameraExtensionSession$StillCaptureLatency;"
		);
	}
	inline jint CameraExtensionSession::setRepeatingRequest(android::hardware::camera2::CaptureRequest arg0, JObject arg1, android::hardware::camera2::CameraExtensionSession_ExtensionCaptureCallback arg2) const
	{
		return callMethod<jint>(
			"setRepeatingRequest",
			"(Landroid/hardware/camera2/CaptureRequest;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraExtensionSession$ExtensionCaptureCallback;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void CameraExtensionSession::stopRepeating() const
	{
		callMethod<void>(
			"stopRepeating",
			"()V"
		);
	}
} // namespace android::hardware::camera2

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2;
#endif
