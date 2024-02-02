#pragma once

#include "../../JIntArray.hpp"
#include "./PerformanceHintManager_Session.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void PerformanceHintManager_Session::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void PerformanceHintManager_Session::reportActualWorkDuration(jlong arg0) const
	{
		callMethod<void>(
			"reportActualWorkDuration",
			"(J)V",
			arg0
		);
	}
	inline void PerformanceHintManager_Session::setThreads(JIntArray arg0) const
	{
		callMethod<void>(
			"setThreads",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	inline void PerformanceHintManager_Session::updateTargetWorkDuration(jlong arg0) const
	{
		callMethod<void>(
			"updateTargetWorkDuration",
			"(J)V",
			arg0
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
