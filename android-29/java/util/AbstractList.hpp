#pragma once

#ifndef JAVA_UTIL_ABSTRACTLIST
#define JAVA_UTIL_ABSTRACTLIST

#include "../../__JniBaseClass.hpp"
#include "AbstractCollection.hpp"


namespace __jni_impl::java::util
{
	class AbstractList : public __jni_impl::java::util::AbstractCollection
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void add(jint arg0, jobject arg1);
		jboolean add(jobject arg0);
		jobject remove(jint arg0);
		jobject get(jint arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		jint indexOf(jobject arg0);
		void clear();
		jint lastIndexOf(jobject arg0);
		QAndroidJniObject subList(jint arg0, jint arg1);
		QAndroidJniObject iterator();
		jboolean addAll(jint arg0, __jni_impl::__JniBaseClass arg1);
		jobject set(jint arg0, jobject arg1);
		QAndroidJniObject listIterator();
		QAndroidJniObject listIterator(jint arg0);
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void AbstractList::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.AbstractList",
			"(V)V");
	}
	
	// Methods
	void AbstractList::add(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"add",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	jboolean AbstractList::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject AbstractList::remove(jint arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject AbstractList::get(jint arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean AbstractList::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint AbstractList::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint AbstractList::indexOf(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	void AbstractList::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint AbstractList::lastIndexOf(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	QAndroidJniObject AbstractList::subList(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"subList",
			"(II)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject AbstractList::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean AbstractList::addAll(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(ILjava/util/Collection;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jobject AbstractList::set(jint arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"set",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	QAndroidJniObject AbstractList::listIterator()
	{
		return __thiz.callObjectMethod(
			"listIterator",
			"()Ljava/util/ListIterator;"
		);
	}
	QAndroidJniObject AbstractList::listIterator(jint arg0)
	{
		return __thiz.callObjectMethod(
			"listIterator",
			"(I)Ljava/util/ListIterator;",
			arg0
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class AbstractList : public __jni_impl::java::util::AbstractList
	{
	public:
		AbstractList(QAndroidJniObject obj) { __thiz = obj; }
		AbstractList()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_ABSTRACTLIST

