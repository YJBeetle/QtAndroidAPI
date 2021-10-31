#include "./MethodHandle.hpp"
#include "./MethodType.hpp"
#include "./ConstantCallSite.hpp"

namespace java::lang::invoke
{
	// Fields
	
	ConstantCallSite::ConstantCallSite(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConstantCallSite::ConstantCallSite(java::lang::invoke::MethodHandle arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.ConstantCallSite",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ConstantCallSite::dynamicInvoker()
	{
		return __thiz.callObjectMethod(
			"dynamicInvoker",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	QAndroidJniObject ConstantCallSite::getTarget()
	{
		return __thiz.callObjectMethod(
			"getTarget",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	void ConstantCallSite::setTarget(java::lang::invoke::MethodHandle arg0)
	{
		__thiz.callMethod<void>(
			"setTarget",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace java::lang::invoke

