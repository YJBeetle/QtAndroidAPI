#include "./Stack.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	Stack::Stack(QJniObject obj) : java::util::Vector(obj) {}
	
	// Constructors
	Stack::Stack()
		: java::util::Vector(
			"java.util.Stack",
			"()V"
		) {}
	
	// Methods
	jboolean Stack::empty()
	{
		return callMethod<jboolean>(
			"empty",
			"()Z"
		);
	}
	jobject Stack::peek()
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject Stack::pop()
	{
		return callObjectMethod(
			"pop",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject Stack::push(jobject arg0)
	{
		return callObjectMethod(
			"push",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint Stack::search(jobject arg0)
	{
		return callMethod<jint>(
			"search",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
} // namespace java::util

