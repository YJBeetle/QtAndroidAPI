#include "../../Date.hpp"
#include "../TimeUnit.hpp"
#include "./AbstractQueuedSynchronizer.hpp"
#include "./AbstractQueuedSynchronizer_ConditionObject.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	AbstractQueuedSynchronizer_ConditionObject::AbstractQueuedSynchronizer_ConditionObject(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AbstractQueuedSynchronizer_ConditionObject::AbstractQueuedSynchronizer_ConditionObject(java::util::concurrent::locks::AbstractQueuedSynchronizer arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.locks.AbstractQueuedSynchronizer$ConditionObject",
			"(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean AbstractQueuedSynchronizer_ConditionObject::await(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jboolean>(
			"await",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AbstractQueuedSynchronizer_ConditionObject::await()
	{
		__thiz.callMethod<void>(
			"await",
			"()V"
		);
	}
	jlong AbstractQueuedSynchronizer_ConditionObject::awaitNanos(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"awaitNanos",
			"(J)J",
			arg0
		);
	}
	void AbstractQueuedSynchronizer_ConditionObject::awaitUninterruptibly()
	{
		__thiz.callMethod<void>(
			"awaitUninterruptibly",
			"()V"
		);
	}
	jboolean AbstractQueuedSynchronizer_ConditionObject::awaitUntil(java::util::Date arg0)
	{
		return __thiz.callMethod<jboolean>(
			"awaitUntil",
			"(Ljava/util/Date;)Z",
			arg0.__jniObject().object()
		);
	}
	void AbstractQueuedSynchronizer_ConditionObject::signal()
	{
		__thiz.callMethod<void>(
			"signal",
			"()V"
		);
	}
	void AbstractQueuedSynchronizer_ConditionObject::signalAll()
	{
		__thiz.callMethod<void>(
			"signalAll",
			"()V"
		);
	}
} // namespace java::util::concurrent::locks

