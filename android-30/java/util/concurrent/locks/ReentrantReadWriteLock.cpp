#include "../../../../JString.hpp"
#include "../../../lang/Thread.hpp"
#include "./ReentrantReadWriteLock_ReadLock.hpp"
#include "./ReentrantReadWriteLock_WriteLock.hpp"
#include "./ReentrantReadWriteLock.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	// Constructors
	ReentrantReadWriteLock::ReentrantReadWriteLock()
		: JObject(
			"java.util.concurrent.locks.ReentrantReadWriteLock",
			"()V"
		) {}
	ReentrantReadWriteLock::ReentrantReadWriteLock(jboolean arg0)
		: JObject(
			"java.util.concurrent.locks.ReentrantReadWriteLock",
			"(Z)V",
			arg0
		) {}
	
	// Methods
	jint ReentrantReadWriteLock::getQueueLength() const
	{
		return callMethod<jint>(
			"getQueueLength",
			"()I"
		);
	}
	jint ReentrantReadWriteLock::getReadHoldCount() const
	{
		return callMethod<jint>(
			"getReadHoldCount",
			"()I"
		);
	}
	jint ReentrantReadWriteLock::getReadLockCount() const
	{
		return callMethod<jint>(
			"getReadLockCount",
			"()I"
		);
	}
	jint ReentrantReadWriteLock::getWaitQueueLength(JObject arg0) const
	{
		return callMethod<jint>(
			"getWaitQueueLength",
			"(Ljava/util/concurrent/locks/Condition;)I",
			arg0.object()
		);
	}
	jint ReentrantReadWriteLock::getWriteHoldCount() const
	{
		return callMethod<jint>(
			"getWriteHoldCount",
			"()I"
		);
	}
	jboolean ReentrantReadWriteLock::hasQueuedThread(java::lang::Thread arg0) const
	{
		return callMethod<jboolean>(
			"hasQueuedThread",
			"(Ljava/lang/Thread;)Z",
			arg0.object()
		);
	}
	jboolean ReentrantReadWriteLock::hasQueuedThreads() const
	{
		return callMethod<jboolean>(
			"hasQueuedThreads",
			"()Z"
		);
	}
	jboolean ReentrantReadWriteLock::hasWaiters(JObject arg0) const
	{
		return callMethod<jboolean>(
			"hasWaiters",
			"(Ljava/util/concurrent/locks/Condition;)Z",
			arg0.object()
		);
	}
	jboolean ReentrantReadWriteLock::isFair() const
	{
		return callMethod<jboolean>(
			"isFair",
			"()Z"
		);
	}
	jboolean ReentrantReadWriteLock::isWriteLocked() const
	{
		return callMethod<jboolean>(
			"isWriteLocked",
			"()Z"
		);
	}
	jboolean ReentrantReadWriteLock::isWriteLockedByCurrentThread() const
	{
		return callMethod<jboolean>(
			"isWriteLockedByCurrentThread",
			"()Z"
		);
	}
	java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock ReentrantReadWriteLock::readLock() const
	{
		return callObjectMethod(
			"readLock",
			"()Ljava/util/concurrent/locks/ReentrantReadWriteLock$ReadLock;"
		);
	}
	JString ReentrantReadWriteLock::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock ReentrantReadWriteLock::writeLock() const
	{
		return callObjectMethod(
			"writeLock",
			"()Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;"
		);
	}
} // namespace java::util::concurrent::locks

