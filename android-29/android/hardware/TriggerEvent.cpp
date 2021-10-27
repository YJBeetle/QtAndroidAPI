#include "./Sensor.hpp"
#include "./TriggerEvent.hpp"

namespace android::hardware
{
	// Fields
	QAndroidJniObject TriggerEvent::sensor()
	{
		return __thiz.getObjectField(
			"sensor",
			"Landroid/hardware/Sensor;"
		);
	}
	jlong TriggerEvent::timestamp()
	{
		return __thiz.getField<jlong>(
			"timestamp"
		);
	}
	jfloatArray TriggerEvent::values()
	{
		return __thiz.getObjectField(
			"values",
			"[F"
		).object<jfloatArray>();
	}
	
	TriggerEvent::TriggerEvent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::hardware

