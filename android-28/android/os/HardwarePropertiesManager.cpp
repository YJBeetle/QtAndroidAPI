#include "./HardwarePropertiesManager.hpp"

namespace android::os
{
	// Fields
	jint HardwarePropertiesManager::DEVICE_TEMPERATURE_BATTERY()
	{
		return getStaticField<jint>(
			"android.os.HardwarePropertiesManager",
			"DEVICE_TEMPERATURE_BATTERY"
		);
	}
	jint HardwarePropertiesManager::DEVICE_TEMPERATURE_CPU()
	{
		return getStaticField<jint>(
			"android.os.HardwarePropertiesManager",
			"DEVICE_TEMPERATURE_CPU"
		);
	}
	jint HardwarePropertiesManager::DEVICE_TEMPERATURE_GPU()
	{
		return getStaticField<jint>(
			"android.os.HardwarePropertiesManager",
			"DEVICE_TEMPERATURE_GPU"
		);
	}
	jint HardwarePropertiesManager::DEVICE_TEMPERATURE_SKIN()
	{
		return getStaticField<jint>(
			"android.os.HardwarePropertiesManager",
			"DEVICE_TEMPERATURE_SKIN"
		);
	}
	jint HardwarePropertiesManager::TEMPERATURE_CURRENT()
	{
		return getStaticField<jint>(
			"android.os.HardwarePropertiesManager",
			"TEMPERATURE_CURRENT"
		);
	}
	jint HardwarePropertiesManager::TEMPERATURE_SHUTDOWN()
	{
		return getStaticField<jint>(
			"android.os.HardwarePropertiesManager",
			"TEMPERATURE_SHUTDOWN"
		);
	}
	jint HardwarePropertiesManager::TEMPERATURE_THROTTLING()
	{
		return getStaticField<jint>(
			"android.os.HardwarePropertiesManager",
			"TEMPERATURE_THROTTLING"
		);
	}
	jint HardwarePropertiesManager::TEMPERATURE_THROTTLING_BELOW_VR_MIN()
	{
		return getStaticField<jint>(
			"android.os.HardwarePropertiesManager",
			"TEMPERATURE_THROTTLING_BELOW_VR_MIN"
		);
	}
	jfloat HardwarePropertiesManager::UNDEFINED_TEMPERATURE()
	{
		return getStaticField<jfloat>(
			"android.os.HardwarePropertiesManager",
			"UNDEFINED_TEMPERATURE"
		);
	}
	
	// QJniObject forward
	HardwarePropertiesManager::HardwarePropertiesManager(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jarray HardwarePropertiesManager::getCpuUsages()
	{
		return callObjectMethod(
			"getCpuUsages",
			"()[Landroid/os/CpuUsageInfo;"
		).object<jarray>();
	}
	jfloatArray HardwarePropertiesManager::getDeviceTemperatures(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getDeviceTemperatures",
			"(II)[F",
			arg0,
			arg1
		).object<jfloatArray>();
	}
	jfloatArray HardwarePropertiesManager::getFanSpeeds()
	{
		return callObjectMethod(
			"getFanSpeeds",
			"()[F"
		).object<jfloatArray>();
	}
} // namespace android::os

