#include "./Sensor.hpp"
#include "./SensorManager_DynamicSensorCallback.hpp"

namespace android::hardware
{
	// Fields
	
	SensorManager_DynamicSensorCallback::SensorManager_DynamicSensorCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SensorManager_DynamicSensorCallback::SensorManager_DynamicSensorCallback()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.SensorManager$DynamicSensorCallback",
			"()V"
		);
	}
	
	// Methods
	void SensorManager_DynamicSensorCallback::onDynamicSensorConnected(android::hardware::Sensor arg0)
	{
		__thiz.callMethod<void>(
			"onDynamicSensorConnected",
			"(Landroid/hardware/Sensor;)V",
			arg0.__jniObject().object()
		);
	}
	void SensorManager_DynamicSensorCallback::onDynamicSensorDisconnected(android::hardware::Sensor arg0)
	{
		__thiz.callMethod<void>(
			"onDynamicSensorDisconnected",
			"(Landroid/hardware/Sensor;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::hardware

