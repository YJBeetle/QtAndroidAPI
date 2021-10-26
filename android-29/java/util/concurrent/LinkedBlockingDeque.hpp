#pragma once

#ifndef JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE
#define JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE

#include "../../../__JniBaseClass.hpp"
#include "../AbstractCollection.hpp"
#include "../AbstractQueue.hpp"

namespace __jni_impl::java::util::concurrent::locks
{
	class ReentrantLock;
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
	class LinkedBlockingDeque : public __jni_impl::java::util::AbstractQueue
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(jint arg0);
		void __constructor();
		
		// Methods
		jboolean add(jobject arg0);
		jobject remove();
		jboolean remove(jobject arg0);
		void put(jobject arg0);
		jstring toString();
		void clear();
		jint size();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
		QAndroidJniObject iterator();
		jboolean contains(jobject arg0);
		QAndroidJniObject spliterator();
		jboolean addAll(__jni_impl::__JniBaseClass arg0);
		void forEach(__jni_impl::__JniBaseClass arg0);
		jobject poll();
		jobject poll(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		jobject peek();
		jboolean retainAll(__jni_impl::__JniBaseClass arg0);
		jboolean removeAll(__jni_impl::__JniBaseClass arg0);
		jboolean removeIf(__jni_impl::__JniBaseClass arg0);
		jobject element();
		void addLast(jobject arg0);
		jobject pollFirst();
		jobject pollFirst(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		void push(jobject arg0);
		jobject take();
		void addFirst(jobject arg0);
		jobject pollLast(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		jobject pollLast();
		jboolean offerLast(jobject arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2);
		jboolean offerLast(jobject arg0);
		jobject removeFirst();
		jobject getFirst();
		jobject peekFirst();
		jboolean removeFirstOccurrence(jobject arg0);
		jboolean offerFirst(jobject arg0);
		jboolean offerFirst(jobject arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2);
		jobject removeLast();
		jobject getLast();
		jobject peekLast();
		jboolean removeLastOccurrence(jobject arg0);
		jboolean offer(jobject arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2);
		jboolean offer(jobject arg0);
		jobject pop();
		QAndroidJniObject descendingIterator();
		jint remainingCapacity();
		jint drainTo(__jni_impl::__JniBaseClass arg0, jint arg1);
		jint drainTo(__jni_impl::__JniBaseClass arg0);
		void putFirst(jobject arg0);
		void putLast(jobject arg0);
		jobject takeFirst();
		jobject takeLast();
	};
} // namespace __jni_impl::java::util::concurrent

#include "locks/ReentrantLock.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "TimeUnit.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void LinkedBlockingDeque::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.LinkedBlockingDeque",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	void LinkedBlockingDeque::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.LinkedBlockingDeque",
			"(I)V",
			arg0
		);
	}
	void LinkedBlockingDeque::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.LinkedBlockingDeque",
			"()V"
		);
	}
	
	// Methods
	jboolean LinkedBlockingDeque::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject LinkedBlockingDeque::remove()
	{
		return __thiz.callObjectMethod(
			"remove",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean LinkedBlockingDeque::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void LinkedBlockingDeque::put(jobject arg0)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jstring LinkedBlockingDeque::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void LinkedBlockingDeque::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint LinkedBlockingDeque::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	jobjectArray LinkedBlockingDeque::toArray()
	{
		return __thiz.callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jobjectArray LinkedBlockingDeque::toArray(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
	QAndroidJniObject LinkedBlockingDeque::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean LinkedBlockingDeque::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject LinkedBlockingDeque::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	jboolean LinkedBlockingDeque::addAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	void LinkedBlockingDeque::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object()
		);
	}
	jobject LinkedBlockingDeque::poll()
	{
		return __thiz.callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedBlockingDeque::poll(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callObjectMethod(
			"poll",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject LinkedBlockingDeque::peek()
	{
		return __thiz.callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean LinkedBlockingDeque::retainAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean LinkedBlockingDeque::removeAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean LinkedBlockingDeque::removeIf(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.__jniObject().object()
		);
	}
	jobject LinkedBlockingDeque::element()
	{
		return __thiz.callObjectMethod(
			"element",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void LinkedBlockingDeque::addLast(jobject arg0)
	{
		__thiz.callMethod<void>(
			"addLast",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jobject LinkedBlockingDeque::pollFirst()
	{
		return __thiz.callObjectMethod(
			"pollFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedBlockingDeque::pollFirst(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callObjectMethod(
			"pollFirst",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	void LinkedBlockingDeque::push(jobject arg0)
	{
		__thiz.callMethod<void>(
			"push",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jobject LinkedBlockingDeque::take()
	{
		return __thiz.callObjectMethod(
			"take",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void LinkedBlockingDeque::addFirst(jobject arg0)
	{
		__thiz.callMethod<void>(
			"addFirst",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jobject LinkedBlockingDeque::pollLast(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callObjectMethod(
			"pollLast",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject LinkedBlockingDeque::pollLast()
	{
		return __thiz.callObjectMethod(
			"pollLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean LinkedBlockingDeque::offerLast(jobject arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2)
	{
		return __thiz.callMethod<jboolean>(
			"offerLast",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean LinkedBlockingDeque::offerLast(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offerLast",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject LinkedBlockingDeque::removeFirst()
	{
		return __thiz.callObjectMethod(
			"removeFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedBlockingDeque::getFirst()
	{
		return __thiz.callObjectMethod(
			"getFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedBlockingDeque::peekFirst()
	{
		return __thiz.callObjectMethod(
			"peekFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean LinkedBlockingDeque::removeFirstOccurrence(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeFirstOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean LinkedBlockingDeque::offerFirst(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offerFirst",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean LinkedBlockingDeque::offerFirst(jobject arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2)
	{
		return __thiz.callMethod<jboolean>(
			"offerFirst",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jobject LinkedBlockingDeque::removeLast()
	{
		return __thiz.callObjectMethod(
			"removeLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedBlockingDeque::getLast()
	{
		return __thiz.callObjectMethod(
			"getLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedBlockingDeque::peekLast()
	{
		return __thiz.callObjectMethod(
			"peekLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean LinkedBlockingDeque::removeLastOccurrence(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeLastOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean LinkedBlockingDeque::offer(jobject arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2)
	{
		return __thiz.callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean LinkedBlockingDeque::offer(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject LinkedBlockingDeque::pop()
	{
		return __thiz.callObjectMethod(
			"pop",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject LinkedBlockingDeque::descendingIterator()
	{
		return __thiz.callObjectMethod(
			"descendingIterator",
			"()Ljava/util/Iterator;"
		);
	}
	jint LinkedBlockingDeque::remainingCapacity()
	{
		return __thiz.callMethod<jint>(
			"remainingCapacity",
			"()I"
		);
	}
	jint LinkedBlockingDeque::drainTo(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint LinkedBlockingDeque::drainTo(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"drainTo",
			"(Ljava/util/Collection;)I",
			arg0.__jniObject().object()
		);
	}
	void LinkedBlockingDeque::putFirst(jobject arg0)
	{
		__thiz.callMethod<void>(
			"putFirst",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void LinkedBlockingDeque::putLast(jobject arg0)
	{
		__thiz.callMethod<void>(
			"putLast",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jobject LinkedBlockingDeque::takeFirst()
	{
		return __thiz.callObjectMethod(
			"takeFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject LinkedBlockingDeque::takeLast()
	{
		return __thiz.callObjectMethod(
			"takeLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class LinkedBlockingDeque : public __jni_impl::java::util::concurrent::LinkedBlockingDeque
	{
	public:
		LinkedBlockingDeque(QAndroidJniObject obj) { __thiz = obj; }
		LinkedBlockingDeque(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		LinkedBlockingDeque(jint arg0)
		{
			__constructor(
				arg0);
		}
		LinkedBlockingDeque()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE

