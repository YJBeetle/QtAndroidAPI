#pragma once

#ifndef JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTREADWRITELOCK
#define JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTREADWRITELOCK

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::concurrent::locks
{
	class ReentrantReadWriteLock_ReadLock;
}
namespace __jni_impl::java::util::concurrent::locks
{
	class ReentrantReadWriteLock_WriteLock;
}
namespace __jni_impl::java::lang
{
	class Thread;
}

namespace __jni_impl::java::util::concurrent::locks
{
	class ReentrantReadWriteLock : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jboolean arg0);
		
		// Methods
		jstring toString();
		jboolean hasQueuedThreads();
		jint getQueueLength();
		jboolean hasWaiters(__jni_impl::__JniBaseClass arg0);
		jint getWaitQueueLength(__jni_impl::__JniBaseClass arg0);
		jboolean isFair();
		jboolean hasQueuedThread(__jni_impl::java::lang::Thread arg0);
		QAndroidJniObject readLock();
		QAndroidJniObject writeLock();
		jint getReadLockCount();
		jboolean isWriteLocked();
		jint getWriteHoldCount();
		jint getReadHoldCount();
		jboolean isWriteLockedByCurrentThread();
	};
} // namespace __jni_impl::java::util::concurrent::locks

#include "ReentrantReadWriteLock_ReadLock.hpp"
#include "ReentrantReadWriteLock_WriteLock.hpp"
#include "../../../lang/Thread.hpp"

namespace __jni_impl::java::util::concurrent::locks
{
	// Fields
	
	// Constructors
	void ReentrantReadWriteLock::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.locks.ReentrantReadWriteLock",
			"()V");
	}
	void ReentrantReadWriteLock::__constructor(jboolean arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.locks.ReentrantReadWriteLock",
			"(Z)V",
			arg0);
	}
	
	// Methods
	jstring ReentrantReadWriteLock::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean ReentrantReadWriteLock::hasQueuedThreads()
	{
		return __thiz.callMethod<jboolean>(
			"hasQueuedThreads",
			"()Z"
		);
	}
	jint ReentrantReadWriteLock::getQueueLength()
	{
		return __thiz.callMethod<jint>(
			"getQueueLength",
			"()I"
		);
	}
	jboolean ReentrantReadWriteLock::hasWaiters(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasWaiters",
			"(Ljava/util/concurrent/locks/Condition;)Z",
			arg0.__jniObject().object()
		);
	}
	jint ReentrantReadWriteLock::getWaitQueueLength(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"getWaitQueueLength",
			"(Ljava/util/concurrent/locks/Condition;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean ReentrantReadWriteLock::isFair()
	{
		return __thiz.callMethod<jboolean>(
			"isFair",
			"()Z"
		);
	}
	jboolean ReentrantReadWriteLock::hasQueuedThread(__jni_impl::java::lang::Thread arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasQueuedThread",
			"(Ljava/lang/Thread;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ReentrantReadWriteLock::readLock()
	{
		return __thiz.callObjectMethod(
			"readLock",
			"()Ljava/util/concurrent/locks/ReentrantReadWriteLock$ReadLock;"
		);
	}
	QAndroidJniObject ReentrantReadWriteLock::writeLock()
	{
		return __thiz.callObjectMethod(
			"writeLock",
			"()Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;"
		);
	}
	jint ReentrantReadWriteLock::getReadLockCount()
	{
		return __thiz.callMethod<jint>(
			"getReadLockCount",
			"()I"
		);
	}
	jboolean ReentrantReadWriteLock::isWriteLocked()
	{
		return __thiz.callMethod<jboolean>(
			"isWriteLocked",
			"()Z"
		);
	}
	jint ReentrantReadWriteLock::getWriteHoldCount()
	{
		return __thiz.callMethod<jint>(
			"getWriteHoldCount",
			"()I"
		);
	}
	jint ReentrantReadWriteLock::getReadHoldCount()
	{
		return __thiz.callMethod<jint>(
			"getReadHoldCount",
			"()I"
		);
	}
	jboolean ReentrantReadWriteLock::isWriteLockedByCurrentThread()
	{
		return __thiz.callMethod<jboolean>(
			"isWriteLockedByCurrentThread",
			"()Z"
		);
	}
} // namespace __jni_impl::java::util::concurrent::locks

namespace java::util::concurrent::locks
{
	class ReentrantReadWriteLock : public __jni_impl::java::util::concurrent::locks::ReentrantReadWriteLock
	{
	public:
		ReentrantReadWriteLock(QAndroidJniObject obj) { __thiz = obj; }
		ReentrantReadWriteLock()
		{
			__constructor();
		}
		ReentrantReadWriteLock(jboolean arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent::locks

#endif // JAVA_UTIL_CONCURRENT_LOCKS_REENTRANTREADWRITELOCK

