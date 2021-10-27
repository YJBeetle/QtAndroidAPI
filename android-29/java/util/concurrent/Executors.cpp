#include "./Executors.hpp"

namespace java::util::concurrent
{
	// Fields
	
	Executors::Executors(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Executors::callable(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"callable",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/Callable;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Executors::callable(__JniBaseClass arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"callable",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Callable;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Executors::defaultThreadFactory()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"defaultThreadFactory",
			"()Ljava/util/concurrent/ThreadFactory;"
		);
	}
	QAndroidJniObject Executors::newCachedThreadPool()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newCachedThreadPool",
			"()Ljava/util/concurrent/ExecutorService;"
		);
	}
	QAndroidJniObject Executors::newCachedThreadPool(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newCachedThreadPool",
			"(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ExecutorService;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Executors::newFixedThreadPool(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newFixedThreadPool",
			"(I)Ljava/util/concurrent/ExecutorService;",
			arg0
		);
	}
	QAndroidJniObject Executors::newFixedThreadPool(jint arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newFixedThreadPool",
			"(ILjava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ExecutorService;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Executors::newScheduledThreadPool(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newScheduledThreadPool",
			"(I)Ljava/util/concurrent/ScheduledExecutorService;",
			arg0
		);
	}
	QAndroidJniObject Executors::newScheduledThreadPool(jint arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newScheduledThreadPool",
			"(ILjava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ScheduledExecutorService;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Executors::newSingleThreadExecutor()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newSingleThreadExecutor",
			"()Ljava/util/concurrent/ExecutorService;"
		);
	}
	QAndroidJniObject Executors::newSingleThreadExecutor(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newSingleThreadExecutor",
			"(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ExecutorService;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Executors::newSingleThreadScheduledExecutor()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newSingleThreadScheduledExecutor",
			"()Ljava/util/concurrent/ScheduledExecutorService;"
		);
	}
	QAndroidJniObject Executors::newSingleThreadScheduledExecutor(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newSingleThreadScheduledExecutor",
			"(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ScheduledExecutorService;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Executors::newWorkStealingPool()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newWorkStealingPool",
			"()Ljava/util/concurrent/ExecutorService;"
		);
	}
	QAndroidJniObject Executors::newWorkStealingPool(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newWorkStealingPool",
			"(I)Ljava/util/concurrent/ExecutorService;",
			arg0
		);
	}
	QAndroidJniObject Executors::privilegedCallable(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"privilegedCallable",
			"(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Callable;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Executors::privilegedCallableUsingCurrentClassLoader(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"privilegedCallableUsingCurrentClassLoader",
			"(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Callable;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Executors::privilegedThreadFactory()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"privilegedThreadFactory",
			"()Ljava/util/concurrent/ThreadFactory;"
		);
	}
	QAndroidJniObject Executors::unconfigurableExecutorService(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"unconfigurableExecutorService",
			"(Ljava/util/concurrent/ExecutorService;)Ljava/util/concurrent/ExecutorService;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Executors::unconfigurableScheduledExecutorService(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"unconfigurableScheduledExecutorService",
			"(Ljava/util/concurrent/ScheduledExecutorService;)Ljava/util/concurrent/ScheduledExecutorService;",
			arg0.__jniObject().object()
		);
	}
} // namespace java::util::concurrent

