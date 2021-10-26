#pragma once

#ifndef JAVA_LANG_INVOKE_CONSTANTCALLSITE
#define JAVA_LANG_INVOKE_CONSTANTCALLSITE

#include "../../../__JniBaseClass.hpp"
#include "CallSite.hpp"

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
	class ConstantCallSite : public __jni_impl::java::lang::invoke::CallSite
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::lang::invoke::MethodHandle arg0);
		
		// Methods
		QAndroidJniObject dynamicInvoker();
		QAndroidJniObject getTarget();
		void setTarget(__jni_impl::java::lang::invoke::MethodHandle arg0);
	};
} // namespace __jni_impl::java::lang::invoke

#include "MethodHandle.hpp"
#include "MethodType.hpp"

namespace __jni_impl::java::lang::invoke
{
	// Fields
	
	// Constructors
	void ConstantCallSite::__constructor(__jni_impl::java::lang::invoke::MethodHandle arg0)
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
	void ConstantCallSite::setTarget(__jni_impl::java::lang::invoke::MethodHandle arg0)
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
	class ConstantCallSite : public __jni_impl::java::lang::invoke::ConstantCallSite
	{
	public:
		ConstantCallSite(QAndroidJniObject obj) { __thiz = obj; }
		ConstantCallSite(__jni_impl::java::lang::invoke::MethodHandle arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang::invoke

#endif // JAVA_LANG_INVOKE_CONSTANTCALLSITE

