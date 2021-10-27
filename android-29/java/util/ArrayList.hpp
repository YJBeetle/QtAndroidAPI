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
	class ArrayList : public __jni_impl::java::util::AbstractList
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		jboolean add(jobject arg0);
		void add(jint arg0, jobject arg1);
		jboolean addAll(__jni_impl::__JniBaseClass arg0);
		jboolean addAll(jint arg0, __jni_impl::__JniBaseClass arg1);
		void clear();
		jobject clone();
		jboolean contains(jobject arg0);
		void ensureCapacity(jint arg0);
		jboolean equals(jobject arg0);
		void forEach(__jni_impl::__JniBaseClass arg0);
		jobject get(jint arg0);
		jint hashCode();
		jint indexOf(jobject arg0);
		jboolean isEmpty();
		QAndroidJniObject iterator();
		jint lastIndexOf(jobject arg0);
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
		void trimToSize();
	};
} // namespace __jni_impl::java::util

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void ArrayList::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.ArrayList",
			"()V"
		);
	}
	void ArrayList::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.ArrayList",
			"(I)V",
			arg0
		);
	}
	void ArrayList::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.ArrayList",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean ArrayList::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void ArrayList::add(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"add",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	jboolean ArrayList::addAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ArrayList::addAll(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(ILjava/util/Collection;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ArrayList::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject ArrayList::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean ArrayList::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void ArrayList::ensureCapacity(jint arg0)
	{
		__thiz.callMethod<void>(
			"ensureCapacity",
			"(I)V",
			arg0
		);
	}
	jboolean ArrayList::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void ArrayList::forEach(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object()
		);
	}
	jobject ArrayList::get(jint arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint ArrayList::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint ArrayList::indexOf(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jboolean ArrayList::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	QAndroidJniObject ArrayList::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jint ArrayList::lastIndexOf(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	QAndroidJniObject ArrayList::listIterator()
	{
		return __thiz.callObjectMethod(
			"listIterator",
			"()Ljava/util/ListIterator;"
		);
	}
	QAndroidJniObject ArrayList::listIterator(jint arg0)
	{
		return __thiz.callObjectMethod(
			"listIterator",
			"(I)Ljava/util/ListIterator;",
			arg0
		);
	}
	jboolean ArrayList::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject ArrayList::remove(jint arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean ArrayList::removeAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ArrayList::removeIf(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.__jniObject().object()
		);
	}
	void ArrayList::replaceAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/UnaryOperator;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ArrayList::retainAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jobject ArrayList::set(jint arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"set",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jint ArrayList::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	void ArrayList::sort(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"sort",
			"(Ljava/util/Comparator;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ArrayList::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	QAndroidJniObject ArrayList::subList(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"subList",
			"(II)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	jobjectArray ArrayList::toArray()
	{
		return __thiz.callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jobjectArray ArrayList::toArray(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
	void ArrayList::trimToSize()
	{
		__thiz.callMethod<void>(
			"trimToSize",
			"()V"
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class ArrayList : public __jni_impl::java::util::ArrayList
	{
	public:
		ArrayList(QAndroidJniObject obj) { __thiz = obj; }
		ArrayList()
		{
			__constructor();
		}
		ArrayList(jint arg0)
		{
			__constructor(
				arg0);
		}
		ArrayList(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

