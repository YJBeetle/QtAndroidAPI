#pragma once

#include "./Reference.def.hpp"
#include "./ReferenceQueue.def.hpp"

namespace java::lang::ref
{
	// Fields
	
	// Constructors
	inline ReferenceQueue::ReferenceQueue()
		: JObject(
			"java.lang.ref.ReferenceQueue",
			"()V"
		) {}
	
	// Methods
	inline java::lang::ref::Reference ReferenceQueue::poll() const
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/ref/Reference;"
		);
	}
	inline java::lang::ref::Reference ReferenceQueue::remove() const
	{
		return callObjectMethod(
			"remove",
			"()Ljava/lang/ref/Reference;"
		);
	}
	inline java::lang::ref::Reference ReferenceQueue::remove(jlong arg0) const
	{
		return callObjectMethod(
			"remove",
			"(J)Ljava/lang/ref/Reference;",
			arg0
		);
	}
} // namespace java::lang::ref

// Base class headers

