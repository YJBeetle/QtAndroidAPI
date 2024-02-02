#pragma once

#include "../../JString.hpp"
#include "./BatteryManager.def.hpp"

namespace android::os
{
	// Fields
	inline JString BatteryManager::ACTION_CHARGING()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"ACTION_CHARGING",
			"Ljava/lang/String;"
		);
	}
	inline JString BatteryManager::ACTION_DISCHARGING()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"ACTION_DISCHARGING",
			"Ljava/lang/String;"
		);
	}
	inline jint BatteryManager::BATTERY_HEALTH_COLD()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_HEALTH_COLD"
		);
	}
	inline jint BatteryManager::BATTERY_HEALTH_DEAD()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_HEALTH_DEAD"
		);
	}
	inline jint BatteryManager::BATTERY_HEALTH_GOOD()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_HEALTH_GOOD"
		);
	}
	inline jint BatteryManager::BATTERY_HEALTH_OVERHEAT()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_HEALTH_OVERHEAT"
		);
	}
	inline jint BatteryManager::BATTERY_HEALTH_OVER_VOLTAGE()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_HEALTH_OVER_VOLTAGE"
		);
	}
	inline jint BatteryManager::BATTERY_HEALTH_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_HEALTH_UNKNOWN"
		);
	}
	inline jint BatteryManager::BATTERY_HEALTH_UNSPECIFIED_FAILURE()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_HEALTH_UNSPECIFIED_FAILURE"
		);
	}
	inline jint BatteryManager::BATTERY_PLUGGED_AC()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PLUGGED_AC"
		);
	}
	inline jint BatteryManager::BATTERY_PLUGGED_DOCK()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PLUGGED_DOCK"
		);
	}
	inline jint BatteryManager::BATTERY_PLUGGED_USB()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PLUGGED_USB"
		);
	}
	inline jint BatteryManager::BATTERY_PLUGGED_WIRELESS()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PLUGGED_WIRELESS"
		);
	}
	inline jint BatteryManager::BATTERY_PROPERTY_CAPACITY()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PROPERTY_CAPACITY"
		);
	}
	inline jint BatteryManager::BATTERY_PROPERTY_CHARGE_COUNTER()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PROPERTY_CHARGE_COUNTER"
		);
	}
	inline jint BatteryManager::BATTERY_PROPERTY_CURRENT_AVERAGE()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PROPERTY_CURRENT_AVERAGE"
		);
	}
	inline jint BatteryManager::BATTERY_PROPERTY_CURRENT_NOW()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PROPERTY_CURRENT_NOW"
		);
	}
	inline jint BatteryManager::BATTERY_PROPERTY_ENERGY_COUNTER()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PROPERTY_ENERGY_COUNTER"
		);
	}
	inline jint BatteryManager::BATTERY_PROPERTY_STATUS()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PROPERTY_STATUS"
		);
	}
	inline jint BatteryManager::BATTERY_STATUS_CHARGING()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_STATUS_CHARGING"
		);
	}
	inline jint BatteryManager::BATTERY_STATUS_DISCHARGING()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_STATUS_DISCHARGING"
		);
	}
	inline jint BatteryManager::BATTERY_STATUS_FULL()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_STATUS_FULL"
		);
	}
	inline jint BatteryManager::BATTERY_STATUS_NOT_CHARGING()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_STATUS_NOT_CHARGING"
		);
	}
	inline jint BatteryManager::BATTERY_STATUS_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_STATUS_UNKNOWN"
		);
	}
	inline JString BatteryManager::EXTRA_BATTERY_LOW()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_BATTERY_LOW",
			"Ljava/lang/String;"
		);
	}
	inline JString BatteryManager::EXTRA_CHARGING_STATUS()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_CHARGING_STATUS",
			"Ljava/lang/String;"
		);
	}
	inline JString BatteryManager::EXTRA_CYCLE_COUNT()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_CYCLE_COUNT",
			"Ljava/lang/String;"
		);
	}
	inline JString BatteryManager::EXTRA_HEALTH()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_HEALTH",
			"Ljava/lang/String;"
		);
	}
	inline JString BatteryManager::EXTRA_ICON_SMALL()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_ICON_SMALL",
			"Ljava/lang/String;"
		);
	}
	inline JString BatteryManager::EXTRA_LEVEL()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_LEVEL",
			"Ljava/lang/String;"
		);
	}
	inline JString BatteryManager::EXTRA_PLUGGED()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_PLUGGED",
			"Ljava/lang/String;"
		);
	}
	inline JString BatteryManager::EXTRA_PRESENT()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_PRESENT",
			"Ljava/lang/String;"
		);
	}
	inline JString BatteryManager::EXTRA_SCALE()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_SCALE",
			"Ljava/lang/String;"
		);
	}
	inline JString BatteryManager::EXTRA_STATUS()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_STATUS",
			"Ljava/lang/String;"
		);
	}
	inline JString BatteryManager::EXTRA_TECHNOLOGY()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_TECHNOLOGY",
			"Ljava/lang/String;"
		);
	}
	inline JString BatteryManager::EXTRA_TEMPERATURE()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_TEMPERATURE",
			"Ljava/lang/String;"
		);
	}
	inline JString BatteryManager::EXTRA_VOLTAGE()
	{
		return getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_VOLTAGE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jlong BatteryManager::computeChargeTimeRemaining() const
	{
		return callMethod<jlong>(
			"computeChargeTimeRemaining",
			"()J"
		);
	}
	inline jint BatteryManager::getIntProperty(jint arg0) const
	{
		return callMethod<jint>(
			"getIntProperty",
			"(I)I",
			arg0
		);
	}
	inline jlong BatteryManager::getLongProperty(jint arg0) const
	{
		return callMethod<jlong>(
			"getLongProperty",
			"(I)J",
			arg0
		);
	}
	inline jboolean BatteryManager::isCharging() const
	{
		return callMethod<jboolean>(
			"isCharging",
			"()Z"
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
