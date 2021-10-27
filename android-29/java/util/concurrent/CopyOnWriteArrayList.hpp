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
		void __constructor();
		void __constructor(jobjectArray arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		jboolean add(jobject arg0);
		void add(jint arg0, jobject arg1);
		jboolean addAll(__jni_impl::__JniBaseClass arg0);
		jboolean addAll(jint arg0, __jni_impl::__JniBaseClass arg1);
		jint addAllAbsent(__jni_impl::__JniBaseClass arg0);
		jboolean addIfAbsent(jobject arg0);
		void clear();
		jobject clone();
		jboolean contains(jobject arg0);
		jboolean containsAll(__jni_impl::__JniBaseClass arg0);
		jboolean equals(jobject arg0);
		void forEach(__jni_impl::__JniBaseClass arg0);
		jobject get(jint arg0);
		jint hashCode();
		jint indexOf(jobject arg0);
		jint indexOf(jobject arg0, jint arg1);
		jboolean isEmpty();
		QAndroidJniObject iterator();
		jint lastIndexOf(jobject arg0);
		jint lastIndexOf(jobject arg0, jint arg1);
		QAndroidJniObject listIterator();
		QAndroidJniObject listIterator(jint arg0);
		jboolean remove(jobject arg0);
		jobject remove(jint arg0);
		jboolean removeAll(__jni_impl::__JniBaseClass arg0);
		jboolean removeIf(__jni_impl::__JniBaseClass arg0);
		void replaceAll(__jni_impl::__JniBaseClass arg0);
		jboolean retainAll(__jni_impl::__JniBaseClass arg0);
		jobject set(jint arg0, jobject arg1);
		jint size();
		void sort(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject spliterator();
		QAndroidJniObject subList(jint arg0, jint arg1);
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
		jstring toString();
	};
} // namespace __jni_impl::java::util::concurrent

#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../../lang/reflect/Field.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void CopyOnWriteArrayList::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CopyOnWriteArrayList",
			"()V"
		);
	}
	void CopyOnWriteArrayList::__constructor(jobjectArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CopyOnWriteArrayList",
			"([Ljava/lang/Object;)V",
			arg0
		);
	}
	void CopyOnWriteArrayList::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CopyOnWriteArrayList",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean CopyOnWriteArrayList::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void CopyOnWriteArrayList::add(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"add",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	jboolean CopyOnWriteArrayList::addAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean CopyOnWriteArrayList::addAll(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(ILjava/util/Collection;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint CopyOnWriteArrayList::addAllAbsent(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"addAllAbsent",
			"(Ljava/util/Collection;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean CopyOnWriteArrayList::addIfAbsent(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addIfAbsent",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void CopyOnWriteArrayList::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject CopyOnWriteArrayList::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean CopyOnWriteArrayList::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean CopyOnWriteArrayList::containsAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean CopyOnWriteArrayList::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void CopyOnWriteArrayList::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object()
		);
	}
	jobject CopyOnWriteArrayList::get(jint arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint CopyOnWriteArrayList::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint CopyOnWriteArrayList::indexOf(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint CopyOnWriteArrayList::indexOf(jobject arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;I)I",
			arg0,
			arg1
		);
	}
	jboolean CopyOnWriteArrayList::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	QAndroidJniObject CopyOnWriteArrayList::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jint CopyOnWriteArrayList::lastIndexOf(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint CopyOnWriteArrayList::lastIndexOf(jobject arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/Object;I)I",
			arg0,
			arg1
		);
	}
	QAndroidJniObject CopyOnWriteArrayList::listIterator()
	{
		return __thiz.callObjectMethod(
			"listIterator",
			"()Ljava/util/ListIterator;"
		);
	}
	QAndroidJniObject CopyOnWriteArrayList::listIterator(jint arg0)
	{
		return __thiz.callObjectMethod(
			"listIterator",
			"(I)Ljava/util/ListIterator;",
			arg0
		);
	}
	jboolean CopyOnWriteArrayList::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject CopyOnWriteArrayList::remove(jint arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean CopyOnWriteArrayList::removeAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean CopyOnWriteArrayList::removeIf(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.__jniObject().object()
		);
	}
	void CopyOnWriteArrayList::replaceAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/UnaryOperator;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean CopyOnWriteArrayList::retainAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jobject CopyOnWriteArrayList::set(jint arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"set",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jint CopyOnWriteArrayList::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	void CopyOnWriteArrayList::sort(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"sort",
			"(Ljava/util/Comparator;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CopyOnWriteArrayList::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	QAndroidJniObject CopyOnWriteArrayList::subList(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"subList",
			"(II)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	jobjectArray CopyOnWriteArrayList::toArray()
	{
		return __thiz.callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jobjectArray CopyOnWriteArrayList::toArray(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
	jstring CopyOnWriteArrayList::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class CopyOnWriteArrayList : public __jni_impl::java::util::concurrent::CopyOnWriteArrayList
	{
	public:
		CopyOnWriteArrayList(QAndroidJniObject obj) { __thiz = obj; }
		CopyOnWriteArrayList()
		{
			__constructor();
		}
		CopyOnWriteArrayList(jobjectArray arg0)
		{
			__constructor(
				arg0);
		}
		CopyOnWriteArrayList(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST

