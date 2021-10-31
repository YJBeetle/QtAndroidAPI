#include "./MethodHandle.hpp"
#include "./MethodType.hpp"
#include "./VolatileCallSite.hpp"

namespace java::lang::invoke
{
	// Fields
	
	VolatileCallSite::VolatileCallSite(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	VolatileCallSite::VolatileCallSite(java::lang::invoke::MethodHandle arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.VolatileCallSite",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.__jniObject().object()
		);
	}
	VolatileCallSite::VolatileCallSite(java::lang::invoke::MethodType arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.VolatileCallSite",
			"(Ljava/lang/invoke/MethodType;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject VolatileCallSite::dynamicInvoker()
	{
		return __thiz.callObjectMethod(
			"dynamicInvoker",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	QAndroidJniObject VolatileCallSite::getTarget()
	{
		return __thiz.callObjectMethod(
			"getTarget",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	void VolatileCallSite::setTarget(java::lang::invoke::MethodHandle arg0)
	{
		__thiz.callMethod<void>(
			"setTarget",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace java::lang::invoke

