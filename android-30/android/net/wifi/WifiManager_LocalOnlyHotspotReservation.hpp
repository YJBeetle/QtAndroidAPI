#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net::wifi
{
	class SoftApConfiguration;
}
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiManager_LocalOnlyHotspotReservation(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiManager_LocalOnlyHotspotReservation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		android::net::wifi::SoftApConfiguration getSoftApConfiguration();
		android::net::wifi::WifiConfiguration getWifiConfiguration();
	};
} // namespace android::net::wifi

