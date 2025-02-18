#pragma once

#include "../../Date.def.hpp"
#include "../TimeUnit.def.hpp"
#include "./AbstractQueuedSynchronizer.def.hpp"
#include "./AbstractQueuedSynchronizer_ConditionObject.def.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	// Constructors
	inline AbstractQueuedSynchronizer_ConditionObject::AbstractQueuedSynchronizer_ConditionObject(java::util::concurrent::locks::AbstractQueuedSynchronizer arg0)
		: JObject(
			"java.util.concurrent.locks.AbstractQueuedSynchronizer$ConditionObject",
			"(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean AbstractQueuedSynchronizer_ConditionObject::await(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callMethod<jboolean>(
			"await",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void AbstractQueuedSynchronizer_ConditionObject::await() const
	{
		callMethod<void>(
			"await",
			"()V"
		);
	}
	inline jlong AbstractQueuedSynchronizer_ConditionObject::awaitNanos(jlong arg0) const
	{
		return callMethod<jlong>(
			"awaitNanos",
			"(J)J",
			arg0
		);
	}
	inline void AbstractQueuedSynchronizer_ConditionObject::awaitUninterruptibly() const
	{
		callMethod<void>(
			"awaitUninterruptibly",
			"()V"
		);
	}
	inline jboolean AbstractQueuedSynchronizer_ConditionObject::awaitUntil(java::util::Date arg0) const
	{
		return callMethod<jboolean>(
			"awaitUntil",
			"(Ljava/util/Date;)Z",
			arg0.object()
		);
	}
	inline void AbstractQueuedSynchronizer_ConditionObject::signal() const
	{
		callMethod<void>(
			"signal",
			"()V"
		);
	}
	inline void AbstractQueuedSynchronizer_ConditionObject::signalAll() const
	{
		callMethod<void>(
			"signalAll",
			"()V"
		);
	}
} // namespace java::util::concurrent::locks

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent::locks;
#endif
