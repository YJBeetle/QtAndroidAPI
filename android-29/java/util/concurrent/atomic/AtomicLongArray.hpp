#pragma once

#ifndef JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGARRAY
#define JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGARRAY

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicLongArray : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jlongArray arg0);
		void __constructor(jint arg0);
		
		// Methods
		jlong accumulateAndGet(jint arg0, jlong arg1, __jni_impl::__JniBaseClass arg2);
		jlong addAndGet(jint arg0, jlong arg1);
		jlong compareAndExchange(jint arg0, jlong arg1, jlong arg2);
		jlong compareAndExchangeAcquire(jint arg0, jlong arg1, jlong arg2);
		jlong compareAndExchangeRelease(jint arg0, jlong arg1, jlong arg2);
		jboolean compareAndSet(jint arg0, jlong arg1, jlong arg2);
		jlong decrementAndGet(jint arg0);
		jlong get(jint arg0);
		jlong getAcquire(jint arg0);
		jlong getAndAccumulate(jint arg0, jlong arg1, __jni_impl::__JniBaseClass arg2);
		jlong getAndAdd(jint arg0, jlong arg1);
		jlong getAndDecrement(jint arg0);
		jlong getAndIncrement(jint arg0);
		jlong getAndSet(jint arg0, jlong arg1);
		jlong getAndUpdate(jint arg0, __jni_impl::__JniBaseClass arg1);
		jlong getOpaque(jint arg0);
		jlong getPlain(jint arg0);
		jlong incrementAndGet(jint arg0);
		void lazySet(jint arg0, jlong arg1);
		jint length();
		void set(jint arg0, jlong arg1);
		void setOpaque(jint arg0, jlong arg1);
		void setPlain(jint arg0, jlong arg1);
		void setRelease(jint arg0, jlong arg1);
		jstring toString();
		jlong updateAndGet(jint arg0, __jni_impl::__JniBaseClass arg1);
		jboolean weakCompareAndSet(jint arg0, jlong arg1, jlong arg2);
		jboolean weakCompareAndSetAcquire(jint arg0, jlong arg1, jlong arg2);
		jboolean weakCompareAndSetPlain(jint arg0, jlong arg1, jlong arg2);
		jboolean weakCompareAndSetRelease(jint arg0, jlong arg1, jlong arg2);
		jboolean weakCompareAndSetVolatile(jint arg0, jlong arg1, jlong arg2);
	};
} // namespace __jni_impl::java::util::concurrent::atomic


namespace __jni_impl::java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	void AtomicLongArray::__constructor(jlongArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicLongArray",
			"([J)V",
			arg0
		);
	}
	void AtomicLongArray::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicLongArray",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jlong AtomicLongArray::accumulateAndGet(jint arg0, jlong arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callMethod<jlong>(
			"accumulateAndGet",
			"(IJLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jlong AtomicLongArray::addAndGet(jint arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"addAndGet",
			"(IJ)J",
			arg0,
			arg1
		);
	}
	jlong AtomicLongArray::compareAndExchange(jint arg0, jlong arg1, jlong arg2)
	{
		return __thiz.callMethod<jlong>(
			"compareAndExchange",
			"(IJJ)J",
			arg0,
			arg1,
			arg2
		);
	}
	jlong AtomicLongArray::compareAndExchangeAcquire(jint arg0, jlong arg1, jlong arg2)
	{
		return __thiz.callMethod<jlong>(
			"compareAndExchangeAcquire",
			"(IJJ)J",
			arg0,
			arg1,
			arg2
		);
	}
	jlong AtomicLongArray::compareAndExchangeRelease(jint arg0, jlong arg1, jlong arg2)
	{
		return __thiz.callMethod<jlong>(
			"compareAndExchangeRelease",
			"(IJJ)J",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AtomicLongArray::compareAndSet(jint arg0, jlong arg1, jlong arg2)
	{
		return __thiz.callMethod<jboolean>(
			"compareAndSet",
			"(IJJ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jlong AtomicLongArray::decrementAndGet(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"decrementAndGet",
			"(I)J",
			arg0
		);
	}
	jlong AtomicLongArray::get(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"get",
			"(I)J",
			arg0
		);
	}
	jlong AtomicLongArray::getAcquire(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getAcquire",
			"(I)J",
			arg0
		);
	}
	jlong AtomicLongArray::getAndAccumulate(jint arg0, jlong arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callMethod<jlong>(
			"getAndAccumulate",
			"(IJLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jlong AtomicLongArray::getAndAdd(jint arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"getAndAdd",
			"(IJ)J",
			arg0,
			arg1
		);
	}
	jlong AtomicLongArray::getAndDecrement(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getAndDecrement",
			"(I)J",
			arg0
		);
	}
	jlong AtomicLongArray::getAndIncrement(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getAndIncrement",
			"(I)J",
			arg0
		);
	}
	jlong AtomicLongArray::getAndSet(jint arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"getAndSet",
			"(IJ)J",
			arg0,
			arg1
		);
	}
	jlong AtomicLongArray::getAndUpdate(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"getAndUpdate",
			"(ILjava/util/function/LongUnaryOperator;)J",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jlong AtomicLongArray::getOpaque(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getOpaque",
			"(I)J",
			arg0
		);
	}
	jlong AtomicLongArray::getPlain(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getPlain",
			"(I)J",
			arg0
		);
	}
	jlong AtomicLongArray::incrementAndGet(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"incrementAndGet",
			"(I)J",
			arg0
		);
	}
	void AtomicLongArray::lazySet(jint arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"lazySet",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	jint AtomicLongArray::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	void AtomicLongArray::set(jint arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void AtomicLongArray::setOpaque(jint arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"setOpaque",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void AtomicLongArray::setPlain(jint arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"setPlain",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void AtomicLongArray::setRelease(jint arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"setRelease",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	jstring AtomicLongArray::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong AtomicLongArray::updateAndGet(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"updateAndGet",
			"(ILjava/util/function/LongUnaryOperator;)J",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean AtomicLongArray::weakCompareAndSet(jint arg0, jlong arg1, jlong arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSet",
			"(IJJ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AtomicLongArray::weakCompareAndSetAcquire(jint arg0, jlong arg1, jlong arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetAcquire",
			"(IJJ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AtomicLongArray::weakCompareAndSetPlain(jint arg0, jlong arg1, jlong arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetPlain",
			"(IJJ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AtomicLongArray::weakCompareAndSetRelease(jint arg0, jlong arg1, jlong arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetRelease",
			"(IJJ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AtomicLongArray::weakCompareAndSetVolatile(jint arg0, jlong arg1, jlong arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetVolatile",
			"(IJJ)Z",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::java::util::concurrent::atomic

namespace java::util::concurrent::atomic
{
	class AtomicLongArray : public __jni_impl::java::util::concurrent::atomic::AtomicLongArray
	{
	public:
		AtomicLongArray(QAndroidJniObject obj) { __thiz = obj; }
		AtomicLongArray(jlongArray arg0)
		{
			__constructor(
				arg0);
		}
		AtomicLongArray(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent::atomic

#endif // JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGARRAY

