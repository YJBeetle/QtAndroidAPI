#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../io/ObjectInputStream.def.hpp"
#include "../../io/ObjectOutputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JThrowable.hpp"
#include "../../lang/ref/ReferenceQueue.def.hpp"
#include "./ForkJoinPool.def.hpp"
#include "./TimeUnit.def.hpp"
#include "./locks/ReentrantLock.def.hpp"
#include "./ForkJoinTask.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline ForkJoinTask::ForkJoinTask()
		: JObject(
			"java.util.concurrent.ForkJoinTask",
			"()V"
		) {}
	
	// Methods
	inline java::util::concurrent::ForkJoinTask ForkJoinTask::adapt(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.ForkJoinTask",
			"adapt",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/ForkJoinTask;",
			arg0.object()
		);
	}
	inline java::util::concurrent::ForkJoinTask ForkJoinTask::adapt(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.ForkJoinTask",
			"adapt",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/ForkJoinTask;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	inline java::util::concurrent::ForkJoinPool ForkJoinTask::getPool()
	{
		return callStaticObjectMethod(
			"java.util.concurrent.ForkJoinTask",
			"getPool",
			"()Ljava/util/concurrent/ForkJoinPool;"
		);
	}
	inline jint ForkJoinTask::getQueuedTaskCount()
	{
		return callStaticMethod<jint>(
			"java.util.concurrent.ForkJoinTask",
			"getQueuedTaskCount",
			"()I"
		);
	}
	inline jint ForkJoinTask::getSurplusQueuedTaskCount()
	{
		return callStaticMethod<jint>(
			"java.util.concurrent.ForkJoinTask",
			"getSurplusQueuedTaskCount",
			"()I"
		);
	}
	inline void ForkJoinTask::helpQuiesce()
	{
		callStaticMethod<void>(
			"java.util.concurrent.ForkJoinTask",
			"helpQuiesce",
			"()V"
		);
	}
	inline jboolean ForkJoinTask::inForkJoinPool()
	{
		return callStaticMethod<jboolean>(
			"java.util.concurrent.ForkJoinTask",
			"inForkJoinPool",
			"()Z"
		);
	}
	inline JObject ForkJoinTask::invokeAll(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.ForkJoinTask",
			"invokeAll",
			"(Ljava/util/Collection;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	inline void ForkJoinTask::invokeAll(JArray arg0)
	{
		callStaticMethod<void>(
			"java.util.concurrent.ForkJoinTask",
			"invokeAll",
			"([Ljava/util/concurrent/ForkJoinTask;)V",
			arg0.object<jarray>()
		);
	}
	inline void ForkJoinTask::invokeAll(java::util::concurrent::ForkJoinTask arg0, java::util::concurrent::ForkJoinTask arg1)
	{
		callStaticMethod<void>(
			"java.util.concurrent.ForkJoinTask",
			"invokeAll",
			"(Ljava/util/concurrent/ForkJoinTask;Ljava/util/concurrent/ForkJoinTask;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean ForkJoinTask::cancel(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"cancel",
			"(Z)Z",
			arg0
		);
	}
	inline jboolean ForkJoinTask::compareAndSetForkJoinTaskTag(jshort arg0, jshort arg1) const
	{
		return callMethod<jboolean>(
			"compareAndSetForkJoinTaskTag",
			"(SS)Z",
			arg0,
			arg1
		);
	}
	inline void ForkJoinTask::complete(JObject arg0) const
	{
		callMethod<void>(
			"complete",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void ForkJoinTask::completeExceptionally(JThrowable arg0) const
	{
		callMethod<void>(
			"completeExceptionally",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		);
	}
	inline java::util::concurrent::ForkJoinTask ForkJoinTask::fork() const
	{
		return callObjectMethod(
			"fork",
			"()Ljava/util/concurrent/ForkJoinTask;"
		);
	}
	inline JObject ForkJoinTask::get() const
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject ForkJoinTask::get(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callObjectMethod(
			"get",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	inline JThrowable ForkJoinTask::getException() const
	{
		return callObjectMethod(
			"getException",
			"()Ljava/lang/Throwable;"
		);
	}
	inline jshort ForkJoinTask::getForkJoinTaskTag() const
	{
		return callMethod<jshort>(
			"getForkJoinTaskTag",
			"()S"
		);
	}
	inline JObject ForkJoinTask::getRawResult() const
	{
		return callObjectMethod(
			"getRawResult",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject ForkJoinTask::invoke() const
	{
		return callObjectMethod(
			"invoke",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean ForkJoinTask::isCancelled() const
	{
		return callMethod<jboolean>(
			"isCancelled",
			"()Z"
		);
	}
	inline jboolean ForkJoinTask::isCompletedAbnormally() const
	{
		return callMethod<jboolean>(
			"isCompletedAbnormally",
			"()Z"
		);
	}
	inline jboolean ForkJoinTask::isCompletedNormally() const
	{
		return callMethod<jboolean>(
			"isCompletedNormally",
			"()Z"
		);
	}
	inline jboolean ForkJoinTask::isDone() const
	{
		return callMethod<jboolean>(
			"isDone",
			"()Z"
		);
	}
	inline JObject ForkJoinTask::join() const
	{
		return callObjectMethod(
			"join",
			"()Ljava/lang/Object;"
		);
	}
	inline void ForkJoinTask::quietlyComplete() const
	{
		callMethod<void>(
			"quietlyComplete",
			"()V"
		);
	}
	inline void ForkJoinTask::quietlyInvoke() const
	{
		callMethod<void>(
			"quietlyInvoke",
			"()V"
		);
	}
	inline void ForkJoinTask::quietlyJoin() const
	{
		callMethod<void>(
			"quietlyJoin",
			"()V"
		);
	}
	inline void ForkJoinTask::reinitialize() const
	{
		callMethod<void>(
			"reinitialize",
			"()V"
		);
	}
	inline jshort ForkJoinTask::setForkJoinTaskTag(jshort arg0) const
	{
		return callMethod<jshort>(
			"setForkJoinTaskTag",
			"(S)S",
			arg0
		);
	}
	inline jboolean ForkJoinTask::tryUnfork() const
	{
		return callMethod<jboolean>(
			"tryUnfork",
			"()Z"
		);
	}
} // namespace java::util::concurrent

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent;
#endif
