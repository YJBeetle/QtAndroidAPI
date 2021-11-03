#include "../../../../JIntArray.hpp"
#include "../../../../JString.hpp"
#include "./AtomicIntegerArray.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// QJniObject forward
	AtomicIntegerArray::AtomicIntegerArray(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AtomicIntegerArray::AtomicIntegerArray(JIntArray arg0)
		: JObject(
			"java.util.concurrent.atomic.AtomicIntegerArray",
			"([I)V",
			arg0.object<jintArray>()
		) {}
	AtomicIntegerArray::AtomicIntegerArray(jint arg0)
		: JObject(
			"java.util.concurrent.atomic.AtomicIntegerArray",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint AtomicIntegerArray::accumulateAndGet(jint arg0, jint arg1, JObject arg2) const
	{
		return callMethod<jint>(
			"accumulateAndGet",
			"(IILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jint AtomicIntegerArray::addAndGet(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"addAndGet",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint AtomicIntegerArray::compareAndExchange(jint arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"compareAndExchange",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AtomicIntegerArray::compareAndExchangeAcquire(jint arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"compareAndExchangeAcquire",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AtomicIntegerArray::compareAndExchangeRelease(jint arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"compareAndExchangeRelease",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AtomicIntegerArray::compareAndSet(jint arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"compareAndSet",
			"(III)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jint AtomicIntegerArray::decrementAndGet(jint arg0) const
	{
		return callMethod<jint>(
			"decrementAndGet",
			"(I)I",
			arg0
		);
	}
	jint AtomicIntegerArray::get(jint arg0) const
	{
		return callMethod<jint>(
			"get",
			"(I)I",
			arg0
		);
	}
	jint AtomicIntegerArray::getAcquire(jint arg0) const
	{
		return callMethod<jint>(
			"getAcquire",
			"(I)I",
			arg0
		);
	}
	jint AtomicIntegerArray::getAndAccumulate(jint arg0, jint arg1, JObject arg2) const
	{
		return callMethod<jint>(
			"getAndAccumulate",
			"(IILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jint AtomicIntegerArray::getAndAdd(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getAndAdd",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint AtomicIntegerArray::getAndDecrement(jint arg0) const
	{
		return callMethod<jint>(
			"getAndDecrement",
			"(I)I",
			arg0
		);
	}
	jint AtomicIntegerArray::getAndIncrement(jint arg0) const
	{
		return callMethod<jint>(
			"getAndIncrement",
			"(I)I",
			arg0
		);
	}
	jint AtomicIntegerArray::getAndSet(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getAndSet",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint AtomicIntegerArray::getAndUpdate(jint arg0, JObject arg1) const
	{
		return callMethod<jint>(
			"getAndUpdate",
			"(ILjava/util/function/IntUnaryOperator;)I",
			arg0,
			arg1.object()
		);
	}
	jint AtomicIntegerArray::getOpaque(jint arg0) const
	{
		return callMethod<jint>(
			"getOpaque",
			"(I)I",
			arg0
		);
	}
	jint AtomicIntegerArray::getPlain(jint arg0) const
	{
		return callMethod<jint>(
			"getPlain",
			"(I)I",
			arg0
		);
	}
	jint AtomicIntegerArray::incrementAndGet(jint arg0) const
	{
		return callMethod<jint>(
			"incrementAndGet",
			"(I)I",
			arg0
		);
	}
	void AtomicIntegerArray::lazySet(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"lazySet",
			"(II)V",
			arg0,
			arg1
		);
	}
	jint AtomicIntegerArray::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	void AtomicIntegerArray::set(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"set",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AtomicIntegerArray::setOpaque(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setOpaque",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AtomicIntegerArray::setPlain(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setPlain",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AtomicIntegerArray::setRelease(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setRelease",
			"(II)V",
			arg0,
			arg1
		);
	}
	JString AtomicIntegerArray::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	jint AtomicIntegerArray::updateAndGet(jint arg0, JObject arg1) const
	{
		return callMethod<jint>(
			"updateAndGet",
			"(ILjava/util/function/IntUnaryOperator;)I",
			arg0,
			arg1.object()
		);
	}
	jboolean AtomicIntegerArray::weakCompareAndSet(jint arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSet",
			"(III)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AtomicIntegerArray::weakCompareAndSetAcquire(jint arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetAcquire",
			"(III)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AtomicIntegerArray::weakCompareAndSetPlain(jint arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetPlain",
			"(III)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AtomicIntegerArray::weakCompareAndSetRelease(jint arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetRelease",
			"(III)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AtomicIntegerArray::weakCompareAndSetVolatile(jint arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetVolatile",
			"(III)Z",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::util::concurrent::atomic

