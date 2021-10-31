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
	QAndroidJniObject SensorEvent::sensor()
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
	jfloatArray SensorEvent::values()
	{
		return getObjectField(
			"values",
			"[F"
		).object<jfloatArray>();
	}
	
	// QAndroidJniObject forward
	SensorEvent::SensorEvent(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::hardware

