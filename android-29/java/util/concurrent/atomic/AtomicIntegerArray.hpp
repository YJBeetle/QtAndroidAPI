#pragma once

#ifndef JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGERARRAY
#define JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGERARRAY

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicIntegerArray : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(jintArray arg0);
		
		// Methods
		jint get(jint arg0);
		jint length();
		jstring toString();
		void set(jint arg0, jint arg1);
		jint getOpaque(jint arg0);
		void setOpaque(jint arg0, jint arg1);
		jint getAcquire(jint arg0);
		void setRelease(jint arg0, jint arg1);
		jboolean compareAndSet(jint arg0, jint arg1, jint arg2);
		jint compareAndExchange(jint arg0, jint arg1, jint arg2);
		jint compareAndExchangeAcquire(jint arg0, jint arg1, jint arg2);
		jint compareAndExchangeRelease(jint arg0, jint arg1, jint arg2);
		jboolean weakCompareAndSetPlain(jint arg0, jint arg1, jint arg2);
		jboolean weakCompareAndSet(jint arg0, jint arg1, jint arg2);
		jboolean weakCompareAndSetAcquire(jint arg0, jint arg1, jint arg2);
		jboolean weakCompareAndSetRelease(jint arg0, jint arg1, jint arg2);
		jint getAndSet(jint arg0, jint arg1);
		jint getAndAdd(jint arg0, jint arg1);
		void lazySet(jint arg0, jint arg1);
		jboolean weakCompareAndSetVolatile(jint arg0, jint arg1, jint arg2);
		jint getAndIncrement(jint arg0);
		jint getAndDecrement(jint arg0);
		jint incrementAndGet(jint arg0);
		jint decrementAndGet(jint arg0);
		jint addAndGet(jint arg0, jint arg1);
		jint getAndUpdate(jint arg0, __jni_impl::__JniBaseClass arg1);
		jint updateAndGet(jint arg0, __jni_impl::__JniBaseClass arg1);
		jint getAndAccumulate(jint arg0, jint arg1, __jni_impl::__JniBaseClass arg2);
		jint accumulateAndGet(jint arg0, jint arg1, __jni_impl::__JniBaseClass arg2);
		jint getPlain(jint arg0);
		void setPlain(jint arg0, jint arg1);
	};
} // namespace __jni_impl::java::util::concurrent::atomic


namespace __jni_impl::java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	void AtomicIntegerArray::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicIntegerArray",
			"(I)V",
			arg0
		);
	}
	void AtomicIntegerArray::__constructor(jintArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicIntegerArray",
			"([I)V",
			arg0
		);
	}
	
	// Methods
	jint AtomicIntegerArray::get(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(I)I",
			arg0
		);
	}
	jint AtomicIntegerArray::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	jstring AtomicIntegerArray::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jint AtomicIntegerArray::getOpaque(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getOpaque",
			"(I)I",
			arg0
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
	jint AtomicIntegerArray::getAcquire(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getAcquire",
			"(I)I",
			arg0
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
	jint AtomicIntegerArray::getAndSet(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getAndSet",
			"(II)I",
			arg0,
			arg1
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
	void AtomicIntegerArray::lazySet(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"lazySet",
			"(II)V",
			arg0,
			arg1
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
	jint AtomicIntegerArray::getAndIncrement(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getAndIncrement",
			"(I)I",
			arg0
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
	jint AtomicIntegerArray::incrementAndGet(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"incrementAndGet",
			"(I)I",
			arg0
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
	jint AtomicIntegerArray::addAndGet(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"addAndGet",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint AtomicIntegerArray::getAndUpdate(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jint>(
			"getAndUpdate",
			"(ILjava/util/function/IntUnaryOperator;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint AtomicIntegerArray::updateAndGet(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jint>(
			"updateAndGet",
			"(ILjava/util/function/IntUnaryOperator;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint AtomicIntegerArray::getAndAccumulate(jint arg0, jint arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callMethod<jint>(
			"getAndAccumulate",
			"(IILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint AtomicIntegerArray::accumulateAndGet(jint arg0, jint arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callMethod<jint>(
			"accumulateAndGet",
			"(IILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1,
			arg2.__jniObject().object()
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
	void AtomicIntegerArray::setPlain(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setPlain",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::java::util::concurrent::atomic

namespace java::util::concurrent::atomic
{
	class AtomicIntegerArray : public __jni_impl::java::util::concurrent::atomic::AtomicIntegerArray
	{
	public:
		AtomicIntegerArray(QAndroidJniObject obj) { __thiz = obj; }
		AtomicIntegerArray(jint arg0)
		{
			__constructor(
				arg0);
		}
		AtomicIntegerArray(jintArray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent::atomic

#endif // JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGERARRAY

