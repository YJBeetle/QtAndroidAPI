#pragma once

#ifndef JAVA_LANG_INVOKE_MUTABLECALLSITE
#define JAVA_LANG_INVOKE_MUTABLECALLSITE

#include "../../../__JniBaseClass.hpp"
#include "CallSite.hpp"

namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicInteger;
}
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
	class MutableCallSite : public __jni_impl::java::lang::invoke::CallSite
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
		static void syncAll(jarray arg0);
	};
} // namespace __jni_impl::java::lang::invoke

#include "../../util/concurrent/atomic/AtomicInteger.hpp"
#include "MethodType.hpp"
#include "MethodHandle.hpp"

namespace __jni_impl::java::lang::invoke
{
	// Fields
	
	// Constructors
	void MutableCallSite::__constructor(__jni_impl::java::lang::invoke::MethodType arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.MutableCallSite",
			"(Ljava/lang/invoke/MethodType;)V",
			arg0.__jniObject().object());
	}
	void MutableCallSite::__constructor(__jni_impl::java::lang::invoke::MethodHandle arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.MutableCallSite",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
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
	void MutableCallSite::setTarget(__jni_impl::java::lang::invoke::MethodHandle arg0)
	{
		__thiz.callMethod<void>(
			"setTarget",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.__jniObject().object()
		);
	}
	void MutableCallSite::syncAll(jarray arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.invoke.MutableCallSite",
			"syncAll",
			"([Ljava/lang/invoke/MutableCallSite;)V",
			arg0
		);
	}
} // namespace __jni_impl::java::lang::invoke

namespace java::lang::invoke
{
	class MutableCallSite : public __jni_impl::java::lang::invoke::MutableCallSite
	{
	public:
		MutableCallSite(QAndroidJniObject obj) { __thiz = obj; }
		MutableCallSite(__jni_impl::java::lang::invoke::MethodType arg0)
		{
			__constructor(
				arg0);
		}
		MutableCallSite(__jni_impl::java::lang::invoke::MethodHandle arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang::invoke

#endif // JAVA_LANG_INVOKE_MUTABLECALLSITE

