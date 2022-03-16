#pragma once

#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "./Sensor.def.hpp"
#include "./SensorAdditionalInfo.def.hpp"

namespace android::hardware
{
	// Fields
	inline jint SensorAdditionalInfo::TYPE_FRAME_BEGIN()
	{
		return getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_FRAME_BEGIN"
		);
	}
	inline jint SensorAdditionalInfo::TYPE_FRAME_END()
	{
		return getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_FRAME_END"
		);
	}
	inline jint SensorAdditionalInfo::TYPE_INTERNAL_TEMPERATURE()
	{
		return getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_INTERNAL_TEMPERATURE"
		);
	}
	inline jint SensorAdditionalInfo::TYPE_SAMPLING()
	{
		return getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_SAMPLING"
		);
	}
	inline jint SensorAdditionalInfo::TYPE_SENSOR_PLACEMENT()
	{
		return getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_SENSOR_PLACEMENT"
		);
	}
	inline jint SensorAdditionalInfo::TYPE_UNTRACKED_DELAY()
	{
		return getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_UNTRACKED_DELAY"
		);
	}
	inline jint SensorAdditionalInfo::TYPE_VEC3_CALIBRATION()
	{
		return getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_VEC3_CALIBRATION"
		);
	}
	inline JFloatArray SensorAdditionalInfo::floatValues()
	{
		return getObjectField(
			"floatValues",
			"[F"
		);
	}
	inline JIntArray SensorAdditionalInfo::intValues()
	{
		return getObjectField(
			"intValues",
			"[I"
		);
	}
	inline android::hardware::Sensor SensorAdditionalInfo::sensor()
	{
		return getObjectField(
			"sensor",
			"Landroid/hardware/Sensor;"
		);
	}
	inline jint SensorAdditionalInfo::serial()
	{
		return getField<jint>(
			"serial"
		);
	}
	inline jint SensorAdditionalInfo::type()
	{
		return getField<jint>(
			"type"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::hardware

// Base class headers

