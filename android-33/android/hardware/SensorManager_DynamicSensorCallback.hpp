#pragma once

#include "./Sensor.def.hpp"
#include "./SensorManager_DynamicSensorCallback.def.hpp"

namespace android::hardware
{
	// Fields
	
	// Constructors
	inline SensorManager_DynamicSensorCallback::SensorManager_DynamicSensorCallback()
		: JObject(
			"android.hardware.SensorManager$DynamicSensorCallback",
			"()V"
		) {}
	
	// Methods
	inline void SensorManager_DynamicSensorCallback::onDynamicSensorConnected(android::hardware::Sensor arg0) const
	{
		callMethod<void>(
			"onDynamicSensorConnected",
			"(Landroid/hardware/Sensor;)V",
			arg0.object()
		);
	}
	inline void SensorManager_DynamicSensorCallback::onDynamicSensorDisconnected(android::hardware::Sensor arg0) const
	{
		callMethod<void>(
			"onDynamicSensorDisconnected",
			"(Landroid/hardware/Sensor;)V",
			arg0.object()
		);
	}
} // namespace android::hardware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware;
#endif
