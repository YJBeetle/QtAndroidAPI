#pragma once

#ifndef JAVA_UTIL_CONCURRENT_THREADPOOLEXECUTOR
#define JAVA_UTIL_CONCURRENT_THREADPOOLEXECUTOR

#include "../../../__JniBaseClass.hpp"
#include "AbstractExecutorService.hpp"

namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicInteger;
}
namespace __jni_impl::java::util::concurrent::locks
{
	class ReentrantLock;
}
namespace __jni_impl::java::util
{
	class HashSet;
}
namespace __jni_impl::java::lang
{
	class RuntimePermission;
}
namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}
namespace __jni_impl::java::lang
{
	class Thread;
}

namespace __jni_impl::java::util::concurrent
{
	class ThreadPoolExecutor : public __jni_impl::java::util::concurrent::AbstractExecutorService
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jint arg1, jlong arg2, __jni_impl::java::util::concurrent::TimeUnit arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::__JniBaseClass arg5);
		void __constructor(jint arg0, jint arg1, jlong arg2, __jni_impl::java::util::concurrent::TimeUnit arg3, __jni_impl::__JniBaseClass arg4);
		void __constructor(jint arg0, jint arg1, jlong arg2, __jni_impl::java::util::concurrent::TimeUnit arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::__JniBaseClass arg5, __jni_impl::__JniBaseClass arg6);
		
		// Methods
		jboolean remove(__jni_impl::__JniBaseClass arg0);
		void shutdown();
		jstring toString();
		void execute(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getQueue();
		jboolean isShutdown();
		void purge();
		jboolean isTerminated();
		jint getPoolSize();
		QAndroidJniObject shutdownNow();
		jboolean isTerminating();
		jboolean awaitTermination(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		void allowCoreThreadTimeOut(jboolean arg0);
		jboolean allowsCoreThreadTimeOut();
		void setThreadFactory(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getThreadFactory();
		void setRejectedExecutionHandler(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getRejectedExecutionHandler();
		void setCorePoolSize(jint arg0);
		jint getCorePoolSize();
		jboolean prestartCoreThread();
		jint prestartAllCoreThreads();
		void setMaximumPoolSize(jint arg0);
		jint getMaximumPoolSize();
		void setKeepAliveTime(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		jlong getKeepAliveTime(__jni_impl::java::util::concurrent::TimeUnit arg0);
		jint getActiveCount();
		jint getLargestPoolSize();
		jlong getTaskCount();
		jlong getCompletedTaskCount();
	};
} // namespace __jni_impl::java::util::concurrent

#include "atomic/AtomicInteger.hpp"
#include "locks/ReentrantLock.hpp"
#include "../HashSet.hpp"
#include "../../lang/RuntimePermission.hpp"
#include "TimeUnit.hpp"
#include "../../lang/Thread.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void ThreadPoolExecutor::__constructor(jint arg0, jint arg1, jlong arg2, __jni_impl::java::util::concurrent::TimeUnit arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::__JniBaseClass arg5)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ThreadPoolExecutor",
			"(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/RejectedExecutionHandler;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object()
		);
	}
	void ThreadPoolExecutor::__constructor(jint arg0, jint arg1, jlong arg2, __jni_impl::java::util::concurrent::TimeUnit arg3, __jni_impl::__JniBaseClass arg4)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ThreadPoolExecutor",
			"(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	void ThreadPoolExecutor::__constructor(jint arg0, jint arg1, jlong arg2, __jni_impl::java::util::concurrent::TimeUnit arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::__JniBaseClass arg5, __jni_impl::__JniBaseClass arg6)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ThreadPoolExecutor",
			"(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/ThreadFactory;Ljava/util/concurrent/RejectedExecutionHandler;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object()
		);
	}
	
	// Methods
	jboolean ThreadPoolExecutor::remove(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Runnable;)Z",
			arg0.__jniObject().object()
		);
	}
	void ThreadPoolExecutor::shutdown()
	{
		__thiz.callMethod<void>(
			"shutdown",
			"()V"
		);
	}
	jstring ThreadPoolExecutor::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ThreadPoolExecutor::execute(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"execute",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ThreadPoolExecutor::getQueue()
	{
		return __thiz.callObjectMethod(
			"getQueue",
			"()Ljava/util/concurrent/BlockingQueue;"
		);
	}
	jboolean ThreadPoolExecutor::isShutdown()
	{
		return __thiz.callMethod<jboolean>(
			"isShutdown",
			"()Z"
		);
	}
	void ThreadPoolExecutor::purge()
	{
		__thiz.callMethod<void>(
			"purge",
			"()V"
		);
	}
	jboolean ThreadPoolExecutor::isTerminated()
	{
		return __thiz.callMethod<jboolean>(
			"isTerminated",
			"()Z"
		);
	}
	jint ThreadPoolExecutor::getPoolSize()
	{
		return __thiz.callMethod<jint>(
			"getPoolSize",
			"()I"
		);
	}
	QAndroidJniObject ThreadPoolExecutor::shutdownNow()
	{
		return __thiz.callObjectMethod(
			"shutdownNow",
			"()Ljava/util/List;"
		);
	}
	jboolean ThreadPoolExecutor::isTerminating()
	{
		return __thiz.callMethod<jboolean>(
			"isTerminating",
			"()Z"
		);
	}
	jboolean ThreadPoolExecutor::awaitTermination(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jboolean>(
			"awaitTermination",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ThreadPoolExecutor::allowCoreThreadTimeOut(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"allowCoreThreadTimeOut",
			"(Z)V",
			arg0
		);
	}
	jboolean ThreadPoolExecutor::allowsCoreThreadTimeOut()
	{
		return __thiz.callMethod<jboolean>(
			"allowsCoreThreadTimeOut",
			"()Z"
		);
	}
	void ThreadPoolExecutor::setThreadFactory(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setThreadFactory",
			"(Ljava/util/concurrent/ThreadFactory;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ThreadPoolExecutor::getThreadFactory()
	{
		return __thiz.callObjectMethod(
			"getThreadFactory",
			"()Ljava/util/concurrent/ThreadFactory;"
		);
	}
	void ThreadPoolExecutor::setRejectedExecutionHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setRejectedExecutionHandler",
			"(Ljava/util/concurrent/RejectedExecutionHandler;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ThreadPoolExecutor::getRejectedExecutionHandler()
	{
		return __thiz.callObjectMethod(
			"getRejectedExecutionHandler",
			"()Ljava/util/concurrent/RejectedExecutionHandler;"
		);
	}
	void ThreadPoolExecutor::setCorePoolSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCorePoolSize",
			"(I)V",
			arg0
		);
	}
	jint ThreadPoolExecutor::getCorePoolSize()
	{
		return __thiz.callMethod<jint>(
			"getCorePoolSize",
			"()I"
		);
	}
	jboolean ThreadPoolExecutor::prestartCoreThread()
	{
		return __thiz.callMethod<jboolean>(
			"prestartCoreThread",
			"()Z"
		);
	}
	jint ThreadPoolExecutor::prestartAllCoreThreads()
	{
		return __thiz.callMethod<jint>(
			"prestartAllCoreThreads",
			"()I"
		);
	}
	void ThreadPoolExecutor::setMaximumPoolSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaximumPoolSize",
			"(I)V",
			arg0
		);
	}
	jint ThreadPoolExecutor::getMaximumPoolSize()
	{
		return __thiz.callMethod<jint>(
			"getMaximumPoolSize",
			"()I"
		);
	}
	void ThreadPoolExecutor::setKeepAliveTime(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		__thiz.callMethod<void>(
			"setKeepAliveTime",
			"(JLjava/util/concurrent/TimeUnit;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jlong ThreadPoolExecutor::getKeepAliveTime(__jni_impl::java::util::concurrent::TimeUnit arg0)
	{
		return __thiz.callMethod<jlong>(
			"getKeepAliveTime",
			"(Ljava/util/concurrent/TimeUnit;)J",
			arg0.__jniObject().object()
		);
	}
	jint ThreadPoolExecutor::getActiveCount()
	{
		return __thiz.callMethod<jint>(
			"getActiveCount",
			"()I"
		);
	}
	jint ThreadPoolExecutor::getLargestPoolSize()
	{
		return __thiz.callMethod<jint>(
			"getLargestPoolSize",
			"()I"
		);
	}
	jlong ThreadPoolExecutor::getTaskCount()
	{
		return __thiz.callMethod<jlong>(
			"getTaskCount",
			"()J"
		);
	}
	jlong ThreadPoolExecutor::getCompletedTaskCount()
	{
		return __thiz.callMethod<jlong>(
			"getCompletedTaskCount",
			"()J"
		);
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class ThreadPoolExecutor : public __jni_impl::java::util::concurrent::ThreadPoolExecutor
	{
	public:
		ThreadPoolExecutor(QAndroidJniObject obj) { __thiz = obj; }
		ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, __jni_impl::java::util::concurrent::TimeUnit arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::__JniBaseClass arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
		ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, __jni_impl::java::util::concurrent::TimeUnit arg3, __jni_impl::__JniBaseClass arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, __jni_impl::java::util::concurrent::TimeUnit arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::__JniBaseClass arg5, __jni_impl::__JniBaseClass arg6)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6);
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_THREADPOOLEXECUTOR

