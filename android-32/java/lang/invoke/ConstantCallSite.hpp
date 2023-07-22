#pragma once

#include "./MethodHandle.def.hpp"
#include "./MethodType.def.hpp"
#include "./ConstantCallSite.def.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// Constructors
	inline ConstantCallSite::ConstantCallSite(java::lang::invoke::MethodHandle arg0)
		: java::lang::invoke::CallSite(
			"java.lang.invoke.ConstantCallSite",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.object()
		) {}
	
	// Methods
	inline java::lang::invoke::MethodHandle ConstantCallSite::dynamicInvoker() const
	{
		return callObjectMethod(
			"dynamicInvoker",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	inline java::lang::invoke::MethodHandle ConstantCallSite::getTarget() const
	{
		return callObjectMethod(
			"getTarget",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	inline void ConstantCallSite::setTarget(java::lang::invoke::MethodHandle arg0) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang::invoke;
#endif
