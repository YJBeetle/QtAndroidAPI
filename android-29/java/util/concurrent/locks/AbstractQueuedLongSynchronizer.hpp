#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "./AbstractOwnableSynchronizer.hpp"

namespace __jni_impl::java::lang
{
	class Thread;
}
namespace __jni_impl::java::util::concurrent::locks
{
	class AbstractQueuedLongSynchronizer_ConditionObject;
}

namespace __jni_impl::java::util::concurrent::locks
{
	class AbstractQueuedLongSynchronizer : public __jni_impl::java::util::concurrent::locks::AbstractOwnableSynchronizer
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void acquire(jlong arg0);
		void acquireInterruptibly(jlong arg0);
		void acquireShared(jlong arg0);
		void acquireSharedInterruptibly(jlong arg0);
		QAndroidJniObject getExclusiveQueuedThreads();
		QAndroidJniObject getFirstQueuedThread();
		jint getQueueLength();
		QAndroidJniObject getQueuedThreads();
		QAndroidJniObject getSharedQueuedThreads();
		jint getWaitQueueLength(__jni_impl::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0);
		QAndroidJniObject getWaitingThreads(__jni_impl::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0);
		jboolean hasContended();
		jboolean hasQueuedPredecessors();
		jboolean hasQueuedThreads();
		jboolean hasWaiters(__jni_impl::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0);
		jboolean isQueued(__jni_impl::java::lang::Thread arg0);
		jboolean owns(__jni_impl::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0);
		jboolean release(jlong arg0);
		jboolean releaseShared(jlong arg0);
		jstring toString();
		jboolean tryAcquireNanos(jlong arg0, jlong arg1);
		jboolean tryAcquireSharedNanos(jlong arg0, jlong arg1);
	};
} // namespace __jni_impl::java::util::concurrent::locks

#include "../../../lang/Thread.hpp"
#include "./AbstractQueuedLongSynchronizer_ConditionObject.hpp"

namespace __jni_impl::java::util::concurrent::locks
{
	// Fields
	
	// Constructors
	void AbstractQueuedLongSynchronizer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.locks.AbstractQueuedLongSynchronizer",
			"()V"
		);
	}
	
	// Methods
	void AbstractQueuedLongSynchronizer::acquire(jlong arg0)
	{
		__thiz.callMethod<void>(
			"acquire",
			"(J)V",
			arg0
		);
	}
	void AbstractQueuedLongSynchronizer::acquireInterruptibly(jlong arg0)
	{
		__thiz.callMethod<void>(
			"acquireInterruptibly",
			"(J)V",
			arg0
		);
	}
	void AbstractQueuedLongSynchronizer::acquireShared(jlong arg0)
	{
		__thiz.callMethod<void>(
			"acquireShared",
			"(J)V",
			arg0
		);
	}
	void AbstractQueuedLongSynchronizer::acquireSharedInterruptibly(jlong arg0)
	{
		__thiz.callMethod<void>(
			"acquireSharedInterruptibly",
			"(J)V",
			arg0
		);
	}
	QAndroidJniObject AbstractQueuedLongSynchronizer::getExclusiveQueuedThreads()
	{
		return __thiz.callObjectMethod(
			"getExclusiveQueuedThreads",
			"()Ljava/util/Collection;"
		);
	}
	QAndroidJniObject AbstractQueuedLongSynchronizer::getFirstQueuedThread()
	{
		return __thiz.callObjectMethod(
			"getFirstQueuedThread",
			"()Ljava/lang/Thread;"
		);
	}
	jint AbstractQueuedLongSynchronizer::getQueueLength()
	{
		return __thiz.callMethod<jint>(
			"getQueueLength",
			"()I"
		);
	}
	QAndroidJniObject AbstractQueuedLongSynchronizer::getQueuedThreads()
	{
		return __thiz.callObjectMethod(
			"getQueuedThreads",
			"()Ljava/util/Collection;"
		);
	}
	QAndroidJniObject AbstractQueuedLongSynchronizer::getSharedQueuedThreads()
	{
		return __thiz.callObjectMethod(
			"getSharedQueuedThreads",
			"()Ljava/util/Collection;"
		);
	}
	jint AbstractQueuedLongSynchronizer::getWaitQueueLength(__jni_impl::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0)
	{
		return __thiz.callMethod<jint>(
			"getWaitQueueLength",
			"(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractQueuedLongSynchronizer::getWaitingThreads(__jni_impl::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0)
	{
		return __thiz.callObjectMethod(
			"getWaitingThreads",
			"(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
	jboolean AbstractQueuedLongSynchronizer::hasContended()
	{
		return __thiz.callMethod<jboolean>(
			"hasContended",
			"()Z"
		);
	}
	jboolean AbstractQueuedLongSynchronizer::hasQueuedPredecessors()
	{
		return __thiz.callMethod<jboolean>(
			"hasQueuedPredecessors",
			"()Z"
		);
	}
	jboolean AbstractQueuedLongSynchronizer::hasQueuedThreads()
	{
		return __thiz.callMethod<jboolean>(
			"hasQueuedThreads",
			"()Z"
		);
	}
	jboolean AbstractQueuedLongSynchronizer::hasWaiters(__jni_impl::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasWaiters",
			"(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean AbstractQueuedLongSynchronizer::isQueued(__jni_impl::java::lang::Thread arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isQueued",
			"(Ljava/lang/Thread;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean AbstractQueuedLongSynchronizer::owns(__jni_impl::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"owns",
			"(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer$ConditionObject;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean AbstractQueuedLongSynchronizer::release(jlong arg0)
	{
		return __thiz.callMethod<jboolean>(
			"release",
			"(J)Z",
			arg0
		);
	}
	jboolean AbstractQueuedLongSynchronizer::releaseShared(jlong arg0)
	{
		return __thiz.callMethod<jboolean>(
			"releaseShared",
			"(J)Z",
			arg0
		);
	}
	jstring AbstractQueuedLongSynchronizer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean AbstractQueuedLongSynchronizer::tryAcquireNanos(jlong arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"tryAcquireNanos",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
	jboolean AbstractQueuedLongSynchronizer::tryAcquireSharedNanos(jlong arg0, jlong arg1)
	{
		return __thiz.callMethod<jboolean>(
			"tryAcquireSharedNanos",
			"(JJ)Z",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::java::util::concurrent::locks

namespace java::util::concurrent::locks
{
	class AbstractQueuedLongSynchronizer : public __jni_impl::java::util::concurrent::locks::AbstractQueuedLongSynchronizer
	{
	public:
		AbstractQueuedLongSynchronizer(QAndroidJniObject obj) { __thiz = obj; }
		AbstractQueuedLongSynchronizer()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent::locks

