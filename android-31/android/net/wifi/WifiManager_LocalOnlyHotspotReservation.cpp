#include "./SoftApConfiguration.hpp"
#include "./WifiConfiguration.hpp"
#include "./WifiManager.hpp"
#include "./WifiManager_LocalOnlyHotspotReservation.hpp"

namespace android::net::wifi
{
	// Fields
	
	// QJniObject forward
	WifiManager_LocalOnlyHotspotReservation::WifiManager_LocalOnlyHotspotReservation(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void WifiManager_LocalOnlyHotspotReservation::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::net::wifi::SoftApConfiguration WifiManager_LocalOnlyHotspotReservation::getSoftApConfiguration() const
	{
		return callObjectMethod(
			"getSoftApConfiguration",
			"()Landroid/net/wifi/SoftApConfiguration;"
		);
	}
	android::net::wifi::WifiConfiguration WifiManager_LocalOnlyHotspotReservation::getWifiConfiguration() const
	{
		return callObjectMethod(
			"getWifiConfiguration",
			"()Landroid/net/wifi/WifiConfiguration;"
		);
	}
} // namespace android::net::wifi

