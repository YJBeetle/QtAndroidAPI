#include "./CameraCaptureSession_CaptureCallback.hpp"
#include "./CameraDevice.hpp"
#include "./CameraOfflineSession.hpp"
#include "./CameraOfflineSession_CameraOfflineSessionCallback.hpp"
#include "./CaptureRequest.hpp"
#include "./params/OutputConfiguration.hpp"
#include "../../os/Handler.hpp"
#include "../../view/Surface.hpp"
#include "./CameraCaptureSession.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QAndroidJniObject forward
	CameraCaptureSession::CameraCaptureSession(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	CameraCaptureSession::CameraCaptureSession()
		: JObject(
			"android.hardware.camera2.CameraCaptureSession",
			"()V"
		) {}
	
	// Methods
	void CameraCaptureSession::abortCaptures() const
	{
		callMethod<void>(
			"abortCaptures",
			"()V"
		);
	}
	jint CameraCaptureSession::capture(android::hardware::camera2::CaptureRequest arg0, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, android::os::Handler arg2) const
	{
		return callMethod<jint>(
			"capture",
			"(Landroid/hardware/camera2/CaptureRequest;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;Landroid/os/Handler;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jint CameraCaptureSession::captureBurst(JObject arg0, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, android::os::Handler arg2) const
	{
		return callMethod<jint>(
			"captureBurst",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;Landroid/os/Handler;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jint CameraCaptureSession::captureBurstRequests(JObject arg0, JObject arg1, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2) const
	{
		return callMethod<jint>(
			"captureBurstRequests",
			"(Ljava/util/List;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jint CameraCaptureSession::captureSingleRequest(android::hardware::camera2::CaptureRequest arg0, JObject arg1, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2) const
	{
		return callMethod<jint>(
			"captureSingleRequest",
			"(Landroid/hardware/camera2/CaptureRequest;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void CameraCaptureSession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void CameraCaptureSession::finalizeOutputConfigurations(JObject arg0) const
	{
		callMethod<void>(
			"finalizeOutputConfigurations",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	android::hardware::camera2::CameraDevice CameraCaptureSession::getDevice() const
	{
		return callObjectMethod(
			"getDevice",
			"()Landroid/hardware/camera2/CameraDevice;"
		);
	}
	android::view::Surface CameraCaptureSession::getInputSurface() const
	{
		return callObjectMethod(
			"getInputSurface",
			"()Landroid/view/Surface;"
		);
	}
	jboolean CameraCaptureSession::isReprocessable() const
	{
		return callMethod<jboolean>(
			"isReprocessable",
			"()Z"
		);
	}
	void CameraCaptureSession::prepare(android::view::Surface arg0) const
	{
		callMethod<void>(
			"prepare",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	jint CameraCaptureSession::setRepeatingBurst(JObject arg0, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, android::os::Handler arg2) const
	{
		return callMethod<jint>(
			"setRepeatingBurst",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;Landroid/os/Handler;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jint CameraCaptureSession::setRepeatingBurstRequests(JObject arg0, JObject arg1, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2) const
	{
		return callMethod<jint>(
			"setRepeatingBurstRequests",
			"(Ljava/util/List;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jint CameraCaptureSession::setRepeatingRequest(android::hardware::camera2::CaptureRequest arg0, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, android::os::Handler arg2) const
	{
		return callMethod<jint>(
			"setRepeatingRequest",
			"(Landroid/hardware/camera2/CaptureRequest;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;Landroid/os/Handler;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jint CameraCaptureSession::setSingleRepeatingRequest(android::hardware::camera2::CaptureRequest arg0, JObject arg1, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2) const
	{
		return callMethod<jint>(
			"setSingleRepeatingRequest",
			"(Landroid/hardware/camera2/CaptureRequest;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void CameraCaptureSession::stopRepeating() const
	{
		callMethod<void>(
			"stopRepeating",
			"()V"
		);
	}
	jboolean CameraCaptureSession::supportsOfflineProcessing(android::view::Surface arg0) const
	{
		return callMethod<jboolean>(
			"supportsOfflineProcessing",
			"(Landroid/view/Surface;)Z",
			arg0.object()
		);
	}
	android::hardware::camera2::CameraOfflineSession CameraCaptureSession::switchToOffline(JObject arg0, JObject arg1, android::hardware::camera2::CameraOfflineSession_CameraOfflineSessionCallback arg2) const
	{
		return callObjectMethod(
			"switchToOffline",
			"(Ljava/util/Collection;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraOfflineSession$CameraOfflineSessionCallback;)Landroid/hardware/camera2/CameraOfflineSession;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void CameraCaptureSession::updateOutputConfiguration(android::hardware::camera2::params::OutputConfiguration arg0) const
	{
		callMethod<void>(
			"updateOutputConfiguration",
			"(Landroid/hardware/camera2/params/OutputConfiguration;)V",
			arg0.object()
		);
	}
} // namespace android::hardware::camera2

