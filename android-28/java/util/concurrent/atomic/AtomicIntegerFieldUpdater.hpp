#pragma once

#include "../../../../JClass.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./AtomicIntegerFieldUpdater.def.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::util::concurrent::atomic::AtomicIntegerFieldUpdater AtomicIntegerFieldUpdater::newUpdater(JClass arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.atomic.AtomicIntegerFieldUpdater",
			"newUpdater",
			"(Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicIntegerFieldUpdater;",
			arg0.object<jclass>(),
			arg1.object<jstring>()
		);
	}
	inline jint AtomicIntegerFieldUpdater::accumulateAndGet(JObject arg0, jint arg1, JObject arg2) const
	{
		return callMethod<jint>(
			"accumulateAndGet",
			"(Ljava/lang/Object;ILjava/util/function/IntBinaryOperator;)I",
			arg0.object<jobject>(),
			arg1,
			arg2.object()
		);
	}
	inline jint AtomicIntegerFieldUpdater::addAndGet(JObject arg0, jint arg1) const
	{
		return callMethod<jint>(
			"addAndGet",
			"(Ljava/lang/Object;I)I",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline jboolean AtomicIntegerFieldUpdater::compareAndSet(JObject arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"compareAndSet",
			"(Ljava/lang/Object;II)Z",
			arg0.object<jobject>(),
			arg1,
			arg2
		);
	}
	inline jint AtomicIntegerFieldUpdater::decrementAndGet(JObject arg0) const
	{
		return callMethod<jint>(
			"decrementAndGet",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint AtomicIntegerFieldUpdater::get(JObject arg0) const
	{
		return callMethod<jint>(
			"get",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint AtomicIntegerFieldUpdater::getAndAccumulate(JObject arg0, jint arg1, JObject arg2) const
	{
		return callMethod<jint>(
			"getAndAccumulate",
			"(Ljava/lang/Object;ILjava/util/function/IntBinaryOperator;)I",
			arg0.object<jobject>(),
			arg1,
			arg2.object()
		);
	}
	inline jint AtomicIntegerFieldUpdater::getAndAdd(JObject arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getAndAdd",
			"(Ljava/lang/Object;I)I",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline jint AtomicIntegerFieldUpdater::getAndDecrement(JObject arg0) const
	{
		return callMethod<jint>(
			"getAndDecrement",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint AtomicIntegerFieldUpdater::getAndIncrement(JObject arg0) const
	{
		return callMethod<jint>(
			"getAndIncrement",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint AtomicIntegerFieldUpdater::getAndSet(JObject arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getAndSet",
			"(Ljava/lang/Object;I)I",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline jint AtomicIntegerFieldUpdater::getAndUpdate(JObject arg0, JObject arg1) const
	{
		return callMethod<jint>(
			"getAndUpdate",
			"(Ljava/lang/Object;Ljava/util/function/IntUnaryOperator;)I",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline jint AtomicIntegerFieldUpdater::incrementAndGet(JObject arg0) const
	{
		return callMethod<jint>(
			"incrementAndGet",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline void AtomicIntegerFieldUpdater::lazySet(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"lazySet",
			"(Ljava/lang/Object;I)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline void AtomicIntegerFieldUpdater::set(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;I)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline jint AtomicIntegerFieldUpdater::updateAndGet(JObject arg0, JObject arg1) const
	{
		return callMethod<jint>(
			"updateAndGet",
			"(Ljava/lang/Object;Ljava/util/function/IntUnaryOperator;)I",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline jboolean AtomicIntegerFieldUpdater::weakCompareAndSet(JObject arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSet",
			"(Ljava/lang/Object;II)Z",
			arg0.object<jobject>(),
			arg1,
			arg2
		);
	}
} // namespace java::util::concurrent::atomic

// Base class headers

