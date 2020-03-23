#pragma once

#ifndef JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST
#define JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::lang::reflect
{
	class Field;
}

namespace __jni_impl::java::util::concurrent
{
	class CopyOnWriteArrayList : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor();
		void __constructor(jobjectArray arg0);
		
		// Methods
		jboolean add(jobject arg0);
		void add(jint arg0, jobject arg1);
		jboolean remove(jobject arg0);
		QAndroidJniObject remove(jint arg0);
		QAndroidJniObject get(jint arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject clone();
		jint indexOf(jobject arg0, jint arg1);
		jint indexOf(jobject arg0);
		void clear();
		jint lastIndexOf(jobject arg0, jint arg1);
		jint lastIndexOf(jobject arg0);
		jboolean isEmpty();
		void replaceAll(__jni_impl::__JniBaseClass arg0);
		jint size();
		QAndroidJniObject subList(jint arg0, jint arg1);
		QAndroidJniObject toArray(jobjectArray arg0);
		QAndroidJniObject toArray();
		QAndroidJniObject iterator();
		jboolean contains(jobject arg0);
		QAndroidJniObject spliterator();
		jboolean addAll(jint arg0, __jni_impl::__JniBaseClass arg1);
		jboolean addAll(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject set(jint arg0, jobject arg1);
		void forEach(__jni_impl::__JniBaseClass arg0);
		jboolean containsAll(__jni_impl::__JniBaseClass arg0);
		jboolean retainAll(__jni_impl::__JniBaseClass arg0);
		jboolean removeAll(__jni_impl::__JniBaseClass arg0);
		jboolean removeIf(__jni_impl::__JniBaseClass arg0);
		void sort(__jni_impl::__JniBaseClass arg0);
		jboolean addIfAbsent(jobject arg0);
		jint addAllAbsent(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject listIterator(jint arg0);
		QAndroidJniObject listIterator();
	};
} // namespace __jni_impl::java::util::concurrent

#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../../lang/reflect/Field.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void CopyOnWriteArrayList::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CopyOnWriteArrayList",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object());
	}
	void CopyOnWriteArrayList::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CopyOnWriteArrayList",
			"()V");
	}
	void CopyOnWriteArrayList::__constructor(jobjectArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CopyOnWriteArrayList",
			"([Ljava/lang/Object;)V",
			arg0);
	}
	
	// Methods
	jboolean CopyOnWriteArrayList::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	void CopyOnWriteArrayList::add(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"add",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1);
	}
	jboolean CopyOnWriteArrayList::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject CopyOnWriteArrayList::remove(jint arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(I)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject CopyOnWriteArrayList::get(jint arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0);
	}
	jboolean CopyOnWriteArrayList::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject CopyOnWriteArrayList::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint CopyOnWriteArrayList::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject CopyOnWriteArrayList::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	jint CopyOnWriteArrayList::indexOf(jobject arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;I)I",
			arg0,
			arg1);
	}
	jint CopyOnWriteArrayList::indexOf(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	void CopyOnWriteArrayList::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V");
	}
	jint CopyOnWriteArrayList::lastIndexOf(jobject arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/Object;I)I",
			arg0,
			arg1);
	}
	jint CopyOnWriteArrayList::lastIndexOf(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jboolean CopyOnWriteArrayList::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z");
	}
	void CopyOnWriteArrayList::replaceAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/UnaryOperator;)V",
			arg0.__jniObject().object());
	}
	jint CopyOnWriteArrayList::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I");
	}
	QAndroidJniObject CopyOnWriteArrayList::subList(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"subList",
			"(II)Ljava/util/List;",
			arg0,
			arg1);
	}
	QAndroidJniObject CopyOnWriteArrayList::toArray(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject CopyOnWriteArrayList::toArray()
	{
		return __thiz.callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;");
	}
	QAndroidJniObject CopyOnWriteArrayList::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;");
	}
	jboolean CopyOnWriteArrayList::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject CopyOnWriteArrayList::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;");
	}
	jboolean CopyOnWriteArrayList::addAll(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(ILjava/util/Collection;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean CopyOnWriteArrayList::addAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject CopyOnWriteArrayList::set(jint arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"set",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	void CopyOnWriteArrayList::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object());
	}
	jboolean CopyOnWriteArrayList::containsAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object());
	}
	jboolean CopyOnWriteArrayList::retainAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object());
	}
	jboolean CopyOnWriteArrayList::removeAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object());
	}
	jboolean CopyOnWriteArrayList::removeIf(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.__jniObject().object());
	}
	void CopyOnWriteArrayList::sort(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"sort",
			"(Ljava/util/Comparator;)V",
			arg0.__jniObject().object());
	}
	jboolean CopyOnWriteArrayList::addIfAbsent(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addIfAbsent",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint CopyOnWriteArrayList::addAllAbsent(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"addAllAbsent",
			"(Ljava/util/Collection;)I",
			arg0.__jniObject().object());
	}
	QAndroidJniObject CopyOnWriteArrayList::listIterator(jint arg0)
	{
		return __thiz.callObjectMethod(
			"listIterator",
			"(I)Ljava/util/ListIterator;",
			arg0);
	}
	QAndroidJniObject CopyOnWriteArrayList::listIterator()
	{
		return __thiz.callObjectMethod(
			"listIterator",
			"()Ljava/util/ListIterator;");
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class CopyOnWriteArrayList : public __jni_impl::java::util::concurrent::CopyOnWriteArrayList
	{
	public:
		CopyOnWriteArrayList(QAndroidJniObject obj) { __thiz = obj; }
		CopyOnWriteArrayList(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		CopyOnWriteArrayList()
		{
			__constructor();
		}
		CopyOnWriteArrayList(jobjectArray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST

