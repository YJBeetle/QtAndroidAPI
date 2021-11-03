#include "../../../JObject.hpp"
#include "./AbstractExecutorService.hpp"
#include "./TimeUnit.hpp"
#include "./ExecutorCompletionService.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	ExecutorCompletionService::ExecutorCompletionService(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ExecutorCompletionService::ExecutorCompletionService(JObject arg0)
		: JObject(
			"java.util.concurrent.ExecutorCompletionService",
			"(Ljava/util/concurrent/Executor;)V",
			arg0.object()
		) {}
	ExecutorCompletionService::ExecutorCompletionService(JObject arg0, JObject arg1)
		: JObject(
			"java.util.concurrent.ExecutorCompletionService",
			"(Ljava/util/concurrent/Executor;Ljava/util/concurrent/BlockingQueue;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	JObject ExecutorCompletionService::poll() const
	{
		return callObjectMethod(
			"poll",
			"()Ljava/util/concurrent/Future;"
		);
	}
	JObject ExecutorCompletionService::poll(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callObjectMethod(
			"poll",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Future;",
			arg0,
			arg1.object()
		);
	}
	JObject ExecutorCompletionService::submit(JObject arg0) const
	{
		return callObjectMethod(
			"submit",
			"(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;",
			arg0.object()
		);
	}
	JObject ExecutorCompletionService::submit(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	JObject ExecutorCompletionService::take() const
	{
		return callObjectMethod(
			"take",
			"()Ljava/util/concurrent/Future;"
		);
	}
} // namespace java::util::concurrent

