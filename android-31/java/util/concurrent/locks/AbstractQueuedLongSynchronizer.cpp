#include "../../../../JString.hpp"
#include "../../../lang/Thread.hpp"
#include "./AbstractQueuedLongSynchronizer_ConditionObject.hpp"
#include "./AbstractQueuedLongSynchronizer.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	// QJniObject forward
	AbstractQueuedLongSynchronizer::AbstractQueuedLongSynchronizer(QJniObject obj) : java::util::concurrent::locks::AbstractOwnableSynchronizer(obj) {}
	
	// Constructors
	AbstractQueuedLongSynchronizer::AbstractQueuedLongSynchronizer()
		: java::util::concurrent::locks::AbstractOwnableSynchronizer(
			"java.util.concurrent.locks.AbstractQueuedLongSynchronizer",
			"()V"
		) {}
	
	// Methods
	void AbstractQueuedLongSynchronizer::acquire(jlong arg0)
	{
		callMethod<void>(
			"acquire",
			"(J)V",
			arg0
		);
	}
	void AbstractQueuedLongSynchronizer::acquireInterruptibly(jlong arg0)
	{
		callMethod<void>(
			"acquireInterruptibly",
			"(J)V",
			arg0
		);
	}
	void AbstractQueuedLongSynchronizer::acquireShared(jlong arg0)
	{
		callMethod<void>(
			"acquireShared",
			"(J)V",
			arg0
		);
	}
	void AbstractQueuedLongSynchronizer::acquireSharedInterruptibly(jlong arg0)
	{
		callMethod<void>(
			"acquireSharedInterruptibly",
			"(J)V",
			arg0
		);
	}
	JObject AbstractQueuedLongSynchronizer::getExclusiveQueuedThreads()
	{
		return callObjectMethod(
			"getExclusiveQueuedThreads",
			"()Ljava/util/Collection;"
		);
	}
	java::lang::Thread AbstractQueuedLongSynchronizer::getFirstQueuedThread()
	{
		return callObjectMethod(
			"getFirstQueuedThread",
			"()Ljava/lang/Thread;"
		);
	}
	jint AbstractQueuedLongSynchronizer::getQueueLength()
	{
		return callMethod<jint>(
			"getQueueLength",
			"()I"
		);
	}
	JObject AbstractQueuedLongSynchronizer::getQueuedThreads()
	{
		return callObjectMethod(
			"getQueuedThreads",
			"()Ljava/util/Collection;"
		);
	}
	JObject AbstractQueuedLongSynchronizer::getSharedQueuedThreads()
	{
		return callObjectMethod(
			"getSharedQueuedThreads",
			"()Ljava/util/Collection;"
		);
	}
	jint AbstractQueuedLongSynchronizer::getWaitQueueLength(java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0)
	{
		return callMethod<jint>(
			"getWaitQueueLength",
			"(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)I",
			arg0.object()
		);
	}
	JObject AbstractQueuedLongSynchronizer::getWaitingThreads(java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0)
	{
		return callObjectMethod(
			"getWaitingThreads",
			"(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	jboolean AbstractQueuedLongSynchronizer::hasContended()
	{
		return callMethod<jboolean>(
			"hasContended",
			"()Z"
		);
	}
	jboolean AbstractQueuedLongSynchronizer::hasQueuedPredecessors()
	{
		return callMethod<jboolean>(
			"hasQueuedPredecessors",
			"()Z"
		);
	}
	jboolean AbstractQueuedLongSynchronizer::hasQueuedThreads()
	{
		return callMethod<jboolean>(
			"hasQueuedThreads",
			"()Z"
		);
	}
	jboolean AbstractQueuedLongSynchronizer::hasWaiters(java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0)
	{
		return callMethod<jboolean>(
			"hasWaiters",
			"(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)Z",
			arg0.object()
		);
	}
	jboolean AbstractQueuedLongSynchronizer::isQueued(java::lang::Thread arg0)
	{
		return callMethod<jboolean>(
			"isQueued",
			"(Ljava/lang/Thread;)Z",
			arg0.object()
		);
	}
	jboolean AbstractQueuedLongSynchronizer::owns(java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0)
	{
		return callMethod<jboolean>(
			"owns",
			"(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)Z",
			arg0.object()
		);
	}
	jboolean AbstractQueuedLongSynchronizer::release(jlong arg0)
	{
		return callMethod<jboolean>(
			"release",
			"(J)Z",
			arg0
		);
	}
	jboolean AbstractQueuedLongSynchronizer::releaseShared(jlong arg0)
	{
		return callMethod<jboolean>(
			"releaseShared",
			"(J)Z",
			arg0
		);
	}
	JString AbstractQueuedLongSynchronizer::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	jboolean AbstractQueuedLongSynchronizer::tryAcquireNanos(jlong arg0, jlong arg1)
	{
		return callMethod<jboolean>(
			"tryAcquireNanos",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	jboolean AbstractQueuedLongSynchronizer::tryAcquireSharedNanos(jlong arg0, jlong arg1)
	{
		return callMethod<jboolean>(
			"tryAcquireSharedNanos",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
} // namespace java::util::concurrent::locks

