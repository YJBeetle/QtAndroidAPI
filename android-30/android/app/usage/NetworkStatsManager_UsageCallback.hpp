#pragma once

#include "../../../JString.hpp"
#include "./NetworkStatsManager_UsageCallback.def.hpp"

namespace android::app::usage
{
	// Fields
	
	// Constructors
	inline NetworkStatsManager_UsageCallback::NetworkStatsManager_UsageCallback()
		: JObject(
			"android.app.usage.NetworkStatsManager$UsageCallback",
			"()V"
		) {}
	
	// Methods
	inline void NetworkStatsManager_UsageCallback::onThresholdReached(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"onThresholdReached",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
} // namespace android::app::usage

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::usage;
#endif
