#include "../../../JLongArray.hpp"
#include "../../../JObjectArray.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../PriorityQueue.hpp"
#include "./TimeUnit.hpp"
#include "./locks/ReentrantLock.hpp"
#include "./PriorityBlockingQueue.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	PriorityBlockingQueue::PriorityBlockingQueue(QAndroidJniObject obj) : java::util::AbstractQueue(obj) {}
	
	// Constructors
	PriorityBlockingQueue::PriorityBlockingQueue()
		: java::util::AbstractQueue(
			"java.util.concurrent.PriorityBlockingQueue",
			"()V"
		) {}
	PriorityBlockingQueue::PriorityBlockingQueue(jint arg0)
		: java::util::AbstractQueue(
			"java.util.concurrent.PriorityBlockingQueue",
			"(I)V",
			arg0
		) {}
	PriorityBlockingQueue::PriorityBlockingQueue(JObject arg0)
		: java::util::AbstractQueue(
			"java.util.concurrent.PriorityBlockingQueue",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	PriorityBlockingQueue::PriorityBlockingQueue(jint arg0, JObject arg1)
		: java::util::AbstractQueue(
			"java.util.concurrent.PriorityBlockingQueue",
			"(ILjava/util/Comparator;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jboolean PriorityBlockingQueue::add(JObject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void PriorityBlockingQueue::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	JObject PriorityBlockingQueue::comparator()
	{
		return callObjectMethod(
			"comparator",
			"()Ljava/util/Comparator;"
		);
	}
	jboolean PriorityBlockingQueue::contains(JObject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint PriorityBlockingQueue::drainTo(JObject arg0)
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;)I",
			arg0.object()
		);
	}
	jint PriorityBlockingQueue::drainTo(JObject arg0, jint arg1)
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;I)I",
			arg0.object(),
			arg1
		);
	}
	void PriorityBlockingQueue::forEach(JObject arg0)
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	JObject PriorityBlockingQueue::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean PriorityBlockingQueue::offer(JObject arg0)
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean PriorityBlockingQueue::offer(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0.object<jobject>(),
			arg1,
			arg2.object()
		);
	}
	JObject PriorityBlockingQueue::peek()
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		);
	}
	JObject PriorityBlockingQueue::poll()
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		);
	}
	JObject PriorityBlockingQueue::poll(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callObjectMethod(
			"poll",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	void PriorityBlockingQueue::put(JObject arg0)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	jint PriorityBlockingQueue::remainingCapacity()
	{
		return callMethod<jint>(
			"remainingCapacity",
			"()I"
		);
	}
	jboolean PriorityBlockingQueue::remove(JObject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean PriorityBlockingQueue::removeAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean PriorityBlockingQueue::removeIf(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	jboolean PriorityBlockingQueue::retainAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jint PriorityBlockingQueue::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject PriorityBlockingQueue::spliterator()
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	JObject PriorityBlockingQueue::take()
	{
		return callObjectMethod(
			"take",
			"()Ljava/lang/Object;"
		);
	}
	JObjectArray PriorityBlockingQueue::toArray()
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	JObjectArray PriorityBlockingQueue::toArray(JObjectArray arg0)
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	JString PriorityBlockingQueue::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent

