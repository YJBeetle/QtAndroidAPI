#pragma once

#include "../../__JniBaseClass.hpp"
#include "./ThreadLocal.hpp"

namespace __jni_impl::java::lang
{
	class Thread;
}

namespace __jni_impl::java::lang
{
	class InheritableThreadLocal : public __jni_impl::java::lang::ThreadLocal
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::lang

#include "./Thread.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void InheritableThreadLocal::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.InheritableThreadLocal",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class InheritableThreadLocal : public __jni_impl::java::lang::InheritableThreadLocal
	{
	public:
		InheritableThreadLocal(QAndroidJniObject obj) { __thiz = obj; }
		InheritableThreadLocal()
		{
			__constructor();
		}
	};
} // namespace java::lang

