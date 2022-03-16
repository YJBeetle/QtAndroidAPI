#include "../../../JArray.hpp"
#include "./MethodHandle.hpp"
#include "./MethodType.hpp"
#include "../../util/concurrent/atomic/AtomicInteger.hpp"
#include "./MutableCallSite.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// Constructors
	MutableCallSite::MutableCallSite(java::lang::invoke::MethodHandle arg0)
		: java::lang::invoke::CallSite(
			"java.lang.invoke.MutableCallSite",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.object()
		) {}
	MutableCallSite::MutableCallSite(java::lang::invoke::MethodType arg0)
		: java::lang::invoke::CallSite(
			"java.lang.invoke.MutableCallSite",
			"(Ljava/lang/invoke/MethodType;)V",
			arg0.object()
		) {}
	
	// Methods
	void MutableCallSite::syncAll(JArray arg0)
	{
		callStaticMethod<void>(
			"java.lang.invoke.MutableCallSite",
			"syncAll",
			"([Ljava/lang/invoke/MutableCallSite;)V",
			arg0.object<jarray>()
		);
	}
	java::lang::invoke::MethodHandle MutableCallSite::dynamicInvoker() const
	{
		return callObjectMethod(
			"dynamicInvoker",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	java::lang::invoke::MethodHandle MutableCallSite::getTarget() const
	{
		return callObjectMethod(
			"getTarget",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	void MutableCallSite::setTarget(java::lang::invoke::MethodHandle arg0) const
	{
		callMethod<void>(
			"setTarget",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.object()
		);
	}
} // namespace java::lang::invoke

