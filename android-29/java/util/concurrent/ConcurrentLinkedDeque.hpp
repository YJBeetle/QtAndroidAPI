#pragma once

#ifndef JAVA_UTIL_CONCURRENT_CONCURRENTLINKEDDEQUE
#define JAVA_UTIL_CONCURRENT_CONCURRENTLINKEDDEQUE

#include "../../../__JniBaseClass.hpp"
#include "../AbstractCollection.hpp"

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
	class ConcurrentLinkedDeque : public __jni_impl::java::util::AbstractCollection
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		jboolean add(jobject arg0);
		QAndroidJniObject remove();
		jboolean remove(jobject arg0);
		QAndroidJniObject toString();
		void clear();
		jboolean isEmpty();
		jint size();
		QAndroidJniObject toArray(jobjectArray arg0);
		QAndroidJniObject toArray();
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
		QAndroidJniObject element();
		void addLast(jobject arg0);
		QAndroidJniObject pollFirst();
		void push(jobject arg0);
		void addFirst(jobject arg0);
		QAndroidJniObject pollLast();
		jboolean offerLast(jobject arg0);
		QAndroidJniObject removeFirst();
		QAndroidJniObject getFirst();
		QAndroidJniObject peekFirst();
		jboolean removeFirstOccurrence(jobject arg0);
		jboolean offerFirst(jobject arg0);
		QAndroidJniObject removeLast();
		QAndroidJniObject getLast();
		QAndroidJniObject peekLast();
		jboolean removeLastOccurrence(jobject arg0);
		jboolean offer(jobject arg0);
		QAndroidJniObject pop();
		QAndroidJniObject descendingIterator();
	};
} // namespace __jni_impl::java::util::concurrent

#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void ConcurrentLinkedDeque::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ConcurrentLinkedDeque",
			"()V");
	}
	void ConcurrentLinkedDeque::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ConcurrentLinkedDeque",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean ConcurrentLinkedDeque::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject ConcurrentLinkedDeque::remove()
	{
		return __thiz.callObjectMethod(
			"remove",
			"()Ljava/lang/Object;");
	}
	jboolean ConcurrentLinkedDeque::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject ConcurrentLinkedDeque::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void ConcurrentLinkedDeque::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V");
	}
	jboolean ConcurrentLinkedDeque::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z");
	}
	jint ConcurrentLinkedDeque::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I");
	}
	QAndroidJniObject ConcurrentLinkedDeque::toArray(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject ConcurrentLinkedDeque::toArray()
	{
		return __thiz.callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;");
	}
	QAndroidJniObject ConcurrentLinkedDeque::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;");
	}
	jboolean ConcurrentLinkedDeque::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject ConcurrentLinkedDeque::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;");
	}
	jboolean ConcurrentLinkedDeque::addAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object());
	}
	void ConcurrentLinkedDeque::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ConcurrentLinkedDeque::poll()
	{
		return __thiz.callObjectMethod(
			"poll",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject ConcurrentLinkedDeque::peek()
	{
		return __thiz.callObjectMethod(
			"peek",
			"()Ljava/lang/Object;");
	}
	jboolean ConcurrentLinkedDeque::retainAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object());
	}
	jboolean ConcurrentLinkedDeque::removeAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object());
	}
	jboolean ConcurrentLinkedDeque::removeIf(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ConcurrentLinkedDeque::element()
	{
		return __thiz.callObjectMethod(
			"element",
			"()Ljava/lang/Object;");
	}
	void ConcurrentLinkedDeque::addLast(jobject arg0)
	{
		__thiz.callMethod<void>(
			"addLast",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	QAndroidJniObject ConcurrentLinkedDeque::pollFirst()
	{
		return __thiz.callObjectMethod(
			"pollFirst",
			"()Ljava/lang/Object;");
	}
	void ConcurrentLinkedDeque::push(jobject arg0)
	{
		__thiz.callMethod<void>(
			"push",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	void ConcurrentLinkedDeque::addFirst(jobject arg0)
	{
		__thiz.callMethod<void>(
			"addFirst",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	QAndroidJniObject ConcurrentLinkedDeque::pollLast()
	{
		return __thiz.callObjectMethod(
			"pollLast",
			"()Ljava/lang/Object;");
	}
	jboolean ConcurrentLinkedDeque::offerLast(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offerLast",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject ConcurrentLinkedDeque::removeFirst()
	{
		return __thiz.callObjectMethod(
			"removeFirst",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject ConcurrentLinkedDeque::getFirst()
	{
		return __thiz.callObjectMethod(
			"getFirst",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject ConcurrentLinkedDeque::peekFirst()
	{
		return __thiz.callObjectMethod(
			"peekFirst",
			"()Ljava/lang/Object;");
	}
	jboolean ConcurrentLinkedDeque::removeFirstOccurrence(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeFirstOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jboolean ConcurrentLinkedDeque::offerFirst(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offerFirst",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject ConcurrentLinkedDeque::removeLast()
	{
		return __thiz.callObjectMethod(
			"removeLast",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject ConcurrentLinkedDeque::getLast()
	{
		return __thiz.callObjectMethod(
			"getLast",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject ConcurrentLinkedDeque::peekLast()
	{
		return __thiz.callObjectMethod(
			"peekLast",
			"()Ljava/lang/Object;");
	}
	jboolean ConcurrentLinkedDeque::removeLastOccurrence(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeLastOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jboolean ConcurrentLinkedDeque::offer(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject ConcurrentLinkedDeque::pop()
	{
		return __thiz.callObjectMethod(
			"pop",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject ConcurrentLinkedDeque::descendingIterator()
	{
		return __thiz.callObjectMethod(
			"descendingIterator",
			"()Ljava/util/Iterator;");
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class ConcurrentLinkedDeque : public __jni_impl::java::util::concurrent::ConcurrentLinkedDeque
	{
	public:
		ConcurrentLinkedDeque(QAndroidJniObject obj) { __thiz = obj; }
		ConcurrentLinkedDeque()
		{
			__constructor();
		}
		ConcurrentLinkedDeque(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_CONCURRENTLINKEDDEQUE

