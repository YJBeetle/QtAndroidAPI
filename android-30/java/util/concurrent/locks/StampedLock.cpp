#include "../../../io/ObjectInputStream.hpp"
#include "../TimeUnit.hpp"
#include "./StampedLock.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	// QJniObject forward
	StampedLock::StampedLock(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	StampedLock::StampedLock()
		: __JniBaseClass(
			"java.util.concurrent.locks.StampedLock",
			"()V"
		) {}
	
	// Methods
	jboolean StampedLock::isLockStamp(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"java.util.concurrent.locks.StampedLock",
			"isLockStamp",
			"(J)Z",
			arg0
		);
	}
	jboolean StampedLock::isOptimisticReadStamp(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"java.util.concurrent.locks.StampedLock",
			"isOptimisticReadStamp",
			"(J)Z",
			arg0
		);
	}
	jboolean StampedLock::isReadLockStamp(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"java.util.concurrent.locks.StampedLock",
			"isReadLockStamp",
			"(J)Z",
			arg0
		);
	}
	jboolean StampedLock::isWriteLockStamp(jlong arg0)
	{
		return callStaticMethod<jboolean>(
			"java.util.concurrent.locks.StampedLock",
			"isWriteLockStamp",
			"(J)Z",
			arg0
		);
	}
	__JniBaseClass StampedLock::asReadLock()
	{
		return callObjectMethod(
			"asReadLock",
			"()Ljava/util/concurrent/locks/Lock;"
		);
	}
	__JniBaseClass StampedLock::asReadWriteLock()
	{
		return callObjectMethod(
			"asReadWriteLock",
			"()Ljava/util/concurrent/locks/ReadWriteLock;"
		);
	}
	__JniBaseClass StampedLock::asWriteLock()
	{
		return callObjectMethod(
			"asWriteLock",
			"()Ljava/util/concurrent/locks/Lock;"
		);
	}
	jint StampedLock::getReadLockCount()
	{
		return callMethod<jint>(
			"getReadLockCount",
			"()I"
		);
	}
	jboolean StampedLock::isReadLocked()
	{
		return callMethod<jboolean>(
			"isReadLocked",
			"()Z"
		);
	}
	jboolean StampedLock::isWriteLocked()
	{
		return callMethod<jboolean>(
			"isWriteLocked",
			"()Z"
		);
	}
	jlong StampedLock::readLock()
	{
		return callMethod<jlong>(
			"readLock",
			"()J"
		);
	}
	jlong StampedLock::readLockInterruptibly()
	{
		return callMethod<jlong>(
			"readLockInterruptibly",
			"()J"
		);
	}
	jstring StampedLock::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong StampedLock::tryConvertToOptimisticRead(jlong arg0)
	{
		return callMethod<jlong>(
			"tryConvertToOptimisticRead",
			"(J)J",
			arg0
		);
	}
	jlong StampedLock::tryConvertToReadLock(jlong arg0)
	{
		return callMethod<jlong>(
			"tryConvertToReadLock",
			"(J)J",
			arg0
		);
	}
	jlong StampedLock::tryConvertToWriteLock(jlong arg0)
	{
		return callMethod<jlong>(
			"tryConvertToWriteLock",
			"(J)J",
			arg0
		);
	}
	jlong StampedLock::tryOptimisticRead()
	{
		return callMethod<jlong>(
			"tryOptimisticRead",
			"()J"
		);
	}
	jlong StampedLock::tryReadLock()
	{
		return callMethod<jlong>(
			"tryReadLock",
			"()J"
		);
	}
	jlong StampedLock::tryReadLock(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callMethod<jlong>(
			"tryReadLock",
			"(JLjava/util/concurrent/TimeUnit;)J",
			arg0,
			arg1.object()
		);
	}
	jboolean StampedLock::tryUnlockRead()
	{
		return callMethod<jboolean>(
			"tryUnlockRead",
			"()Z"
		);
	}
	jboolean StampedLock::tryUnlockWrite()
	{
		return callMethod<jboolean>(
			"tryUnlockWrite",
			"()Z"
		);
	}
	jlong StampedLock::tryWriteLock()
	{
		return callMethod<jlong>(
			"tryWriteLock",
			"()J"
		);
	}
	jlong StampedLock::tryWriteLock(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callMethod<jlong>(
			"tryWriteLock",
			"(JLjava/util/concurrent/TimeUnit;)J",
			arg0,
			arg1.object()
		);
	}
	void StampedLock::unlock(jlong arg0)
	{
		callMethod<void>(
			"unlock",
			"(J)V",
			arg0
		);
	}
	void StampedLock::unlockRead(jlong arg0)
	{
		callMethod<void>(
			"unlockRead",
			"(J)V",
			arg0
		);
	}
	void StampedLock::unlockWrite(jlong arg0)
	{
		callMethod<void>(
			"unlockWrite",
			"(J)V",
			arg0
		);
	}
	jboolean StampedLock::validate(jlong arg0)
	{
		return callMethod<jboolean>(
			"validate",
			"(J)Z",
			arg0
		);
	}
	jlong StampedLock::writeLock()
	{
		return callMethod<jlong>(
			"writeLock",
			"()J"
		);
	}
	jlong StampedLock::writeLockInterruptibly()
	{
		return callMethod<jlong>(
			"writeLockInterruptibly",
			"()J"
		);
	}
} // namespace java::util::concurrent::locks

