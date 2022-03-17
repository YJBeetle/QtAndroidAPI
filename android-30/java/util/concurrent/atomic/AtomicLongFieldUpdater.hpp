#pragma once

#include "../../../../JClass.hpp"
#include "../../../lang/ClassLoader.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./AtomicLongFieldUpdater.def.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::util::concurrent::atomic::AtomicLongFieldUpdater AtomicLongFieldUpdater::newUpdater(JClass arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.atomic.AtomicLongFieldUpdater",
			"newUpdater",
			"(Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicLongFieldUpdater;",
			arg0.object<jclass>(),
			arg1.object<jstring>()
		);
	}
	inline jlong AtomicLongFieldUpdater::accumulateAndGet(JObject arg0, jlong arg1, JObject arg2) const
	{
		return callMethod<jlong>(
			"accumulateAndGet",
			"(Ljava/lang/Object;JLjava/util/function/LongBinaryOperator;)J",
			arg0.object<jobject>(),
			arg1,
			arg2.object()
		);
	}
	inline jlong AtomicLongFieldUpdater::addAndGet(JObject arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"addAndGet",
			"(Ljava/lang/Object;J)J",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline jboolean AtomicLongFieldUpdater::compareAndSet(JObject arg0, jlong arg1, jlong arg2) const
	{
		return callMethod<jboolean>(
			"compareAndSet",
			"(Ljava/lang/Object;JJ)Z",
			arg0.object<jobject>(),
			arg1,
			arg2
		);
	}
	inline jlong AtomicLongFieldUpdater::decrementAndGet(JObject arg0) const
	{
		return callMethod<jlong>(
			"decrementAndGet",
			"(Ljava/lang/Object;)J",
			arg0.object<jobject>()
		);
	}
	inline jlong AtomicLongFieldUpdater::get(JObject arg0) const
	{
		return callMethod<jlong>(
			"get",
			"(Ljava/lang/Object;)J",
			arg0.object<jobject>()
		);
	}
	inline jlong AtomicLongFieldUpdater::getAndAccumulate(JObject arg0, jlong arg1, JObject arg2) const
	{
		return callMethod<jlong>(
			"getAndAccumulate",
			"(Ljava/lang/Object;JLjava/util/function/LongBinaryOperator;)J",
			arg0.object<jobject>(),
			arg1,
			arg2.object()
		);
	}
	inline jlong AtomicLongFieldUpdater::getAndAdd(JObject arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"getAndAdd",
			"(Ljava/lang/Object;J)J",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline jlong AtomicLongFieldUpdater::getAndDecrement(JObject arg0) const
	{
		return callMethod<jlong>(
			"getAndDecrement",
			"(Ljava/lang/Object;)J",
			arg0.object<jobject>()
		);
	}
	inline jlong AtomicLongFieldUpdater::getAndIncrement(JObject arg0) const
	{
		return callMethod<jlong>(
			"getAndIncrement",
			"(Ljava/lang/Object;)J",
			arg0.object<jobject>()
		);
	}
	inline jlong AtomicLongFieldUpdater::getAndSet(JObject arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"getAndSet",
			"(Ljava/lang/Object;J)J",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline jlong AtomicLongFieldUpdater::getAndUpdate(JObject arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"getAndUpdate",
			"(Ljava/lang/Object;Ljava/util/function/LongUnaryOperator;)J",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline jlong AtomicLongFieldUpdater::incrementAndGet(JObject arg0) const
	{
		return callMethod<jlong>(
			"incrementAndGet",
			"(Ljava/lang/Object;)J",
			arg0.object<jobject>()
		);
	}
	inline void AtomicLongFieldUpdater::lazySet(JObject arg0, jlong arg1) const
	{
		callMethod<void>(
			"lazySet",
			"(Ljava/lang/Object;J)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline void AtomicLongFieldUpdater::set(JObject arg0, jlong arg1) const
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;J)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline jlong AtomicLongFieldUpdater::updateAndGet(JObject arg0, JObject arg1) const
	{
		return callMethod<jlong>(
			"updateAndGet",
			"(Ljava/lang/Object;Ljava/util/function/LongUnaryOperator;)J",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline jboolean AtomicLongFieldUpdater::weakCompareAndSet(JObject arg0, jlong arg1, jlong arg2) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSet",
			"(Ljava/lang/Object;JJ)Z",
			arg0.object<jobject>(),
			arg1,
			arg2
		);
	}
} // namespace java::util::concurrent::atomic

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent::atomic;
#endif
