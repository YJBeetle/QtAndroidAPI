#include "../../../lang/Thread.hpp"
#include "../TimeUnit.hpp"
#include "./ReentrantLock.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	// QAndroidJniObject forward
	ReentrantLock::ReentrantLock(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ReentrantLock::ReentrantLock()
		: __JniBaseClass(
			"java.util.concurrent.locks.ReentrantLock",
			"()V"
		) {}
	ReentrantLock::ReentrantLock(jboolean arg0)
		: __JniBaseClass(
			"java.util.concurrent.locks.ReentrantLock",
			"(Z)V",
			arg0
		) {}
	
	// Methods
	jint ReentrantLock::getHoldCount()
	{
		return callMethod<jint>(
			"getHoldCount",
			"()I"
		);
	}
	jint ReentrantLock::getQueueLength()
	{
		return callMethod<jint>(
			"getQueueLength",
			"()I"
		);
	}
	jint ReentrantLock::getWaitQueueLength(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"getWaitQueueLength",
			"(Ljava/util/concurrent/locks/Condition;)I",
			arg0.object()
		);
	}
	jboolean ReentrantLock::hasQueuedThread(java::lang::Thread arg0)
	{
		return callMethod<jboolean>(
			"hasQueuedThread",
			"(Ljava/lang/Thread;)Z",
			arg0.object()
		);
	}
	jboolean ReentrantLock::hasQueuedThreads()
	{
		return callMethod<jboolean>(
			"hasQueuedThreads",
			"()Z"
		);
	}
	jboolean ReentrantLock::hasWaiters(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"hasWaiters",
			"(Ljava/util/concurrent/locks/Condition;)Z",
			arg0.object()
		);
	}
	jboolean ReentrantLock::isFair()
	{
		return callMethod<jboolean>(
			"isFair",
			"()Z"
		);
	}
	jboolean ReentrantLock::isHeldByCurrentThread()
	{
		return callMethod<jboolean>(
			"isHeldByCurrentThread",
			"()Z"
		);
	}
	jboolean ReentrantLock::isLocked()
	{
		return callMethod<jboolean>(
			"isLocked",
			"()Z"
		);
	}
	void ReentrantLock::lock()
	{
		callMethod<void>(
			"lock",
			"()V"
		);
	}
	void ReentrantLock::lockInterruptibly()
	{
		callMethod<void>(
			"lockInterruptibly",
			"()V"
		);
	}
	__JniBaseClass ReentrantLock::newCondition()
	{
		return callObjectMethod(
			"newCondition",
			"()Ljava/util/concurrent/locks/Condition;"
		);
	}
	jstring ReentrantLock::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean ReentrantLock::tryLock()
	{
		return callMethod<jboolean>(
			"tryLock",
			"()Z"
		);
	}
	jboolean ReentrantLock::tryLock(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callMethod<jboolean>(
			"tryLock",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	void ReentrantLock::unlock()
	{
		callMethod<void>(
			"unlock",
			"()V"
		);
	}
} // namespace java::util::concurrent::locks

