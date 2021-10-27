#include "../../../lang/Thread.hpp"
#include "./AbstractQueuedSynchronizer_ConditionObject.hpp"
#include "./AbstractQueuedSynchronizer.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	AbstractQueuedSynchronizer::AbstractQueuedSynchronizer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void AbstractQueuedSynchronizer::acquire(jint arg0)
	{
		__thiz.callMethod<void>(
			"acquire",
			"(I)V",
			arg0
		);
	}
	void AbstractQueuedSynchronizer::acquireInterruptibly(jint arg0)
	{
		__thiz.callMethod<void>(
			"acquireInterruptibly",
			"(I)V",
			arg0
		);
	}
	void AbstractQueuedSynchronizer::acquireShared(jint arg0)
	{
		__thiz.callMethod<void>(
			"acquireShared",
			"(I)V",
			arg0
		);
	}
	void AbstractQueuedSynchronizer::acquireSharedInterruptibly(jint arg0)
	{
		__thiz.callMethod<void>(
			"acquireSharedInterruptibly",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject AbstractQueuedSynchronizer::getExclusiveQueuedThreads()
	{
		return __thiz.callObjectMethod(
			"getExclusiveQueuedThreads",
			"()Ljava/util/Collection;"
		);
	}
	QAndroidJniObject AbstractQueuedSynchronizer::getFirstQueuedThread()
	{
		return __thiz.callObjectMethod(
			"getFirstQueuedThread",
			"()Ljava/lang/Thread;"
		);
	}
	jint AbstractQueuedSynchronizer::getQueueLength()
	{
		return __thiz.callMethod<jint>(
			"getQueueLength",
			"()I"
		);
	}
	QAndroidJniObject AbstractQueuedSynchronizer::getQueuedThreads()
	{
		return __thiz.callObjectMethod(
			"getQueuedThreads",
			"()Ljava/util/Collection;"
		);
	}
	QAndroidJniObject AbstractQueuedSynchronizer::getSharedQueuedThreads()
	{
		return __thiz.callObjectMethod(
			"getSharedQueuedThreads",
			"()Ljava/util/Collection;"
		);
	}
	jint AbstractQueuedSynchronizer::getWaitQueueLength(java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0)
	{
		return __thiz.callMethod<jint>(
			"getWaitQueueLength",
			"(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractQueuedSynchronizer::getWaitingThreads(java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0)
	{
		return __thiz.callObjectMethod(
			"getWaitingThreads",
			"(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
	jboolean AbstractQueuedSynchronizer::hasContended()
	{
		return __thiz.callMethod<jboolean>(
			"hasContended",
			"()Z"
		);
	}
	jboolean AbstractQueuedSynchronizer::hasQueuedPredecessors()
	{
		return __thiz.callMethod<jboolean>(
			"hasQueuedPredecessors",
			"()Z"
		);
	}
	jboolean AbstractQueuedSynchronizer::hasQueuedThreads()
	{
		return __thiz.callMethod<jboolean>(
			"hasQueuedThreads",
			"()Z"
		);
	}
	jboolean AbstractQueuedSynchronizer::hasWaiters(java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasWaiters",
			"(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean AbstractQueuedSynchronizer::isQueued(java::lang::Thread arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isQueued",
			"(Ljava/lang/Thread;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean AbstractQueuedSynchronizer::owns(java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"owns",
			"(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean AbstractQueuedSynchronizer::release(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"release",
			"(I)Z",
			arg0
		);
	}
	jboolean AbstractQueuedSynchronizer::releaseShared(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"releaseShared",
			"(I)Z",
			arg0
		);
	}
	jstring AbstractQueuedSynchronizer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean AbstractQueuedSynchronizer::tryAcquireNanos(jint arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"tryAcquireNanos",
			"(IJ)Z",
			arg0,
			arg1
		);
	}
	jboolean AbstractQueuedSynchronizer::tryAcquireSharedNanos(jint arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"tryAcquireSharedNanos",
			"(IJ)Z",
			arg0,
			arg1
		);
	}
} // namespace java::util::concurrent::locks

