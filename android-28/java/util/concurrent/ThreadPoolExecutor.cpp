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
	
	// QJniObject forward
	ThreadPoolExecutor::ThreadPoolExecutor(QJniObject obj) : java::util::concurrent::AbstractExecutorService(obj) {}
	
	// Constructors
	ThreadPoolExecutor::ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, java::util::concurrent::TimeUnit arg3, __JniBaseClass arg4)
		: java::util::concurrent::AbstractExecutorService(
			"java.util.concurrent.ThreadPoolExecutor",
			"(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4.object()
		) {}
	ThreadPoolExecutor::ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, java::util::concurrent::TimeUnit arg3, __JniBaseClass arg4, __JniBaseClass arg5)
		: java::util::concurrent::AbstractExecutorService(
			"java.util.concurrent.ThreadPoolExecutor",
			"(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/RejectedExecutionHandler;)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4.object(),
			arg5.object()
		) {}
	ThreadPoolExecutor::ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, java::util::concurrent::TimeUnit arg3, __JniBaseClass arg4, __JniBaseClass arg5, __JniBaseClass arg6)
		: java::util::concurrent::AbstractExecutorService(
			"java.util.concurrent.ThreadPoolExecutor",
			"(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/ThreadFactory;Ljava/util/concurrent/RejectedExecutionHandler;)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4.object(),
			arg5.object(),
			arg6.object()
		) {}
	
	// Methods
	void ThreadPoolExecutor::allowCoreThreadTimeOut(jboolean arg0)
	{
		callMethod<void>(
			"allowCoreThreadTimeOut",
			"(Z)V",
			arg0
		);
	}
	jboolean ThreadPoolExecutor::allowsCoreThreadTimeOut()
	{
		return callMethod<jboolean>(
			"allowsCoreThreadTimeOut",
			"()Z"
		);
	}
	jboolean ThreadPoolExecutor::awaitTermination(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callMethod<jboolean>(
			"awaitTermination",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	void ThreadPoolExecutor::execute(__JniBaseClass arg0)
	{
		callMethod<void>(
			"execute",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	jint ThreadPoolExecutor::getActiveCount()
	{
		return callMethod<jint>(
			"getActiveCount",
			"()I"
		);
	}
	jlong ThreadPoolExecutor::getCompletedTaskCount()
	{
		return callMethod<jlong>(
			"getCompletedTaskCount",
			"()J"
		);
	}
	jint ThreadPoolExecutor::getCorePoolSize()
	{
		return callMethod<jint>(
			"getCorePoolSize",
			"()I"
		);
	}
	jlong ThreadPoolExecutor::getKeepAliveTime(java::util::concurrent::TimeUnit arg0)
	{
		return callMethod<jlong>(
			"getKeepAliveTime",
			"(Ljava/util/concurrent/TimeUnit;)J",
			arg0.object()
		);
	}
	jint ThreadPoolExecutor::getLargestPoolSize()
	{
		return callMethod<jint>(
			"getLargestPoolSize",
			"()I"
		);
	}
	jint ThreadPoolExecutor::getMaximumPoolSize()
	{
		return callMethod<jint>(
			"getMaximumPoolSize",
			"()I"
		);
	}
	jint ThreadPoolExecutor::getPoolSize()
	{
		return callMethod<jint>(
			"getPoolSize",
			"()I"
		);
	}
	__JniBaseClass ThreadPoolExecutor::getQueue()
	{
		return callObjectMethod(
			"getQueue",
			"()Ljava/util/concurrent/BlockingQueue;"
		);
	}
	__JniBaseClass ThreadPoolExecutor::getRejectedExecutionHandler()
	{
		return callObjectMethod(
			"getRejectedExecutionHandler",
			"()Ljava/util/concurrent/RejectedExecutionHandler;"
		);
	}
	jlong ThreadPoolExecutor::getTaskCount()
	{
		return callMethod<jlong>(
			"getTaskCount",
			"()J"
		);
	}
	__JniBaseClass ThreadPoolExecutor::getThreadFactory()
	{
		return callObjectMethod(
			"getThreadFactory",
			"()Ljava/util/concurrent/ThreadFactory;"
		);
	}
	jboolean ThreadPoolExecutor::isShutdown()
	{
		return callMethod<jboolean>(
			"isShutdown",
			"()Z"
		);
	}
	jboolean ThreadPoolExecutor::isTerminated()
	{
		return callMethod<jboolean>(
			"isTerminated",
			"()Z"
		);
	}
	jboolean ThreadPoolExecutor::isTerminating()
	{
		return callMethod<jboolean>(
			"isTerminating",
			"()Z"
		);
	}
	jint ThreadPoolExecutor::prestartAllCoreThreads()
	{
		return callMethod<jint>(
			"prestartAllCoreThreads",
			"()I"
		);
	}
	jboolean ThreadPoolExecutor::prestartCoreThread()
	{
		return callMethod<jboolean>(
			"prestartCoreThread",
			"()Z"
		);
	}
	void ThreadPoolExecutor::purge()
	{
		callMethod<void>(
			"purge",
			"()V"
		);
	}
	jboolean ThreadPoolExecutor::remove(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Runnable;)Z",
			arg0.object()
		);
	}
	void ThreadPoolExecutor::setCorePoolSize(jint arg0)
	{
		callMethod<void>(
			"setCorePoolSize",
			"(I)V",
			arg0
		);
	}
	void ThreadPoolExecutor::setKeepAliveTime(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		callMethod<void>(
			"setKeepAliveTime",
			"(JLjava/util/concurrent/TimeUnit;)V",
			arg0,
			arg1.object()
		);
	}
	void ThreadPoolExecutor::setMaximumPoolSize(jint arg0)
	{
		callMethod<void>(
			"setMaximumPoolSize",
			"(I)V",
			arg0
		);
	}
	void ThreadPoolExecutor::setRejectedExecutionHandler(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setRejectedExecutionHandler",
			"(Ljava/util/concurrent/RejectedExecutionHandler;)V",
			arg0.object()
		);
	}
	void ThreadPoolExecutor::setThreadFactory(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setThreadFactory",
			"(Ljava/util/concurrent/ThreadFactory;)V",
			arg0.object()
		);
	}
	void ThreadPoolExecutor::shutdown()
	{
		callMethod<void>(
			"shutdown",
			"()V"
		);
	}
	__JniBaseClass ThreadPoolExecutor::shutdownNow()
	{
		return callObjectMethod(
			"shutdownNow",
			"()Ljava/util/List;"
		);
	}
	jstring ThreadPoolExecutor::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::concurrent

