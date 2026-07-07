#pragma once

#include "../../../../JClass.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./AtomicReferenceFieldUpdater.def.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::util::concurrent::atomic::AtomicReferenceFieldUpdater AtomicReferenceFieldUpdater::newUpdater(JClass arg0, JClass arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.atomic.AtomicReferenceFieldUpdater",
			"newUpdater",
			"(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicReferenceFieldUpdater;",
			arg0.object<jclass>(),
			arg1.object<jclass>(),
			arg2.object<jstring>()
		);
	}
	inline JObject AtomicReferenceFieldUpdater::accumulateAndGet(JObject arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"accumulateAndGet",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object()
		);
	}
	inline jboolean AtomicReferenceFieldUpdater::compareAndSet(JObject arg0, JObject arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"compareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object<jobject>()
		);
	}
	inline JObject AtomicReferenceFieldUpdater::get(JObject arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline JObject AtomicReferenceFieldUpdater::getAndAccumulate(JObject arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"getAndAccumulate",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object()
		);
	}
	inline JObject AtomicReferenceFieldUpdater::getAndSet(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"getAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline JObject AtomicReferenceFieldUpdater::getAndUpdate(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"getAndUpdate",
			"(Ljava/lang/Object;Ljava/util/function/UnaryOperator;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline void AtomicReferenceFieldUpdater::lazySet(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"lazySet",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline void AtomicReferenceFieldUpdater::set(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline JObject AtomicReferenceFieldUpdater::updateAndGet(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"updateAndGet",
			"(Ljava/lang/Object;Ljava/util/function/UnaryOperator;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline jboolean AtomicReferenceFieldUpdater::weakCompareAndSet(JObject arg0, JObject arg1, JObject arg2) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2.object<jobject>()
		);
	}
} // namespace java::util::concurrent::atomic

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent::atomic;
#endif
