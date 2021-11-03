#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./PriorityQueue.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	PriorityQueue::PriorityQueue(QAndroidJniObject obj) : java::util::AbstractQueue(obj) {}
	
	// Constructors
	PriorityQueue::PriorityQueue()
		: java::util::AbstractQueue(
			"java.util.PriorityQueue",
			"()V"
		) {}
	PriorityQueue::PriorityQueue(jint arg0)
		: java::util::AbstractQueue(
			"java.util.PriorityQueue",
			"(I)V",
			arg0
		) {}
	PriorityQueue::PriorityQueue(JObject arg0)
		: java::util::AbstractQueue(
			"java.util.PriorityQueue",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	PriorityQueue::PriorityQueue(java::util::PriorityQueue &arg0)
		: java::util::AbstractQueue(
			"java.util.PriorityQueue",
			"(Ljava/util/PriorityQueue;)V",
			arg0.object()
		) {}
	PriorityQueue::PriorityQueue(jint arg0, JObject arg1)
		: java::util::AbstractQueue(
			"java.util.PriorityQueue",
			"(ILjava/util/Comparator;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jboolean PriorityQueue::add(jobject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void PriorityQueue::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	JObject PriorityQueue::comparator()
	{
		return callObjectMethod(
			"comparator",
			"()Ljava/util/Comparator;"
		);
	}
	jboolean PriorityQueue::contains(jobject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void PriorityQueue::forEach(JObject arg0)
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	JObject PriorityQueue::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean PriorityQueue::offer(jobject arg0)
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject PriorityQueue::peek()
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject PriorityQueue::poll()
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean PriorityQueue::remove(jobject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean PriorityQueue::removeAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean PriorityQueue::removeIf(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	jboolean PriorityQueue::retainAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jint PriorityQueue::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject PriorityQueue::spliterator()
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	jobjectArray PriorityQueue::toArray()
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jobjectArray PriorityQueue::toArray(jobjectArray arg0)
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
} // namespace java::util

