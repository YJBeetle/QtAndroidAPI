#pragma once

#ifndef ANDROID_OS_BATTERYMANAGER
#define ANDROID_OS_BATTERYMANAGER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::os
{
	class BatteryManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_CHARGING();
		static jstring ACTION_DISCHARGING();
		static jint BATTERY_HEALTH_COLD();
		static jint BATTERY_HEALTH_DEAD();
		static jint BATTERY_HEALTH_GOOD();
		static jint BATTERY_HEALTH_OVERHEAT();
		static jint BATTERY_HEALTH_OVER_VOLTAGE();
		static jint BATTERY_HEALTH_UNKNOWN();
		static jint BATTERY_HEALTH_UNSPECIFIED_FAILURE();
		static jint BATTERY_PLUGGED_AC();
		static jint BATTERY_PLUGGED_USB();
		static jint BATTERY_PLUGGED_WIRELESS();
		static jint BATTERY_PROPERTY_CAPACITY();
		static jint BATTERY_PROPERTY_CHARGE_COUNTER();
		static jint BATTERY_PROPERTY_CURRENT_AVERAGE();
		static jint BATTERY_PROPERTY_CURRENT_NOW();
		static jint BATTERY_PROPERTY_ENERGY_COUNTER();
		static jint BATTERY_PROPERTY_STATUS();
		static jint BATTERY_STATUS_CHARGING();
		static jint BATTERY_STATUS_DISCHARGING();
		static jint BATTERY_STATUS_FULL();
		static jint BATTERY_STATUS_NOT_CHARGING();
		static jint BATTERY_STATUS_UNKNOWN();
		static jstring EXTRA_BATTERY_LOW();
		static jstring EXTRA_HEALTH();
		static jstring EXTRA_ICON_SMALL();
		static jstring EXTRA_LEVEL();
		static jstring EXTRA_PLUGGED();
		static jstring EXTRA_PRESENT();
		static jstring EXTRA_SCALE();
		static jstring EXTRA_STATUS();
		static jstring EXTRA_TECHNOLOGY();
		static jstring EXTRA_TEMPERATURE();
		static jstring EXTRA_VOLTAGE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getIntProperty(jint arg0);
		jlong getLongProperty(jint arg0);
		jboolean isCharging();
		jlong computeChargeTimeRemaining();
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
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
	
	// Constructors
	void BatteryManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.BatteryManager",
			"(V)V");
	}
	
	// Methods
	jint BatteryManager::getIntProperty(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getIntProperty",
			"(I)I",
			arg0
		);
	}
	jlong BatteryManager::getLongProperty(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLongProperty",
			"(I)J",
			arg0
		);
	}
	jboolean BatteryManager::isCharging()
	{
		return __thiz.callMethod<jboolean>(
			"isCharging",
			"()Z"
		);
	}
	jlong BatteryManager::computeChargeTimeRemaining()
	{
		return __thiz.callMethod<jlong>(
			"computeChargeTimeRemaining",
			"()J"
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class BatteryManager : public __jni_impl::android::os::BatteryManager
	{
	public:
		BatteryManager(QAndroidJniObject obj) { __thiz = obj; }
		BatteryManager()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_BATTERYMANAGER

