#include "../../../lang/Thread.hpp"
#include "./ReentrantReadWriteLock_ReadLock.hpp"
#include "./ReentrantReadWriteLock_WriteLock.hpp"
#include "./ReentrantReadWriteLock.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	ReentrantReadWriteLock::ReentrantReadWriteLock(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ReentrantReadWriteLock::ReentrantReadWriteLock()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.locks.ReentrantReadWriteLock",
			"()V"
		);
	}
	ReentrantReadWriteLock::ReentrantReadWriteLock(jboolean &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.locks.ReentrantReadWriteLock",
			"(Z)V",
			arg0
		);
	}
	
	// Methods
	jint ReentrantReadWriteLock::getQueueLength()
	{
		return __thiz.callMethod<jint>(
			"getQueueLength",
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
	jint ReentrantReadWriteLock::getReadLockCount()
	{
		return __thiz.callMethod<jint>(
			"getReadLockCount",
			"()I"
		);
	}
	jint ReentrantReadWriteLock::getWaitQueueLength(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"getWaitQueueLength",
			"(Ljava/util/concurrent/locks/Condition;)I",
			arg0.__jniObject().object()
		);
	}
	jint ReentrantReadWriteLock::getWriteHoldCount()
	{
		return __thiz.callMethod<jint>(
			"getWriteHoldCount",
			"()I"
		);
	}
	jboolean ReentrantReadWriteLock::hasQueuedThread(java::lang::Thread arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasQueuedThread",
			"(Ljava/lang/Thread;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ReentrantReadWriteLock::hasQueuedThreads()
	{
		return __thiz.callMethod<jboolean>(
			"hasQueuedThreads",
			"()Z"
		);
	}
	jboolean ReentrantReadWriteLock::hasWaiters(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasWaiters",
			"(Ljava/util/concurrent/locks/Condition;)Z",
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
	jboolean ReentrantReadWriteLock::isWriteLocked()
	{
		return __thiz.callMethod<jboolean>(
			"isWriteLocked",
			"()Z"
		);
	}
	jboolean ReentrantReadWriteLock::isWriteLockedByCurrentThread()
	{
		return __thiz.callMethod<jboolean>(
			"isWriteLockedByCurrentThread",
			"()Z"
		);
	}
	QAndroidJniObject ReentrantReadWriteLock::readLock()
	{
		return __thiz.callObjectMethod(
			"readLock",
			"()Ljava/util/concurrent/locks/ReentrantReadWriteLock$ReadLock;"
		);
	}
	jstring ReentrantReadWriteLock::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ReentrantReadWriteLock::writeLock()
	{
		return __thiz.callObjectMethod(
			"writeLock",
			"()Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;"
		);
	}
} // namespace java::util::concurrent::locks

