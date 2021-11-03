#pragma once

#include "../../../JObject.hpp"

namespace android::net::wifi
{
	class WifiManager_LocalOnlyHotspotReservation;
}

namespace android::net::wifi
{
	class WifiManager_LocalOnlyHotspotCallback : public JObject
	{
	public:
		// Fields
		static jint ERROR_GENERIC();
		static jint ERROR_INCOMPATIBLE_MODE();
		static jint ERROR_NO_CHANNEL();
		static jint ERROR_TETHERING_DISALLOWED();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiManager_LocalOnlyHotspotCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiManager_LocalOnlyHotspotCallback(QJniObject obj);
		
		// Constructors
		WifiManager_LocalOnlyHotspotCallback();
		
		// Methods
		void onFailed(jint arg0) const;
		void onStarted(android::net::wifi::WifiManager_LocalOnlyHotspotReservation arg0) const;
		void onStopped() const;
	};
} // namespace android::net::wifi

