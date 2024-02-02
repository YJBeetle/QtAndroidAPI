#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Thread.def.hpp"
#include "../../../JThrowable.hpp"
#include "./CompletableFuture.def.hpp"
#include "./TimeUnit.def.hpp"
#include "./locks/ReentrantLock.def.hpp"
#include "./SubmissionPublisher.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline SubmissionPublisher::SubmissionPublisher()
		: JObject(
			"java.util.concurrent.SubmissionPublisher",
			"()V"
		) {}
	inline SubmissionPublisher::SubmissionPublisher(JObject arg0, jint arg1)
		: JObject(
			"java.util.concurrent.SubmissionPublisher",
			"(Ljava/util/concurrent/Executor;I)V",
			arg0.object(),
			arg1
		) {}
	inline SubmissionPublisher::SubmissionPublisher(JObject arg0, jint arg1, JObject arg2)
		: JObject(
			"java.util.concurrent.SubmissionPublisher",
			"(Ljava/util/concurrent/Executor;ILjava/util/function/BiConsumer;)V",
			arg0.object(),
			arg1,
			arg2.object()
		) {}
	
	// Methods
	inline void SubmissionPublisher::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void SubmissionPublisher::closeExceptionally(JThrowable arg0) const
	{
		callMethod<void>(
			"closeExceptionally",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		);
	}
	inline java::util::concurrent::CompletableFuture SubmissionPublisher::consume(JObject arg0) const
	{
		return callObjectMethod(
			"consume",
			"(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	inline jint SubmissionPublisher::estimateMaximumLag() const
	{
		return callMethod<jint>(
			"estimateMaximumLag",
			"()I"
		);
	}
	inline jlong SubmissionPublisher::estimateMinimumDemand() const
	{
		return callMethod<jlong>(
			"estimateMinimumDemand",
			"()J"
		);
	}
	inline JThrowable SubmissionPublisher::getClosedException() const
	{
		return callObjectMethod(
			"getClosedException",
			"()Ljava/lang/Throwable;"
		);
	}
	inline JObject SubmissionPublisher::getExecutor() const
	{
		return callObjectMethod(
			"getExecutor",
			"()Ljava/util/concurrent/Executor;"
		);
	}
	inline jint SubmissionPublisher::getMaxBufferCapacity() const
	{
		return callMethod<jint>(
			"getMaxBufferCapacity",
			"()I"
		);
	}
	inline jint SubmissionPublisher::getNumberOfSubscribers() const
	{
		return callMethod<jint>(
			"getNumberOfSubscribers",
			"()I"
		);
	}
	inline JObject SubmissionPublisher::getSubscribers() const
	{
		return callObjectMethod(
			"getSubscribers",
			"()Ljava/util/List;"
		);
	}
	inline jboolean SubmissionPublisher::hasSubscribers() const
	{
		return callMethod<jboolean>(
			"hasSubscribers",
			"()Z"
		);
	}
	inline jboolean SubmissionPublisher::isClosed() const
	{
		return callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	inline jboolean SubmissionPublisher::isSubscribed(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isSubscribed",
			"(Ljava/util/concurrent/Flow$Subscriber;)Z",
			arg0.object()
		);
	}
	inline jint SubmissionPublisher::offer(JObject arg0, JObject arg1) const
	{
		return callMethod<jint>(
			"offer",
			"(Ljava/lang/Object;Ljava/util/function/BiPredicate;)I",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline jint SubmissionPublisher::offer(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2, JObject arg3) const
	{
		return callMethod<jint>(
			"offer",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;Ljava/util/function/BiPredicate;)I",
			arg0.object<jobject>(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	inline jint SubmissionPublisher::submit(JObject arg0) const
	{
		return callMethod<jint>(
			"submit",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline void SubmissionPublisher::subscribe(JObject arg0) const
	{
		callMethod<void>(
			"subscribe",
			"(Ljava/util/concurrent/Flow$Subscriber;)V",
			arg0.object()
		);
	}
} // namespace java::util::concurrent

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent;
#endif
