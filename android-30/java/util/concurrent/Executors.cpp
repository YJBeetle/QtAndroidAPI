#include "../../../JObject.hpp"
#include "./Executors.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	Executors::Executors(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject Executors::callable(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"callable",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/Callable;",
			arg0.object()
		);
	}
	JObject Executors::callable(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"callable",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Callable;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	JObject Executors::defaultThreadFactory()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"defaultThreadFactory",
			"()Ljava/util/concurrent/ThreadFactory;"
		);
	}
	JObject Executors::newCachedThreadPool()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newCachedThreadPool",
			"()Ljava/util/concurrent/ExecutorService;"
		);
	}
	JObject Executors::newCachedThreadPool(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newCachedThreadPool",
			"(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ExecutorService;",
			arg0.object()
		);
	}
	JObject Executors::newFixedThreadPool(jint arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newFixedThreadPool",
			"(I)Ljava/util/concurrent/ExecutorService;",
			arg0
		);
	}
	JObject Executors::newFixedThreadPool(jint arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newFixedThreadPool",
			"(ILjava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ExecutorService;",
			arg0,
			arg1.object()
		);
	}
	JObject Executors::newScheduledThreadPool(jint arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newScheduledThreadPool",
			"(I)Ljava/util/concurrent/ScheduledExecutorService;",
			arg0
		);
	}
	JObject Executors::newScheduledThreadPool(jint arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newScheduledThreadPool",
			"(ILjava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ScheduledExecutorService;",
			arg0,
			arg1.object()
		);
	}
	JObject Executors::newSingleThreadExecutor()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newSingleThreadExecutor",
			"()Ljava/util/concurrent/ExecutorService;"
		);
	}
	JObject Executors::newSingleThreadExecutor(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newSingleThreadExecutor",
			"(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ExecutorService;",
			arg0.object()
		);
	}
	JObject Executors::newSingleThreadScheduledExecutor()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newSingleThreadScheduledExecutor",
			"()Ljava/util/concurrent/ScheduledExecutorService;"
		);
	}
	JObject Executors::newSingleThreadScheduledExecutor(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newSingleThreadScheduledExecutor",
			"(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ScheduledExecutorService;",
			arg0.object()
		);
	}
	JObject Executors::newWorkStealingPool()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newWorkStealingPool",
			"()Ljava/util/concurrent/ExecutorService;"
		);
	}
	JObject Executors::newWorkStealingPool(jint arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newWorkStealingPool",
			"(I)Ljava/util/concurrent/ExecutorService;",
			arg0
		);
	}
	JObject Executors::privilegedCallable(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"privilegedCallable",
			"(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Callable;",
			arg0.object()
		);
	}
	JObject Executors::privilegedCallableUsingCurrentClassLoader(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"privilegedCallableUsingCurrentClassLoader",
			"(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Callable;",
			arg0.object()
		);
	}
	JObject Executors::privilegedThreadFactory()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"privilegedThreadFactory",
			"()Ljava/util/concurrent/ThreadFactory;"
		);
	}
	JObject Executors::unconfigurableExecutorService(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"unconfigurableExecutorService",
			"(Ljava/util/concurrent/ExecutorService;)Ljava/util/concurrent/ExecutorService;",
			arg0.object()
		);
	}
	JObject Executors::unconfigurableScheduledExecutorService(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"unconfigurableScheduledExecutorService",
			"(Ljava/util/concurrent/ScheduledExecutorService;)Ljava/util/concurrent/ScheduledExecutorService;",
			arg0.object()
		);
	}
} // namespace java::util::concurrent

