#include "./MethodHandle.hpp"
#include "./MethodType.hpp"
#include "./WrongMethodTypeException.hpp"
#include "./CallSite.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// QAndroidJniObject forward
	CallSite::CallSite(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject CallSite::dynamicInvoker()
	{
		return callObjectMethod(
			"dynamicInvoker",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	QAndroidJniObject CallSite::getTarget()
	{
		return callObjectMethod(
			"getTarget",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	void CallSite::setTarget(java::lang::invoke::MethodHandle arg0)
	{
		callMethod<void>(
			"setTarget",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.object()
		);
	}
	QAndroidJniObject CallSite::type()
	{
		return callObjectMethod(
			"type",
			"()Ljava/lang/invoke/MethodType;"
		);
	}
} // namespace java::lang::invoke

