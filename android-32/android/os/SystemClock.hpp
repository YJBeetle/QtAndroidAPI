#pragma once

#include "../../java/time/Clock.def.hpp"
#include "./SystemClock.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::time::Clock SystemClock::currentGnssTimeClock()
	{
		return callStaticObjectMethod(
			"android.os.SystemClock",
			"currentGnssTimeClock",
			"()Ljava/time/Clock;"
		);
	}
	inline jlong SystemClock::currentThreadTimeMillis()
	{
		return callStaticMethod<jlong>(
			"android.os.SystemClock",
			"currentThreadTimeMillis",
			"()J"
		);
	}
	inline jlong SystemClock::elapsedRealtime()
	{
		return callStaticMethod<jlong>(
			"android.os.SystemClock",
			"elapsedRealtime",
			"()J"
		);
	}
	inline jlong SystemClock::elapsedRealtimeNanos()
	{
		return callStaticMethod<jlong>(
			"android.os.SystemClock",
			"elapsedRealtimeNanos",
			"()J"
		);
	}
	inline jboolean SystemClock::setCurrentTimeMillis(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"android.os.SystemClock",
			"setCurrentTimeMillis",
			"(J)Z",
			arg0
		);
	}
	inline void SystemClock::sleep(jlong arg0)
	{
		callStaticMethod<void>(
			"android.os.SystemClock",
			"sleep",
			"(J)V",
			arg0
		);
	}
	inline jlong SystemClock::uptimeMillis()
	{
		return callStaticMethod<jlong>(
			"android.os.SystemClock",
			"uptimeMillis",
			"()J"
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
