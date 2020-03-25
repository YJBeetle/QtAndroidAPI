#pragma once

#ifndef JAVA_UTIL_LINKEDLIST
#define JAVA_UTIL_LINKEDLIST

#include "../../__JniBaseClass.hpp"
#include "AbstractCollection.hpp"
#include "AbstractList.hpp"
#include "AbstractSequentialList.hpp"

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
	class LinkedList : public __jni_impl::java::util::AbstractSequentialList
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		jboolean add(jobject arg0);
		void add(jint arg0, jobject arg1);
		jboolean remove(jobject arg0);
		QAndroidJniObject remove();
		QAndroidJniObject remove(jint arg0);
		QAndroidJniObject get(jint arg0);
		QAndroidJniObject clone();
		jint indexOf(jobject arg0);
		void clear();
		jint lastIndexOf(jobject arg0);
		jint size();
		QAndroidJniObject toArray();
		QAndroidJniObject toArray(jobjectArray arg0);
		jboolean contains(jobject arg0);
		QAndroidJniObject spliterator();
		jboolean addAll(jint arg0, __jni_impl::__JniBaseClass arg1);
		jboolean addAll(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject set(jint arg0, jobject arg1);
		QAndroidJniObject poll();
		QAndroidJniObject peek();
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
		QAndroidJniObject listIterator(jint arg0);
	};
} // namespace __jni_impl::java::util

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void LinkedList::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.LinkedList",
			"()V");
	}
	void LinkedList::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.LinkedList",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean LinkedList::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	void LinkedList::add(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"add",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1);
	}
	jboolean LinkedList::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject LinkedList::remove()
	{
		return __thiz.callObjectMethod(
			"remove",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject LinkedList::remove(jint arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(I)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject LinkedList::get(jint arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject LinkedList::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	jint LinkedList::indexOf(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	void LinkedList::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V");
	}
	jint LinkedList::lastIndexOf(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jint LinkedList::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I");
	}
	QAndroidJniObject LinkedList::toArray()
	{
		return __thiz.callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;");
	}
	QAndroidJniObject LinkedList::toArray(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0);
	}
	jboolean LinkedList::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject LinkedList::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;");
	}
	jboolean LinkedList::addAll(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(ILjava/util/Collection;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean LinkedList::addAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject LinkedList::set(jint arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"set",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	QAndroidJniObject LinkedList::poll()
	{
		return __thiz.callObjectMethod(
			"poll",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject LinkedList::peek()
	{
		return __thiz.callObjectMethod(
			"peek",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject LinkedList::element()
	{
		return __thiz.callObjectMethod(
			"element",
			"()Ljava/lang/Object;");
	}
	void LinkedList::addLast(jobject arg0)
	{
		__thiz.callMethod<void>(
			"addLast",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	QAndroidJniObject LinkedList::pollFirst()
	{
		return __thiz.callObjectMethod(
			"pollFirst",
			"()Ljava/lang/Object;");
	}
	void LinkedList::push(jobject arg0)
	{
		__thiz.callMethod<void>(
			"push",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	void LinkedList::addFirst(jobject arg0)
	{
		__thiz.callMethod<void>(
			"addFirst",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	QAndroidJniObject LinkedList::pollLast()
	{
		return __thiz.callObjectMethod(
			"pollLast",
			"()Ljava/lang/Object;");
	}
	jboolean LinkedList::offerLast(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offerLast",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject LinkedList::removeFirst()
	{
		return __thiz.callObjectMethod(
			"removeFirst",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject LinkedList::getFirst()
	{
		return __thiz.callObjectMethod(
			"getFirst",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject LinkedList::peekFirst()
	{
		return __thiz.callObjectMethod(
			"peekFirst",
			"()Ljava/lang/Object;");
	}
	jboolean LinkedList::removeFirstOccurrence(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeFirstOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jboolean LinkedList::offerFirst(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offerFirst",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject LinkedList::removeLast()
	{
		return __thiz.callObjectMethod(
			"removeLast",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject LinkedList::getLast()
	{
		return __thiz.callObjectMethod(
			"getLast",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject LinkedList::peekLast()
	{
		return __thiz.callObjectMethod(
			"peekLast",
			"()Ljava/lang/Object;");
	}
	jboolean LinkedList::removeLastOccurrence(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeLastOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jboolean LinkedList::offer(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject LinkedList::pop()
	{
		return __thiz.callObjectMethod(
			"pop",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject LinkedList::descendingIterator()
	{
		return __thiz.callObjectMethod(
			"descendingIterator",
			"()Ljava/util/Iterator;");
	}
	QAndroidJniObject LinkedList::listIterator(jint arg0)
	{
		return __thiz.callObjectMethod(
			"listIterator",
			"(I)Ljava/util/ListIterator;",
			arg0);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class LinkedList : public __jni_impl::java::util::LinkedList
	{
	public:
		LinkedList(QAndroidJniObject obj) { __thiz = obj; }
		LinkedList()
		{
			__constructor();
		}
		LinkedList(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_LINKEDLIST

