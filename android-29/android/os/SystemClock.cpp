#include "../../java/time/Clock.hpp"
#include "./SystemClock.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	SystemClock::SystemClock(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::time::Clock SystemClock::currentGnssTimeClock()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.SystemClock",
			"currentGnssTimeClock",
			"()Ljava/time/Clock;"
		);
	}
	jlong SystemClock::currentThreadTimeMillis()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.SystemClock",
			"currentThreadTimeMillis",
			"()J"
		);
	}
	jlong SystemClock::elapsedRealtime()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.SystemClock",
			"elapsedRealtime",
			"()J"
		);
	}
	jlong SystemClock::elapsedRealtimeNanos()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.SystemClock",
			"elapsedRealtimeNanos",
			"()J"
		);
	}
	jboolean SystemClock::setCurrentTimeMillis(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.SystemClock",
			"setCurrentTimeMillis",
			"(J)Z",
			arg0
		);
	}
	void SystemClock::sleep(jlong arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.SystemClock",
			"sleep",
			"(J)V",
			arg0
		);
	}
	jlong SystemClock::uptimeMillis()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.SystemClock",
			"uptimeMillis",
			"()J"
		);
	}
} // namespace android::os

