#pragma once

#include "../../../../JIntArray.hpp"
#include "../../../../JObject.hpp"
#include "../../../lang/invoke/VarHandle.def.hpp"
#include "./AtomicStampedReference.def.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	inline AtomicStampedReference::AtomicStampedReference(JObject arg0, jint arg1)
		: JObject(
			"java.util.concurrent.atomic.AtomicStampedReference",
			"(Ljava/lang/Object;I)V",
			arg0.object<jobject>(),
			arg1
		) {}
	
	// Methods
	inline jboolean AtomicStampedReference::attemptStamp(JObject arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"attemptStamp",
			"(Ljava/lang/Object;I)Z",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline jboolean AtomicStampedReference::compareAndSet(JObject arg0, JObject arg1, jint arg2, jint arg3) const
	{
		return callMethod<jboolean>(
			"compareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;II)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2,
			arg3
		);
	}
	inline JObject AtomicStampedReference::get(JIntArray arg0) const
	{
		return callObjectMethod(
			"get",
			"([I)Ljava/lang/Object;",
			arg0.object<jintArray>()
		);
	}
	inline JObject AtomicStampedReference::getReference() const
	{
		return callObjectMethod(
			"getReference",
			"()Ljava/lang/Object;"
		);
	}
	inline jint AtomicStampedReference::getStamp() const
	{
		return callMethod<jint>(
			"getStamp",
			"()I"
		);
	}
	inline void AtomicStampedReference::set(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;I)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline jboolean AtomicStampedReference::weakCompareAndSet(JObject arg0, JObject arg1, jint arg2, jint arg3) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;II)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2,
			arg3
		);
	}
} // namespace java::util::concurrent::atomic

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent::atomic;
#endif
