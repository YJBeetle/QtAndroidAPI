#include "./CameraCaptureSession_StateCallback.hpp"
#include "./CaptureRequest_Builder.hpp"
#include "./TotalCaptureResult.hpp"
#include "./params/InputConfiguration.hpp"
#include "./params/SessionConfiguration.hpp"
#include "../../os/Handler.hpp"
#include "./CameraDevice.hpp"

namespace android::hardware::camera2
{
	// Fields
	jint CameraDevice::TEMPLATE_MANUAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_MANUAL"
		);
	}
	jint CameraDevice::TEMPLATE_PREVIEW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_PREVIEW"
		);
	}
	jint CameraDevice::TEMPLATE_RECORD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_RECORD"
		);
	}
	jint CameraDevice::TEMPLATE_STILL_CAPTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_STILL_CAPTURE"
		);
	}
	jint CameraDevice::TEMPLATE_VIDEO_SNAPSHOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_VIDEO_SNAPSHOT"
		);
	}
	jint CameraDevice::TEMPLATE_ZERO_SHUTTER_LAG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_ZERO_SHUTTER_LAG"
		);
	}
	
	CameraDevice::CameraDevice(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void CameraDevice::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject CameraDevice::createCaptureRequest(jint arg0)
	{
		return __thiz.callObjectMethod(
			"createCaptureRequest",
			"(I)Landroid/hardware/camera2/CaptureRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject CameraDevice::createCaptureRequest(jint arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"createCaptureRequest",
			"(ILjava/util/Set;)Landroid/hardware/camera2/CaptureRequest$Builder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void CameraDevice::createCaptureSession(android::hardware::camera2::params::SessionConfiguration arg0)
	{
		__thiz.callMethod<void>(
			"createCaptureSession",
			"(Landroid/hardware/camera2/params/SessionConfiguration;)V",
			arg0.__jniObject().object()
		);
	}
	void CameraDevice::createCaptureSession(__JniBaseClass arg0, android::hardware::camera2::CameraCaptureSession_StateCallback arg1, android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"createCaptureSession",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void CameraDevice::createCaptureSessionByOutputConfigurations(__JniBaseClass arg0, android::hardware::camera2::CameraCaptureSession_StateCallback arg1, android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"createCaptureSessionByOutputConfigurations",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void CameraDevice::createConstrainedHighSpeedCaptureSession(__JniBaseClass arg0, android::hardware::camera2::CameraCaptureSession_StateCallback arg1, android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"createConstrainedHighSpeedCaptureSession",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject CameraDevice::createReprocessCaptureRequest(android::hardware::camera2::TotalCaptureResult arg0)
	{
		return __thiz.callObjectMethod(
			"createReprocessCaptureRequest",
			"(Landroid/hardware/camera2/TotalCaptureResult;)Landroid/hardware/camera2/CaptureRequest$Builder;",
			arg0.__jniObject().object()
		);
	}
	void CameraDevice::createReprocessableCaptureSession(android::hardware::camera2::params::InputConfiguration arg0, __JniBaseClass arg1, android::hardware::camera2::CameraCaptureSession_StateCallback arg2, android::os::Handler arg3)
	{
		__thiz.callMethod<void>(
			"createReprocessableCaptureSession",
			"(Landroid/hardware/camera2/params/InputConfiguration;Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void CameraDevice::createReprocessableCaptureSessionByConfigurations(android::hardware::camera2::params::InputConfiguration arg0, __JniBaseClass arg1, android::hardware::camera2::CameraCaptureSession_StateCallback arg2, android::os::Handler arg3)
	{
		__thiz.callMethod<void>(
			"createReprocessableCaptureSessionByConfigurations",
			"(Landroid/hardware/camera2/params/InputConfiguration;Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jstring CameraDevice::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean CameraDevice::isSessionConfigurationSupported(android::hardware::camera2::params::SessionConfiguration arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSessionConfigurationSupported",
			"(Landroid/hardware/camera2/params/SessionConfiguration;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace android::hardware::camera2

