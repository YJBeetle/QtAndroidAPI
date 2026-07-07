#pragma once

#include "./RangingSession.def.hpp"
#include "./RangingManager.def.hpp"

namespace android::ranging
{
	// Fields
	inline jint RangingManager::BLE_CS()
	{
		return getStaticField<jint>(
			"android.ranging.RangingManager",
			"BLE_CS"
		);
	}
	inline jint RangingManager::BLE_RSSI()
	{
		return getStaticField<jint>(
			"android.ranging.RangingManager",
			"BLE_RSSI"
		);
	}
	inline jint RangingManager::UWB()
	{
		return getStaticField<jint>(
			"android.ranging.RangingManager",
			"UWB"
		);
	}
	inline jint RangingManager::WIFI_NAN_RTT()
	{
		return getStaticField<jint>(
			"android.ranging.RangingManager",
			"WIFI_NAN_RTT"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::ranging::RangingSession RangingManager::createRangingSession(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"createRangingSession",
			"(Ljava/util/concurrent/Executor;Landroid/ranging/RangingSession$Callback;)Landroid/ranging/RangingSession;",
			arg0.object(),
			arg1.object()
		);
	}
	inline void RangingManager::registerCapabilitiesCallback(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"registerCapabilitiesCallback",
			"(Ljava/util/concurrent/Executor;Landroid/ranging/RangingManager$RangingCapabilitiesCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void RangingManager::unregisterCapabilitiesCallback(JObject arg0) const
	{
		callMethod<void>(
			"unregisterCapabilitiesCallback",
			"(Landroid/ranging/RangingManager$RangingCapabilitiesCallback;)V",
			arg0.object()
		);
	}
} // namespace android::ranging

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging;
#endif
