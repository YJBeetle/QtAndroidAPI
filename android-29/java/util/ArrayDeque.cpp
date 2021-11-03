#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./ArrayDeque.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	ArrayDeque::ArrayDeque(QJniObject obj) : java::util::AbstractCollection(obj) {}
	
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
	jboolean ArrayDeque::add(jobject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
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
	void ArrayDeque::addFirst(jobject arg0)
	{
		callMethod<void>(
			"addFirst",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void ArrayDeque::addLast(jobject arg0)
	{
		callMethod<void>(
			"addLast",
			"(Ljava/lang/Object;)V",
			arg0
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
	jboolean ArrayDeque::contains(jobject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	JObject ArrayDeque::descendingIterator()
	{
		return callObjectMethod(
			"descendingIterator",
			"()Ljava/util/Iterator;"
		);
	}
	jobject ArrayDeque::element()
	{
		return callObjectMethod(
			"element",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void ArrayDeque::forEach(JObject arg0)
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	jobject ArrayDeque::getFirst()
	{
		return callObjectMethod(
			"getFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ArrayDeque::getLast()
	{
		return callObjectMethod(
			"getLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
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
	jboolean ArrayDeque::offer(jobject arg0)
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ArrayDeque::offerFirst(jobject arg0)
	{
		return callMethod<jboolean>(
			"offerFirst",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ArrayDeque::offerLast(jobject arg0)
	{
		return callMethod<jboolean>(
			"offerLast",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject ArrayDeque::peek()
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ArrayDeque::peekFirst()
	{
		return callObjectMethod(
			"peekFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ArrayDeque::peekLast()
	{
		return callObjectMethod(
			"peekLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ArrayDeque::poll()
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ArrayDeque::pollFirst()
	{
		return callObjectMethod(
			"pollFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ArrayDeque::pollLast()
	{
		return callObjectMethod(
			"pollLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ArrayDeque::pop()
	{
		return callObjectMethod(
			"pop",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void ArrayDeque::push(jobject arg0)
	{
		callMethod<void>(
			"push",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jboolean ArrayDeque::remove(jobject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject ArrayDeque::remove()
	{
		return callObjectMethod(
			"remove",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean ArrayDeque::removeAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jobject ArrayDeque::removeFirst()
	{
		return callObjectMethod(
			"removeFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean ArrayDeque::removeFirstOccurrence(jobject arg0)
	{
		return callMethod<jboolean>(
			"removeFirstOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0
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
	jobject ArrayDeque::removeLast()
	{
		return callObjectMethod(
			"removeLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean ArrayDeque::removeLastOccurrence(jobject arg0)
	{
		return callMethod<jboolean>(
			"removeLastOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0
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
	jobjectArray ArrayDeque::toArray()
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jobjectArray ArrayDeque::toArray(jobjectArray arg0)
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
} // namespace java::util

