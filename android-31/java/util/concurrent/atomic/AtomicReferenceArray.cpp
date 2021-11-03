#include "../../../io/ObjectInputStream.hpp"
#include "../../../lang/reflect/Field.hpp"
#include "./AtomicReferenceArray.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// QJniObject forward
	AtomicReferenceArray::AtomicReferenceArray(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AtomicReferenceArray::AtomicReferenceArray(jobjectArray arg0)
		: JObject(
			"java.util.concurrent.atomic.AtomicReferenceArray",
			"([Ljava/lang/Object;)V",
			arg0
		) {}
	AtomicReferenceArray::AtomicReferenceArray(jint arg0)
		: JObject(
			"java.util.concurrent.atomic.AtomicReferenceArray",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jobject AtomicReferenceArray::accumulateAndGet(jint arg0, jobject arg1, JObject arg2)
	{
		return callObjectMethod(
			"accumulateAndGet",
			"(ILjava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.object()
		).object<jobject>();
	}
	jobject AtomicReferenceArray::compareAndExchange(jint arg0, jobject arg1, jobject arg2)
	{
		return callObjectMethod(
			"compareAndExchange",
			"(ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2
		).object<jobject>();
	}
	jobject AtomicReferenceArray::compareAndExchangeAcquire(jint arg0, jobject arg1, jobject arg2)
	{
		return callObjectMethod(
			"compareAndExchangeAcquire",
			"(ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2
		).object<jobject>();
	}
	jobject AtomicReferenceArray::compareAndExchangeRelease(jint arg0, jobject arg1, jobject arg2)
	{
		return callObjectMethod(
			"compareAndExchangeRelease",
			"(ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2
		).object<jobject>();
	}
	jboolean AtomicReferenceArray::compareAndSet(jint arg0, jobject arg1, jobject arg2)
	{
		return callMethod<jboolean>(
			"compareAndSet",
			"(ILjava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jobject AtomicReferenceArray::get(jint arg0)
	{
		return callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject AtomicReferenceArray::getAcquire(jint arg0)
	{
		return callObjectMethod(
			"getAcquire",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject AtomicReferenceArray::getAndAccumulate(jint arg0, jobject arg1, JObject arg2)
	{
		return callObjectMethod(
			"getAndAccumulate",
			"(ILjava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.object()
		).object<jobject>();
	}
	jobject AtomicReferenceArray::getAndSet(jint arg0, jobject arg1)
	{
		return callObjectMethod(
			"getAndSet",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jobject AtomicReferenceArray::getAndUpdate(jint arg0, JObject arg1)
	{
		return callObjectMethod(
			"getAndUpdate",
			"(ILjava/util/function/UnaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jobject AtomicReferenceArray::getOpaque(jint arg0)
	{
		return callObjectMethod(
			"getOpaque",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject AtomicReferenceArray::getPlain(jint arg0)
	{
		return callObjectMethod(
			"getPlain",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	void AtomicReferenceArray::lazySet(jint arg0, jobject arg1)
	{
		callMethod<void>(
			"lazySet",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	jint AtomicReferenceArray::length()
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	void AtomicReferenceArray::set(jint arg0, jobject arg1)
	{
		callMethod<void>(
			"set",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void AtomicReferenceArray::setOpaque(jint arg0, jobject arg1)
	{
		callMethod<void>(
			"setOpaque",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void AtomicReferenceArray::setPlain(jint arg0, jobject arg1)
	{
		callMethod<void>(
			"setPlain",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void AtomicReferenceArray::setRelease(jint arg0, jobject arg1)
	{
		callMethod<void>(
			"setRelease",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	jstring AtomicReferenceArray::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject AtomicReferenceArray::updateAndGet(jint arg0, JObject arg1)
	{
		return callObjectMethod(
			"updateAndGet",
			"(ILjava/util/function/UnaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	jboolean AtomicReferenceArray::weakCompareAndSet(jint arg0, jobject arg1, jobject arg2)
	{
		return callMethod<jboolean>(
			"weakCompareAndSet",
			"(ILjava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AtomicReferenceArray::weakCompareAndSetAcquire(jint arg0, jobject arg1, jobject arg2)
	{
		return callMethod<jboolean>(
			"weakCompareAndSetAcquire",
			"(ILjava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AtomicReferenceArray::weakCompareAndSetPlain(jint arg0, jobject arg1, jobject arg2)
	{
		return callMethod<jboolean>(
			"weakCompareAndSetPlain",
			"(ILjava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AtomicReferenceArray::weakCompareAndSetRelease(jint arg0, jobject arg1, jobject arg2)
	{
		return callMethod<jboolean>(
			"weakCompareAndSetRelease",
			"(ILjava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AtomicReferenceArray::weakCompareAndSetVolatile(jint arg0, jobject arg1, jobject arg2)
	{
		return callMethod<jboolean>(
			"weakCompareAndSetVolatile",
			"(ILjava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::util::concurrent::atomic

