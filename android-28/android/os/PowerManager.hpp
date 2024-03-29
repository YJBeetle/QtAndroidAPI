#pragma once

#include "./PowerManager_WakeLock.def.hpp"
#include "../../JString.hpp"
#include "./PowerManager.def.hpp"

namespace android::os
{
	// Fields
	inline jint PowerManager::ACQUIRE_CAUSES_WAKEUP()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"ACQUIRE_CAUSES_WAKEUP"
		);
	}
	inline JString PowerManager::ACTION_DEVICE_IDLE_MODE_CHANGED()
	{
		return getStaticObjectField(
			"android.os.PowerManager",
			"ACTION_DEVICE_IDLE_MODE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString PowerManager::ACTION_POWER_SAVE_MODE_CHANGED()
	{
		return getStaticObjectField(
			"android.os.PowerManager",
			"ACTION_POWER_SAVE_MODE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline jint PowerManager::FULL_WAKE_LOCK()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"FULL_WAKE_LOCK"
		);
	}
	inline jint PowerManager::LOCATION_MODE_ALL_DISABLED_WHEN_SCREEN_OFF()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"LOCATION_MODE_ALL_DISABLED_WHEN_SCREEN_OFF"
		);
	}
	inline jint PowerManager::LOCATION_MODE_FOREGROUND_ONLY()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"LOCATION_MODE_FOREGROUND_ONLY"
		);
	}
	inline jint PowerManager::LOCATION_MODE_GPS_DISABLED_WHEN_SCREEN_OFF()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"LOCATION_MODE_GPS_DISABLED_WHEN_SCREEN_OFF"
		);
	}
	inline jint PowerManager::LOCATION_MODE_NO_CHANGE()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"LOCATION_MODE_NO_CHANGE"
		);
	}
	inline jint PowerManager::ON_AFTER_RELEASE()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"ON_AFTER_RELEASE"
		);
	}
	inline jint PowerManager::PARTIAL_WAKE_LOCK()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"PARTIAL_WAKE_LOCK"
		);
	}
	inline jint PowerManager::PROXIMITY_SCREEN_OFF_WAKE_LOCK()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"PROXIMITY_SCREEN_OFF_WAKE_LOCK"
		);
	}
	inline jint PowerManager::RELEASE_FLAG_WAIT_FOR_NO_PROXIMITY()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"RELEASE_FLAG_WAIT_FOR_NO_PROXIMITY"
		);
	}
	inline jint PowerManager::SCREEN_BRIGHT_WAKE_LOCK()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"SCREEN_BRIGHT_WAKE_LOCK"
		);
	}
	inline jint PowerManager::SCREEN_DIM_WAKE_LOCK()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"SCREEN_DIM_WAKE_LOCK"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PowerManager::getLocationPowerSaveMode() const
	{
		return callMethod<jint>(
			"getLocationPowerSaveMode",
			"()I"
		);
	}
	inline jboolean PowerManager::isDeviceIdleMode() const
	{
		return callMethod<jboolean>(
			"isDeviceIdleMode",
			"()Z"
		);
	}
	inline jboolean PowerManager::isIgnoringBatteryOptimizations(JString arg0) const
	{
		return callMethod<jboolean>(
			"isIgnoringBatteryOptimizations",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean PowerManager::isInteractive() const
	{
		return callMethod<jboolean>(
			"isInteractive",
			"()Z"
		);
	}
	inline jboolean PowerManager::isPowerSaveMode() const
	{
		return callMethod<jboolean>(
			"isPowerSaveMode",
			"()Z"
		);
	}
	inline jboolean PowerManager::isScreenOn() const
	{
		return callMethod<jboolean>(
			"isScreenOn",
			"()Z"
		);
	}
	inline jboolean PowerManager::isSustainedPerformanceModeSupported() const
	{
		return callMethod<jboolean>(
			"isSustainedPerformanceModeSupported",
			"()Z"
		);
	}
	inline jboolean PowerManager::isWakeLockLevelSupported(jint arg0) const
	{
		return callMethod<jboolean>(
			"isWakeLockLevelSupported",
			"(I)Z",
			arg0
		);
	}
	inline android::os::PowerManager_WakeLock PowerManager::newWakeLock(jint arg0, JString arg1) const
	{
		return callObjectMethod(
			"newWakeLock",
			"(ILjava/lang/String;)Landroid/os/PowerManager$WakeLock;",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void PowerManager::reboot(JString arg0) const
	{
		callMethod<void>(
			"reboot",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
