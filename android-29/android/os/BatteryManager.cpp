#include "./BatteryManager.hpp"

namespace android::os
{
	// Fields
	jstring BatteryManager::ACTION_CHARGING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.BatteryManager",
			"ACTION_CHARGING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BatteryManager::ACTION_DISCHARGING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.BatteryManager",
			"ACTION_DISCHARGING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint BatteryManager::BATTERY_HEALTH_COLD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_HEALTH_COLD"
		);
	}
	jint BatteryManager::BATTERY_HEALTH_DEAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_HEALTH_DEAD"
		);
	}
	jint BatteryManager::BATTERY_HEALTH_GOOD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_HEALTH_GOOD"
		);
	}
	jint BatteryManager::BATTERY_HEALTH_OVERHEAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_HEALTH_OVERHEAT"
		);
	}
	jint BatteryManager::BATTERY_HEALTH_OVER_VOLTAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_HEALTH_OVER_VOLTAGE"
		);
	}
	jint BatteryManager::BATTERY_HEALTH_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_HEALTH_UNKNOWN"
		);
	}
	jint BatteryManager::BATTERY_HEALTH_UNSPECIFIED_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_HEALTH_UNSPECIFIED_FAILURE"
		);
	}
	jint BatteryManager::BATTERY_PLUGGED_AC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PLUGGED_AC"
		);
	}
	jint BatteryManager::BATTERY_PLUGGED_USB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PLUGGED_USB"
		);
	}
	jint BatteryManager::BATTERY_PLUGGED_WIRELESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PLUGGED_WIRELESS"
		);
	}
	jint BatteryManager::BATTERY_PROPERTY_CAPACITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PROPERTY_CAPACITY"
		);
	}
	jint BatteryManager::BATTERY_PROPERTY_CHARGE_COUNTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PROPERTY_CHARGE_COUNTER"
		);
	}
	jint BatteryManager::BATTERY_PROPERTY_CURRENT_AVERAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PROPERTY_CURRENT_AVERAGE"
		);
	}
	jint BatteryManager::BATTERY_PROPERTY_CURRENT_NOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PROPERTY_CURRENT_NOW"
		);
	}
	jint BatteryManager::BATTERY_PROPERTY_ENERGY_COUNTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PROPERTY_ENERGY_COUNTER"
		);
	}
	jint BatteryManager::BATTERY_PROPERTY_STATUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_PROPERTY_STATUS"
		);
	}
	jint BatteryManager::BATTERY_STATUS_CHARGING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_STATUS_CHARGING"
		);
	}
	jint BatteryManager::BATTERY_STATUS_DISCHARGING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_STATUS_DISCHARGING"
		);
	}
	jint BatteryManager::BATTERY_STATUS_FULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_STATUS_FULL"
		);
	}
	jint BatteryManager::BATTERY_STATUS_NOT_CHARGING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_STATUS_NOT_CHARGING"
		);
	}
	jint BatteryManager::BATTERY_STATUS_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.BatteryManager",
			"BATTERY_STATUS_UNKNOWN"
		);
	}
	jstring BatteryManager::EXTRA_BATTERY_LOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_BATTERY_LOW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BatteryManager::EXTRA_HEALTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_HEALTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BatteryManager::EXTRA_ICON_SMALL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_ICON_SMALL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BatteryManager::EXTRA_LEVEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_LEVEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BatteryManager::EXTRA_PLUGGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_PLUGGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BatteryManager::EXTRA_PRESENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_PRESENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BatteryManager::EXTRA_SCALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_SCALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BatteryManager::EXTRA_STATUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_STATUS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BatteryManager::EXTRA_TECHNOLOGY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_TECHNOLOGY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BatteryManager::EXTRA_TEMPERATURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_TEMPERATURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BatteryManager::EXTRA_VOLTAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.BatteryManager",
			"EXTRA_VOLTAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	BatteryManager::BatteryManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jlong BatteryManager::computeChargeTimeRemaining()
	{
		return callMethod<jlong>(
			"computeChargeTimeRemaining",
			"()J"
		);
	}
	jint BatteryManager::getIntProperty(jint arg0)
	{
		return callMethod<jint>(
			"getIntProperty",
			"(I)I",
			arg0
		);
	}
	jlong BatteryManager::getLongProperty(jint arg0)
	{
		return callMethod<jlong>(
			"getLongProperty",
			"(I)J",
			arg0
		);
	}
	jboolean BatteryManager::isCharging()
	{
		return callMethod<jboolean>(
			"isCharging",
			"()Z"
		);
	}
} // namespace android::os

