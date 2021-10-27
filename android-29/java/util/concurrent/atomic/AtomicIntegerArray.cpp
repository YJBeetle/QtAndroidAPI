#include "./AtomicIntegerArray.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	AtomicIntegerArray::AtomicIntegerArray(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AtomicIntegerArray::AtomicIntegerArray(jintArray &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicIntegerArray",
			"([I)V",
			arg0
		);
	}
	AtomicIntegerArray::AtomicIntegerArray(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicIntegerArray",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jint AtomicIntegerArray::accumulateAndGet(jint arg0, jint arg1, __JniBaseClass arg2)
	{
		return __thiz.callMethod<jint>(
			"accumulateAndGet",
			"(IILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint AtomicIntegerArray::addAndGet(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"addAndGet",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint AtomicIntegerArray::compareAndExchange(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"compareAndExchange",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AtomicIntegerArray::compareAndExchangeAcquire(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"compareAndExchangeAcquire",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AtomicIntegerArray::compareAndExchangeRelease(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"compareAndExchangeRelease",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AtomicIntegerArray::compareAndSet(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"compareAndSet",
			"(III)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jint AtomicIntegerArray::decrementAndGet(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"decrementAndGet",
			"(I)I",
			arg0
		);
	}
	jint AtomicIntegerArray::get(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(I)I",
			arg0
		);
	}
	jint AtomicIntegerArray::getAcquire(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getAcquire",
			"(I)I",
			arg0
		);
	}
	jint AtomicIntegerArray::getAndAccumulate(jint arg0, jint arg1, __JniBaseClass arg2)
	{
		return __thiz.callMethod<jint>(
			"getAndAccumulate",
			"(IILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint AtomicIntegerArray::getAndAdd(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getAndAdd",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint AtomicIntegerArray::getAndDecrement(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getAndDecrement",
			"(I)I",
			arg0
		);
	}
	jint AtomicIntegerArray::getAndIncrement(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getAndIncrement",
			"(I)I",
			arg0
		);
	}
	jint AtomicIntegerArray::getAndSet(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getAndSet",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint AtomicIntegerArray::getAndUpdate(jint arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jint>(
			"getAndUpdate",
			"(ILjava/util/function/IntUnaryOperator;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint AtomicIntegerArray::getOpaque(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getOpaque",
			"(I)I",
			arg0
		);
	}
	jint AtomicIntegerArray::getPlain(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getPlain",
			"(I)I",
			arg0
		);
	}
	jint AtomicIntegerArray::incrementAndGet(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"incrementAndGet",
			"(I)I",
			arg0
		);
	}
	void AtomicIntegerArray::lazySet(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"lazySet",
			"(II)V",
			arg0,
			arg1
		);
	}
	jint AtomicIntegerArray::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	void AtomicIntegerArray::set(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AtomicIntegerArray::setOpaque(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setOpaque",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AtomicIntegerArray::setPlain(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setPlain",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AtomicIntegerArray::setRelease(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setRelease",
			"(II)V",
			arg0,
			arg1
		);
	}
	jstring AtomicIntegerArray::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AtomicIntegerArray::updateAndGet(jint arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jint>(
			"updateAndGet",
			"(ILjava/util/function/IntUnaryOperator;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean AtomicIntegerArray::weakCompareAndSet(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSet",
			"(III)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AtomicIntegerArray::weakCompareAndSetAcquire(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetAcquire",
			"(III)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AtomicIntegerArray::weakCompareAndSetPlain(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetPlain",
			"(III)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AtomicIntegerArray::weakCompareAndSetRelease(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetRelease",
			"(III)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AtomicIntegerArray::weakCompareAndSetVolatile(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetVolatile",
			"(III)Z",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::util::concurrent::atomic

