#include "./CameraCaptureSession_CaptureCallback.hpp"
#include "./CameraDevice.hpp"
#include "./CaptureRequest.hpp"
#include "./params/OutputConfiguration.hpp"
#include "../../os/Handler.hpp"
#include "../../view/Surface.hpp"
#include "./CameraCaptureSession.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QJniObject forward
	CameraCaptureSession::CameraCaptureSession(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CameraCaptureSession::CameraCaptureSession()
		: __JniBaseClass(
			"android.hardware.camera2.CameraCaptureSession",
			"()V"
		) {}
	
	// Methods
	void CameraCaptureSession::abortCaptures()
	{
		callMethod<void>(
			"abortCaptures",
			"()V"
		);
	}
	jint CameraCaptureSession::capture(android::hardware::camera2::CaptureRequest arg0, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, android::os::Handler arg2)
	{
		return callMethod<jint>(
			"capture",
			"(Landroid/hardware/camera2/CaptureRequest;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;Landroid/os/Handler;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jint CameraCaptureSession::captureBurst(__JniBaseClass arg0, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, android::os::Handler arg2)
	{
		return callMethod<jint>(
			"captureBurst",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;Landroid/os/Handler;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jint CameraCaptureSession::captureBurstRequests(__JniBaseClass arg0, __JniBaseClass arg1, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2)
	{
		return callMethod<jint>(
			"captureBurstRequests",
			"(Ljava/util/List;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jint CameraCaptureSession::captureSingleRequest(android::hardware::camera2::CaptureRequest arg0, __JniBaseClass arg1, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2)
	{
		return callMethod<jint>(
			"captureSingleRequest",
			"(Landroid/hardware/camera2/CaptureRequest;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void CameraCaptureSession::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void CameraCaptureSession::finalizeOutputConfigurations(__JniBaseClass arg0)
	{
		callMethod<void>(
			"finalizeOutputConfigurations",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	android::hardware::camera2::CameraDevice CameraCaptureSession::getDevice()
	{
		return callObjectMethod(
			"getDevice",
			"()Landroid/hardware/camera2/CameraDevice;"
		);
	}
	android::view::Surface CameraCaptureSession::getInputSurface()
	{
		return callObjectMethod(
			"getInputSurface",
			"()Landroid/view/Surface;"
		);
	}
	jboolean CameraCaptureSession::isReprocessable()
	{
		return callMethod<jboolean>(
			"isReprocessable",
			"()Z"
		);
	}
	void CameraCaptureSession::prepare(android::view::Surface arg0)
	{
		callMethod<void>(
			"prepare",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	jint CameraCaptureSession::setRepeatingBurst(__JniBaseClass arg0, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, android::os::Handler arg2)
	{
		return callMethod<jint>(
			"setRepeatingBurst",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;Landroid/os/Handler;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jint CameraCaptureSession::setRepeatingBurstRequests(__JniBaseClass arg0, __JniBaseClass arg1, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2)
	{
		return callMethod<jint>(
			"setRepeatingBurstRequests",
			"(Ljava/util/List;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jint CameraCaptureSession::setRepeatingRequest(android::hardware::camera2::CaptureRequest arg0, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, android::os::Handler arg2)
	{
		return callMethod<jint>(
			"setRepeatingRequest",
			"(Landroid/hardware/camera2/CaptureRequest;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;Landroid/os/Handler;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jint CameraCaptureSession::setSingleRepeatingRequest(android::hardware::camera2::CaptureRequest arg0, __JniBaseClass arg1, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2)
	{
		return callMethod<jint>(
			"setSingleRepeatingRequest",
			"(Landroid/hardware/camera2/CaptureRequest;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;)I",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void CameraCaptureSession::stopRepeating()
	{
		callMethod<void>(
			"stopRepeating",
			"()V"
		);
	}
	void CameraCaptureSession::updateOutputConfiguration(android::hardware::camera2::params::OutputConfiguration arg0)
	{
		callMethod<void>(
			"updateOutputConfiguration",
			"(Landroid/hardware/camera2/params/OutputConfiguration;)V",
			arg0.object()
		);
	}
} // namespace android::hardware::camera2

