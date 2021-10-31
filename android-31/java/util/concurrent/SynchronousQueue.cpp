#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "./TimeUnit.hpp"
#include "./locks/ReentrantLock.hpp"
#include "./SynchronousQueue.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	SynchronousQueue::SynchronousQueue(QJniObject obj) : java::util::AbstractQueue(obj) {}
	
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
	jboolean SynchronousQueue::contains(jobject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean SynchronousQueue::containsAll(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jint SynchronousQueue::drainTo(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;)I",
			arg0.object()
		);
	}
	jint SynchronousQueue::drainTo(__JniBaseClass arg0, jint arg1)
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
	__JniBaseClass SynchronousQueue::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean SynchronousQueue::offer(jobject arg0)
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean SynchronousQueue::offer(jobject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jobject SynchronousQueue::peek()
	{
		return callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject SynchronousQueue::poll()
	{
		return callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject SynchronousQueue::poll(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callObjectMethod(
			"poll",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		).object<jobject>();
	}
	void SynchronousQueue::put(jobject arg0)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jint SynchronousQueue::remainingCapacity()
	{
		return callMethod<jint>(
			"remainingCapacity",
			"()I"
		);
	}
	jboolean SynchronousQueue::remove(jobject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean SynchronousQueue::removeAll(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean SynchronousQueue::retainAll(__JniBaseClass arg0)
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
	__JniBaseClass SynchronousQueue::spliterator()
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	jobject SynchronousQueue::take()
	{
		return callObjectMethod(
			"take",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobjectArray SynchronousQueue::toArray()
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jobjectArray SynchronousQueue::toArray(jobjectArray arg0)
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
	jstring SynchronousQueue::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::concurrent

