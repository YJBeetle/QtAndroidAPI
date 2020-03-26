#pragma once

#ifndef JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTREADWRITELOCK_READLOCK
#define JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTREADWRITELOCK_READLOCK

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::concurrent::locks
{
	class ReentrantReadWriteLock;
}
namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}

namespace __jni_impl::java::util::concurrent::locks
{
	class ReentrantReadWriteLock_ReadLock : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void lock();
		jstring toString();
		QAndroidJniObject newCondition();
		void lockInterruptibly();
		jboolean tryLock(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		jboolean tryLock();
		void unlock();
	};
} // namespace __jni_impl::java::util::concurrent::locks

#include "ReentrantReadWriteLock.hpp"
#include "../TimeUnit.hpp"

namespace __jni_impl::java::util::concurrent::locks
{
	// Fields
	
	// Constructors
	void ReentrantReadWriteLock_ReadLock::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.locks.ReentrantReadWriteLock$ReadLock",
			"(V)V");
	}
	
	// Methods
	void ReentrantReadWriteLock_ReadLock::lock()
	{
		__thiz.callMethod<void>(
			"lock",
			"()V"
		);
	}
	jstring ReentrantReadWriteLock_ReadLock::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ReentrantReadWriteLock_ReadLock::newCondition()
	{
		return __thiz.callObjectMethod(
			"newCondition",
			"()Ljava/util/concurrent/locks/Condition;"
		);
	}
	void ReentrantReadWriteLock_ReadLock::lockInterruptibly()
	{
		__thiz.callMethod<void>(
			"lockInterruptibly",
			"()V"
		);
	}
	jboolean ReentrantReadWriteLock_ReadLock::tryLock(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jboolean>(
			"tryLock",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean ReentrantReadWriteLock_ReadLock::tryLock()
	{
		return __thiz.callMethod<jboolean>(
			"tryLock",
			"()Z"
		);
	}
	void ReentrantReadWriteLock_ReadLock::unlock()
	{
		__thiz.callMethod<void>(
			"unlock",
			"()V"
		);
	}
} // namespace __jni_impl::java::util::concurrent::locks

namespace java::util::concurrent::locks
{
	class ReentrantReadWriteLock_ReadLock : public __jni_impl::java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock
	{
	public:
		ReentrantReadWriteLock_ReadLock(QAndroidJniObject obj) { __thiz = obj; }
		ReentrantReadWriteLock_ReadLock()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent::locks

#endif // JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTREADWRITELOCK_READLOCK

