#include "./Sensor.hpp"
#include "./SensorEvent.hpp"

namespace android::hardware
{
	// Fields
	jint SensorEvent::accuracy()
	{
		return __thiz.getField<jint>(
			"accuracy"
		);
	}
	QAndroidJniObject SensorEvent::sensor()
	{
		return __thiz.getObjectField(
			"sensor",
			"Landroid/hardware/Sensor;"
		);
	}
	jlong SensorEvent::timestamp()
	{
		return __thiz.getField<jlong>(
			"timestamp"
		);
	}
	jfloatArray SensorEvent::values()
	{
		return __thiz.getObjectField(
			"values",
			"[F"
		).object<jfloatArray>();
	}
	
	SensorEvent::SensorEvent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::hardware

