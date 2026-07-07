#pragma once

#include "./ProfilingTrigger.def.hpp"
#include "./ProfilingTrigger_Builder.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline ProfilingTrigger_Builder::ProfilingTrigger_Builder(jint arg0)
		: JObject(
			"android.os.ProfilingTrigger$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::os::ProfilingTrigger ProfilingTrigger_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/os/ProfilingTrigger;"
		);
	}
	inline android::os::ProfilingTrigger_Builder ProfilingTrigger_Builder::setRateLimitingPeriodHours(jint arg0) const
	{
		return callObjectMethod(
			"setRateLimitingPeriodHours",
			"(I)Landroid/os/ProfilingTrigger$Builder;",
			arg0
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
