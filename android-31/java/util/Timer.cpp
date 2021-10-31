#include "./Date.hpp"
#include "./TimerTask.hpp"
#include "./concurrent/atomic/AtomicInteger.hpp"
#include "./Timer.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	Timer::Timer(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Timer::Timer()
		: __JniBaseClass(
			"java.util.Timer",
			"()V"
		) {}
	Timer::Timer(jboolean arg0)
		: __JniBaseClass(
			"java.util.Timer",
			"(Z)V",
			arg0
		) {}
	Timer::Timer(jstring arg0)
		: __JniBaseClass(
			"java.util.Timer",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	Timer::Timer(jstring arg0, jboolean arg1)
		: __JniBaseClass(
			"java.util.Timer",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		) {}
	
	// Methods
	void Timer::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jint Timer::purge()
	{
		return callMethod<jint>(
			"purge",
			"()I"
		);
	}
	void Timer::schedule(java::util::TimerTask arg0, java::util::Date arg1)
	{
		callMethod<void>(
			"schedule",
			"(Ljava/util/TimerTask;Ljava/util/Date;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Timer::schedule(java::util::TimerTask arg0, jlong arg1)
	{
		callMethod<void>(
			"schedule",
			"(Ljava/util/TimerTask;J)V",
			arg0.object(),
			arg1
		);
	}
	void Timer::schedule(java::util::TimerTask arg0, java::util::Date arg1, jlong arg2)
	{
		callMethod<void>(
			"schedule",
			"(Ljava/util/TimerTask;Ljava/util/Date;J)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void Timer::schedule(java::util::TimerTask arg0, jlong arg1, jlong arg2)
	{
		callMethod<void>(
			"schedule",
			"(Ljava/util/TimerTask;JJ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void Timer::scheduleAtFixedRate(java::util::TimerTask arg0, java::util::Date arg1, jlong arg2)
	{
		callMethod<void>(
			"scheduleAtFixedRate",
			"(Ljava/util/TimerTask;Ljava/util/Date;J)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void Timer::scheduleAtFixedRate(java::util::TimerTask arg0, jlong arg1, jlong arg2)
	{
		callMethod<void>(
			"scheduleAtFixedRate",
			"(Ljava/util/TimerTask;JJ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
} // namespace java::util

