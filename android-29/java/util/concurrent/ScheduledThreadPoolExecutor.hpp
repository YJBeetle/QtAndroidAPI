#pragma once

#ifndef JAVA_UTIL_CONCURRENT_SCHEDULEDTHREADPOOLEXECUTOR
#define JAVA_UTIL_CONCURRENT_SCHEDULEDTHREADPOOLEXECUTOR

#include "../../../__JniBaseClass.hpp"
#include "AbstractExecutorService.hpp"
#include "ThreadPoolExecutor.hpp"

namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicLong;
}
namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}

namespace __jni_impl::java::util::concurrent
{
	class ScheduledThreadPoolExecutor : public __jni_impl::java::util::concurrent::ThreadPoolExecutor
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(jint arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(jint arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		
		// Methods
		void shutdown();
		void execute(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getQueue();
		QAndroidJniObject shutdownNow();
		QAndroidJniObject submit(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject submit(__jni_impl::__JniBaseClass arg0, jobject arg1);
		QAndroidJniObject scheduleAtFixedRate(__jni_impl::__JniBaseClass arg0, jlong arg1, jlong arg2, __jni_impl::java::util::concurrent::TimeUnit arg3);
		QAndroidJniObject scheduleWithFixedDelay(__jni_impl::__JniBaseClass arg0, jlong arg1, jlong arg2, __jni_impl::java::util::concurrent::TimeUnit arg3);
		void setRemoveOnCancelPolicy(jboolean arg0);
		jboolean getExecuteExistingDelayedTasksAfterShutdownPolicy();
		jboolean getContinueExistingPeriodicTasksAfterShutdownPolicy();
		void setContinueExistingPeriodicTasksAfterShutdownPolicy(jboolean arg0);
		void setExecuteExistingDelayedTasksAfterShutdownPolicy(jboolean arg0);
		jboolean getRemoveOnCancelPolicy();
		QAndroidJniObject schedule(__jni_impl::__JniBaseClass arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2);
	};
} // namespace __jni_impl::java::util::concurrent

#include "atomic/AtomicLong.hpp"
#include "TimeUnit.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void ScheduledThreadPoolExecutor::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ScheduledThreadPoolExecutor",
			"(I)V",
			arg0);
	}
	void ScheduledThreadPoolExecutor::__constructor(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ScheduledThreadPoolExecutor",
			"(ILjava/util/concurrent/RejectedExecutionHandler;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void ScheduledThreadPoolExecutor::__constructor(jint arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ScheduledThreadPoolExecutor",
			"(ILjava/util/concurrent/ThreadFactory;Ljava/util/concurrent/RejectedExecutionHandler;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	
	// Methods
	void ScheduledThreadPoolExecutor::shutdown()
	{
		__thiz.callMethod<void>(
			"shutdown",
			"()V");
	}
	void ScheduledThreadPoolExecutor::execute(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"execute",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ScheduledThreadPoolExecutor::getQueue()
	{
		return __thiz.callObjectMethod(
			"getQueue",
			"()Ljava/util/concurrent/BlockingQueue;");
	}
	QAndroidJniObject ScheduledThreadPoolExecutor::shutdownNow()
	{
		return __thiz.callObjectMethod(
			"shutdownNow",
			"()Ljava/util/List;");
	}
	QAndroidJniObject ScheduledThreadPoolExecutor::submit(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ScheduledThreadPoolExecutor::submit(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject ScheduledThreadPoolExecutor::scheduleAtFixedRate(__jni_impl::__JniBaseClass arg0, jlong arg1, jlong arg2, __jni_impl::java::util::concurrent::TimeUnit arg3)
	{
		return __thiz.callObjectMethod(
			"scheduleAtFixedRate",
			"(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	QAndroidJniObject ScheduledThreadPoolExecutor::scheduleWithFixedDelay(__jni_impl::__JniBaseClass arg0, jlong arg1, jlong arg2, __jni_impl::java::util::concurrent::TimeUnit arg3)
	{
		return __thiz.callObjectMethod(
			"scheduleWithFixedDelay",
			"(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void ScheduledThreadPoolExecutor::setRemoveOnCancelPolicy(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setRemoveOnCancelPolicy",
			"(Z)V",
			arg0);
	}
	jboolean ScheduledThreadPoolExecutor::getExecuteExistingDelayedTasksAfterShutdownPolicy()
	{
		return __thiz.callMethod<jboolean>(
			"getExecuteExistingDelayedTasksAfterShutdownPolicy",
			"()Z");
	}
	jboolean ScheduledThreadPoolExecutor::getContinueExistingPeriodicTasksAfterShutdownPolicy()
	{
		return __thiz.callMethod<jboolean>(
			"getContinueExistingPeriodicTasksAfterShutdownPolicy",
			"()Z");
	}
	void ScheduledThreadPoolExecutor::setContinueExistingPeriodicTasksAfterShutdownPolicy(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setContinueExistingPeriodicTasksAfterShutdownPolicy",
			"(Z)V",
			arg0);
	}
	void ScheduledThreadPoolExecutor::setExecuteExistingDelayedTasksAfterShutdownPolicy(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setExecuteExistingDelayedTasksAfterShutdownPolicy",
			"(Z)V",
			arg0);
	}
	jboolean ScheduledThreadPoolExecutor::getRemoveOnCancelPolicy()
	{
		return __thiz.callMethod<jboolean>(
			"getRemoveOnCancelPolicy",
			"()Z");
	}
	QAndroidJniObject ScheduledThreadPoolExecutor::schedule(__jni_impl::__JniBaseClass arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2)
	{
		return __thiz.callObjectMethod(
			"schedule",
			"(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class ScheduledThreadPoolExecutor : public __jni_impl::java::util::concurrent::ScheduledThreadPoolExecutor
	{
	public:
		ScheduledThreadPoolExecutor(QAndroidJniObject obj) { __thiz = obj; }
		ScheduledThreadPoolExecutor(jint arg0)
		{
			__constructor(
				arg0);
		}
		ScheduledThreadPoolExecutor(jint arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ScheduledThreadPoolExecutor(jint arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_SCHEDULEDTHREADPOOLEXECUTOR

