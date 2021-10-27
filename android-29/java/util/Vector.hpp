#pragma once

#include "../../__JniBaseClass.hpp"
#include "AbstractCollection.hpp"
#include "AbstractList.hpp"

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
	class Vector : public __jni_impl::java::util::AbstractList
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(jint arg0, jint arg1);
		
		// Methods
		jboolean add(jobject arg0);
		void add(jint arg0, jobject arg1);
		jboolean addAll(__jni_impl::__JniBaseClass arg0);
		jboolean addAll(jint arg0, __jni_impl::__JniBaseClass arg1);
		void addElement(jobject arg0);
		jint capacity();
		void clear();
		jobject clone();
		jboolean contains(jobject arg0);
		jboolean containsAll(__jni_impl::__JniBaseClass arg0);
		void copyInto(jobjectArray arg0);
		jobject elementAt(jint arg0);
		QAndroidJniObject elements();
		void ensureCapacity(jint arg0);
		jboolean equals(jobject arg0);
		jobject firstElement();
		void forEach(__jni_impl::__JniBaseClass arg0);
		jobject get(jint arg0);
		jint hashCode();
		jint indexOf(jobject arg0);
		jint indexOf(jobject arg0, jint arg1);
		void insertElementAt(jobject arg0, jint arg1);
		jboolean isEmpty();
		QAndroidJniObject iterator();
		jobject lastElement();
		jint lastIndexOf(jobject arg0);
		jint lastIndexOf(jobject arg0, jint arg1);
		QAndroidJniObject listIterator();
		QAndroidJniObject listIterator(jint arg0);
		jboolean remove(jobject arg0);
		jobject remove(jint arg0);
		jboolean removeAll(__jni_impl::__JniBaseClass arg0);
		void removeAllElements();
		jboolean removeElement(jobject arg0);
		void removeElementAt(jint arg0);
		jboolean removeIf(__jni_impl::__JniBaseClass arg0);
		void replaceAll(__jni_impl::__JniBaseClass arg0);
		jboolean retainAll(__jni_impl::__JniBaseClass arg0);
		jobject set(jint arg0, jobject arg1);
		void setElementAt(jobject arg0, jint arg1);
		void setSize(jint arg0);
		jint size();
		void sort(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject spliterator();
		QAndroidJniObject subList(jint arg0, jint arg1);
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
		jstring toString();
		void trimToSize();
	};
} // namespace __jni_impl::java::util

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void Vector::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Vector",
			"()V"
		);
	}
	void Vector::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Vector",
			"(I)V",
			arg0
		);
	}
	void Vector::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Vector",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	void Vector::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Vector",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jboolean Vector::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void Vector::add(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"add",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	jboolean Vector::addAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Vector::addAll(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(ILjava/util/Collection;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Vector::addElement(jobject arg0)
	{
		__thiz.callMethod<void>(
			"addElement",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jint Vector::capacity()
	{
		return __thiz.callMethod<jint>(
			"capacity",
			"()I"
		);
	}
	void Vector::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject Vector::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean Vector::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean Vector::containsAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	void Vector::copyInto(jobjectArray arg0)
	{
		__thiz.callMethod<void>(
			"copyInto",
			"([Ljava/lang/Object;)V",
			arg0
		);
	}
	jobject Vector::elementAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"elementAt",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	QAndroidJniObject Vector::elements()
	{
		return __thiz.callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	void Vector::ensureCapacity(jint arg0)
	{
		__thiz.callMethod<void>(
			"ensureCapacity",
			"(I)V",
			arg0
		);
	}
	jboolean Vector::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject Vector::firstElement()
	{
		return __thiz.callObjectMethod(
			"firstElement",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void Vector::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object()
		);
	}
	jobject Vector::get(jint arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint Vector::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Vector::indexOf(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint Vector::indexOf(jobject arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;I)I",
			arg0,
			arg1
		);
	}
	void Vector::insertElementAt(jobject arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"insertElementAt",
			"(Ljava/lang/Object;I)V",
			arg0,
			arg1
		);
	}
	jboolean Vector::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	QAndroidJniObject Vector::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jobject Vector::lastElement()
	{
		return __thiz.callObjectMethod(
			"lastElement",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint Vector::lastIndexOf(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint Vector::lastIndexOf(jobject arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/Object;I)I",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Vector::listIterator()
	{
		return __thiz.callObjectMethod(
			"listIterator",
			"()Ljava/util/ListIterator;"
		);
	}
	QAndroidJniObject Vector::listIterator(jint arg0)
	{
		return __thiz.callObjectMethod(
			"listIterator",
			"(I)Ljava/util/ListIterator;",
			arg0
		);
	}
	jboolean Vector::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject Vector::remove(jint arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean Vector::removeAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	void Vector::removeAllElements()
	{
		__thiz.callMethod<void>(
			"removeAllElements",
			"()V"
		);
	}
	jboolean Vector::removeElement(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeElement",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void Vector::removeElementAt(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeElementAt",
			"(I)V",
			arg0
		);
	}
	jboolean Vector::removeIf(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.__jniObject().object()
		);
	}
	void Vector::replaceAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/UnaryOperator;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean Vector::retainAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jobject Vector::set(jint arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"set",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void Vector::setElementAt(jobject arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setElementAt",
			"(Ljava/lang/Object;I)V",
			arg0,
			arg1
		);
	}
	void Vector::setSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSize",
			"(I)V",
			arg0
		);
	}
	jint Vector::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	void Vector::sort(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"sort",
			"(Ljava/util/Comparator;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Vector::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	QAndroidJniObject Vector::subList(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"subList",
			"(II)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	jobjectArray Vector::toArray()
	{
		return __thiz.callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jobjectArray Vector::toArray(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
	jstring Vector::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Vector::trimToSize()
	{
		__thiz.callMethod<void>(
			"trimToSize",
			"()V"
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Vector : public __jni_impl::java::util::Vector
	{
	public:
		Vector(QAndroidJniObject obj) { __thiz = obj; }
		Vector()
		{
			__constructor();
		}
		Vector(jint arg0)
		{
			__constructor(
				arg0);
		}
		Vector(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		Vector(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util

