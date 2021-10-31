#include "./AtomicLong.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	AtomicLong::AtomicLong(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AtomicLong::AtomicLong()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicLong",
			"()V"
		);
	}
	AtomicLong::AtomicLong(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicLong",
			"(J)V",
			arg0
		);
	}
	
	// Methods
	jlong AtomicLong::accumulateAndGet(jlong arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"accumulateAndGet",
			"(JLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jlong AtomicLong::addAndGet(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"addAndGet",
			"(J)J",
			arg0
		);
	}
	jlong AtomicLong::compareAndExchange(jlong arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"compareAndExchange",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jlong AtomicLong::compareAndExchangeAcquire(jlong arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"compareAndExchangeAcquire",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jlong AtomicLong::compareAndExchangeRelease(jlong arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"compareAndExchangeRelease",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jboolean AtomicLong::compareAndSet(jlong arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"compareAndSet",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	jlong AtomicLong::decrementAndGet()
	{
		return __thiz.callMethod<jlong>(
			"decrementAndGet",
			"()J"
		);
	}
	jdouble AtomicLong::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jfloat AtomicLong::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jlong AtomicLong::get()
	{
		return __thiz.callMethod<jlong>(
			"get",
			"()J"
		);
	}
	jlong AtomicLong::getAcquire()
	{
		return __thiz.callMethod<jlong>(
			"getAcquire",
			"()J"
		);
	}
	jlong AtomicLong::getAndAccumulate(jlong arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"getAndAccumulate",
			"(JLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jlong AtomicLong::getAndAdd(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"getAndAdd",
			"(J)J",
			arg0
		);
	}
	jlong AtomicLong::getAndDecrement()
	{
		return __thiz.callMethod<jlong>(
			"getAndDecrement",
			"()J"
		);
	}
	jlong AtomicLong::getAndIncrement()
	{
		return __thiz.callMethod<jlong>(
			"getAndIncrement",
			"()J"
		);
	}
	jlong AtomicLong::getAndSet(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"getAndSet",
			"(J)J",
			arg0
		);
	}
	jlong AtomicLong::getAndUpdate(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"getAndUpdate",
			"(Ljava/util/function/LongUnaryOperator;)J",
			arg0.__jniObject().object()
		);
	}
	jlong AtomicLong::getOpaque()
	{
		return __thiz.callMethod<jlong>(
			"getOpaque",
			"()J"
		);
	}
	jlong AtomicLong::getPlain()
	{
		return __thiz.callMethod<jlong>(
			"getPlain",
			"()J"
		);
	}
	jlong AtomicLong::incrementAndGet()
	{
		return __thiz.callMethod<jlong>(
			"incrementAndGet",
			"()J"
		);
	}
	jint AtomicLong::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	void AtomicLong::lazySet(jlong arg0)
	{
		__thiz.callMethod<void>(
			"lazySet",
			"(J)V",
			arg0
		);
	}
	jlong AtomicLong::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	void AtomicLong::set(jlong arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(J)V",
			arg0
		);
	}
	void AtomicLong::setOpaque(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setOpaque",
			"(J)V",
			arg0
		);
	}
	void AtomicLong::setPlain(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setPlain",
			"(J)V",
			arg0
		);
	}
	void AtomicLong::setRelease(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setRelease",
			"(J)V",
			arg0
		);
	}
	jstring AtomicLong::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong AtomicLong::updateAndGet(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"updateAndGet",
			"(Ljava/util/function/LongUnaryOperator;)J",
			arg0.__jniObject().object()
		);
	}
	jboolean AtomicLong::weakCompareAndSet(jlong arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSet",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicLong::weakCompareAndSetAcquire(jlong arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetAcquire",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicLong::weakCompareAndSetPlain(jlong arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetPlain",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicLong::weakCompareAndSetRelease(jlong arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetRelease",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicLong::weakCompareAndSetVolatile(jlong arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetVolatile",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
} // namespace java::util::concurrent::atomic

