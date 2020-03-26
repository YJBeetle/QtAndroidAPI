#pragma once

#ifndef JAVA_LANG_INVOKE_VOLATILECALLSITE
#define JAVA_LANG_INVOKE_VOLATILECALLSITE

#include "../../../__JniBaseClass.hpp"
#include "CallSite.hpp"

namespace __jni_impl::java::lang::invoke
{
	class MethodType;
}
namespace __jni_impl::java::lang::invoke
{
	class MethodHandle;
}

namespace __jni_impl::java::lang::invoke
{
	class VolatileCallSite : public __jni_impl::java::lang::invoke::CallSite
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::lang::invoke::MethodType arg0);
		void __constructor(__jni_impl::java::lang::invoke::MethodHandle arg0);
		
		// Methods
		QAndroidJniObject dynamicInvoker();
		QAndroidJniObject getTarget();
		void setTarget(__jni_impl::java::lang::invoke::MethodHandle arg0);
	};
} // namespace __jni_impl::java::lang::invoke

#include "MethodType.hpp"
#include "MethodHandle.hpp"

namespace __jni_impl::java::lang::invoke
{
	// Fields
	
	// Constructors
	void VolatileCallSite::__constructor(__jni_impl::java::lang::invoke::MethodType arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.VolatileCallSite",
			"(Ljava/lang/invoke/MethodType;)V",
			arg0.__jniObject().object());
	}
	void VolatileCallSite::__constructor(__jni_impl::java::lang::invoke::MethodHandle arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.VolatileCallSite",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.__jniObject().object());
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
	void VolatileCallSite::setTarget(__jni_impl::java::lang::invoke::MethodHandle arg0)
	{
		__thiz.callMethod<void>(
			"setTarget",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::lang::invoke

namespace java::lang::invoke
{
	class VolatileCallSite : public __jni_impl::java::lang::invoke::VolatileCallSite
	{
	public:
		VolatileCallSite(QAndroidJniObject obj) { __thiz = obj; }
		VolatileCallSite(__jni_impl::java::lang::invoke::MethodType arg0)
		{
			__constructor(
				arg0);
		}
		VolatileCallSite(__jni_impl::java::lang::invoke::MethodHandle arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang::invoke

#endif // JAVA_LANG_INVOKE_VOLATILECALLSITE

