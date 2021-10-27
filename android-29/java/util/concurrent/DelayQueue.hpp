#pragma once

#ifndef JAVA_UTIL_CONCURRENT_DELAYQUEUE
#define JAVA_UTIL_CONCURRENT_DELAYQUEUE

#include "../../../__JniBaseClass.hpp"
#include "../AbstractCollection.hpp"
#include "../AbstractQueue.hpp"

namespace __jni_impl::java::lang
{
	class Thread;
}
namespace __jni_impl::java::util
{
	class PriorityQueue;
}
namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}
namespace __jni_impl::java::util::concurrent::locks
{
	class ReentrantLock;
}

namespace __jni_impl::java::util::concurrent
{
	class DelayQueue : public __jni_impl::java::util::AbstractQueue
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		jboolean add(jobject arg0);
		jboolean add(__jni_impl::__JniBaseClass arg0);
		void clear();
		jint drainTo(__jni_impl::__JniBaseClass arg0);
		jint drainTo(__jni_impl::__JniBaseClass arg0, jint arg1);
		QAndroidJniObject iterator();
		jboolean offer(jobject arg0);
		jboolean offer(__jni_impl::__JniBaseClass arg0);
		jboolean offer(jobject arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2);
		jboolean offer(__jni_impl::__JniBaseClass arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2);
		QAndroidJniObject peek();
		QAndroidJniObject poll();
		QAndroidJniObject poll(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		void put(jobject arg0);
		void put(__jni_impl::__JniBaseClass arg0);
		jint remainingCapacity();
		jboolean remove(jobject arg0);
		jint size();
		QAndroidJniObject take();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
	};
} // namespace __jni_impl::java::util::concurrent

#include "../../lang/Thread.hpp"
#include "../PriorityQueue.hpp"
#include "TimeUnit.hpp"
#include "locks/ReentrantLock.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void DelayQueue::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.DelayQueue",
			"()V"
		);
	}
	void DelayQueue::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.DelayQueue",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean DelayQueue::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean DelayQueue::add(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/util/concurrent/Delayed;)Z",
			arg0.__jniObject().object()
		);
	}
	void DelayQueue::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint DelayQueue::drainTo(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;)I",
			arg0.__jniObject().object()
		);
	}
	jint DelayQueue::drainTo(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DelayQueue::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean DelayQueue::offer(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean DelayQueue::offer(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offer",
			"(Ljava/util/concurrent/Delayed;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean DelayQueue::offer(jobject arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2)
	{
		return __thiz.callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean DelayQueue::offer(__jni_impl::__JniBaseClass arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2)
	{
		return __thiz.callMethod<jboolean>(
			"offer",
			"(Ljava/util/concurrent/Delayed;JLjava/util/concurrent/TimeUnit;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject DelayQueue::peek()
	{
		return __thiz.callObjectMethod(
			"peek",
			"()Ljava/util/concurrent/Delayed;"
		);
	}
	QAndroidJniObject DelayQueue::poll()
	{
		return __thiz.callObjectMethod(
			"poll",
			"()Ljava/util/concurrent/Delayed;"
		);
	}
	QAndroidJniObject DelayQueue::poll(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callObjectMethod(
			"poll",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Delayed;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void DelayQueue::put(jobject arg0)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void DelayQueue::put(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/util/concurrent/Delayed;)V",
			arg0.__jniObject().object()
		);
	}
	jint DelayQueue::remainingCapacity()
	{
		return __thiz.callMethod<jint>(
			"remainingCapacity",
			"()I"
		);
	}
	jboolean DelayQueue::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint DelayQueue::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject DelayQueue::take()
	{
		return __thiz.callObjectMethod(
			"take",
			"()Ljava/util/concurrent/Delayed;"
		);
	}
	jobjectArray DelayQueue::toArray()
	{
		return __thiz.callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jobjectArray DelayQueue::toArray(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class DelayQueue : public __jni_impl::java::util::concurrent::DelayQueue
	{
	public:
		DelayQueue(QAndroidJniObject obj) { __thiz = obj; }
		DelayQueue()
		{
			__constructor();
		}
		DelayQueue(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_DELAYQUEUE

