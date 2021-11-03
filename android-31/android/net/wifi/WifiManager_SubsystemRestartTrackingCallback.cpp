#include "./WifiManager_SubsystemRestartTrackingCallback.hpp"

namespace android::net::wifi
{
	// Fields
	
	// QJniObject forward
	WifiManager_SubsystemRestartTrackingCallback::WifiManager_SubsystemRestartTrackingCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WifiManager_SubsystemRestartTrackingCallback::WifiManager_SubsystemRestartTrackingCallback()
		: JObject(
			"android.net.wifi.WifiManager$SubsystemRestartTrackingCallback",
			"()V"
		) {}
	
	// Methods
	void WifiManager_SubsystemRestartTrackingCallback::onSubsystemRestarted()
	{
		callMethod<void>(
			"onSubsystemRestarted",
			"()V"
		);
	}
	void WifiManager_SubsystemRestartTrackingCallback::onSubsystemRestarting()
	{
		callMethod<void>(
			"onSubsystemRestarting",
			"()V"
		);
	}
} // namespace android::net::wifi

