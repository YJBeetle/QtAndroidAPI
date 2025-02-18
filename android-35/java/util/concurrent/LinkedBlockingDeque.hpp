#pragma once

#include "../../../JObjectArray.hpp"
#include "../../io/ObjectInputStream.def.hpp"
#include "../../io/ObjectOutputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TimeUnit.def.hpp"
#include "./locks/ReentrantLock.def.hpp"
#include "./LinkedBlockingDeque.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline LinkedBlockingDeque::LinkedBlockingDeque()
		: java::util::AbstractQueue(
			"java.util.concurrent.LinkedBlockingDeque",
			"()V"
		) {}
	inline LinkedBlockingDeque::LinkedBlockingDeque(jint arg0)
		: java::util::AbstractQueue(
			"java.util.concurrent.LinkedBlockingDeque",
			"(I)V",
			arg0
		) {}
	inline LinkedBlockingDeque::LinkedBlockingDeque(JObject arg0)
		: java::util::AbstractQueue(
			"java.util.concurrent.LinkedBlockingDeque",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean LinkedBlockingDeque::add(JObject arg0) const
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean LinkedBlockingDeque::addAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline void LinkedBlockingDeque::addFirst(JObject arg0) const
	{
		callMethod<void>(
			"addFirst",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void LinkedBlockingDeque::addLast(JObject arg0) const
	{
		callMethod<void>(
			"addLast",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void LinkedBlockingDeque::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline jboolean LinkedBlockingDeque::contains(JObject arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject LinkedBlockingDeque::descendingIterator() const
	{
		return callObjectMethod(
			"descendingIterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline jint LinkedBlockingDeque::drainTo(JObject arg0) const
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;)I",
			arg0.object()
		);
	}
	inline jint LinkedBlockingDeque::drainTo(JObject arg0, jint arg1) const
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;I)I",
			arg0.object(),
			arg1
		);
	}
	inline JObject LinkedBlockingDeque::element() const
	{
		return callObjectMethod(
			"element",
			"()Ljava/lang/Object;"
		);
	}
	inline void LinkedBlockingDeque::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	inline JObject LinkedBlockingDeque::getFirst() const
	{
		return callObjectMethod(
			"getFirst",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject LinkedBlockingDeque::getLast() const
	{
		return callObjectMethod(
			"getLast",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject LinkedBlockingDeque::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline jboolean LinkedBlockingDeque::offer(JObject arg0) const
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean LinkedBlockingDeque::offer(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0.object<jobject>(),
			arg1,
			arg2.object()
		);
	}
	inline jboolean LinkedBlockingDeque::offerFirst(JObject arg0) const
	{
		return callMethod<jboolean>(
			"offerFirst",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean LinkedBlockingDeque::offerFirst(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const
	{
		return callMethod<jboolean>(
			"offerFirst",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0.object<jobject>(),
			arg1,
			arg2.object()
		);
	}
	inline jboolean LinkedBlockingDeque::offerLast(JObject arg0) const
	{
		return callMethod<jboolean>(
			"offerLast",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean LinkedBlockingDeque::offerLast(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const
	{
		return callMethod<jboolean>(
			"offerLast",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0.object<jobject>(),
			arg1,
			arg2.object()
		);
	}
	inline JObject LinkedBlockingDeque::peek() const
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject LinkedBlockingDeque::peekFirst() const
	{
		return callObjectMethod(
			"peekFirst",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject LinkedBlockingDeque::peekLast() const
	{
		return callObjectMethod(
			"peekLast",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject LinkedBlockingDeque::poll() const
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject LinkedBlockingDeque::poll(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callObjectMethod(
			"poll",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	inline JObject LinkedBlockingDeque::pollFirst() const
	{
		return callObjectMethod(
			"pollFirst",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject LinkedBlockingDeque::pollFirst(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callObjectMethod(
			"pollFirst",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	inline JObject LinkedBlockingDeque::pollLast() const
	{
		return callObjectMethod(
			"pollLast",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject LinkedBlockingDeque::pollLast(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callObjectMethod(
			"pollLast",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	inline JObject LinkedBlockingDeque::pop() const
	{
		return callObjectMethod(
			"pop",
			"()Ljava/lang/Object;"
		);
	}
	inline void LinkedBlockingDeque::push(JObject arg0) const
	{
		callMethod<void>(
			"push",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void LinkedBlockingDeque::put(JObject arg0) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void LinkedBlockingDeque::putFirst(JObject arg0) const
	{
		callMethod<void>(
			"putFirst",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void LinkedBlockingDeque::putLast(JObject arg0) const
	{
		callMethod<void>(
			"putLast",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline jint LinkedBlockingDeque::remainingCapacity() const
	{
		return callMethod<jint>(
			"remainingCapacity",
			"()I"
		);
	}
	inline jboolean LinkedBlockingDeque::remove(JObject arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject LinkedBlockingDeque::remove() const
	{
		return callObjectMethod(
			"remove",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean LinkedBlockingDeque::removeAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline JObject LinkedBlockingDeque::removeFirst() const
	{
		return callObjectMethod(
			"removeFirst",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean LinkedBlockingDeque::removeFirstOccurrence(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeFirstOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean LinkedBlockingDeque::removeIf(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	inline JObject LinkedBlockingDeque::removeLast() const
	{
		return callObjectMethod(
			"removeLast",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean LinkedBlockingDeque::removeLastOccurrence(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeLastOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean LinkedBlockingDeque::retainAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline jint LinkedBlockingDeque::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JObject LinkedBlockingDeque::spliterator() const
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	inline JObject LinkedBlockingDeque::take() const
	{
		return callObjectMethod(
			"take",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject LinkedBlockingDeque::takeFirst() const
	{
		return callObjectMethod(
			"takeFirst",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject LinkedBlockingDeque::takeLast() const
	{
		return callObjectMethod(
			"takeLast",
			"()Ljava/lang/Object;"
		);
	}
	inline JObjectArray LinkedBlockingDeque::toArray() const
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	inline JObjectArray LinkedBlockingDeque::toArray(JObjectArray arg0) const
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JString LinkedBlockingDeque::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent

// Base class headers
#include "../AbstractCollection.hpp"
#include "../AbstractQueue.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent;
#endif
