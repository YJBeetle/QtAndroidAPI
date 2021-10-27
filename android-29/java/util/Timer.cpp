#include "./Date.hpp"
#include "./TimerTask.hpp"
#include "./concurrent/atomic/AtomicInteger.hpp"
#include "./Timer.hpp"

namespace java::util
{
	// Fields
	
	Timer::Timer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Timer::Timer()
	{
		__thiz = QAndroidJniObject(
			"java.util.Timer",
			"()V"
		);
	}
	Timer::Timer(jboolean &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Timer",
			"(Z)V",
			arg0
		);
	}
	Timer::Timer(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Timer",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	Timer::Timer(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Timer",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	Timer::Timer(jstring &arg0, jboolean &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Timer",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	Timer::Timer(const QString &arg0, jboolean &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Timer",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	void Timer::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jint Timer::purge()
	{
		return __thiz.callMethod<jint>(
			"purge",
			"()I"
		);
	}
	void Timer::schedule(java::util::TimerTask arg0, java::util::Date arg1)
	{
		__thiz.callMethod<void>(
			"schedule",
			"(Ljava/util/TimerTask;Ljava/util/Date;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Timer::schedule(java::util::TimerTask arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"schedule",
			"(Ljava/util/TimerTask;J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Timer::schedule(java::util::TimerTask arg0, java::util::Date arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"schedule",
			"(Ljava/util/TimerTask;Ljava/util/Date;J)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Timer::schedule(java::util::TimerTask arg0, jlong arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"schedule",
			"(Ljava/util/TimerTask;JJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void Timer::scheduleAtFixedRate(java::util::TimerTask arg0, java::util::Date arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"scheduleAtFixedRate",
			"(Ljava/util/TimerTask;Ljava/util/Date;J)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Timer::scheduleAtFixedRate(java::util::TimerTask arg0, jlong arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"scheduleAtFixedRate",
			"(Ljava/util/TimerTask;JJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace java::util

