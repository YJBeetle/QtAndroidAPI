#include "../../Date.hpp"
#include "../TimeUnit.hpp"
#include "./AbstractQueuedSynchronizer.hpp"
#include "./AbstractQueuedSynchronizer_ConditionObject.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	// QJniObject forward
	AbstractQueuedSynchronizer_ConditionObject::AbstractQueuedSynchronizer_ConditionObject(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AbstractQueuedSynchronizer_ConditionObject::AbstractQueuedSynchronizer_ConditionObject(java::util::concurrent::locks::AbstractQueuedSynchronizer arg0)
		: JObject(
			"java.util.concurrent.locks.AbstractQueuedSynchronizer$ConditionObject",
			"(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean AbstractQueuedSynchronizer_ConditionObject::await(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callMethod<jboolean>(
			"await",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	void AbstractQueuedSynchronizer_ConditionObject::await() const
	{
		callMethod<void>(
			"await",
			"()V"
		);
	}
	jlong AbstractQueuedSynchronizer_ConditionObject::awaitNanos(jlong arg0) const
	{
		return callMethod<jlong>(
			"awaitNanos",
			"(J)J",
			arg0
		);
	}
	void AbstractQueuedSynchronizer_ConditionObject::awaitUninterruptibly() const
	{
		callMethod<void>(
			"awaitUninterruptibly",
			"()V"
		);
	}
	jboolean AbstractQueuedSynchronizer_ConditionObject::awaitUntil(java::util::Date arg0) const
	{
		return callMethod<jboolean>(
			"awaitUntil",
			"(Ljava/util/Date;)Z",
			arg0.object()
		);
	}
	void AbstractQueuedSynchronizer_ConditionObject::signal() const
	{
		callMethod<void>(
			"signal",
			"()V"
		);
	}
	void AbstractQueuedSynchronizer_ConditionObject::signalAll() const
	{
		callMethod<void>(
			"signalAll",
			"()V"
		);
	}
} // namespace java::util::concurrent::locks

