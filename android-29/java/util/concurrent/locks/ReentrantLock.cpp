#include "../../../lang/Thread.hpp"
#include "../TimeUnit.hpp"
#include "./ReentrantLock.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	ReentrantLock::ReentrantLock(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ReentrantLock::ReentrantLock()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.locks.ReentrantLock",
			"()V"
		);
	}
	ReentrantLock::ReentrantLock(jboolean arg0)
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
	jint ReentrantLock::getWaitQueueLength(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"getWaitQueueLength",
			"(Ljava/util/concurrent/locks/Condition;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean ReentrantLock::hasQueuedThread(java::lang::Thread arg0)
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
	jboolean ReentrantLock::hasWaiters(__JniBaseClass arg0)
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
	jboolean ReentrantLock::tryLock(jlong arg0, java::util::concurrent::TimeUnit arg1)
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
} // namespace java::util::concurrent::locks

