#pragma once

#include "./DeviceLockManager.def.hpp"

namespace android::devicelock
{
	// Fields
	inline jint DeviceLockManager::DEVICE_LOCK_ROLE_FINANCING()
	{
		return getStaticField<jint>(
			"android.devicelock.DeviceLockManager",
			"DEVICE_LOCK_ROLE_FINANCING"
		);
	}
	
	// Constructors
	
	// Methods
	inline void DeviceLockManager::getDeviceId(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"getDeviceId",
			"(Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DeviceLockManager::getKioskApps(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"getKioskApps",
			"(Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DeviceLockManager::isDeviceLocked(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"isDeviceLocked",
			"(Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DeviceLockManager::lockDevice(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"lockDevice",
			"(Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DeviceLockManager::unlockDevice(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"unlockDevice",
			"(Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::devicelock

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::devicelock;
#endif
