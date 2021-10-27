#pragma once

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
		jlong accumulateAndGet(jlong arg0, __jni_impl::__JniBaseClass arg1);
		jlong addAndGet(jlong arg0);
		jlong compareAndExchange(jlong arg0, jlong arg1);
		jlong compareAndExchangeAcquire(jlong arg0, jlong arg1);
		jlong compareAndExchangeRelease(jlong arg0, jlong arg1);
		jboolean compareAndSet(jlong arg0, jlong arg1);
		jlong decrementAndGet();
		jdouble doubleValue();
		jfloat floatValue();
		jlong get();
		jlong getAcquire();
		jlong getAndAccumulate(jlong arg0, __jni_impl::__JniBaseClass arg1);
		jlong getAndAdd(jlong arg0);
		jlong getAndDecrement();
		jlong getAndIncrement();
		jlong getAndSet(jlong arg0);
		jlong getAndUpdate(__jni_impl::__JniBaseClass arg0);
		jlong getOpaque();
		jlong getPlain();
		jlong incrementAndGet();
		jint intValue();
		void lazySet(jlong arg0);
		jlong longValue();
		void set(jlong arg0);
		void setOpaque(jlong arg0);
		void setPlain(jlong arg0);
		void setRelease(jlong arg0);
		jstring toString();
		jlong updateAndGet(__jni_impl::__JniBaseClass arg0);
		jboolean weakCompareAndSet(jlong arg0, jlong arg1);
		jboolean weakCompareAndSetAcquire(jlong arg0, jlong arg1);
		jboolean weakCompareAndSetPlain(jlong arg0, jlong arg1);
		jboolean weakCompareAndSetRelease(jlong arg0, jlong arg1);
		jboolean weakCompareAndSetVolatile(jlong arg0, jlong arg1);
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
	jlong AtomicLong::accumulateAndGet(jlong arg0, __jni_impl::__JniBaseClass arg1)
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
	jlong AtomicLong::getAndAccumulate(jlong arg0, __jni_impl::__JniBaseClass arg1)
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
	jlong AtomicLong::getAndUpdate(__jni_impl::__JniBaseClass arg0)
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
	jlong AtomicLong::updateAndGet(__jni_impl::__JniBaseClass arg0)
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

