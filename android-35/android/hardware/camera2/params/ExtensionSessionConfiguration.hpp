#pragma once

#include "../../../graphics/ColorSpace.def.hpp"
#include "../../../graphics/ColorSpace_Named.def.hpp"
#include "../CameraExtensionSession_StateCallback.def.hpp"
#include "./OutputConfiguration.def.hpp"
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
	inline void ExtensionSessionConfiguration::clearColorSpace() const
	{
		callMethod<void>(
			"clearColorSpace",
			"()V"
		);
	}
	inline android::graphics::ColorSpace ExtensionSessionConfiguration::getColorSpace() const
	{
		return callObjectMethod(
			"getColorSpace",
			"()Landroid/graphics/ColorSpace;"
		);
	}
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
	inline android::hardware::camera2::params::OutputConfiguration ExtensionSessionConfiguration::getPostviewOutputConfiguration() const
	{
		return callObjectMethod(
			"getPostviewOutputConfiguration",
			"()Landroid/hardware/camera2/params/OutputConfiguration;"
		);
	}
	inline android::hardware::camera2::CameraExtensionSession_StateCallback ExtensionSessionConfiguration::getStateCallback() const
	{
		return callObjectMethod(
			"getStateCallback",
			"()Landroid/hardware/camera2/CameraExtensionSession$StateCallback;"
		);
	}
	inline void ExtensionSessionConfiguration::setColorSpace(android::graphics::ColorSpace_Named arg0) const
	{
		callMethod<void>(
			"setColorSpace",
			"(Landroid/graphics/ColorSpace$Named;)V",
			arg0.object()
		);
	}
	inline void ExtensionSessionConfiguration::setPostviewOutputConfiguration(android::hardware::camera2::params::OutputConfiguration arg0) const
	{
		callMethod<void>(
			"setPostviewOutputConfiguration",
			"(Landroid/hardware/camera2/params/OutputConfiguration;)V",
			arg0.object()
		);
	}
} // namespace android::hardware::camera2::params

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2::params;
#endif
