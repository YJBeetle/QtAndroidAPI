#include "./AbstractExecutorService.hpp"
#include "./TimeUnit.hpp"
#include "./ExecutorCompletionService.hpp"

namespace java::util::concurrent
{
	// Fields
	
	ExecutorCompletionService::ExecutorCompletionService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ExecutorCompletionService::ExecutorCompletionService(__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ExecutorCompletionService",
			"(Ljava/util/concurrent/Executor;)V",
			arg0.__jniObject().object()
		);
	}
	ExecutorCompletionService::ExecutorCompletionService(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ExecutorCompletionService",
			"(Ljava/util/concurrent/Executor;Ljava/util/concurrent/BlockingQueue;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ExecutorCompletionService::poll()
	{
		return __thiz.callObjectMethod(
			"poll",
			"()Ljava/util/concurrent/Future;"
		);
	}
	QAndroidJniObject ExecutorCompletionService::poll(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callObjectMethod(
			"poll",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Future;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ExecutorCompletionService::submit(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"submit",
			"(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ExecutorCompletionService::submit(__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ExecutorCompletionService::take()
	{
		return __thiz.callObjectMethod(
			"take",
			"()Ljava/util/concurrent/Future;"
		);
	}
} // namespace java::util::concurrent

