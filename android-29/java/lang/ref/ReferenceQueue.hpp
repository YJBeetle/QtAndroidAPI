#pragma once

#ifndef JAVA_LANG_REF_REFERENCEQUEUE
#define JAVA_LANG_REF_REFERENCEQUEUE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang::ref
{
	class Reference;
}

namespace __jni_impl::java::lang::ref
{
	class ReferenceQueue : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject remove(jlong arg0);
		QAndroidJniObject remove();
		QAndroidJniObject poll();
	};
} // namespace __jni_impl::java::lang::ref

#include "Reference.hpp"

namespace __jni_impl::java::lang::ref
{
	// Fields
	
	// Constructors
	void ReferenceQueue::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ref.ReferenceQueue",
			"()V");
	}
	
	// Methods
	QAndroidJniObject ReferenceQueue::remove(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(J)Ljava/lang/ref/Reference;",
			arg0);
	}
	QAndroidJniObject ReferenceQueue::remove()
	{
		return __thiz.callObjectMethod(
			"remove",
			"()Ljava/lang/ref/Reference;");
	}
	QAndroidJniObject ReferenceQueue::poll()
	{
		return __thiz.callObjectMethod(
			"poll",
			"()Ljava/lang/ref/Reference;");
	}
} // namespace __jni_impl::java::lang::ref

namespace java::lang::ref
{
	class ReferenceQueue : public __jni_impl::java::lang::ref::ReferenceQueue
	{
	public:
		ReferenceQueue(QAndroidJniObject obj) { __thiz = obj; }
		ReferenceQueue()
		{
			__constructor();
		}
	};
} // namespace java::lang::ref

#endif // JAVA_LANG_REF_REFERENCEQUEUE

