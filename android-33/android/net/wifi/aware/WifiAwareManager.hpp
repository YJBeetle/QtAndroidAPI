#pragma once

#include "./AttachCallback.def.hpp"
#include "./AwareResources.def.hpp"
#include "./Characteristics.def.hpp"
#include "./IdentityChangedListener.def.hpp"
#include "../../../os/Handler.def.hpp"
#include "../../../../JString.hpp"
#include "./WifiAwareManager.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	inline JString WifiAwareManager::ACTION_WIFI_AWARE_RESOURCE_CHANGED()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.WifiAwareManager",
			"ACTION_WIFI_AWARE_RESOURCE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiAwareManager::ACTION_WIFI_AWARE_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.WifiAwareManager",
			"ACTION_WIFI_AWARE_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiAwareManager::EXTRA_AWARE_RESOURCES()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.WifiAwareManager",
			"EXTRA_AWARE_RESOURCES",
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
	inline jint WifiAwareManager::WIFI_AWARE_DISCOVERY_LOST_REASON_PEER_NOT_VISIBLE()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.WifiAwareManager",
			"WIFI_AWARE_DISCOVERY_LOST_REASON_PEER_NOT_VISIBLE"
		);
	}
	inline jint WifiAwareManager::WIFI_AWARE_DISCOVERY_LOST_REASON_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.WifiAwareManager",
			"WIFI_AWARE_DISCOVERY_LOST_REASON_UNKNOWN"
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
	inline android::net::wifi::aware::AwareResources WifiAwareManager::getAvailableAwareResources() const
	{
		return callObjectMethod(
			"getAvailableAwareResources",
			"()Landroid/net/wifi/aware/AwareResources;"
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
	inline jboolean WifiAwareManager::isDeviceAttached() const
	{
		return callMethod<jboolean>(
			"isDeviceAttached",
			"()Z"
		);
	}
	inline jboolean WifiAwareManager::isInstantCommunicationModeEnabled() const
	{
		return callMethod<jboolean>(
			"isInstantCommunicationModeEnabled",
			"()Z"
		);
	}
	inline jboolean WifiAwareManager::isSetChannelOnDataPathSupported() const
	{
		return callMethod<jboolean>(
			"isSetChannelOnDataPathSupported",
			"()Z"
		);
	}
} // namespace android::net::wifi::aware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::aware;
#endif
