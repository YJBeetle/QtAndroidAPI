#include "../../../io/ObjectInputStream.hpp"
#include "../TimeUnit.hpp"
#include "./StampedLock.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	StampedLock::StampedLock(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StampedLock::StampedLock()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.locks.StampedLock",
			"()V"
		);
	}
	
	// Methods
	jboolean StampedLock::isLockStamp(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.util.concurrent.locks.StampedLock",
			"isLockStamp",
			"(J)Z",
			arg0
		);
	}
	jboolean StampedLock::isOptimisticReadStamp(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.util.concurrent.locks.StampedLock",
			"isOptimisticReadStamp",
			"(J)Z",
			arg0
		);
	}
	jboolean StampedLock::isReadLockStamp(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.util.concurrent.locks.StampedLock",
			"isReadLockStamp",
			"(J)Z",
			arg0
		);
	}
	jboolean StampedLock::isWriteLockStamp(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.util.concurrent.locks.StampedLock",
			"isWriteLockStamp",
			"(J)Z",
			arg0
		);
	}
	QAndroidJniObject StampedLock::asReadLock()
	{
		return __thiz.callObjectMethod(
			"asReadLock",
			"()Ljava/util/concurrent/locks/Lock;"
		);
	}
	QAndroidJniObject StampedLock::asReadWriteLock()
	{
		return __thiz.callObjectMethod(
			"asReadWriteLock",
			"()Ljava/util/concurrent/locks/ReadWriteLock;"
		);
	}
	QAndroidJniObject StampedLock::asWriteLock()
	{
		return __thiz.callObjectMethod(
			"asWriteLock",
			"()Ljava/util/concurrent/locks/Lock;"
		);
	}
	jint StampedLock::getReadLockCount()
	{
		return __thiz.callMethod<jint>(
			"getReadLockCount",
			"()I"
		);
	}
	jboolean StampedLock::isReadLocked()
	{
		return __thiz.callMethod<jboolean>(
			"isReadLocked",
			"()Z"
		);
	}
	jboolean StampedLock::isWriteLocked()
	{
		return __thiz.callMethod<jboolean>(
			"isWriteLocked",
			"()Z"
		);
	}
	jlong StampedLock::readLock()
	{
		return __thiz.callMethod<jlong>(
			"readLock",
			"()J"
		);
	}
	jlong StampedLock::readLockInterruptibly()
	{
		return __thiz.callMethod<jlong>(
			"readLockInterruptibly",
			"()J"
		);
	}
	jstring StampedLock::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong StampedLock::tryConvertToOptimisticRead(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"tryConvertToOptimisticRead",
			"(J)J",
			arg0
		);
	}
	jlong StampedLock::tryConvertToReadLock(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"tryConvertToReadLock",
			"(J)J",
			arg0
		);
	}
	jlong StampedLock::tryConvertToWriteLock(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"tryConvertToWriteLock",
			"(J)J",
			arg0
		);
	}
	jlong StampedLock::tryOptimisticRead()
	{
		return __thiz.callMethod<jlong>(
			"tryOptimisticRead",
			"()J"
		);
	}
	jlong StampedLock::tryReadLock()
	{
		return __thiz.callMethod<jlong>(
			"tryReadLock",
			"()J"
		);
	}
	jlong StampedLock::tryReadLock(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jlong>(
			"tryReadLock",
			"(JLjava/util/concurrent/TimeUnit;)J",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean StampedLock::tryUnlockRead()
	{
		return __thiz.callMethod<jboolean>(
			"tryUnlockRead",
			"()Z"
		);
	}
	jboolean StampedLock::tryUnlockWrite()
	{
		return __thiz.callMethod<jboolean>(
			"tryUnlockWrite",
			"()Z"
		);
	}
	jlong StampedLock::tryWriteLock()
	{
		return __thiz.callMethod<jlong>(
			"tryWriteLock",
			"()J"
		);
	}
	jlong StampedLock::tryWriteLock(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jlong>(
			"tryWriteLock",
			"(JLjava/util/concurrent/TimeUnit;)J",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void StampedLock::unlock(jlong arg0)
	{
		__thiz.callMethod<void>(
			"unlock",
			"(J)V",
			arg0
		);
	}
	void StampedLock::unlockRead(jlong arg0)
	{
		__thiz.callMethod<void>(
			"unlockRead",
			"(J)V",
			arg0
		);
	}
	void StampedLock::unlockWrite(jlong arg0)
	{
		__thiz.callMethod<void>(
			"unlockWrite",
			"(J)V",
			arg0
		);
	}
	jboolean StampedLock::validate(jlong arg0)
	{
		return __thiz.callMethod<jboolean>(
			"validate",
			"(J)Z",
			arg0
		);
	}
	jlong StampedLock::writeLock()
	{
		return __thiz.callMethod<jlong>(
			"writeLock",
			"()J"
		);
	}
	jlong StampedLock::writeLockInterruptibly()
	{
		return __thiz.callMethod<jlong>(
			"writeLockInterruptibly",
			"()J"
		);
	}
} // namespace java::util::concurrent::locks

