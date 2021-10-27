#pragma once

#include "../../__JniBaseClass.hpp"
#include "AbstractCollection.hpp"
#include "AbstractList.hpp"
#include "Vector.hpp"


namespace __jni_impl::java::util
{
	class Stack : public __jni_impl::java::util::Vector
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean empty();
		jobject peek();
		jobject pop();
		jobject push(jobject arg0);
		jint search(jobject arg0);
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void Stack::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Stack",
			"()V"
		);
	}
	
	// Methods
	jboolean Stack::empty()
	{
		return __thiz.callMethod<jboolean>(
			"empty",
			"()Z"
		);
	}
	jobject Stack::peek()
	{
		return __thiz.callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject Stack::pop()
	{
		return __thiz.callObjectMethod(
			"pop",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject Stack::push(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"push",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint Stack::search(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"search",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Stack : public __jni_impl::java::util::Stack
	{
	public:
		Stack(QAndroidJniObject obj) { __thiz = obj; }
		Stack()
		{
			__constructor();
		}
	};
} // namespace java::util

