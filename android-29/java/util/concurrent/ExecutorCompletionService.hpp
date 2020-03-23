#pragma once

#ifndef JAVA_UTIL_CONCURRENT_EXECUTORCOMPLETIONSERVICE
#define JAVA_UTIL_CONCURRENT_EXECUTORCOMPLETIONSERVICE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::concurrent
{
	class AbstractExecutorService;
}
namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}

namespace __jni_impl::java::util::concurrent
{
	class ExecutorCompletionService : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		QAndroidJniObject poll(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		QAndroidJniObject poll();
		QAndroidJniObject take();
		QAndroidJniObject submit(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject submit(__jni_impl::__JniBaseClass arg0, jobject arg1);
	};
} // namespace __jni_impl::java::util::concurrent

#include "AbstractExecutorService.hpp"
#include "TimeUnit.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void ExecutorCompletionService::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ExecutorCompletionService",
			"(Ljava/util/concurrent/Executor;)V",
			arg0.__jniObject().object());
	}
	void ExecutorCompletionService::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ExecutorCompletionService",
			"(Ljava/util/concurrent/Executor;Ljava/util/concurrent/BlockingQueue;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject ExecutorCompletionService::poll(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callObjectMethod(
			"poll",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Future;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject ExecutorCompletionService::poll()
	{
		return __thiz.callObjectMethod(
			"poll",
			"()Ljava/util/concurrent/Future;");
	}
	QAndroidJniObject ExecutorCompletionService::take()
	{
		return __thiz.callObjectMethod(
			"take",
			"()Ljava/util/concurrent/Future;");
	}
	QAndroidJniObject ExecutorCompletionService::submit(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"submit",
			"(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ExecutorCompletionService::submit(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class ExecutorCompletionService : public __jni_impl::java::util::concurrent::ExecutorCompletionService
	{
	public:
		ExecutorCompletionService(QAndroidJniObject obj) { __thiz = obj; }
		ExecutorCompletionService(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		ExecutorCompletionService(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_EXECUTORCOMPLETIONSERVICE

