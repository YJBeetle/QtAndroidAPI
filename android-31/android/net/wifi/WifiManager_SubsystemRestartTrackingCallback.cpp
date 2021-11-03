#include "./WifiManager_SubsystemRestartTrackingCallback.hpp"

namespace android::net::wifi
{
	// Fields
	
	// QAndroidJniObject forward
	WifiManager_SubsystemRestartTrackingCallback::WifiManager_SubsystemRestartTrackingCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	WifiManager_SubsystemRestartTrackingCallback::WifiManager_SubsystemRestartTrackingCallback()
		: JObject(
			"android.net.wifi.WifiManager$SubsystemRestartTrackingCallback",
			"()V"
		) {}
	
	// Methods
	void WifiManager_SubsystemRestartTrackingCallback::onSubsystemRestarted() const
	{
		callMethod<void>(
			"onSubsystemRestarted",
			"()V"
		);
	}
	void WifiManager_SubsystemRestartTrackingCallback::onSubsystemRestarting() const
	{
		callMethod<void>(
			"onSubsystemRestarting",
			"()V"
		);
	}
} // namespace android::net::wifi

