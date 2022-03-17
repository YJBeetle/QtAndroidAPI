#pragma once

#include "../../../JObject.hpp"
#include "./ReferenceQueue.def.hpp"
#include "./WeakReference.def.hpp"

namespace java::lang::ref
{
	// Fields
	
	// Constructors
	inline WeakReference::WeakReference(JObject arg0)
		: java::lang::ref::Reference(
			"java.lang.ref.WeakReference",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		) {}
	inline WeakReference::WeakReference(JObject arg0, java::lang::ref::ReferenceQueue arg1)
		: java::lang::ref::Reference(
			"java.lang.ref.WeakReference",
			"(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V",
			arg0.object<jobject>(),
			arg1.object()
		) {}
	
	// Methods
} // namespace java::lang::ref

// Base class headers
#include "./Reference.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang::ref;
#endif
