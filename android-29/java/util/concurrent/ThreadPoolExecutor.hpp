#pragma once

#include "../../../__JniBaseClass.hpp"
#include "AbstractExecutorService.hpp"

namespace __jni_impl::java::lang
{
	class RuntimePermission;
}
namespace __jni_impl::java::lang
{
	class Thread;
}
namespace __jni_impl::java::util
{
	class HashSet;
}
namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}
namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicInteger;
}
namespace __jni_impl::java::util::concurrent::locks
{
	class ReentrantLock;
}

namespace __jni_impl::java::util::concurrent
{
	class ThreadPoolExecutor : public __jni_impl::java::util::concurrent::AbstractExecutorService
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jint arg1, jlong arg2, __jni_impl::java::util::concurrent::TimeUnit arg3, __jni_impl::__JniBaseClass arg4);
		void __constructor(jint arg0, jint arg1, jlong arg2, __jni_impl::java::util::concurrent::TimeUnit arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::__JniBaseClass arg5);
		void __constructor(jint arg0, jint arg1, jlong arg2, __jni_impl::java::util::concurrent::TimeUnit arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::__JniBaseClass arg5, __jni_impl::__JniBaseClass arg6);
		
		// Methods
		void allowCoreThreadTimeOut(jboolean arg0);
		jboolean allowsCoreThreadTimeOut();
		jboolean awaitTermination(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		void execute(__jni_impl::__JniBaseClass arg0);
		jint getActiveCount();
		jlong getCompletedTaskCount();
		jint getCorePoolSize();
		jlong getKeepAliveTime(__jni_impl::java::util::concurrent::TimeUnit arg0);
		jint getLargestPoolSize();
		jint getMaximumPoolSize();
		jint getPoolSize();
		QAndroidJniObject getQueue();
		QAndroidJniObject getRejectedExecutionHandler();
		jlong getTaskCount();
		QAndroidJniObject getThreadFactory();
		jboolean isShutdown();
		jboolean isTerminated();
		jboolean isTerminating();
		jint prestartAllCoreThreads();
		jboolean prestartCoreThread();
		void purge();
		jboolean remove(__jni_impl::__JniBaseClass arg0);
		void setCorePoolSize(jint arg0);
		void setKeepAliveTime(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		void setMaximumPoolSize(jint arg0);
		void setRejectedExecutionHandler(__jni_impl::__JniBaseClass arg0);
		void setThreadFactory(__jni_impl::__JniBaseClass arg0);
		void shutdown();
		QAndroidJniObject shutdownNow();
		jstring toString();
	};
} // namespace __jni_impl::java::util::concurrent

#include "../../lang/RuntimePermission.hpp"
#include "../../lang/Thread.hpp"
#include "../HashSet.hpp"
#include "TimeUnit.hpp"
#include "atomic/AtomicInteger.hpp"
#include "locks/ReentrantLock.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
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
	jboolean ThreadPoolExecutor::awaitTermination(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jboolean>(
			"awaitTermination",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ThreadPoolExecutor::execute(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"execute",
			"(Ljava/lang/Runnable;)V",
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
	jlong ThreadPoolExecutor::getCompletedTaskCount()
	{
		return __thiz.callMethod<jlong>(
			"getCompletedTaskCount",
			"()J"
		);
	}
	jint ThreadPoolExecutor::getCorePoolSize()
	{
		return __thiz.callMethod<jint>(
			"getCorePoolSize",
			"()I"
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
	jint ThreadPoolExecutor::getLargestPoolSize()
	{
		return __thiz.callMethod<jint>(
			"getLargestPoolSize",
			"()I"
		);
	}
	jint ThreadPoolExecutor::getMaximumPoolSize()
	{
		return __thiz.callMethod<jint>(
			"getMaximumPoolSize",
			"()I"
		);
	}
	jint ThreadPoolExecutor::getPoolSize()
	{
		return __thiz.callMethod<jint>(
			"getPoolSize",
			"()I"
		);
	}
	QAndroidJniObject ThreadPoolExecutor::getQueue()
	{
		return __thiz.callObjectMethod(
			"getQueue",
			"()Ljava/util/concurrent/BlockingQueue;"
		);
	}
	QAndroidJniObject ThreadPoolExecutor::getRejectedExecutionHandler()
	{
		return __thiz.callObjectMethod(
			"getRejectedExecutionHandler",
			"()Ljava/util/concurrent/RejectedExecutionHandler;"
		);
	}
	jlong ThreadPoolExecutor::getTaskCount()
	{
		return __thiz.callMethod<jlong>(
			"getTaskCount",
			"()J"
		);
	}
	QAndroidJniObject ThreadPoolExecutor::getThreadFactory()
	{
		return __thiz.callObjectMethod(
			"getThreadFactory",
			"()Ljava/util/concurrent/ThreadFactory;"
		);
	}
	jboolean ThreadPoolExecutor::isShutdown()
	{
		return __thiz.callMethod<jboolean>(
			"isShutdown",
			"()Z"
		);
	}
	jboolean ThreadPoolExecutor::isTerminated()
	{
		return __thiz.callMethod<jboolean>(
			"isTerminated",
			"()Z"
		);
	}
	jboolean ThreadPoolExecutor::isTerminating()
	{
		return __thiz.callMethod<jboolean>(
			"isTerminating",
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
	jboolean ThreadPoolExecutor::prestartCoreThread()
	{
		return __thiz.callMethod<jboolean>(
			"prestartCoreThread",
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
	jboolean ThreadPoolExecutor::remove(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Runnable;)Z",
			arg0.__jniObject().object()
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
	void ThreadPoolExecutor::setKeepAliveTime(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		__thiz.callMethod<void>(
			"setKeepAliveTime",
			"(JLjava/util/concurrent/TimeUnit;)V",
			arg0,
			arg1.__jniObject().object()
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
	void ThreadPoolExecutor::setRejectedExecutionHandler(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setRejectedExecutionHandler",
			"(Ljava/util/concurrent/RejectedExecutionHandler;)V",
			arg0.__jniObject().object()
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
	void ThreadPoolExecutor::shutdown()
	{
		__thiz.callMethod<void>(
			"shutdown",
			"()V"
		);
	}
	QAndroidJniObject ThreadPoolExecutor::shutdownNow()
	{
		return __thiz.callObjectMethod(
			"shutdownNow",
			"()Ljava/util/List;"
		);
	}
	jstring ThreadPoolExecutor::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class ThreadPoolExecutor : public __jni_impl::java::util::concurrent::ThreadPoolExecutor
	{
	public:
		ThreadPoolExecutor(QAndroidJniObject obj) { __thiz = obj; }
		ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, __jni_impl::java::util::concurrent::TimeUnit arg3, __jni_impl::__JniBaseClass arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
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

