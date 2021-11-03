#include "./AbstractQueue.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	AbstractQueue::AbstractQueue(QAndroidJniObject obj) : java::util::AbstractCollection(obj) {}
	
	// Constructors
	
	// Methods
	jboolean AbstractQueue::add(jobject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean AbstractQueue::addAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	void AbstractQueue::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject AbstractQueue::element()
	{
		return callObjectMethod(
			"element",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject AbstractQueue::remove()
	{
		return callObjectMethod(
			"remove",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
} // namespace java::util

