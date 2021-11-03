#include "./AtomicReference.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// QAndroidJniObject forward
	AtomicReference::AtomicReference(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AtomicReference::AtomicReference()
		: JObject(
			"java.util.concurrent.atomic.AtomicReference",
			"()V"
		) {}
	AtomicReference::AtomicReference(jobject arg0)
		: JObject(
			"java.util.concurrent.atomic.AtomicReference",
			"(Ljava/lang/Object;)V",
			arg0
		) {}
	
	// Methods
	jobject AtomicReference::accumulateAndGet(jobject arg0, JObject arg1)
	{
		return callObjectMethod(
			"accumulateAndGet",
			"(Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jobject AtomicReference::compareAndExchange(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"compareAndExchange",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jobject AtomicReference::compareAndExchangeAcquire(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"compareAndExchangeAcquire",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jobject AtomicReference::compareAndExchangeRelease(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"compareAndExchangeRelease",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jboolean AtomicReference::compareAndSet(jobject arg0, jobject arg1)
	{
		return callMethod<jboolean>(
			"compareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jobject AtomicReference::get()
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject AtomicReference::getAcquire()
	{
		return callObjectMethod(
			"getAcquire",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject AtomicReference::getAndAccumulate(jobject arg0, JObject arg1)
	{
		return callObjectMethod(
			"getAndAccumulate",
			"(Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jobject AtomicReference::getAndSet(jobject arg0)
	{
		return callObjectMethod(
			"getAndSet",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject AtomicReference::getAndUpdate(JObject arg0)
	{
		return callObjectMethod(
			"getAndUpdate",
			"(Ljava/util/function/UnaryOperator;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	jobject AtomicReference::getOpaque()
	{
		return callObjectMethod(
			"getOpaque",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject AtomicReference::getPlain()
	{
		return callObjectMethod(
			"getPlain",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void AtomicReference::lazySet(jobject arg0)
	{
		callMethod<void>(
			"lazySet",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void AtomicReference::set(jobject arg0)
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void AtomicReference::setOpaque(jobject arg0)
	{
		callMethod<void>(
			"setOpaque",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void AtomicReference::setPlain(jobject arg0)
	{
		callMethod<void>(
			"setPlain",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void AtomicReference::setRelease(jobject arg0)
	{
		callMethod<void>(
			"setRelease",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jstring AtomicReference::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject AtomicReference::updateAndGet(JObject arg0)
	{
		return callObjectMethod(
			"updateAndGet",
			"(Ljava/util/function/UnaryOperator;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	jboolean AtomicReference::weakCompareAndSet(jobject arg0, jobject arg1)
	{
		return callMethod<jboolean>(
			"weakCompareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicReference::weakCompareAndSetAcquire(jobject arg0, jobject arg1)
	{
		return callMethod<jboolean>(
			"weakCompareAndSetAcquire",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicReference::weakCompareAndSetPlain(jobject arg0, jobject arg1)
	{
		return callMethod<jboolean>(
			"weakCompareAndSetPlain",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicReference::weakCompareAndSetRelease(jobject arg0, jobject arg1)
	{
		return callMethod<jboolean>(
			"weakCompareAndSetRelease",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicReference::weakCompareAndSetVolatile(jobject arg0, jobject arg1)
	{
		return callMethod<jboolean>(
			"weakCompareAndSetVolatile",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
} // namespace java::util::concurrent::atomic

