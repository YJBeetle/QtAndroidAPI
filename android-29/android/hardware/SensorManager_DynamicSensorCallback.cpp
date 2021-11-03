#include "./Sensor.hpp"
#include "./SensorManager_DynamicSensorCallback.hpp"

namespace android::hardware
{
	// Fields
	
	// QAndroidJniObject forward
	SensorManager_DynamicSensorCallback::SensorManager_DynamicSensorCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SensorManager_DynamicSensorCallback::SensorManager_DynamicSensorCallback()
		: JObject(
			"android.hardware.SensorManager$DynamicSensorCallback",
			"()V"
		) {}
	
	// Methods
	void SensorManager_DynamicSensorCallback::onDynamicSensorConnected(android::hardware::Sensor arg0)
	{
		callMethod<void>(
			"onDynamicSensorConnected",
			"(Landroid/hardware/Sensor;)V",
			arg0.object()
		);
	}
	void SensorManager_DynamicSensorCallback::onDynamicSensorDisconnected(android::hardware::Sensor arg0)
	{
		callMethod<void>(
			"onDynamicSensorDisconnected",
			"(Landroid/hardware/Sensor;)V",
			arg0.object()
		);
	}
} // namespace android::hardware

