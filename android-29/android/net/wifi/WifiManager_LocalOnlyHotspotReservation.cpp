#include "./WifiConfiguration.hpp"
#include "./WifiManager.hpp"
#include "./WifiManager_LocalOnlyHotspotReservation.hpp"

namespace android::net::wifi
{
	// Fields
	
	WifiManager_LocalOnlyHotspotReservation::WifiManager_LocalOnlyHotspotReservation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void WifiManager_LocalOnlyHotspotReservation::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject WifiManager_LocalOnlyHotspotReservation::getWifiConfiguration()
	{
		return __thiz.callObjectMethod(
			"getWifiConfiguration",
			"()Landroid/net/wifi/WifiConfiguration;"
		);
	}
} // namespace android::net::wifi

