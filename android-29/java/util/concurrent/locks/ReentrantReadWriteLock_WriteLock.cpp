#include "../TimeUnit.hpp"
#include "./ReentrantReadWriteLock.hpp"
#include "./ReentrantReadWriteLock_WriteLock.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	ReentrantReadWriteLock_WriteLock::ReentrantReadWriteLock_WriteLock(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
	jboolean ReentrantReadWriteLock_WriteLock::tryLock(jlong arg0, java::util::concurrent::TimeUnit arg1)
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
} // namespace java::util::concurrent::locks

