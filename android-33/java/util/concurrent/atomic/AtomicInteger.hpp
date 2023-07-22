#pragma once

#include "../../../../JString.hpp"
#include "./AtomicInteger.def.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	inline AtomicInteger::AtomicInteger()
		: java::lang::Number(
			"java.util.concurrent.atomic.AtomicInteger",
			"()V"
		) {}
	inline AtomicInteger::AtomicInteger(jint arg0)
		: java::lang::Number(
			"java.util.concurrent.atomic.AtomicInteger",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jint AtomicInteger::accumulateAndGet(jint arg0, JObject arg1) const
	{
		return callMethod<jint>(
			"accumulateAndGet",
			"(ILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1.object()
		);
	}
	inline jint AtomicInteger::addAndGet(jint arg0) const
	{
		return callMethod<jint>(
			"addAndGet",
			"(I)I",
			arg0
		);
	}
	inline jint AtomicInteger::compareAndExchange(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"compareAndExchange",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint AtomicInteger::compareAndExchangeAcquire(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"compareAndExchangeAcquire",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint AtomicInteger::compareAndExchangeRelease(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"compareAndExchangeRelease",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jboolean AtomicInteger::compareAndSet(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"compareAndSet",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jint AtomicInteger::decrementAndGet() const
	{
		return callMethod<jint>(
			"decrementAndGet",
			"()I"
		);
	}
	inline jdouble AtomicInteger::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	inline jfloat AtomicInteger::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	inline jint AtomicInteger::get() const
	{
		return callMethod<jint>(
			"get",
			"()I"
		);
	}
	inline jint AtomicInteger::getAcquire() const
	{
		return callMethod<jint>(
			"getAcquire",
			"()I"
		);
	}
	inline jint AtomicInteger::getAndAccumulate(jint arg0, JObject arg1) const
	{
		return callMethod<jint>(
			"getAndAccumulate",
			"(ILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1.object()
		);
	}
	inline jint AtomicInteger::getAndAdd(jint arg0) const
	{
		return callMethod<jint>(
			"getAndAdd",
			"(I)I",
			arg0
		);
	}
	inline jint AtomicInteger::getAndDecrement() const
	{
		return callMethod<jint>(
			"getAndDecrement",
			"()I"
		);
	}
	inline jint AtomicInteger::getAndIncrement() const
	{
		return callMethod<jint>(
			"getAndIncrement",
			"()I"
		);
	}
	inline jint AtomicInteger::getAndSet(jint arg0) const
	{
		return callMethod<jint>(
			"getAndSet",
			"(I)I",
			arg0
		);
	}
	inline jint AtomicInteger::getAndUpdate(JObject arg0) const
	{
		return callMethod<jint>(
			"getAndUpdate",
			"(Ljava/util/function/IntUnaryOperator;)I",
			arg0.object()
		);
	}
	inline jint AtomicInteger::getOpaque() const
	{
		return callMethod<jint>(
			"getOpaque",
			"()I"
		);
	}
	inline jint AtomicInteger::getPlain() const
	{
		return callMethod<jint>(
			"getPlain",
			"()I"
		);
	}
	inline jint AtomicInteger::incrementAndGet() const
	{
		return callMethod<jint>(
			"incrementAndGet",
			"()I"
		);
	}
	inline jint AtomicInteger::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	inline void AtomicInteger::lazySet(jint arg0) const
	{
		callMethod<void>(
			"lazySet",
			"(I)V",
			arg0
		);
	}
	inline jlong AtomicInteger::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	inline void AtomicInteger::set(jint arg0) const
	{
		callMethod<void>(
			"set",
			"(I)V",
			arg0
		);
	}
	inline void AtomicInteger::setOpaque(jint arg0) const
	{
		callMethod<void>(
			"setOpaque",
			"(I)V",
			arg0
		);
	}
	inline void AtomicInteger::setPlain(jint arg0) const
	{
		callMethod<void>(
			"setPlain",
			"(I)V",
			arg0
		);
	}
	inline void AtomicInteger::setRelease(jint arg0) const
	{
		callMethod<void>(
			"setRelease",
			"(I)V",
			arg0
		);
	}
	inline JString AtomicInteger::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline jint AtomicInteger::updateAndGet(JObject arg0) const
	{
		return callMethod<jint>(
			"updateAndGet",
			"(Ljava/util/function/IntUnaryOperator;)I",
			arg0.object()
		);
	}
	inline jboolean AtomicInteger::weakCompareAndSet(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSet",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean AtomicInteger::weakCompareAndSetAcquire(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetAcquire",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean AtomicInteger::weakCompareAndSetPlain(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetPlain",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean AtomicInteger::weakCompareAndSetRelease(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetRelease",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean AtomicInteger::weakCompareAndSetVolatile(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetVolatile",
			"(II)Z",
			arg0,
			arg1
		);
	}
} // namespace java::util::concurrent::atomic

// Base class headers
#include "../../../lang/Number.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent::atomic;
#endif
