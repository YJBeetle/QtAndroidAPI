#include "../../../JObjectArray.hpp"
#include "../../../JObject.hpp"
#include "../../lang/Thread.hpp"
#include "../PriorityQueue.hpp"
#include "./TimeUnit.hpp"
#include "./locks/ReentrantLock.hpp"
#include "./DelayQueue.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	DelayQueue::DelayQueue(QJniObject obj) : java::util::AbstractQueue(obj) {}
	
	// Constructors
	DelayQueue::DelayQueue()
		: java::util::AbstractQueue(
			"java.util.concurrent.DelayQueue",
			"()V"
		) {}
	DelayQueue::DelayQueue(JObject arg0)
		: java::util::AbstractQueue(
			"java.util.concurrent.DelayQueue",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean DelayQueue::add(JObject arg0) const
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void DelayQueue::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint DelayQueue::drainTo(JObject arg0) const
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;)I",
			arg0.object()
		);
	}
	jint DelayQueue::drainTo(JObject arg0, jint arg1) const
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;I)I",
			arg0.object(),
			arg1
		);
	}
	JObject DelayQueue::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean DelayQueue::offer(JObject arg0) const
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean DelayQueue::offer(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0.object<jobject>(),
			arg1,
			arg2.object()
		);
	}
	JObject DelayQueue::peek() const
	{
		return callObjectMethod(
			"peek",
			"()Ljava/util/concurrent/Delayed;"
		);
	}
	JObject DelayQueue::poll() const
	{
		return callObjectMethod(
			"poll",
			"()Ljava/util/concurrent/Delayed;"
		);
	}
	JObject DelayQueue::poll(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callObjectMethod(
			"poll",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Delayed;",
			arg0,
			arg1.object()
		);
	}
	void DelayQueue::put(JObject arg0) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	jint DelayQueue::remainingCapacity() const
	{
		return callMethod<jint>(
			"remainingCapacity",
			"()I"
		);
	}
	jboolean DelayQueue::remove(JObject arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint DelayQueue::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject DelayQueue::take() const
	{
		return callObjectMethod(
			"take",
			"()Ljava/util/concurrent/Delayed;"
		);
	}
	JObjectArray DelayQueue::toArray() const
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	JObjectArray DelayQueue::toArray(JObjectArray arg0) const
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
} // namespace java::util::concurrent

