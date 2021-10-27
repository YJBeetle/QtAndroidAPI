#pragma once

#ifndef JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCE
#define JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCE

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicReference : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jobject arg0);
		
		// Methods
		jobject accumulateAndGet(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jobject compareAndExchange(jobject arg0, jobject arg1);
		jobject compareAndExchangeAcquire(jobject arg0, jobject arg1);
		jobject compareAndExchangeRelease(jobject arg0, jobject arg1);
		jboolean compareAndSet(jobject arg0, jobject arg1);
		jobject get();
		jobject getAcquire();
		jobject getAndAccumulate(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jobject getAndSet(jobject arg0);
		jobject getAndUpdate(__jni_impl::__JniBaseClass arg0);
		jobject getOpaque();
		jobject getPlain();
		void lazySet(jobject arg0);
		void set(jobject arg0);
		void setOpaque(jobject arg0);
		void setPlain(jobject arg0);
		void setRelease(jobject arg0);
		jstring toString();
		jobject updateAndGet(__jni_impl::__JniBaseClass arg0);
		jboolean weakCompareAndSet(jobject arg0, jobject arg1);
		jboolean weakCompareAndSetAcquire(jobject arg0, jobject arg1);
		jboolean weakCompareAndSetPlain(jobject arg0, jobject arg1);
		jboolean weakCompareAndSetRelease(jobject arg0, jobject arg1);
		jboolean weakCompareAndSetVolatile(jobject arg0, jobject arg1);
	};
} // namespace __jni_impl::java::util::concurrent::atomic


namespace __jni_impl::java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	void AtomicReference::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicReference",
			"()V"
		);
	}
	void AtomicReference::__constructor(jobject arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicReference",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	
	// Methods
	jobject AtomicReference::accumulateAndGet(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"accumulateAndGet",
			"(Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject AtomicReference::compareAndExchange(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"compareAndExchange",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jobject AtomicReference::compareAndExchangeAcquire(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"compareAndExchangeAcquire",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jobject AtomicReference::compareAndExchangeRelease(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"compareAndExchangeRelease",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jboolean AtomicReference::compareAndSet(jobject arg0, jobject arg1)
	{
		return __thiz.callMethod<jboolean>(
			"compareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jobject AtomicReference::get()
	{
		return __thiz.callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject AtomicReference::getAcquire()
	{
		return __thiz.callObjectMethod(
			"getAcquire",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject AtomicReference::getAndAccumulate(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"getAndAccumulate",
			"(Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject AtomicReference::getAndSet(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"getAndSet",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject AtomicReference::getAndUpdate(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getAndUpdate",
			"(Ljava/util/function/UnaryOperator;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jobject AtomicReference::getOpaque()
	{
		return __thiz.callObjectMethod(
			"getOpaque",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject AtomicReference::getPlain()
	{
		return __thiz.callObjectMethod(
			"getPlain",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void AtomicReference::lazySet(jobject arg0)
	{
		__thiz.callMethod<void>(
			"lazySet",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void AtomicReference::set(jobject arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void AtomicReference::setOpaque(jobject arg0)
	{
		__thiz.callMethod<void>(
			"setOpaque",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void AtomicReference::setPlain(jobject arg0)
	{
		__thiz.callMethod<void>(
			"setPlain",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void AtomicReference::setRelease(jobject arg0)
	{
		__thiz.callMethod<void>(
			"setRelease",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jstring AtomicReference::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject AtomicReference::updateAndGet(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"updateAndGet",
			"(Ljava/util/function/UnaryOperator;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jboolean AtomicReference::weakCompareAndSet(jobject arg0, jobject arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicReference::weakCompareAndSetAcquire(jobject arg0, jobject arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetAcquire",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicReference::weakCompareAndSetPlain(jobject arg0, jobject arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetPlain",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicReference::weakCompareAndSetRelease(jobject arg0, jobject arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetRelease",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicReference::weakCompareAndSetVolatile(jobject arg0, jobject arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetVolatile",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::java::util::concurrent::atomic

namespace java::util::concurrent::atomic
{
	class AtomicReference : public __jni_impl::java::util::concurrent::atomic::AtomicReference
	{
	public:
		AtomicReference(QAndroidJniObject obj) { __thiz = obj; }
		AtomicReference()
		{
			__constructor();
		}
		AtomicReference(jobject arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent::atomic

#endif // JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCE

