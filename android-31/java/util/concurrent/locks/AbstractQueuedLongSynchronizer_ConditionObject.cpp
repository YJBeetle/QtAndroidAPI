#include "../../Date.hpp"
#include "../TimeUnit.hpp"
#include "./AbstractQueuedLongSynchronizer.hpp"
#include "./AbstractQueuedLongSynchronizer_ConditionObject.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	// QAndroidJniObject forward
	AbstractQueuedLongSynchronizer_ConditionObject::AbstractQueuedLongSynchronizer_ConditionObject(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AbstractQueuedLongSynchronizer_ConditionObject::AbstractQueuedLongSynchronizer_ConditionObject(java::util::concurrent::locks::AbstractQueuedLongSynchronizer arg0)
		: __JniBaseClass(
			"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$ConditionObject",
			"(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean AbstractQueuedLongSynchronizer_ConditionObject::await(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callMethod<jboolean>(
			"await",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	void AbstractQueuedLongSynchronizer_ConditionObject::await()
	{
		callMethod<void>(
			"await",
			"()V"
		);
	}
	jlong AbstractQueuedLongSynchronizer_ConditionObject::awaitNanos(jlong arg0)
	{
		return callMethod<jlong>(
			"awaitNanos",
			"(J)J",
			arg0
		);
	}
	void AbstractQueuedLongSynchronizer_ConditionObject::awaitUninterruptibly()
	{
		callMethod<void>(
			"awaitUninterruptibly",
			"()V"
		);
	}
	jboolean AbstractQueuedLongSynchronizer_ConditionObject::awaitUntil(java::util::Date arg0)
	{
		return callMethod<jboolean>(
			"awaitUntil",
			"(Ljava/util/Date;)Z",
			arg0.object()
		);
	}
	void AbstractQueuedLongSynchronizer_ConditionObject::signal()
	{
		callMethod<void>(
			"signal",
			"()V"
		);
	}
	void AbstractQueuedLongSynchronizer_ConditionObject::signalAll()
	{
		callMethod<void>(
			"signalAll",
			"()V"
		);
	}
} // namespace java::util::concurrent::locks

