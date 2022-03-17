#pragma once

#include "../../../../JString.hpp"
#include "../../../lang/Thread.def.hpp"
#include "../TimeUnit.def.hpp"
#include "./ReentrantLock.def.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	// Constructors
	inline ReentrantLock::ReentrantLock()
		: JObject(
			"java.util.concurrent.locks.ReentrantLock",
			"()V"
		) {}
	inline ReentrantLock::ReentrantLock(jboolean arg0)
		: JObject(
			"java.util.concurrent.locks.ReentrantLock",
			"(Z)V",
			arg0
		) {}
	
	// Methods
	inline jint ReentrantLock::getHoldCount() const
	{
		return callMethod<jint>(
			"getHoldCount",
			"()I"
		);
	}
	inline jint ReentrantLock::getQueueLength() const
	{
		return callMethod<jint>(
			"getQueueLength",
			"()I"
		);
	}
	inline jint ReentrantLock::getWaitQueueLength(JObject arg0) const
	{
		return callMethod<jint>(
			"getWaitQueueLength",
			"(Ljava/util/concurrent/locks/Condition;)I",
			arg0.object()
		);
	}
	inline jboolean ReentrantLock::hasQueuedThread(java::lang::Thread arg0) const
	{
		return callMethod<jboolean>(
			"hasQueuedThread",
			"(Ljava/lang/Thread;)Z",
			arg0.object()
		);
	}
	inline jboolean ReentrantLock::hasQueuedThreads() const
	{
		return callMethod<jboolean>(
			"hasQueuedThreads",
			"()Z"
		);
	}
	inline jboolean ReentrantLock::hasWaiters(JObject arg0) const
	{
		return callMethod<jboolean>(
			"hasWaiters",
			"(Ljava/util/concurrent/locks/Condition;)Z",
			arg0.object()
		);
	}
	inline jboolean ReentrantLock::isFair() const
	{
		return callMethod<jboolean>(
			"isFair",
			"()Z"
		);
	}
	inline jboolean ReentrantLock::isHeldByCurrentThread() const
	{
		return callMethod<jboolean>(
			"isHeldByCurrentThread",
			"()Z"
		);
	}
	inline jboolean ReentrantLock::isLocked() const
	{
		return callMethod<jboolean>(
			"isLocked",
			"()Z"
		);
	}
	inline void ReentrantLock::lock() const
	{
		callMethod<void>(
			"lock",
			"()V"
		);
	}
	inline void ReentrantLock::lockInterruptibly() const
	{
		callMethod<void>(
			"lockInterruptibly",
			"()V"
		);
	}
	inline JObject ReentrantLock::newCondition() const
	{
		return callObjectMethod(
			"newCondition",
			"()Ljava/util/concurrent/locks/Condition;"
		);
	}
	inline JString ReentrantLock::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean ReentrantLock::tryLock() const
	{
		return callMethod<jboolean>(
			"tryLock",
			"()Z"
		);
	}
	inline jboolean ReentrantLock::tryLock(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callMethod<jboolean>(
			"tryLock",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void ReentrantLock::unlock() const
	{
		callMethod<void>(
			"unlock",
			"()V"
		);
	}
} // namespace java::util::concurrent::locks

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent::locks;
#endif
