#pragma once

#ifndef JAVA_LANG_REF_SOFTREFERENCE
#define JAVA_LANG_REF_SOFTREFERENCE

#include "Reference.hpp"

namespace __jni_impl::java::lang::ref
{
	class ReferenceQueue;
}

namespace __jni_impl::java::lang::ref
{
	class SoftReference : public __jni_impl::java::lang::ref::Reference
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jobject arg0);
		void __constructor(jobject arg0, __jni_impl::java::lang::ref::ReferenceQueue arg1);
		
		// Methods
		QAndroidJniObject get();
	};
} // namespace __jni_impl::java::lang::ref

#include "ReferenceQueue.hpp"

namespace __jni_impl::java::lang::ref
{
	// Fields
	
	// Constructors
	void SoftReference::__constructor(jobject arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ref.SoftReference",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	void SoftReference::__constructor(jobject arg0, __jni_impl::java::lang::ref::ReferenceQueue arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ref.SoftReference",
			"(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V",
			arg0,
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject SoftReference::get()
	{
		return __thiz.callObjectMethod(
			"get",
			"()Ljava/lang/Object;");
	}
} // namespace __jni_impl::java::lang::ref

namespace java::lang::ref
{
	class SoftReference : public __jni_impl::java::lang::ref::SoftReference
	{
	public:
		SoftReference(QAndroidJniObject obj) { __thiz = obj; }
		SoftReference(jobject arg0)
		{
			__constructor(
				arg0);
		}
		SoftReference(jobject arg0, __jni_impl::java::lang::ref::ReferenceQueue arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::lang::ref

#endif // JAVA_LANG_REF_SOFTREFERENCE

