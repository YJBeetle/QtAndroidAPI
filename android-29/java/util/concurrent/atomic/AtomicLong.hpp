#pragma once

#ifndef JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONG
#define JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONG

#include "../../../../__JniBaseClass.hpp"
#include "../../../lang/Number.hpp"


namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicLong : public __jni_impl::java::lang::Number
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jlong arg0);
		
		// Methods
		jlong get();
		jstring toString();
		jint intValue();
		jlong longValue();
		jfloat floatValue();
		jdouble doubleValue();
		void set(jlong arg0);
		jlong getOpaque();
		void setOpaque(jlong arg0);
		jlong getAcquire();
		void setRelease(jlong arg0);
		jboolean compareAndSet(jlong arg0, jlong arg1);
		jlong compareAndExchange(jlong arg0, jlong arg1);
		jlong compareAndExchangeAcquire(jlong arg0, jlong arg1);
		jlong compareAndExchangeRelease(jlong arg0, jlong arg1);
		jboolean weakCompareAndSetPlain(jlong arg0, jlong arg1);
		jboolean weakCompareAndSet(jlong arg0, jlong arg1);
		jboolean weakCompareAndSetAcquire(jlong arg0, jlong arg1);
		jboolean weakCompareAndSetRelease(jlong arg0, jlong arg1);
		jlong getAndSet(jlong arg0);
		jlong getAndAdd(jlong arg0);
		void lazySet(jlong arg0);
		jboolean weakCompareAndSetVolatile(jlong arg0, jlong arg1);
		jlong getAndIncrement();
		jlong getAndDecrement();
		jlong incrementAndGet();
		jlong decrementAndGet();
		jlong addAndGet(jlong arg0);
		jlong getAndUpdate(__jni_impl::__JniBaseClass arg0);
		jlong updateAndGet(__jni_impl::__JniBaseClass arg0);
		jlong getAndAccumulate(jlong arg0, __jni_impl::__JniBaseClass arg1);
		jlong accumulateAndGet(jlong arg0, __jni_impl::__JniBaseClass arg1);
		jlong getPlain();
		void setPlain(jlong arg0);
	};
} // namespace __jni_impl::java::util::concurrent::atomic


namespace __jni_impl::java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	void AtomicLong::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicLong",
			"()V"
		);
	}
	void AtomicLong::__constructor(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicLong",
			"(J)V",
			arg0
		);
	}
	
	// Methods
	jlong AtomicLong::get()
	{
		return __thiz.callMethod<jlong>(
			"get",
			"()J"
		);
	}
	jstring AtomicLong::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AtomicLong::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong AtomicLong::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	jfloat AtomicLong::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jdouble AtomicLong::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D"
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
	jlong AtomicLong::getOpaque()
	{
		return __thiz.callMethod<jlong>(
			"getOpaque",
			"()J"
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
	jlong AtomicLong::getAcquire()
	{
		return __thiz.callMethod<jlong>(
			"getAcquire",
			"()J"
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
	jboolean AtomicLong::compareAndSet(jlong arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"compareAndSet",
			"(JJ)Z",
			arg0,
			arg1
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
	jboolean AtomicLong::weakCompareAndSetPlain(jlong arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetPlain",
			"(JJ)Z",
			arg0,
			arg1
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
	jboolean AtomicLong::weakCompareAndSetRelease(jlong arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetRelease",
			"(JJ)Z",
			arg0,
			arg1
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
	jlong AtomicLong::getAndAdd(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"getAndAdd",
			"(J)J",
			arg0
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
	jboolean AtomicLong::weakCompareAndSetVolatile(jlong arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetVolatile",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	jlong AtomicLong::getAndIncrement()
	{
		return __thiz.callMethod<jlong>(
			"getAndIncrement",
			"()J"
		);
	}
	jlong AtomicLong::getAndDecrement()
	{
		return __thiz.callMethod<jlong>(
			"getAndDecrement",
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
	jlong AtomicLong::decrementAndGet()
	{
		return __thiz.callMethod<jlong>(
			"decrementAndGet",
			"()J"
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
	jlong AtomicLong::getAndUpdate(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"getAndUpdate",
			"(Ljava/util/function/LongUnaryOperator;)J",
			arg0.__jniObject().object()
		);
	}
	jlong AtomicLong::updateAndGet(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"updateAndGet",
			"(Ljava/util/function/LongUnaryOperator;)J",
			arg0.__jniObject().object()
		);
	}
	jlong AtomicLong::getAndAccumulate(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"getAndAccumulate",
			"(JLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jlong AtomicLong::accumulateAndGet(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"accumulateAndGet",
			"(JLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jlong AtomicLong::getPlain()
	{
		return __thiz.callMethod<jlong>(
			"getPlain",
			"()J"
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
} // namespace __jni_impl::java::util::concurrent::atomic

namespace java::util::concurrent::atomic
{
	class AtomicLong : public __jni_impl::java::util::concurrent::atomic::AtomicLong
	{
	public:
		AtomicLong(QAndroidJniObject obj) { __thiz = obj; }
		AtomicLong()
		{
			__constructor();
		}
		AtomicLong(jlong arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent::atomic

#endif // JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONG

