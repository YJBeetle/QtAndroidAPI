#include "./NetworkStatsManager_UsageCallback.hpp"

namespace android::app::usage
{
	// Fields
	
	NetworkStatsManager_UsageCallback::NetworkStatsManager_UsageCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NetworkStatsManager_UsageCallback::NetworkStatsManager_UsageCallback()
	{
		__thiz = QAndroidJniObject(
			"android.app.usage.NetworkStatsManager$UsageCallback",
			"()V"
		);
	}
	
	// Methods
	void NetworkStatsManager_UsageCallback::onThresholdReached(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onThresholdReached",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
} // namespace android::app::usage

