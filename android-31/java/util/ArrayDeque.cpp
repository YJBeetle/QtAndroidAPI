#include "../../JLongArray.hpp"
#include "../../JObjectArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "./ArrayDeque.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	ArrayDeque::ArrayDeque(QAndroidJniObject obj) : java::util::AbstractCollection(obj) {}
	
	// Constructors
	ArrayDeque::ArrayDeque()
		: java::util::AbstractCollection(
			"java.util.ArrayDeque",
			"()V"
		) {}
	ArrayDeque::ArrayDeque(jint arg0)
		: java::util::AbstractCollection(
			"java.util.ArrayDeque",
			"(I)V",
			arg0
		) {}
	ArrayDeque::ArrayDeque(JObject arg0)
		: java::util::AbstractCollection(
			"java.util.ArrayDeque",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean ArrayDeque::add(JObject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ArrayDeque::addAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	void ArrayDeque::addFirst(JObject arg0)
	{
		callMethod<void>(
			"addFirst",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void ArrayDeque::addLast(JObject arg0)
	{
		callMethod<void>(
			"addLast",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void ArrayDeque::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	java::util::ArrayDeque ArrayDeque::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/util/ArrayDeque;"
		);
	}
	jboolean ArrayDeque::contains(JObject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject ArrayDeque::descendingIterator()
	{
		return callObjectMethod(
			"descendingIterator",
			"()Ljava/util/Iterator;"
		);
	}
	JObject ArrayDeque::element()
	{
		return callObjectMethod(
			"element",
			"()Ljava/lang/Object;"
		);
	}
	void ArrayDeque::forEach(JObject arg0)
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	JObject ArrayDeque::getFirst()
	{
		return callObjectMethod(
			"getFirst",
			"()Ljava/lang/Object;"
		);
	}
	JObject ArrayDeque::getLast()
	{
		return callObjectMethod(
			"getLast",
			"()Ljava/lang/Object;"
		);
	}
	jboolean ArrayDeque::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject ArrayDeque::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean ArrayDeque::offer(JObject arg0)
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ArrayDeque::offerFirst(JObject arg0)
	{
		return callMethod<jboolean>(
			"offerFirst",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ArrayDeque::offerLast(JObject arg0)
	{
		return callMethod<jboolean>(
			"offerLast",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject ArrayDeque::peek()
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		);
	}
	JObject ArrayDeque::peekFirst()
	{
		return callObjectMethod(
			"peekFirst",
			"()Ljava/lang/Object;"
		);
	}
	JObject ArrayDeque::peekLast()
	{
		return callObjectMethod(
			"peekLast",
			"()Ljava/lang/Object;"
		);
	}
	JObject ArrayDeque::poll()
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		);
	}
	JObject ArrayDeque::pollFirst()
	{
		return callObjectMethod(
			"pollFirst",
			"()Ljava/lang/Object;"
		);
	}
	JObject ArrayDeque::pollLast()
	{
		return callObjectMethod(
			"pollLast",
			"()Ljava/lang/Object;"
		);
	}
	JObject ArrayDeque::pop()
	{
		return callObjectMethod(
			"pop",
			"()Ljava/lang/Object;"
		);
	}
	void ArrayDeque::push(JObject arg0)
	{
		callMethod<void>(
			"push",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	jboolean ArrayDeque::remove(JObject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject ArrayDeque::remove()
	{
		return callObjectMethod(
			"remove",
			"()Ljava/lang/Object;"
		);
	}
	jboolean ArrayDeque::removeAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	JObject ArrayDeque::removeFirst()
	{
		return callObjectMethod(
			"removeFirst",
			"()Ljava/lang/Object;"
		);
	}
	jboolean ArrayDeque::removeFirstOccurrence(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeFirstOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ArrayDeque::removeIf(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	JObject ArrayDeque::removeLast()
	{
		return callObjectMethod(
			"removeLast",
			"()Ljava/lang/Object;"
		);
	}
	jboolean ArrayDeque::removeLastOccurrence(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeLastOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ArrayDeque::retainAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jint ArrayDeque::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject ArrayDeque::spliterator()
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	JObjectArray ArrayDeque::toArray()
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	JObjectArray ArrayDeque::toArray(JObjectArray arg0)
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
} // namespace java::util

