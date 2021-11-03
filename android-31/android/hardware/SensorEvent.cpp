#include "../../JFloatArray.hpp"
#include "./Sensor.hpp"
#include "./SensorEvent.hpp"

namespace android::hardware
{
	// Fields
	jint SensorEvent::accuracy()
	{
		return getField<jint>(
			"accuracy"
		);
	}
	android::hardware::Sensor SensorEvent::sensor()
	{
		return getObjectField(
			"sensor",
			"Landroid/hardware/Sensor;"
		);
	}
	jlong SensorEvent::timestamp()
	{
		return getField<jlong>(
			"timestamp"
		);
	}
	JFloatArray SensorEvent::values()
	{
		return getObjectField(
			"values",
			"[F"
		);
	}
	
	// QAndroidJniObject forward
	SensorEvent::SensorEvent(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::hardware

