#include "../../../JObjectArray.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TimeUnit.hpp"
#include "./LinkedTransferQueue.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	LinkedTransferQueue::LinkedTransferQueue()
		: java::util::AbstractQueue(
			"java.util.concurrent.LinkedTransferQueue",
			"()V"
		) {}
	LinkedTransferQueue::LinkedTransferQueue(JObject arg0)
		: java::util::AbstractQueue(
			"java.util.concurrent.LinkedTransferQueue",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean LinkedTransferQueue::add(JObject arg0) const
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void LinkedTransferQueue::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean LinkedTransferQueue::contains(JObject arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint LinkedTransferQueue::drainTo(JObject arg0) const
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;)I",
			arg0.object()
		);
	}
	jint LinkedTransferQueue::drainTo(JObject arg0, jint arg1) const
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;I)I",
			arg0.object(),
			arg1
		);
	}
	void LinkedTransferQueue::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	jint LinkedTransferQueue::getWaitingConsumerCount() const
	{
		return callMethod<jint>(
			"getWaitingConsumerCount",
			"()I"
		);
	}
	jboolean LinkedTransferQueue::hasWaitingConsumer() const
	{
		return callMethod<jboolean>(
			"hasWaitingConsumer",
			"()Z"
		);
	}
	jboolean LinkedTransferQueue::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject LinkedTransferQueue::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean LinkedTransferQueue::offer(JObject arg0) const
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean LinkedTransferQueue::offer(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0.object<jobject>(),
			arg1,
			arg2.object()
		);
	}
	JObject LinkedTransferQueue::peek() const
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		);
	}
	JObject LinkedTransferQueue::poll() const
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		);
	}
	JObject LinkedTransferQueue::poll(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callObjectMethod(
			"poll",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	void LinkedTransferQueue::put(JObject arg0) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	jint LinkedTransferQueue::remainingCapacity() const
	{
		return callMethod<jint>(
			"remainingCapacity",
			"()I"
		);
	}
	jboolean LinkedTransferQueue::remove(JObject arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean LinkedTransferQueue::removeAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean LinkedTransferQueue::removeIf(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	jboolean LinkedTransferQueue::retainAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jint LinkedTransferQueue::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject LinkedTransferQueue::spliterator() const
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	JObject LinkedTransferQueue::take() const
	{
		return callObjectMethod(
			"take",
			"()Ljava/lang/Object;"
		);
	}
	JObjectArray LinkedTransferQueue::toArray() const
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	JObjectArray LinkedTransferQueue::toArray(JObjectArray arg0) const
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	JString LinkedTransferQueue::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void LinkedTransferQueue::transfer(JObject arg0) const
	{
		callMethod<void>(
			"transfer",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	jboolean LinkedTransferQueue::tryTransfer(JObject arg0) const
	{
		return callMethod<jboolean>(
			"tryTransfer",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean LinkedTransferQueue::tryTransfer(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const
	{
		return callMethod<jboolean>(
			"tryTransfer",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0.object<jobject>(),
			arg1,
			arg2.object()
		);
	}
} // namespace java::util::concurrent

