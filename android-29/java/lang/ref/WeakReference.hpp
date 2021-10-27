#pragma once

#include "../../../__JniBaseClass.hpp"
#include "Reference.hpp"

namespace __jni_impl::java::lang::ref
{
	class ReferenceQueue;
}

namespace __jni_impl::java::lang::ref
{
	class WeakReference : public __jni_impl::java::lang::ref::Reference
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jobject arg0);
		void __constructor(jobject arg0, __jni_impl::java::lang::ref::ReferenceQueue arg1);
		
		// Methods
	};
} // namespace __jni_impl::java::lang::ref

#include "ReferenceQueue.hpp"

namespace __jni_impl::java::lang::ref
{
	// Fields
	
	// Constructors
	void WeakReference::__constructor(jobject arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ref.WeakReference",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void WeakReference::__constructor(jobject arg0, __jni_impl::java::lang::ref::ReferenceQueue arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ref.WeakReference",
			"(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang::ref

namespace java::lang::ref
{
	class WeakReference : public __jni_impl::java::lang::ref::WeakReference
	{
	public:
		WeakReference(QAndroidJniObject obj) { __thiz = obj; }
		WeakReference(jobject arg0)
		{
			__constructor(
				arg0);
		}
		WeakReference(jobject arg0, __jni_impl::java::lang::ref::ReferenceQueue arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::lang::ref

