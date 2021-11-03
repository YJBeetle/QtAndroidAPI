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
	void SynchronousQueue::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean SynchronousQueue::contains(JObject arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean SynchronousQueue::containsAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jint SynchronousQueue::drainTo(JObject arg0) const
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;)I",
			arg0.object()
		);
	}
	jint SynchronousQueue::drainTo(JObject arg0, jint arg1) const
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;I)I",
			arg0.object(),
			arg1
		);
	}
	jboolean SynchronousQueue::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject SynchronousQueue::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean SynchronousQueue::offer(JObject arg0) const
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean SynchronousQueue::offer(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0.object<jobject>(),
			arg1,
			arg2.object()
		);
	}
	JObject SynchronousQueue::peek() const
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		);
	}
	JObject SynchronousQueue::poll() const
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		);
	}
	JObject SynchronousQueue::poll(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callObjectMethod(
			"poll",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	void SynchronousQueue::put(JObject arg0) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	jint SynchronousQueue::remainingCapacity() const
	{
		return callMethod<jint>(
			"remainingCapacity",
			"()I"
		);
	}
	jboolean SynchronousQueue::remove(JObject arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean SynchronousQueue::removeAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean SynchronousQueue::retainAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jint SynchronousQueue::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject SynchronousQueue::spliterator() const
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	JObject SynchronousQueue::take() const
	{
		return callObjectMethod(
			"take",
			"()Ljava/lang/Object;"
		);
	}
	JObjectArray SynchronousQueue::toArray() const
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	JObjectArray SynchronousQueue::toArray(JObjectArray arg0) const
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	JString SynchronousQueue::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent

