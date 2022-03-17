#pragma once

#include "../../../JObject.hpp"
#include "./ReferenceQueue.def.hpp"
#include "./SoftReference.def.hpp"

namespace java::lang::ref
{
	// Fields
	
	// Constructors
	inline SoftReference::SoftReference(JObject arg0)
		: java::lang::ref::Reference(
			"java.lang.ref.SoftReference",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		) {}
	inline SoftReference::SoftReference(JObject arg0, java::lang::ref::ReferenceQueue arg1)
		: java::lang::ref::Reference(
			"java.lang.ref.SoftReference",
			"(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V",
			arg0.object<jobject>(),
			arg1.object()
		) {}
	
	// Methods
	inline JObject SoftReference::get() const
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		);
	}
} // namespace java::lang::ref

// Base class headers
#include "./Reference.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang::ref;
#endif
