#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class PowerManager_WakeLock;
}
class JString;
namespace java::time
{
	class Duration;
}

namespace android::os
{
	class PowerManager : public JObject
	{
	public:
		// Fields
		static jint ACQUIRE_CAUSES_WAKEUP();
		static JString ACTION_DEVICE_IDLE_MODE_CHANGED();
		static JString ACTION_POWER_SAVE_MODE_CHANGED();
		static jint FULL_WAKE_LOCK();
		static jint LOCATION_MODE_ALL_DISABLED_WHEN_SCREEN_OFF();
		static jint LOCATION_MODE_FOREGROUND_ONLY();
		static jint LOCATION_MODE_GPS_DISABLED_WHEN_SCREEN_OFF();
		static jint LOCATION_MODE_NO_CHANGE();
		static jint LOCATION_MODE_THROTTLE_REQUESTS_WHEN_SCREEN_OFF();
		static jint ON_AFTER_RELEASE();
		static jint PARTIAL_WAKE_LOCK();
		static jint PROXIMITY_SCREEN_OFF_WAKE_LOCK();
		static jint RELEASE_FLAG_WAIT_FOR_NO_PROXIMITY();
		static jint SCREEN_BRIGHT_WAKE_LOCK();
		static jint SCREEN_DIM_WAKE_LOCK();
		static jint THERMAL_STATUS_CRITICAL();
		static jint THERMAL_STATUS_EMERGENCY();
		static jint THERMAL_STATUS_LIGHT();
		static jint THERMAL_STATUS_MODERATE();
		static jint THERMAL_STATUS_NONE();
		static jint THERMAL_STATUS_SEVERE();
		static jint THERMAL_STATUS_SHUTDOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PowerManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PowerManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void addThermalStatusListener(JObject arg0);
		void addThermalStatusListener(JObject arg0, JObject arg1);
		java::time::Duration getBatteryDischargePrediction();
		jint getCurrentThermalStatus();
		jint getLocationPowerSaveMode();
		jfloat getThermalHeadroom(jint arg0);
		jboolean isBatteryDischargePredictionPersonalized();
		jboolean isDeviceIdleMode();
		jboolean isIgnoringBatteryOptimizations(JString arg0);
		jboolean isInteractive();
		jboolean isPowerSaveMode();
		jboolean isRebootingUserspaceSupported();
		jboolean isScreenOn();
		jboolean isSustainedPerformanceModeSupported();
		jboolean isWakeLockLevelSupported(jint arg0);
		android::os::PowerManager_WakeLock newWakeLock(jint arg0, JString arg1);
		void reboot(JString arg0);
		void removeThermalStatusListener(JObject arg0);
	};
} // namespace android::os

