#pragma once

#include "./Sensor.def.hpp"
#include "./SensorManager.def.hpp"
#include "./SensorDirectChannel.def.hpp"

namespace android::hardware
{
	// Fields
	inline jint SensorDirectChannel::RATE_FAST()
	{
		return getStaticField<jint>(
			"android.hardware.SensorDirectChannel",
			"RATE_FAST"
		);
	}
	inline jint SensorDirectChannel::RATE_NORMAL()
	{
		return getStaticField<jint>(
			"android.hardware.SensorDirectChannel",
			"RATE_NORMAL"
		);
	}
	inline jint SensorDirectChannel::RATE_STOP()
	{
		return getStaticField<jint>(
			"android.hardware.SensorDirectChannel",
			"RATE_STOP"
		);
	}
	inline jint SensorDirectChannel::RATE_VERY_FAST()
	{
		return getStaticField<jint>(
			"android.hardware.SensorDirectChannel",
			"RATE_VERY_FAST"
		);
	}
	inline jint SensorDirectChannel::TYPE_HARDWARE_BUFFER()
	{
		return getStaticField<jint>(
			"android.hardware.SensorDirectChannel",
			"TYPE_HARDWARE_BUFFER"
		);
	}
	inline jint SensorDirectChannel::TYPE_MEMORY_FILE()
	{
		return getStaticField<jint>(
			"android.hardware.SensorDirectChannel",
			"TYPE_MEMORY_FILE"
		);
	}
	
	// Constructors
	
	// Methods
	inline void SensorDirectChannel::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jint SensorDirectChannel::configure(android::hardware::Sensor arg0, jint arg1) const
	{
		return callMethod<jint>(
			"configure",
			"(Landroid/hardware/Sensor;I)I",
			arg0.object(),
			arg1
		);
	}
	inline jboolean SensorDirectChannel::isOpen() const
	{
		return callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
} // namespace android::hardware

// Base class headers

