#pragma once

#include "./CameraOfflineSession.def.hpp"
#include "./CameraOfflineSession_CameraOfflineSessionCallback.def.hpp"

namespace android::hardware::camera2
{
	// Fields
	inline jint CameraOfflineSession_CameraOfflineSessionCallback::STATUS_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraOfflineSession$CameraOfflineSessionCallback",
			"STATUS_INTERNAL_ERROR"
		);
	}
	
	// Constructors
	inline CameraOfflineSession_CameraOfflineSessionCallback::CameraOfflineSession_CameraOfflineSessionCallback()
		: JObject(
			"android.hardware.camera2.CameraOfflineSession$CameraOfflineSessionCallback",
			"()V"
		) {}
	
	// Methods
	inline void CameraOfflineSession_CameraOfflineSessionCallback::onClosed(android::hardware::camera2::CameraOfflineSession arg0) const
	{
		callMethod<void>(
			"onClosed",
			"(Landroid/hardware/camera2/CameraOfflineSession;)V",
			arg0.object()
		);
	}
	inline void CameraOfflineSession_CameraOfflineSessionCallback::onError(android::hardware::camera2::CameraOfflineSession arg0, jint arg1) const
	{
		callMethod<void>(
			"onError",
			"(Landroid/hardware/camera2/CameraOfflineSession;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void CameraOfflineSession_CameraOfflineSessionCallback::onIdle(android::hardware::camera2::CameraOfflineSession arg0) const
	{
		callMethod<void>(
			"onIdle",
			"(Landroid/hardware/camera2/CameraOfflineSession;)V",
			arg0.object()
		);
	}
	inline void CameraOfflineSession_CameraOfflineSessionCallback::onReady(android::hardware::camera2::CameraOfflineSession arg0) const
	{
		callMethod<void>(
			"onReady",
			"(Landroid/hardware/camera2/CameraOfflineSession;)V",
			arg0.object()
		);
	}
	inline void CameraOfflineSession_CameraOfflineSessionCallback::onSwitchFailed(android::hardware::camera2::CameraOfflineSession arg0) const
	{
		callMethod<void>(
			"onSwitchFailed",
			"(Landroid/hardware/camera2/CameraOfflineSession;)V",
			arg0.object()
		);
	}
} // namespace android::hardware::camera2

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2;
#endif
