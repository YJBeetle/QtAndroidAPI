#pragma once

#include "../../../io/ObjectInputStream.def.hpp"
#include "../../../../JString.hpp"
#include "../TimeUnit.def.hpp"
#include "./StampedLock.def.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	// Constructors
	inline StampedLock::StampedLock()
		: JObject(
			"java.util.concurrent.locks.StampedLock",
			"()V"
		) {}
	
	// Methods
	inline jboolean StampedLock::isLockStamp(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"java.util.concurrent.locks.StampedLock",
			"isLockStamp",
			"(J)Z",
			arg0
		);
	}
	inline jboolean StampedLock::isOptimisticReadStamp(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"java.util.concurrent.locks.StampedLock",
			"isOptimisticReadStamp",
			"(J)Z",
			arg0
		);
	}
	inline jboolean StampedLock::isReadLockStamp(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"java.util.concurrent.locks.StampedLock",
			"isReadLockStamp",
			"(J)Z",
			arg0
		);
	}
	inline jboolean StampedLock::isWriteLockStamp(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"java.util.concurrent.locks.StampedLock",
			"isWriteLockStamp",
			"(J)Z",
			arg0
		);
	}
	inline JObject StampedLock::asReadLock() const
	{
		return callObjectMethod(
			"asReadLock",
			"()Ljava/util/concurrent/locks/Lock;"
		);
	}
	inline JObject StampedLock::asReadWriteLock() const
	{
		return callObjectMethod(
			"asReadWriteLock",
			"()Ljava/util/concurrent/locks/ReadWriteLock;"
		);
	}
	inline JObject StampedLock::asWriteLock() const
	{
		return callObjectMethod(
			"asWriteLock",
			"()Ljava/util/concurrent/locks/Lock;"
		);
	}
	inline jint StampedLock::getReadLockCount() const
	{
		return callMethod<jint>(
			"getReadLockCount",
			"()I"
		);
	}
	inline jboolean StampedLock::isReadLocked() const
	{
		return callMethod<jboolean>(
			"isReadLocked",
			"()Z"
		);
	}
	inline jboolean StampedLock::isWriteLocked() const
	{
		return callMethod<jboolean>(
			"isWriteLocked",
			"()Z"
		);
	}
	inline jlong StampedLock::readLock() const
	{
		return callMethod<jlong>(
			"readLock",
			"()J"
		);
	}
	inline jlong StampedLock::readLockInterruptibly() const
	{
		return callMethod<jlong>(
			"readLockInterruptibly",
			"()J"
		);
	}
	inline JString StampedLock::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline jlong StampedLock::tryConvertToOptimisticRead(jlong arg0) const
	{
		return callMethod<jlong>(
			"tryConvertToOptimisticRead",
			"(J)J",
			arg0
		);
	}
	inline jlong StampedLock::tryConvertToReadLock(jlong arg0) const
	{
		return callMethod<jlong>(
			"tryConvertToReadLock",
			"(J)J",
			arg0
		);
	}
	inline jlong StampedLock::tryConvertToWriteLock(jlong arg0) const
	{
		return callMethod<jlong>(
			"tryConvertToWriteLock",
			"(J)J",
			arg0
		);
	}
	inline jlong StampedLock::tryOptimisticRead() const
	{
		return callMethod<jlong>(
			"tryOptimisticRead",
			"()J"
		);
	}
	inline jlong StampedLock::tryReadLock() const
	{
		return callMethod<jlong>(
			"tryReadLock",
			"()J"
		);
	}
	inline jlong StampedLock::tryReadLock(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callMethod<jlong>(
			"tryReadLock",
			"(JLjava/util/concurrent/TimeUnit;)J",
			arg0,
			arg1.object()
		);
	}
	inline jboolean StampedLock::tryUnlockRead() const
	{
		return callMethod<jboolean>(
			"tryUnlockRead",
			"()Z"
		);
	}
	inline jboolean StampedLock::tryUnlockWrite() const
	{
		return callMethod<jboolean>(
			"tryUnlockWrite",
			"()Z"
		);
	}
	inline jlong StampedLock::tryWriteLock() const
	{
		return callMethod<jlong>(
			"tryWriteLock",
			"()J"
		);
	}
	inline jlong StampedLock::tryWriteLock(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callMethod<jlong>(
			"tryWriteLock",
			"(JLjava/util/concurrent/TimeUnit;)J",
			arg0,
			arg1.object()
		);
	}
	inline void StampedLock::unlock(jlong arg0) const
	{
		callMethod<void>(
			"unlock",
			"(J)V",
			arg0
		);
	}
	inline void StampedLock::unlockRead(jlong arg0) const
	{
		callMethod<void>(
			"unlockRead",
			"(J)V",
			arg0
		);
	}
	inline void StampedLock::unlockWrite(jlong arg0) const
	{
		callMethod<void>(
			"unlockWrite",
			"(J)V",
			arg0
		);
	}
	inline jboolean StampedLock::validate(jlong arg0) const
	{
		return callMethod<jboolean>(
			"validate",
			"(J)Z",
			arg0
		);
	}
	inline jlong StampedLock::writeLock() const
	{
		return callMethod<jlong>(
			"writeLock",
			"()J"
		);
	}
	inline jlong StampedLock::writeLockInterruptibly() const
	{
		return callMethod<jlong>(
			"writeLockInterruptibly",
			"()J"
		);
	}
} // namespace java::util::concurrent::locks

// Base class headers

