#include "./MethodHandle.hpp"
#include "./MethodType.hpp"
#include "../../util/concurrent/atomic/AtomicInteger.hpp"
#include "./MutableCallSite.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// QAndroidJniObject forward
	MutableCallSite::MutableCallSite(QAndroidJniObject obj) : java::lang::invoke::CallSite(obj) {}
	
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
	void MutableCallSite::syncAll(jarray arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.invoke.MutableCallSite",
			"syncAll",
			"([Ljava/lang/invoke/MutableCallSite;)V",
			arg0
		);
	}
	QAndroidJniObject MutableCallSite::dynamicInvoker()
	{
		return callObjectMethod(
			"dynamicInvoker",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	QAndroidJniObject MutableCallSite::getTarget()
	{
		return callObjectMethod(
			"getTarget",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	void MutableCallSite::setTarget(java::lang::invoke::MethodHandle arg0)
	{
		callMethod<void>(
			"setTarget",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.object()
		);
	}
} // namespace java::lang::invoke

