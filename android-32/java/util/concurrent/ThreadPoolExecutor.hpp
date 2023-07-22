#pragma once

#include "../../lang/RuntimePermission.def.hpp"
#include "../../../JString.hpp"
#include "../../lang/Thread.def.hpp"
#include "../../../JThrowable.hpp"
#include "../HashSet.def.hpp"
#include "./TimeUnit.def.hpp"
#include "./atomic/AtomicInteger.def.hpp"
#include "./locks/ReentrantLock.def.hpp"
#include "./ThreadPoolExecutor.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline ThreadPoolExecutor::ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, java::util::concurrent::TimeUnit arg3, JObject arg4)
		: java::util::concurrent::AbstractExecutorService(
			"java.util.concurrent.ThreadPoolExecutor",
			"(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4.object()
		) {}
	inline ThreadPoolExecutor::ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, java::util::concurrent::TimeUnit arg3, JObject arg4, JObject arg5)
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
	inline ThreadPoolExecutor::ThreadPoolExecutor(jint arg0, jint arg1, jlong arg2, java::util::concurrent::TimeUnit arg3, JObject arg4, JObject arg5, JObject arg6)
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
	inline void ThreadPoolExecutor::allowCoreThreadTimeOut(jboolean arg0) const
	{
		callMethod<void>(
			"allowCoreThreadTimeOut",
			"(Z)V",
			arg0
		);
	}
	inline jboolean ThreadPoolExecutor::allowsCoreThreadTimeOut() const
	{
		return callMethod<jboolean>(
			"allowsCoreThreadTimeOut",
			"()Z"
		);
	}
	inline jboolean ThreadPoolExecutor::awaitTermination(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callMethod<jboolean>(
			"awaitTermination",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void ThreadPoolExecutor::execute(JObject arg0) const
	{
		callMethod<void>(
			"execute",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	inline jint ThreadPoolExecutor::getActiveCount() const
	{
		return callMethod<jint>(
			"getActiveCount",
			"()I"
		);
	}
	inline jlong ThreadPoolExecutor::getCompletedTaskCount() const
	{
		return callMethod<jlong>(
			"getCompletedTaskCount",
			"()J"
		);
	}
	inline jint ThreadPoolExecutor::getCorePoolSize() const
	{
		return callMethod<jint>(
			"getCorePoolSize",
			"()I"
		);
	}
	inline jlong ThreadPoolExecutor::getKeepAliveTime(java::util::concurrent::TimeUnit arg0) const
	{
		return callMethod<jlong>(
			"getKeepAliveTime",
			"(Ljava/util/concurrent/TimeUnit;)J",
			arg0.object()
		);
	}
	inline jint ThreadPoolExecutor::getLargestPoolSize() const
	{
		return callMethod<jint>(
			"getLargestPoolSize",
			"()I"
		);
	}
	inline jint ThreadPoolExecutor::getMaximumPoolSize() const
	{
		return callMethod<jint>(
			"getMaximumPoolSize",
			"()I"
		);
	}
	inline jint ThreadPoolExecutor::getPoolSize() const
	{
		return callMethod<jint>(
			"getPoolSize",
			"()I"
		);
	}
	inline JObject ThreadPoolExecutor::getQueue() const
	{
		return callObjectMethod(
			"getQueue",
			"()Ljava/util/concurrent/BlockingQueue;"
		);
	}
	inline JObject ThreadPoolExecutor::getRejectedExecutionHandler() const
	{
		return callObjectMethod(
			"getRejectedExecutionHandler",
			"()Ljava/util/concurrent/RejectedExecutionHandler;"
		);
	}
	inline jlong ThreadPoolExecutor::getTaskCount() const
	{
		return callMethod<jlong>(
			"getTaskCount",
			"()J"
		);
	}
	inline JObject ThreadPoolExecutor::getThreadFactory() const
	{
		return callObjectMethod(
			"getThreadFactory",
			"()Ljava/util/concurrent/ThreadFactory;"
		);
	}
	inline jboolean ThreadPoolExecutor::isShutdown() const
	{
		return callMethod<jboolean>(
			"isShutdown",
			"()Z"
		);
	}
	inline jboolean ThreadPoolExecutor::isTerminated() const
	{
		return callMethod<jboolean>(
			"isTerminated",
			"()Z"
		);
	}
	inline jboolean ThreadPoolExecutor::isTerminating() const
	{
		return callMethod<jboolean>(
			"isTerminating",
			"()Z"
		);
	}
	inline jint ThreadPoolExecutor::prestartAllCoreThreads() const
	{
		return callMethod<jint>(
			"prestartAllCoreThreads",
			"()I"
		);
	}
	inline jboolean ThreadPoolExecutor::prestartCoreThread() const
	{
		return callMethod<jboolean>(
			"prestartCoreThread",
			"()Z"
		);
	}
	inline void ThreadPoolExecutor::purge() const
	{
		callMethod<void>(
			"purge",
			"()V"
		);
	}
	inline jboolean ThreadPoolExecutor::remove(JObject arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Runnable;)Z",
			arg0.object()
		);
	}
	inline void ThreadPoolExecutor::setCorePoolSize(jint arg0) const
	{
		callMethod<void>(
			"setCorePoolSize",
			"(I)V",
			arg0
		);
	}
	inline void ThreadPoolExecutor::setKeepAliveTime(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		callMethod<void>(
			"setKeepAliveTime",
			"(JLjava/util/concurrent/TimeUnit;)V",
			arg0,
			arg1.object()
		);
	}
	inline void ThreadPoolExecutor::setMaximumPoolSize(jint arg0) const
	{
		callMethod<void>(
			"setMaximumPoolSize",
			"(I)V",
			arg0
		);
	}
	inline void ThreadPoolExecutor::setRejectedExecutionHandler(JObject arg0) const
	{
		callMethod<void>(
			"setRejectedExecutionHandler",
			"(Ljava/util/concurrent/RejectedExecutionHandler;)V",
			arg0.object()
		);
	}
	inline void ThreadPoolExecutor::setThreadFactory(JObject arg0) const
	{
		callMethod<void>(
			"setThreadFactory",
			"(Ljava/util/concurrent/ThreadFactory;)V",
			arg0.object()
		);
	}
	inline void ThreadPoolExecutor::shutdown() const
	{
		callMethod<void>(
			"shutdown",
			"()V"
		);
	}
	inline JObject ThreadPoolExecutor::shutdownNow() const
	{
		return callObjectMethod(
			"shutdownNow",
			"()Ljava/util/List;"
		);
	}
	inline JString ThreadPoolExecutor::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent

// Base class headers
#include "./AbstractExecutorService.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent;
#endif
