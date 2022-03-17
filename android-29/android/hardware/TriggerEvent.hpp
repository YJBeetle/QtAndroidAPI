#pragma once

#include "../../JFloatArray.hpp"
#include "./Sensor.def.hpp"
#include "./TriggerEvent.def.hpp"

namespace android::hardware
{
	// Fields
	inline android::hardware::Sensor TriggerEvent::sensor()
	{
		return getObjectField(
			"sensor",
			"Landroid/hardware/Sensor;"
		);
	}
	inline jlong TriggerEvent::timestamp()
	{
		return getField<jlong>(
			"timestamp"
		);
	}
	inline JFloatArray TriggerEvent::values()
	{
		return getObjectField(
			"values",
			"[F"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::hardware

// Base class headers

