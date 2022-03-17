#pragma once

#include "../../../../JString.hpp"
#include "../../../lang/Thread.def.hpp"
#include "./AbstractQueuedLongSynchronizer_ConditionObject.def.hpp"
#include "./AbstractQueuedLongSynchronizer.def.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	// Constructors
	inline AbstractQueuedLongSynchronizer::AbstractQueuedLongSynchronizer()
		: java::util::concurrent::locks::AbstractOwnableSynchronizer(
			"java.util.concurrent.locks.AbstractQueuedLongSynchronizer",
			"()V"
		) {}
	
	// Methods
	inline void AbstractQueuedLongSynchronizer::acquire(jlong arg0) const
	{
		callMethod<void>(
			"acquire",
			"(J)V",
			arg0
		);
	}
	inline void AbstractQueuedLongSynchronizer::acquireInterruptibly(jlong arg0) const
	{
		callMethod<void>(
			"acquireInterruptibly",
			"(J)V",
			arg0
		);
	}
	inline void AbstractQueuedLongSynchronizer::acquireShared(jlong arg0) const
	{
		callMethod<void>(
			"acquireShared",
			"(J)V",
			arg0
		);
	}
	inline void AbstractQueuedLongSynchronizer::acquireSharedInterruptibly(jlong arg0) const
	{
		callMethod<void>(
			"acquireSharedInterruptibly",
			"(J)V",
			arg0
		);
	}
	inline JObject AbstractQueuedLongSynchronizer::getExclusiveQueuedThreads() const
	{
		return callObjectMethod(
			"getExclusiveQueuedThreads",
			"()Ljava/util/Collection;"
		);
	}
	inline java::lang::Thread AbstractQueuedLongSynchronizer::getFirstQueuedThread() const
	{
		return callObjectMethod(
			"getFirstQueuedThread",
			"()Ljava/lang/Thread;"
		);
	}
	inline jint AbstractQueuedLongSynchronizer::getQueueLength() const
	{
		return callMethod<jint>(
			"getQueueLength",
			"()I"
		);
	}
	inline JObject AbstractQueuedLongSynchronizer::getQueuedThreads() const
	{
		return callObjectMethod(
			"getQueuedThreads",
			"()Ljava/util/Collection;"
		);
	}
	inline JObject AbstractQueuedLongSynchronizer::getSharedQueuedThreads() const
	{
		return callObjectMethod(
			"getSharedQueuedThreads",
			"()Ljava/util/Collection;"
		);
	}
	inline jint AbstractQueuedLongSynchronizer::getWaitQueueLength(java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0) const
	{
		return callMethod<jint>(
			"getWaitQueueLength",
			"(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)I",
			arg0.object()
		);
	}
	inline JObject AbstractQueuedLongSynchronizer::getWaitingThreads(java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0) const
	{
		return callObjectMethod(
			"getWaitingThreads",
			"(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	inline jboolean AbstractQueuedLongSynchronizer::hasContended() const
	{
		return callMethod<jboolean>(
			"hasContended",
			"()Z"
		);
	}
	inline jboolean AbstractQueuedLongSynchronizer::hasQueuedPredecessors() const
	{
		return callMethod<jboolean>(
			"hasQueuedPredecessors",
			"()Z"
		);
	}
	inline jboolean AbstractQueuedLongSynchronizer::hasQueuedThreads() const
	{
		return callMethod<jboolean>(
			"hasQueuedThreads",
			"()Z"
		);
	}
	inline jboolean AbstractQueuedLongSynchronizer::hasWaiters(java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0) const
	{
		return callMethod<jboolean>(
			"hasWaiters",
			"(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)Z",
			arg0.object()
		);
	}
	inline jboolean AbstractQueuedLongSynchronizer::isQueued(java::lang::Thread arg0) const
	{
		return callMethod<jboolean>(
			"isQueued",
			"(Ljava/lang/Thread;)Z",
			arg0.object()
		);
	}
	inline jboolean AbstractQueuedLongSynchronizer::owns(java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0) const
	{
		return callMethod<jboolean>(
			"owns",
			"(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)Z",
			arg0.object()
		);
	}
	inline jboolean AbstractQueuedLongSynchronizer::release(jlong arg0) const
	{
		return callMethod<jboolean>(
			"release",
			"(J)Z",
			arg0
		);
	}
	inline jboolean AbstractQueuedLongSynchronizer::releaseShared(jlong arg0) const
	{
		return callMethod<jboolean>(
			"releaseShared",
			"(J)Z",
			arg0
		);
	}
	inline JString AbstractQueuedLongSynchronizer::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean AbstractQueuedLongSynchronizer::tryAcquireNanos(jlong arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"tryAcquireNanos",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	inline jboolean AbstractQueuedLongSynchronizer::tryAcquireSharedNanos(jlong arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"tryAcquireSharedNanos",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
} // namespace java::util::concurrent::locks

// Base class headers
#include "./AbstractOwnableSynchronizer.hpp"

