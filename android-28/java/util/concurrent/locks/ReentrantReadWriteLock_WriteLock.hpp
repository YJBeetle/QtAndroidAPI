#pragma once

#include "../../../../JString.hpp"
#include "../TimeUnit.def.hpp"
#include "./ReentrantReadWriteLock.def.hpp"
#include "./ReentrantReadWriteLock_WriteLock.def.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint ReentrantReadWriteLock_WriteLock::getHoldCount() const
	{
		return callMethod<jint>(
			"getHoldCount",
			"()I"
		);
	}
	inline jboolean ReentrantReadWriteLock_WriteLock::isHeldByCurrentThread() const
	{
		return callMethod<jboolean>(
			"isHeldByCurrentThread",
			"()Z"
		);
	}
	inline void ReentrantReadWriteLock_WriteLock::lock() const
	{
		callMethod<void>(
			"lock",
			"()V"
		);
	}
	inline void ReentrantReadWriteLock_WriteLock::lockInterruptibly() const
	{
		callMethod<void>(
			"lockInterruptibly",
			"()V"
		);
	}
	inline JObject ReentrantReadWriteLock_WriteLock::newCondition() const
	{
		return callObjectMethod(
			"newCondition",
			"()Ljava/util/concurrent/locks/Condition;"
		);
	}
	inline JString ReentrantReadWriteLock_WriteLock::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean ReentrantReadWriteLock_WriteLock::tryLock() const
	{
		return callMethod<jboolean>(
			"tryLock",
			"()Z"
		);
	}
	inline jboolean ReentrantReadWriteLock_WriteLock::tryLock(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callMethod<jboolean>(
			"tryLock",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void ReentrantReadWriteLock_WriteLock::unlock() const
	{
		callMethod<void>(
			"unlock",
			"()V"
		);
	}
} // namespace java::util::concurrent::locks

// Base class headers

