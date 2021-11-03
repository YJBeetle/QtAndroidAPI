#include "../../JObject.hpp"
#include "./AbstractQueue.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	AbstractQueue::AbstractQueue(QJniObject obj) : java::util::AbstractCollection(obj) {}
	
	// Constructors
	
	// Methods
	jboolean AbstractQueue::add(JObject arg0) const
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean AbstractQueue::addAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	void AbstractQueue::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	JObject AbstractQueue::element() const
	{
		return callObjectMethod(
			"element",
			"()Ljava/lang/Object;"
		);
	}
	JObject AbstractQueue::remove() const
	{
		return callObjectMethod(
			"remove",
			"()Ljava/lang/Object;"
		);
	}
} // namespace java::util

