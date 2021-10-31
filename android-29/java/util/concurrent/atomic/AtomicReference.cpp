#include "./AtomicReference.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	AtomicReference::AtomicReference(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AtomicReference::AtomicReference()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicReference",
			"()V"
		);
	}
	AtomicReference::AtomicReference(jobject arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicReference",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	
	// Methods
	jobject AtomicReference::accumulateAndGet(jobject arg0, __JniBaseClass arg1)
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
	jobject AtomicReference::getAndAccumulate(jobject arg0, __JniBaseClass arg1)
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
	jobject AtomicReference::getAndUpdate(__JniBaseClass arg0)
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
	jobject AtomicReference::updateAndGet(__JniBaseClass arg0)
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
} // namespace java::util::concurrent::atomic

