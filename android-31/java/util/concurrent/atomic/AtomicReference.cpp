#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
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
	AtomicReference::AtomicReference(JObject arg0)
		: JObject(
			"java.util.concurrent.atomic.AtomicReference",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		) {}
	
	// Methods
	JObject AtomicReference::accumulateAndGet(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"accumulateAndGet",
			"(Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	JObject AtomicReference::compareAndExchange(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"compareAndExchange",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	JObject AtomicReference::compareAndExchangeAcquire(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"compareAndExchangeAcquire",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	JObject AtomicReference::compareAndExchangeRelease(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"compareAndExchangeRelease",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	jboolean AtomicReference::compareAndSet(JObject arg0, JObject arg1)
	{
		return callMethod<jboolean>(
			"compareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	JObject AtomicReference::get()
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		);
	}
	JObject AtomicReference::getAcquire()
	{
		return callObjectMethod(
			"getAcquire",
			"()Ljava/lang/Object;"
		);
	}
	JObject AtomicReference::getAndAccumulate(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"getAndAccumulate",
			"(Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	JObject AtomicReference::getAndSet(JObject arg0)
	{
		return callObjectMethod(
			"getAndSet",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	JObject AtomicReference::getAndUpdate(JObject arg0)
	{
		return callObjectMethod(
			"getAndUpdate",
			"(Ljava/util/function/UnaryOperator;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	JObject AtomicReference::getOpaque()
	{
		return callObjectMethod(
			"getOpaque",
			"()Ljava/lang/Object;"
		);
	}
	JObject AtomicReference::getPlain()
	{
		return callObjectMethod(
			"getPlain",
			"()Ljava/lang/Object;"
		);
	}
	void AtomicReference::lazySet(JObject arg0)
	{
		callMethod<void>(
			"lazySet",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void AtomicReference::set(JObject arg0)
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void AtomicReference::setOpaque(JObject arg0)
	{
		callMethod<void>(
			"setOpaque",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void AtomicReference::setPlain(JObject arg0)
	{
		callMethod<void>(
			"setPlain",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void AtomicReference::setRelease(JObject arg0)
	{
		callMethod<void>(
			"setRelease",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	JString AtomicReference::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JObject AtomicReference::updateAndGet(JObject arg0)
	{
		return callObjectMethod(
			"updateAndGet",
			"(Ljava/util/function/UnaryOperator;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	jboolean AtomicReference::weakCompareAndSet(JObject arg0, JObject arg1)
	{
		return callMethod<jboolean>(
			"weakCompareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	jboolean AtomicReference::weakCompareAndSetAcquire(JObject arg0, JObject arg1)
	{
		return callMethod<jboolean>(
			"weakCompareAndSetAcquire",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	jboolean AtomicReference::weakCompareAndSetPlain(JObject arg0, JObject arg1)
	{
		return callMethod<jboolean>(
			"weakCompareAndSetPlain",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	jboolean AtomicReference::weakCompareAndSetRelease(JObject arg0, JObject arg1)
	{
		return callMethod<jboolean>(
			"weakCompareAndSetRelease",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	jboolean AtomicReference::weakCompareAndSetVolatile(JObject arg0, JObject arg1)
	{
		return callMethod<jboolean>(
			"weakCompareAndSetVolatile",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
} // namespace java::util::concurrent::atomic

