#pragma once

#ifndef JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTREADWRITELOCK_WRITELOCK
#define JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTREADWRITELOCK_WRITELOCK

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}
namespace __jni_impl::java::util::concurrent::locks
{
	class ReentrantReadWriteLock;
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
		jint getHoldCount();
		jboolean isHeldByCurrentThread();
		void lock();
		void lockInterruptibly();
		QAndroidJniObject newCondition();
		jstring toString();
		jboolean tryLock();
		jboolean tryLock(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		void unlock();
	};
} // namespace __jni_impl::java::util::concurrent::locks

#include "../TimeUnit.hpp"
#include "ReentrantReadWriteLock.hpp"

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
	jint ReentrantReadWriteLock_WriteLock::getHoldCount()
	{
		return __thiz.callMethod<jint>(
			"getHoldCount",
			"()I"
		);
	}
	jboolean ReentrantReadWriteLock_WriteLock::isHeldByCurrentThread()
	{
		return __thiz.callMethod<jboolean>(
			"isHeldByCurrentThread",
			"()Z"
		);
	}
	void ReentrantReadWriteLock_WriteLock::lock()
	{
		__thiz.callMethod<void>(
			"lock",
			"()V"
		);
	}
	void ReentrantReadWriteLock_WriteLock::lockInterruptibly()
	{
		__thiz.callMethod<void>(
			"lockInterruptibly",
			"()V"
		);
	}
	QAndroidJniObject ReentrantReadWriteLock_WriteLock::newCondition()
	{
		return __thiz.callObjectMethod(
			"newCondition",
			"()Ljava/util/concurrent/locks/Condition;"
		);
	}
	jstring ReentrantReadWriteLock_WriteLock::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean ReentrantReadWriteLock_WriteLock::tryLock()
	{
		return __thiz.callMethod<jboolean>(
			"tryLock",
			"()Z"
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
	void ReentrantReadWriteLock_WriteLock::unlock()
	{
		__thiz.callMethod<void>(
			"unlock",
			"()V"
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

