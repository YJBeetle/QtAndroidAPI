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
	
	CameraCaptureSession::CameraCaptureSession(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CameraCaptureSession::CameraCaptureSession()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraCaptureSession",
			"()V"
		);
	}
	
	// Methods
	void CameraCaptureSession::abortCaptures()
	{
		__thiz.callMethod<void>(
			"abortCaptures",
			"()V"
		);
	}
	jint CameraCaptureSession::capture(android::hardware::camera2::CaptureRequest arg0, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, android::os::Handler arg2)
	{
		return __thiz.callMethod<jint>(
			"capture",
			"(Landroid/hardware/camera2/CaptureRequest;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;Landroid/os/Handler;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jint CameraCaptureSession::captureBurst(__JniBaseClass arg0, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, android::os::Handler arg2)
	{
		return __thiz.callMethod<jint>(
			"captureBurst",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;Landroid/os/Handler;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jint CameraCaptureSession::captureBurstRequests(__JniBaseClass arg0, __JniBaseClass arg1, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2)
	{
		return __thiz.callMethod<jint>(
			"captureBurstRequests",
			"(Ljava/util/List;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jint CameraCaptureSession::captureSingleRequest(android::hardware::camera2::CaptureRequest arg0, __JniBaseClass arg1, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2)
	{
		return __thiz.callMethod<jint>(
			"captureSingleRequest",
			"(Landroid/hardware/camera2/CaptureRequest;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void CameraCaptureSession::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void CameraCaptureSession::finalizeOutputConfigurations(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"finalizeOutputConfigurations",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CameraCaptureSession::getDevice()
	{
		return __thiz.callObjectMethod(
			"getDevice",
			"()Landroid/hardware/camera2/CameraDevice;"
		);
	}
	QAndroidJniObject CameraCaptureSession::getInputSurface()
	{
		return __thiz.callObjectMethod(
			"getInputSurface",
			"()Landroid/view/Surface;"
		);
	}
	jboolean CameraCaptureSession::isReprocessable()
	{
		return __thiz.callMethod<jboolean>(
			"isReprocessable",
			"()Z"
		);
	}
	void CameraCaptureSession::prepare(android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"prepare",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
	jint CameraCaptureSession::setRepeatingBurst(__JniBaseClass arg0, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, android::os::Handler arg2)
	{
		return __thiz.callMethod<jint>(
			"setRepeatingBurst",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;Landroid/os/Handler;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jint CameraCaptureSession::setRepeatingBurstRequests(__JniBaseClass arg0, __JniBaseClass arg1, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2)
	{
		return __thiz.callMethod<jint>(
			"setRepeatingBurstRequests",
			"(Ljava/util/List;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jint CameraCaptureSession::setRepeatingRequest(android::hardware::camera2::CaptureRequest arg0, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg1, android::os::Handler arg2)
	{
		return __thiz.callMethod<jint>(
			"setRepeatingRequest",
			"(Landroid/hardware/camera2/CaptureRequest;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;Landroid/os/Handler;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jint CameraCaptureSession::setSingleRepeatingRequest(android::hardware::camera2::CaptureRequest arg0, __JniBaseClass arg1, android::hardware::camera2::CameraCaptureSession_CaptureCallback arg2)
	{
		return __thiz.callMethod<jint>(
			"setSingleRepeatingRequest",
			"(Landroid/hardware/camera2/CaptureRequest;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void CameraCaptureSession::stopRepeating()
	{
		__thiz.callMethod<void>(
			"stopRepeating",
			"()V"
		);
	}
	void CameraCaptureSession::updateOutputConfiguration(android::hardware::camera2::params::OutputConfiguration arg0)
	{
		__thiz.callMethod<void>(
			"updateOutputConfiguration",
			"(Landroid/hardware/camera2/params/OutputConfiguration;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::hardware::camera2

