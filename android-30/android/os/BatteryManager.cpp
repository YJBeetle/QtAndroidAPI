#include "../../JString.hpp"
#include "./BatteryManager.hpp"

namespace android::os
{
	// Fields
	JString BatteryManager::ACTION_CHARGING()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"ACTION_CHARGING",
			"Ljava/lang/String;"
		);
	}
	JString BatteryManager::ACTION_DISCHARGING()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"ACTION_DISCHARGING",
			"Ljava/lang/String;"
		);
	}
	jint BatteryManager::BATTERY_HEALTH_COLD()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_HEALTH_COLD"
		);
	}
	jint BatteryManager::BATTERY_HEALTH_DEAD()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_HEALTH_DEAD"
		);
	}
	jint BatteryManager::BATTERY_HEALTH_GOOD()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_HEALTH_GOOD"
		);
	}
	jint BatteryManager::BATTERY_HEALTH_OVERHEAT()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_HEALTH_OVERHEAT"
		);
	}
	jint BatteryManager::BATTERY_HEALTH_OVER_VOLTAGE()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_HEALTH_OVER_VOLTAGE"
		);
	}
	jint BatteryManager::BATTERY_HEALTH_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_HEALTH_UNKNOWN"
		);
	}
	jint BatteryManager::BATTERY_HEALTH_UNSPECIFIED_FAILURE()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_HEALTH_UNSPECIFIED_FAILURE"
		);
	}
	jint BatteryManager::BATTERY_PLUGGED_AC()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PLUGGED_AC"
		);
	}
	jint BatteryManager::BATTERY_PLUGGED_USB()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PLUGGED_USB"
		);
	}
	jint BatteryManager::BATTERY_PLUGGED_WIRELESS()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PLUGGED_WIRELESS"
		);
	}
	jint BatteryManager::BATTERY_PROPERTY_CAPACITY()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PROPERTY_CAPACITY"
		);
	}
	jint BatteryManager::BATTERY_PROPERTY_CHARGE_COUNTER()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PROPERTY_CHARGE_COUNTER"
		);
	}
	jint BatteryManager::BATTERY_PROPERTY_CURRENT_AVERAGE()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PROPERTY_CURRENT_AVERAGE"
		);
	}
	jint BatteryManager::BATTERY_PROPERTY_CURRENT_NOW()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PROPERTY_CURRENT_NOW"
		);
	}
	jint BatteryManager::BATTERY_PROPERTY_ENERGY_COUNTER()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PROPERTY_ENERGY_COUNTER"
		);
	}
	jint BatteryManager::BATTERY_PROPERTY_STATUS()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PROPERTY_STATUS"
		);
	}
	jint BatteryManager::BATTERY_STATUS_CHARGING()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_STATUS_CHARGING"
		);
	}
	jint BatteryManager::BATTERY_STATUS_DISCHARGING()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_STATUS_DISCHARGING"
		);
	}
	jint BatteryManager::BATTERY_STATUS_FULL()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_STATUS_FULL"
		);
	}
	jint BatteryManager::BATTERY_STATUS_NOT_CHARGING()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_STATUS_NOT_CHARGING"
		);
	}
	jint BatteryManager::BATTERY_STATUS_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_STATUS_UNKNOWN"
		);
	}
	JString BatteryManager::EXTRA_BATTERY_LOW()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_BATTERY_LOW",
			"Ljava/lang/String;"
		);
	}
	JString BatteryManager::EXTRA_HEALTH()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_HEALTH",
			"Ljava/lang/String;"
		);
	}
	JString BatteryManager::EXTRA_ICON_SMALL()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_ICON_SMALL",
			"Ljava/lang/String;"
		);
	}
	JString BatteryManager::EXTRA_LEVEL()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_LEVEL",
			"Ljava/lang/String;"
		);
	}
	JString BatteryManager::EXTRA_PLUGGED()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_PLUGGED",
			"Ljava/lang/String;"
		);
	}
	JString BatteryManager::EXTRA_PRESENT()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_PRESENT",
			"Ljava/lang/String;"
		);
	}
	JString BatteryManager::EXTRA_SCALE()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_SCALE",
			"Ljava/lang/String;"
		);
	}
	JString BatteryManager::EXTRA_STATUS()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_STATUS",
			"Ljava/lang/String;"
		);
	}
	JString BatteryManager::EXTRA_TECHNOLOGY()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_TECHNOLOGY",
			"Ljava/lang/String;"
		);
	}
	JString BatteryManager::EXTRA_TEMPERATURE()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_TEMPERATURE",
			"Ljava/lang/String;"
		);
	}
	JString BatteryManager::EXTRA_VOLTAGE()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_VOLTAGE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	jlong BatteryManager::computeChargeTimeRemaining() const
	{
		return callMethod<jlong>(
			"computeChargeTimeRemaining",
			"()J"
		);
	}
	jint BatteryManager::getIntProperty(jint arg0) const
	{
		return callMethod<jint>(
			"getIntProperty",
			"(I)I",
			arg0
		);
	}
	jlong BatteryManager::getLongProperty(jint arg0) const
	{
		return callMethod<jlong>(
			"getLongProperty",
			"(I)J",
			arg0
		);
	}
	jboolean BatteryManager::isCharging() const
	{
		return callMethod<jboolean>(
			"isCharging",
			"()Z"
		);
	}
} // namespace android::os

