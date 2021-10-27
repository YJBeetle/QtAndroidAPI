#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang::invoke
{
	class MethodHandle;
}
namespace __jni_impl::java::lang::invoke
{
	class MethodType;
}
namespace __jni_impl::java::lang::invoke
{
	class WrongMethodTypeException;
}

namespace __jni_impl::java::lang::invoke
{
	class CallSite : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject dynamicInvoker();
		QAndroidJniObject getTarget();
		void setTarget(__jni_impl::java::lang::invoke::MethodHandle arg0);
		QAndroidJniObject type();
	};
} // namespace __jni_impl::java::lang::invoke

#include "./MethodHandle.hpp"
#include "./MethodType.hpp"
#include "./WrongMethodTypeException.hpp"

namespace __jni_impl::java::lang::invoke
{
	// Fields
	
	// Constructors
	void CallSite::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.CallSite",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CallSite::dynamicInvoker()
	{
		return __thiz.callObjectMethod(
			"dynamicInvoker",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	QAndroidJniObject CallSite::getTarget()
	{
		return __thiz.callObjectMethod(
			"getTarget",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	void CallSite::setTarget(__jni_impl::java::lang::invoke::MethodHandle arg0)
	{
		__thiz.callMethod<void>(
			"setTarget",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CallSite::type()
	{
		return __thiz.callObjectMethod(
			"type",
			"()Ljava/lang/invoke/MethodType;"
		);
	}
} // namespace __jni_impl::java::lang::invoke

namespace java::lang::invoke
{
	class CallSite : public __jni_impl::java::lang::invoke::CallSite
	{
	public:
		CallSite(QAndroidJniObject obj) { __thiz = obj; }
		CallSite()
		{
			__constructor();
		}
	};
} // namespace java::lang::invoke

