#pragma once

#ifndef JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTREADWRITELOCK_WRITELOCK
#define JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTREADWRITELOCK_WRITELOCK

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
	class ReentrantReadWriteLock_WriteLock : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void lock();
		jstring toString();
		QAndroidJniObject newCondition();
		jint getHoldCount();
		void lockInterruptibly();
		jboolean tryLock(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		jboolean tryLock();
		void unlock();
		jboolean isHeldByCurrentThread();
	};
} // namespace __jni_impl::java::util::concurrent::locks

#include "ReentrantReadWriteLock.hpp"
#include "../TimeUnit.hpp"

namespace __jni_impl::java::util::concurrent::locks
{
	// Fields
	
	// Constructors
	void ReentrantReadWriteLock_WriteLock::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.locks.ReentrantReadWriteLock$WriteLock",
			"(V)V");
	}
	
	// Methods
	void ReentrantReadWriteLock_WriteLock::lock()
	{
		__thiz.callMethod<void>(
			"lock",
			"()V"
		);
	}
	jstring ReentrantReadWriteLock_WriteLock::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ReentrantReadWriteLock_WriteLock::newCondition()
	{
		return __thiz.callObjectMethod(
			"newCondition",
			"()Ljava/util/concurrent/locks/Condition;"
		);
	}
	jint ReentrantReadWriteLock_WriteLock::getHoldCount()
	{
		return __thiz.callMethod<jint>(
			"getHoldCount",
			"()I"
		);
	}
	void ReentrantReadWriteLock_WriteLock::lockInterruptibly()
	{
		__thiz.callMethod<void>(
			"lockInterruptibly",
			"()V"
		);
	}
	jboolean ReentrantReadWriteLock_WriteLock::tryLock(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jboolean>(
			"tryLock",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean ReentrantReadWriteLock_WriteLock::tryLock()
	{
		return __thiz.callMethod<jboolean>(
			"tryLock",
			"()Z"
		);
	}
	void ReentrantReadWriteLock_WriteLock::unlock()
	{
		__thiz.callMethod<void>(
			"unlock",
			"()V"
		);
	}
	jboolean ReentrantReadWriteLock_WriteLock::isHeldByCurrentThread()
	{
		return __thiz.callMethod<jboolean>(
			"isHeldByCurrentThread",
			"()Z"
		);
	}
} // namespace __jni_impl::java::util::concurrent::locks

namespace java::util::concurrent::locks
{
	class ReentrantReadWriteLock_WriteLock : public __jni_impl::java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock
	{
	public:
		ReentrantReadWriteLock_WriteLock(QAndroidJniObject obj) { __thiz = obj; }
		ReentrantReadWriteLock_WriteLock()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent::locks

#endif // JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTREADWRITELOCK_WRITELOCK

