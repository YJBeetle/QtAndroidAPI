#include "./PowerManager_WakeLock.hpp"
#include "./PowerManager.hpp"

namespace android::os
{
	// Fields
	jint PowerManager::ACQUIRE_CAUSES_WAKEUP()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"ACQUIRE_CAUSES_WAKEUP"
		);
	}
	jstring PowerManager::ACTION_DEVICE_IDLE_MODE_CHANGED()
	{
		return getStaticObjectField(
			"android.os.PowerManager",
			"ACTION_DEVICE_IDLE_MODE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PowerManager::ACTION_POWER_SAVE_MODE_CHANGED()
	{
		return getStaticObjectField(
			"android.os.PowerManager",
			"ACTION_POWER_SAVE_MODE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint PowerManager::FULL_WAKE_LOCK()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"FULL_WAKE_LOCK"
		);
	}
	jint PowerManager::LOCATION_MODE_ALL_DISABLED_WHEN_SCREEN_OFF()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"LOCATION_MODE_ALL_DISABLED_WHEN_SCREEN_OFF"
		);
	}
	jint PowerManager::LOCATION_MODE_FOREGROUND_ONLY()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"LOCATION_MODE_FOREGROUND_ONLY"
		);
	}
	jint PowerManager::LOCATION_MODE_GPS_DISABLED_WHEN_SCREEN_OFF()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"LOCATION_MODE_GPS_DISABLED_WHEN_SCREEN_OFF"
		);
	}
	jint PowerManager::LOCATION_MODE_NO_CHANGE()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"LOCATION_MODE_NO_CHANGE"
		);
	}
	jint PowerManager::ON_AFTER_RELEASE()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"ON_AFTER_RELEASE"
		);
	}
	jint PowerManager::PARTIAL_WAKE_LOCK()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"PARTIAL_WAKE_LOCK"
		);
	}
	jint PowerManager::PROXIMITY_SCREEN_OFF_WAKE_LOCK()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"PROXIMITY_SCREEN_OFF_WAKE_LOCK"
		);
	}
	jint PowerManager::RELEASE_FLAG_WAIT_FOR_NO_PROXIMITY()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"RELEASE_FLAG_WAIT_FOR_NO_PROXIMITY"
		);
	}
	jint PowerManager::SCREEN_BRIGHT_WAKE_LOCK()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"SCREEN_BRIGHT_WAKE_LOCK"
		);
	}
	jint PowerManager::SCREEN_DIM_WAKE_LOCK()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"SCREEN_DIM_WAKE_LOCK"
		);
	}
	
	// QJniObject forward
	PowerManager::PowerManager(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint PowerManager::getLocationPowerSaveMode()
	{
		return callMethod<jint>(
			"getLocationPowerSaveMode",
			"()I"
		);
	}
	jboolean PowerManager::isDeviceIdleMode()
	{
		return callMethod<jboolean>(
			"isDeviceIdleMode",
			"()Z"
		);
	}
	jboolean PowerManager::isIgnoringBatteryOptimizations(jstring arg0)
	{
		return callMethod<jboolean>(
			"isIgnoringBatteryOptimizations",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean PowerManager::isInteractive()
	{
		return callMethod<jboolean>(
			"isInteractive",
			"()Z"
		);
	}
	jboolean PowerManager::isPowerSaveMode()
	{
		return callMethod<jboolean>(
			"isPowerSaveMode",
			"()Z"
		);
	}
	jboolean PowerManager::isScreenOn()
	{
		return callMethod<jboolean>(
			"isScreenOn",
			"()Z"
		);
	}
	jboolean PowerManager::isSustainedPerformanceModeSupported()
	{
		return callMethod<jboolean>(
			"isSustainedPerformanceModeSupported",
			"()Z"
		);
	}
	jboolean PowerManager::isWakeLockLevelSupported(jint arg0)
	{
		return callMethod<jboolean>(
			"isWakeLockLevelSupported",
			"(I)Z",
			arg0
		);
	}
	android::os::PowerManager_WakeLock PowerManager::newWakeLock(jint arg0, jstring arg1)
	{
		return callObjectMethod(
			"newWakeLock",
			"(ILjava/lang/String;)Landroid/os/PowerManager$WakeLock;",
			arg0,
			arg1
		);
	}
	void PowerManager::reboot(jstring arg0)
	{
		callMethod<void>(
			"reboot",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::os

