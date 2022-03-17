#pragma once

#include "./WifiManager_SubsystemRestartTrackingCallback.def.hpp"

namespace android::net::wifi
{
	// Fields
	
	// Constructors
	inline WifiManager_SubsystemRestartTrackingCallback::WifiManager_SubsystemRestartTrackingCallback()
		: JObject(
			"android.net.wifi.WifiManager$SubsystemRestartTrackingCallback",
			"()V"
		) {}
	
	// Methods
	inline void WifiManager_SubsystemRestartTrackingCallback::onSubsystemRestarted() const
	{
		callMethod<void>(
			"onSubsystemRestarted",
			"()V"
		);
	}
	inline void WifiManager_SubsystemRestartTrackingCallback::onSubsystemRestarting() const
	{
		callMethod<void>(
			"onSubsystemRestarting",
			"()V"
		);
	}
} // namespace android::net::wifi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi;
#endif
