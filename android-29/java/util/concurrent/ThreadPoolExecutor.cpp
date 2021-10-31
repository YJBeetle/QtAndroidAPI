#include "../../lang/RuntimePermission.hpp"
#include "../../lang/Thread.hpp"
#include "../HashSet.hpp"
#include "./TimeUnit.hpp"
#include "./atomic/AtomicInteger.hpp"
#include "./locks/ReentrantLock.hpp"
#include "./ThreadPoolExecutor.hpp"

namespace java::util::concurrent
{
	// Fields
	
	ThreadPoolExecutor::ThreadPoolExecutor(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ThreadPoolExecutor::ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, java::util::concurrent::TimeUnit arg3, __JniBaseClass arg4)
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
	ThreadPoolExecutor::ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, java::util::concurrent::TimeUnit arg3, __JniBaseClass arg4, __JniBaseClass arg5)
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
	ThreadPoolExecutor::ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, java::util::concurrent::TimeUnit arg3, __JniBaseClass arg4, __JniBaseClass arg5, __JniBaseClass arg6)
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
	jboolean ThreadPoolExecutor::awaitTermination(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jboolean>(
			"awaitTermination",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ThreadPoolExecutor::execute(__JniBaseClass arg0)
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
	jlong ThreadPoolExecutor::getKeepAliveTime(java::util::concurrent::TimeUnit arg0)
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
	jboolean ThreadPoolExecutor::remove(__JniBaseClass arg0)
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
	void ThreadPoolExecutor::setKeepAliveTime(jlong arg0, java::util::concurrent::TimeUnit arg1)
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
	void ThreadPoolExecutor::setRejectedExecutionHandler(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setRejectedExecutionHandler",
			"(Ljava/util/concurrent/RejectedExecutionHandler;)V",
			arg0.__jniObject().object()
		);
	}
	void ThreadPoolExecutor::setThreadFactory(__JniBaseClass arg0)
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
} // namespace java::util::concurrent

