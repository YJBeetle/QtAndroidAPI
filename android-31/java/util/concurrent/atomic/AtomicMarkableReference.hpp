#pragma once

#include "../../../../JBooleanArray.hpp"
#include "../../../../JObject.hpp"
#include "./AtomicMarkableReference.def.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	inline AtomicMarkableReference::AtomicMarkableReference(JObject arg0, jboolean arg1)
		: JObject(
			"java.util.concurrent.atomic.AtomicMarkableReference",
			"(Ljava/lang/Object;Z)V",
			arg0.object<jobject>(),
			arg1
		) {}
	
	// Methods
	inline jboolean AtomicMarkableReference::attemptMark(JObject arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"attemptMark",
			"(Ljava/lang/Object;Z)Z",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline jboolean AtomicMarkableReference::compareAndSet(JObject arg0, JObject arg1, jboolean arg2, jboolean arg3) const
	{
		return callMethod<jboolean>(
			"compareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;ZZ)Z",
			arg0.object<jobject>(),
			arg1.object<jobject>(),
			arg2,
			arg3
		);
	}
	inline JObject AtomicMarkableReference::get(JBooleanArray arg0) const
	{
		return callObjectMethod(
			"get",
			"([Z)Ljava/lang/Object;",
			arg0.object<jbooleanArray>()
		);
	}
	inline JObject AtomicMarkableReference::getReference() const
	{
		return callObjectMethod(
			"getReference",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean AtomicMarkableReference::isMarked() const
	{
		return callMethod<jboolean>(
			"isMarked",
			"()Z"
		);
	}
	inline void AtomicMarkableReference::set(JObject arg0, jboolean arg1) const
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;Z)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline jboolean AtomicMarkableReference::weakCompareAndSet(JObject arg0, JObject arg1, jboolean arg2, jboolean arg3) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;ZZ)Z",
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
