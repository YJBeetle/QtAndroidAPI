#pragma once

#include "./TimeUnit.def.hpp"
#include "./locks/ReentrantLock.def.hpp"
#include "./CyclicBarrier.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline CyclicBarrier::CyclicBarrier(jint arg0)
		: JObject(
			"java.util.concurrent.CyclicBarrier",
			"(I)V",
			arg0
		) {}
	inline CyclicBarrier::CyclicBarrier(jint arg0, JObject arg1)
		: JObject(
			"java.util.concurrent.CyclicBarrier",
			"(ILjava/lang/Runnable;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline jint CyclicBarrier::await() const
	{
		return callMethod<jint>(
			"await",
			"()I"
		);
	}
	inline jint CyclicBarrier::await(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callMethod<jint>(
			"await",
			"(JLjava/util/concurrent/TimeUnit;)I",
			arg0,
			arg1.object()
		);
	}
	inline jint CyclicBarrier::getNumberWaiting() const
	{
		return callMethod<jint>(
			"getNumberWaiting",
			"()I"
		);
	}
	inline jint CyclicBarrier::getParties() const
	{
		return callMethod<jint>(
			"getParties",
			"()I"
		);
	}
	inline jboolean CyclicBarrier::isBroken() const
	{
		return callMethod<jboolean>(
			"isBroken",
			"()Z"
		);
	}
	inline void CyclicBarrier::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
} // namespace java::util::concurrent

// Base class headers

