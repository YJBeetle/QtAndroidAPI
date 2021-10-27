#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "AbstractOwnableSynchronizer.hpp"

namespace __jni_impl::java::lang
{
	class Thread;
}
namespace __jni_impl::java::util::concurrent::locks
{
	class AbstractQueuedSynchronizer_ConditionObject;
}

namespace __jni_impl::java::util::concurrent::locks
{
	class AbstractQueuedSynchronizer : public __jni_impl::java::util::concurrent::locks::AbstractOwnableSynchronizer
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void acquire(jint arg0);
		void acquireInterruptibly(jint arg0);
		void acquireShared(jint arg0);
		void acquireSharedInterruptibly(jint arg0);
		QAndroidJniObject getExclusiveQueuedThreads();
		QAndroidJniObject getFirstQueuedThread();
		jint getQueueLength();
		QAndroidJniObject getQueuedThreads();
		QAndroidJniObject getSharedQueuedThreads();
		jint getWaitQueueLength(__jni_impl::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0);
		QAndroidJniObject getWaitingThreads(__jni_impl::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0);
		jboolean hasContended();
		jboolean hasQueuedPredecessors();
		jboolean hasQueuedThreads();
		jboolean hasWaiters(__jni_impl::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0);
		jboolean isQueued(__jni_impl::java::lang::Thread arg0);
		jboolean owns(__jni_impl::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0);
		jboolean release(jint arg0);
		jboolean releaseShared(jint arg0);
		jstring toString();
		jboolean tryAcquireNanos(jint arg0, jlong arg1);
		jboolean tryAcquireSharedNanos(jint arg0, jlong arg1);
	};
} // namespace __jni_impl::java::util::concurrent::locks

#include "../../../lang/Thread.hpp"
#include "AbstractQueuedSynchronizer_ConditionObject.hpp"

namespace __jni_impl::java::util::concurrent::locks
{
	// Fields
	
	// Constructors
	void AbstractQueuedSynchronizer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.locks.AbstractQueuedSynchronizer",
			"(V)V");
	}
	
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
	jint AbstractQueuedSynchronizer::getWaitQueueLength(__jni_impl::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0)
	{
		return __thiz.callMethod<jint>(
			"getWaitQueueLength",
			"(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractQueuedSynchronizer::getWaitingThreads(__jni_impl::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0)
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
	jboolean AbstractQueuedSynchronizer::hasWaiters(__jni_impl::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasWaiters",
			"(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean AbstractQueuedSynchronizer::isQueued(__jni_impl::java::lang::Thread arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isQueued",
			"(Ljava/lang/Thread;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean AbstractQueuedSynchronizer::owns(__jni_impl::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0)
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
} // namespace __jni_impl::java::util::concurrent::locks

namespace java::util::concurrent::locks
{
	class AbstractQueuedSynchronizer : public __jni_impl::java::util::concurrent::locks::AbstractQueuedSynchronizer
	{
	public:
		AbstractQueuedSynchronizer(QAndroidJniObject obj) { __thiz = obj; }
		AbstractQueuedSynchronizer()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent::locks

