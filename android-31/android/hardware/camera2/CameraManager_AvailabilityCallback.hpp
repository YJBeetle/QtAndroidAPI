#pragma once

#include "../../../JString.hpp"
#include "./CameraManager_AvailabilityCallback.def.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// Constructors
	inline CameraManager_AvailabilityCallback::CameraManager_AvailabilityCallback()
		: JObject(
			"android.hardware.camera2.CameraManager$AvailabilityCallback",
			"()V"
		) {}
	
	// Methods
	inline void CameraManager_AvailabilityCallback::onCameraAccessPrioritiesChanged() const
	{
		callMethod<void>(
			"onCameraAccessPrioritiesChanged",
			"()V"
		);
	}
	inline void CameraManager_AvailabilityCallback::onCameraAvailable(JString arg0) const
	{
		callMethod<void>(
			"onCameraAvailable",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void CameraManager_AvailabilityCallback::onCameraUnavailable(JString arg0) const
	{
		callMethod<void>(
			"onCameraUnavailable",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void CameraManager_AvailabilityCallback::onPhysicalCameraAvailable(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"onPhysicalCameraAvailable",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void CameraManager_AvailabilityCallback::onPhysicalCameraUnavailable(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"onPhysicalCameraUnavailable",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
} // namespace android::hardware::camera2

// Base class headers

