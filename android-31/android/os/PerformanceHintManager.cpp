#include "../../JIntArray.hpp"
#include "./PerformanceHintManager_Session.hpp"
#include "./PerformanceHintManager.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	PerformanceHintManager::PerformanceHintManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::os::PerformanceHintManager_Session PerformanceHintManager::createHintSession(JIntArray arg0, jlong arg1)
	{
		return callObjectMethod(
			"createHintSession",
			"([IJ)Landroid/os/PerformanceHintManager$Session;",
			arg0.object<jintArray>(),
			arg1
		);
	}
	jlong PerformanceHintManager::getPreferredUpdateRateNanos()
	{
		return callMethod<jlong>(
			"getPreferredUpdateRateNanos",
			"()J"
		);
	}
} // namespace android::os

