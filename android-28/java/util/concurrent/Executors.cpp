#include "./Executors.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	Executors::Executors(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass Executors::callable(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"callable",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/Callable;",
			arg0.object()
		);
	}
	__JniBaseClass Executors::callable(__JniBaseClass arg0, jobject arg1)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"callable",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Callable;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass Executors::defaultThreadFactory()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"defaultThreadFactory",
			"()Ljava/util/concurrent/ThreadFactory;"
		);
	}
	__JniBaseClass Executors::newCachedThreadPool()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newCachedThreadPool",
			"()Ljava/util/concurrent/ExecutorService;"
		);
	}
	__JniBaseClass Executors::newCachedThreadPool(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newCachedThreadPool",
			"(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ExecutorService;",
			arg0.object()
		);
	}
	__JniBaseClass Executors::newFixedThreadPool(jint arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newFixedThreadPool",
			"(I)Ljava/util/concurrent/ExecutorService;",
			arg0
		);
	}
	__JniBaseClass Executors::newFixedThreadPool(jint arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newFixedThreadPool",
			"(ILjava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ExecutorService;",
			arg0,
			arg1.object()
		);
	}
	__JniBaseClass Executors::newScheduledThreadPool(jint arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newScheduledThreadPool",
			"(I)Ljava/util/concurrent/ScheduledExecutorService;",
			arg0
		);
	}
	__JniBaseClass Executors::newScheduledThreadPool(jint arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newScheduledThreadPool",
			"(ILjava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ScheduledExecutorService;",
			arg0,
			arg1.object()
		);
	}
	__JniBaseClass Executors::newSingleThreadExecutor()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newSingleThreadExecutor",
			"()Ljava/util/concurrent/ExecutorService;"
		);
	}
	__JniBaseClass Executors::newSingleThreadExecutor(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newSingleThreadExecutor",
			"(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ExecutorService;",
			arg0.object()
		);
	}
	__JniBaseClass Executors::newSingleThreadScheduledExecutor()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newSingleThreadScheduledExecutor",
			"()Ljava/util/concurrent/ScheduledExecutorService;"
		);
	}
	__JniBaseClass Executors::newSingleThreadScheduledExecutor(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newSingleThreadScheduledExecutor",
			"(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ScheduledExecutorService;",
			arg0.object()
		);
	}
	__JniBaseClass Executors::newWorkStealingPool()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newWorkStealingPool",
			"()Ljava/util/concurrent/ExecutorService;"
		);
	}
	__JniBaseClass Executors::newWorkStealingPool(jint arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newWorkStealingPool",
			"(I)Ljava/util/concurrent/ExecutorService;",
			arg0
		);
	}
	__JniBaseClass Executors::privilegedCallable(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"privilegedCallable",
			"(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Callable;",
			arg0.object()
		);
	}
	__JniBaseClass Executors::privilegedCallableUsingCurrentClassLoader(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"privilegedCallableUsingCurrentClassLoader",
			"(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Callable;",
			arg0.object()
		);
	}
	__JniBaseClass Executors::privilegedThreadFactory()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"privilegedThreadFactory",
			"()Ljava/util/concurrent/ThreadFactory;"
		);
	}
	__JniBaseClass Executors::unconfigurableExecutorService(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"unconfigurableExecutorService",
			"(Ljava/util/concurrent/ExecutorService;)Ljava/util/concurrent/ExecutorService;",
			arg0.object()
		);
	}
	__JniBaseClass Executors::unconfigurableScheduledExecutorService(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"unconfigurableScheduledExecutorService",
			"(Ljava/util/concurrent/ScheduledExecutorService;)Ljava/util/concurrent/ScheduledExecutorService;",
			arg0.object()
		);
	}
} // namespace java::util::concurrent

