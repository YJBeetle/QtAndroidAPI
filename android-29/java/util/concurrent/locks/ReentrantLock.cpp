#include "../../../../JString.hpp"
#include "../../../lang/Thread.hpp"
#include "../TimeUnit.hpp"
#include "./ReentrantLock.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	// QJniObject forward
	ReentrantLock::ReentrantLock(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ReentrantLock::ReentrantLock()
		: JObject(
			"java.util.concurrent.locks.ReentrantLock",
			"()V"
		) {}
	ReentrantLock::ReentrantLock(jboolean arg0)
		: JObject(
			"java.util.concurrent.locks.ReentrantLock",
			"(Z)V",
			arg0
		) {}
	
	// Methods
	jint ReentrantLock::getHoldCount() const
	{
		return callMethod<jint>(
			"getHoldCount",
			"()I"
		);
	}
	jint ReentrantLock::getQueueLength() const
	{
		return callMethod<jint>(
			"getQueueLength",
			"()I"
		);
	}
	jint ReentrantLock::getWaitQueueLength(JObject arg0) const
	{
		return callMethod<jint>(
			"getWaitQueueLength",
			"(Ljava/util/concurrent/locks/Condition;)I",
			arg0.object()
		);
	}
	jboolean ReentrantLock::hasQueuedThread(java::lang::Thread arg0) const
	{
		return callMethod<jboolean>(
			"hasQueuedThread",
			"(Ljava/lang/Thread;)Z",
			arg0.object()
		);
	}
	jboolean ReentrantLock::hasQueuedThreads() const
	{
		return callMethod<jboolean>(
			"hasQueuedThreads",
			"()Z"
		);
	}
	jboolean ReentrantLock::hasWaiters(JObject arg0) const
	{
		return callMethod<jboolean>(
			"hasWaiters",
			"(Ljava/util/concurrent/locks/Condition;)Z",
			arg0.object()
		);
	}
	jboolean ReentrantLock::isFair() const
	{
		return callMethod<jboolean>(
			"isFair",
			"()Z"
		);
	}
	jboolean ReentrantLock::isHeldByCurrentThread() const
	{
		return callMethod<jboolean>(
			"isHeldByCurrentThread",
			"()Z"
		);
	}
	jboolean ReentrantLock::isLocked() const
	{
		return callMethod<jboolean>(
			"isLocked",
			"()Z"
		);
	}
	void ReentrantLock::lock() const
	{
		callMethod<void>(
			"lock",
			"()V"
		);
	}
	void ReentrantLock::lockInterruptibly() const
	{
		callMethod<void>(
			"lockInterruptibly",
			"()V"
		);
	}
	JObject ReentrantLock::newCondition() const
	{
		return callObjectMethod(
			"newCondition",
			"()Ljava/util/concurrent/locks/Condition;"
		);
	}
	JString ReentrantLock::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	jboolean ReentrantLock::tryLock() const
	{
		return callMethod<jboolean>(
			"tryLock",
			"()Z"
		);
	}
	jboolean ReentrantLock::tryLock(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callMethod<jboolean>(
			"tryLock",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	void ReentrantLock::unlock() const
	{
		callMethod<void>(
			"unlock",
			"()V"
		);
	}
} // namespace java::util::concurrent::locks

