#pragma once

#ifndef JAVA_UTIL_CONCURRENT_EXECUTORS
#define JAVA_UTIL_CONCURRENT_EXECUTORS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::util::concurrent
{
	class Executors : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject callable(__jni_impl::__JniBaseClass arg0, jobject arg1);
		static QAndroidJniObject callable(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject defaultThreadFactory();
		static QAndroidJniObject newFixedThreadPool(jint arg0);
		static QAndroidJniObject newFixedThreadPool(jint arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject newWorkStealingPool();
		static QAndroidJniObject newWorkStealingPool(jint arg0);
		static QAndroidJniObject newSingleThreadExecutor();
		static QAndroidJniObject newSingleThreadExecutor(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject newCachedThreadPool(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject newCachedThreadPool();
		static QAndroidJniObject newSingleThreadScheduledExecutor(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject newSingleThreadScheduledExecutor();
		static QAndroidJniObject newScheduledThreadPool(jint arg0);
		static QAndroidJniObject newScheduledThreadPool(jint arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject unconfigurableExecutorService(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject unconfigurableScheduledExecutorService(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject privilegedThreadFactory();
		static QAndroidJniObject privilegedCallable(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject privilegedCallableUsingCurrentClassLoader(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::util::concurrent


namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void Executors::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.Executors",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Executors::callable(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"callable",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Callable;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Executors::callable(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"callable",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/Callable;",
			arg0.__jniObject().object()
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
	QAndroidJniObject Executors::newFixedThreadPool(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newFixedThreadPool",
			"(I)Ljava/util/concurrent/ExecutorService;",
			arg0
		);
	}
	QAndroidJniObject Executors::newFixedThreadPool(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newFixedThreadPool",
			"(ILjava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ExecutorService;",
			arg0,
			arg1.__jniObject().object()
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
	QAndroidJniObject Executors::newSingleThreadExecutor()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newSingleThreadExecutor",
			"()Ljava/util/concurrent/ExecutorService;"
		);
	}
	QAndroidJniObject Executors::newSingleThreadExecutor(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newSingleThreadExecutor",
			"(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ExecutorService;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Executors::newCachedThreadPool(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newCachedThreadPool",
			"(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ExecutorService;",
			arg0.__jniObject().object()
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
	QAndroidJniObject Executors::newSingleThreadScheduledExecutor(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newSingleThreadScheduledExecutor",
			"(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ScheduledExecutorService;",
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
	QAndroidJniObject Executors::newScheduledThreadPool(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newScheduledThreadPool",
			"(I)Ljava/util/concurrent/ScheduledExecutorService;",
			arg0
		);
	}
	QAndroidJniObject Executors::newScheduledThreadPool(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"newScheduledThreadPool",
			"(ILjava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ScheduledExecutorService;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Executors::unconfigurableExecutorService(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"unconfigurableExecutorService",
			"(Ljava/util/concurrent/ExecutorService;)Ljava/util/concurrent/ExecutorService;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Executors::unconfigurableScheduledExecutorService(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"unconfigurableScheduledExecutorService",
			"(Ljava/util/concurrent/ScheduledExecutorService;)Ljava/util/concurrent/ScheduledExecutorService;",
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
	QAndroidJniObject Executors::privilegedCallable(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"privilegedCallable",
			"(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Callable;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Executors::privilegedCallableUsingCurrentClassLoader(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.Executors",
			"privilegedCallableUsingCurrentClassLoader",
			"(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Callable;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class Executors : public __jni_impl::java::util::concurrent::Executors
	{
	public:
		Executors(QAndroidJniObject obj) { __thiz = obj; }
		Executors()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_EXECUTORS

