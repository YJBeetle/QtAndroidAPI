#pragma once

#include "../../JObject.hpp"
#include "./Thread.def.hpp"
#include "../util/concurrent/atomic/AtomicInteger.def.hpp"
#include "./ThreadLocal.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline ThreadLocal::ThreadLocal()
		: JObject(
			"java.lang.ThreadLocal",
			"()V"
		) {}
	
	// Methods
	inline java::lang::ThreadLocal ThreadLocal::withInitial(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.lang.ThreadLocal",
			"withInitial",
			"(Ljava/util/function/Supplier;)Ljava/lang/ThreadLocal;",
			arg0.object()
		);
	}
	inline JObject ThreadLocal::get() const
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		);
	}
	inline void ThreadLocal::remove() const
	{
		callMethod<void>(
			"remove",
			"()V"
		);
	}
	inline void ThreadLocal::set(JObject arg0) const
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
} // namespace java::lang

// Base class headers

