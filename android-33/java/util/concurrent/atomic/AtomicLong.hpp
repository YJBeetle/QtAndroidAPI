#pragma once

#include "../../../../JString.hpp"
#include "./AtomicLong.def.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	inline AtomicLong::AtomicLong()
		: java::lang::Number(
			"java.util.concurrent.atomic.AtomicLong",
			"()V"
		) {}
	inline AtomicLong::AtomicLong(jlong arg0)
		: java::lang::Number(
			"java.util.concurrent.atomic.AtomicLong",
			"(J)V",
			arg0
		) {}
	
	// Methods
	inline jlong AtomicLong::accumulateAndGet(jlong arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"accumulateAndGet",
			"(JLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1.object()
		);
	}
	inline jlong AtomicLong::addAndGet(jlong arg0) const
	{
		return callMethod<jlong>(
			"addAndGet",
			"(J)J",
			arg0
		);
	}
	inline jlong AtomicLong::compareAndExchange(jlong arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"compareAndExchange",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jlong AtomicLong::compareAndExchangeAcquire(jlong arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"compareAndExchangeAcquire",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jlong AtomicLong::compareAndExchangeRelease(jlong arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"compareAndExchangeRelease",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jboolean AtomicLong::compareAndSet(jlong arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"compareAndSet",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	inline jlong AtomicLong::decrementAndGet() const
	{
		return callMethod<jlong>(
			"decrementAndGet",
			"()J"
		);
	}
	inline jdouble AtomicLong::doubleValue() const
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	inline jfloat AtomicLong::floatValue() const
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	inline jlong AtomicLong::get() const
	{
		return callMethod<jlong>(
			"get",
			"()J"
		);
	}
	inline jlong AtomicLong::getAcquire() const
	{
		return callMethod<jlong>(
			"getAcquire",
			"()J"
		);
	}
	inline jlong AtomicLong::getAndAccumulate(jlong arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"getAndAccumulate",
			"(JLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1.object()
		);
	}
	inline jlong AtomicLong::getAndAdd(jlong arg0) const
	{
		return callMethod<jlong>(
			"getAndAdd",
			"(J)J",
			arg0
		);
	}
	inline jlong AtomicLong::getAndDecrement() const
	{
		return callMethod<jlong>(
			"getAndDecrement",
			"()J"
		);
	}
	inline jlong AtomicLong::getAndIncrement() const
	{
		return callMethod<jlong>(
			"getAndIncrement",
			"()J"
		);
	}
	inline jlong AtomicLong::getAndSet(jlong arg0) const
	{
		return callMethod<jlong>(
			"getAndSet",
			"(J)J",
			arg0
		);
	}
	inline jlong AtomicLong::getAndUpdate(JObject arg0) const
	{
		return callMethod<jlong>(
			"getAndUpdate",
			"(Ljava/util/function/LongUnaryOperator;)J",
			arg0.object()
		);
	}
	inline jlong AtomicLong::getOpaque() const
	{
		return callMethod<jlong>(
			"getOpaque",
			"()J"
		);
	}
	inline jlong AtomicLong::getPlain() const
	{
		return callMethod<jlong>(
			"getPlain",
			"()J"
		);
	}
	inline jlong AtomicLong::incrementAndGet() const
	{
		return callMethod<jlong>(
			"incrementAndGet",
			"()J"
		);
	}
	inline jint AtomicLong::intValue() const
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	inline void AtomicLong::lazySet(jlong arg0) const
	{
		callMethod<void>(
			"lazySet",
			"(J)V",
			arg0
		);
	}
	inline jlong AtomicLong::longValue() const
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	inline void AtomicLong::set(jlong arg0) const
	{
		callMethod<void>(
			"set",
			"(J)V",
			arg0
		);
	}
	inline void AtomicLong::setOpaque(jlong arg0) const
	{
		callMethod<void>(
			"setOpaque",
			"(J)V",
			arg0
		);
	}
	inline void AtomicLong::setPlain(jlong arg0) const
	{
		callMethod<void>(
			"setPlain",
			"(J)V",
			arg0
		);
	}
	inline void AtomicLong::setRelease(jlong arg0) const
	{
		callMethod<void>(
			"setRelease",
			"(J)V",
			arg0
		);
	}
	inline JString AtomicLong::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline jlong AtomicLong::updateAndGet(JObject arg0) const
	{
		return callMethod<jlong>(
			"updateAndGet",
			"(Ljava/util/function/LongUnaryOperator;)J",
			arg0.object()
		);
	}
	inline jboolean AtomicLong::weakCompareAndSet(jlong arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSet",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	inline jboolean AtomicLong::weakCompareAndSetAcquire(jlong arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetAcquire",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	inline jboolean AtomicLong::weakCompareAndSetPlain(jlong arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetPlain",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	inline jboolean AtomicLong::weakCompareAndSetRelease(jlong arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetRelease",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	inline jboolean AtomicLong::weakCompareAndSetVolatile(jlong arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetVolatile",
			"(JJ)Z",
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
