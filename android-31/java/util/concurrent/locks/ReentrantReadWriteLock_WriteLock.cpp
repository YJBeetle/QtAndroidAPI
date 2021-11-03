#include "../../../../JString.hpp"
#include "../TimeUnit.hpp"
#include "./ReentrantReadWriteLock.hpp"
#include "./ReentrantReadWriteLock_WriteLock.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	// QJniObject forward
	ReentrantReadWriteLock_WriteLock::ReentrantReadWriteLock_WriteLock(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ReentrantReadWriteLock_WriteLock::getHoldCount()
	{
		return callMethod<jint>(
			"getHoldCount",
			"()I"
		);
	}
	jboolean ReentrantReadWriteLock_WriteLock::isHeldByCurrentThread()
	{
		return callMethod<jboolean>(
			"isHeldByCurrentThread",
			"()Z"
		);
	}
	void ReentrantReadWriteLock_WriteLock::lock()
	{
		callMethod<void>(
			"lock",
			"()V"
		);
	}
	void ReentrantReadWriteLock_WriteLock::lockInterruptibly()
	{
		callMethod<void>(
			"lockInterruptibly",
			"()V"
		);
	}
	JObject ReentrantReadWriteLock_WriteLock::newCondition()
	{
		return callObjectMethod(
			"newCondition",
			"()Ljava/util/concurrent/locks/Condition;"
		);
	}
	JString ReentrantReadWriteLock_WriteLock::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	jboolean ReentrantReadWriteLock_WriteLock::tryLock()
	{
		return callMethod<jboolean>(
			"tryLock",
			"()Z"
		);
	}
	jboolean ReentrantReadWriteLock_WriteLock::tryLock(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callMethod<jboolean>(
			"tryLock",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	void ReentrantReadWriteLock_WriteLock::unlock()
	{
		callMethod<void>(
			"unlock",
			"()V"
		);
	}
} // namespace java::util::concurrent::locks

