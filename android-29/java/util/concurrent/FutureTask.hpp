#pragma once

#ifndef JAVA_UTIL_CONCURRENT_FUTURETASK
#define JAVA_UTIL_CONCURRENT_FUTURETASK

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Thread;
}
namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}

namespace __jni_impl::java::util::concurrent
{
	class FutureTask : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0, jobject arg1);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		void run();
		QAndroidJniObject get(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		QAndroidJniObject get();
		QAndroidJniObject toString();
		jboolean cancel(jboolean arg0);
		jboolean isDone();
		jboolean isCancelled();
	};
} // namespace __jni_impl::java::util::concurrent

#include "../../lang/Thread.hpp"
#include "TimeUnit.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void FutureTask::__constructor(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.FutureTask",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void FutureTask::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.FutureTask",
			"(Ljava/util/concurrent/Callable;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void FutureTask::run()
	{
		__thiz.callMethod<void>(
			"run",
			"()V");
	}
	QAndroidJniObject FutureTask::get(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject FutureTask::get()
	{
		return __thiz.callObjectMethod(
			"get",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject FutureTask::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jboolean FutureTask::cancel(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"cancel",
			"(Z)Z",
			arg0);
	}
	jboolean FutureTask::isDone()
	{
		return __thiz.callMethod<jboolean>(
			"isDone",
			"()Z");
	}
	jboolean FutureTask::isCancelled()
	{
		return __thiz.callMethod<jboolean>(
			"isCancelled",
			"()Z");
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class FutureTask : public __jni_impl::java::util::concurrent::FutureTask
	{
	public:
		FutureTask(QAndroidJniObject obj) { __thiz = obj; }
		FutureTask(__jni_impl::__JniBaseClass arg0, jobject arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		FutureTask(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_FUTURETASK

