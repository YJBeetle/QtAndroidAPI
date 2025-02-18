#pragma once

#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "../../../lang/invoke/VarHandle.def.hpp"
#include "./AtomicReference.def.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	inline AtomicReference::AtomicReference()
		: JObject(
			"java.util.concurrent.atomic.AtomicReference",
			"()V"
		) {}
	inline AtomicReference::AtomicReference(JObject arg0)
		: JObject(
			"java.util.concurrent.atomic.AtomicReference",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		) {}
	
	// Methods
	inline JObject AtomicReference::accumulateAndGet(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"accumulateAndGet",
			"(Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline JObject AtomicReference::compareAndExchange(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"compareAndExchange",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline JObject AtomicReference::compareAndExchangeAcquire(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"compareAndExchangeAcquire",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline JObject AtomicReference::compareAndExchangeRelease(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"compareAndExchangeRelease",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline jboolean AtomicReference::compareAndSet(JObject arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"compareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline JObject AtomicReference::get() const
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject AtomicReference::getAcquire() const
	{
		return callObjectMethod(
			"getAcquire",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject AtomicReference::getAndAccumulate(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"getAndAccumulate",
			"(Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline JObject AtomicReference::getAndSet(JObject arg0) const
	{
		return callObjectMethod(
			"getAndSet",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline JObject AtomicReference::getAndUpdate(JObject arg0) const
	{
		return callObjectMethod(
			"getAndUpdate",
			"(Ljava/util/function/UnaryOperator;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline JObject AtomicReference::getOpaque() const
	{
		return callObjectMethod(
			"getOpaque",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject AtomicReference::getPlain() const
	{
		return callObjectMethod(
			"getPlain",
			"()Ljava/lang/Object;"
		);
	}
	inline void AtomicReference::lazySet(JObject arg0) const
	{
		callMethod<void>(
			"lazySet",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void AtomicReference::set(JObject arg0) const
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void AtomicReference::setOpaque(JObject arg0) const
	{
		callMethod<void>(
			"setOpaque",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void AtomicReference::setPlain(JObject arg0) const
	{
		callMethod<void>(
			"setPlain",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void AtomicReference::setRelease(JObject arg0) const
	{
		callMethod<void>(
			"setRelease",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline JString AtomicReference::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline JObject AtomicReference::updateAndGet(JObject arg0) const
	{
		return callObjectMethod(
			"updateAndGet",
			"(Ljava/util/function/UnaryOperator;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline jboolean AtomicReference::weakCompareAndSet(JObject arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline jboolean AtomicReference::weakCompareAndSetAcquire(JObject arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetAcquire",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline jboolean AtomicReference::weakCompareAndSetPlain(JObject arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetPlain",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline jboolean AtomicReference::weakCompareAndSetRelease(JObject arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetRelease",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline jboolean AtomicReference::weakCompareAndSetVolatile(JObject arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetVolatile",
			"(Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
} // namespace java::util::concurrent::atomic

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent::atomic;
#endif
