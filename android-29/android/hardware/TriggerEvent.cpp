#include "../../JFloatArray.hpp"
#include "./Sensor.hpp"
#include "./TriggerEvent.hpp"

namespace android::hardware
{
	// Fields
	android::hardware::Sensor TriggerEvent::sensor()
	{
		return getObjectField(
			"sensor",
			"Landroid/hardware/Sensor;"
		);
	}
	jlong TriggerEvent::timestamp()
	{
		return getField<jlong>(
			"timestamp"
		);
	}
	JFloatArray TriggerEvent::values()
	{
		return getObjectField(
			"values",
			"[F"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::hardware

