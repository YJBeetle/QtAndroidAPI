#pragma once

#ifndef JAVA_UTIL_CONCURRENT_PRIORITYBLOCKINGQUEUE
#define JAVA_UTIL_CONCURRENT_PRIORITYBLOCKINGQUEUE

#include "../../../__JniBaseClass.hpp"
#include "../AbstractCollection.hpp"
#include "../AbstractQueue.hpp"

namespace __jni_impl::java::util::concurrent::locks
{
	class ReentrantLock;
}
namespace __jni_impl::java::util
{
	class PriorityQueue;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}

namespace __jni_impl::java::util::concurrent
{
	class PriorityBlockingQueue : public __jni_impl::java::util::AbstractQueue
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(jint arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(jint arg0);
		void __constructor();
		
		// Methods
		jboolean add(jobject arg0);
		jboolean remove(jobject arg0);
		void put(jobject arg0);
		jstring toString();
		void clear();
		jint size();
		jobjectArray toArray(jobjectArray arg0);
		jobjectArray toArray();
		QAndroidJniObject iterator();
		jboolean contains(jobject arg0);
		QAndroidJniObject spliterator();
		void forEach(__jni_impl::__JniBaseClass arg0);
		jobject poll();
		jobject poll(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		jobject peek();
		QAndroidJniObject comparator();
		jboolean retainAll(__jni_impl::__JniBaseClass arg0);
		jboolean removeAll(__jni_impl::__JniBaseClass arg0);
		jboolean removeIf(__jni_impl::__JniBaseClass arg0);
		jobject take();
		jboolean offer(jobject arg0);
		jboolean offer(jobject arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2);
		jint remainingCapacity();
		jint drainTo(__jni_impl::__JniBaseClass arg0, jint arg1);
		jint drainTo(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::util::concurrent

#include "locks/ReentrantLock.hpp"
#include "../PriorityQueue.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "TimeUnit.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void PriorityBlockingQueue::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.PriorityBlockingQueue",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object());
	}
	void PriorityBlockingQueue::__constructor(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.PriorityBlockingQueue",
			"(ILjava/util/Comparator;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void PriorityBlockingQueue::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.PriorityBlockingQueue",
			"(I)V",
			arg0);
	}
	void PriorityBlockingQueue::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.PriorityBlockingQueue",
			"()V");
	}
	
	// Methods
	jboolean PriorityBlockingQueue::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean PriorityBlockingQueue::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void PriorityBlockingQueue::put(jobject arg0)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jstring PriorityBlockingQueue::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PriorityBlockingQueue::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint PriorityBlockingQueue::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	jobjectArray PriorityBlockingQueue::toArray(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
	jobjectArray PriorityBlockingQueue::toArray()
	{
		return __thiz.callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	QAndroidJniObject PriorityBlockingQueue::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean PriorityBlockingQueue::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject PriorityBlockingQueue::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	void PriorityBlockingQueue::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object()
		);
	}
	jobject PriorityBlockingQueue::poll()
	{
		return __thiz.callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject PriorityBlockingQueue::poll(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callObjectMethod(
			"poll",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject PriorityBlockingQueue::peek()
	{
		return __thiz.callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject PriorityBlockingQueue::comparator()
	{
		return __thiz.callObjectMethod(
			"comparator",
			"()Ljava/util/Comparator;"
		);
	}
	jboolean PriorityBlockingQueue::retainAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean PriorityBlockingQueue::removeAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean PriorityBlockingQueue::removeIf(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.__jniObject().object()
		);
	}
	jobject PriorityBlockingQueue::take()
	{
		return __thiz.callObjectMethod(
			"take",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean PriorityBlockingQueue::offer(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean PriorityBlockingQueue::offer(jobject arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2)
	{
		return __thiz.callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint PriorityBlockingQueue::remainingCapacity()
	{
		return __thiz.callMethod<jint>(
			"remainingCapacity",
			"()I"
		);
	}
	jint PriorityBlockingQueue::drainTo(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint PriorityBlockingQueue::drainTo(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;)I",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class PriorityBlockingQueue : public __jni_impl::java::util::concurrent::PriorityBlockingQueue
	{
	public:
		PriorityBlockingQueue(QAndroidJniObject obj) { __thiz = obj; }
		PriorityBlockingQueue(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		PriorityBlockingQueue(jint arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PriorityBlockingQueue(jint arg0)
		{
			__constructor(
				arg0);
		}
		PriorityBlockingQueue()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_PRIORITYBLOCKINGQUEUE

