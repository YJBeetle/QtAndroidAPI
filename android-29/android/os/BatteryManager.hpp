#pragma once

#include "../../JObject.hpp"


namespace android::os
{
	class BatteryManager : public JObject
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BatteryManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BatteryManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jlong computeChargeTimeRemaining();
		jint getIntProperty(jint arg0);
		jlong getLongProperty(jint arg0);
		jboolean isCharging();
	};
} // namespace android::os

