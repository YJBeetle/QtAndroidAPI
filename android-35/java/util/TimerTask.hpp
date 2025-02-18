#pragma once

#include "../../JObject.hpp"
#include "./TimerTask.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean TimerTask::cancel() const
	{
		return callMethod<jboolean>(
			"cancel",
			"()Z"
		);
	}
	inline void TimerTask::run() const
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
	inline jlong TimerTask::scheduledExecutionTime() const
	{
		return callMethod<jlong>(
			"scheduledExecutionTime",
			"()J"
		);
	}
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
