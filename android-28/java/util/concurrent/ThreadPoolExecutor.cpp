#include "../../lang/RuntimePermission.hpp"
#include "../../../JString.hpp"
#include "../../lang/Thread.hpp"
#include "../../../JThrowable.hpp"
#include "../HashSet.hpp"
#include "./TimeUnit.hpp"
#include "./atomic/AtomicInteger.hpp"
#include "./locks/ReentrantLock.hpp"
#include "./ThreadPoolExecutor.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	ThreadPoolExecutor::ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, java::util::concurrent::TimeUnit arg3, JObject arg4)
		: java::util::concurrent::AbstractExecutorService(
			"java.util.concurrent.ThreadPoolExecutor",
			"(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4.object()
		) {}
	ThreadPoolExecutor::ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, java::util::concurrent::TimeUnit arg3, JObject arg4, JObject arg5)
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
	ThreadPoolExecutor::ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, java::util::concurrent::TimeUnit arg3, JObject arg4, JObject arg5, JObject arg6)
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
	void ThreadPoolExecutor::allowCoreThreadTimeOut(jboolean arg0) const
	{
		callMethod<void>(
			"allowCoreThreadTimeOut",
			"(Z)V",
			arg0
		);
	}
	jboolean ThreadPoolExecutor::allowsCoreThreadTimeOut() const
	{
		return callMethod<jboolean>(
			"allowsCoreThreadTimeOut",
			"()Z"
		);
	}
	jboolean ThreadPoolExecutor::awaitTermination(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callMethod<jboolean>(
			"awaitTermination",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	void ThreadPoolExecutor::execute(JObject arg0) const
	{
		callMethod<void>(
			"execute",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	jint ThreadPoolExecutor::getActiveCount() const
	{
		return callMethod<jint>(
			"getActiveCount",
			"()I"
		);
	}
	jlong ThreadPoolExecutor::getCompletedTaskCount() const
	{
		return callMethod<jlong>(
			"getCompletedTaskCount",
			"()J"
		);
	}
	jint ThreadPoolExecutor::getCorePoolSize() const
	{
		return callMethod<jint>(
			"getCorePoolSize",
			"()I"
		);
	}
	jlong ThreadPoolExecutor::getKeepAliveTime(java::util::concurrent::TimeUnit arg0) const
	{
		return callMethod<jlong>(
			"getKeepAliveTime",
			"(Ljava/util/concurrent/TimeUnit;)J",
			arg0.object()
		);
	}
	jint ThreadPoolExecutor::getLargestPoolSize() const
	{
		return callMethod<jint>(
			"getLargestPoolSize",
			"()I"
		);
	}
	jint ThreadPoolExecutor::getMaximumPoolSize() const
	{
		return callMethod<jint>(
			"getMaximumPoolSize",
			"()I"
		);
	}
	jint ThreadPoolExecutor::getPoolSize() const
	{
		return callMethod<jint>(
			"getPoolSize",
			"()I"
		);
	}
	JObject ThreadPoolExecutor::getQueue() const
	{
		return callObjectMethod(
			"getQueue",
			"()Ljava/util/concurrent/BlockingQueue;"
		);
	}
	JObject ThreadPoolExecutor::getRejectedExecutionHandler() const
	{
		return callObjectMethod(
			"getRejectedExecutionHandler",
			"()Ljava/util/concurrent/RejectedExecutionHandler;"
		);
	}
	jlong ThreadPoolExecutor::getTaskCount() const
	{
		return callMethod<jlong>(
			"getTaskCount",
			"()J"
		);
	}
	JObject ThreadPoolExecutor::getThreadFactory() const
	{
		return callObjectMethod(
			"getThreadFactory",
			"()Ljava/util/concurrent/ThreadFactory;"
		);
	}
	jboolean ThreadPoolExecutor::isShutdown() const
	{
		return callMethod<jboolean>(
			"isShutdown",
			"()Z"
		);
	}
	jboolean ThreadPoolExecutor::isTerminated() const
	{
		return callMethod<jboolean>(
			"isTerminated",
			"()Z"
		);
	}
	jboolean ThreadPoolExecutor::isTerminating() const
	{
		return callMethod<jboolean>(
			"isTerminating",
			"()Z"
		);
	}
	jint ThreadPoolExecutor::prestartAllCoreThreads() const
	{
		return callMethod<jint>(
			"prestartAllCoreThreads",
			"()I"
		);
	}
	jboolean ThreadPoolExecutor::prestartCoreThread() const
	{
		return callMethod<jboolean>(
			"prestartCoreThread",
			"()Z"
		);
	}
	void ThreadPoolExecutor::purge() const
	{
		callMethod<void>(
			"purge",
			"()V"
		);
	}
	jboolean ThreadPoolExecutor::remove(JObject arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Runnable;)Z",
			arg0.object()
		);
	}
	void ThreadPoolExecutor::setCorePoolSize(jint arg0) const
	{
		callMethod<void>(
			"setCorePoolSize",
			"(I)V",
			arg0
		);
	}
	void ThreadPoolExecutor::setKeepAliveTime(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		callMethod<void>(
			"setKeepAliveTime",
			"(JLjava/util/concurrent/TimeUnit;)V",
			arg0,
			arg1.object()
		);
	}
	void ThreadPoolExecutor::setMaximumPoolSize(jint arg0) const
	{
		callMethod<void>(
			"setMaximumPoolSize",
			"(I)V",
			arg0
		);
	}
	void ThreadPoolExecutor::setRejectedExecutionHandler(JObject arg0) const
	{
		callMethod<void>(
			"setRejectedExecutionHandler",
			"(Ljava/util/concurrent/RejectedExecutionHandler;)V",
			arg0.object()
		);
	}
	void ThreadPoolExecutor::setThreadFactory(JObject arg0) const
	{
		callMethod<void>(
			"setThreadFactory",
			"(Ljava/util/concurrent/ThreadFactory;)V",
			arg0.object()
		);
	}
	void ThreadPoolExecutor::shutdown() const
	{
		callMethod<void>(
			"shutdown",
			"()V"
		);
	}
	JObject ThreadPoolExecutor::shutdownNow() const
	{
		return callObjectMethod(
			"shutdownNow",
			"()Ljava/util/List;"
		);
	}
	JString ThreadPoolExecutor::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent

