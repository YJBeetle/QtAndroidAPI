#include "./TimeUnit.hpp"
#include "./atomic/AtomicLong.hpp"
#include "./ScheduledThreadPoolExecutor.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	ScheduledThreadPoolExecutor::ScheduledThreadPoolExecutor(QJniObject obj) : java::util::concurrent::ThreadPoolExecutor(obj) {}
	
	// Constructors
	ScheduledThreadPoolExecutor::ScheduledThreadPoolExecutor(jint arg0)
		: java::util::concurrent::ThreadPoolExecutor(
			"java.util.concurrent.ScheduledThreadPoolExecutor",
			"(I)V",
			arg0
		) {}
	ScheduledThreadPoolExecutor::ScheduledThreadPoolExecutor(jint arg0, __JniBaseClass arg1)
		: java::util::concurrent::ThreadPoolExecutor(
			"java.util.concurrent.ScheduledThreadPoolExecutor",
			"(ILjava/util/concurrent/RejectedExecutionHandler;)V",
			arg0,
			arg1.object()
		) {}
	ScheduledThreadPoolExecutor::ScheduledThreadPoolExecutor(jint arg0, __JniBaseClass arg1, __JniBaseClass arg2)
		: java::util::concurrent::ThreadPoolExecutor(
			"java.util.concurrent.ScheduledThreadPoolExecutor",
			"(ILjava/util/concurrent/ThreadFactory;Ljava/util/concurrent/RejectedExecutionHandler;)V",
			arg0,
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	void ScheduledThreadPoolExecutor::execute(__JniBaseClass arg0)
	{
		callMethod<void>(
			"execute",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	jboolean ScheduledThreadPoolExecutor::getContinueExistingPeriodicTasksAfterShutdownPolicy()
	{
		return callMethod<jboolean>(
			"getContinueExistingPeriodicTasksAfterShutdownPolicy",
			"()Z"
		);
	}
	jboolean ScheduledThreadPoolExecutor::getExecuteExistingDelayedTasksAfterShutdownPolicy()
	{
		return callMethod<jboolean>(
			"getExecuteExistingDelayedTasksAfterShutdownPolicy",
			"()Z"
		);
	}
	__JniBaseClass ScheduledThreadPoolExecutor::getQueue()
	{
		return callObjectMethod(
			"getQueue",
			"()Ljava/util/concurrent/BlockingQueue;"
		);
	}
	jboolean ScheduledThreadPoolExecutor::getRemoveOnCancelPolicy()
	{
		return callMethod<jboolean>(
			"getRemoveOnCancelPolicy",
			"()Z"
		);
	}
	__JniBaseClass ScheduledThreadPoolExecutor::schedule(__JniBaseClass arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return callObjectMethod(
			"schedule",
			"(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	__JniBaseClass ScheduledThreadPoolExecutor::scheduleAtFixedRate(__JniBaseClass arg0, jlong arg1, jlong arg2, java::util::concurrent::TimeUnit arg3)
	{
		return callObjectMethod(
			"scheduleAtFixedRate",
			"(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	__JniBaseClass ScheduledThreadPoolExecutor::scheduleWithFixedDelay(__JniBaseClass arg0, jlong arg1, jlong arg2, java::util::concurrent::TimeUnit arg3)
	{
		return callObjectMethod(
			"scheduleWithFixedDelay",
			"(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	void ScheduledThreadPoolExecutor::setContinueExistingPeriodicTasksAfterShutdownPolicy(jboolean arg0)
	{
		callMethod<void>(
			"setContinueExistingPeriodicTasksAfterShutdownPolicy",
			"(Z)V",
			arg0
		);
	}
	void ScheduledThreadPoolExecutor::setExecuteExistingDelayedTasksAfterShutdownPolicy(jboolean arg0)
	{
		callMethod<void>(
			"setExecuteExistingDelayedTasksAfterShutdownPolicy",
			"(Z)V",
			arg0
		);
	}
	void ScheduledThreadPoolExecutor::setRemoveOnCancelPolicy(jboolean arg0)
	{
		callMethod<void>(
			"setRemoveOnCancelPolicy",
			"(Z)V",
			arg0
		);
	}
	void ScheduledThreadPoolExecutor::shutdown()
	{
		callMethod<void>(
			"shutdown",
			"()V"
		);
	}
	__JniBaseClass ScheduledThreadPoolExecutor::shutdownNow()
	{
		return callObjectMethod(
			"shutdownNow",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass ScheduledThreadPoolExecutor::submit(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;",
			arg0.object()
		);
	}
	__JniBaseClass ScheduledThreadPoolExecutor::submit(__JniBaseClass arg0, jobject arg1)
	{
		return callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;",
			arg0.object(),
			arg1
		);
	}
} // namespace java::util::concurrent

