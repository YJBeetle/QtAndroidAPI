#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JObject.hpp"
#include "../../lang/RuntimePermission.hpp"
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "../../security/AccessControlContext.hpp"
#include "./CountedCompleter.hpp"
#include "./ForkJoinTask.hpp"
#include "./ForkJoinWorkerThread.hpp"
#include "./TimeUnit.hpp"
#include "./ForkJoinPool.hpp"

namespace java::util::concurrent
{
	// Fields
	JObject ForkJoinPool::defaultForkJoinWorkerThreadFactory()
	{
		return getStaticObjectField(
			"java.util.concurrent.ForkJoinPool",
			"defaultForkJoinWorkerThreadFactory",
			"Ljava/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory;"
		);
	}
	
	// QJniObject forward
	ForkJoinPool::ForkJoinPool(QJniObject obj) : java::util::concurrent::AbstractExecutorService(obj) {}
	
	// Constructors
	ForkJoinPool::ForkJoinPool()
		: java::util::concurrent::AbstractExecutorService(
			"java.util.concurrent.ForkJoinPool",
			"()V"
		) {}
	ForkJoinPool::ForkJoinPool(jint arg0)
		: java::util::concurrent::AbstractExecutorService(
			"java.util.concurrent.ForkJoinPool",
			"(I)V",
			arg0
		) {}
	ForkJoinPool::ForkJoinPool(jint arg0, JObject arg1, JObject arg2, jboolean arg3)
		: java::util::concurrent::AbstractExecutorService(
			"java.util.concurrent.ForkJoinPool",
			"(ILjava/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory;Ljava/lang/Thread$UncaughtExceptionHandler;Z)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3
		) {}
	ForkJoinPool::ForkJoinPool(jint arg0, JObject arg1, JObject arg2, jboolean arg3, jint arg4, jint arg5, jint arg6, JObject arg7, jlong arg8, java::util::concurrent::TimeUnit arg9)
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
	java::util::concurrent::ForkJoinPool ForkJoinPool::commonPool()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.ForkJoinPool",
			"commonPool",
			"()Ljava/util/concurrent/ForkJoinPool;"
		);
	}
	jint ForkJoinPool::getCommonPoolParallelism()
	{
		return callStaticMethod<jint>(
			"java.util.concurrent.ForkJoinPool",
			"getCommonPoolParallelism",
			"()I"
		);
	}
	void ForkJoinPool::managedBlock(JObject arg0)
	{
		callStaticMethod<void>(
			"java.util.concurrent.ForkJoinPool",
			"managedBlock",
			"(Ljava/util/concurrent/ForkJoinPool$ManagedBlocker;)V",
			arg0.object()
		);
	}
	jboolean ForkJoinPool::awaitQuiescence(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callMethod<jboolean>(
			"awaitQuiescence",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean ForkJoinPool::awaitTermination(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callMethod<jboolean>(
			"awaitTermination",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	void ForkJoinPool::execute(JObject arg0)
	{
		callMethod<void>(
			"execute",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	void ForkJoinPool::execute(java::util::concurrent::ForkJoinTask arg0)
	{
		callMethod<void>(
			"execute",
			"(Ljava/util/concurrent/ForkJoinTask;)V",
			arg0.object()
		);
	}
	jint ForkJoinPool::getActiveThreadCount()
	{
		return callMethod<jint>(
			"getActiveThreadCount",
			"()I"
		);
	}
	jboolean ForkJoinPool::getAsyncMode()
	{
		return callMethod<jboolean>(
			"getAsyncMode",
			"()Z"
		);
	}
	JObject ForkJoinPool::getFactory()
	{
		return callObjectMethod(
			"getFactory",
			"()Ljava/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory;"
		);
	}
	jint ForkJoinPool::getParallelism()
	{
		return callMethod<jint>(
			"getParallelism",
			"()I"
		);
	}
	jint ForkJoinPool::getPoolSize()
	{
		return callMethod<jint>(
			"getPoolSize",
			"()I"
		);
	}
	jint ForkJoinPool::getQueuedSubmissionCount()
	{
		return callMethod<jint>(
			"getQueuedSubmissionCount",
			"()I"
		);
	}
	jlong ForkJoinPool::getQueuedTaskCount()
	{
		return callMethod<jlong>(
			"getQueuedTaskCount",
			"()J"
		);
	}
	jint ForkJoinPool::getRunningThreadCount()
	{
		return callMethod<jint>(
			"getRunningThreadCount",
			"()I"
		);
	}
	jlong ForkJoinPool::getStealCount()
	{
		return callMethod<jlong>(
			"getStealCount",
			"()J"
		);
	}
	JObject ForkJoinPool::getUncaughtExceptionHandler()
	{
		return callObjectMethod(
			"getUncaughtExceptionHandler",
			"()Ljava/lang/Thread$UncaughtExceptionHandler;"
		);
	}
	jboolean ForkJoinPool::hasQueuedSubmissions()
	{
		return callMethod<jboolean>(
			"hasQueuedSubmissions",
			"()Z"
		);
	}
	JObject ForkJoinPool::invoke(java::util::concurrent::ForkJoinTask arg0)
	{
		return callObjectMethod(
			"invoke",
			"(Ljava/util/concurrent/ForkJoinTask;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	JObject ForkJoinPool::invokeAll(JObject arg0)
	{
		return callObjectMethod(
			"invokeAll",
			"(Ljava/util/Collection;)Ljava/util/List;",
			arg0.object()
		);
	}
	jboolean ForkJoinPool::isQuiescent()
	{
		return callMethod<jboolean>(
			"isQuiescent",
			"()Z"
		);
	}
	jboolean ForkJoinPool::isShutdown()
	{
		return callMethod<jboolean>(
			"isShutdown",
			"()Z"
		);
	}
	jboolean ForkJoinPool::isTerminated()
	{
		return callMethod<jboolean>(
			"isTerminated",
			"()Z"
		);
	}
	jboolean ForkJoinPool::isTerminating()
	{
		return callMethod<jboolean>(
			"isTerminating",
			"()Z"
		);
	}
	void ForkJoinPool::shutdown()
	{
		callMethod<void>(
			"shutdown",
			"()V"
		);
	}
	JObject ForkJoinPool::shutdownNow()
	{
		return callObjectMethod(
			"shutdownNow",
			"()Ljava/util/List;"
		);
	}
	java::util::concurrent::ForkJoinTask ForkJoinPool::submit(JObject arg0)
	{
		return callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/ForkJoinTask;",
			arg0.object()
		);
	}
	java::util::concurrent::ForkJoinTask ForkJoinPool::submit(java::util::concurrent::ForkJoinTask arg0)
	{
		return callObjectMethod(
			"submit",
			"(Ljava/util/concurrent/ForkJoinTask;)Ljava/util/concurrent/ForkJoinTask;",
			arg0.object()
		);
	}
	java::util::concurrent::ForkJoinTask ForkJoinPool::submit(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/ForkJoinTask;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	JString ForkJoinPool::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent

