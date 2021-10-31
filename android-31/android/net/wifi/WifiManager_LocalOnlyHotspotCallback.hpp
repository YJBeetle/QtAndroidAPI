#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net::wifi
{
	class WifiManager_LocalOnlyHotspotReservation;
}

namespace android::net::wifi
{
	class WifiManager_LocalOnlyHotspotCallback : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_GENERIC();
		static jint ERROR_INCOMPATIBLE_MODE();
		static jint ERROR_NO_CHANNEL();
		static jint ERROR_TETHERING_DISALLOWED();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiManager_LocalOnlyHotspotCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiManager_LocalOnlyHotspotCallback(QJniObject obj);
		
		// Constructors
		WifiManager_LocalOnlyHotspotCallback();
		
		// Methods
		void onFailed(jint arg0);
		void onStarted(android::net::wifi::WifiManager_LocalOnlyHotspotReservation arg0);
		void onStopped();
	};
} // namespace android::net::wifi

