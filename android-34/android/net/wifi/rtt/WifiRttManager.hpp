#pragma once

#include "./RangingRequest.def.hpp"
#include "./RangingResultCallback.def.hpp"
#include "../../../os/Bundle.def.hpp"
#include "../../../../JString.hpp"
#include "./WifiRttManager.def.hpp"

namespace android::net::wifi::rtt
{
	// Fields
	inline JString WifiRttManager::ACTION_WIFI_RTT_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.net.wifi.rtt.WifiRttManager",
			"ACTION_WIFI_RTT_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiRttManager::CHARACTERISTICS_KEY_BOOLEAN_LCI()
	{
		return getStaticObjectField(
			"android.net.wifi.rtt.WifiRttManager",
			"CHARACTERISTICS_KEY_BOOLEAN_LCI",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiRttManager::CHARACTERISTICS_KEY_BOOLEAN_LCR()
	{
		return getStaticObjectField(
			"android.net.wifi.rtt.WifiRttManager",
			"CHARACTERISTICS_KEY_BOOLEAN_LCR",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiRttManager::CHARACTERISTICS_KEY_BOOLEAN_ONE_SIDED_RTT()
	{
		return getStaticObjectField(
			"android.net.wifi.rtt.WifiRttManager",
			"CHARACTERISTICS_KEY_BOOLEAN_ONE_SIDED_RTT",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiRttManager::CHARACTERISTICS_KEY_BOOLEAN_STA_RESPONDER()
	{
		return getStaticObjectField(
			"android.net.wifi.rtt.WifiRttManager",
			"CHARACTERISTICS_KEY_BOOLEAN_STA_RESPONDER",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::os::Bundle WifiRttManager::getRttCharacteristics() const
	{
		return callObjectMethod(
			"getRttCharacteristics",
			"()Landroid/os/Bundle;"
		);
	}
	inline jboolean WifiRttManager::isAvailable() const
	{
		return callMethod<jboolean>(
			"isAvailable",
			"()Z"
		);
	}
	inline void WifiRttManager::startRanging(android::net::wifi::rtt::RangingRequest arg0, JObject arg1, android::net::wifi::rtt::RangingResultCallback arg2) const
	{
		callMethod<void>(
			"startRanging",
			"(Landroid/net/wifi/rtt/RangingRequest;Ljava/util/concurrent/Executor;Landroid/net/wifi/rtt/RangingResultCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::net::wifi::rtt

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::rtt;
#endif
