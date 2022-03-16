#include "../../../../JString.hpp"
#include "../../../lang/Thread.hpp"
#include "./AbstractQueuedSynchronizer_ConditionObject.hpp"
#include "./AbstractQueuedSynchronizer.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	// Constructors
	
	// Methods
	void AbstractQueuedSynchronizer::acquire(jint arg0) const
	{
		callMethod<void>(
			"acquire",
			"(I)V",
			arg0
		);
	}
	void AbstractQueuedSynchronizer::acquireInterruptibly(jint arg0) const
	{
		callMethod<void>(
			"acquireInterruptibly",
			"(I)V",
			arg0
		);
	}
	void AbstractQueuedSynchronizer::acquireShared(jint arg0) const
	{
		callMethod<void>(
			"acquireShared",
			"(I)V",
			arg0
		);
	}
	void AbstractQueuedSynchronizer::acquireSharedInterruptibly(jint arg0) const
	{
		callMethod<void>(
			"acquireSharedInterruptibly",
			"(I)V",
			arg0
		);
	}
	JObject AbstractQueuedSynchronizer::getExclusiveQueuedThreads() const
	{
		return callObjectMethod(
			"getExclusiveQueuedThreads",
			"()Ljava/util/Collection;"
		);
	}
	java::lang::Thread AbstractQueuedSynchronizer::getFirstQueuedThread() const
	{
		return callObjectMethod(
			"getFirstQueuedThread",
			"()Ljava/lang/Thread;"
		);
	}
	jint AbstractQueuedSynchronizer::getQueueLength() const
	{
		return callMethod<jint>(
			"getQueueLength",
			"()I"
		);
	}
	JObject AbstractQueuedSynchronizer::getQueuedThreads() const
	{
		return callObjectMethod(
			"getQueuedThreads",
			"()Ljava/util/Collection;"
		);
	}
	JObject AbstractQueuedSynchronizer::getSharedQueuedThreads() const
	{
		return callObjectMethod(
			"getSharedQueuedThreads",
			"()Ljava/util/Collection;"
		);
	}
	jint AbstractQueuedSynchronizer::getWaitQueueLength(java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0) const
	{
		return callMethod<jint>(
			"getWaitQueueLength",
			"(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)I",
			arg0.object()
		);
	}
	JObject AbstractQueuedSynchronizer::getWaitingThreads(java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0) const
	{
		return callObjectMethod(
			"getWaitingThreads",
			"(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	jboolean AbstractQueuedSynchronizer::hasContended() const
	{
		return callMethod<jboolean>(
			"hasContended",
			"()Z"
		);
	}
	jboolean AbstractQueuedSynchronizer::hasQueuedPredecessors() const
	{
		return callMethod<jboolean>(
			"hasQueuedPredecessors",
			"()Z"
		);
	}
	jboolean AbstractQueuedSynchronizer::hasQueuedThreads() const
	{
		return callMethod<jboolean>(
			"hasQueuedThreads",
			"()Z"
		);
	}
	jboolean AbstractQueuedSynchronizer::hasWaiters(java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0) const
	{
		return callMethod<jboolean>(
			"hasWaiters",
			"(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Z",
			arg0.object()
		);
	}
	jboolean AbstractQueuedSynchronizer::isQueued(java::lang::Thread arg0) const
	{
		return callMethod<jboolean>(
			"isQueued",
			"(Ljava/lang/Thread;)Z",
			arg0.object()
		);
	}
	jboolean AbstractQueuedSynchronizer::owns(java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0) const
	{
		return callMethod<jboolean>(
			"owns",
			"(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Z",
			arg0.object()
		);
	}
	jboolean AbstractQueuedSynchronizer::release(jint arg0) const
	{
		return callMethod<jboolean>(
			"release",
			"(I)Z",
			arg0
		);
	}
	jboolean AbstractQueuedSynchronizer::releaseShared(jint arg0) const
	{
		return callMethod<jboolean>(
			"releaseShared",
			"(I)Z",
			arg0
		);
	}
	JString AbstractQueuedSynchronizer::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	jboolean AbstractQueuedSynchronizer::tryAcquireNanos(jint arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"tryAcquireNanos",
			"(IJ)Z",
			arg0,
			arg1
		);
	}
	jboolean AbstractQueuedSynchronizer::tryAcquireSharedNanos(jint arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"tryAcquireSharedNanos",
			"(IJ)Z",
			arg0,
			arg1
		);
	}
} // namespace java::util::concurrent::locks

