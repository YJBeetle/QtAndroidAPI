#include "./Stack.hpp"

namespace java::util
{
	// Fields
	
	Stack::Stack(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Stack::Stack()
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
} // namespace java::util

