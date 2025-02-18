#pragma once

#include "./CameraCharacteristics.def.hpp"
#include "./CameraDevice_StateCallback.def.hpp"
#include "./CaptureRequest_Builder.def.hpp"
#include "./params/SessionConfiguration.def.hpp"
#include "../../../JString.hpp"
#include "./CameraDevice_CameraDeviceSetup.def.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::hardware::camera2::CaptureRequest_Builder CameraDevice_CameraDeviceSetup::createCaptureRequest(jint arg0) const
	{
		return callObjectMethod(
			"createCaptureRequest",
			"(I)Landroid/hardware/camera2/CaptureRequest$Builder;",
			arg0
		);
	}
	inline JString CameraDevice_CameraDeviceSetup::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline android::hardware::camera2::CameraCharacteristics CameraDevice_CameraDeviceSetup::getSessionCharacteristics(android::hardware::camera2::params::SessionConfiguration arg0) const
	{
		return callObjectMethod(
			"getSessionCharacteristics",
			"(Landroid/hardware/camera2/params/SessionConfiguration;)Landroid/hardware/camera2/CameraCharacteristics;",
			arg0.object()
		);
	}
	inline jboolean CameraDevice_CameraDeviceSetup::isSessionConfigurationSupported(android::hardware::camera2::params::SessionConfiguration arg0) const
	{
		return callMethod<jboolean>(
			"isSessionConfigurationSupported",
			"(Landroid/hardware/camera2/params/SessionConfiguration;)Z",
			arg0.object()
		);
	}
	inline void CameraDevice_CameraDeviceSetup::openCamera(JObject arg0, android::hardware::camera2::CameraDevice_StateCallback arg1) const
	{
		callMethod<void>(
			"openCamera",
			"(Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraDevice$StateCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::hardware::camera2

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2;
#endif
