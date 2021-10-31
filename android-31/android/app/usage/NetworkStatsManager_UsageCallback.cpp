#include "./NetworkStatsManager_UsageCallback.hpp"

namespace android::app::usage
{
	// Fields
	
	// QAndroidJniObject forward
	NetworkStatsManager_UsageCallback::NetworkStatsManager_UsageCallback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	NetworkStatsManager_UsageCallback::NetworkStatsManager_UsageCallback()
		: __JniBaseClass(
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

