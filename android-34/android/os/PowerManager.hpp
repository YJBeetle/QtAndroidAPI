#pragma once

#include "./PowerManager_WakeLock.def.hpp"
#include "../../JString.hpp"
#include "../../java/time/Duration.def.hpp"
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
	inline JString PowerManager::ACTION_DEVICE_LIGHT_IDLE_MODE_CHANGED()
	{
		return getStaticObjectField(
			"android.os.PowerManager",
			"ACTION_DEVICE_LIGHT_IDLE_MODE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString PowerManager::ACTION_LOW_POWER_STANDBY_ENABLED_CHANGED()
	{
		return getStaticObjectField(
			"android.os.PowerManager",
			"ACTION_LOW_POWER_STANDBY_ENABLED_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString PowerManager::ACTION_LOW_POWER_STANDBY_POLICY_CHANGED()
	{
		return getStaticObjectField(
			"android.os.PowerManager",
			"ACTION_LOW_POWER_STANDBY_POLICY_CHANGED",
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
	inline JString PowerManager::FEATURE_WAKE_ON_LAN_IN_LOW_POWER_STANDBY()
	{
		return getStaticObjectField(
			"android.os.PowerManager",
			"FEATURE_WAKE_ON_LAN_IN_LOW_POWER_STANDBY",
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
	inline jint PowerManager::LOCATION_MODE_THROTTLE_REQUESTS_WHEN_SCREEN_OFF()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"LOCATION_MODE_THROTTLE_REQUESTS_WHEN_SCREEN_OFF"
		);
	}
	inline jint PowerManager::LOW_POWER_STANDBY_ALLOWED_REASON_ONGOING_CALL()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"LOW_POWER_STANDBY_ALLOWED_REASON_ONGOING_CALL"
		);
	}
	inline jint PowerManager::LOW_POWER_STANDBY_ALLOWED_REASON_TEMP_POWER_SAVE_ALLOWLIST()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"LOW_POWER_STANDBY_ALLOWED_REASON_TEMP_POWER_SAVE_ALLOWLIST"
		);
	}
	inline jint PowerManager::LOW_POWER_STANDBY_ALLOWED_REASON_VOICE_INTERACTION()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"LOW_POWER_STANDBY_ALLOWED_REASON_VOICE_INTERACTION"
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
	inline jint PowerManager::THERMAL_STATUS_CRITICAL()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_CRITICAL"
		);
	}
	inline jint PowerManager::THERMAL_STATUS_EMERGENCY()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_EMERGENCY"
		);
	}
	inline jint PowerManager::THERMAL_STATUS_LIGHT()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_LIGHT"
		);
	}
	inline jint PowerManager::THERMAL_STATUS_MODERATE()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_MODERATE"
		);
	}
	inline jint PowerManager::THERMAL_STATUS_NONE()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_NONE"
		);
	}
	inline jint PowerManager::THERMAL_STATUS_SEVERE()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_SEVERE"
		);
	}
	inline jint PowerManager::THERMAL_STATUS_SHUTDOWN()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_SHUTDOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline void PowerManager::addThermalStatusListener(JObject arg0) const
	{
		callMethod<void>(
			"addThermalStatusListener",
			"(Landroid/os/PowerManager$OnThermalStatusChangedListener;)V",
			arg0.object()
		);
	}
	inline void PowerManager::addThermalStatusListener(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"addThermalStatusListener",
			"(Ljava/util/concurrent/Executor;Landroid/os/PowerManager$OnThermalStatusChangedListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::time::Duration PowerManager::getBatteryDischargePrediction() const
	{
		return callObjectMethod(
			"getBatteryDischargePrediction",
			"()Ljava/time/Duration;"
		);
	}
	inline jint PowerManager::getCurrentThermalStatus() const
	{
		return callMethod<jint>(
			"getCurrentThermalStatus",
			"()I"
		);
	}
	inline jint PowerManager::getLocationPowerSaveMode() const
	{
		return callMethod<jint>(
			"getLocationPowerSaveMode",
			"()I"
		);
	}
	inline jfloat PowerManager::getThermalHeadroom(jint arg0) const
	{
		return callMethod<jfloat>(
			"getThermalHeadroom",
			"(I)F",
			arg0
		);
	}
	inline jboolean PowerManager::isAllowedInLowPowerStandby(jint arg0) const
	{
		return callMethod<jboolean>(
			"isAllowedInLowPowerStandby",
			"(I)Z",
			arg0
		);
	}
	inline jboolean PowerManager::isAllowedInLowPowerStandby(JString arg0) const
	{
		return callMethod<jboolean>(
			"isAllowedInLowPowerStandby",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean PowerManager::isBatteryDischargePredictionPersonalized() const
	{
		return callMethod<jboolean>(
			"isBatteryDischargePredictionPersonalized",
			"()Z"
		);
	}
	inline jboolean PowerManager::isDeviceIdleMode() const
	{
		return callMethod<jboolean>(
			"isDeviceIdleMode",
			"()Z"
		);
	}
	inline jboolean PowerManager::isDeviceLightIdleMode() const
	{
		return callMethod<jboolean>(
			"isDeviceLightIdleMode",
			"()Z"
		);
	}
	inline jboolean PowerManager::isExemptFromLowPowerStandby() const
	{
		return callMethod<jboolean>(
			"isExemptFromLowPowerStandby",
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
	inline jboolean PowerManager::isLowPowerStandbyEnabled() const
	{
		return callMethod<jboolean>(
			"isLowPowerStandbyEnabled",
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
	inline jboolean PowerManager::isRebootingUserspaceSupported() const
	{
		return callMethod<jboolean>(
			"isRebootingUserspaceSupported",
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
	inline void PowerManager::removeThermalStatusListener(JObject arg0) const
	{
		callMethod<void>(
			"removeThermalStatusListener",
			"(Landroid/os/PowerManager$OnThermalStatusChangedListener;)V",
			arg0.object()
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
