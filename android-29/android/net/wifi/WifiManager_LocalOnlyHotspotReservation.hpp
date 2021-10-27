#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net::wifi
{
	class WifiConfiguration;
}
namespace android::net::wifi
{
	class WifiManager;
}

namespace android::net::wifi
{
	class WifiManager_LocalOnlyHotspotReservation : public __JniBaseClass
	{
	public:
		// Fields
		
		WifiManager_LocalOnlyHotspotReservation(QAndroidJniObject obj);
		// Constructors
		WifiManager_LocalOnlyHotspotReservation() = default;
		
		// Methods
		void close();
		QAndroidJniObject getWifiConfiguration();
	};
} // namespace android::net::wifi

