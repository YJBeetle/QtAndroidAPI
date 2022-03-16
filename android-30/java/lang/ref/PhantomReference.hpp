#pragma once

#include "../../../JObject.hpp"
#include "./ReferenceQueue.def.hpp"
#include "./PhantomReference.def.hpp"

namespace java::lang::ref
{
	// Fields
	
	// Constructors
	inline PhantomReference::PhantomReference(JObject arg0, java::lang::ref::ReferenceQueue arg1)
		: java::lang::ref::Reference(
			"java.lang.ref.PhantomReference",
			"(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V",
			arg0.object<jobject>(),
			arg1.object()
		) {}
	
	// Methods
	inline JObject PhantomReference::get() const
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		);
	}
} // namespace java::lang::ref

// Base class headers
#include "./Reference.hpp"

