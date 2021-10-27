#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::java::util
{
	class TimerTask;
}
namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicInteger;
}

namespace __jni_impl::java::util
{
	class Timer : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jboolean arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jboolean arg1);
		void __constructor(const QString &arg0, jboolean arg1);
		
		// Methods
		void cancel();
		jint purge();
		void schedule(__jni_impl::java::util::TimerTask arg0, __jni_impl::java::util::Date arg1);
		void schedule(__jni_impl::java::util::TimerTask arg0, jlong arg1);
		void schedule(__jni_impl::java::util::TimerTask arg0, __jni_impl::java::util::Date arg1, jlong arg2);
		void schedule(__jni_impl::java::util::TimerTask arg0, jlong arg1, jlong arg2);
		void scheduleAtFixedRate(__jni_impl::java::util::TimerTask arg0, __jni_impl::java::util::Date arg1, jlong arg2);
		void scheduleAtFixedRate(__jni_impl::java::util::TimerTask arg0, jlong arg1, jlong arg2);
	};
} // namespace __jni_impl::java::util

#include "./Date.hpp"
#include "./TimerTask.hpp"
#include "./concurrent/atomic/AtomicInteger.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void Timer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Timer",
			"()V"
		);
	}
	void Timer::__constructor(jboolean arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Timer",
			"(Z)V",
			arg0
		);
	}
	void Timer::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Timer",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Timer::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Timer",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Timer::__constructor(jstring arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Timer",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void Timer::__constructor(const QString &arg0, jboolean arg1)
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
	void Timer::schedule(__jni_impl::java::util::TimerTask arg0, __jni_impl::java::util::Date arg1)
	{
		__thiz.callMethod<void>(
			"schedule",
			"(Ljava/util/TimerTask;Ljava/util/Date;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Timer::schedule(__jni_impl::java::util::TimerTask arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"schedule",
			"(Ljava/util/TimerTask;J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Timer::schedule(__jni_impl::java::util::TimerTask arg0, __jni_impl::java::util::Date arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"schedule",
			"(Ljava/util/TimerTask;Ljava/util/Date;J)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Timer::schedule(__jni_impl::java::util::TimerTask arg0, jlong arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"schedule",
			"(Ljava/util/TimerTask;JJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void Timer::scheduleAtFixedRate(__jni_impl::java::util::TimerTask arg0, __jni_impl::java::util::Date arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"scheduleAtFixedRate",
			"(Ljava/util/TimerTask;Ljava/util/Date;J)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Timer::scheduleAtFixedRate(__jni_impl::java::util::TimerTask arg0, jlong arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"scheduleAtFixedRate",
			"(Ljava/util/TimerTask;JJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Timer : public __jni_impl::java::util::Timer
	{
	public:
		Timer(QAndroidJniObject obj) { __thiz = obj; }
		Timer()
		{
			__constructor();
		}
		Timer(jboolean arg0)
		{
			__constructor(
				arg0);
		}
		Timer(jstring arg0)
		{
			__constructor(
				arg0);
		}
		Timer(jstring arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util

