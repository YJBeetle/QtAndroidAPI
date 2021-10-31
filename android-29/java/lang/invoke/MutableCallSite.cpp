#include "./MethodHandle.hpp"
#include "./MethodType.hpp"
#include "../../util/concurrent/atomic/AtomicInteger.hpp"
#include "./MutableCallSite.hpp"

namespace java::lang::invoke
{
	// Fields
	
	MutableCallSite::MutableCallSite(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MutableCallSite::MutableCallSite(java::lang::invoke::MethodHandle arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.MutableCallSite",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.__jniObject().object()
		);
	}
	MutableCallSite::MutableCallSite(java::lang::invoke::MethodType arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.MutableCallSite",
			"(Ljava/lang/invoke/MethodType;)V",
			arg0.__jniObject().object()
		);
	}
	
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
		return __thiz.callObjectMethod(
			"dynamicInvoker",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	QAndroidJniObject MutableCallSite::getTarget()
	{
		return __thiz.callObjectMethod(
			"getTarget",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	void MutableCallSite::setTarget(java::lang::invoke::MethodHandle arg0)
	{
		__thiz.callMethod<void>(
			"setTarget",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace java::lang::invoke

