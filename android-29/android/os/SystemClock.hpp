#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::time
{
	class Clock;
}

namespace __jni_impl::android::os
{
	class SystemClock : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject currentGnssTimeClock();
		static jlong currentThreadTimeMillis();
		static jlong elapsedRealtime();
		static jlong elapsedRealtimeNanos();
		static jboolean setCurrentTimeMillis(jlong arg0);
		static void sleep(jlong arg0);
		static jlong uptimeMillis();
	};
} // namespace __jni_impl::android::os

#include "../../java/time/Clock.hpp"

namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void SystemClock::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.SystemClock",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SystemClock::currentGnssTimeClock()
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
} // namespace __jni_impl::android::os

namespace android::os
{
	class SystemClock : public __jni_impl::android::os::SystemClock
	{
	public:
		SystemClock(QAndroidJniObject obj) { __thiz = obj; }
		SystemClock()
		{
			__constructor();
		}
	};
} // namespace android::os

