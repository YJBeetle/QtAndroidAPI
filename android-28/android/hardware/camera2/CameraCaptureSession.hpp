#pragma once

#include "./CameraCaptureSession_CaptureCallback.def.hpp"
#include "./CameraDevice.def.hpp"
#include "./CaptureRequest.def.hpp"
#include "./params/OutputConfiguration.def.hpp"
#include "../../os/Handler.def.hpp"
#include "../../view/Surface.def.hpp"
#include "./CameraCaptureSession.def.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// Constructors
	inline CameraCaptureSession::CameraCaptureSession()
		: JObject(
			"android.hardware.camera2.CameraCaptureSession",
			"()V"
		) {}
	
	// Methods
	inline void CameraCaptureSession::abortCaptures() const
	{
		callMethod<void>(
			"abortCaptures",
			"()V"
		);
	}
	inline jint CameraCaptureSession::capture(android::hardware::camera2::CaptureRequest arg0, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, android::os::Handler arg2) const
	{
		return callMethod<jint>(
			"capture",
			"(Landroid/hardware/camera2/CaptureRequest;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;Landroid/os/Handler;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jint CameraCaptureSession::captureBurst(JObject arg0, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, android::os::Handler arg2) const
	{
		return callMethod<jint>(
			"captureBurst",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;Landroid/os/Handler;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jint CameraCaptureSession::captureBurstRequests(JObject arg0, JObject arg1, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2) const
	{
		return callMethod<jint>(
			"captureBurstRequests",
			"(Ljava/util/List;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jint CameraCaptureSession::captureSingleRequest(android::hardware::camera2::CaptureRequest arg0, JObject arg1, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2) const
	{
		return callMethod<jint>(
			"captureSingleRequest",
			"(Landroid/hardware/camera2/CaptureRequest;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void CameraCaptureSession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void CameraCaptureSession::finalizeOutputConfigurations(JObject arg0) const
	{
		callMethod<void>(
			"finalizeOutputConfigurations",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline android::hardware::camera2::CameraDevice CameraCaptureSession::getDevice() const
	{
		return callObjectMethod(
			"getDevice",
			"()Landroid/hardware/camera2/CameraDevice;"
		);
	}
	inline android::view::Surface CameraCaptureSession::getInputSurface() const
	{
		return callObjectMethod(
			"getInputSurface",
			"()Landroid/view/Surface;"
		);
	}
	inline jboolean CameraCaptureSession::isReprocessable() const
	{
		return callMethod<jboolean>(
			"isReprocessable",
			"()Z"
		);
	}
	inline void CameraCaptureSession::prepare(android::view::Surface arg0) const
	{
		callMethod<void>(
			"prepare",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	inline jint CameraCaptureSession::setRepeatingBurst(JObject arg0, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, android::os::Handler arg2) const
	{
		return callMethod<jint>(
			"setRepeatingBurst",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;Landroid/os/Handler;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jint CameraCaptureSession::setRepeatingBurstRequests(JObject arg0, JObject arg1, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2) const
	{
		return callMethod<jint>(
			"setRepeatingBurstRequests",
			"(Ljava/util/List;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jint CameraCaptureSession::setRepeatingRequest(android::hardware::camera2::CaptureRequest arg0, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, android::os::Handler arg2) const
	{
		return callMethod<jint>(
			"setRepeatingRequest",
			"(Landroid/hardware/camera2/CaptureRequest;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;Landroid/os/Handler;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jint CameraCaptureSession::setSingleRepeatingRequest(android::hardware::camera2::CaptureRequest arg0, JObject arg1, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2) const
	{
		return callMethod<jint>(
			"setSingleRepeatingRequest",
			"(Landroid/hardware/camera2/CaptureRequest;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void CameraCaptureSession::stopRepeating() const
	{
		callMethod<void>(
			"stopRepeating",
			"()V"
		);
	}
	inline void CameraCaptureSession::updateOutputConfiguration(android::hardware::camera2::params::OutputConfiguration arg0) const
	{
		callMethod<void>(
			"updateOutputConfiguration",
			"(Landroid/hardware/camera2/params/OutputConfiguration;)V",
			arg0.object()
		);
	}
} // namespace android::hardware::camera2

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2;
#endif
