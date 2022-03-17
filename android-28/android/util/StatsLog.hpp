#pragma once

#include "./StatsLog.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean StatsLog::logEvent(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.util.StatsLog",
			"logEvent",
			"(I)Z",
			arg0
		);
	}
	inline jboolean StatsLog::logStart(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.util.StatsLog",
			"logStart",
			"(I)Z",
			arg0
		);
	}
	inline jboolean StatsLog::logStop(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.util.StatsLog",
			"logStop",
			"(I)Z",
			arg0
		);
	}
} // namespace android::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
