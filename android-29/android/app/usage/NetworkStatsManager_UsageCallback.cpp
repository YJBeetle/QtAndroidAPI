#include "../../../JString.hpp"
#include "./NetworkStatsManager_UsageCallback.hpp"

namespace android::app::usage
{
	// Fields
	
	// QAndroidJniObject forward
	NetworkStatsManager_UsageCallback::NetworkStatsManager_UsageCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	NetworkStatsManager_UsageCallback::NetworkStatsManager_UsageCallback()
		: JObject(
			"android.app.usage.NetworkStatsManager$UsageCallback",
			"()V"
		) {}
	
	// Methods
	void NetworkStatsManager_UsageCallback::onThresholdReached(jint arg0, JString arg1)
	{
		callMethod<void>(
			"onThresholdReached",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
} // namespace android::app::usage

