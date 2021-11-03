#include "../../../JObjectArray.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ConcurrentLinkedQueue.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	ConcurrentLinkedQueue::ConcurrentLinkedQueue(QJniObject obj) : java::util::AbstractQueue(obj) {}
	
	// Constructors
	ConcurrentLinkedQueue::ConcurrentLinkedQueue()
		: java::util::AbstractQueue(
			"java.util.concurrent.ConcurrentLinkedQueue",
			"()V"
		) {}
	ConcurrentLinkedQueue::ConcurrentLinkedQueue(JObject arg0)
		: java::util::AbstractQueue(
			"java.util.concurrent.ConcurrentLinkedQueue",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean ConcurrentLinkedQueue::add(JObject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ConcurrentLinkedQueue::addAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	void ConcurrentLinkedQueue::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean ConcurrentLinkedQueue::contains(JObject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void ConcurrentLinkedQueue::forEach(JObject arg0)
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	jboolean ConcurrentLinkedQueue::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject ConcurrentLinkedQueue::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean ConcurrentLinkedQueue::offer(JObject arg0)
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject ConcurrentLinkedQueue::peek()
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		);
	}
	JObject ConcurrentLinkedQueue::poll()
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		);
	}
	jboolean ConcurrentLinkedQueue::remove(JObject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ConcurrentLinkedQueue::removeAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean ConcurrentLinkedQueue::removeIf(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	jboolean ConcurrentLinkedQueue::retainAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jint ConcurrentLinkedQueue::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject ConcurrentLinkedQueue::spliterator()
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	JObjectArray ConcurrentLinkedQueue::toArray()
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	JObjectArray ConcurrentLinkedQueue::toArray(JObjectArray arg0)
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	JString ConcurrentLinkedQueue::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent

