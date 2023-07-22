#pragma once

#include "../../../JObjectArray.hpp"
#include "../../io/ObjectInputStream.def.hpp"
#include "../../io/ObjectOutputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../lang/invoke/VarHandle.def.hpp"
#include "./ConcurrentLinkedDeque.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline ConcurrentLinkedDeque::ConcurrentLinkedDeque()
		: java::util::AbstractCollection(
			"java.util.concurrent.ConcurrentLinkedDeque",
			"()V"
		) {}
	inline ConcurrentLinkedDeque::ConcurrentLinkedDeque(JObject arg0)
		: java::util::AbstractCollection(
			"java.util.concurrent.ConcurrentLinkedDeque",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean ConcurrentLinkedDeque::add(JObject arg0) const
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean ConcurrentLinkedDeque::addAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline void ConcurrentLinkedDeque::addFirst(JObject arg0) const
	{
		callMethod<void>(
			"addFirst",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void ConcurrentLinkedDeque::addLast(JObject arg0) const
	{
		callMethod<void>(
			"addLast",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void ConcurrentLinkedDeque::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline jboolean ConcurrentLinkedDeque::contains(JObject arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject ConcurrentLinkedDeque::descendingIterator() const
	{
		return callObjectMethod(
			"descendingIterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline JObject ConcurrentLinkedDeque::element() const
	{
		return callObjectMethod(
			"element",
			"()Ljava/lang/Object;"
		);
	}
	inline void ConcurrentLinkedDeque::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	inline JObject ConcurrentLinkedDeque::getFirst() const
	{
		return callObjectMethod(
			"getFirst",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject ConcurrentLinkedDeque::getLast() const
	{
		return callObjectMethod(
			"getLast",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean ConcurrentLinkedDeque::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline JObject ConcurrentLinkedDeque::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline jboolean ConcurrentLinkedDeque::offer(JObject arg0) const
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean ConcurrentLinkedDeque::offerFirst(JObject arg0) const
	{
		return callMethod<jboolean>(
			"offerFirst",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean ConcurrentLinkedDeque::offerLast(JObject arg0) const
	{
		return callMethod<jboolean>(
			"offerLast",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject ConcurrentLinkedDeque::peek() const
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject ConcurrentLinkedDeque::peekFirst() const
	{
		return callObjectMethod(
			"peekFirst",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject ConcurrentLinkedDeque::peekLast() const
	{
		return callObjectMethod(
			"peekLast",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject ConcurrentLinkedDeque::poll() const
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject ConcurrentLinkedDeque::pollFirst() const
	{
		return callObjectMethod(
			"pollFirst",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject ConcurrentLinkedDeque::pollLast() const
	{
		return callObjectMethod(
			"pollLast",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject ConcurrentLinkedDeque::pop() const
	{
		return callObjectMethod(
			"pop",
			"()Ljava/lang/Object;"
		);
	}
	inline void ConcurrentLinkedDeque::push(JObject arg0) const
	{
		callMethod<void>(
			"push",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline jboolean ConcurrentLinkedDeque::remove(JObject arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject ConcurrentLinkedDeque::remove() const
	{
		return callObjectMethod(
			"remove",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean ConcurrentLinkedDeque::removeAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline JObject ConcurrentLinkedDeque::removeFirst() const
	{
		return callObjectMethod(
			"removeFirst",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean ConcurrentLinkedDeque::removeFirstOccurrence(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeFirstOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean ConcurrentLinkedDeque::removeIf(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	inline JObject ConcurrentLinkedDeque::removeLast() const
	{
		return callObjectMethod(
			"removeLast",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean ConcurrentLinkedDeque::removeLastOccurrence(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeLastOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean ConcurrentLinkedDeque::retainAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline jint ConcurrentLinkedDeque::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JObject ConcurrentLinkedDeque::spliterator() const
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	inline JObjectArray ConcurrentLinkedDeque::toArray() const
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	inline JObjectArray ConcurrentLinkedDeque::toArray(JObjectArray arg0) const
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JString ConcurrentLinkedDeque::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent

// Base class headers
#include "../AbstractCollection.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent;
#endif
