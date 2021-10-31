#include "../../../lang/Thread.hpp"
#include "./ReentrantReadWriteLock_ReadLock.hpp"
#include "./ReentrantReadWriteLock_WriteLock.hpp"
#include "./ReentrantReadWriteLock.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	// QAndroidJniObject forward
	ReentrantReadWriteLock::ReentrantReadWriteLock(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ReentrantReadWriteLock::ReentrantReadWriteLock()
		: __JniBaseClass(
			"java.util.concurrent.locks.ReentrantReadWriteLock",
			"()V"
		) {}
	ReentrantReadWriteLock::ReentrantReadWriteLock(jboolean arg0)
		: __JniBaseClass(
			"java.util.concurrent.locks.ReentrantReadWriteLock",
			"(Z)V",
			arg0
		) {}
	
	// Methods
	jint ReentrantReadWriteLock::getQueueLength()
	{
		return callMethod<jint>(
			"getQueueLength",
			"()I"
		);
	}
	jint ReentrantReadWriteLock::getReadHoldCount()
	{
		return callMethod<jint>(
			"getReadHoldCount",
			"()I"
		);
	}
	jint ReentrantReadWriteLock::getReadLockCount()
	{
		return callMethod<jint>(
			"getReadLockCount",
			"()I"
		);
	}
	jint ReentrantReadWriteLock::getWaitQueueLength(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"getWaitQueueLength",
			"(Ljava/util/concurrent/locks/Condition;)I",
			arg0.object()
		);
	}
	jint ReentrantReadWriteLock::getWriteHoldCount()
	{
		return callMethod<jint>(
			"getWriteHoldCount",
			"()I"
		);
	}
	jboolean ReentrantReadWriteLock::hasQueuedThread(java::lang::Thread arg0)
	{
		return callMethod<jboolean>(
			"hasQueuedThread",
			"(Ljava/lang/Thread;)Z",
			arg0.object()
		);
	}
	jboolean ReentrantReadWriteLock::hasQueuedThreads()
	{
		return callMethod<jboolean>(
			"hasQueuedThreads",
			"()Z"
		);
	}
	jboolean ReentrantReadWriteLock::hasWaiters(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"hasWaiters",
			"(Ljava/util/concurrent/locks/Condition;)Z",
			arg0.object()
		);
	}
	jboolean ReentrantReadWriteLock::isFair()
	{
		return callMethod<jboolean>(
			"isFair",
			"()Z"
		);
	}
	jboolean ReentrantReadWriteLock::isWriteLocked()
	{
		return callMethod<jboolean>(
			"isWriteLocked",
			"()Z"
		);
	}
	jboolean ReentrantReadWriteLock::isWriteLockedByCurrentThread()
	{
		return callMethod<jboolean>(
			"isWriteLockedByCurrentThread",
			"()Z"
		);
	}
	java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock ReentrantReadWriteLock::readLock()
	{
		return callObjectMethod(
			"readLock",
			"()Ljava/util/concurrent/locks/ReentrantReadWriteLock$ReadLock;"
		);
	}
	jstring ReentrantReadWriteLock::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock ReentrantReadWriteLock::writeLock()
	{
		return callObjectMethod(
			"writeLock",
			"()Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;"
		);
	}
} // namespace java::util::concurrent::locks

