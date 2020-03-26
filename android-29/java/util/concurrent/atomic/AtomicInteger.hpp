#pragma once

#ifndef JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER
#define JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER

#include "../../../../__JniBaseClass.hpp"
#include "../../../lang/Number.hpp"


namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicInteger : public __jni_impl::java::lang::Number
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor();
		
		// Methods
		jint get();
		jstring toString();
		jint intValue();
		jlong longValue();
		jfloat floatValue();
		jdouble doubleValue();
		void set(jint arg0);
		jint getOpaque();
		void setOpaque(jint arg0);
		jint getAcquire();
		void setRelease(jint arg0);
		jboolean compareAndSet(jint arg0, jint arg1);
		jint compareAndExchange(jint arg0, jint arg1);
		jint compareAndExchangeAcquire(jint arg0, jint arg1);
		jint compareAndExchangeRelease(jint arg0, jint arg1);
		jboolean weakCompareAndSetPlain(jint arg0, jint arg1);
		jboolean weakCompareAndSet(jint arg0, jint arg1);
		jboolean weakCompareAndSetAcquire(jint arg0, jint arg1);
		jboolean weakCompareAndSetRelease(jint arg0, jint arg1);
		jint getAndSet(jint arg0);
		jint getAndAdd(jint arg0);
		void lazySet(jint arg0);
		jboolean weakCompareAndSetVolatile(jint arg0, jint arg1);
		jint getAndIncrement();
		jint getAndDecrement();
		jint incrementAndGet();
		jint decrementAndGet();
		jint addAndGet(jint arg0);
		jint getAndUpdate(__jni_impl::__JniBaseClass arg0);
		jint updateAndGet(__jni_impl::__JniBaseClass arg0);
		jint getAndAccumulate(jint arg0, __jni_impl::__JniBaseClass arg1);
		jint accumulateAndGet(jint arg0, __jni_impl::__JniBaseClass arg1);
		jint getPlain();
		void setPlain(jint arg0);
	};
} // namespace __jni_impl::java::util::concurrent::atomic


namespace __jni_impl::java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	void AtomicInteger::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicInteger",
			"(I)V",
			arg0);
	}
	void AtomicInteger::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicInteger",
			"()V");
	}
	
	// Methods
	jint AtomicInteger::get()
	{
		return __thiz.callMethod<jint>(
			"get",
			"()I"
		);
	}
	jstring AtomicInteger::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AtomicInteger::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong AtomicInteger::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	jfloat AtomicInteger::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jdouble AtomicInteger::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D"
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
	jint AtomicInteger::getOpaque()
	{
		return __thiz.callMethod<jint>(
			"getOpaque",
			"()I"
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
	jint AtomicInteger::getAcquire()
	{
		return __thiz.callMethod<jint>(
			"getAcquire",
			"()I"
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
	jboolean AtomicInteger::compareAndSet(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"compareAndSet",
			"(II)Z",
			arg0,
			arg1
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
	jboolean AtomicInteger::weakCompareAndSetPlain(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetPlain",
			"(II)Z",
			arg0,
			arg1
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
	jboolean AtomicInteger::weakCompareAndSetRelease(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetRelease",
			"(II)Z",
			arg0,
			arg1
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
	jint AtomicInteger::getAndAdd(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getAndAdd",
			"(I)I",
			arg0
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
	jboolean AtomicInteger::weakCompareAndSetVolatile(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetVolatile",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jint AtomicInteger::getAndIncrement()
	{
		return __thiz.callMethod<jint>(
			"getAndIncrement",
			"()I"
		);
	}
	jint AtomicInteger::getAndDecrement()
	{
		return __thiz.callMethod<jint>(
			"getAndDecrement",
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
	jint AtomicInteger::decrementAndGet()
	{
		return __thiz.callMethod<jint>(
			"decrementAndGet",
			"()I"
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
	jint AtomicInteger::getAndUpdate(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"getAndUpdate",
			"(Ljava/util/function/IntUnaryOperator;)I",
			arg0.__jniObject().object()
		);
	}
	jint AtomicInteger::updateAndGet(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"updateAndGet",
			"(Ljava/util/function/IntUnaryOperator;)I",
			arg0.__jniObject().object()
		);
	}
	jint AtomicInteger::getAndAccumulate(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jint>(
			"getAndAccumulate",
			"(ILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint AtomicInteger::accumulateAndGet(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jint>(
			"accumulateAndGet",
			"(ILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint AtomicInteger::getPlain()
	{
		return __thiz.callMethod<jint>(
			"getPlain",
			"()I"
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
} // namespace __jni_impl::java::util::concurrent::atomic

namespace java::util::concurrent::atomic
{
	class AtomicInteger : public __jni_impl::java::util::concurrent::atomic::AtomicInteger
	{
	public:
		AtomicInteger(QAndroidJniObject obj) { __thiz = obj; }
		AtomicInteger(jint arg0)
		{
			__constructor(
				arg0);
		}
		AtomicInteger()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent::atomic

#endif // JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGER

