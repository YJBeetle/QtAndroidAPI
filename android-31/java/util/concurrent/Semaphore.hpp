#pragma once

#include "../../../JString.hpp"
#include "./TimeUnit.def.hpp"
#include "./Semaphore.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline Semaphore::Semaphore(jint arg0)
		: JObject(
			"java.util.concurrent.Semaphore",
			"(I)V",
			arg0
		) {}
	inline Semaphore::Semaphore(jint arg0, jboolean arg1)
		: JObject(
			"java.util.concurrent.Semaphore",
			"(IZ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline void Semaphore::acquire() const
	{
		callMethod<void>(
			"acquire",
			"()V"
		);
	}
	inline void Semaphore::acquire(jint arg0) const
	{
		callMethod<void>(
			"acquire",
			"(I)V",
			arg0
		);
	}
	inline void Semaphore::acquireUninterruptibly() const
	{
		callMethod<void>(
			"acquireUninterruptibly",
			"()V"
		);
	}
	inline void Semaphore::acquireUninterruptibly(jint arg0) const
	{
		callMethod<void>(
			"acquireUninterruptibly",
			"(I)V",
			arg0
		);
	}
	inline jint Semaphore::availablePermits() const
	{
		return callMethod<jint>(
			"availablePermits",
			"()I"
		);
	}
	inline jint Semaphore::drainPermits() const
	{
		return callMethod<jint>(
			"drainPermits",
			"()I"
		);
	}
	inline jint Semaphore::getQueueLength() const
	{
		return callMethod<jint>(
			"getQueueLength",
			"()I"
		);
	}
	inline jboolean Semaphore::hasQueuedThreads() const
	{
		return callMethod<jboolean>(
			"hasQueuedThreads",
			"()Z"
		);
	}
	inline jboolean Semaphore::isFair() const
	{
		return callMethod<jboolean>(
			"isFair",
			"()Z"
		);
	}
	inline void Semaphore::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void Semaphore::release(jint arg0) const
	{
		callMethod<void>(
			"release",
			"(I)V",
			arg0
		);
	}
	inline JString Semaphore::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean Semaphore::tryAcquire() const
	{
		return callMethod<jboolean>(
			"tryAcquire",
			"()Z"
		);
	}
	inline jboolean Semaphore::tryAcquire(jint arg0) const
	{
		return callMethod<jboolean>(
			"tryAcquire",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Semaphore::tryAcquire(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callMethod<jboolean>(
			"tryAcquire",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean Semaphore::tryAcquire(jint arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const
	{
		return callMethod<jboolean>(
			"tryAcquire",
			"(IJLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
} // namespace java::util::concurrent

// Base class headers

