#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::os
{
	class BatteryManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_CHARGING();
		static JString ACTION_DISCHARGING();
		static jint BATTERY_HEALTH_COLD();
		static jint BATTERY_HEALTH_DEAD();
		static jint BATTERY_HEALTH_GOOD();
		static jint BATTERY_HEALTH_OVERHEAT();
		static jint BATTERY_HEALTH_OVER_VOLTAGE();
		static jint BATTERY_HEALTH_UNKNOWN();
		static jint BATTERY_HEALTH_UNSPECIFIED_FAILURE();
		static jint BATTERY_PLUGGED_AC();
		static jint BATTERY_PLUGGED_DOCK();
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
		static JString EXTRA_BATTERY_LOW();
		static JString EXTRA_CHARGING_STATUS();
		static JString EXTRA_CYCLE_COUNT();
		static JString EXTRA_HEALTH();
		static JString EXTRA_ICON_SMALL();
		static JString EXTRA_LEVEL();
		static JString EXTRA_PLUGGED();
		static JString EXTRA_PRESENT();
		static JString EXTRA_SCALE();
		static JString EXTRA_STATUS();
		static JString EXTRA_TECHNOLOGY();
		static JString EXTRA_TEMPERATURE();
		static JString EXTRA_VOLTAGE();
		
		// QJniObject forward
		template<typename ...Ts> explicit BatteryManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BatteryManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jlong computeChargeTimeRemaining() const;
		jint getIntProperty(jint arg0) const;
		jlong getLongProperty(jint arg0) const;
		jboolean isCharging() const;
	};
} // namespace android::os

