#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JThrowable.hpp"
#include "../../lang/ref/ReferenceQueue.hpp"
#include "./ForkJoinPool.hpp"
#include "./TimeUnit.hpp"
#include "./locks/ReentrantLock.hpp"
#include "./ForkJoinTask.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	ForkJoinTask::ForkJoinTask(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ForkJoinTask::ForkJoinTask()
		: JObject(
			"java.util.concurrent.ForkJoinTask",
			"()V"
		) {}
	
	// Methods
	java::util::concurrent::ForkJoinTask ForkJoinTask::adapt(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.ForkJoinTask",
			"adapt",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/ForkJoinTask;",
			arg0.object()
		);
	}
	java::util::concurrent::ForkJoinTask ForkJoinTask::adapt(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.ForkJoinTask",
			"adapt",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/ForkJoinTask;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	java::util::concurrent::ForkJoinPool ForkJoinTask::getPool()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.ForkJoinTask",
			"getPool",
			"()Ljava/util/concurrent/ForkJoinPool;"
		);
	}
	jint ForkJoinTask::getQueuedTaskCount()
	{
		return callStaticMethod<jint>(
			"java.util.concurrent.ForkJoinTask",
			"getQueuedTaskCount",
			"()I"
		);
	}
	jint ForkJoinTask::getSurplusQueuedTaskCount()
	{
		return callStaticMethod<jint>(
			"java.util.concurrent.ForkJoinTask",
			"getSurplusQueuedTaskCount",
			"()I"
		);
	}
	void ForkJoinTask::helpQuiesce()
	{
		callStaticMethod<void>(
			"java.util.concurrent.ForkJoinTask",
			"helpQuiesce",
			"()V"
		);
	}
	jboolean ForkJoinTask::inForkJoinPool()
	{
		return callStaticMethod<jboolean>(
			"java.util.concurrent.ForkJoinTask",
			"inForkJoinPool",
			"()Z"
		);
	}
	JObject ForkJoinTask::invokeAll(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.ForkJoinTask",
			"invokeAll",
			"(Ljava/util/Collection;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	void ForkJoinTask::invokeAll(JArray arg0)
	{
		callStaticMethod<void>(
			"java.util.concurrent.ForkJoinTask",
			"invokeAll",
			"([Ljava/util/concurrent/ForkJoinTask;)V",
			arg0.object<jarray>()
		);
	}
	void ForkJoinTask::invokeAll(java::util::concurrent::ForkJoinTask arg0, java::util::concurrent::ForkJoinTask arg1)
	{
		callStaticMethod<void>(
			"java.util.concurrent.ForkJoinTask",
			"invokeAll",
			"(Ljava/util/concurrent/ForkJoinTask;Ljava/util/concurrent/ForkJoinTask;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean ForkJoinTask::cancel(jboolean arg0)
	{
		return callMethod<jboolean>(
			"cancel",
			"(Z)Z",
			arg0
		);
	}
	jboolean ForkJoinTask::compareAndSetForkJoinTaskTag(jshort arg0, jshort arg1)
	{
		return callMethod<jboolean>(
			"compareAndSetForkJoinTaskTag",
			"(SS)Z",
			arg0,
			arg1
		);
	}
	void ForkJoinTask::complete(JObject arg0)
	{
		callMethod<void>(
			"complete",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void ForkJoinTask::completeExceptionally(JThrowable arg0)
	{
		callMethod<void>(
			"completeExceptionally",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		);
	}
	java::util::concurrent::ForkJoinTask ForkJoinTask::fork()
	{
		return callObjectMethod(
			"fork",
			"()Ljava/util/concurrent/ForkJoinTask;"
		);
	}
	JObject ForkJoinTask::get()
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		);
	}
	JObject ForkJoinTask::get(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callObjectMethod(
			"get",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	JThrowable ForkJoinTask::getException()
	{
		return callObjectMethod(
			"getException",
			"()Ljava/lang/Throwable;"
		);
	}
	jshort ForkJoinTask::getForkJoinTaskTag()
	{
		return callMethod<jshort>(
			"getForkJoinTaskTag",
			"()S"
		);
	}
	JObject ForkJoinTask::getRawResult()
	{
		return callObjectMethod(
			"getRawResult",
			"()Ljava/lang/Object;"
		);
	}
	JObject ForkJoinTask::invoke()
	{
		return callObjectMethod(
			"invoke",
			"()Ljava/lang/Object;"
		);
	}
	jboolean ForkJoinTask::isCancelled()
	{
		return callMethod<jboolean>(
			"isCancelled",
			"()Z"
		);
	}
	jboolean ForkJoinTask::isCompletedAbnormally()
	{
		return callMethod<jboolean>(
			"isCompletedAbnormally",
			"()Z"
		);
	}
	jboolean ForkJoinTask::isCompletedNormally()
	{
		return callMethod<jboolean>(
			"isCompletedNormally",
			"()Z"
		);
	}
	jboolean ForkJoinTask::isDone()
	{
		return callMethod<jboolean>(
			"isDone",
			"()Z"
		);
	}
	JObject ForkJoinTask::join()
	{
		return callObjectMethod(
			"join",
			"()Ljava/lang/Object;"
		);
	}
	void ForkJoinTask::quietlyComplete()
	{
		callMethod<void>(
			"quietlyComplete",
			"()V"
		);
	}
	void ForkJoinTask::quietlyInvoke()
	{
		callMethod<void>(
			"quietlyInvoke",
			"()V"
		);
	}
	void ForkJoinTask::quietlyJoin()
	{
		callMethod<void>(
			"quietlyJoin",
			"()V"
		);
	}
	void ForkJoinTask::reinitialize()
	{
		callMethod<void>(
			"reinitialize",
			"()V"
		);
	}
	jshort ForkJoinTask::setForkJoinTaskTag(jshort arg0)
	{
		return callMethod<jshort>(
			"setForkJoinTaskTag",
			"(S)S",
			arg0
		);
	}
	jboolean ForkJoinTask::tryUnfork()
	{
		return callMethod<jboolean>(
			"tryUnfork",
			"()Z"
		);
	}
} // namespace java::util::concurrent

