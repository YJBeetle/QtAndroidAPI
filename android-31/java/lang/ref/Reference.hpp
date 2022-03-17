#pragma once

#include "../../../JObject.hpp"
#include "./ReferenceQueue.def.hpp"
#include "./Reference.def.hpp"

namespace java::lang::ref
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void Reference::reachabilityFence(JObject arg0)
	{
		callStaticMethod<void>(
			"java.lang.ref.Reference",
			"reachabilityFence",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void Reference::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline jboolean Reference::enqueue() const
	{
		return callMethod<jboolean>(
			"enqueue",
			"()Z"
		);
	}
	inline JObject Reference::get() const
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean Reference::isEnqueued() const
	{
		return callMethod<jboolean>(
			"isEnqueued",
			"()Z"
		);
	}
	inline jboolean Reference::refersTo(JObject arg0) const
	{
		return callMethod<jboolean>(
			"refersTo",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
} // namespace java::lang::ref

// Base class headers

