#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::wifi
{
	class WifiManager_SubsystemRestartTrackingCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiManager_SubsystemRestartTrackingCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiManager_SubsystemRestartTrackingCallback(QJniObject obj);
		
		// Constructors
		WifiManager_SubsystemRestartTrackingCallback();
		
		// Methods
		void onSubsystemRestarted();
		void onSubsystemRestarting();
	};
} // namespace android::net::wifi

