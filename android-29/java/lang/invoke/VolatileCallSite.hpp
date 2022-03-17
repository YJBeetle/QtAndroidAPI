#pragma once

#include "./MethodHandle.def.hpp"
#include "./MethodType.def.hpp"
#include "./VolatileCallSite.def.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// Constructors
	inline VolatileCallSite::VolatileCallSite(java::lang::invoke::MethodHandle arg0)
		: java::lang::invoke::CallSite(
			"java.lang.invoke.VolatileCallSite",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.object()
		) {}
	inline VolatileCallSite::VolatileCallSite(java::lang::invoke::MethodType arg0)
		: java::lang::invoke::CallSite(
			"java.lang.invoke.VolatileCallSite",
			"(Ljava/lang/invoke/MethodType;)V",
			arg0.object()
		) {}
	
	// Methods
	inline java::lang::invoke::MethodHandle VolatileCallSite::dynamicInvoker() const
	{
		return callObjectMethod(
			"dynamicInvoker",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	inline java::lang::invoke::MethodHandle VolatileCallSite::getTarget() const
	{
		return callObjectMethod(
			"getTarget",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	inline void VolatileCallSite::setTarget(java::lang::invoke::MethodHandle arg0) const
	{
		callMethod<void>(
			"setTarget",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.object()
		);
	}
} // namespace java::lang::invoke

// Base class headers
#include "./CallSite.hpp"

