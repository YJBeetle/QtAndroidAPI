#include "./SystemClock.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	SystemClock::SystemClock(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jlong SystemClock::currentThreadTimeMillis()
	{
		return callStaticMethod<jlong>(
			"android.os.SystemClock",
			"currentThreadTimeMillis",
			"()J"
		);
	}
	jlong SystemClock::elapsedRealtime()
	{
		return callStaticMethod<jlong>(
			"android.os.SystemClock",
			"elapsedRealtime",
			"()J"
		);
	}
	jlong SystemClock::elapsedRealtimeNanos()
	{
		return callStaticMethod<jlong>(
			"android.os.SystemClock",
			"elapsedRealtimeNanos",
			"()J"
		);
	}
	jboolean SystemClock::setCurrentTimeMillis(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"android.os.SystemClock",
			"setCurrentTimeMillis",
			"(J)Z",
			arg0
		);
	}
	void SystemClock::sleep(jlong arg0)
	{
		callStaticMethod<void>(
			"android.os.SystemClock",
			"sleep",
			"(J)V",
			arg0
		);
	}
	jlong SystemClock::uptimeMillis()
	{
		return callStaticMethod<jlong>(
			"android.os.SystemClock",
			"uptimeMillis",
			"()J"
		);
	}
} // namespace android::os

