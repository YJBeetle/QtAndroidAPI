#pragma once

#include "../../../JObject.hpp"
#include "./AbstractExecutorService.def.hpp"
#include "./TimeUnit.def.hpp"
#include "./ExecutorCompletionService.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline ExecutorCompletionService::ExecutorCompletionService(JObject arg0)
		: JObject(
			"java.util.concurrent.ExecutorCompletionService",
			"(Ljava/util/concurrent/Executor;)V",
			arg0.object()
		) {}
	inline ExecutorCompletionService::ExecutorCompletionService(JObject arg0, JObject arg1)
		: JObject(
			"java.util.concurrent.ExecutorCompletionService",
			"(Ljava/util/concurrent/Executor;Ljava/util/concurrent/BlockingQueue;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline JObject ExecutorCompletionService::poll() const
	{
		return callObjectMethod(
			"poll",
			"()Ljava/util/concurrent/Future;"
		);
	}
	inline JObject ExecutorCompletionService::poll(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callObjectMethod(
			"poll",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Future;",
			arg0,
			arg1.object()
		);
	}
	inline JObject ExecutorCompletionService::submit(JObject arg0) const
	{
		return callObjectMethod(
			"submit",
			"(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;",
			arg0.object()
		);
	}
	inline JObject ExecutorCompletionService::submit(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	inline JObject ExecutorCompletionService::take() const
	{
		return callObjectMethod(
			"take",
			"()Ljava/util/concurrent/Future;"
		);
	}
} // namespace java::util::concurrent

// Base class headers

