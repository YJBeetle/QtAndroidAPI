#pragma once

#ifndef JAVA_UTIL_CONCURRENT_CONCURRENTLINKEDQUEUE
#define JAVA_UTIL_CONCURRENT_CONCURRENTLINKEDQUEUE

#include "../AbstractQueue.hpp"

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
	class ConcurrentLinkedQueue : public __jni_impl::java::util::AbstractQueue
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		jboolean add(jobject arg0);
		jboolean remove(jobject arg0);
		QAndroidJniObject toString();
		void clear();
		jboolean isEmpty();
		jint size();
		QAndroidJniObject toArray();
		QAndroidJniObject toArray(jobjectArray arg0);
		QAndroidJniObject iterator();
		jboolean contains(jobject arg0);
		QAndroidJniObject spliterator();
		jboolean addAll(__jni_impl::__JniBaseClass arg0);
		void forEach(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject poll();
		QAndroidJniObject peek();
		jboolean retainAll(__jni_impl::__JniBaseClass arg0);
		jboolean removeAll(__jni_impl::__JniBaseClass arg0);
		jboolean removeIf(__jni_impl::__JniBaseClass arg0);
		jboolean offer(jobject arg0);
	};
} // namespace __jni_impl::java::util::concurrent

#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void ConcurrentLinkedQueue::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ConcurrentLinkedQueue",
			"()V");
	}
	void ConcurrentLinkedQueue::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ConcurrentLinkedQueue",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean ConcurrentLinkedQueue::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jboolean ConcurrentLinkedQueue::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject ConcurrentLinkedQueue::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void ConcurrentLinkedQueue::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V");
	}
	jboolean ConcurrentLinkedQueue::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z");
	}
	jint ConcurrentLinkedQueue::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I");
	}
	QAndroidJniObject ConcurrentLinkedQueue::toArray()
	{
		return __thiz.callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;");
	}
	QAndroidJniObject ConcurrentLinkedQueue::toArray(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject ConcurrentLinkedQueue::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;");
	}
	jboolean ConcurrentLinkedQueue::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject ConcurrentLinkedQueue::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;");
	}
	jboolean ConcurrentLinkedQueue::addAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object());
	}
	void ConcurrentLinkedQueue::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ConcurrentLinkedQueue::poll()
	{
		return __thiz.callObjectMethod(
			"poll",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject ConcurrentLinkedQueue::peek()
	{
		return __thiz.callObjectMethod(
			"peek",
			"()Ljava/lang/Object;");
	}
	jboolean ConcurrentLinkedQueue::retainAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object());
	}
	jboolean ConcurrentLinkedQueue::removeAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object());
	}
	jboolean ConcurrentLinkedQueue::removeIf(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.__jniObject().object());
	}
	jboolean ConcurrentLinkedQueue::offer(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class ConcurrentLinkedQueue : public __jni_impl::java::util::concurrent::ConcurrentLinkedQueue
	{
	public:
		ConcurrentLinkedQueue(QAndroidJniObject obj) { __thiz = obj; }
		ConcurrentLinkedQueue()
		{
			__constructor();
		}
		ConcurrentLinkedQueue(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_CONCURRENTLINKEDQUEUE

