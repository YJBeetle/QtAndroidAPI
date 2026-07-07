#pragma once

#include "../../../JObject.hpp"
#include "./Executors.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject Executors::callable(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"callable",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/Callable;",
			arg0.object()
		);
	}
	inline JObject Executors::callable(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"callable",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Callable;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	inline JObject Executors::defaultThreadFactory()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"defaultThreadFactory",
			"()Ljava/util/concurrent/ThreadFactory;"
		);
	}
	inline JObject Executors::newCachedThreadPool()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newCachedThreadPool",
			"()Ljava/util/concurrent/ExecutorService;"
		);
	}
	inline JObject Executors::newCachedThreadPool(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newCachedThreadPool",
			"(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ExecutorService;",
			arg0.object()
		);
	}
	inline JObject Executors::newFixedThreadPool(jint arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newFixedThreadPool",
			"(I)Ljava/util/concurrent/ExecutorService;",
			arg0
		);
	}
	inline JObject Executors::newFixedThreadPool(jint arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newFixedThreadPool",
			"(ILjava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ExecutorService;",
			arg0,
			arg1.object()
		);
	}
	inline JObject Executors::newScheduledThreadPool(jint arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newScheduledThreadPool",
			"(I)Ljava/util/concurrent/ScheduledExecutorService;",
			arg0
		);
	}
	inline JObject Executors::newScheduledThreadPool(jint arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newScheduledThreadPool",
			"(ILjava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ScheduledExecutorService;",
			arg0,
			arg1.object()
		);
	}
	inline JObject Executors::newSingleThreadExecutor()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newSingleThreadExecutor",
			"()Ljava/util/concurrent/ExecutorService;"
		);
	}
	inline JObject Executors::newSingleThreadExecutor(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newSingleThreadExecutor",
			"(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ExecutorService;",
			arg0.object()
		);
	}
	inline JObject Executors::newSingleThreadScheduledExecutor()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newSingleThreadScheduledExecutor",
			"()Ljava/util/concurrent/ScheduledExecutorService;"
		);
	}
	inline JObject Executors::newSingleThreadScheduledExecutor(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newSingleThreadScheduledExecutor",
			"(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ScheduledExecutorService;",
			arg0.object()
		);
	}
	inline JObject Executors::newThreadPerTaskExecutor(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newThreadPerTaskExecutor",
			"(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ExecutorService;",
			arg0.object()
		);
	}
	inline JObject Executors::newVirtualThreadPerTaskExecutor()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newVirtualThreadPerTaskExecutor",
			"()Ljava/util/concurrent/ExecutorService;"
		);
	}
	inline JObject Executors::newWorkStealingPool()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newWorkStealingPool",
			"()Ljava/util/concurrent/ExecutorService;"
		);
	}
	inline JObject Executors::newWorkStealingPool(jint arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newWorkStealingPool",
			"(I)Ljava/util/concurrent/ExecutorService;",
			arg0
		);
	}
	inline JObject Executors::privilegedCallable(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"privilegedCallable",
			"(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Callable;",
			arg0.object()
		);
	}
	inline JObject Executors::privilegedCallableUsingCurrentClassLoader(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"privilegedCallableUsingCurrentClassLoader",
			"(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Callable;",
			arg0.object()
		);
	}
	inline JObject Executors::privilegedThreadFactory()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"privilegedThreadFactory",
			"()Ljava/util/concurrent/ThreadFactory;"
		);
	}
	inline JObject Executors::unconfigurableExecutorService(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"unconfigurableExecutorService",
			"(Ljava/util/concurrent/ExecutorService;)Ljava/util/concurrent/ExecutorService;",
			arg0.object()
		);
	}
	inline JObject Executors::unconfigurableScheduledExecutorService(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"unconfigurableScheduledExecutorService",
			"(Ljava/util/concurrent/ScheduledExecutorService;)Ljava/util/concurrent/ScheduledExecutorService;",
			arg0.object()
		);
	}
} // namespace java::util::concurrent

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent;
#endif
