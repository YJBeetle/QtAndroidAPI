#pragma once

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
		static void reachabilityFence(jobject arg0);
		void clear();
		jboolean enqueue();
		jobject get();
		jboolean isEnqueued();
		jboolean refersTo(jobject arg0);
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
	void Reference::reachabilityFence(jobject arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.ref.Reference",
			"reachabilityFence",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void Reference::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean Reference::enqueue()
	{
		return __thiz.callMethod<jboolean>(
			"enqueue",
			"()Z"
		);
	}
	jobject Reference::get()
	{
		return __thiz.callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean Reference::isEnqueued()
	{
		return __thiz.callMethod<jboolean>(
			"isEnqueued",
			"()Z"
		);
	}
	jboolean Reference::refersTo(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"refersTo",
			"(Ljava/lang/Object;)Z",
			arg0
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

