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
	
	// QAndroidJniObject forward
	ForkJoinTask::ForkJoinTask(QAndroidJniObject obj) : JObject(obj) {}
	
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
	jboolean ForkJoinTask::cancel(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"cancel",
			"(Z)Z",
			arg0
		);
	}
	jboolean ForkJoinTask::compareAndSetForkJoinTaskTag(jshort arg0, jshort arg1) const
	{
		return callMethod<jboolean>(
			"compareAndSetForkJoinTaskTag",
			"(SS)Z",
			arg0,
			arg1
		);
	}
	void ForkJoinTask::complete(JObject arg0) const
	{
		callMethod<void>(
			"complete",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void ForkJoinTask::completeExceptionally(JThrowable arg0) const
	{
		callMethod<void>(
			"completeExceptionally",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		);
	}
	java::util::concurrent::ForkJoinTask ForkJoinTask::fork() const
	{
		return callObjectMethod(
			"fork",
			"()Ljava/util/concurrent/ForkJoinTask;"
		);
	}
	JObject ForkJoinTask::get() const
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		);
	}
	JObject ForkJoinTask::get(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callObjectMethod(
			"get",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	JThrowable ForkJoinTask::getException() const
	{
		return callObjectMethod(
			"getException",
			"()Ljava/lang/Throwable;"
		);
	}
	jshort ForkJoinTask::getForkJoinTaskTag() const
	{
		return callMethod<jshort>(
			"getForkJoinTaskTag",
			"()S"
		);
	}
	JObject ForkJoinTask::getRawResult() const
	{
		return callObjectMethod(
			"getRawResult",
			"()Ljava/lang/Object;"
		);
	}
	JObject ForkJoinTask::invoke() const
	{
		return callObjectMethod(
			"invoke",
			"()Ljava/lang/Object;"
		);
	}
	jboolean ForkJoinTask::isCancelled() const
	{
		return callMethod<jboolean>(
			"isCancelled",
			"()Z"
		);
	}
	jboolean ForkJoinTask::isCompletedAbnormally() const
	{
		return callMethod<jboolean>(
			"isCompletedAbnormally",
			"()Z"
		);
	}
	jboolean ForkJoinTask::isCompletedNormally() const
	{
		return callMethod<jboolean>(
			"isCompletedNormally",
			"()Z"
		);
	}
	jboolean ForkJoinTask::isDone() const
	{
		return callMethod<jboolean>(
			"isDone",
			"()Z"
		);
	}
	JObject ForkJoinTask::join() const
	{
		return callObjectMethod(
			"join",
			"()Ljava/lang/Object;"
		);
	}
	void ForkJoinTask::quietlyComplete() const
	{
		callMethod<void>(
			"quietlyComplete",
			"()V"
		);
	}
	void ForkJoinTask::quietlyInvoke() const
	{
		callMethod<void>(
			"quietlyInvoke",
			"()V"
		);
	}
	void ForkJoinTask::quietlyJoin() const
	{
		callMethod<void>(
			"quietlyJoin",
			"()V"
		);
	}
	void ForkJoinTask::reinitialize() const
	{
		callMethod<void>(
			"reinitialize",
			"()V"
		);
	}
	jshort ForkJoinTask::setForkJoinTaskTag(jshort arg0) const
	{
		return callMethod<jshort>(
			"setForkJoinTaskTag",
			"(S)S",
			arg0
		);
	}
	jboolean ForkJoinTask::tryUnfork() const
	{
		return callMethod<jboolean>(
			"tryUnfork",
			"()Z"
		);
	}
} // namespace java::util::concurrent

