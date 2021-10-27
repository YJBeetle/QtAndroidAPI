#include "./Sensor.hpp"
#include "./SensorManager.hpp"
#include "./SensorDirectChannel.hpp"

namespace android::hardware
{
	// Fields
	jint SensorDirectChannel::RATE_FAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorDirectChannel",
			"RATE_FAST"
		);
	}
	jint SensorDirectChannel::RATE_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorDirectChannel",
			"RATE_NORMAL"
		);
	}
	jint SensorDirectChannel::RATE_STOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorDirectChannel",
			"RATE_STOP"
		);
	}
	jint SensorDirectChannel::RATE_VERY_FAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorDirectChannel",
			"RATE_VERY_FAST"
		);
	}
	jint SensorDirectChannel::TYPE_HARDWARE_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorDirectChannel",
			"TYPE_HARDWARE_BUFFER"
		);
	}
	jint SensorDirectChannel::TYPE_MEMORY_FILE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.SensorDirectChannel",
			"TYPE_MEMORY_FILE"
		);
	}
	
	SensorDirectChannel::SensorDirectChannel(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void SensorDirectChannel::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint SensorDirectChannel::configure(android::hardware::Sensor arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"configure",
			"(Landroid/hardware/Sensor;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean SensorDirectChannel::isOpen()
	{
		return __thiz.callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
} // namespace android::hardware

