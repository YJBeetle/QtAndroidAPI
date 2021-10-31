#include "../../io/ObjectInputStream.hpp"
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
	ArrayBlockingQueue::ArrayBlockingQueue(jint arg0, jboolean arg1, __JniBaseClass arg2)
		: java::util::AbstractQueue(
			"java.util.concurrent.ArrayBlockingQueue",
			"(IZLjava/util/Collection;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	
	// Methods
	jboolean ArrayBlockingQueue::add(jobject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void ArrayBlockingQueue::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean ArrayBlockingQueue::contains(jobject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ArrayBlockingQueue::drainTo(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;)I",
			arg0.object()
		);
	}
	jint ArrayBlockingQueue::drainTo(__JniBaseClass arg0, jint arg1)
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;I)I",
			arg0.object(),
			arg1
		);
	}
	void ArrayBlockingQueue::forEach(__JniBaseClass arg0)
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	__JniBaseClass ArrayBlockingQueue::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean ArrayBlockingQueue::offer(jobject arg0)
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ArrayBlockingQueue::offer(jobject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jobject ArrayBlockingQueue::peek()
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ArrayBlockingQueue::poll()
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ArrayBlockingQueue::poll(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callObjectMethod(
			"poll",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	void ArrayBlockingQueue::put(jobject arg0)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jint ArrayBlockingQueue::remainingCapacity()
	{
		return callMethod<jint>(
			"remainingCapacity",
			"()I"
		);
	}
	jboolean ArrayBlockingQueue::remove(jobject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ArrayBlockingQueue::removeAll(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean ArrayBlockingQueue::removeIf(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	jboolean ArrayBlockingQueue::retainAll(__JniBaseClass arg0)
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
	__JniBaseClass ArrayBlockingQueue::spliterator()
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	jobject ArrayBlockingQueue::take()
	{
		return callObjectMethod(
			"take",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobjectArray ArrayBlockingQueue::toArray()
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jobjectArray ArrayBlockingQueue::toArray(jobjectArray arg0)
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
	jstring ArrayBlockingQueue::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::concurrent

