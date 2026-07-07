#pragma once

#include "../../../JObjectArray.hpp"
#include "../../io/ObjectInputStream.def.hpp"
#include "../../io/ObjectOutputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../lang/invoke/VarHandle.def.hpp"
#include "./ConcurrentLinkedQueue.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline ConcurrentLinkedQueue::ConcurrentLinkedQueue()
		: java::util::AbstractQueue(
			"java.util.concurrent.ConcurrentLinkedQueue",
			"()V"
		) {}
	inline ConcurrentLinkedQueue::ConcurrentLinkedQueue(JObject arg0)
		: java::util::AbstractQueue(
			"java.util.concurrent.ConcurrentLinkedQueue",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean ConcurrentLinkedQueue::add(JObject arg0) const
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean ConcurrentLinkedQueue::addAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline void ConcurrentLinkedQueue::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline jboolean ConcurrentLinkedQueue::contains(JObject arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void ConcurrentLinkedQueue::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	inline jboolean ConcurrentLinkedQueue::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline JObject ConcurrentLinkedQueue::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline jboolean ConcurrentLinkedQueue::offer(JObject arg0) const
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject ConcurrentLinkedQueue::peek() const
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject ConcurrentLinkedQueue::poll() const
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean ConcurrentLinkedQueue::remove(JObject arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean ConcurrentLinkedQueue::removeAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline jboolean ConcurrentLinkedQueue::removeIf(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	inline jboolean ConcurrentLinkedQueue::retainAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline jint ConcurrentLinkedQueue::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JObject ConcurrentLinkedQueue::spliterator() const
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	inline JObjectArray ConcurrentLinkedQueue::toArray() const
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	inline JObjectArray ConcurrentLinkedQueue::toArray(JObjectArray arg0) const
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JString ConcurrentLinkedQueue::toString() const
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
