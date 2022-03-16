#pragma once

#include "./AttachCallback.def.hpp"
#include "./Characteristics.def.hpp"
#include "./IdentityChangedListener.def.hpp"
#include "../../../os/Handler.def.hpp"
#include "../../../../JString.hpp"
#include "./WifiAwareManager.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	inline JString WifiAwareManager::ACTION_WIFI_AWARE_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.WifiAwareManager",
			"ACTION_WIFI_AWARE_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline jint WifiAwareManager::WIFI_AWARE_DATA_PATH_ROLE_INITIATOR()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.WifiAwareManager",
			"WIFI_AWARE_DATA_PATH_ROLE_INITIATOR"
		);
	}
	inline jint WifiAwareManager::WIFI_AWARE_DATA_PATH_ROLE_RESPONDER()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.WifiAwareManager",
			"WIFI_AWARE_DATA_PATH_ROLE_RESPONDER"
		);
	}
	
	// Constructors
	
	// Methods
	inline void WifiAwareManager::attach(android::net::wifi::aware::AttachCallback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"attach",
			"(Landroid/net/wifi/aware/AttachCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WifiAwareManager::attach(android::net::wifi::aware::AttachCallback arg0, android::net::wifi::aware::IdentityChangedListener arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"attach",
			"(Landroid/net/wifi/aware/AttachCallback;Landroid/net/wifi/aware/IdentityChangedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::net::wifi::aware::Characteristics WifiAwareManager::getCharacteristics() const
	{
		return callObjectMethod(
			"getCharacteristics",
			"()Landroid/net/wifi/aware/Characteristics;"
		);
	}
	inline jboolean WifiAwareManager::isAvailable() const
	{
		return callMethod<jboolean>(
			"isAvailable",
			"()Z"
		);
	}
} // namespace android::net::wifi::aware

// Base class headers

