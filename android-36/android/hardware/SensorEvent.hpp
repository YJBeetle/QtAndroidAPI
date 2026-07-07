#pragma once

#include "../../JFloatArray.hpp"
#include "./Sensor.def.hpp"
#include "./SensorEvent.def.hpp"

namespace android::hardware
{
	// Fields
	inline jint SensorEvent::accuracy()
	{
		return getField<jint>(
			"accuracy"
		);
	}
	inline jboolean SensorEvent::firstEventAfterDiscontinuity()
	{
		return getField<jboolean>(
			"firstEventAfterDiscontinuity"
		);
	}
	inline android::hardware::Sensor SensorEvent::sensor()
	{
		return getObjectField(
			"sensor",
			"Landroid/hardware/Sensor;"
		);
	}
	inline jlong SensorEvent::timestamp()
	{
		return getField<jlong>(
			"timestamp"
		);
	}
	inline JFloatArray SensorEvent::values()
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware;
#endif
