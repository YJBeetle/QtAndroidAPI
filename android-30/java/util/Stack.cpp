#include "../../JObject.hpp"
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
	jboolean Stack::empty() const
	{
		return callMethod<jboolean>(
			"empty",
			"()Z"
		);
	}
	JObject Stack::peek() const
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		);
	}
	JObject Stack::pop() const
	{
		return callObjectMethod(
			"pop",
			"()Ljava/lang/Object;"
		);
	}
	JObject Stack::push(JObject arg0) const
	{
		return callObjectMethod(
			"push",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jint Stack::search(JObject arg0) const
	{
		return callMethod<jint>(
			"search",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
} // namespace java::util

