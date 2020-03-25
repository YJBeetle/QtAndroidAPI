#pragma once

#ifndef JAVA_UTIL_CONCURRENT_FORKJOINPOOL
#define JAVA_UTIL_CONCURRENT_FORKJOINPOOL

#include "../../../__JniBaseClass.hpp"
#include "AbstractExecutorService.hpp"

namespace __jni_impl::java::lang
{
	class RuntimePermission;
}
namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}
namespace __jni_impl::java::util::concurrent
{
	class ForkJoinTask;
}
namespace __jni_impl::java::util::concurrent
{
	class CountedCompleter;
}
namespace __jni_impl::java::util::concurrent
{
	class ForkJoinWorkerThread;
}
namespace __jni_impl::java::security
{
	class AccessControlContext;
}

namespace __jni_impl::java::util::concurrent
{
	class ForkJoinPool : public __jni_impl::java::util::concurrent::AbstractExecutorService
	{
	public:
		// Fields
		static QAndroidJniObject defaultForkJoinWorkerThreadFactory();
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor();
		void __constructor(jint arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, jboolean arg3, jint arg4, jint arg5, jint arg6, __jni_impl::__JniBaseClass arg7, jlong arg8, __jni_impl::java::util::concurrent::TimeUnit arg9);
		void __constructor(jint arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, jboolean arg3);
		
