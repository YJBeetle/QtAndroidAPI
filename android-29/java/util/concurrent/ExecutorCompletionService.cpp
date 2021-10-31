#include "./AbstractExecutorService.hpp"
#include "./TimeUnit.hpp"
#include "./ExecutorCompletionService.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	ExecutorCompletionService::ExecutorCompletionService(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ExecutorCompletionService::ExecutorCompletionService(__JniBaseClass arg0)
		: __JniBaseClass(
			"java.util.concurrent.ExecutorCompletionService",
			"(Ljava/util/concurrent/Executor;)V",
			arg0.object()
		) {}
	ExecutorCompletionService::ExecutorCompletionService(__JniBaseClass arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"java.util.concurrent.ExecutorCompletionService",
			"(Ljava/util/concurrent/Executor;Ljava/util/concurrent/BlockingQueue;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	QAndroidJniObject ExecutorCompletionService::poll()
	{
		return callObjectMethod(
			"poll",
			"()Ljava/util/concurrent/Future;"
		);
	}
	QAndroidJniObject ExecutorCompletionService::poll(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callObjectMethod(
			"poll",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Future;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject ExecutorCompletionService::submit(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"submit",
			"(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;",
			arg0.object()
		);
	}
	QAndroidJniObject ExecutorCompletionService::submit(__JniBaseClass arg0, jobject arg1)
	{
		return callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject ExecutorCompletionService::take()
	{
		return callObjectMethod(
			"take",
			"()Ljava/util/concurrent/Future;"
		);
	}
} // namespace java::util::concurrent

