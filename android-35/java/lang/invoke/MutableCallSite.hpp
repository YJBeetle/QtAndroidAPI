#pragma once

#include "../../../JArray.hpp"
#include "./MethodHandle.def.hpp"
#include "./MethodType.def.hpp"
#include "../../util/concurrent/atomic/AtomicInteger.def.hpp"
#include "./MutableCallSite.def.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// Constructors
	inline MutableCallSite::MutableCallSite(java::lang::invoke::MethodHandle arg0)
		: java::lang::invoke::CallSite(
			"java.lang.invoke.MutableCallSite",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.object()
		) {}
	inline MutableCallSite::MutableCallSite(java::lang::invoke::MethodType arg0)
		: java::lang::invoke::CallSite(
			"java.lang.invoke.MutableCallSite",
			"(Ljava/lang/invoke/MethodType;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void MutableCallSite::syncAll(JArray arg0)
	{
		callStaticMethod<void>(
			"java.lang.invoke.MutableCallSite",
			"syncAll",
			"([Ljava/lang/invoke/MutableCallSite;)V",
			arg0.object<jarray>()
		);
	}
	inline java::lang::invoke::MethodHandle MutableCallSite::dynamicInvoker() const
	{
		return callObjectMethod(
			"dynamicInvoker",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	inline java::lang::invoke::MethodHandle MutableCallSite::getTarget() const
	{
		return callObjectMethod(
			"getTarget",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	inline void MutableCallSite::setTarget(java::lang::invoke::MethodHandle arg0) const
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
