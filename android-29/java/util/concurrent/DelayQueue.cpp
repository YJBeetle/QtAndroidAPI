#include "../../lang/Thread.hpp"
#include "../PriorityQueue.hpp"
#include "./TimeUnit.hpp"
#include "./locks/ReentrantLock.hpp"
#include "./DelayQueue.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	DelayQueue::DelayQueue(QAndroidJniObject obj) : java::util::AbstractQueue(obj) {}
	
	// Constructors
	DelayQueue::DelayQueue()
		: java::util::AbstractQueue(
			"java.util.concurrent.DelayQueue",
			"()V"
		) {}
	DelayQueue::DelayQueue(__JniBaseClass arg0)
		: java::util::AbstractQueue(
			"java.util.concurrent.DelayQueue",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean DelayQueue::add(jobject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean DelayQueue::add(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/util/concurrent/Delayed;)Z",
			arg0.object()
		);
	}
	void DelayQueue::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint DelayQueue::drainTo(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;)I",
			arg0.object()
		);
	}
	jint DelayQueue::drainTo(__JniBaseClass arg0, jint arg1)
	{
		return callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;I)I",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject DelayQueue::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean DelayQueue::offer(jobject arg0)
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean DelayQueue::offer(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/util/concurrent/Delayed;)Z",
			arg0.object()
		);
	}
	jboolean DelayQueue::offer(jobject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean DelayQueue::offer(__JniBaseClass arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return callMethod<jboolean>(
			"offer",
			"(Ljava/util/concurrent/Delayed;JLjava/util/concurrent/TimeUnit;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	QAndroidJniObject DelayQueue::peek()
	{
		return callObjectMethod(
			"peek",
			"()Ljava/util/concurrent/Delayed;"
		);
	}
	QAndroidJniObject DelayQueue::poll()
	{
		return callObjectMethod(
			"poll",
			"()Ljava/util/concurrent/Delayed;"
		);
	}
	QAndroidJniObject DelayQueue::poll(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callObjectMethod(
			"poll",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Delayed;",
			arg0,
			arg1.object()
		);
	}
	void DelayQueue::put(jobject arg0)
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void DelayQueue::put(__JniBaseClass arg0)
	{
		callMethod<void>(
			"put",
			"(Ljava/util/concurrent/Delayed;)V",
			arg0.object()
		);
	}
	jint DelayQueue::remainingCapacity()
	{
		return callMethod<jint>(
			"remainingCapacity",
			"()I"
		);
	}
	jboolean DelayQueue::remove(jobject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint DelayQueue::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject DelayQueue::take()
	{
		return callObjectMethod(
			"take",
			"()Ljava/util/concurrent/Delayed;"
		);
	}
	jobjectArray DelayQueue::toArray()
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jobjectArray DelayQueue::toArray(jobjectArray arg0)
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
} // namespace java::util::concurrent

