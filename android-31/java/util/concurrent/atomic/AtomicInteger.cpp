#include "../../../../JString.hpp"
#include "./AtomicInteger.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// QAndroidJniObject forward
	AtomicInteger::AtomicInteger(QAndroidJniObject obj) : java::lang::Number(obj) {}
	
	// Constructors
	AtomicInteger::AtomicInteger()
		: java::lang::Number(
			"java.util.concurrent.atomic.AtomicInteger",
			"()V"
		) {}
	AtomicInteger::AtomicInteger(jint arg0)
		: java::lang::Number(
			"java.util.concurrent.atomic.AtomicInteger",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint AtomicInteger::accumulateAndGet(jint arg0, JObject arg1)
	{
		return callMethod<jint>(
			"accumulateAndGet",
			"(ILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1.object()
		);
	}
	jint AtomicInteger::addAndGet(jint arg0)
	{
		return callMethod<jint>(
			"addAndGet",
			"(I)I",
			arg0
		);
	}
	jint AtomicInteger::compareAndExchange(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"compareAndExchange",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint AtomicInteger::compareAndExchangeAcquire(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"compareAndExchangeAcquire",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint AtomicInteger::compareAndExchangeRelease(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"compareAndExchangeRelease",
			"(II)I",
			arg0,
			arg1
		);
	}
	jboolean AtomicInteger::compareAndSet(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"compareAndSet",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jint AtomicInteger::decrementAndGet()
	{
		return callMethod<jint>(
			"decrementAndGet",
			"()I"
		);
	}
	jdouble AtomicInteger::doubleValue()
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jfloat AtomicInteger::floatValue()
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jint AtomicInteger::get()
	{
		return callMethod<jint>(
			"get",
			"()I"
		);
	}
	jint AtomicInteger::getAcquire()
	{
		return callMethod<jint>(
			"getAcquire",
			"()I"
		);
	}
	jint AtomicInteger::getAndAccumulate(jint arg0, JObject arg1)
	{
		return callMethod<jint>(
			"getAndAccumulate",
			"(ILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1.object()
		);
	}
	jint AtomicInteger::getAndAdd(jint arg0)
	{
		return callMethod<jint>(
			"getAndAdd",
			"(I)I",
			arg0
		);
	}
	jint AtomicInteger::getAndDecrement()
	{
		return callMethod<jint>(
			"getAndDecrement",
			"()I"
		);
	}
	jint AtomicInteger::getAndIncrement()
	{
		return callMethod<jint>(
			"getAndIncrement",
			"()I"
		);
	}
	jint AtomicInteger::getAndSet(jint arg0)
	{
		return callMethod<jint>(
			"getAndSet",
			"(I)I",
			arg0
		);
	}
	jint AtomicInteger::getAndUpdate(JObject arg0)
	{
		return callMethod<jint>(
			"getAndUpdate",
			"(Ljava/util/function/IntUnaryOperator;)I",
			arg0.object()
		);
	}
	jint AtomicInteger::getOpaque()
	{
		return callMethod<jint>(
			"getOpaque",
			"()I"
		);
	}
	jint AtomicInteger::getPlain()
	{
		return callMethod<jint>(
			"getPlain",
			"()I"
		);
	}
	jint AtomicInteger::incrementAndGet()
	{
		return callMethod<jint>(
			"incrementAndGet",
			"()I"
		);
	}
	jint AtomicInteger::intValue()
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	void AtomicInteger::lazySet(jint arg0)
	{
		callMethod<void>(
			"lazySet",
			"(I)V",
			arg0
		);
	}
	jlong AtomicInteger::longValue()
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	void AtomicInteger::set(jint arg0)
	{
		callMethod<void>(
			"set",
			"(I)V",
			arg0
		);
	}
	void AtomicInteger::setOpaque(jint arg0)
	{
		callMethod<void>(
			"setOpaque",
			"(I)V",
			arg0
		);
	}
	void AtomicInteger::setPlain(jint arg0)
	{
		callMethod<void>(
			"setPlain",
			"(I)V",
			arg0
		);
	}
	void AtomicInteger::setRelease(jint arg0)
	{
		callMethod<void>(
			"setRelease",
			"(I)V",
			arg0
		);
	}
	JString AtomicInteger::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	jint AtomicInteger::updateAndGet(JObject arg0)
	{
		return callMethod<jint>(
			"updateAndGet",
			"(Ljava/util/function/IntUnaryOperator;)I",
			arg0.object()
		);
	}
	jboolean AtomicInteger::weakCompareAndSet(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"weakCompareAndSet",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicInteger::weakCompareAndSetAcquire(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"weakCompareAndSetAcquire",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicInteger::weakCompareAndSetPlain(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"weakCompareAndSetPlain",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicInteger::weakCompareAndSetRelease(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"weakCompareAndSetRelease",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicInteger::weakCompareAndSetVolatile(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"weakCompareAndSetVolatile",
			"(II)Z",
			arg0,
			arg1
		);
	}
} // namespace java::util::concurrent::atomic

