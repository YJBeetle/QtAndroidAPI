#pragma once

#ifndef JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTLOCK
#define JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTLOCK

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Thread;
}
namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}

namespace __jni_impl::java::util::concurrent::locks
{
	class ReentrantLock : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jboolean arg0);
		
		// Methods
		jint getHoldCount();
		jint getQueueLength();
		jint getWaitQueueLength(__jni_impl::__JniBaseClass arg0);
		jboolean hasQueuedThread(__jni_impl::java::lang::Thread arg0);
		jboolean hasQueuedThreads();
		jboolean hasWaiters(__jni_impl::__JniBaseClass arg0);
		jboolean isFair();
		jboolean isHeldByCurrentThread();
		jboolean isLocked();
		void lock();
		void lockInterruptibly();
		QAndroidJniObject newCondition();
		jstring toString();
		jboolean tryLock();
		jboolean tryLock(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		void unlock();
	};
} // namespace __jni_impl::java::util::concurrent::locks

#include "../../../lang/Thread.hpp"
#include "../TimeUnit.hpp"

namespace __jni_impl::java::util::concurrent::locks
{
	// Fields
	
	// Constructors
	void ReentrantLock::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.locks.ReentrantLock",
			"()V"
		);
	}
	void ReentrantLock::__constructor(jboolean arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.locks.ReentrantLock",
			"(Z)V",
			arg0
		);
	}
	
	// Methods
	jint ReentrantLock::getHoldCount()
	{
		return __thiz.callMethod<jint>(
			"getHoldCount",
			"()I"
		);
	}
	jint ReentrantLock::getQueueLength()
	{
		return __thiz.callMethod<jint>(
			"getQueueLength",
			"()I"
		);
	}
	jint ReentrantLock::getWaitQueueLength(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"getWaitQueueLength",
			"(Ljava/util/concurrent/locks/Condition;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean ReentrantLock::hasQueuedThread(__jni_impl::java::lang::Thread arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasQueuedThread",
			"(Ljava/lang/Thread;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ReentrantLock::hasQueuedThreads()
	{
		return __thiz.callMethod<jboolean>(
			"hasQueuedThreads",
			"()Z"
		);
	}
	jboolean ReentrantLock::hasWaiters(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasWaiters",
			"(Ljava/util/concurrent/locks/Condition;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ReentrantLock::isFair()
	{
		return __thiz.callMethod<jboolean>(
			"isFair",
			"()Z"
		);
	}
	jboolean ReentrantLock::isHeldByCurrentThread()
	{
		return __thiz.callMethod<jboolean>(
			"isHeldByCurrentThread",
			"()Z"
		);
	}
	jboolean ReentrantLock::isLocked()
	{
		return __thiz.callMethod<jboolean>(
			"isLocked",
			"()Z"
		);
	}
	void ReentrantLock::lock()
	{
		__thiz.callMethod<void>(
			"lock",
			"()V"
		);
	}
	void ReentrantLock::lockInterruptibly()
	{
		__thiz.callMethod<void>(
			"lockInterruptibly",
			"()V"
		);
	}
	QAndroidJniObject ReentrantLock::newCondition()
	{
		return __thiz.callObjectMethod(
			"newCondition",
			"()Ljava/util/concurrent/locks/Condition;"
		);
	}
	jstring ReentrantLock::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean ReentrantLock::tryLock()
	{
		return __thiz.callMethod<jboolean>(
			"tryLock",
			"()Z"
		);
	}
	jboolean ReentrantLock::tryLock(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jboolean>(
			"tryLock",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ReentrantLock::unlock()
	{
		__thiz.callMethod<void>(
			"unlock",
			"()V"
		);
	}
} // namespace __jni_impl::java::util::concurrent::locks

namespace java::util::concurrent::locks
{
	class ReentrantLock : public __jni_impl::java::util::concurrent::locks::ReentrantLock
	{
	public:
		ReentrantLock(QAndroidJniObject obj) { __thiz = obj; }
		ReentrantLock()
		{
			__constructor();
		}
		ReentrantLock(jboolean arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent::locks

#endif // JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTLOCK

