#pragma once

#ifndef JAVA_LANG_REF_REFERENCE
#define JAVA_LANG_REF_REFERENCE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang::ref
{
	class ReferenceQueue;
}

namespace __jni_impl::java::lang::ref
{
	class Reference : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jobject get();
		void clear();
		static void reachabilityFence(jobject arg0);
		jboolean enqueue();
		jboolean isEnqueued();
	};
} // namespace __jni_impl::java::lang::ref

#include "ReferenceQueue.hpp"

namespace __jni_impl::java::lang::ref
{
	// Fields
	
	// Constructors
	void Reference::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ref.Reference",
			"(V)V");
	}
	
	// Methods
	jobject Reference::get()
	{
		return __thiz.callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void Reference::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	void Reference::reachabilityFence(jobject arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.ref.Reference",
			"reachabilityFence",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jboolean Reference::enqueue()
	{
		return __thiz.callMethod<jboolean>(
			"enqueue",
			"()Z"
		);
	}
	jboolean Reference::isEnqueued()
	{
		return __thiz.callMethod<jboolean>(
			"isEnqueued",
			"()Z"
		);
	}
} // namespace __jni_impl::java::lang::ref

namespace java::lang::ref
{
	class Reference : public __jni_impl::java::lang::ref::Reference
	{
	public:
		Reference(QAndroidJniObject obj) { __thiz = obj; }
		Reference()
		{
			__constructor();
		}
	};
} // namespace java::lang::ref

#endif // JAVA_LANG_REF_REFERENCE

