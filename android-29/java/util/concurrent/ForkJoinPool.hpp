#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JObject.hpp"
#include "../../lang/RuntimePermission.def.hpp"
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "../../security/AccessControlContext.def.hpp"
#include "./CountedCompleter.def.hpp"
#include "./ForkJoinTask.def.hpp"
#include "./ForkJoinWorkerThread.def.hpp"
#include "./TimeUnit.def.hpp"
#include "./ForkJoinPool.def.hpp"

namespace java::util::concurrent
{
	// Fields
	inline JObject ForkJoinPool::defaultForkJoinWorkerThreadFactory()
	{
		return getStaticObjectField(
			"java.util.concurrent.ForkJoinPool",
			"defaultForkJoinWorkerThreadFactory",
			"Ljava/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory;"
		);
	}
	
	// Constructors
	inline ForkJoinPool::ForkJoinPool()
		: java::util::concurrent::AbstractExecutorService(
			"java.util.concurrent.ForkJoinPool",
			"()V"
		) {}
	inline ForkJoinPool::ForkJoinPool(jint arg0)
		: java::util::concurrent::AbstractExecutorService(
			"java.util.concurrent.ForkJoinPool",
			"(I)V",
			arg0
		) {}
	inline ForkJoinPool::ForkJoinPool(jint arg0, JObject arg1, JObject arg2, jboolean arg3)
		: java::util::concurrent::AbstractExecutorService(
			"java.util.concurrent.ForkJoinPool",
			"(ILjava/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory;Ljava/lang/Thread$UncaughtExceptionHandler;Z)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3
		) {}
	inline ForkJoinPool::ForkJoinPool(jint arg0, JObject arg1, JObject arg2, jboolean arg3, jint arg4, jint arg5, jint arg6, JObject arg7, jlong arg8, java::util::concurrent::TimeUnit arg9)
		: java::util::concurrent::AbstractExecutorService(
			"java.util.concurrent.ForkJoinPool",
			"(ILjava/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory;Ljava/lang/Thread$UncaughtExceptionHandler;ZIIILjava/util/function/Predicate;JLjava/util/concurrent/TimeUnit;)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3,
			arg4,
			arg5,
			arg6,
			arg7.object(),
			arg8,
			arg9.object()
		) {}
	
	// Methods
	inline java::util::concurrent::ForkJoinPool ForkJoinPool::commonPool()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.ForkJoinPool",
			"commonPool",
			"()Ljava/util/concurrent/ForkJoinPool;"
		);
	}
	inline jint ForkJoinPool::getCommonPoolParallelism()
	{
		return callStaticMethod<jint>(
			"java.util.concurrent.ForkJoinPool",
			"getCommonPoolParallelism",
			"()I"
		);
	}
	inline void ForkJoinPool::managedBlock(JObject arg0)
	{
		callStaticMethod<void>(
			"java.util.concurrent.ForkJoinPool",
			"managedBlock",
			"(Ljava/util/concurrent/ForkJoinPool$ManagedBlocker;)V",
			arg0.object()
		);
	}
	inline jboolean ForkJoinPool::awaitQuiescence(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callMethod<jboolean>(
			"awaitQuiescence",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean ForkJoinPool::awaitTermination(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callMethod<jboolean>(
			"awaitTermination",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void ForkJoinPool::execute(JObject arg0) const
	{
		callMethod<void>(
			"execute",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	inline void ForkJoinPool::execute(java::util::concurrent::ForkJoinTask arg0) const
	{
		callMethod<void>(
			"execute",
			"(Ljava/util/concurrent/ForkJoinTask;)V",
			arg0.object()
		);
	}
	inline jint ForkJoinPool::getActiveThreadCount() const
	{
		return callMethod<jint>(
			"getActiveThreadCount",
			"()I"
		);
	}
	inline jboolean ForkJoinPool::getAsyncMode() const
	{
		return callMethod<jboolean>(
			"getAsyncMode",
			"()Z"
		);
	}
	inline JObject ForkJoinPool::getFactory() const
	{
		return callObjectMethod(
			"getFactory",
			"()Ljava/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory;"
		);
	}
	inline jint ForkJoinPool::getParallelism() const
	{
		return callMethod<jint>(
			"getParallelism",
			"()I"
		);
	}
	inline jint ForkJoinPool::getPoolSize() const
	{
		return callMethod<jint>(
			"getPoolSize",
			"()I"
		);
	}
	inline jint ForkJoinPool::getQueuedSubmissionCount() const
	{
		return callMethod<jint>(
			"getQueuedSubmissionCount",
			"()I"
		);
	}
	inline jlong ForkJoinPool::getQueuedTaskCount() const
	{
		return callMethod<jlong>(
			"getQueuedTaskCount",
			"()J"
		);
	}
	inline jint ForkJoinPool::getRunningThreadCount() const
	{
		return callMethod<jint>(
			"getRunningThreadCount",
			"()I"
		);
	}
	inline jlong ForkJoinPool::getStealCount() const
	{
		return callMethod<jlong>(
			"getStealCount",
			"()J"
		);
	}
	inline JObject ForkJoinPool::getUncaughtExceptionHandler() const
	{
		return callObjectMethod(
			"getUncaughtExceptionHandler",
			"()Ljava/lang/Thread$UncaughtExceptionHandler;"
		);
	}
	inline jboolean ForkJoinPool::hasQueuedSubmissions() const
	{
		return callMethod<jboolean>(
			"hasQueuedSubmissions",
			"()Z"
		);
	}
	inline JObject ForkJoinPool::invoke(java::util::concurrent::ForkJoinTask arg0) const
	{
		return callObjectMethod(
			"invoke",
			"(Ljava/util/concurrent/ForkJoinTask;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline JObject ForkJoinPool::invokeAll(JObject arg0) const
	{
		return callObjectMethod(
			"invokeAll",
			"(Ljava/util/Collection;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline jboolean ForkJoinPool::isQuiescent() const
	{
		return callMethod<jboolean>(
			"isQuiescent",
			"()Z"
		);
	}
	inline jboolean ForkJoinPool::isShutdown() const
	{
		return callMethod<jboolean>(
			"isShutdown",
			"()Z"
		);
	}
	inline jboolean ForkJoinPool::isTerminated() const
	{
		return callMethod<jboolean>(
			"isTerminated",
			"()Z"
		);
	}
	inline jboolean ForkJoinPool::isTerminating() const
	{
		return callMethod<jboolean>(
			"isTerminating",
			"()Z"
		);
	}
	inline void ForkJoinPool::shutdown() const
	{
		callMethod<void>(
			"shutdown",
			"()V"
		);
	}
	inline JObject ForkJoinPool::shutdownNow() const
	{
		return callObjectMethod(
			"shutdownNow",
			"()Ljava/util/List;"
		);
	}
	inline java::util::concurrent::ForkJoinTask ForkJoinPool::submit(JObject arg0) const
	{
		return callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/ForkJoinTask;",
			arg0.object()
		);
	}
	inline java::util::concurrent::ForkJoinTask ForkJoinPool::submit(java::util::concurrent::ForkJoinTask arg0) const
	{
		return callObjectMethod(
			"submit",
			"(Ljava/util/concurrent/ForkJoinTask;)Ljava/util/concurrent/ForkJoinTask;",
			arg0.object()
		);
	}
	inline java::util::concurrent::ForkJoinTask ForkJoinPool::submit(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/ForkJoinTask;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	inline JString ForkJoinPool::toString() const
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
