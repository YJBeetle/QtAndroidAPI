#pragma once

#ifndef JAVA_UTIL_CONCURRENT_LOCKS_STAMPEDLOCK
#define JAVA_UTIL_CONCURRENT_LOCKS_STAMPEDLOCK

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}

namespace __jni_impl::java::util::concurrent::locks
{
	class StampedLock : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jboolean validate(jlong arg0);
		void unlock(jlong arg0);
		jlong readLock();
		jlong writeLock();
		jlong tryReadLock(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		jlong tryReadLock();
		jint getReadLockCount();
		jlong tryWriteLock(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		jlong tryWriteLock();
		jboolean isWriteLocked();
		void unlockWrite(jlong arg0);
		void unlockRead(jlong arg0);
		jlong writeLockInterruptibly();
		jlong readLockInterruptibly();
		jlong tryOptimisticRead();
		jlong tryConvertToWriteLock(jlong arg0);
		jlong tryConvertToReadLock(jlong arg0);
		jlong tryConvertToOptimisticRead(jlong arg0);
		jboolean tryUnlockWrite();
		jboolean tryUnlockRead();
		jboolean isReadLocked();
		static jboolean isWriteLockStamp(jlong arg0);
		static jboolean isReadLockStamp(jlong arg0);
		static jboolean isLockStamp(jlong arg0);
		static jboolean isOptimisticReadStamp(jlong arg0);
		QAndroidJniObject asReadLock();
		QAndroidJniObject asWriteLock();
		QAndroidJniObject asReadWriteLock();
	};
} // namespace __jni_impl::java::util::concurrent::locks

#include "../../../io/ObjectInputStream.hpp"
#include "../TimeUnit.hpp"

namespace __jni_impl::java::util::concurrent::locks
{
	// Fields
	
	// Constructors
	void StampedLock::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.locks.StampedLock",
			"()V"
		);
	}
	
	// Methods
	jstring StampedLock::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean StampedLock::validate(jlong arg0)
	{
		return __thiz.callMethod<jboolean>(
			"validate",
			"(J)Z",
			arg0
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
	jlong StampedLock::readLock()
	{
		return __thiz.callMethod<jlong>(
			"readLock",
			"()J"
		);
	}
	jlong StampedLock::writeLock()
	{
		return __thiz.callMethod<jlong>(
			"writeLock",
			"()J"
		);
	}
	jlong StampedLock::tryReadLock(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jlong>(
			"tryReadLock",
			"(JLjava/util/concurrent/TimeUnit;)J",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jlong StampedLock::tryReadLock()
	{
		return __thiz.callMethod<jlong>(
			"tryReadLock",
			"()J"
		);
	}
	jint StampedLock::getReadLockCount()
	{
		return __thiz.callMethod<jint>(
			"getReadLockCount",
			"()I"
		);
	}
	jlong StampedLock::tryWriteLock(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jlong>(
			"tryWriteLock",
			"(JLjava/util/concurrent/TimeUnit;)J",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jlong StampedLock::tryWriteLock()
	{
		return __thiz.callMethod<jlong>(
			"tryWriteLock",
			"()J"
		);
	}
	jboolean StampedLock::isWriteLocked()
	{
		return __thiz.callMethod<jboolean>(
			"isWriteLocked",
			"()Z"
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
	void StampedLock::unlockRead(jlong arg0)
	{
		__thiz.callMethod<void>(
			"unlockRead",
			"(J)V",
			arg0
		);
	}
	jlong StampedLock::writeLockInterruptibly()
	{
		return __thiz.callMethod<jlong>(
			"writeLockInterruptibly",
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
	jlong StampedLock::tryOptimisticRead()
	{
		return __thiz.callMethod<jlong>(
			"tryOptimisticRead",
			"()J"
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
	jlong StampedLock::tryConvertToReadLock(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"tryConvertToReadLock",
			"(J)J",
			arg0
		);
	}
	jlong StampedLock::tryConvertToOptimisticRead(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"tryConvertToOptimisticRead",
			"(J)J",
			arg0
		);
	}
	jboolean StampedLock::tryUnlockWrite()
	{
		return __thiz.callMethod<jboolean>(
			"tryUnlockWrite",
			"()Z"
		);
	}
	jboolean StampedLock::tryUnlockRead()
	{
		return __thiz.callMethod<jboolean>(
			"tryUnlockRead",
			"()Z"
		);
	}
	jboolean StampedLock::isReadLocked()
	{
		return __thiz.callMethod<jboolean>(
			"isReadLocked",
			"()Z"
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
	jboolean StampedLock::isReadLockStamp(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.util.concurrent.locks.StampedLock",
			"isReadLockStamp",
			"(J)Z",
			arg0
		);
	}
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
	QAndroidJniObject StampedLock::asReadLock()
	{
		return __thiz.callObjectMethod(
			"asReadLock",
			"()Ljava/util/concurrent/locks/Lock;"
		);
	}
	QAndroidJniObject StampedLock::asWriteLock()
	{
		return __thiz.callObjectMethod(
			"asWriteLock",
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
} // namespace __jni_impl::java::util::concurrent::locks

namespace java::util::concurrent::locks
{
	class StampedLock : public __jni_impl::java::util::concurrent::locks::StampedLock
	{
	public:
		StampedLock(QAndroidJniObject obj) { __thiz = obj; }
		StampedLock()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent::locks

#endif // JAVA_UTIL_CONCURRENT_LOCKS_STAMPEDLOCK

