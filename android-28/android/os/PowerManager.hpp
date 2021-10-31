#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class PowerManager_WakeLock;
}

namespace android::os
{
	class PowerManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint ACQUIRE_CAUSES_WAKEUP();
		static jstring ACTION_DEVICE_IDLE_MODE_CHANGED();
		static jstring ACTION_POWER_SAVE_MODE_CHANGED();
		static jint FULL_WAKE_LOCK();
		static jint LOCATION_MODE_ALL_DISABLED_WHEN_SCREEN_OFF();
		static jint LOCATION_MODE_FOREGROUND_ONLY();
		static jint LOCATION_MODE_GPS_DISABLED_WHEN_SCREEN_OFF();
		static jint LOCATION_MODE_NO_CHANGE();
		static jint ON_AFTER_RELEASE();
		static jint PARTIAL_WAKE_LOCK();
		static jint PROXIMITY_SCREEN_OFF_WAKE_LOCK();
		static jint RELEASE_FLAG_WAIT_FOR_NO_PROXIMITY();
		static jint SCREEN_BRIGHT_WAKE_LOCK();
		static jint SCREEN_DIM_WAKE_LOCK();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PowerManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PowerManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint getLocationPowerSaveMode();
		jboolean isDeviceIdleMode();
		jboolean isIgnoringBatteryOptimizations(jstring arg0);
		jboolean isInteractive();
		jboolean isPowerSaveMode();
		jboolean isScreenOn();
		jboolean isSustainedPerformanceModeSupported();
		jboolean isWakeLockLevelSupported(jint arg0);
		android::os::PowerManager_WakeLock newWakeLock(jint arg0, jstring arg1);
		void reboot(jstring arg0);
	};
} // namespace android::os
