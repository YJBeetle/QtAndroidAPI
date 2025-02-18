#pragma once

#include "../../JIntArray.hpp"
#include "./PerformanceHintManager_Session.def.hpp"
#include "./PerformanceHintManager.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::os::PerformanceHintManager_Session PerformanceHintManager::createHintSession(JIntArray arg0, jlong arg1) const
	{
		return callObjectMethod(
			"createHintSession",
			"([IJ)Landroid/os/PerformanceHintManager$Session;",
			arg0.object<jintArray>(),
			arg1
		);
	}
	inline jlong PerformanceHintManager::getPreferredUpdateRateNanos() const
	{
		return callMethod<jlong>(
			"getPreferredUpdateRateNanos",
			"()J"
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