		// Methods
		QAndroidJniObject invoke(__jni_impl::java::util::concurrent::ForkJoinTask arg0);
		void shutdown();
		QAndroidJniObject toString();
		QAndroidJniObject getFactory();
		void execute(__jni_impl::__JniBaseClass arg0);
		void execute(__jni_impl::java::util::concurrent::ForkJoinTask arg0);
		QAndroidJniObject getUncaughtExceptionHandler();
		jboolean isShutdown();
		static jint getCommonPoolParallelism();
		jint getParallelism();
		QAndroidJniObject invokeAll(__jni_impl::__JniBaseClass arg0);
		jlong getQueuedTaskCount();
		jboolean awaitQuiescence(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		jboolean isTerminated();
		jboolean isQuiescent();
		static QAndroidJniObject commonPool();
		jint getPoolSize();
		jboolean getAsyncMode();
		jint getRunningThreadCount();
		jint getActiveThreadCount();
		jlong getStealCount();
		jint getQueuedSubmissionCount();
		jboolean hasQueuedSubmissions();
		QAndroidJniObject shutdownNow();
		jboolean isTerminating();
		jboolean awaitTermination(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		static void managedBlock(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject submit(__jni_impl::__JniBaseClass arg0, jobject arg1);
		QAndroidJniObject submit(__jni_impl::java::util::concurrent::ForkJoinTask arg0);
		QAndroidJniObject submit(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::util::concurrent

#include "../../lang/RuntimePermission.hpp"
#include "TimeUnit.hpp"
#include "ForkJoinTask.hpp"
#include "CountedCompleter.hpp"
#include "ForkJoinWorkerThread.hpp"
#include "../../security/AccessControlContext.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	QAndroidJniObject ForkJoinPool::defaultForkJoinWorkerThreadFactory()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.concurrent.ForkJoinPool",
			"defaultForkJoinWorkerThreadFactory",
			"Ljava/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory;");
	}
	
	// Constructors
	void ForkJoinPool::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ForkJoinPool",
			"(I)V",
			arg0);
	}
	void ForkJoinPool::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ForkJoinPool",
			"()V");
	}
	void ForkJoinPool::__constructor(jint arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, jboolean arg3, jint arg4, jint arg5, jint arg6, __jni_impl::__JniBaseClass arg7, jlong arg8, __jni_impl::java::util::concurrent::TimeUnit arg9)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ForkJoinPool",
			"(ILjava/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory;Ljava/lang/Thread$UncaughtExceptionHandler;ZIIILjava/util/function/Predicate;JLjava/util/concurrent/TimeUnit;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5,
			arg6,
			arg7.__jniObject().object(),
			arg8,
			arg9.__jniObject().object());
	}
	void ForkJoinPool::__constructor(jint arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, jboolean arg3)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ForkJoinPool",
			"(ILjava/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory;Ljava/lang/Thread$UncaughtExceptionHandler;Z)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3);
	}
	
	// Methods
	QAndroidJniObject ForkJoinPool::invoke(__jni_impl::java::util::concurrent::ForkJoinTask arg0)
	{
		return __thiz.callObjectMethod(
			"invoke",
			"(Ljava/util/concurrent/ForkJoinTask;)Ljava/lang/Object;",
			arg0.__jniObject().object());
	}
	void ForkJoinPool::shutdown()
	{
		__thiz.callMethod<void>(
			"shutdown",
			"()V");
	}
	QAndroidJniObject ForkJoinPool::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ForkJoinPool::getFactory()
	{
		return __thiz.callObjectMethod(
			"getFactory",
			"()Ljava/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory;");
	}
	void ForkJoinPool::execute(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"execute",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object());
	}
	void ForkJoinPool::execute(__jni_impl::java::util::concurrent::ForkJoinTask arg0)
	{
		__thiz.callMethod<void>(
			"execute",
			"(Ljava/util/concurrent/ForkJoinTask;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ForkJoinPool::getUncaughtExceptionHandler()
	{
		return __thiz.callObjectMethod(
			"getUncaughtExceptionHandler",
			"()Ljava/lang/Thread$UncaughtExceptionHandler;");
	}
	jboolean ForkJoinPool::isShutdown()
	{
		return __thiz.callMethod<jboolean>(
			"isShutdown",
			"()Z");
	}
	jint ForkJoinPool::getCommonPoolParallelism()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.concurrent.ForkJoinPool",
			"getCommonPoolParallelism",
			"()I");
	}
	jint ForkJoinPool::getParallelism()
	{
		return __thiz.callMethod<jint>(
			"getParallelism",
			"()I");
	}
	QAndroidJniObject ForkJoinPool::invokeAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"invokeAll",
			"(Ljava/util/Collection;)Ljava/util/List;",
			arg0.__jniObject().object());
	}
	jlong ForkJoinPool::getQueuedTaskCount()
	{
		return __thiz.callMethod<jlong>(
			"getQueuedTaskCount",
			"()J");
	}
	jboolean ForkJoinPool::awaitQuiescence(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jboolean>(
			"awaitQuiescence",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean ForkJoinPool::isTerminated()
	{
		return __thiz.callMethod<jboolean>(
			"isTerminated",
			"()Z");
	}
	jboolean ForkJoinPool::isQuiescent()
	{
		return __thiz.callMethod<jboolean>(
			"isQuiescent",
			"()Z");
	}
	QAndroidJniObject ForkJoinPool::commonPool()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.ForkJoinPool",
			"commonPool",
			"()Ljava/util/concurrent/ForkJoinPool;");
	}
	jint ForkJoinPool::getPoolSize()
	{
		return __thiz.callMethod<jint>(
			"getPoolSize",
			"()I");
	}
	jboolean ForkJoinPool::getAsyncMode()
	{
		return __thiz.callMethod<jboolean>(
			"getAsyncMode",
			"()Z");
	}
	jint ForkJoinPool::getRunningThreadCount()
	{
		return __thiz.callMethod<jint>(
			"getRunningThreadCount",
			"()I");
	}
	jint ForkJoinPool::getActiveThreadCount()
	{
		return __thiz.callMethod<jint>(
			"getActiveThreadCount",
			"()I");
	}
	jlong ForkJoinPool::getStealCount()
	{
		return __thiz.callMethod<jlong>(
			"getStealCount",
			"()J");
	}
	jint ForkJoinPool::getQueuedSubmissionCount()
	{
		return __thiz.callMethod<jint>(
			"getQueuedSubmissionCount",
			"()I");
	}
	jboolean ForkJoinPool::hasQueuedSubmissions()
	{
		return __thiz.callMethod<jboolean>(
			"hasQueuedSubmissions",
			"()Z");
	}
	QAndroidJniObject ForkJoinPool::shutdownNow()
	{
		return __thiz.callObjectMethod(
			"shutdownNow",
			"()Ljava/util/List;");
	}
	jboolean ForkJoinPool::isTerminating()
	{
		return __thiz.callMethod<jboolean>(
			"isTerminating",
			"()Z");
	}
	jboolean ForkJoinPool::awaitTermination(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jboolean>(
			"awaitTermination",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	void ForkJoinPool::managedBlock(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.concurrent.ForkJoinPool",
			"managedBlock",
			"(Ljava/util/concurrent/ForkJoinPool$ManagedBlocker;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ForkJoinPool::submit(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/ForkJoinTask;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject ForkJoinPool::submit(__jni_impl::java::util::concurrent::ForkJoinTask arg0)
	{
		return __thiz.callObjectMethod(
			"submit",
			"(Ljava/util/concurrent/ForkJoinTask;)Ljava/util/concurrent/ForkJoinTask;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ForkJoinPool::submit(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"submit",
			"(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/ForkJoinTask;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class ForkJoinPool : public __jni_impl::java::util::concurrent::ForkJoinPool
	{
	public:
		ForkJoinPool(QAndroidJniObject obj) { __thiz = obj; }
		ForkJoinPool(jint arg0)
		{
			__constructor(
				arg0);
		}
		ForkJoinPool()
		{
			__constructor();
		}
		ForkJoinPool(jint arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, jboolean arg3, jint arg4, jint arg5, jint arg6, __jni_impl::__JniBaseClass arg7, jlong arg8, __jni_impl::java::util::concurrent::TimeUnit arg9)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7,
				arg8,
				arg9);
		}
		ForkJoinPool(jint arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, jboolean arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_FORKJOINPOOL

