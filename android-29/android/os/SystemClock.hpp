#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::time
{
	class Clock;
}

namespace android::os
{
	class SystemClock : public __JniBaseClass
	{
	public:
		// Fields
		
		SystemClock(QAndroidJniObject obj);
		// Constructors
		SystemClock() = default;
		
		// Methods
		static QAndroidJniObject currentGnssTimeClock();
		static jlong currentThreadTimeMillis();
		static jlong elapsedRealtime();
		static jlong elapsedRealtimeNanos();
		static jboolean setCurrentTimeMillis(jlong arg0);
		static void sleep(jlong arg0);
		static jlong uptimeMillis();
	};
} // namespace android::os

