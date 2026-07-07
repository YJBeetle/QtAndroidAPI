#pragma once

#include "./ProfilingTrigger.def.hpp"

namespace android::os
{
	// Fields
	inline jint ProfilingTrigger::TRIGGER_TYPE_ANR()
	{
		return getStaticField<jint>(
			"android.os.ProfilingTrigger",
			"TRIGGER_TYPE_ANR"
		);
	}
	inline jint ProfilingTrigger::TRIGGER_TYPE_APP_FULLY_DRAWN()
	{
		return getStaticField<jint>(
			"android.os.ProfilingTrigger",
			"TRIGGER_TYPE_APP_FULLY_DRAWN"
		);
	}
	inline jint ProfilingTrigger::TRIGGER_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.os.ProfilingTrigger",
			"TRIGGER_TYPE_NONE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ProfilingTrigger::getRateLimitingPeriodHours() const
	{
		return callMethod<jint>(
			"getRateLimitingPeriodHours",
			"()I"
		);
	}
	inline jint ProfilingTrigger::getTriggerType() const
	{
		return callMethod<jint>(
			"getTriggerType",
			"()I"
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
