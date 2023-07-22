#pragma once

#include "../../../../JString.hpp"
#include "../../../lang/Thread.def.hpp"
#include "./ReentrantReadWriteLock_ReadLock.def.hpp"
#include "./ReentrantReadWriteLock_WriteLock.def.hpp"
#include "./ReentrantReadWriteLock.def.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	// Constructors
	inline ReentrantReadWriteLock::ReentrantReadWriteLock()
		: JObject(
			"java.util.concurrent.locks.ReentrantReadWriteLock",
			"()V"
		) {}
	inline ReentrantReadWriteLock::ReentrantReadWriteLock(jboolean arg0)
		: JObject(
			"java.util.concurrent.locks.ReentrantReadWriteLock",
			"(Z)V",
			arg0
		) {}
	
	// Methods
	inline jint ReentrantReadWriteLock::getQueueLength() const
	{
		return callMethod<jint>(
			"getQueueLength",
			"()I"
		);
	}
	inline jint ReentrantReadWriteLock::getReadHoldCount() const
	{
		return callMethod<jint>(
			"getReadHoldCount",
			"()I"
		);
	}
	inline jint ReentrantReadWriteLock::getReadLockCount() const
	{
		return callMethod<jint>(
			"getReadLockCount",
			"()I"
		);
	}
	inline jint ReentrantReadWriteLock::getWaitQueueLength(JObject arg0) const
	{
		return callMethod<jint>(
			"getWaitQueueLength",
			"(Ljava/util/concurrent/locks/Condition;)I",
			arg0.object()
		);
	}
	inline jint ReentrantReadWriteLock::getWriteHoldCount() const
	{
		return callMethod<jint>(
			"getWriteHoldCount",
			"()I"
		);
	}
	inline jboolean ReentrantReadWriteLock::hasQueuedThread(java::lang::Thread arg0) const
	{
		return callMethod<jboolean>(
			"hasQueuedThread",
			"(Ljava/lang/Thread;)Z",
			arg0.object()
		);
	}
	inline jboolean ReentrantReadWriteLock::hasQueuedThreads() const
	{
		return callMethod<jboolean>(
			"hasQueuedThreads",
			"()Z"
		);
	}
	inline jboolean ReentrantReadWriteLock::hasWaiters(JObject arg0) const
	{
		return callMethod<jboolean>(
			"hasWaiters",
			"(Ljava/util/concurrent/locks/Condition;)Z",
			arg0.object()
		);
	}
	inline jboolean ReentrantReadWriteLock::isFair() const
	{
		return callMethod<jboolean>(
			"isFair",
			"()Z"
		);
	}
	inline jboolean ReentrantReadWriteLock::isWriteLocked() const
	{
		return callMethod<jboolean>(
			"isWriteLocked",
			"()Z"
		);
	}
	inline jboolean ReentrantReadWriteLock::isWriteLockedByCurrentThread() const
	{
		return callMethod<jboolean>(
			"isWriteLockedByCurrentThread",
			"()Z"
		);
	}
	inline java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock ReentrantReadWriteLock::readLock() const
	{
		return callObjectMethod(
			"readLock",
			"()Ljava/util/concurrent/locks/ReentrantReadWriteLock$ReadLock;"
		);
	}
	inline JString ReentrantReadWriteLock::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock ReentrantReadWriteLock::writeLock() const
	{
		return callObjectMethod(
			"writeLock",
			"()Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;"
		);
	}
} // namespace java::util::concurrent::locks

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent::locks;
#endif
