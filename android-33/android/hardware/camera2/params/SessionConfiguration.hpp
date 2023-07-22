#pragma once

#include "../CameraCaptureSession_StateCallback.def.hpp"
#include "../CaptureRequest.def.hpp"
#include "./InputConfiguration.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "./SessionConfiguration.def.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	inline JObject SessionConfiguration::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.camera2.params.SessionConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
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
	inline jint SessionConfiguration::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SessionConfiguration::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
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
	inline jint SessionConfiguration::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
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
	inline void SessionConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::camera2::params

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2::params;
#endif
