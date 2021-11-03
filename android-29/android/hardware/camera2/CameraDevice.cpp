#include "./CameraCaptureSession_StateCallback.hpp"
#include "./CaptureRequest_Builder.hpp"
#include "./TotalCaptureResult.hpp"
#include "./params/InputConfiguration.hpp"
#include "./params/SessionConfiguration.hpp"
#include "../../os/Handler.hpp"
#include "../../../JString.hpp"
#include "./CameraDevice.hpp"

namespace android::hardware::camera2
{
	// Fields
	jint CameraDevice::TEMPLATE_MANUAL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_MANUAL"
		);
	}
	jint CameraDevice::TEMPLATE_PREVIEW()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_PREVIEW"
		);
	}
	jint CameraDevice::TEMPLATE_RECORD()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_RECORD"
		);
	}
	jint CameraDevice::TEMPLATE_STILL_CAPTURE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_STILL_CAPTURE"
		);
	}
	jint CameraDevice::TEMPLATE_VIDEO_SNAPSHOT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_VIDEO_SNAPSHOT"
		);
	}
	jint CameraDevice::TEMPLATE_ZERO_SHUTTER_LAG()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_ZERO_SHUTTER_LAG"
		);
	}
	
	// QAndroidJniObject forward
	CameraDevice::CameraDevice(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void CameraDevice::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::hardware::camera2::CaptureRequest_Builder CameraDevice::createCaptureRequest(jint arg0) const
	{
		return callObjectMethod(
			"createCaptureRequest",
			"(I)Landroid/hardware/camera2/CaptureRequest$Builder;",
			arg0
		);
	}
	android::hardware::camera2::CaptureRequest_Builder CameraDevice::createCaptureRequest(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"createCaptureRequest",
			"(ILjava/util/Set;)Landroid/hardware/camera2/CaptureRequest$Builder;",
			arg0,
			arg1.object()
		);
	}
	void CameraDevice::createCaptureSession(android::hardware::camera2::params::SessionConfiguration arg0) const
	{
		callMethod<void>(
			"createCaptureSession",
			"(Landroid/hardware/camera2/params/SessionConfiguration;)V",
			arg0.object()
		);
	}
	void CameraDevice::createCaptureSession(JObject arg0, android::hardware::camera2::CameraCaptureSession_StateCallback arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"createCaptureSession",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void CameraDevice::createCaptureSessionByOutputConfigurations(JObject arg0, android::hardware::camera2::CameraCaptureSession_StateCallback arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"createCaptureSessionByOutputConfigurations",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void CameraDevice::createConstrainedHighSpeedCaptureSession(JObject arg0, android::hardware::camera2::CameraCaptureSession_StateCallback arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"createConstrainedHighSpeedCaptureSession",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::hardware::camera2::CaptureRequest_Builder CameraDevice::createReprocessCaptureRequest(android::hardware::camera2::TotalCaptureResult arg0) const
	{
		return callObjectMethod(
			"createReprocessCaptureRequest",
			"(Landroid/hardware/camera2/TotalCaptureResult;)Landroid/hardware/camera2/CaptureRequest$Builder;",
			arg0.object()
		);
	}
	void CameraDevice::createReprocessableCaptureSession(android::hardware::camera2::params::InputConfiguration arg0, JObject arg1, android::hardware::camera2::CameraCaptureSession_StateCallback arg2, android::os::Handler arg3) const
	{
		callMethod<void>(
			"createReprocessableCaptureSession",
			"(Landroid/hardware/camera2/params/InputConfiguration;Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	void CameraDevice::createReprocessableCaptureSessionByConfigurations(android::hardware::camera2::params::InputConfiguration arg0, JObject arg1, android::hardware::camera2::CameraCaptureSession_StateCallback arg2, android::os::Handler arg3) const
	{
		callMethod<void>(
			"createReprocessableCaptureSessionByConfigurations",
			"(Landroid/hardware/camera2/params/InputConfiguration;Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	JString CameraDevice::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	jboolean CameraDevice::isSessionConfigurationSupported(android::hardware::camera2::params::SessionConfiguration arg0) const
	{
		return callMethod<jboolean>(
			"isSessionConfigurationSupported",
			"(Landroid/hardware/camera2/params/SessionConfiguration;)Z",
			arg0.object()
		);
	}
} // namespace android::hardware::camera2

