#include "../../Date.hpp"
#include "../TimeUnit.hpp"
#include "./AbstractQueuedLongSynchronizer.hpp"
#include "./AbstractQueuedLongSynchronizer_ConditionObject.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	// Constructors
	AbstractQueuedLongSynchronizer_ConditionObject::AbstractQueuedLongSynchronizer_ConditionObject(java::util::concurrent::locks::AbstractQueuedLongSynchronizer arg0)
		: JObject(
			"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$ConditionObject",
			"(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean AbstractQueuedLongSynchronizer_ConditionObject::await(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callMethod<jboolean>(
			"await",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	void AbstractQueuedLongSynchronizer_ConditionObject::await() const
	{
		callMethod<void>(
			"await",
			"()V"
		);
	}
	jlong AbstractQueuedLongSynchronizer_ConditionObject::awaitNanos(jlong arg0) const
	{
		return callMethod<jlong>(
			"awaitNanos",
			"(J)J",
			arg0
		);
	}
	void AbstractQueuedLongSynchronizer_ConditionObject::awaitUninterruptibly() const
	{
		callMethod<void>(
			"awaitUninterruptibly",
			"()V"
		);
	}
	jboolean AbstractQueuedLongSynchronizer_ConditionObject::awaitUntil(java::util::Date arg0) const
	{
		return callMethod<jboolean>(
			"awaitUntil",
			"(Ljava/util/Date;)Z",
			arg0.object()
		);
	}
	void AbstractQueuedLongSynchronizer_ConditionObject::signal() const
	{
		callMethod<void>(
			"signal",
			"()V"
		);
	}
	void AbstractQueuedLongSynchronizer_ConditionObject::signalAll() const
	{
		callMethod<void>(
			"signalAll",
			"()V"
		);
	}
} // namespace java::util::concurrent::locks

