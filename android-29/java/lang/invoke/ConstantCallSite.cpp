#include "./MethodHandle.hpp"
#include "./MethodType.hpp"
#include "./ConstantCallSite.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// QAndroidJniObject forward
	ConstantCallSite::ConstantCallSite(QAndroidJniObject obj) : java::lang::invoke::CallSite(obj) {}
	
	// Constructors
	ConstantCallSite::ConstantCallSite(java::lang::invoke::MethodHandle arg0)
		: java::lang::invoke::CallSite(
			"java.lang.invoke.ConstantCallSite",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject ConstantCallSite::dynamicInvoker()
	{
		return callObjectMethod(
			"dynamicInvoker",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	QAndroidJniObject ConstantCallSite::getTarget()
	{
		return callObjectMethod(
			"getTarget",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	void ConstantCallSite::setTarget(java::lang::invoke::MethodHandle arg0)
	{
		callMethod<void>(
			"setTarget",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.object()
		);
	}
} // namespace java::lang::invoke

