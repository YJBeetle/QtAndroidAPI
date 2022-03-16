#pragma once

#include "../../../JObjectArray.hpp"
#include "../../io/ObjectInputStream.def.hpp"
#include "../../io/ObjectOutputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TimeUnit.def.hpp"
#include "./locks/ReentrantLock.def.hpp"
#include "./SynchronousQueue.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline SynchronousQueue::SynchronousQueue()
		: java::util::AbstractQueue(
			"java.util.concurrent.SynchronousQueue",
			"()V"
		) {}
	inline SynchronousQueue::SynchronousQueue(jboolean arg0)
		: java::util::AbstractQueue(
			"java.util.concurrent.SynchronousQueue",
			"(Z)V",
			arg0
		) {}
	
	// Methods
	inline void SynchronousQueue::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline jboolean SynchronousQueue::contains(JObject arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean SynchronousQueue::containsAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline jint SynchronousQueue::drainTo(JObject arg0) const
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;)I",
			arg0.object()
		);
	}
	inline jint SynchronousQueue::drainTo(JObject arg0, jint arg1) const
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;I)I",
			arg0.object(),
			arg1
		);
	}
	inline jboolean SynchronousQueue::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline JObject SynchronousQueue::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline jboolean SynchronousQueue::offer(JObject arg0) const
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean SynchronousQueue::offer(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0.object<jobject>(),
			arg1,
			arg2.object()
		);
	}
	inline JObject SynchronousQueue::peek() const
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject SynchronousQueue::poll() const
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject SynchronousQueue::poll(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callObjectMethod(
			"poll",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	inline void SynchronousQueue::put(JObject arg0) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline jint SynchronousQueue::remainingCapacity() const
	{
		return callMethod<jint>(
			"remainingCapacity",
			"()I"
		);
	}
	inline jboolean SynchronousQueue::remove(JObject arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean SynchronousQueue::removeAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline jboolean SynchronousQueue::retainAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline jint SynchronousQueue::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline JObject SynchronousQueue::spliterator() const
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	inline JObject SynchronousQueue::take() const
	{
		return callObjectMethod(
			"take",
			"()Ljava/lang/Object;"
		);
	}
	inline JObjectArray SynchronousQueue::toArray() const
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	inline JObjectArray SynchronousQueue::toArray(JObjectArray arg0) const
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JString SynchronousQueue::toString() const
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

