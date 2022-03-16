#include "./MethodHandle.hpp"
#include "./MethodType.hpp"
#include "./ConstantCallSite.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// Constructors
	ConstantCallSite::ConstantCallSite(java::lang::invoke::MethodHandle arg0)
		: java::lang::invoke::CallSite(
			"java.lang.invoke.ConstantCallSite",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.object()
		) {}
	
	// Methods
	java::lang::invoke::MethodHandle ConstantCallSite::dynamicInvoker() const
	{
		return callObjectMethod(
			"dynamicInvoker",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	java::lang::invoke::MethodHandle ConstantCallSite::getTarget() const
	{
		return callObjectMethod(
			"getTarget",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	void ConstantCallSite::setTarget(java::lang::invoke::MethodHandle arg0) const
	{
		callMethod<void>(
			"setTarget",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.object()
		);
	}
} // namespace java::lang::invoke

