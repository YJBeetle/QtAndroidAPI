#include "../../../JLongArray.hpp"
#include "../../../JObjectArray.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TimeUnit.hpp"
#include "./locks/ReentrantLock.hpp"
#include "./ArrayBlockingQueue.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	ArrayBlockingQueue::ArrayBlockingQueue(QJniObject obj) : java::util::AbstractQueue(obj) {}
	
	// Constructors
	ArrayBlockingQueue::ArrayBlockingQueue(jint arg0)
		: java::util::AbstractQueue(
			"java.util.concurrent.ArrayBlockingQueue",
			"(I)V",
			arg0
		) {}
	ArrayBlockingQueue::ArrayBlockingQueue(jint arg0, jboolean arg1)
		: java::util::AbstractQueue(
			"java.util.concurrent.ArrayBlockingQueue",
			"(IZ)V",
			arg0,
			arg1
		) {}
	ArrayBlockingQueue::ArrayBlockingQueue(jint arg0, jboolean arg1, JObject arg2)
		: java::util::AbstractQueue(
			"java.util.concurrent.ArrayBlockingQueue",
			"(IZLjava/util/Collection;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	
	// Methods
	jboolean ArrayBlockingQueue::add(JObject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void ArrayBlockingQueue::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean ArrayBlockingQueue::contains(JObject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint ArrayBlockingQueue::drainTo(JObject arg0)
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;)I",
			arg0.object()
		);
	}
	jint ArrayBlockingQueue::drainTo(JObject arg0, jint arg1)
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;I)I",
			arg0.object(),
			arg1
		);
	}
	void ArrayBlockingQueue::forEach(JObject arg0)
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	JObject ArrayBlockingQueue::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean ArrayBlockingQueue::offer(JObject arg0)
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ArrayBlockingQueue::offer(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0.object<jobject>(),
			arg1,
			arg2.object()
		);
	}
	JObject ArrayBlockingQueue::peek()
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		);
	}
	JObject ArrayBlockingQueue::poll()
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		);
	}
	JObject ArrayBlockingQueue::poll(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callObjectMethod(
			"poll",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	void ArrayBlockingQueue::put(JObject arg0)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	jint ArrayBlockingQueue::remainingCapacity()
	{
		return callMethod<jint>(
			"remainingCapacity",
			"()I"
		);
	}
	jboolean ArrayBlockingQueue::remove(JObject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean ArrayBlockingQueue::removeAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean ArrayBlockingQueue::removeIf(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	jboolean ArrayBlockingQueue::retainAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jint ArrayBlockingQueue::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JObject ArrayBlockingQueue::spliterator()
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	JObject ArrayBlockingQueue::take()
	{
		return callObjectMethod(
			"take",
			"()Ljava/lang/Object;"
		);
	}
	JObjectArray ArrayBlockingQueue::toArray()
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	JObjectArray ArrayBlockingQueue::toArray(JObjectArray arg0)
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	JString ArrayBlockingQueue::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent

