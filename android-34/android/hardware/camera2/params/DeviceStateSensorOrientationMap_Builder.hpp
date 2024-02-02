#pragma once

#include "./DeviceStateSensorOrientationMap.def.hpp"
#include "./DeviceStateSensorOrientationMap_Builder.def.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// Constructors
	inline DeviceStateSensorOrientationMap_Builder::DeviceStateSensorOrientationMap_Builder()
		: JObject(
			"android.hardware.camera2.params.DeviceStateSensorOrientationMap$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::hardware::camera2::params::DeviceStateSensorOrientationMap_Builder DeviceStateSensorOrientationMap_Builder::addOrientationForState(jlong arg0, jlong arg1) const
	{
		return callObjectMethod(
			"addOrientationForState",
			"(JJ)Landroid/hardware/camera2/params/DeviceStateSensorOrientationMap$Builder;",
			arg0,
			arg1
		);
	}
	inline android::hardware::camera2::params::DeviceStateSensorOrientationMap DeviceStateSensorOrientationMap_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/hardware/camera2/params/DeviceStateSensorOrientationMap;"
		);
	}
} // namespace android::hardware::camera2::params

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2::params;
#endif
