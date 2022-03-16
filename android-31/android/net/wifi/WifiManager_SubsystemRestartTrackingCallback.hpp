#pragma once

#include "../../../JObject.hpp"

namespace android::net::wifi
{
	class WifiManager_SubsystemRestartTrackingCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiManager_SubsystemRestartTrackingCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiManager_SubsystemRestartTrackingCallback(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		WifiManager_SubsystemRestartTrackingCallback();
		
		// Methods
		void onSubsystemRestarted() const;
		void onSubsystemRestarting() const;
	};
} // namespace android::net::wifi

