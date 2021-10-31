#include "./TimeUnit.hpp"
#include "./atomic/AtomicLong.hpp"
#include "./ScheduledThreadPoolExecutor.hpp"

namespace java::util::concurrent
{
	// Fields
	
	ScheduledThreadPoolExecutor::ScheduledThreadPoolExecutor(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ScheduledThreadPoolExecutor::ScheduledThreadPoolExecutor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ScheduledThreadPoolExecutor",
			"(I)V",
			arg0
		);
	}
	ScheduledThreadPoolExecutor::ScheduledThreadPoolExecutor(jint arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ScheduledThreadPoolExecutor",
			"(ILjava/util/concurrent/RejectedExecutionHandler;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	ScheduledThreadPoolExecutor::ScheduledThreadPoolExecutor(jint arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ScheduledThreadPoolExecutor",
			"(ILjava/util/concurrent/ThreadFactory;Ljava/util/concurrent/RejectedExecutionHandler;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	void ScheduledThreadPoolExecutor::execute(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"execute",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ScheduledThreadPoolExecutor::getContinueExistingPeriodicTasksAfterShutdownPolicy()
	{
		return __thiz.callMethod<jboolean>(
			"getContinueExistingPeriodicTasksAfterShutdownPolicy",
			"()Z"
		);
	}
	jboolean ScheduledThreadPoolExecutor::getExecuteExistingDelayedTasksAfterShutdownPolicy()
	{
		return __thiz.callMethod<jboolean>(
			"getExecuteExistingDelayedTasksAfterShutdownPolicy",
			"()Z"
		);
	}
	QAndroidJniObject ScheduledThreadPoolExecutor::getQueue()
	{
		return __thiz.callObjectMethod(
			"getQueue",
			"()Ljava/util/concurrent/BlockingQueue;"
		);
	}
	jboolean ScheduledThreadPoolExecutor::getRemoveOnCancelPolicy()
	{
		return __thiz.callMethod<jboolean>(
			"getRemoveOnCancelPolicy",
			"()Z"
		);
	}
	QAndroidJniObject ScheduledThreadPoolExecutor::schedule(__JniBaseClass arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return __thiz.callObjectMethod(
			"schedule",
			"(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ScheduledThreadPoolExecutor::scheduleAtFixedRate(__JniBaseClass arg0, jlong arg1, jlong arg2, java::util::concurrent::TimeUnit arg3)
	{
		return __thiz.callObjectMethod(
			"scheduleAtFixedRate",
			"(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ScheduledThreadPoolExecutor::scheduleWithFixedDelay(__JniBaseClass arg0, jlong arg1, jlong arg2, java::util::concurrent::TimeUnit arg3)
	{
		return __thiz.callObjectMethod(
			"scheduleWithFixedDelay",
			"(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void ScheduledThreadPoolExecutor::setContinueExistingPeriodicTasksAfterShutdownPolicy(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setContinueExistingPeriodicTasksAfterShutdownPolicy",
			"(Z)V",
			arg0
		);
	}
	void ScheduledThreadPoolExecutor::setExecuteExistingDelayedTasksAfterShutdownPolicy(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setExecuteExistingDelayedTasksAfterShutdownPolicy",
			"(Z)V",
			arg0
		);
	}
	void ScheduledThreadPoolExecutor::setRemoveOnCancelPolicy(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setRemoveOnCancelPolicy",
			"(Z)V",
			arg0
		);
	}
	void ScheduledThreadPoolExecutor::shutdown()
	{
		__thiz.callMethod<void>(
			"shutdown",
			"()V"
		);
	}
	QAndroidJniObject ScheduledThreadPoolExecutor::shutdownNow()
	{
		return __thiz.callObjectMethod(
			"shutdownNow",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject ScheduledThreadPoolExecutor::submit(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ScheduledThreadPoolExecutor::submit(__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace java::util::concurrent

