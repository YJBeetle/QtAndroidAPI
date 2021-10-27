#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../AbstractCollection.hpp"
#include "../AbstractQueue.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
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
	class PriorityBlockingQueue : public __jni_impl::java::util::AbstractQueue
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(jint arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		jboolean add(jobject arg0);
		void clear();
		QAndroidJniObject comparator();
		jboolean contains(jobject arg0);
		jint drainTo(__jni_impl::__JniBaseClass arg0);
		jint drainTo(__jni_impl::__JniBaseClass arg0, jint arg1);
		void forEach(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject iterator();
		jboolean offer(jobject arg0);
		jboolean offer(jobject arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2);
		jobject peek();
		jobject poll();
		jobject poll(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		void put(jobject arg0);
		jint remainingCapacity();
		jboolean remove(jobject arg0);
		jboolean removeAll(__jni_impl::__JniBaseClass arg0);
		jboolean removeIf(__jni_impl::__JniBaseClass arg0);
		jboolean retainAll(__jni_impl::__JniBaseClass arg0);
		jint size();
		QAndroidJniObject spliterator();
		jobject take();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
		jstring toString();
	};
} // namespace __jni_impl::java::util::concurrent

#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../PriorityQueue.hpp"
#include "TimeUnit.hpp"
#include "locks/ReentrantLock.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void PriorityBlockingQueue::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.PriorityBlockingQueue",
			"()V"
		);
	}
	void PriorityBlockingQueue::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.PriorityBlockingQueue",
			"(I)V",
			arg0
		);
	}
	void PriorityBlockingQueue::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.PriorityBlockingQueue",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	void PriorityBlockingQueue::__constructor(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.PriorityBlockingQueue",
			"(ILjava/util/Comparator;)V",
			arg0,
			arg1.__jniObject().object()
		);
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
	void PriorityBlockingQueue::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	QAndroidJniObject PriorityBlockingQueue::comparator()
	{
		return __thiz.callObjectMethod(
			"comparator",
			"()Ljava/util/Comparator;"
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
	jint PriorityBlockingQueue::drainTo(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;)I",
			arg0.__jniObject().object()
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
	void PriorityBlockingQueue::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PriorityBlockingQueue::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
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
	jobject PriorityBlockingQueue::peek()
	{
		return __thiz.callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		).object<jobject>();
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
	void PriorityBlockingQueue::put(jobject arg0)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jint PriorityBlockingQueue::remainingCapacity()
	{
		return __thiz.callMethod<jint>(
			"remainingCapacity",
			"()I"
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
	jboolean PriorityBlockingQueue::retainAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jint PriorityBlockingQueue::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject PriorityBlockingQueue::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	jobject PriorityBlockingQueue::take()
	{
		return __thiz.callObjectMethod(
			"take",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobjectArray PriorityBlockingQueue::toArray()
	{
		return __thiz.callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jobjectArray PriorityBlockingQueue::toArray(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
	jstring PriorityBlockingQueue::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class PriorityBlockingQueue : public __jni_impl::java::util::concurrent::PriorityBlockingQueue
	{
	public:
		PriorityBlockingQueue(QAndroidJniObject obj) { __thiz = obj; }
		PriorityBlockingQueue()
		{
			__constructor();
		}
		PriorityBlockingQueue(jint arg0)
		{
			__constructor(
				arg0);
		}
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
	};
} // namespace java::util::concurrent

