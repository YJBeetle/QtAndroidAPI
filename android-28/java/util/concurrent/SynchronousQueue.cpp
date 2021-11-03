#include "../../../JObjectArray.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TimeUnit.hpp"
#include "./locks/ReentrantLock.hpp"
#include "./SynchronousQueue.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	SynchronousQueue::SynchronousQueue(QAndroidJniObject obj) : java::util::AbstractQueue(obj) {}
	
	// Constructors
	SynchronousQueue::SynchronousQueue()
		: java::util::AbstractQueue(
			"java.util.concurrent.SynchronousQueue",
			"()V"
		) {}
	SynchronousQueue::SynchronousQueue(jboolean arg0)
		: java::util::AbstractQueue(
			"java.util.concurrent.SynchronousQueue",
			"(Z)V",
			arg0
		) {}
	
	// Methods
	void SynchronousQueue::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean SynchronousQueue::contains(JObject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean SynchronousQueue::containsAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jint SynchronousQueue::drainTo(JObject arg0)
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;)I",
			arg0.object()
		);
	}
	jint SynchronousQueue::drainTo(JObject arg0, jint arg1)
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;I)I",
			arg0.object(),
			arg1
		);
	}
	jboolean SynchronousQueue::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject SynchronousQueue::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean SynchronousQueue::offer(JObject arg0)
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean SynchronousQueue::offer(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0.object<jobject>(),
			arg1,
			arg2.object()
		);
	}
	JObject SynchronousQueue::peek()
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		);
	}
	JObject SynchronousQueue::poll()
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		);
	}
	JObject SynchronousQueue::poll(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callObjectMethod(
			"poll",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	void SynchronousQueue::put(JObject arg0)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	jint SynchronousQueue::remainingCapacity()
	{
		return callMethod<jint>(
			"remainingCapacity",
			"()I"
		);
	}
	jboolean SynchronousQueue::remove(JObject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean SynchronousQueue::removeAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean SynchronousQueue::retainAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jint SynchronousQueue::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject SynchronousQueue::spliterator()
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	JObject SynchronousQueue::take()
	{
		return callObjectMethod(
			"take",
			"()Ljava/lang/Object;"
		);
	}
	JObjectArray SynchronousQueue::toArray()
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	JObjectArray SynchronousQueue::toArray(JObjectArray arg0)
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	JString SynchronousQueue::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent

