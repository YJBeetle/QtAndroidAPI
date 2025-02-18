#pragma once

#include "./WifiManager_LocalOnlyHotspotReservation.def.hpp"
#include "./WifiManager_LocalOnlyHotspotCallback.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline jint WifiManager_LocalOnlyHotspotCallback::ERROR_GENERIC()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$LocalOnlyHotspotCallback",
			"ERROR_GENERIC"
		);
	}
	inline jint WifiManager_LocalOnlyHotspotCallback::ERROR_INCOMPATIBLE_MODE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$LocalOnlyHotspotCallback",
			"ERROR_INCOMPATIBLE_MODE"
		);
	}
	inline jint WifiManager_LocalOnlyHotspotCallback::ERROR_NO_CHANNEL()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$LocalOnlyHotspotCallback",
			"ERROR_NO_CHANNEL"
		);
	}
	inline jint WifiManager_LocalOnlyHotspotCallback::ERROR_TETHERING_DISALLOWED()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$LocalOnlyHotspotCallback",
			"ERROR_TETHERING_DISALLOWED"
		);
	}
	
	// Constructors
	inline WifiManager_LocalOnlyHotspotCallback::WifiManager_LocalOnlyHotspotCallback()
		: JObject(
			"android.net.wifi.WifiManager$LocalOnlyHotspotCallback",
			"()V"
		) {}
	
	// Methods
	inline void WifiManager_LocalOnlyHotspotCallback::onFailed(jint arg0) const
	{
		callMethod<void>(
			"onFailed",
			"(I)V",
			arg0
		);
	}
	inline void WifiManager_LocalOnlyHotspotCallback::onStarted(android::net::wifi::WifiManager_LocalOnlyHotspotReservation arg0) const
	{
		callMethod<void>(
			"onStarted",
			"(Landroid/net/wifi/WifiManager$LocalOnlyHotspotReservation;)V",
			arg0.object()
		);
	}
	inline void WifiManager_LocalOnlyHotspotCallback::onStopped() const
	{
		callMethod<void>(
			"onStopped",
			"()V"
		);
	}
} // namespace android::net::wifi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi;
#endif
