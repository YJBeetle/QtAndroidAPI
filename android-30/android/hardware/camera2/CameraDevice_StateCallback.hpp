#pragma once

#include "./CameraDevice.def.hpp"
#include "./CameraDevice_StateCallback.def.hpp"

namespace android::hardware::camera2
{
	// Fields
	inline jint CameraDevice_StateCallback::ERROR_CAMERA_DEVICE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice$StateCallback",
			"ERROR_CAMERA_DEVICE"
		);
	}
	inline jint CameraDevice_StateCallback::ERROR_CAMERA_DISABLED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice$StateCallback",
			"ERROR_CAMERA_DISABLED"
		);
	}
	inline jint CameraDevice_StateCallback::ERROR_CAMERA_IN_USE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice$StateCallback",
			"ERROR_CAMERA_IN_USE"
		);
	}
	inline jint CameraDevice_StateCallback::ERROR_CAMERA_SERVICE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice$StateCallback",
			"ERROR_CAMERA_SERVICE"
		);
	}
	inline jint CameraDevice_StateCallback::ERROR_MAX_CAMERAS_IN_USE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice$StateCallback",
			"ERROR_MAX_CAMERAS_IN_USE"
		);
	}
	
	// Constructors
	inline CameraDevice_StateCallback::CameraDevice_StateCallback()
		: JObject(
			"android.hardware.camera2.CameraDevice$StateCallback",
			"()V"
		) {}
	
	// Methods
	inline void CameraDevice_StateCallback::onClosed(android::hardware::camera2::CameraDevice arg0) const
	{
		callMethod<void>(
			"onClosed",
			"(Landroid/hardware/camera2/CameraDevice;)V",
			arg0.object()
		);
	}
	inline void CameraDevice_StateCallback::onDisconnected(android::hardware::camera2::CameraDevice arg0) const
	{
		callMethod<void>(
			"onDisconnected",
			"(Landroid/hardware/camera2/CameraDevice;)V",
			arg0.object()
		);
	}
	inline void CameraDevice_StateCallback::onError(android::hardware::camera2::CameraDevice arg0, jint arg1) const
	{
		callMethod<void>(
			"onError",
			"(Landroid/hardware/camera2/CameraDevice;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void CameraDevice_StateCallback::onOpened(android::hardware::camera2::CameraDevice arg0) const
	{
		callMethod<void>(
			"onOpened",
			"(Landroid/hardware/camera2/CameraDevice;)V",
			arg0.object()
		);
	}
} // namespace android::hardware::camera2

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2;
#endif
