#include "./Sensor.hpp"
#include "./SensorAdditionalInfo.hpp"
#include "./SensorEvent.hpp"
#include "./SensorEventCallback.hpp"

namespace android::hardware
{
	// Fields
	
	SensorEventCallback::SensorEventCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SensorEventCallback::SensorEventCallback()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.SensorEventCallback",
			"()V"
		);
	}
	
	// Methods
	void SensorEventCallback::onAccuracyChanged(android::hardware::Sensor arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onAccuracyChanged",
			"(Landroid/hardware/Sensor;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void SensorEventCallback::onFlushCompleted(android::hardware::Sensor arg0)
	{
		__thiz.callMethod<void>(
			"onFlushCompleted",
			"(Landroid/hardware/Sensor;)V",
			arg0.__jniObject().object()
		);
	}
	void SensorEventCallback::onSensorAdditionalInfo(android::hardware::SensorAdditionalInfo arg0)
	{
		__thiz.callMethod<void>(
			"onSensorAdditionalInfo",
			"(Landroid/hardware/SensorAdditionalInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void SensorEventCallback::onSensorChanged(android::hardware::SensorEvent arg0)
	{
		__thiz.callMethod<void>(
			"onSensorChanged",
			"(Landroid/hardware/SensorEvent;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::hardware

