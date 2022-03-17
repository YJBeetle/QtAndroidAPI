#pragma once

#include "../CameraExtensionSession_StateCallback.def.hpp"
#include "./ExtensionSessionConfiguration.def.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// Constructors
	inline ExtensionSessionConfiguration::ExtensionSessionConfiguration(jint arg0, JObject arg1, JObject arg2, android::hardware::camera2::CameraExtensionSession_StateCallback arg3)
		: JObject(
			"android.hardware.camera2.params.ExtensionSessionConfiguration",
			"(ILjava/util/List;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraExtensionSession$StateCallback;)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline JObject ExtensionSessionConfiguration::getExecutor() const
	{
		return callObjectMethod(
			"getExecutor",
			"()Ljava/util/concurrent/Executor;"
		);
	}
	inline jint ExtensionSessionConfiguration::getExtension() const
	{
		return callMethod<jint>(
			"getExtension",
			"()I"
		);
	}
	inline JObject ExtensionSessionConfiguration::getOutputConfigurations() const
	{
		return callObjectMethod(
			"getOutputConfigurations",
			"()Ljava/util/List;"
		);
	}
	inline android::hardware::camera2::CameraExtensionSession_StateCallback ExtensionSessionConfiguration::getStateCallback() const
	{
		return callObjectMethod(
			"getStateCallback",
			"()Landroid/hardware/camera2/CameraExtensionSession$StateCallback;"
		);
	}
} // namespace android::hardware::camera2::params

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2::params;
#endif
