#pragma once

#include "../../JFloatArray.hpp"
#include "../../JArray.hpp"
#include "./HardwarePropertiesManager.def.hpp"

namespace android::os
{
	// Fields
	inline jint HardwarePropertiesManager::DEVICE_TEMPERATURE_BATTERY()
	{
		return getStaticField<jint>(
			"android.os.HardwarePropertiesManager",
			"DEVICE_TEMPERATURE_BATTERY"
		);
	}
	inline jint HardwarePropertiesManager::DEVICE_TEMPERATURE_CPU()
	{
		return getStaticField<jint>(
			"android.os.HardwarePropertiesManager",
			"DEVICE_TEMPERATURE_CPU"
		);
	}
	inline jint HardwarePropertiesManager::DEVICE_TEMPERATURE_GPU()
	{
		return getStaticField<jint>(
			"android.os.HardwarePropertiesManager",
			"DEVICE_TEMPERATURE_GPU"
		);
	}
	inline jint HardwarePropertiesManager::DEVICE_TEMPERATURE_SKIN()
	{
		return getStaticField<jint>(
			"android.os.HardwarePropertiesManager",
			"DEVICE_TEMPERATURE_SKIN"
		);
	}
	inline jint HardwarePropertiesManager::TEMPERATURE_CURRENT()
	{
		return getStaticField<jint>(
			"android.os.HardwarePropertiesManager",
			"TEMPERATURE_CURRENT"
		);
	}
	inline jint HardwarePropertiesManager::TEMPERATURE_SHUTDOWN()
	{
		return getStaticField<jint>(
			"android.os.HardwarePropertiesManager",
			"TEMPERATURE_SHUTDOWN"
		);
	}
	inline jint HardwarePropertiesManager::TEMPERATURE_THROTTLING()
	{
		return getStaticField<jint>(
			"android.os.HardwarePropertiesManager",
			"TEMPERATURE_THROTTLING"
		);
	}
	inline jint HardwarePropertiesManager::TEMPERATURE_THROTTLING_BELOW_VR_MIN()
	{
		return getStaticField<jint>(
			"android.os.HardwarePropertiesManager",
			"TEMPERATURE_THROTTLING_BELOW_VR_MIN"
		);
	}
	inline jfloat HardwarePropertiesManager::UNDEFINED_TEMPERATURE()
	{
		return getStaticField<jfloat>(
			"android.os.HardwarePropertiesManager",
			"UNDEFINED_TEMPERATURE"
		);
	}
	
	// Constructors
	
	// Methods
	inline JArray HardwarePropertiesManager::getCpuUsages() const
	{
		return callObjectMethod(
			"getCpuUsages",
			"()[Landroid/os/CpuUsageInfo;"
		);
	}
	inline JFloatArray HardwarePropertiesManager::getDeviceTemperatures(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getDeviceTemperatures",
			"(II)[F",
			arg0,
			arg1
		);
	}
	inline JFloatArray HardwarePropertiesManager::getFanSpeeds() const
	{
		return callObjectMethod(
			"getFanSpeeds",
			"()[F"
		);
	}
} // namespace android::os

// Base class headers

