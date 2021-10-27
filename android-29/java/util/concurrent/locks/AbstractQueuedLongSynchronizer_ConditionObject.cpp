#include "../../Date.hpp"
#include "../TimeUnit.hpp"
#include "./AbstractQueuedLongSynchronizer.hpp"
#include "./AbstractQueuedLongSynchronizer_ConditionObject.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	AbstractQueuedLongSynchronizer_ConditionObject::AbstractQueuedLongSynchronizer_ConditionObject(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AbstractQueuedLongSynchronizer_ConditionObject::AbstractQueuedLongSynchronizer_ConditionObject(java::util::concurrent::locks::AbstractQueuedLongSynchronizer &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$ConditionObject",
			"(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean AbstractQueuedLongSynchronizer_ConditionObject::await(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jboolean>(
			"await",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AbstractQueuedLongSynchronizer_ConditionObject::await()
	{
		__thiz.callMethod<void>(
			"await",
			"()V"
		);
	}
	jlong AbstractQueuedLongSynchronizer_ConditionObject::awaitNanos(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"awaitNanos",
			"(J)J",
			arg0
		);
	}
	void AbstractQueuedLongSynchronizer_ConditionObject::awaitUninterruptibly()
	{
		__thiz.callMethod<void>(
			"awaitUninterruptibly",
			"()V"
		);
	}
	jboolean AbstractQueuedLongSynchronizer_ConditionObject::awaitUntil(java::util::Date arg0)
	{
		return __thiz.callMethod<jboolean>(
			"awaitUntil",
			"(Ljava/util/Date;)Z",
			arg0.__jniObject().object()
		);
	}
	void AbstractQueuedLongSynchronizer_ConditionObject::signal()
	{
		__thiz.callMethod<void>(
			"signal",
			"()V"
		);
	}
	void AbstractQueuedLongSynchronizer_ConditionObject::signalAll()
	{
		__thiz.callMethod<void>(
			"signalAll",
			"()V"
		);
	}
} // namespace java::util::concurrent::locks

