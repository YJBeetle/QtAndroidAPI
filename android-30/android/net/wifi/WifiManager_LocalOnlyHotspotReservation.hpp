#pragma once

#include "./SoftApConfiguration.def.hpp"
#include "./WifiConfiguration.def.hpp"
#include "./WifiManager.def.hpp"
#include "./WifiManager_LocalOnlyHotspotReservation.def.hpp"

namespace android::net::wifi
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void WifiManager_LocalOnlyHotspotReservation::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline android::net::wifi::SoftApConfiguration WifiManager_LocalOnlyHotspotReservation::getSoftApConfiguration() const
	{
		return callObjectMethod(
			"getSoftApConfiguration",
			"()Landroid/net/wifi/SoftApConfiguration;"
		);
	}
	inline android::net::wifi::WifiConfiguration WifiManager_LocalOnlyHotspotReservation::getWifiConfiguration() const
	{
		return callObjectMethod(
			"getWifiConfiguration",
			"()Landroid/net/wifi/WifiConfiguration;"
		);
	}
} // namespace android::net::wifi

// Base class headers

