#include "./WifiConfiguration.hpp"
#include "./WifiManager.hpp"
#include "./WifiManager_LocalOnlyHotspotReservation.hpp"

namespace android::net::wifi
{
	// Fields
	
	// QAndroidJniObject forward
	WifiManager_LocalOnlyHotspotReservation::WifiManager_LocalOnlyHotspotReservation(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void WifiManager_LocalOnlyHotspotReservation::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject WifiManager_LocalOnlyHotspotReservation::getWifiConfiguration()
	{
		return callObjectMethod(
			"getWifiConfiguration",
			"()Landroid/net/wifi/WifiConfiguration;"
		);
	}
} // namespace android::net::wifi

