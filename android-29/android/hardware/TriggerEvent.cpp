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
	jfloatArray TriggerEvent::values()
	{
		return getObjectField(
			"values",
			"[F"
		).object<jfloatArray>();
	}
	
	// QAndroidJniObject forward
	TriggerEvent::TriggerEvent(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::hardware

