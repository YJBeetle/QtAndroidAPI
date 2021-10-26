#pragma once

#ifndef JAVA_UTIL_ARRAYDEQUE
#define JAVA_UTIL_ARRAYDEQUE

#include "../../__JniBaseClass.hpp"
#include "AbstractCollection.hpp"

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
	class ArrayDeque : public __jni_impl::java::util::AbstractCollection
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor();
		void __constructor(jint arg0);
		
		// Methods
		jboolean add(jobject arg0);
		jobject remove();
		jboolean remove(jobject arg0);
		QAndroidJniObject clone();
		void clear();
		jboolean isEmpty();
		jint size();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
		QAndroidJniObject iterator();
		jboolean contains(jobject arg0);
		QAndroidJniObject spliterator();
		jboolean addAll(__jni_impl::__JniBaseClass arg0);
		void forEach(__jni_impl::__JniBaseClass arg0);
		jobject poll();
		jobject peek();
		jboolean retainAll(__jni_impl::__JniBaseClass arg0);
		jboolean removeAll(__jni_impl::__JniBaseClass arg0);
		jboolean removeIf(__jni_impl::__JniBaseClass arg0);
		jobject element();
		void addLast(jobject arg0);
		jobject pollFirst();
		void push(jobject arg0);
		void addFirst(jobject arg0);
		jobject pollLast();
		jboolean offerLast(jobject arg0);
		jobject removeFirst();
		jobject getFirst();
		jobject peekFirst();
		jboolean removeFirstOccurrence(jobject arg0);
		jboolean offerFirst(jobject arg0);
		jobject removeLast();
		jobject getLast();
		jobject peekLast();
		jboolean removeLastOccurrence(jobject arg0);
		jboolean offer(jobject arg0);
		jobject pop();
		QAndroidJniObject descendingIterator();
	};
} // namespace __jni_impl::java::util

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void ArrayDeque::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.ArrayDeque",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	void ArrayDeque::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.ArrayDeque",
			"()V"
		);
	}
	void ArrayDeque::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.ArrayDeque",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jboolean ArrayDeque::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject ArrayDeque::remove()
	{
		return __thiz.callObjectMethod(
			"remove",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean ArrayDeque::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject ArrayDeque::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/util/ArrayDeque;"
		);
	}
	void ArrayDeque::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean ArrayDeque::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jint ArrayDeque::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	jobjectArray ArrayDeque::toArray()
	{
		return __thiz.callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jobjectArray ArrayDeque::toArray(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
	QAndroidJniObject ArrayDeque::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean ArrayDeque::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject ArrayDeque::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	jboolean ArrayDeque::addAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	void ArrayDeque::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object()
		);
	}
	jobject ArrayDeque::poll()
	{
		return __thiz.callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ArrayDeque::peek()
	{
		return __thiz.callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean ArrayDeque::retainAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ArrayDeque::removeAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ArrayDeque::removeIf(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.__jniObject().object()
		);
	}
	jobject ArrayDeque::element()
	{
		return __thiz.callObjectMethod(
			"element",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void ArrayDeque::addLast(jobject arg0)
	{
		__thiz.callMethod<void>(
			"addLast",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jobject ArrayDeque::pollFirst()
	{
		return __thiz.callObjectMethod(
			"pollFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void ArrayDeque::push(jobject arg0)
	{
		__thiz.callMethod<void>(
			"push",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void ArrayDeque::addFirst(jobject arg0)
	{
		__thiz.callMethod<void>(
			"addFirst",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jobject ArrayDeque::pollLast()
	{
		return __thiz.callObjectMethod(
			"pollLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean ArrayDeque::offerLast(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offerLast",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject ArrayDeque::removeFirst()
	{
		return __thiz.callObjectMethod(
			"removeFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ArrayDeque::getFirst()
	{
		return __thiz.callObjectMethod(
			"getFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ArrayDeque::peekFirst()
	{
		return __thiz.callObjectMethod(
			"peekFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean ArrayDeque::removeFirstOccurrence(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeFirstOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ArrayDeque::offerFirst(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offerFirst",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject ArrayDeque::removeLast()
	{
		return __thiz.callObjectMethod(
			"removeLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ArrayDeque::getLast()
	{
		return __thiz.callObjectMethod(
			"getLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ArrayDeque::peekLast()
	{
		return __thiz.callObjectMethod(
			"peekLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean ArrayDeque::removeLastOccurrence(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeLastOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ArrayDeque::offer(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject ArrayDeque::pop()
	{
		return __thiz.callObjectMethod(
			"pop",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject ArrayDeque::descendingIterator()
	{
		return __thiz.callObjectMethod(
			"descendingIterator",
			"()Ljava/util/Iterator;"
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class ArrayDeque : public __jni_impl::java::util::ArrayDeque
	{
	public:
		ArrayDeque(QAndroidJniObject obj) { __thiz = obj; }
		ArrayDeque(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		ArrayDeque()
		{
			__constructor();
		}
		ArrayDeque(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_ARRAYDEQUE

