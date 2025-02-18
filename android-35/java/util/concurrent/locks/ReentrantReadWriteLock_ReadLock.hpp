#pragma once

#include "../../../../JString.hpp"
#include "../TimeUnit.def.hpp"
#include "./ReentrantReadWriteLock.def.hpp"
#include "./ReentrantReadWriteLock_ReadLock.def.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void ReentrantReadWriteLock_ReadLock::lock() const
	{
		callMethod<void>(
			"lock",
			"()V"
		);
	}
	inline void ReentrantReadWriteLock_ReadLock::lockInterruptibly() const
	{
		callMethod<void>(
			"lockInterruptibly",
			"()V"
		);
	}
	inline JObject ReentrantReadWriteLock_ReadLock::newCondition() const
	{
		return callObjectMethod(
			"newCondition",
			"()Ljava/util/concurrent/locks/Condition;"
		);
	}
	inline JString ReentrantReadWriteLock_ReadLock::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean ReentrantReadWriteLock_ReadLock::tryLock() const
	{
		return callMethod<jboolean>(
			"tryLock",
			"()Z"
		);
	}
	inline jboolean ReentrantReadWriteLock_ReadLock::tryLock(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callMethod<jboolean>(
			"tryLock",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void ReentrantReadWriteLock_ReadLock::unlock() const
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
