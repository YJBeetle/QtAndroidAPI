#include "./Sensor.hpp"
#include "./SensorAdditionalInfo.hpp"
#include "./SensorEvent.hpp"
#include "./SensorEventCallback.hpp"

namespace android::hardware
{
	// Fields
	
	// QJniObject forward
	SensorEventCallback::SensorEventCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SensorEventCallback::SensorEventCallback()
		: JObject(
			"android.hardware.SensorEventCallback",
			"()V"
		) {}
	
	// Methods
	void SensorEventCallback::onAccuracyChanged(android::hardware::Sensor arg0, jint arg1)
	{
		callMethod<void>(
			"onAccuracyChanged",
			"(Landroid/hardware/Sensor;I)V",
			arg0.object(),
			arg1
		);
	}
	void SensorEventCallback::onFlushCompleted(android::hardware::Sensor arg0)
	{
		callMethod<void>(
			"onFlushCompleted",
			"(Landroid/hardware/Sensor;)V",
			arg0.object()
		);
	}
	void SensorEventCallback::onSensorAdditionalInfo(android::hardware::SensorAdditionalInfo arg0)
	{
		callMethod<void>(
			"onSensorAdditionalInfo",
			"(Landroid/hardware/SensorAdditionalInfo;)V",
			arg0.object()
		);
	}
	void SensorEventCallback::onSensorChanged(android::hardware::SensorEvent arg0)
	{
		callMethod<void>(
			"onSensorChanged",
			"(Landroid/hardware/SensorEvent;)V",
			arg0.object()
		);
	}
} // namespace android::hardware

