#pragma once

#include "../../../../JLongArray.hpp"
#include "../../../../JString.hpp"
#include "./AtomicLongArray.def.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	inline AtomicLongArray::AtomicLongArray(JLongArray arg0)
		: JObject(
			"java.util.concurrent.atomic.AtomicLongArray",
			"([J)V",
			arg0.object<jlongArray>()
		) {}
	inline AtomicLongArray::AtomicLongArray(jint arg0)
		: JObject(
			"java.util.concurrent.atomic.AtomicLongArray",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jlong AtomicLongArray::accumulateAndGet(jint arg0, jlong arg1, JObject arg2) const
	{
		return callMethod<jlong>(
			"accumulateAndGet",
			"(IJLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jlong AtomicLongArray::addAndGet(jint arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"addAndGet",
			"(IJ)J",
			arg0,
			arg1
		);
	}
	inline jlong AtomicLongArray::compareAndExchange(jint arg0, jlong arg1, jlong arg2) const
	{
		return callMethod<jlong>(
			"compareAndExchange",
			"(IJJ)J",
			arg0,
			arg1,
			arg2
		);
	}
	inline jlong AtomicLongArray::compareAndExchangeAcquire(jint arg0, jlong arg1, jlong arg2) const
	{
		return callMethod<jlong>(
			"compareAndExchangeAcquire",
			"(IJJ)J",
			arg0,
			arg1,
			arg2
		);
	}
	inline jlong AtomicLongArray::compareAndExchangeRelease(jint arg0, jlong arg1, jlong arg2) const
	{
		return callMethod<jlong>(
			"compareAndExchangeRelease",
			"(IJJ)J",
			arg0,
			arg1,
			arg2
		);
	}
	inline jboolean AtomicLongArray::compareAndSet(jint arg0, jlong arg1, jlong arg2) const
	{
		return callMethod<jboolean>(
			"compareAndSet",
			"(IJJ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	inline jlong AtomicLongArray::decrementAndGet(jint arg0) const
	{
		return callMethod<jlong>(
			"decrementAndGet",
			"(I)J",
			arg0
		);
	}
	inline jlong AtomicLongArray::get(jint arg0) const
	{
		return callMethod<jlong>(
			"get",
			"(I)J",
			arg0
		);
	}
	inline jlong AtomicLongArray::getAcquire(jint arg0) const
	{
		return callMethod<jlong>(
			"getAcquire",
			"(I)J",
			arg0
		);
	}
	inline jlong AtomicLongArray::getAndAccumulate(jint arg0, jlong arg1, JObject arg2) const
	{
		return callMethod<jlong>(
			"getAndAccumulate",
			"(IJLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jlong AtomicLongArray::getAndAdd(jint arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"getAndAdd",
			"(IJ)J",
			arg0,
			arg1
		);
	}
	inline jlong AtomicLongArray::getAndDecrement(jint arg0) const
	{
		return callMethod<jlong>(
			"getAndDecrement",
			"(I)J",
			arg0
		);
	}
	inline jlong AtomicLongArray::getAndIncrement(jint arg0) const
	{
		return callMethod<jlong>(
			"getAndIncrement",
			"(I)J",
			arg0
		);
	}
	inline jlong AtomicLongArray::getAndSet(jint arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"getAndSet",
			"(IJ)J",
			arg0,
			arg1
		);
	}
	inline jlong AtomicLongArray::getAndUpdate(jint arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"getAndUpdate",
			"(ILjava/util/function/LongUnaryOperator;)J",
			arg0,
			arg1.object()
		);
	}
	inline jlong AtomicLongArray::getOpaque(jint arg0) const
	{
		return callMethod<jlong>(
			"getOpaque",
			"(I)J",
			arg0
		);
	}
	inline jlong AtomicLongArray::getPlain(jint arg0) const
	{
		return callMethod<jlong>(
			"getPlain",
			"(I)J",
			arg0
		);
	}
	inline jlong AtomicLongArray::incrementAndGet(jint arg0) const
	{
		return callMethod<jlong>(
			"incrementAndGet",
			"(I)J",
			arg0
		);
	}
	inline void AtomicLongArray::lazySet(jint arg0, jlong arg1) const
	{
		callMethod<void>(
			"lazySet",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	inline jint AtomicLongArray::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	inline void AtomicLongArray::set(jint arg0, jlong arg1) const
	{
		callMethod<void>(
			"set",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	inline void AtomicLongArray::setOpaque(jint arg0, jlong arg1) const
	{
		callMethod<void>(
			"setOpaque",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	inline void AtomicLongArray::setPlain(jint arg0, jlong arg1) const
	{
		callMethod<void>(
			"setPlain",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	inline void AtomicLongArray::setRelease(jint arg0, jlong arg1) const
	{
		callMethod<void>(
			"setRelease",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	inline JString AtomicLongArray::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline jlong AtomicLongArray::updateAndGet(jint arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"updateAndGet",
			"(ILjava/util/function/LongUnaryOperator;)J",
			arg0,
			arg1.object()
		);
	}
	inline jboolean AtomicLongArray::weakCompareAndSet(jint arg0, jlong arg1, jlong arg2) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSet",
			"(IJJ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	inline jboolean AtomicLongArray::weakCompareAndSetAcquire(jint arg0, jlong arg1, jlong arg2) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetAcquire",
			"(IJJ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	inline jboolean AtomicLongArray::weakCompareAndSetPlain(jint arg0, jlong arg1, jlong arg2) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetPlain",
			"(IJJ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	inline jboolean AtomicLongArray::weakCompareAndSetRelease(jint arg0, jlong arg1, jlong arg2) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetRelease",
			"(IJJ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	inline jboolean AtomicLongArray::weakCompareAndSetVolatile(jint arg0, jlong arg1, jlong arg2) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetVolatile",
			"(IJJ)Z",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::util::concurrent::atomic

// Base class headers

