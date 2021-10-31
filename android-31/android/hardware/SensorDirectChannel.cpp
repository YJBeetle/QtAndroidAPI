#include "./Sensor.hpp"
#include "./SensorDirectChannel.hpp"

namespace android::hardware
{
	// Fields
	jint SensorDirectChannel::RATE_FAST()
	{
		return getStaticField<jint>(
			"android.hardware.SensorDirectChannel",
			"RATE_FAST"
		);
	}
	jint SensorDirectChannel::RATE_NORMAL()
	{
		return getStaticField<jint>(
			"android.hardware.SensorDirectChannel",
			"RATE_NORMAL"
		);
	}
	jint SensorDirectChannel::RATE_STOP()
	{
		return getStaticField<jint>(
			"android.hardware.SensorDirectChannel",
			"RATE_STOP"
		);
	}
	jint SensorDirectChannel::RATE_VERY_FAST()
	{
		return getStaticField<jint>(
			"android.hardware.SensorDirectChannel",
			"RATE_VERY_FAST"
		);
	}
	jint SensorDirectChannel::TYPE_HARDWARE_BUFFER()
	{
		return getStaticField<jint>(
			"android.hardware.SensorDirectChannel",
			"TYPE_HARDWARE_BUFFER"
		);
	}
	jint SensorDirectChannel::TYPE_MEMORY_FILE()
	{
		return getStaticField<jint>(
			"android.hardware.SensorDirectChannel",
			"TYPE_MEMORY_FILE"
		);
	}
	
	// QJniObject forward
	SensorDirectChannel::SensorDirectChannel(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void SensorDirectChannel::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jint SensorDirectChannel::configure(android::hardware::Sensor arg0, jint arg1)
	{
		return callMethod<jint>(
			"configure",
			"(Landroid/hardware/Sensor;I)I",
			arg0.object(),
			arg1
		);
	}
	jboolean SensorDirectChannel::isOpen()
	{
		return callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
} // namespace android::hardware

