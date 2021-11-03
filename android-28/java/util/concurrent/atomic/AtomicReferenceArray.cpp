#include "../../../../JObjectArray.hpp"
#include "../../../io/ObjectInputStream.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "../../../lang/reflect/Field.hpp"
#include "./AtomicReferenceArray.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// QJniObject forward
	AtomicReferenceArray::AtomicReferenceArray(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AtomicReferenceArray::AtomicReferenceArray(JObjectArray arg0)
		: JObject(
			"java.util.concurrent.atomic.AtomicReferenceArray",
			"([Ljava/lang/Object;)V",
			arg0.object<jobjectArray>()
		) {}
	AtomicReferenceArray::AtomicReferenceArray(jint arg0)
		: JObject(
			"java.util.concurrent.atomic.AtomicReferenceArray",
			"(I)V",
			arg0
		) {}
	
	// Methods
	JObject AtomicReferenceArray::accumulateAndGet(jint arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"accumulateAndGet",
			"(ILjava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>(),
			arg2.object()
		);
	}
	JObject AtomicReferenceArray::compareAndExchange(jint arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"compareAndExchange",
			"(ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>(),
			arg2.object<jobject>()
		);
	}
	JObject AtomicReferenceArray::compareAndExchangeAcquire(jint arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"compareAndExchangeAcquire",
			"(ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>(),
			arg2.object<jobject>()
		);
	}
	JObject AtomicReferenceArray::compareAndExchangeRelease(jint arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"compareAndExchangeRelease",
			"(ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>(),
			arg2.object<jobject>()
		);
	}
	jboolean AtomicReferenceArray::compareAndSet(jint arg0, JObject arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"compareAndSet",
			"(ILjava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1.object<jobject>(),
			arg2.object<jobject>()
		);
	}
	JObject AtomicReferenceArray::get(jint arg0) const
	{
		return callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	JObject AtomicReferenceArray::getAcquire(jint arg0) const
	{
		return callObjectMethod(
			"getAcquire",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	JObject AtomicReferenceArray::getAndAccumulate(jint arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"getAndAccumulate",
			"(ILjava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>(),
			arg2.object()
		);
	}
	JObject AtomicReferenceArray::getAndSet(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"getAndSet",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>()
		);
	}
	JObject AtomicReferenceArray::getAndUpdate(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"getAndUpdate",
			"(ILjava/util/function/UnaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	JObject AtomicReferenceArray::getOpaque(jint arg0) const
	{
		return callObjectMethod(
			"getOpaque",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	JObject AtomicReferenceArray::getPlain(jint arg0) const
	{
		return callObjectMethod(
			"getPlain",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	void AtomicReferenceArray::lazySet(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"lazySet",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	jint AtomicReferenceArray::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	void AtomicReferenceArray::set(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"set",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	void AtomicReferenceArray::setOpaque(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"setOpaque",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	void AtomicReferenceArray::setPlain(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"setPlain",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	void AtomicReferenceArray::setRelease(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"setRelease",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	JString AtomicReferenceArray::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JObject AtomicReferenceArray::updateAndGet(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"updateAndGet",
			"(ILjava/util/function/UnaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	jboolean AtomicReferenceArray::weakCompareAndSet(jint arg0, JObject arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSet",
			"(ILjava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1.object<jobject>(),
			arg2.object<jobject>()
		);
	}
	jboolean AtomicReferenceArray::weakCompareAndSetAcquire(jint arg0, JObject arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetAcquire",
			"(ILjava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1.object<jobject>(),
			arg2.object<jobject>()
		);
	}
	jboolean AtomicReferenceArray::weakCompareAndSetPlain(jint arg0, JObject arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetPlain",
			"(ILjava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1.object<jobject>(),
			arg2.object<jobject>()
		);
	}
	jboolean AtomicReferenceArray::weakCompareAndSetRelease(jint arg0, JObject arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetRelease",
			"(ILjava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1.object<jobject>(),
			arg2.object<jobject>()
		);
	}
	jboolean AtomicReferenceArray::weakCompareAndSetVolatile(jint arg0, JObject arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetVolatile",
			"(ILjava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1.object<jobject>(),
			arg2.object<jobject>()
		);
	}
} // namespace java::util::concurrent::atomic

