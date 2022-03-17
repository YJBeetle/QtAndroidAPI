#pragma once

#include "../../JLongArray.hpp"
#include "../../JObjectArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "./PriorityQueue.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline PriorityQueue::PriorityQueue()
		: java::util::AbstractQueue(
			"java.util.PriorityQueue",
			"()V"
		) {}
	inline PriorityQueue::PriorityQueue(jint arg0)
		: java::util::AbstractQueue(
			"java.util.PriorityQueue",
			"(I)V",
			arg0
		) {}
	inline PriorityQueue::PriorityQueue(JObject arg0)
		: java::util::AbstractQueue(
			"java.util.PriorityQueue",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	inline PriorityQueue::PriorityQueue(java::util::PriorityQueue &arg0)
		: java::util::AbstractQueue(
			"java.util.PriorityQueue",
			"(Ljava/util/PriorityQueue;)V",
			arg0.object()
		) {}
	inline PriorityQueue::PriorityQueue(jint arg0, JObject arg1)
		: java::util::AbstractQueue(
			"java.util.PriorityQueue",
			"(ILjava/util/Comparator;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline jboolean PriorityQueue::add(JObject arg0) const
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void PriorityQueue::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline JObject PriorityQueue::comparator() const
	{
		return callObjectMethod(
			"comparator",
			"()Ljava/util/Comparator;"
		);
	}
	inline jboolean PriorityQueue::contains(JObject arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void PriorityQueue::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	inline JObject PriorityQueue::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline jboolean PriorityQueue::offer(JObject arg0) const
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject PriorityQueue::peek() const
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject PriorityQueue::poll() const
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean PriorityQueue::remove(JObject arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean PriorityQueue::removeAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline jboolean PriorityQueue::removeIf(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	inline jboolean PriorityQueue::retainAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline jint PriorityQueue::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JObject PriorityQueue::spliterator() const
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	inline JObjectArray PriorityQueue::toArray() const
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	inline JObjectArray PriorityQueue::toArray(JObjectArray arg0) const
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
} // namespace java::util

// Base class headers
#include "./AbstractCollection.hpp"
#include "./AbstractQueue.hpp"

