#pragma once

#ifndef JAVA_UTIL_PRIORITYQUEUE
#define JAVA_UTIL_PRIORITYQUEUE

#include "../../__JniBaseClass.hpp"
#include "AbstractCollection.hpp"
#include "AbstractQueue.hpp"

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
	class PriorityQueue : public __jni_impl::java::util::AbstractQueue
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(__jni_impl::java::util::PriorityQueue arg0);
		void __constructor();
		void __constructor(jint arg0);
		
		// Methods
		jboolean add(jobject arg0);
		jboolean remove(jobject arg0);
		void clear();
		jint size();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
		QAndroidJniObject iterator();
		jboolean contains(jobject arg0);
		QAndroidJniObject spliterator();
		void forEach(__jni_impl::__JniBaseClass arg0);
		jobject poll();
		jobject peek();
		QAndroidJniObject comparator();
		jboolean retainAll(__jni_impl::__JniBaseClass arg0);
		jboolean removeAll(__jni_impl::__JniBaseClass arg0);
		jboolean removeIf(__jni_impl::__JniBaseClass arg0);
		jboolean offer(jobject arg0);
	};
} // namespace __jni_impl::java::util

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void PriorityQueue::__constructor(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.PriorityQueue",
			"(ILjava/util/Comparator;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void PriorityQueue::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.PriorityQueue",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object());
	}
	void PriorityQueue::__constructor(__jni_impl::java::util::PriorityQueue arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.PriorityQueue",
			"(Ljava/util/PriorityQueue;)V",
			arg0.__jniObject().object());
	}
	void PriorityQueue::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.PriorityQueue",
			"()V");
	}
	void PriorityQueue::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.PriorityQueue",
			"(I)V",
			arg0);
	}
	
	// Methods
	jboolean PriorityQueue::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean PriorityQueue::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void PriorityQueue::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint PriorityQueue::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	jobjectArray PriorityQueue::toArray()
	{
		return __thiz.callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jobjectArray PriorityQueue::toArray(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
	QAndroidJniObject PriorityQueue::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean PriorityQueue::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject PriorityQueue::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	void PriorityQueue::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object()
		);
	}
	jobject PriorityQueue::poll()
	{
		return __thiz.callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject PriorityQueue::peek()
	{
		return __thiz.callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject PriorityQueue::comparator()
	{
		return __thiz.callObjectMethod(
			"comparator",
			"()Ljava/util/Comparator;"
		);
	}
	jboolean PriorityQueue::retainAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean PriorityQueue::removeAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean PriorityQueue::removeIf(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean PriorityQueue::offer(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class PriorityQueue : public __jni_impl::java::util::PriorityQueue
	{
	public:
		PriorityQueue(QAndroidJniObject obj) { __thiz = obj; }
		PriorityQueue(jint arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PriorityQueue(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		PriorityQueue(__jni_impl::java::util::PriorityQueue arg0)
		{
			__constructor(
				arg0);
		}
		PriorityQueue()
		{
			__constructor();
		}
		PriorityQueue(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_PRIORITYQUEUE

