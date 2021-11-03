#include "../../../JObjectArray.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ConcurrentLinkedDeque.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	ConcurrentLinkedDeque::ConcurrentLinkedDeque(QAndroidJniObject obj) : java::util::AbstractCollection(obj) {}
	
	// Constructors
	ConcurrentLinkedDeque::ConcurrentLinkedDeque()
		: java::util::AbstractCollection(
			"java.util.concurrent.ConcurrentLinkedDeque",
			"()V"
		) {}
	ConcurrentLinkedDeque::ConcurrentLinkedDeque(JObject arg0)
		: java::util::AbstractCollection(
			"java.util.concurrent.ConcurrentLinkedDeque",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean ConcurrentLinkedDeque::add(JObject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ConcurrentLinkedDeque::addAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	void ConcurrentLinkedDeque::addFirst(JObject arg0)
	{
		callMethod<void>(
			"addFirst",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void ConcurrentLinkedDeque::addLast(JObject arg0)
	{
		callMethod<void>(
			"addLast",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void ConcurrentLinkedDeque::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean ConcurrentLinkedDeque::contains(JObject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject ConcurrentLinkedDeque::descendingIterator()
	{
		return callObjectMethod(
			"descendingIterator",
			"()Ljava/util/Iterator;"
		);
	}
	JObject ConcurrentLinkedDeque::element()
	{
		return callObjectMethod(
			"element",
			"()Ljava/lang/Object;"
		);
	}
	void ConcurrentLinkedDeque::forEach(JObject arg0)
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	JObject ConcurrentLinkedDeque::getFirst()
	{
		return callObjectMethod(
			"getFirst",
			"()Ljava/lang/Object;"
		);
	}
	JObject ConcurrentLinkedDeque::getLast()
	{
		return callObjectMethod(
			"getLast",
			"()Ljava/lang/Object;"
		);
	}
	jboolean ConcurrentLinkedDeque::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject ConcurrentLinkedDeque::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean ConcurrentLinkedDeque::offer(JObject arg0)
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ConcurrentLinkedDeque::offerFirst(JObject arg0)
	{
		return callMethod<jboolean>(
			"offerFirst",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ConcurrentLinkedDeque::offerLast(JObject arg0)
	{
		return callMethod<jboolean>(
			"offerLast",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject ConcurrentLinkedDeque::peek()
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		);
	}
	JObject ConcurrentLinkedDeque::peekFirst()
	{
		return callObjectMethod(
			"peekFirst",
			"()Ljava/lang/Object;"
		);
	}
	JObject ConcurrentLinkedDeque::peekLast()
	{
		return callObjectMethod(
			"peekLast",
			"()Ljava/lang/Object;"
		);
	}
	JObject ConcurrentLinkedDeque::poll()
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		);
	}
	JObject ConcurrentLinkedDeque::pollFirst()
	{
		return callObjectMethod(
			"pollFirst",
			"()Ljava/lang/Object;"
		);
	}
	JObject ConcurrentLinkedDeque::pollLast()
	{
		return callObjectMethod(
			"pollLast",
			"()Ljava/lang/Object;"
		);
	}
	JObject ConcurrentLinkedDeque::pop()
	{
		return callObjectMethod(
			"pop",
			"()Ljava/lang/Object;"
		);
	}
	void ConcurrentLinkedDeque::push(JObject arg0)
	{
		callMethod<void>(
			"push",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	jboolean ConcurrentLinkedDeque::remove(JObject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject ConcurrentLinkedDeque::remove()
	{
		return callObjectMethod(
			"remove",
			"()Ljava/lang/Object;"
		);
	}
	jboolean ConcurrentLinkedDeque::removeAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	JObject ConcurrentLinkedDeque::removeFirst()
	{
		return callObjectMethod(
			"removeFirst",
			"()Ljava/lang/Object;"
		);
	}
	jboolean ConcurrentLinkedDeque::removeFirstOccurrence(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeFirstOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ConcurrentLinkedDeque::removeIf(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	JObject ConcurrentLinkedDeque::removeLast()
	{
		return callObjectMethod(
			"removeLast",
			"()Ljava/lang/Object;"
		);
	}
	jboolean ConcurrentLinkedDeque::removeLastOccurrence(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeLastOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ConcurrentLinkedDeque::retainAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jint ConcurrentLinkedDeque::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject ConcurrentLinkedDeque::spliterator()
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	JObjectArray ConcurrentLinkedDeque::toArray()
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	JObjectArray ConcurrentLinkedDeque::toArray(JObjectArray arg0)
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	JString ConcurrentLinkedDeque::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent

