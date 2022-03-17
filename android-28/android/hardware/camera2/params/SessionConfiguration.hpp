#pragma once

#include "../CameraCaptureSession_StateCallback.def.hpp"
#include "../CaptureRequest.def.hpp"
#include "./InputConfiguration.def.hpp"
#include "./SessionConfiguration.def.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	inline jint SessionConfiguration::SESSION_HIGH_SPEED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.SessionConfiguration",
			"SESSION_HIGH_SPEED"
		);
	}
	inline jint SessionConfiguration::SESSION_REGULAR()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.SessionConfiguration",
			"SESSION_REGULAR"
		);
	}
	
	// Constructors
	inline SessionConfiguration::SessionConfiguration(jint arg0, JObject arg1, JObject arg2, android::hardware::camera2::CameraCaptureSession_StateCallback arg3)
		: JObject(
			"android.hardware.camera2.params.SessionConfiguration",
			"(ILjava/util/List;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline JObject SessionConfiguration::getExecutor() const
	{
		return callObjectMethod(
			"getExecutor",
			"()Ljava/util/concurrent/Executor;"
		);
	}
	inline android::hardware::camera2::params::InputConfiguration SessionConfiguration::getInputConfiguration() const
	{
		return callObjectMethod(
			"getInputConfiguration",
			"()Landroid/hardware/camera2/params/InputConfiguration;"
		);
	}
	inline JObject SessionConfiguration::getOutputConfigurations() const
	{
		return callObjectMethod(
			"getOutputConfigurations",
			"()Ljava/util/List;"
		);
	}
	inline android::hardware::camera2::CaptureRequest SessionConfiguration::getSessionParameters() const
	{
		return callObjectMethod(
			"getSessionParameters",
			"()Landroid/hardware/camera2/CaptureRequest;"
		);
	}
	inline jint SessionConfiguration::getSessionType() const
	{
		return callMethod<jint>(
			"getSessionType",
			"()I"
		);
	}
	inline android::hardware::camera2::CameraCaptureSession_StateCallback SessionConfiguration::getStateCallback() const
	{
		return callObjectMethod(
			"getStateCallback",
			"()Landroid/hardware/camera2/CameraCaptureSession$StateCallback;"
		);
	}
	inline void SessionConfiguration::setInputConfiguration(android::hardware::camera2::params::InputConfiguration arg0) const
	{
		callMethod<void>(
			"setInputConfiguration",
			"(Landroid/hardware/camera2/params/InputConfiguration;)V",
			arg0.object()
		);
	}
	inline void SessionConfiguration::setSessionParameters(android::hardware::camera2::CaptureRequest arg0) const
	{
		callMethod<void>(
			"setSessionParameters",
			"(Landroid/hardware/camera2/CaptureRequest;)V",
			arg0.object()
		);
	}
} // namespace android::hardware::camera2::params

// Base class headers

