#include "./AtomicInteger.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	AtomicInteger::AtomicInteger(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AtomicInteger::AtomicInteger()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicInteger",
			"()V"
		);
	}
	AtomicInteger::AtomicInteger(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicInteger",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jint AtomicInteger::accumulateAndGet(jint arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jint>(
			"accumulateAndGet",
			"(ILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint AtomicInteger::addAndGet(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"addAndGet",
			"(I)I",
			arg0
		);
	}
	jint AtomicInteger::compareAndExchange(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"compareAndExchange",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint AtomicInteger::compareAndExchangeAcquire(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"compareAndExchangeAcquire",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint AtomicInteger::compareAndExchangeRelease(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"compareAndExchangeRelease",
			"(II)I",
			arg0,
			arg1
		);
	}
	jboolean AtomicInteger::compareAndSet(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"compareAndSet",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jint AtomicInteger::decrementAndGet()
	{
		return __thiz.callMethod<jint>(
			"decrementAndGet",
			"()I"
		);
	}
	jdouble AtomicInteger::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jfloat AtomicInteger::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jint AtomicInteger::get()
	{
		return __thiz.callMethod<jint>(
			"get",
			"()I"
		);
	}
	jint AtomicInteger::getAcquire()
	{
		return __thiz.callMethod<jint>(
			"getAcquire",
			"()I"
		);
	}
	jint AtomicInteger::getAndAccumulate(jint arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jint>(
			"getAndAccumulate",
			"(ILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint AtomicInteger::getAndAdd(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getAndAdd",
			"(I)I",
			arg0
		);
	}
	jint AtomicInteger::getAndDecrement()
	{
		return __thiz.callMethod<jint>(
			"getAndDecrement",
			"()I"
		);
	}
	jint AtomicInteger::getAndIncrement()
	{
		return __thiz.callMethod<jint>(
			"getAndIncrement",
			"()I"
		);
	}
	jint AtomicInteger::getAndSet(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getAndSet",
			"(I)I",
			arg0
		);
	}
	jint AtomicInteger::getAndUpdate(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"getAndUpdate",
			"(Ljava/util/function/IntUnaryOperator;)I",
			arg0.__jniObject().object()
		);
	}
	jint AtomicInteger::getOpaque()
	{
		return __thiz.callMethod<jint>(
			"getOpaque",
			"()I"
		);
	}
	jint AtomicInteger::getPlain()
	{
		return __thiz.callMethod<jint>(
			"getPlain",
			"()I"
		);
	}
	jint AtomicInteger::incrementAndGet()
	{
		return __thiz.callMethod<jint>(
			"incrementAndGet",
			"()I"
		);
	}
	jint AtomicInteger::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	void AtomicInteger::lazySet(jint arg0)
	{
		__thiz.callMethod<void>(
			"lazySet",
			"(I)V",
			arg0
		);
	}
	jlong AtomicInteger::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	void AtomicInteger::set(jint arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(I)V",
			arg0
		);
	}
	void AtomicInteger::setOpaque(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOpaque",
			"(I)V",
			arg0
		);
	}
	void AtomicInteger::setPlain(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPlain",
			"(I)V",
			arg0
		);
	}
	void AtomicInteger::setRelease(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRelease",
			"(I)V",
			arg0
		);
	}
	jstring AtomicInteger::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AtomicInteger::updateAndGet(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"updateAndGet",
			"(Ljava/util/function/IntUnaryOperator;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean AtomicInteger::weakCompareAndSet(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSet",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicInteger::weakCompareAndSetAcquire(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetAcquire",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicInteger::weakCompareAndSetPlain(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetPlain",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicInteger::weakCompareAndSetRelease(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetRelease",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicInteger::weakCompareAndSetVolatile(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetVolatile",
			"(II)Z",
			arg0,
			arg1
		);
	}
} // namespace java::util::concurrent::atomic

