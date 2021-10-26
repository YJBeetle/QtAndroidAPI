#pragma once

#ifndef JAVA_LANG_REF_PHANTOMREFERENCE
#define JAVA_LANG_REF_PHANTOMREFERENCE

#include "../../../__JniBaseClass.hpp"
#include "Reference.hpp"

namespace __jni_impl::java::lang::ref
{
	class ReferenceQueue;
}

namespace __jni_impl::java::lang::ref
{
	class PhantomReference : public __jni_impl::java::lang::ref::Reference
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jobject arg0, __jni_impl::java::lang::ref::ReferenceQueue arg1);
		
		// Methods
		jobject get();
	};
} // namespace __jni_impl::java::lang::ref

#include "ReferenceQueue.hpp"

namespace __jni_impl::java::lang::ref
{
	// Fields
	
	// Constructors
	void PhantomReference::__constructor(jobject arg0, __jni_impl::java::lang::ref::ReferenceQueue arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ref.PhantomReference",
			"(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jobject PhantomReference::get()
	{
		return __thiz.callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
} // namespace __jni_impl::java::lang::ref

namespace java::lang::ref
{
	class PhantomReference : public __jni_impl::java::lang::ref::PhantomReference
	{
	public:
		PhantomReference(QAndroidJniObject obj) { __thiz = obj; }
		PhantomReference(jobject arg0, __jni_impl::java::lang::ref::ReferenceQueue arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::lang::ref

#endif // JAVA_LANG_REF_PHANTOMREFERENCE

