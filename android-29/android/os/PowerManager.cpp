#include "./PowerManager_WakeLock.hpp"
#include "./PowerManager.hpp"

namespace android::os
{
	// Fields
	jint PowerManager::ACQUIRE_CAUSES_WAKEUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"ACQUIRE_CAUSES_WAKEUP"
		);
	}
	jstring PowerManager::ACTION_DEVICE_IDLE_MODE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.PowerManager",
			"ACTION_DEVICE_IDLE_MODE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PowerManager::ACTION_POWER_SAVE_MODE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.PowerManager",
			"ACTION_POWER_SAVE_MODE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint PowerManager::FULL_WAKE_LOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"FULL_WAKE_LOCK"
		);
	}
	jint PowerManager::LOCATION_MODE_ALL_DISABLED_WHEN_SCREEN_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"LOCATION_MODE_ALL_DISABLED_WHEN_SCREEN_OFF"
		);
	}
	jint PowerManager::LOCATION_MODE_FOREGROUND_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"LOCATION_MODE_FOREGROUND_ONLY"
		);
	}
	jint PowerManager::LOCATION_MODE_GPS_DISABLED_WHEN_SCREEN_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"LOCATION_MODE_GPS_DISABLED_WHEN_SCREEN_OFF"
		);
	}
	jint PowerManager::LOCATION_MODE_NO_CHANGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"LOCATION_MODE_NO_CHANGE"
		);
	}
	jint PowerManager::LOCATION_MODE_THROTTLE_REQUESTS_WHEN_SCREEN_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"LOCATION_MODE_THROTTLE_REQUESTS_WHEN_SCREEN_OFF"
		);
	}
	jint PowerManager::ON_AFTER_RELEASE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"ON_AFTER_RELEASE"
		);
	}
	jint PowerManager::PARTIAL_WAKE_LOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"PARTIAL_WAKE_LOCK"
		);
	}
	jint PowerManager::PROXIMITY_SCREEN_OFF_WAKE_LOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"PROXIMITY_SCREEN_OFF_WAKE_LOCK"
		);
	}
	jint PowerManager::RELEASE_FLAG_WAIT_FOR_NO_PROXIMITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"RELEASE_FLAG_WAIT_FOR_NO_PROXIMITY"
		);
	}
	jint PowerManager::SCREEN_BRIGHT_WAKE_LOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"SCREEN_BRIGHT_WAKE_LOCK"
		);
	}
	jint PowerManager::SCREEN_DIM_WAKE_LOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"SCREEN_DIM_WAKE_LOCK"
		);
	}
	jint PowerManager::THERMAL_STATUS_CRITICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_CRITICAL"
		);
	}
	jint PowerManager::THERMAL_STATUS_EMERGENCY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_EMERGENCY"
		);
	}
	jint PowerManager::THERMAL_STATUS_LIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_LIGHT"
		);
	}
	jint PowerManager::THERMAL_STATUS_MODERATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_MODERATE"
		);
	}
	jint PowerManager::THERMAL_STATUS_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_NONE"
		);
	}
	jint PowerManager::THERMAL_STATUS_SEVERE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_SEVERE"
		);
	}
	jint PowerManager::THERMAL_STATUS_SHUTDOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_SHUTDOWN"
		);
	}
	
	PowerManager::PowerManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void PowerManager::addThermalStatusListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addThermalStatusListener",
			"(Landroid/os/PowerManager$OnThermalStatusChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void PowerManager::addThermalStatusListener(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"addThermalStatusListener",
			"(Ljava/util/concurrent/Executor;Landroid/os/PowerManager$OnThermalStatusChangedListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint PowerManager::getCurrentThermalStatus()
	{
		return __thiz.callMethod<jint>(
			"getCurrentThermalStatus",
			"()I"
		);
	}
	jint PowerManager::getLocationPowerSaveMode()
	{
		return __thiz.callMethod<jint>(
			"getLocationPowerSaveMode",
			"()I"
		);
	}
	jboolean PowerManager::isDeviceIdleMode()
	{
		return __thiz.callMethod<jboolean>(
			"isDeviceIdleMode",
			"()Z"
		);
	}
	jboolean PowerManager::isIgnoringBatteryOptimizations(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isIgnoringBatteryOptimizations",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean PowerManager::isIgnoringBatteryOptimizations(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isIgnoringBatteryOptimizations",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean PowerManager::isInteractive()
	{
		return __thiz.callMethod<jboolean>(
			"isInteractive",
			"()Z"
		);
	}
	jboolean PowerManager::isPowerSaveMode()
	{
		return __thiz.callMethod<jboolean>(
			"isPowerSaveMode",
			"()Z"
		);
	}
	jboolean PowerManager::isScreenOn()
	{
		return __thiz.callMethod<jboolean>(
			"isScreenOn",
			"()Z"
		);
	}
	jboolean PowerManager::isSustainedPerformanceModeSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isSustainedPerformanceModeSupported",
			"()Z"
		);
	}
	jboolean PowerManager::isWakeLockLevelSupported(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isWakeLockLevelSupported",
			"(I)Z",
			arg0
		);
	}
	QAndroidJniObject PowerManager::newWakeLock(jint arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"newWakeLock",
			"(ILjava/lang/String;)Landroid/os/PowerManager$WakeLock;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject PowerManager::newWakeLock(jint arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"newWakeLock",
			"(ILjava/lang/String;)Landroid/os/PowerManager$WakeLock;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void PowerManager::reboot(jstring arg0)
	{
		__thiz.callMethod<void>(
			"reboot",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PowerManager::reboot(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"reboot",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void PowerManager::removeThermalStatusListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeThermalStatusListener",
			"(Landroid/os/PowerManager$OnThermalStatusChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::os

