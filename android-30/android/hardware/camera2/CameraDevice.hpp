#pragma once

#include "./CameraCaptureSession_StateCallback.def.hpp"
#include "./CaptureRequest_Builder.def.hpp"
#include "./TotalCaptureResult.def.hpp"
#include "./params/InputConfiguration.def.hpp"
#include "./params/SessionConfiguration.def.hpp"
#include "../../os/Handler.def.hpp"
#include "../../../JString.hpp"
#include "./CameraDevice.def.hpp"

namespace android::hardware::camera2
{
	// Fields
	inline jint CameraDevice::AUDIO_RESTRICTION_NONE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"AUDIO_RESTRICTION_NONE"
		);
	}
	inline jint CameraDevice::AUDIO_RESTRICTION_VIBRATION()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"AUDIO_RESTRICTION_VIBRATION"
		);
	}
	inline jint CameraDevice::AUDIO_RESTRICTION_VIBRATION_SOUND()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"AUDIO_RESTRICTION_VIBRATION_SOUND"
		);
	}
	inline jint CameraDevice::TEMPLATE_MANUAL()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_MANUAL"
		);
	}
	inline jint CameraDevice::TEMPLATE_PREVIEW()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_PREVIEW"
		);
	}
	inline jint CameraDevice::TEMPLATE_RECORD()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_RECORD"
		);
	}
	inline jint CameraDevice::TEMPLATE_STILL_CAPTURE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_STILL_CAPTURE"
		);
	}
	inline jint CameraDevice::TEMPLATE_VIDEO_SNAPSHOT()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_VIDEO_SNAPSHOT"
		);
	}
	inline jint CameraDevice::TEMPLATE_ZERO_SHUTTER_LAG()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraDevice",
			"TEMPLATE_ZERO_SHUTTER_LAG"
		);
	}
	
	// Constructors
	
	// Methods
	inline void CameraDevice::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline android::hardware::camera2::CaptureRequest_Builder CameraDevice::createCaptureRequest(jint arg0) const
	{
		return callObjectMethod(
			"createCaptureRequest",
			"(I)Landroid/hardware/camera2/CaptureRequest$Builder;",
			arg0
		);
	}
	inline android::hardware::camera2::CaptureRequest_Builder CameraDevice::createCaptureRequest(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"createCaptureRequest",
			"(ILjava/util/Set;)Landroid/hardware/camera2/CaptureRequest$Builder;",
			arg0,
			arg1.object()
		);
	}
	inline void CameraDevice::createCaptureSession(android::hardware::camera2::params::SessionConfiguration arg0) const
	{
		callMethod<void>(
			"createCaptureSession",
			"(Landroid/hardware/camera2/params/SessionConfiguration;)V",
			arg0.object()
		);
	}
	inline void CameraDevice::createCaptureSession(JObject arg0, android::hardware::camera2::CameraCaptureSession_StateCallback arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"createCaptureSession",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void CameraDevice::createCaptureSessionByOutputConfigurations(JObject arg0, android::hardware::camera2::CameraCaptureSession_StateCallback arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"createCaptureSessionByOutputConfigurations",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void CameraDevice::createConstrainedHighSpeedCaptureSession(JObject arg0, android::hardware::camera2::CameraCaptureSession_StateCallback arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"createConstrainedHighSpeedCaptureSession",
			"(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::hardware::camera2::CaptureRequest_Builder CameraDevice::createReprocessCaptureRequest(android::hardware::camera2::TotalCaptureResult arg0) const
	{
		return callObjectMethod(
			"createReprocessCaptureRequest",
			"(Landroid/hardware/camera2/TotalCaptureResult;)Landroid/hardware/camera2/CaptureRequest$Builder;",
			arg0.object()
		);
	}
	inline void CameraDevice::createReprocessableCaptureSession(android::hardware::camera2::params::InputConfiguration arg0, JObject arg1, android::hardware::camera2::CameraCaptureSession_StateCallback arg2, android::os::Handler arg3) const
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
	inline void CameraDevice::createReprocessableCaptureSessionByConfigurations(android::hardware::camera2::params::InputConfiguration arg0, JObject arg1, android::hardware::camera2::CameraCaptureSession_StateCallback arg2, android::os::Handler arg3) const
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
	inline jint CameraDevice::getCameraAudioRestriction() const
	{
		return callMethod<jint>(
			"getCameraAudioRestriction",
			"()I"
		);
	}
	inline JString CameraDevice::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean CameraDevice::isSessionConfigurationSupported(android::hardware::camera2::params::SessionConfiguration arg0) const
	{
		return callMethod<jboolean>(
			"isSessionConfigurationSupported",
			"(Landroid/hardware/camera2/params/SessionConfiguration;)Z",
			arg0.object()
		);
	}
	inline void CameraDevice::setCameraAudioRestriction(jint arg0) const
	{
		callMethod<void>(
			"setCameraAudioRestriction",
			"(I)V",
			arg0
		);
	}
} // namespace android::hardware::camera2

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2;
#endif
