#pragma once

#include "../../JObject.hpp"
#include "./AbstractQueue.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean AbstractQueue::add(JObject arg0) const
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean AbstractQueue::addAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline void AbstractQueue::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline JObject AbstractQueue::element() const
	{
		return callObjectMethod(
			"element",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject AbstractQueue::remove() const
	{
		return callObjectMethod(
			"remove",
			"()Ljava/lang/Object;"
		);
	}
} // namespace java::util

// Base class headers
#include "./AbstractCollection.hpp"

