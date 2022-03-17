#pragma once

#include "./Sensor.def.hpp"
#include "./SensorAdditionalInfo.def.hpp"
#include "./SensorEvent.def.hpp"
#include "./SensorEventCallback.def.hpp"

namespace android::hardware
{
	// Fields
	
	// Constructors
	inline SensorEventCallback::SensorEventCallback()
		: JObject(
			"android.hardware.SensorEventCallback",
			"()V"
		) {}
	
	// Methods
	inline void SensorEventCallback::onAccuracyChanged(android::hardware::Sensor arg0, jint arg1) const
	{
		callMethod<void>(
			"onAccuracyChanged",
			"(Landroid/hardware/Sensor;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void SensorEventCallback::onFlushCompleted(android::hardware::Sensor arg0) const
	{
		callMethod<void>(
			"onFlushCompleted",
			"(Landroid/hardware/Sensor;)V",
			arg0.object()
		);
	}
	inline void SensorEventCallback::onSensorAdditionalInfo(android::hardware::SensorAdditionalInfo arg0) const
	{
		callMethod<void>(
			"onSensorAdditionalInfo",
			"(Landroid/hardware/SensorAdditionalInfo;)V",
			arg0.object()
		);
	}
	inline void SensorEventCallback::onSensorChanged(android::hardware::SensorEvent arg0) const
	{
		callMethod<void>(
			"onSensorChanged",
			"(Landroid/hardware/SensorEvent;)V",
			arg0.object()
		);
	}
} // namespace android::hardware

// Base class headers

