#include "./NetworkStatsManager_UsageCallback.hpp"

namespace android::app::usage
{
	// Fields
	
	// QJniObject forward
	NetworkStatsManager_UsageCallback::NetworkStatsManager_UsageCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	NetworkStatsManager_UsageCallback::NetworkStatsManager_UsageCallback()
		: JObject(
			"android.app.usage.NetworkStatsManager$UsageCallback",
			"()V"
		) {}
	
	// Methods
	void NetworkStatsManager_UsageCallback::onThresholdReached(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"onThresholdReached",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
} // namespace android::app::usage

